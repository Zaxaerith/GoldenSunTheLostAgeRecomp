#!/usr/bin/env python3
"""Emit GBA KEYINPUT replay traces for Golden Sun: The Lost Age recomp tests."""
from __future__ import annotations
import argparse
from pathlib import Path

NONE = 0x03FF
A = 0x03FE
B = 0x03FD
SELECT = 0x03FB
START = 0x03F7
RIGHT = 0x03EF
LEFT = 0x03DF
UP = 0x03BF
DOWN = 0x037F
R = 0x02FF
L = 0x01FF

KEYS = {
    "none": NONE, "a": A, "b": B, "select": SELECT, "start": START,
    "right": RIGHT, "left": LEFT, "up": UP, "down": DOWN, "r": R, "l": L,
}


def parse_script(text: str):
    """Script lines: <frame> <key>[:hold_frames]
    If hold_frames omitted, press for 2 frames then release.
    Also supports: 'wait <frames>' to advance a cursor.
    """
    events = []  # (frame, keyinput)
    cursor = 0
    for raw in text.splitlines():
        line = raw.split("#", 1)[0].strip()
        if not line:
            continue
        parts = line.split()
        if parts[0] == "wait":
            cursor += int(parts[1])
            continue
        if parts[0] == "press":
            # press a at frame X for N
            # syntax: press <key> <frame> [hold]
            key = KEYS[parts[1].lower()]
            frame = int(parts[2]) if len(parts) > 2 else cursor
            hold = int(parts[3]) if len(parts) > 3 else 2
            events.append((frame, key))
            events.append((frame + hold, NONE))
            cursor = frame + hold
            continue
        if parts[0] == "hold":
            # hold <key> <frame> <until_frame>
            key = KEYS[parts[1].lower()]
            frame = int(parts[2])
            until = int(parts[3])
            events.append((frame, key))
            events.append((until, NONE))
            cursor = until
            continue
        if parts[0] == "set":
            # set <hex> <frame>
            events.append((int(parts[2]), int(parts[1], 16)))
            cursor = int(parts[2])
            continue
        # shorthand: <frame> <key> [hold]
        frame = int(parts[0])
        key = KEYS[parts[1].lower()] if not parts[1].startswith("0x") else int(parts[1], 16)
        hold = int(parts[2]) if len(parts) > 2 else 2
        events.append((frame, key))
        events.append((frame + hold, NONE))
        cursor = frame + hold
    events.sort(key=lambda e: e[0])
    # collapse consecutive same values at same frame
    out = []
    last_frame = -1
    last_key = None
    for fr, key in events:
        if fr == last_frame:
            out[-1] = (fr, key)
            last_key = key
            continue
        if key == last_key:
            continue
        out.append((fr, key))
        last_frame = fr
        last_key = key
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("script")
    ap.add_argument("output")
    ap.add_argument("--end-frame", type=int, default=None,
                    help="append a release at this frame if needed")
    args = ap.parse_args()
    text = Path(args.script).read_text(encoding="utf-8")
    events = parse_script(text)
    if args.end_frame is not None:
        if not events or events[-1][1] != NONE:
            events.append((args.end_frame, NONE))
        elif events[-1][0] < args.end_frame:
            pass
    lines = ["# frame,keyinput (GBA KEYINPUT active-low)"]
    for fr, key in events:
        lines.append(f"{fr},0x{key:03X}")
    Path(args.output).write_text("\n".join(lines) + "\n", encoding="utf-8")
    print(f"wrote {args.output}: {len(events)} events, last_frame={events[-1][0] if events else 0}")


if __name__ == "__main__":
    main()
