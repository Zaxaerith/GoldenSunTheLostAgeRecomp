#!/usr/bin/env python3
"""Organize gba_recompile cart output by operations visible in each function.

The categories describe generated CPU/hardware operations, not guessed game
subsystems. Original ROM addresses remain part of every generated identifier.
"""

from __future__ import annotations

import argparse
import re
from collections import defaultdict
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
HEADER = re.compile(r"(?m)^void (gf_\w+)\(void\);\s*/\* (0x[0-9A-Fa-f]+) (arm|thumb) \*/")
FUNCTION = re.compile(
    r"(?m)^/\* 0x[0-9A-Fa-f]{8}[^\n]*\*/\r?\nvoid (gf_\w+)\(void\) \{"
)
IDENTIFIER = re.compile(r"\bgf_\w+\b")

# Game-level names confirmed by execution traces (hang_trace / input replay).
# Address remains the source of truth; these replace only the generated
# gf_* identifier. Add a name only after tracing the routine.
SEMANTIC_RENAMES = {
    # Spin-wait: ldrh r2,[r0]; ands r3,r1,r2; beq back  (wait for *flag & mask)
    # 0x0801352E / 0x0801353A are resume aliases inside 0x08013522 after
    # game.toml [[resume_range]] — no standalone rename needed.
    0x08013522: "gf_wait_for_masked_flag_if_nonzero_at_08013522",
    # IRQ-side completion: ++counter, *done_flag = 1 (IntrWait-style wakeup)
    0x08013AFA: "gf_irq_complete_and_set_flag_at_08013AFA",
    0x08013AF6: "gf_irq_complete_tail_at_08013AF6",
}


def category(old_name: str, body: str, mode: str) -> str:
    if old_name == "gf_start_vector":
        return "boot_vectors"
    if old_name.startswith("gf_autojt_"):
        return "jump_table_entries"
    if "runtime_swi(" in body:
        return "software_interrupts"
    if "runtime_exception_return(" in body:
        return "exception_returns"
    if re.search(r"0x0[Ee][0-9A-Fa-f]{5,6}", body):
        return "cartridge_bus_access"
    if re.search(r"0x0[4567][0-9A-Fa-f]{5,6}", body):
        return "hardware_and_video_access"
    reads = "bus_read_" in body
    writes = "bus_write_" in body
    if reads and writes:
        return f"memory_transfer_{mode}"
    if reads:
        return f"memory_reads_{mode}"
    if writes:
        return f"memory_writes_{mode}"
    if "runtime_dispatch(" in body:
        return f"indirect_control_flow_{mode}"
    return f"cpu_operations_{mode}"


def organize(raw: Path, output: Path) -> None:
    declarations = HEADER.findall((raw / "recompiled.h").read_text(encoding="utf-8"))
    address_by_name = {name: (int(address, 16), mode) for name, address, mode in declarations}
    chunks: dict[str, str] = {}
    for shard in sorted(raw.glob("recompiled_*.cpp")):
        source = shard.read_text(encoding="utf-8")
        matches = list(FUNCTION.finditer(source))
        for index, match in enumerate(matches):
            end = matches[index + 1].start() if index + 1 < len(matches) else len(source)
            name = match.group(1)
            if name in chunks:
                raise ValueError(f"Duplicate generated function: {name}")
            chunks[name] = source[match.start():end].rstrip() + "\n\n"
    if set(chunks) != set(address_by_name):
        missing = set(address_by_name) - set(chunks)
        extra = set(chunks) - set(address_by_name)
        raise ValueError(f"Declaration/body mismatch: missing={len(missing)}, extra={len(extra)}")

    rename: dict[str, str] = {}
    module_for: dict[str, str] = {}
    for old_name, (address, mode) in address_by_name.items():
        module = category(old_name, chunks[old_name], mode)
        module_for[old_name] = module
        semantic = SEMANTIC_RENAMES.get(address)
        rename[old_name] = semantic if semantic else f"gf_{module}_at_{address:08X}"
    if len(set(rename.values())) != len(rename):
        raise ValueError("Two functions received the same name")

    def replace_identifiers(match: re.Match[str]) -> str:
        return rename.get(match.group(0), match.group(0))

    grouped: dict[str, list[tuple[int, str]]] = defaultdict(list)
    for old_name, body in chunks.items():
        address, _ = address_by_name[old_name]
        grouped[module_for[old_name]].append((address, IDENTIFIER.sub(replace_identifiers, body)))

    output.mkdir(parents=True, exist_ok=True)
    expected = {f"{module}.cpp" for module in grouped}
    expected.update({"recompiled.h", "dispatch_table.cpp", "symbol_map.cpp", "modules.h"})
    for stale in output.iterdir():
        if stale.is_file() and stale.suffix in {".cpp", ".h"} and stale.name not in expected:
            stale.unlink()

    for module, entries in sorted(grouped.items()):
        lines = [
            "// Generated from a user supplied Golden Sun: The Lost Age ROM.",
            f"// {module}: functions grouped by observable CPU/hardware operations.",
            '#include "runtime_arm.h"',
            '#include "recompiled.h"',
            "",
        ]
        lines.extend(body for _, body in sorted(entries))
        (output / f"{module}.cpp").write_text("\n".join(lines).rstrip() + "\n", encoding="utf-8")

    for filename in ("recompiled.h", "dispatch_table.cpp", "symbol_map.cpp"):
        source = (raw / filename).read_text(encoding="utf-8")
        (output / filename).write_text(IDENTIFIER.sub(replace_identifiers, source), encoding="utf-8")

    index = ["// Generated module index. Categories describe observed operations.", "#pragma once", ""]
    for module, entries in sorted(grouped.items()):
        index.append(f"// {module}.cpp: {len(entries)} functions")
    (output / "modules.h").write_text("\n".join(index) + "\n", encoding="utf-8")
    print(f"Organized {len(chunks)} cartridge functions into {len(grouped)} modules:")
    for module, entries in sorted(grouped.items()):
        print(f"  {module}.cpp: {len(entries)}")


def normalize_bios_source(directory: Path) -> None:
    """Remove only generator-added empty lines at EOF for clean Git diffs."""
    for source in directory.iterdir():
        if source.is_file() and source.suffix in {".cpp", ".h"}:
            body = source.read_text(encoding="utf-8")
            source.write_text(body.rstrip() + "\n", encoding="utf-8")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--raw", type=Path, default=ROOT / "src" / "generated")
    parser.add_argument("--output", type=Path, default=ROOT / "src" / "game")
    args = parser.parse_args()
    organize(args.raw, args.output)
    normalize_bios_source(ROOT / "src" / "generated_bios")


if __name__ == "__main__":
    main()
