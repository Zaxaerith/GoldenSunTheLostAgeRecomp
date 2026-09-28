#include "runtime.h"

#include <cstdlib>
#include <cstring>
#include <initializer_list>
#include <vector>

#ifdef _WIN32
#include <windows.h>
#endif

namespace {

bool has_argument(int argc, char** argv, const char* wanted) {
    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], wanted) == 0) return true;
    }
    return false;
}

void set_default_environment(const char* name, const char* value) {
#ifdef _WIN32
    // GBARecomp reads std::getenv() from the CRT environment. Updating only
    // Win32's process block does not update that copy under MinGW.
    if (!std::getenv(name)) _putenv_s(name, value);
#else
    if (!std::getenv(name)) setenv(name, value, 0);
#endif
}

}  // namespace

int main(int argc, char** argv) {
    // A normal double-click starts an interactive game. Automated key replay
    // remains available only when a developer explicitly enables test input.
#ifdef _WIN32
    const char* test_input = std::getenv("GBARECOMP_ENABLE_TEST_INPUT");
    if (!test_input || std::strcmp(test_input, "1") != 0) {
        _putenv_s("GBARECOMP_INPUT_REPLAY", "");
    }
    const char* debug_dumps = std::getenv("GBARECOMP_DEBUG_DUMPS");
    if (!debug_dumps || std::strcmp(debug_dumps, "1") != 0) {
        for (const char* name : {"GBARECOMP_INPUT_RECORD",
                                 "GBARECOMP_DUMP_STATE",
                                 "GBARECOMP_AUDIO_WAV",
                                 "GBARECOMP_FP_SAVE",
                                 "GBARECOMP_IRQ_LOG",
                                 "GBARECOMP_SWI_LOG",
                                 "GBARECOMP_IWRAM_DUMP",
                                 "GBARECOMP_FRAME_PHASE"}) {
            _putenv_s(name, "");
        }
    }
#endif
    set_default_environment("GBARECOMP_SELFHEAL_RECOMPILE", "0");
    set_default_environment("GBARECOMP_PRESENT_IN_PLACE", "0");
    set_default_environment("GBARECOMP_HANG_WATCHDOG", "0");

    std::vector<char*> launch_args(argv, argv + argc);
    static char window_arg[] = "--window";
    static char hle_arg[] = "--bios-hle";
    if (!has_argument(argc, argv, "--window") &&
        !has_argument(argc, argv, "--no-window")) {
        launch_args.push_back(window_arg);
    }
    if (!has_argument(argc, argv, "--bios-hle") &&
        !has_argument(argc, argv, "--no-bios-hle")) {
        launch_args.push_back(hle_arg);
    }
    launch_args.push_back(nullptr);

    gbarecomp::RunOptions options{};
    options.builtin_game_name = "Golden Sun: The Lost Age";
    options.builtin_rom_sha1 = "b500663220cb9bf56b9f8e8c0c544f1d6fa3a824";
    options.builtin_rom_crc32 = 0x606a1c4d;
    const int result = gbarecomp::run_game(
        static_cast<int>(launch_args.size() - 1), launch_args.data(), options);
#ifdef _WIN32
    if (result != 0 && !has_argument(argc, argv, "--no-window")) {
        MessageBoxA(nullptr,
            "The game could not start. Check your ROM and GBA BIOS dumps.",
            "Golden Sun: The Lost Age Recomp", MB_OK | MB_ICONERROR);
    }
#endif
    return result;
}
