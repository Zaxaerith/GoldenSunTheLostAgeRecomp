# Golden Sun: The Lost Age Recomp

An experimental, noncommercial Windows recompilation of *Golden Sun: The Lost
Age* using [GBARecomp](https://github.com/mstan/gbarecomp). The game ROM, GBA
BIOS, generated ROM-derived C++, save files, and compiled executable are **not**
included. You must provide your own legally obtained dumps.

## Status

The local Windows build boots, reaches the title and menus, plays through the
opening lighthouse and forest, completes the first Ruffian battle, and can save
and reload the game through its 64 KB Flash save. A 3,000-frame windowed battle
test presented every frame with no audio bridge underruns. Sound quality and
full-game stability still need testing. The real BIOS route has reached the
opening narration; normal play uses the more-tested HLE BIOS path.

This is an early preview, not a complete gameplay compatibility claim. Back up
important saves before testing.

## Build from your own ROM

You need Windows x64, PowerShell, Git, CMake 3.20+, Ninja, and MinGW-w64 GCC
with C++20 support. The script downloads pinned GBARecomp, toml++, and SDL2
dependencies into an ignored local `reference/` directory.

1. Put your dumped 16 MB `.gba` ROM in the project root and `gba_bios.bin` in
   the same directory. The supported ROM SHA-1 is
   `b500663220cb9bf56b9f8e8c0c544f1d6fa3a824` (game code `AGFE`).
2. In PowerShell, run `./scripts/build.ps1` from the project root. If the
   tools are not on `PATH`, pass `-ToolchainBin`, `-CMakePath`, and `-NinjaPath`.
   You can also pass `-Rom` and `-Bios` to use dumps stored elsewhere.
3. Double-click `build/gs2.exe`. On first run, select your ROM and GBA BIOS in
   the file dialogs. The game does not replay inputs or start a demo for you.

The single build script compiles the generator, recompiles your ROM and BIOS
into ignored `src/generated/` and `src/generated_bios/`, then builds the game.
The executable and SDL2 DLL remain in ignored `build/`. No ROM-derived source
or binary is uploaded from this repository.

## Controls

| GBA button | Default keyboard key |
| --- | --- |
| D-pad | Arrow keys |
| A / B | X / Z |
| Start / Select | Enter / Right Shift |
| L / R | C / V |

Escape closes the window. Normal play can write the game's `.sav` file next
to your ROM. It does not write coverage JSON, diagnostic text, BMP, screenshots,
or automatic input files. Diagnostic captures require an explicit development
opt-in.

## Source layout

- `src/runtime/`: game entry point and interactive launch defaults.
- `src/patches/`: game-specific runtime, interpreter, Flash, and dispatch fixes.
- `src/generated/` and `src/generated_bios/`: local output from the user's own
  dumps, ignored by Git.
- `scripts/build.ps1`: one-command dependency setup, recompilation, and build.

Hand-written code is split by purpose. GBARecomp emits eight separate cart
shards instead of one large `main.cpp`. It uses verified function names when
symbols are available and original ROM addresses for as-yet-unidentified
functions; address labels preserve traceability without inventing semantics.

## License and legal

Project code is licensed under [PolyForm Noncommercial 1.0.0](LICENSE).
Third-party credits are in [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
This unofficial project is not affiliated with or endorsed by Nintendo or
Camelot. Their game assets and trademarks remain theirs. Do not upload a ROM,
BIOS, generated source, save, or build output when sharing this repository.
