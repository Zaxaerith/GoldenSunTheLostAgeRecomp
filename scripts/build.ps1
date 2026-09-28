param(
    [string]$Rom,
    [string]$Bios,
    [string]$ToolchainBin,
    [string]$CMakePath,
    [string]$NinjaPath,
    [switch]$SkipGeneration
)

$ErrorActionPreference = 'Stop'
$root = (Resolve-Path -LiteralPath (Join-Path $PSScriptRoot '..')).Path
$reference = Join-Path $root 'reference'
$framework = Join-Path $reference 'gbarecomp'
$toml = Join-Path $reference 'tomlplusplus'
$sdlRoot = Join-Path $reference 'sdl2'
$sdlDev = Join-Path $sdlRoot 'SDL2-2.32.10\x86_64-w64-mingw32'
$build = Join-Path $root 'build'

function Require-Tool([string]$explicit, [string]$name) {
    if ($explicit) {
        if (-not (Test-Path -LiteralPath $explicit -PathType Leaf)) {
            throw "Tool not found: $explicit"
        }
        return (Resolve-Path -LiteralPath $explicit).Path
    }
    $command = Get-Command $name -ErrorAction SilentlyContinue
    if (-not $command) { throw "Install $name or pass its path to this script." }
    return $command.Source
}

function Check-Exit([string]$description) {
    if ($LASTEXITCODE -ne 0) { throw "$description failed with exit code $LASTEXITCODE" }
}

function Ensure-Checkout([string]$path, [string]$url, [string]$commit) {
    if (Test-Path -LiteralPath (Join-Path $path 'CMakeLists.txt')) { return }
    if (Test-Path -LiteralPath $path) {
        throw "Incomplete dependency checkout: $path"
    }
    & git clone --filter=blob:none $url $path
    Check-Exit 'git clone'
    & git -C $path checkout --detach $commit
    Check-Exit 'git checkout'
}

New-Item -ItemType Directory -Path $reference,$build -Force | Out-Null
Ensure-Checkout $framework 'https://github.com/mstan/gbarecomp.git' `
    '52533aafeac7dfc9e5a67346528ed09279c14abd'
Ensure-Checkout $toml 'https://github.com/marzer/tomlplusplus.git' `
    '30172438cee64926dc41fdd9c11fb3ba5b2ba9de'

if (-not (Test-Path -LiteralPath (Join-Path $sdlDev 'lib\libSDL2.dll.a'))) {
    $archive = Join-Path $build 'SDL2-devel-2.32.10-mingw.zip'
    New-Item -ItemType Directory -Path $sdlRoot -Force | Out-Null
    Invoke-WebRequest 'https://www.libsdl.org/release/SDL2-devel-2.32.10-mingw.zip' `
        -OutFile $archive
    Expand-Archive -LiteralPath $archive -DestinationPath $sdlRoot -Force
    Remove-Item -LiteralPath $archive
}

if (-not $Rom) {
    $roms = @(Get-ChildItem -LiteralPath $root -Filter '*.gba' -File)
    if ($roms.Count -ne 1) {
        throw 'Place exactly one legally dumped .gba ROM in the project root, or pass -Rom.'
    }
    $Rom = $roms[0].FullName
}
if (-not $Bios) {
    $Bios = Join-Path $root 'gba_bios.bin'
}
if (-not (Test-Path -LiteralPath $Rom -PathType Leaf)) { throw "ROM not found: $Rom" }
if (-not (Test-Path -LiteralPath $Bios -PathType Leaf)) { throw "BIOS not found: $Bios" }
$Rom = (Resolve-Path -LiteralPath $Rom).Path
$Bios = (Resolve-Path -LiteralPath $Bios).Path
$romHash = (Get-FileHash -LiteralPath $Rom -Algorithm SHA1).Hash.ToLowerInvariant()
if ($romHash -ne 'b500663220cb9bf56b9f8e8c0c544f1d6fa3a824') {
    throw 'Unsupported ROM revision. This project requires SHA-1 b500663220cb9bf56b9f8e8c0c544f1d6fa3a824.'
}
if ((Get-Item -LiteralPath $Bios).Length -ne 16384) {
    throw 'The GBA BIOS dump must be 16,384 bytes.'
}

$cmake = Require-Tool $CMakePath 'cmake.exe'
$ninja = Require-Tool $NinjaPath 'ninja.exe'
if ($ToolchainBin) {
    $gcc = Require-Tool (Join-Path $ToolchainBin 'gcc.exe') 'gcc.exe'
    $gxx = Require-Tool (Join-Path $ToolchainBin 'g++.exe') 'g++.exe'
} else {
    $gcc = Require-Tool '' 'gcc.exe'
    $gxx = Require-Tool '' 'g++.exe'
}
$mingwRoot = (Split-Path -Parent (Split-Path -Parent $gxx)).Replace('\','/')
$cmakeCommon = @(
    '-G', 'Ninja',
    "-DCMAKE_MAKE_PROGRAM=$($ninja.Replace('\','/'))",
    "-DCMAKE_C_COMPILER=$($gcc.Replace('\','/'))",
    "-DCMAKE_CXX_COMPILER=$($gxx.Replace('\','/'))",
    "-DGBARECOMP_MINGW_PREFIX_UNIX=$mingwRoot",
    "-DGBARECOMP_TOMLPP_INCLUDE_DIR=$((Join-Path $toml 'include\toml++').Replace('\','/'))",
    '-DCMAKE_BUILD_TYPE=Release'
)

if (-not $SkipGeneration) {
    $generatorBuild = Join-Path $build 'generator'
    & $cmake -S $framework -B $generatorBuild @cmakeCommon
    Check-Exit 'Configure generator'
    & $cmake --build $generatorBuild --target gba_recompile --parallel 2
    Check-Exit 'Build generator'
    $generator = Join-Path $generatorBuild 'gba_recompile.exe'
    if (-not (Test-Path -LiteralPath $generator)) { throw "Generator not found: $generator" }
    $cartOut = Join-Path $root 'src\generated'
    $biosOut = Join-Path $root 'src\generated_bios'
    New-Item -ItemType Directory -Path $cartOut,$biosOut -Force | Out-Null
    & $generator --rom $Rom --out $cartOut
    Check-Exit 'Recompile ROM'
    & $generator --bios $Bios --out $biosOut
    Check-Exit 'Recompile BIOS'
}

& $cmake -S $root -B $build @cmakeCommon
Check-Exit 'Configure game'
& $cmake --build $build --target gs2 --parallel 2
Check-Exit 'Build game'
Write-Host "Built $(Join-Path $build 'gs2.exe')"
