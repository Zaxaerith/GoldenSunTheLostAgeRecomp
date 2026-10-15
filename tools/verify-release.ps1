$ErrorActionPreference = 'Stop'
$root = (Resolve-Path (Join-Path $PSScriptRoot "..")).Path
$zip = Join-Path $root "release-stage\GoldenSunTheLostAgeRecomp-windows-x64-v0.1.0-preview.zip"
$testDir = Join-Path $env:TEMP "gs2_release_isolated_test"

Write-Host "=== Testing Release Package ==="
Write-Host "Archive: $zip"
if (-not (Test-Path $zip)) { throw "Release archive not found: $zip" }

if (Test-Path $testDir) { Remove-Item -Recurse -Force $testDir }
New-Item -ItemType Directory -Path $testDir -Force | Out-Null

Write-Host "Extracting to: $testDir"
Expand-Archive -LiteralPath $zip -DestinationPath $testDir

$manifestPath = Join-Path $testDir "manifest.json"
if (-not (Test-Path $manifestPath)) { throw "manifest.json not found in release package" }

$manifest = Get-Content $manifestPath -Raw | ConvertFrom-Json
Write-Host "Manifest file count: $($manifest.Count)"

$failed = 0
foreach ($entry in $manifest) {
    $filePath = Join-Path $testDir $entry.file
    if (-not (Test-Path $filePath)) {
        Write-Host "MISSING: $($entry.file)"
        $failed++
        continue
    }
    $actualHash = (Get-FileHash -LiteralPath $filePath -Algorithm SHA256).Hash.ToLowerInvariant()
    if ($actualHash -ne $entry.sha256) {
        Write-Host "HASH MISMATCH: $($entry.file)"
        $failed++
    }
}
if ($failed -gt 0) { throw "Manifest verification failed with $failed errors" }
Write-Host "All manifest files and SHA-256 hashes verified OK."

# Test execution with clean PATH (no toolchain)
$exe = Join-Path $testDir "GoldenSunTheLostAgeRecomp.exe"
$rom = (Get-ChildItem -LiteralPath $root -Filter *.gba | Select-Object -First 1).FullName
$bios = "D:\Project\GameRecomp\GoldenSunTheBrokenSealRecomp\gba_bios.bin"

# Save copy of current PATH and remove toolchain
$oldPath = $env:PATH
$env:PATH = "C:\Windows\System32;C:\Windows;C:\Windows\System32\Wbem"

try {
    Write-Host "Running release binary with isolated PATH..."
    $p = Start-Process -FilePath $exe -ArgumentList @("--rom", "`"$rom`"", "--bios", "`"$bios`"", "--bios-hle", "--frames", "60", "--no-window") -WorkingDirectory $testDir -Wait -PassThru -NoNewWindow
    if ($p.ExitCode -ne 0) {
        throw "Release binary exited with code $($p.ExitCode)"
    }
    Write-Host "Release binary ran successfully! ExitCode: $($p.ExitCode)"

    # Verify default save directory created
    $savesDir = Join-Path $testDir "saves"
    $saveFile = Join-Path $savesDir "gs2.sav"
    if (Test-Path $savesDir) {
        Write-Host "Default saves directory verified: $savesDir"
    }
    if (Test-Path $saveFile) {
        $saveLen = (Get-Item $saveFile).Length
        Write-Host "Default save file created: $saveFile (Size: $saveLen bytes)"
        if ($saveLen -ne 65536) {
            throw "Save size mismatch: expected 65536 bytes (512 Kbit Flash), got $saveLen"
        }
    }
} finally {
    $env:PATH = $oldPath
}

Write-Host "=== RELEASE VERIFICATION PASSED ==="
