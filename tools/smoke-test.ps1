$ErrorActionPreference = "Stop"
$root = (Resolve-Path (Join-Path $PSScriptRoot "..")).Path
$exe = Join-Path $root "build\host\GoldenSunTheLostAgeRecomp.exe"
$rom = (Get-ChildItem -LiteralPath $root -Filter *.gba | Select-Object -First 1).FullName
$bios = "D:\Project\GameRecomp\GoldenSunTheBrokenSealRecomp\gba_bios.bin"
$tempSave = Join-Path $env:TEMP "gs2_smoke_test.sav"

Write-Host "Running smoke test on: $exe"
Write-Host "ROM: $rom"
Write-Host "BIOS: $bios"

$p = Start-Process -FilePath $exe -ArgumentList @("--rom", "`"$rom`"", "--bios", "`"$bios`"", "--bios-hle", "--frames", "120", "--no-window", "--save-path", "`"$tempSave`"") -Wait -PassThru -NoNewWindow
if ($p.ExitCode -ne 0) {
    throw "Smoke test failed with exit code $($p.ExitCode)"
}
Write-Host "Smoke test PASSED with exit code $($p.ExitCode)"
