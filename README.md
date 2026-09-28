# Golden Sun: The Lost Age Recomp

[![Platform](https://img.shields.io/badge/platform-Windows-blue)](#requirements)
[![Language](https://img.shields.io/badge/language-C%2B%2B20-orange)](#how-it-works)
[![License](https://img.shields.io/badge/license-PolyForm--Noncommercial--1.0.0-blue)](LICENSE)

An experimental native Windows recompilation of **Golden Sun: The Lost Age**
(Game Boy Advance, USA/Europe) using [GBARecomp](https://github.com/mstan/gbarecomp).
This repository includes the translated C++ cartridge and BIOS code, the game
specific runtime changes, and a one-command build script. It does **not** include
a ROM image, a BIOS image, game assets, save files, or a compiled executable.

The project is an unofficial, noncommercial fan project. It is not affiliated
with Nintendo or Camelot Software Planning.

## How it works

GBARecomp translates ARM and Thumb instructions from a GBA ROM into C++
functions. This project compiles those functions into a Windows executable and
links them to GBARecomp's CPU and hardware runtime. The generated cartridge
code lives in `src/game/`; the generated BIOS code lives in
`src/generated_bios/`. Neither is merged into the small host entry point.

`scripts/organize_generated.py` groups cartridge functions by operations that
can be observed in the generated code, such as memory reads, writes, transfers,
indirect control flow, software interrupts, and jump tables. Function names use
those categories plus the original ROM address, for example
`gf_memory_transfer_arm_at_08000428`. The address is a location, not a sequence
number. These categories describe CPU behavior; they are **not** claims that
every function's gameplay purpose has been reverse engineered. The original
address and instruction mode remain in `recompiled.h` and the source comments.

The GBA display, sound, timers, DMA, interrupts, cartridge bus, and Flash save
hardware are supplied by the GBARecomp runtime and the local patches here.
The executable uses the Windows GUI subsystem, so normal launch has no console
window. It starts under player control, without prerecorded inputs or a demo.

## Current status

The local Windows build has been exercised through the title and menus, the
opening Venus Lighthouse and forest, the first Ruffian battle, and a 64 KB
Flash save and reload. A 3,000-frame windowed battle run presented every frame
without audio bridge underruns. The real BIOS execution path has reached the
opening narration; normal play currently defaults to the better-tested HLE BIOS
path. Sound quality, later gameplay, and full-game stability still need testing.

This is a playable preview, not a claim that the full game has been verified.
Static dispatch coverage across the entire game has not been measured. Keep a
backup of important saves while testing.

## Required dumps

You need your own legally obtained dumps. The supported cartridge is:

| Field | Required value |
| --- | --- |
| Game | Golden Sun: The Lost Age (USA/Europe) |
| GBA game code | `AGFE` |
| ROM size | 16,777,216 bytes (16 MiB) |
| ROM SHA-1 | `b500663220cb9bf56b9f8e8c0c544f1d6fa3a824` |
| Save hardware | Flash 512 Kbit (64 KiB) |

The GBA BIOS dump must be 16,384 bytes. The BIOS used for local verification has
SHA-1 `300c20df6731a33952ded8c436f7f186d25d3492`. ROM and BIOS paths can be
passed to the build script; neither file is tracked by Git.

## Requirements

- Windows 10 or 11, x86_64
- PowerShell 5.1 or later and Git
- CMake 3.20 or later and Ninja
- MinGW-w64 GCC/G++ with C++20 support
- Python 3 for regenerating the organized cartridge source
- Internet access on the first build to fetch pinned GBARecomp, toml++, and SDL2

The build script fetches dependencies into the ignored `reference/` directory.
If build tools are not on `PATH`, pass `-ToolchainBin`, `-CMakePath`, and
`-NinjaPath` or `-PythonPath` to the script. The published generated C++ is also available for
inspection and for a source-only build with `-SkipGeneration`.

## One-command build and recompile

From the repository root in PowerShell, with your ROM and BIOS in the root:

```powershell
.\scripts\build.ps1
```

For dumps elsewhere, supply explicit paths:

```powershell
.\scripts\build.ps1 -Rom "D:\Games\Golden Sun - The Lost Age.gba" -Bios "D:\Games\gba_bios.bin"
```

The script verifies the ROM SHA-1 and BIOS size, builds GBARecomp's generator,
recompiles both dumps, organizes the cartridge functions in `src/game/`, and
compiles `build\gs2.exe`. It stages `SDL2.dll` beside the executable. The raw
generator output in `src/generated/`, downloaded dependencies, and `build/`
stay local and are ignored by Git. Recompiling the supported ROM should produce
the same organized source that is published in this repository.

To compile the checked-in translated source without rerunning the generator:

```powershell
.\scripts\build.ps1 -Rom "D:\Games\Golden Sun - The Lost Age.gba" -Bios "D:\Games\gba_bios.bin" -SkipGeneration
```

The script still checks your dumps and fetches build dependencies. After those
dependencies are present, the equivalent CMake build is:

```powershell
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build --target gs2 --parallel 2
```

## Running

Double-click `build\gs2.exe`, then choose the ROM and BIOS in the file dialogs
on first launch. From a terminal you can also give their paths explicitly:

```powershell
.\build\gs2.exe --rom "D:\Games\Golden Sun - The Lost Age.gba" --bios "D:\Games\gba_bios.bin"
```

The default launch uses windowed display and BIOS HLE. It does not press keys
automatically or write coverage JSON, diagnostic text, BMP images, or input
recordings. Normal game saves may create a `.sav` file beside the ROM. Diagnostic
captures are available only through explicit development options.

### Controls

| GBA control | Default keyboard key |
| --- | --- |
| D-pad | Arrow keys |
| A / B | X / Z |
| Start / Select | Enter / Right Shift |
| L / R | C / V |
| Quit | Escape |

## Project layout

```text
GoldenSunTheLostAgeRecomp/
├── CMakeLists.txt                 Windows GUI executable and runtime linkage
├── LICENSE                        PolyForm Noncommercial 1.0.0
├── README.md                      Build, use, and project status
├── THIRD_PARTY_NOTICES.md         Dependency and rights notices
├── scripts/
│   ├── build.ps1                  Dependency setup, recompilation, and build
│   └── organize_generated.py      Deterministic cart function organizer
└── src/
    ├── runtime/main.cpp           Interactive Windows entry point
    ├── patches/                  GBARecomp integration and Flash fixes
    │   ├── gba_save.cpp
    │   ├── interpreter.cpp
    │   ├── runtime.cpp
    │   └── runtime_arm_default_aborts.cpp
    ├── game/                     Published cartridge C++ (17,041 functions)
    │   ├── boot_vectors.cpp
    │   ├── hardware_and_video_access.cpp
    │   ├── software_interrupts.cpp
    │   ├── jump_table_entries.cpp
    │   ├── memory_reads_arm.cpp / memory_reads_thumb.cpp
    │   ├── memory_writes_arm.cpp / memory_writes_thumb.cpp
    │   ├── memory_transfer_arm.cpp / memory_transfer_thumb.cpp
    │   ├── indirect_control_flow_arm.cpp / indirect_control_flow_thumb.cpp
    │   ├── recompiled.h           Function declarations and ROM addresses
    │   ├── dispatch_table.cpp     Static address-to-function dispatch
    │   ├── symbol_map.cpp         Debug symbol lookup
    │   └── modules.h              Generated module index
    └── generated_bios/           Published translated BIOS C++ (666 functions)
```

The local ROM, BIOS, save data, `AGENT_PROMPT.md`, build products, generator raw
output, and downloaded dependencies are excluded by `.gitignore`.

## Reproducibility and limitations

The script pins GBARecomp and toml++ revisions and uses SDL2 2.32.10. The
generated C++ is ROM-version-specific; other regional revisions may not match
the addresses or behavior here. The organizer checks that every declaration has
exactly one function body before writing the modules. New game-level semantic
names should be added only after tracing or matching the corresponding routine.

## License and credits

Original project code is offered under the
[PolyForm Noncommercial License 1.0.0](LICENSE). See
[THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md) for GBARecomp, toml++, SDL2,
and rights information. The translated cartridge and BIOS code was derived from
copyrighted game and BIOS binaries; the project license does not grant rights
to Nintendo's or Camelot's underlying works. No ROM, BIOS image, or extracted
game assets are distributed here.
