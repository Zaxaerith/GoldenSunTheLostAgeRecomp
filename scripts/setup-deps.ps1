# Recover pinned framework source, launcher UI, and the preserved GS2 compatibility changes.
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$framework = Join-Path $root 'reference/gbarecomp'
$commit = 'd11a36261aa1d9587a225760135d0ddea0f97344'
$armCommit = 'e372f84549b47122affa0816f9e831aa2f2bcd92'
$recompUiCommit = '6374aae201b930c97425718249f5d39b2275ca13'
$tomlCommit = '30172438cee64926dc41fdd9c11fb3ba5b2ba9de'

function Check-Exit([string]$action) {
    if ($LASTEXITCODE -ne 0) { throw "$action failed (exit $LASTEXITCODE)." }
}

$siblingGs1 = Join-Path (Split-Path -Parent $root) 'GoldenSunTheBrokenSealRecomp'

if (-not (Test-Path -LiteralPath $framework)) {
    New-Item -ItemType Directory -Path (Split-Path -Parent $framework) -Force | Out-Null
    if (Test-Path -LiteralPath (Join-Path $siblingGs1 'reference/gbarecomp/CMakeLists.txt')) {
        Copy-Item -Recurse -Force (Join-Path $siblingGs1 'reference/gbarecomp') $framework
    } else {
        git clone https://github.com/mstan/gbarecomp.git $framework
        Check-Exit 'Framework clone'
        git -C $framework checkout --detach $commit
        Check-Exit 'Framework pin'
        git -C $framework submodule update --init --recursive external/arm-recomp-core
        Check-Exit 'ARM dependency setup'
        $arm = Join-Path $framework 'external/arm-recomp-core'
        git -C $arm fetch origin $armCommit
        Check-Exit 'ARM pinned commit fetch'
        git -C $arm checkout --detach $armCommit
        Check-Exit 'ARM pin'
        if (Test-Path (Join-Path $root 'patches/gbarecomp-gs1-compat.patch')) {
            git -C $framework apply (Join-Path $root 'patches/gbarecomp-gs1-compat.patch')
            Check-Exit 'GS2 compatibility patch'
        }
    }
}

$actual = (& git -C $framework rev-parse HEAD).Trim()
Check-Exit 'Framework revision check'
if ($actual -ne $commit) { throw "Framework must be pinned to $commit." }

# Initialize recomp-ui submodule
$recompUiDir = Join-Path $root 'recomp-ui'
if (-not (Test-Path (Join-Path $recompUiDir 'recomp_ui.cmake'))) {
    if (Test-Path -LiteralPath (Join-Path $siblingGs1 'recomp-ui/recomp_ui.cmake')) {
        Copy-Item -Recurse -Force (Join-Path $siblingGs1 'recomp-ui') $recompUiDir
    } else {
        git -C $root submodule update --init --recursive recomp-ui
        Check-Exit 'recomp-ui submodule setup'
        git -C $recompUiDir checkout --detach $recompUiCommit
    }
}

# Initialize pinned toml++ dependency
$tomlDir = Join-Path $root '.deps/tomlplusplus'
if (-not (Test-Path (Join-Path $tomlDir 'toml.hpp'))) {
    New-Item -ItemType Directory -Path (Split-Path -Parent $tomlDir) -Force | Out-Null
    if (Test-Path -LiteralPath (Join-Path $siblingGs1 '.deps/tomlplusplus/toml.hpp')) {
        Copy-Item -Recurse -Force (Join-Path $siblingGs1 '.deps/tomlplusplus') $tomlDir
    } else {
        if (-not (Test-Path (Join-Path $tomlDir '.git'))) {
            git clone https://github.com/marzer/tomlplusplus.git $tomlDir
            Check-Exit 'toml++ clone'
        }
        git -C $tomlDir checkout --detach $tomlCommit
        Check-Exit 'toml++ pin'
    }
}

Write-Host 'Dependencies restored. Pinned framework, recomp-ui, and toml++ verified.' -ForegroundColor Green
