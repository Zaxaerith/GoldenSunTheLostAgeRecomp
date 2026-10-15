# verify.ps1 — re-run the non-blocking regression checks for GoldenSunTheLostAgeRecomp.
# Naming/opening input is intentionally NOT in this set (known blocker).
param(
    [string]$ToolchainBin = "C:\MYAPPLY\mingw64\bin",
    [string]$Bios = "D:\Project\GameRecomp\gbarecomp-cli-windows-x86_64\gbabios\gba_bios.bin"
)
$ErrorActionPreference = "Stop"
$root = (Resolve-Path (Join-Path $PSScriptRoot "..")).Path
$exe = Join-Path $root "build\gs2.exe"
$rom = (Get-ChildItem -LiteralPath $root -Filter *.gba | Select-Object -First 1).FullName
$test = Join-Path $root "docs\verify"
New-Item -ItemType Directory -Path $test -Force | Out-Null

function Run-Case([string]$name, [string[]]$extra, [hashtable]$env) {
    foreach ($k in $env.Keys) { Set-Item -Path "Env:$($k)" -Value $env[$k] }
    Write-Host "=== $name ==="
    & $exe --rom $rom --bios $Bios --no-window @extra
    if ($null -ne $LASTEXITCODE -and $LASTEXITCODE -ne 0) { throw "$name failed with exit $LASTEXITCODE" }
    Write-Host "$name OK"
}

# Baseline HLE boot
Run-Case "HLE-600" @("--bios-hle","--frames","600","--dump-png",(Join-Path $test "reg_hle600.png")) @{
    GBARECOMP_ENABLE_TEST_INPUT="0"; GBARECOMP_DEBUG_DUMPS="1"; GBARECOMP_INPUT_REPLAY="";
    GBARECOMP_DUMP_STATE=""; GBARECOMP_AUDIO_WAV=""; GBARECOMP_HANG_WATCHDOG="0"
}

# LLE boot
Run-Case "LLE-2500" @("--no-bios-hle","--frames","2500","--dump-png",(Join-Path $test "reg_lle2500.png")) @{
    GBARECOMP_ENABLE_TEST_INPUT="0"; GBARECOMP_DEBUG_DUMPS="1"; GBARECOMP_INPUT_REPLAY="";
    GBARECOMP_DUMP_STATE=""; GBARECOMP_AUDIO_WAV=""; GBARECOMP_HANG_WATCHDOG="0"
}

# Audio capture (HLE)
Run-Case "AUDIO-2000" @("--bios-hle","--frames","2000") @{
    GBARECOMP_ENABLE_TEST_INPUT="0"; GBARECOMP_DEBUG_DUMPS="1"; GBARECOMP_INPUT_REPLAY="";
    GBARECOMP_DUMP_STATE=""; GBARECOMP_AUDIO_WAV=(Join-Path $test "reg_audio.wav"); GBARECOMP_HANG_WATCHDOG="0"
}

Write-Host "All regression cases passed."
