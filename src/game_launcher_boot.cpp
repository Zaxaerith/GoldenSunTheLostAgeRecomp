// Golden Sun: The Lost Age (USA/Europe, AGFE) — launcher seam & input validation.
#include "launcher_seam.h"
#include "sha1.h"

int game_launcher_preboot(std::vector<std::string>& args, const gbarecomp::RunOptions& options) {
    return gbarecomp_launcher_preboot(args, options);
}

// Validates ROM and BIOS inputs according to GS2 requirements.
// Default execution uses HLE BIOS (--bios-hle) while still verifying retail BIOS identity.
int game_validate_inputs(std::vector<std::string>& args, const gbarecomp::RunOptions& options) {
    std::string path, rom_path;
    bool explicit_lle = false;

    for (std::size_t i = 1; i < args.size(); ++i) {
        if (args[i] == "--help" || args[i] == "-h") return 0;
        if (args[i] == "--bios" && i + 1 < args.size()) path = args[++i];
        else if (args[i] == "--rom" && i + 1 < args.size()) rom_path = args[++i];
        else if (args[i] == "--no-bios-hle" || args[i] == "--experimental-lle") explicit_lle = true;
    }

    const std::string dir = gbarecomp_seam::exe_dir(args);
    const std::filesystem::path exe_dir_path(dir);

    if (path.empty()) {
        path = gbarecomp_seam::read_single_line((exe_dir_path / "bios.cfg").string());
    }
    if (path.empty()) {
        // Also check if gba_bios.bin is beside the executable
        if (std::filesystem::exists(exe_dir_path / "gba_bios.bin")) {
            path = (exe_dir_path / "gba_bios.bin").string();
        }
    }
    if (path.empty()) {
        std::fprintf(stderr, "[gs2] Retail BIOS required: select it in the launcher or pass --bios.\n");
        return 1;
    }

    gba::GbaBios bios;
    std::string error;
    if (!bios.load_from_file(path, gba::GbaBios::kExpectedSha1, &error)) {
        std::fprintf(stderr, "[gs2] BIOS identity rejected: %s\n", error.c_str());
        return 1;
    }

    if (rom_path.empty()) {
        rom_path = gbarecomp_seam::read_single_line((exe_dir_path / "rom.cfg").string());
    }
    if (rom_path.empty()) {
        std::fprintf(stderr, "[gs2] ROM required: select it in the launcher or pass --rom.\n");
        return 1;
    }

    std::ifstream rom(rom_path, std::ios::binary | std::ios::ate);
    constexpr std::size_t kGs2RomSize = 16777216; // 16 MiB
    if (!rom || static_cast<std::size_t>(rom.tellg()) != kGs2RomSize) {
        std::fprintf(stderr, "[gs2] Expected the 16 MiB USA/Europe AGFE ROM; select it in the launcher or pass --rom.\n");
        return 1;
    }

    std::vector<std::uint8_t> bytes(kGs2RomSize);
    rom.seekg(0);
    rom.read(reinterpret_cast<char*>(bytes.data()), bytes.size());
    if (!rom || bytes.size() < 0xAC + 4) {
        std::fprintf(stderr, "[gs2] Failed reading ROM header.\n");
        return 1;
    }

    // Verify game code 'AGFE' at offset 0xAC
    if (std::memcmp(&bytes[0xAC], "AGFE", 4) != 0) {
        std::fprintf(stderr, "[gs2] Game code mismatch at 0xAC; expected 'AGFE'.\n");
        return 1;
    }

    // Verify SHA-1 hash against options.builtin_rom_sha1
    const std::string computed_sha1 = gba::sha1(bytes.data(), bytes.size()).hex();
    if (computed_sha1 != options.builtin_rom_sha1) {
        std::fprintf(stderr, "[gs2] ROM SHA-1 mismatch; expected %s, got %s.\n",
                     options.builtin_rom_sha1, computed_sha1.c_str());
        return 1;
    }

    // Validate before the runtime can persist an explicit invalid path.
    args.emplace_back("--rom");
    args.emplace_back(rom_path);
    args.emplace_back("--bios");
    args.emplace_back(path);
    // An explicit CLI/config hash cannot weaken this cartridge's identity gate.
    args.emplace_back("--rom-sha1");
    args.emplace_back(options.builtin_rom_sha1);

    // GS2 requirement: preserve HLE as default unless explicitly requested.
    // Check config.ini for experimental_lle setting if not set on CLI.
    if (!explicit_lle) {
        const std::string config_path = (exe_dir_path / "config.ini").string();
        std::ifstream cfg_in(config_path);
        if (cfg_in) {
            std::string line;
            bool in_launcher = false;
            while (std::getline(cfg_in, line)) {
                auto b = line.find_first_not_of(" \t\r\n");
                if (b == std::string::npos || line[b] == ';' || line[b] == '#') continue;
                if (line[b] == '[') {
                    in_launcher = (line.find("[Launcher]") != std::string::npos);
                    continue;
                }
                if (in_launcher) {
                    if (line.find("experimental_lle") != std::string::npos &&
                        line.find("= 1") != std::string::npos) {
                        explicit_lle = true;
                    }
                }
            }
        }
    }

    bool has_hle_flag = false;
    for (const auto& a : args) {
        if (a == "--bios-hle" || a == "--no-bios-hle") {
            has_hle_flag = true;
            break;
        }
    }
    if (!has_hle_flag) {
        if (explicit_lle) {
            std::printf("[gs2] Using EXPERIMENTAL retail BIOS LLE execution mode.\n");
            args.emplace_back("--no-bios-hle");
        } else {
            args.emplace_back("--bios-hle");
        }
    }

    return 0;
}
