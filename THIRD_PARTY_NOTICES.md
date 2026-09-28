# Third-party notices

The project-local files in `src/patches/` are adaptations of source files from
[mstan/gbarecomp](https://github.com/mstan/gbarecomp), copyright © 2026 Matthew Stan,
licensed under PolyForm Noncommercial 1.0.0. The build script fetches a pinned
revision of that project. Its own copyright and license notices remain in the
downloaded source.

The build script also fetches [toml++](https://github.com/marzer/tomlplusplus)
and the [SDL2 development package](https://www.libsdl.org/release/) for local
compilation. These third-party dependencies retain their own licenses. They are
not included in this repository.

Nintendo and Camelot own the game, characters, graphics, music, ROM, and BIOS
content. The C++ under `src/game/` and `src/generated_bios/` is mechanically
translated from user-supplied ROM and BIOS dumps. The original ROM and BIOS
images are not included. PolyForm Noncommercial covers the project's own code;
it does not grant rights to the underlying game or BIOS. Users must supply
their own dumps to build and run the game.
