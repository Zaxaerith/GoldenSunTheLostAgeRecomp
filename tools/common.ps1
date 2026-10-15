$ErrorActionPreference = 'Stop'
$ProjectRoot = Split-Path -Parent $PSScriptRoot
$DefaultRom = Join-Path $ProjectRoot 'Golden Sun - The Lost Age(UE)(Nintendo)(128Mb).gba'
$DefaultBios = Join-Path $ProjectRoot 'gba_bios.bin'
if (-not (Test-Path -LiteralPath $DefaultBios)) {
    $altBios = Join-Path (Split-Path -Parent $ProjectRoot) 'gbarecomp-cli-windows-x86_64\gbabios\gba_bios.bin'
    if (Test-Path -LiteralPath $altBios) { $DefaultBios = $altBios }
}
function Assert-Rom([string]$Path) {
    $resolved = (Resolve-Path -LiteralPath $Path).Path
    $bytes = [IO.File]::ReadAllBytes($resolved)
    if ($bytes.Length -ne 16777216 -or
        [Text.Encoding]::ASCII.GetString($bytes,0xAC,4) -ne 'AGFE' -or
        (Get-FileHash -LiteralPath $resolved -Algorithm SHA1).Hash.ToLower() -ne 'b500663220cb9bf56b9f8e8c0c544f1d6fa3a824') {
        throw 'Expected Golden Sun: The Lost Age USA/Europe AGFE ROM (16 MiB), SHA1 b500663220cb9bf56b9f8e8c0c544f1d6fa3a824.'
    }
}
function Assert-Bios([string]$Path) {
    $resolved = (Resolve-Path -LiteralPath $Path).Path
    if ((Get-Item -LiteralPath $resolved).Length -ne 16384 -or
        (Get-FileHash -LiteralPath $resolved -Algorithm SHA1).Hash.ToLower() -ne '300c20df6731a33952ded8c436f7f186d25d3492') {
        throw 'Expected user-supplied 16 KiB GBA BIOS, SHA1 300c20df6731a33952ded8c436f7f186d25d3492.'
    }
}
function Invoke-Logged([string]$Program, [string[]]$Arguments, [string]$Log) {
    $ErrorActionPreference = 'Continue'
    & $Program @Arguments *> $Log
    $code = $LASTEXITCODE
    $ErrorActionPreference = 'Stop'
    if ($code -ne 0) { Get-Content -LiteralPath $Log -Tail 35; throw "$Program exited $code; see $Log" }
}
