// Generated from a user supplied Golden Sun: The Lost Age ROM.
// memory_writes_arm: functions grouped by observable CPU/hardware operations.
#include "runtime_arm.h"
#include "recompiled.h"

/* 0x08001658  mode=arm  end=0x08001660  branches=3 */
void gf_memory_writes_arm_at_08001658(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08001658u);
    /* 08001658  08001658 A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x08001658u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001658 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08001658 = 1u;
        uint32_t _rn_08001658 = g_cpu.R[0];
        uint32_t _r_08001658;
        _r_08001658 = _rn_08001658 & 0x01E00000u;
        g_cpu.R[4] = _r_08001658;
    }
    g_cpu.R[15] = 0x0800165Cu;
    runtime_tick(_cyc_08001658);
    /* 0800165C  0800165c A stm r13!,{r1,r5,r6,r7,r14} */
    g_cpu.R[15] = 0x0800165Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800165C = 1u;
    _cyc_0800165C = 1u;
    uint32_t _b_0800165C = g_cpu.R[13];
    uint32_t _a_0800165C = _b_0800165C - 20u;
    uint32_t _fb_0800165C = _b_0800165C - 20u;
    _cyc_0800165C += runtime_mem_cycles(_a_0800165C & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800165Cu, _a_0800165C & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_0800165C & ~3u, g_cpu.R[1]);
    _a_0800165C += 4u;
    _cyc_0800165C += runtime_mem_cycles(_a_0800165C & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800165Cu, _a_0800165C & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_0800165C & ~3u, g_cpu.R[5]);
    _a_0800165C += 4u;
    _cyc_0800165C += runtime_mem_cycles(_a_0800165C & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800165Cu, _a_0800165C & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_0800165C & ~3u, g_cpu.R[6]);
    _a_0800165C += 4u;
    _cyc_0800165C += runtime_mem_cycles(_a_0800165C & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800165Cu, _a_0800165C & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_0800165C & ~3u, g_cpu.R[7]);
    _a_0800165C += 4u;
    _cyc_0800165C += runtime_mem_cycles(_a_0800165C & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0800165Cu, _a_0800165C & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_0800165C & ~3u, g_cpu.R[14]);
    _a_0800165C += 4u;
    g_cpu.R[13] = _fb_0800165C;
    g_cpu.R[15] = 0x08001660u;
    runtime_tick(_cyc_0800165C);
    /* fall-through to 0x08001660 */
    g_cpu.R[15] = 0x08001660u;
    runtime_dispatch(0x08001660u);
    return;
}


/* 0x08001698  mode=arm  end=0x080016D4  branches=1 */
void gf_memory_writes_arm_at_08001698(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08001698u);
    /* 08001698  08001698 A strb r4,[r1],#0x1 */
    g_cpu.R[15] = 0x08001698u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001698 = 1u;
    _cyc_08001698 = 1u;
    uint32_t _base_08001698 = g_cpu.R[1];
    uint32_t _off_08001698;
    _off_08001698 = 0x00000001u;
    uint32_t _ea_08001698 = _base_08001698;
    uint32_t _post_08001698 = _base_08001698 + _off_08001698;
    _cyc_08001698 += runtime_mem_cycles(_ea_08001698, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001698u, _ea_08001698, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_08001698, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[1] = _post_08001698;
    g_cpu.R[15] = 0x0800169Cu;
    runtime_tick(_cyc_08001698);
    /* 0800169C  0800169c A mov r4,r4,lsr #8 */
    g_cpu.R[15] = 0x0800169Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800169C = 1u;
    _cyc_0800169C = 1u;
    uint32_t _rm_0800169C = g_cpu.R[4];
    uint32_t _op2_0800169C;
    uint32_t _co_0800169C;
    _op2_0800169C = _rm_0800169C >> 8;
    _co_0800169C = (_rm_0800169C >> 7) & 1u;
    uint32_t _r_0800169C;
    _r_0800169C = _op2_0800169C;
    g_cpu.R[4] = _r_0800169C;
    g_cpu.R[15] = 0x080016A0u;
    runtime_tick(_cyc_0800169C);
    /* 080016A0  080016a0 A strb r4,[r1],#0x1 */
    g_cpu.R[15] = 0x080016A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016A0 = 1u;
    _cyc_080016A0 = 1u;
    uint32_t _base_080016A0 = g_cpu.R[1];
    uint32_t _off_080016A0;
    _off_080016A0 = 0x00000001u;
    uint32_t _ea_080016A0 = _base_080016A0;
    uint32_t _post_080016A0 = _base_080016A0 + _off_080016A0;
    _cyc_080016A0 += runtime_mem_cycles(_ea_080016A0, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080016A0u, _ea_080016A0, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_080016A0, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[1] = _post_080016A0;
    g_cpu.R[15] = 0x080016A4u;
    runtime_tick(_cyc_080016A0);
    /* 080016A4  080016a4 A mov r4,r4,lsr #8 */
    g_cpu.R[15] = 0x080016A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016A4 = 1u;
    _cyc_080016A4 = 1u;
    uint32_t _rm_080016A4 = g_cpu.R[4];
    uint32_t _op2_080016A4;
    uint32_t _co_080016A4;
    _op2_080016A4 = _rm_080016A4 >> 8;
    _co_080016A4 = (_rm_080016A4 >> 7) & 1u;
    uint32_t _r_080016A4;
    _r_080016A4 = _op2_080016A4;
    g_cpu.R[4] = _r_080016A4;
    g_cpu.R[15] = 0x080016A8u;
    runtime_tick(_cyc_080016A4);
    /* 080016A8  080016a8 A strb r4,[r1],#0x1 */
    g_cpu.R[15] = 0x080016A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016A8 = 1u;
    _cyc_080016A8 = 1u;
    uint32_t _base_080016A8 = g_cpu.R[1];
    uint32_t _off_080016A8;
    _off_080016A8 = 0x00000001u;
    uint32_t _ea_080016A8 = _base_080016A8;
    uint32_t _post_080016A8 = _base_080016A8 + _off_080016A8;
    _cyc_080016A8 += runtime_mem_cycles(_ea_080016A8, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080016A8u, _ea_080016A8, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_080016A8, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[1] = _post_080016A8;
    g_cpu.R[15] = 0x080016ACu;
    runtime_tick(_cyc_080016A8);
    /* 080016AC  080016ac A mov r4,r4,lsr #8 */
    g_cpu.R[15] = 0x080016ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016AC = 1u;
    _cyc_080016AC = 1u;
    uint32_t _rm_080016AC = g_cpu.R[4];
    uint32_t _op2_080016AC;
    uint32_t _co_080016AC;
    _op2_080016AC = _rm_080016AC >> 8;
    _co_080016AC = (_rm_080016AC >> 7) & 1u;
    uint32_t _r_080016AC;
    _r_080016AC = _op2_080016AC;
    g_cpu.R[4] = _r_080016AC;
    g_cpu.R[15] = 0x080016B0u;
    runtime_tick(_cyc_080016AC);
    /* 080016B0  080016b0 A strb r4,[r1],#0x1 */
    g_cpu.R[15] = 0x080016B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016B0 = 1u;
    _cyc_080016B0 = 1u;
    uint32_t _base_080016B0 = g_cpu.R[1];
    uint32_t _off_080016B0;
    _off_080016B0 = 0x00000001u;
    uint32_t _ea_080016B0 = _base_080016B0;
    uint32_t _post_080016B0 = _base_080016B0 + _off_080016B0;
    _cyc_080016B0 += runtime_mem_cycles(_ea_080016B0, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080016B0u, _ea_080016B0, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_080016B0, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[1] = _post_080016B0;
    g_cpu.R[15] = 0x080016B4u;
    runtime_tick(_cyc_080016B0);
    /* 080016B4  080016b4 A strb r5,[r1],#0x1 */
    g_cpu.R[15] = 0x080016B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016B4 = 1u;
    _cyc_080016B4 = 1u;
    uint32_t _base_080016B4 = g_cpu.R[1];
    uint32_t _off_080016B4;
    _off_080016B4 = 0x00000001u;
    uint32_t _ea_080016B4 = _base_080016B4;
    uint32_t _post_080016B4 = _base_080016B4 + _off_080016B4;
    _cyc_080016B4 += runtime_mem_cycles(_ea_080016B4, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080016B4u, _ea_080016B4, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_080016B4, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[1] = _post_080016B4;
    g_cpu.R[15] = 0x080016B8u;
    runtime_tick(_cyc_080016B4);
    /* 080016B8  080016b8 A mov r5,r5,lsr #8 */
    g_cpu.R[15] = 0x080016B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016B8 = 1u;
    _cyc_080016B8 = 1u;
    uint32_t _rm_080016B8 = g_cpu.R[5];
    uint32_t _op2_080016B8;
    uint32_t _co_080016B8;
    _op2_080016B8 = _rm_080016B8 >> 8;
    _co_080016B8 = (_rm_080016B8 >> 7) & 1u;
    uint32_t _r_080016B8;
    _r_080016B8 = _op2_080016B8;
    g_cpu.R[5] = _r_080016B8;
    g_cpu.R[15] = 0x080016BCu;
    runtime_tick(_cyc_080016B8);
    /* 080016BC  080016bc A strb r5,[r1],#0x1 */
    g_cpu.R[15] = 0x080016BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016BC = 1u;
    _cyc_080016BC = 1u;
    uint32_t _base_080016BC = g_cpu.R[1];
    uint32_t _off_080016BC;
    _off_080016BC = 0x00000001u;
    uint32_t _ea_080016BC = _base_080016BC;
    uint32_t _post_080016BC = _base_080016BC + _off_080016BC;
    _cyc_080016BC += runtime_mem_cycles(_ea_080016BC, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080016BCu, _ea_080016BC, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_080016BC, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[1] = _post_080016BC;
    g_cpu.R[15] = 0x080016C0u;
    runtime_tick(_cyc_080016BC);
    /* 080016C0  080016c0 A mov r5,r5,lsr #8 */
    g_cpu.R[15] = 0x080016C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016C0 = 1u;
    _cyc_080016C0 = 1u;
    uint32_t _rm_080016C0 = g_cpu.R[5];
    uint32_t _op2_080016C0;
    uint32_t _co_080016C0;
    _op2_080016C0 = _rm_080016C0 >> 8;
    _co_080016C0 = (_rm_080016C0 >> 7) & 1u;
    uint32_t _r_080016C0;
    _r_080016C0 = _op2_080016C0;
    g_cpu.R[5] = _r_080016C0;
    g_cpu.R[15] = 0x080016C4u;
    runtime_tick(_cyc_080016C0);
    /* 080016C4  080016c4 A strb r5,[r1],#0x1 */
    g_cpu.R[15] = 0x080016C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016C4 = 1u;
    _cyc_080016C4 = 1u;
    uint32_t _base_080016C4 = g_cpu.R[1];
    uint32_t _off_080016C4;
    _off_080016C4 = 0x00000001u;
    uint32_t _ea_080016C4 = _base_080016C4;
    uint32_t _post_080016C4 = _base_080016C4 + _off_080016C4;
    _cyc_080016C4 += runtime_mem_cycles(_ea_080016C4, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080016C4u, _ea_080016C4, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_080016C4, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[1] = _post_080016C4;
    g_cpu.R[15] = 0x080016C8u;
    runtime_tick(_cyc_080016C4);
    /* 080016C8  080016c8 A mov r5,r5,lsr #8 */
    g_cpu.R[15] = 0x080016C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016C8 = 1u;
    _cyc_080016C8 = 1u;
    uint32_t _rm_080016C8 = g_cpu.R[5];
    uint32_t _op2_080016C8;
    uint32_t _co_080016C8;
    _op2_080016C8 = _rm_080016C8 >> 8;
    _co_080016C8 = (_rm_080016C8 >> 7) & 1u;
    uint32_t _r_080016C8;
    _r_080016C8 = _op2_080016C8;
    g_cpu.R[5] = _r_080016C8;
    g_cpu.R[15] = 0x080016CCu;
    runtime_tick(_cyc_080016C8);
    /* 080016CC  080016cc A strb r5,[r1],#0x1 */
    g_cpu.R[15] = 0x080016CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016CC = 1u;
    _cyc_080016CC = 1u;
    uint32_t _base_080016CC = g_cpu.R[1];
    uint32_t _off_080016CC;
    _off_080016CC = 0x00000001u;
    uint32_t _ea_080016CC = _base_080016CC;
    uint32_t _post_080016CC = _base_080016CC + _off_080016CC;
    _cyc_080016CC += runtime_mem_cycles(_ea_080016CC, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080016CCu, _ea_080016CC, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_080016CC, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[1] = _post_080016CC;
    g_cpu.R[15] = 0x080016D0u;
    runtime_tick(_cyc_080016CC);
    /* 080016D0  080016d0 A b 0x08001660 */
    g_cpu.R[15] = 0x080016D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080016D0 = 1u;
    _cyc_080016D0 = 3u;
    g_cpu.R[15] = 0x08001660u;
    runtime_tick(_cyc_080016D0);
    gf_memory_reads_arm_at_08001660();
    return;
    g_cpu.R[15] = 0x080016D4u;
    runtime_tick(_cyc_080016D0);
    /* fall-through to 0x080016D4 */
    g_cpu.R[15] = 0x080016D4u;
    runtime_dispatch(0x080016D4u);
    return;
}


/* 0x08021070  mode=arm  end=0x08021084  branches=2  indirect */
void gf_memory_writes_arm_at_08021070(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021070u);
    /* 08021070  08021070 A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x08021070u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021070 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021070 = 1u;
        uint32_t _rn_08021070 = g_cpu.R[0];
        uint32_t _r_08021070;
        _r_08021070 = _rn_08021070 & 0x01E00000u;
        g_cpu.R[4] = _r_08021070;
    }
    g_cpu.R[15] = 0x08021074u;
    runtime_tick(_cyc_08021070);
    /* 08021074  08021074 A stm r13!,{r5,r6,r7,r8,r9,r10,r11,r14} */
    g_cpu.R[15] = 0x08021074u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021074 = 1u;
    _cyc_08021074 = 1u;
    uint32_t _b_08021074 = g_cpu.R[13];
    uint32_t _a_08021074 = _b_08021074 - 32u;
    uint32_t _fb_08021074 = _b_08021074 - 32u;
    _cyc_08021074 += runtime_mem_cycles(_a_08021074 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021074u, _a_08021074 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08021074 & ~3u, g_cpu.R[5]);
    _a_08021074 += 4u;
    _cyc_08021074 += runtime_mem_cycles(_a_08021074 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021074u, _a_08021074 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08021074 & ~3u, g_cpu.R[6]);
    _a_08021074 += 4u;
    _cyc_08021074 += runtime_mem_cycles(_a_08021074 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021074u, _a_08021074 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08021074 & ~3u, g_cpu.R[7]);
    _a_08021074 += 4u;
    _cyc_08021074 += runtime_mem_cycles(_a_08021074 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021074u, _a_08021074 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_a_08021074 & ~3u, g_cpu.R[8]);
    _a_08021074 += 4u;
    _cyc_08021074 += runtime_mem_cycles(_a_08021074 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021074u, _a_08021074 & ~3u, g_cpu.R[9], 4u);
    bus_write_u32(_a_08021074 & ~3u, g_cpu.R[9]);
    _a_08021074 += 4u;
    _cyc_08021074 += runtime_mem_cycles(_a_08021074 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021074u, _a_08021074 & ~3u, g_cpu.R[10], 4u);
    bus_write_u32(_a_08021074 & ~3u, g_cpu.R[10]);
    _a_08021074 += 4u;
    _cyc_08021074 += runtime_mem_cycles(_a_08021074 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021074u, _a_08021074 & ~3u, g_cpu.R[11], 4u);
    bus_write_u32(_a_08021074 & ~3u, g_cpu.R[11]);
    _a_08021074 += 4u;
    _cyc_08021074 += runtime_mem_cycles(_a_08021074 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021074u, _a_08021074 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08021074 & ~3u, g_cpu.R[14]);
    _a_08021074 += 4u;
    g_cpu.R[13] = _fb_08021074;
    g_cpu.R[15] = 0x08021078u;
    runtime_tick(_cyc_08021074);
    /* 08021078  08021078 A mov r4,#0xa00000 */
    g_cpu.R[15] = 0x08021078u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021078 = 1u;
    _cyc_08021078 = 1u;
    uint32_t _r_08021078;
    _r_08021078 = 0x00A00000u;
    g_cpu.R[4] = _r_08021078;
    g_cpu.R[15] = 0x0802107Cu;
    runtime_tick(_cyc_08021078);
    /* 0802107C  0802107c A orr r4,r4,#0x38 */
    g_cpu.R[15] = 0x0802107Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802107C = 1u;
    _cyc_0802107C = 1u;
    uint32_t _rn_0802107C = g_cpu.R[4];
    uint32_t _r_0802107C;
    _r_0802107C = _rn_0802107C | 0x00000038u;
    g_cpu.R[4] = _r_0802107C;
    g_cpu.R[15] = 0x08021080u;
    runtime_tick(_cyc_0802107C);
    /* 08021080  08021080 A orr r4,r4,#0xff000000 */
    g_cpu.R[15] = 0x08021080u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021080 = 1u;
    _cyc_08021080 = 1u;
    uint32_t _rn_08021080 = g_cpu.R[4];
    uint32_t _r_08021080;
    _r_08021080 = _rn_08021080 | 0xFF000000u;
    g_cpu.R[4] = _r_08021080;
    g_cpu.R[15] = 0x08021084u;
    runtime_tick(_cyc_08021080);
    /* fall-through to 0x08021084 */
    g_cpu.R[15] = 0x08021084u;
    runtime_dispatch(0x08021084u);
    return;
}


/* 0x080216F0  mode=arm  end=0x080216FC  branches=0  indirect */
void gf_memory_writes_arm_at_080216F0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080216F0u);
    /* 080216F0  080216f0 A stm r13!,{r14} */
    g_cpu.R[15] = 0x080216F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216F0 = 1u;
    _cyc_080216F0 = 1u;
    uint32_t _b_080216F0 = g_cpu.R[13];
    uint32_t _a_080216F0 = _b_080216F0 - 4u;
    uint32_t _fb_080216F0 = _b_080216F0 - 4u;
    _cyc_080216F0 += runtime_mem_cycles(_a_080216F0 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216F0u, _a_080216F0 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_080216F0 & ~3u, g_cpu.R[14]);
    _a_080216F0 += 4u;
    g_cpu.R[13] = _fb_080216F0;
    g_cpu.R[15] = 0x080216F4u;
    runtime_tick(_cyc_080216F0);
    /* 080216F4  080216f4 A add r14,r15,#0x1 */
    g_cpu.R[15] = 0x080216F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216F4 = 1u;
    _cyc_080216F4 = 1u;
    uint32_t _rn_080216F4 = 0x080216FCu;
    uint32_t _r_080216F4;
    _r_080216F4 = _rn_080216F4 + 0x00000001u;
    g_cpu.R[14] = _r_080216F4;
    g_cpu.R[15] = 0x080216F8u;
    runtime_tick(_cyc_080216F4);
    /* 080216F8  080216f8 A bx r12 */
    g_cpu.R[15] = 0x080216F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216F8 = 1u;
    _cyc_080216F8 = 3u;
    uint32_t _bxt_080216F8 = g_cpu.R[12];
    g_cpu.R[15] = _bxt_080216F8 & ~1u;
    runtime_tick(_cyc_080216F8);
    runtime_dispatch_with_exchange(_bxt_080216F8);
    return;
    g_cpu.R[15] = 0x080216FCu;
    runtime_tick(_cyc_080216F8);
    /* fall-through to 0x080216FC */
    g_cpu.R[15] = 0x080216FCu;
    runtime_dispatch(0x080216FCu);
    return;
}


/* 0x08038780  mode=arm  end=0x0803879C  branches=2 */
void gf_memory_writes_arm_at_08038780(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038780u);
    /* 08038780  08038780 A cmps r12,#0x1 */
    g_cpu.R[15] = 0x08038780u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038780 = 1u;
    _cyc_08038780 = 1u;
    uint32_t _rn_08038780 = g_cpu.R[12];
    uint32_t _r_08038780;
    _r_08038780 = _rn_08038780 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08038780, 0x00000001u, _r_08038780);
    g_cpu.R[15] = 0x08038784u;
    runtime_tick(_cyc_08038780);
    /* 08038784  08038784 A bhi 0x0803879c */
    g_cpu.R[15] = 0x08038784u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038784 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08038784 = 3u;
        g_cpu.R[15] = 0x0803879Cu;
        runtime_tick(_cyc_08038784);
        gf_memory_writes_arm_at_0803879C();
        return;
    }
    g_cpu.R[15] = 0x08038788u;
    runtime_tick(_cyc_08038784);
    /* 08038788  08038788 A sub r9,r9,#0x3 */
    g_cpu.R[15] = 0x08038788u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038788 = 1u;
    _cyc_08038788 = 1u;
    uint32_t _rn_08038788 = g_cpu.R[9];
    uint32_t _r_08038788;
    _r_08038788 = _rn_08038788 - 0x00000003u;
    g_cpu.R[9] = _r_08038788;
    g_cpu.R[15] = 0x0803878Cu;
    runtime_tick(_cyc_08038788);
    /* 0803878C  0803878c A sub r7,r7,#0x2 */
    g_cpu.R[15] = 0x0803878Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803878C = 1u;
    _cyc_0803878C = 1u;
    uint32_t _rn_0803878C = g_cpu.R[7];
    uint32_t _r_0803878C;
    _r_0803878C = _rn_0803878C - 0x00000002u;
    g_cpu.R[7] = _r_0803878C;
    g_cpu.R[15] = 0x08038790u;
    runtime_tick(_cyc_0803878C);
    /* 08038790  08038790 A mov r1,#0x0 */
    g_cpu.R[15] = 0x08038790u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038790 = 1u;
    _cyc_08038790 = 1u;
    uint32_t _r_08038790;
    _r_08038790 = 0x00000000u;
    g_cpu.R[1] = _r_08038790;
    g_cpu.R[15] = 0x08038794u;
    runtime_tick(_cyc_08038790);
    /* 08038794  08038794 A str r1,[r13,#0x20] */
    g_cpu.R[15] = 0x08038794u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038794 = 1u;
    _cyc_08038794 = 1u;
    uint32_t _base_08038794 = g_cpu.R[13];
    uint32_t _off_08038794;
    _off_08038794 = 0x00000020u;
    uint32_t _ea_08038794 = _base_08038794 + _off_08038794;
    uint32_t _post_08038794 = _base_08038794 + _off_08038794;
    _cyc_08038794 += runtime_mem_cycles(_ea_08038794, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038794u, _ea_08038794 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_08038794 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x08038798u;
    runtime_tick(_cyc_08038794);
    /* 08038798  08038798 A b 0x080387a0 */
    g_cpu.R[15] = 0x08038798u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038798 = 1u;
    _cyc_08038798 = 3u;
    g_cpu.R[15] = 0x080387A0u;
    runtime_tick(_cyc_08038798);
    gf_memory_transfer_arm_at_080387A0();
    return;
    g_cpu.R[15] = 0x0803879Cu;
    runtime_tick(_cyc_08038798);
    /* fall-through to 0x0803879C */
    g_cpu.R[15] = 0x0803879Cu;
    runtime_dispatch(0x0803879Cu);
    return;
}


/* 0x0803879C  mode=arm  end=0x080387A0  branches=4 */
void gf_memory_writes_arm_at_0803879C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803879Cu);
    /* 0803879C  0803879c A str r0,[r13,#0x20] */
    g_cpu.R[15] = 0x0803879Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803879C = 1u;
    _cyc_0803879C = 1u;
    uint32_t _base_0803879C = g_cpu.R[13];
    uint32_t _off_0803879C;
    _off_0803879C = 0x00000020u;
    uint32_t _ea_0803879C = _base_0803879C + _off_0803879C;
    uint32_t _post_0803879C = _base_0803879C + _off_0803879C;
    _cyc_0803879C += runtime_mem_cycles(_ea_0803879C, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0803879Cu, _ea_0803879C & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0803879C & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x080387A0u;
    runtime_tick(_cyc_0803879C);
    /* fall-through to 0x080387A0 */
    g_cpu.R[15] = 0x080387A0u;
    runtime_dispatch(0x080387A0u);
    return;
}


/* 0x080388FC  mode=arm  end=0x0803890C  branches=3  indirect */
void gf_memory_writes_arm_at_080388FC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080388FCu);
    /* 080388FC  080388fc A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x080388FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388FC = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080388FC = 1u;
        uint32_t _rn_080388FC = g_cpu.R[0];
        uint32_t _r_080388FC;
        _r_080388FC = _rn_080388FC & 0x01E00000u;
        g_cpu.R[4] = _r_080388FC;
    }
    g_cpu.R[15] = 0x08038900u;
    runtime_tick(_cyc_080388FC);
    /* 08038900  08038900 A stm r13!,{r5,r6,r7,r8,r9,r10,r14} */
    g_cpu.R[15] = 0x08038900u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038900 = 1u;
    _cyc_08038900 = 1u;
    uint32_t _b_08038900 = g_cpu.R[13];
    uint32_t _a_08038900 = _b_08038900 - 28u;
    uint32_t _fb_08038900 = _b_08038900 - 28u;
    _cyc_08038900 += runtime_mem_cycles(_a_08038900 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038900u, _a_08038900 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08038900 & ~3u, g_cpu.R[5]);
    _a_08038900 += 4u;
    _cyc_08038900 += runtime_mem_cycles(_a_08038900 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038900u, _a_08038900 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08038900 & ~3u, g_cpu.R[6]);
    _a_08038900 += 4u;
    _cyc_08038900 += runtime_mem_cycles(_a_08038900 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038900u, _a_08038900 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08038900 & ~3u, g_cpu.R[7]);
    _a_08038900 += 4u;
    _cyc_08038900 += runtime_mem_cycles(_a_08038900 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038900u, _a_08038900 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_a_08038900 & ~3u, g_cpu.R[8]);
    _a_08038900 += 4u;
    _cyc_08038900 += runtime_mem_cycles(_a_08038900 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038900u, _a_08038900 & ~3u, g_cpu.R[9], 4u);
    bus_write_u32(_a_08038900 & ~3u, g_cpu.R[9]);
    _a_08038900 += 4u;
    _cyc_08038900 += runtime_mem_cycles(_a_08038900 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038900u, _a_08038900 & ~3u, g_cpu.R[10], 4u);
    bus_write_u32(_a_08038900 & ~3u, g_cpu.R[10]);
    _a_08038900 += 4u;
    _cyc_08038900 += runtime_mem_cycles(_a_08038900 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038900u, _a_08038900 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08038900 & ~3u, g_cpu.R[14]);
    _a_08038900 += 4u;
    g_cpu.R[13] = _fb_08038900;
    g_cpu.R[15] = 0x08038904u;
    runtime_tick(_cyc_08038900);
    /* 08038904  08038904 A mov r10,r1 */
    g_cpu.R[15] = 0x08038904u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038904 = 1u;
    _cyc_08038904 = 1u;
    uint32_t _rm_08038904 = g_cpu.R[1];
    uint32_t _op2_08038904;
    uint32_t _co_08038904;
    _op2_08038904 = _rm_08038904;
    _co_08038904 = cpsr_c();
    uint32_t _r_08038904;
    _r_08038904 = _op2_08038904;
    g_cpu.R[10] = _r_08038904;
    g_cpu.R[15] = 0x08038908u;
    runtime_tick(_cyc_08038904);
    /* 08038908  08038908 A mov r1,#0x0 */
    g_cpu.R[15] = 0x08038908u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038908 = 1u;
    _cyc_08038908 = 1u;
    uint32_t _r_08038908;
    _r_08038908 = 0x00000000u;
    g_cpu.R[1] = _r_08038908;
    g_cpu.R[15] = 0x0803890Cu;
    runtime_tick(_cyc_08038908);
    /* fall-through to 0x0803890C */
    g_cpu.R[15] = 0x0803890Cu;
    runtime_dispatch(0x0803890Cu);
    return;
}


/* 0x081C1564  mode=arm  end=0x081C1580  branches=3 */
void gf_memory_writes_arm_at_081C1564(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C1564u);
    /* 081C1564  081c1564 A adds r5,r5,#0x40000000 */
    g_cpu.R[15] = 0x081C1564u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1564 = 1u;
    _cyc_081C1564 = 1u;
    uint32_t _rn_081C1564 = g_cpu.R[5];
    uint32_t _r_081C1564;
    _r_081C1564 = _rn_081C1564 + 0x40000000u;
    arm_set_nzcv_add(_rn_081C1564, 0x40000000u, _r_081C1564);
    g_cpu.R[5] = _r_081C1564;
    g_cpu.R[15] = 0x081C1568u;
    runtime_tick(_cyc_081C1564);
    /* 081C1568  081c1568 A bcc 0x081c1540 */
    g_cpu.R[15] = 0x081C1568u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1568 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_081C1568 = 3u;
        g_cpu.R[15] = 0x081C1540u;
        runtime_tick(_cyc_081C1568);
        gf_memory_reads_arm_at_081C1540();
        return;
    }
    g_cpu.R[15] = 0x081C156Cu;
    runtime_tick(_cyc_081C1568);
    /* 081C156C  081c156c A str r7,[r5,#0x630] */
    g_cpu.R[15] = 0x081C156Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C156C = 1u;
    _cyc_081C156C = 1u;
    uint32_t _base_081C156C = g_cpu.R[5];
    uint32_t _off_081C156C;
    _off_081C156C = 0x00000630u;
    uint32_t _ea_081C156C = _base_081C156C + _off_081C156C;
    uint32_t _post_081C156C = _base_081C156C + _off_081C156C;
    _cyc_081C156C += runtime_mem_cycles(_ea_081C156C, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C156Cu, _ea_081C156C & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_ea_081C156C & ~3u, g_cpu.R[7]);
    g_cpu.R[15] = 0x081C1570u;
    runtime_tick(_cyc_081C156C);
    /* 081C1570  081c1570 A str r6,[r5],#0x4 */
    g_cpu.R[15] = 0x081C1570u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1570 = 1u;
    _cyc_081C1570 = 1u;
    uint32_t _base_081C1570 = g_cpu.R[5];
    uint32_t _off_081C1570;
    _off_081C1570 = 0x00000004u;
    uint32_t _ea_081C1570 = _base_081C1570;
    uint32_t _post_081C1570 = _base_081C1570 + _off_081C1570;
    _cyc_081C1570 += runtime_mem_cycles(_ea_081C1570, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C1570u, _ea_081C1570 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_081C1570 & ~3u, g_cpu.R[6]);
    g_cpu.R[5] = _post_081C1570;
    g_cpu.R[15] = 0x081C1574u;
    runtime_tick(_cyc_081C1570);
    /* 081C1574  081c1574 A subs r8,r8,#0x4 */
    g_cpu.R[15] = 0x081C1574u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1574 = 1u;
    _cyc_081C1574 = 1u;
    uint32_t _rn_081C1574 = g_cpu.R[8];
    uint32_t _r_081C1574;
    _r_081C1574 = _rn_081C1574 - 0x00000004u;
    arm_set_nzcv_sub(_rn_081C1574, 0x00000004u, _r_081C1574);
    g_cpu.R[8] = _r_081C1574;
    g_cpu.R[15] = 0x081C1578u;
    runtime_tick(_cyc_081C1574);
    /* 081C1578  081c1578 A bgt 0x081c14c8 */
    g_cpu.R[15] = 0x081C1578u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1578 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_081C1578 = 3u;
        g_cpu.R[15] = 0x081C14C8u;
        runtime_tick(_cyc_081C1578);
        gf_indirect_control_flow_arm_at_081C14C8();
        return;
    }
    g_cpu.R[15] = 0x081C157Cu;
    runtime_tick(_cyc_081C1578);
    /* 081C157C  081c157c A b 0x081c167c */
    g_cpu.R[15] = 0x081C157Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C157C = 1u;
    _cyc_081C157C = 3u;
    g_cpu.R[15] = 0x081C167Cu;
    runtime_tick(_cyc_081C157C);
    gf_memory_writes_arm_at_081C167C();
    return;
    g_cpu.R[15] = 0x081C1580u;
    runtime_tick(_cyc_081C157C);
    /* fall-through to 0x081C1580 */
    g_cpu.R[15] = 0x081C1580u;
    runtime_dispatch(0x081C1580u);
    return;
}


/* 0x081C15C0  mode=arm  end=0x081C15E8  branches=1 */
void gf_memory_writes_arm_at_081C15C0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C15C0u);
    /* 081C15C0  081c15c0 A strb r2,[r4] */
    g_cpu.R[15] = 0x081C15C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15C0 = 1u;
    _cyc_081C15C0 = 1u;
    uint32_t _base_081C15C0 = g_cpu.R[4];
    uint32_t _off_081C15C0;
    _off_081C15C0 = 0x00000000u;
    uint32_t _ea_081C15C0 = _base_081C15C0 + _off_081C15C0;
    uint32_t _post_081C15C0 = _base_081C15C0 + _off_081C15C0;
    _cyc_081C15C0 += runtime_mem_cycles(_ea_081C15C0, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C15C0u, _ea_081C15C0, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_081C15C0, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x081C15C4u;
    runtime_tick(_cyc_081C15C0);
    /* 081C15C4  081c15c4 A mov r0,r5,lsr #30 */
    g_cpu.R[15] = 0x081C15C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15C4 = 1u;
    _cyc_081C15C4 = 1u;
    uint32_t _rm_081C15C4 = g_cpu.R[5];
    uint32_t _op2_081C15C4;
    uint32_t _co_081C15C4;
    _op2_081C15C4 = _rm_081C15C4 >> 30;
    _co_081C15C4 = (_rm_081C15C4 >> 29) & 1u;
    uint32_t _r_081C15C4;
    _r_081C15C4 = _op2_081C15C4;
    g_cpu.R[0] = _r_081C15C4;
    g_cpu.R[15] = 0x081C15C8u;
    runtime_tick(_cyc_081C15C4);
    /* 081C15C8  081c15c8 A bic r5,r5,#0xc0000000 */
    g_cpu.R[15] = 0x081C15C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15C8 = 1u;
    _cyc_081C15C8 = 1u;
    uint32_t _rn_081C15C8 = g_cpu.R[5];
    uint32_t _r_081C15C8;
    _r_081C15C8 = _rn_081C15C8 & ~(0xC0000000u);
    g_cpu.R[5] = _r_081C15C8;
    g_cpu.R[15] = 0x081C15CCu;
    runtime_tick(_cyc_081C15C8);
    /* 081C15CC  081c15cc A rsb r0,r0,#0x3 */
    g_cpu.R[15] = 0x081C15CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15CC = 1u;
    _cyc_081C15CC = 1u;
    uint32_t _rn_081C15CC = g_cpu.R[0];
    uint32_t _r_081C15CC;
    _r_081C15CC = 0x00000003u - _rn_081C15CC;
    g_cpu.R[0] = _r_081C15CC;
    g_cpu.R[15] = 0x081C15D0u;
    runtime_tick(_cyc_081C15CC);
    /* 081C15D0  081c15d0 A mov r0,r0,lsl #3 */
    g_cpu.R[15] = 0x081C15D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15D0 = 1u;
    _cyc_081C15D0 = 1u;
    uint32_t _rm_081C15D0 = g_cpu.R[0];
    uint32_t _op2_081C15D0;
    uint32_t _co_081C15D0;
    _op2_081C15D0 = _rm_081C15D0 << 3;
    _co_081C15D0 = (_rm_081C15D0 >> 29) & 1u;
    uint32_t _r_081C15D0;
    _r_081C15D0 = _op2_081C15D0;
    g_cpu.R[0] = _r_081C15D0;
    g_cpu.R[15] = 0x081C15D4u;
    runtime_tick(_cyc_081C15D0);
    /* 081C15D4  081c15d4 A mov r6,r6,ror r0 */
    g_cpu.R[15] = 0x081C15D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15D4 = 1u;
    _cyc_081C15D4 = 2u;
    uint32_t _rm_081C15D4 = g_cpu.R[6];
    uint32_t _op2_081C15D4;
    uint32_t _co_081C15D4;
    uint32_t _cnt_081C15D4 = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_081C15D4 == 0)      { _op2_081C15D4 = _rm_081C15D4; _co_081C15D4 = cpsr_c(); }
    else { uint32_t _n = _cnt_081C15D4 & 31u; if (_n == 0) { _op2_081C15D4 = _rm_081C15D4; _co_081C15D4 = (_rm_081C15D4 >> 31) & 1u; } else { _op2_081C15D4 = (_rm_081C15D4 >> _n) | (_rm_081C15D4 << (32u - _n)); _co_081C15D4 = (_op2_081C15D4 >> 31) & 1u; } }
    uint32_t _r_081C15D4;
    _r_081C15D4 = _op2_081C15D4;
    g_cpu.R[6] = _r_081C15D4;
    g_cpu.R[15] = 0x081C15D8u;
    runtime_tick(_cyc_081C15D4);
    /* 081C15D8  081c15d8 A mov r7,r7,ror r0 */
    g_cpu.R[15] = 0x081C15D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15D8 = 1u;
    _cyc_081C15D8 = 2u;
    uint32_t _rm_081C15D8 = g_cpu.R[7];
    uint32_t _op2_081C15D8;
    uint32_t _co_081C15D8;
    uint32_t _cnt_081C15D8 = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_081C15D8 == 0)      { _op2_081C15D8 = _rm_081C15D8; _co_081C15D8 = cpsr_c(); }
    else { uint32_t _n = _cnt_081C15D8 & 31u; if (_n == 0) { _op2_081C15D8 = _rm_081C15D8; _co_081C15D8 = (_rm_081C15D8 >> 31) & 1u; } else { _op2_081C15D8 = (_rm_081C15D8 >> _n) | (_rm_081C15D8 << (32u - _n)); _co_081C15D8 = (_op2_081C15D8 >> 31) & 1u; } }
    uint32_t _r_081C15D8;
    _r_081C15D8 = _op2_081C15D8;
    g_cpu.R[7] = _r_081C15D8;
    g_cpu.R[15] = 0x081C15DCu;
    runtime_tick(_cyc_081C15D8);
    /* 081C15DC  081c15dc A str r7,[r5,#0x630] */
    g_cpu.R[15] = 0x081C15DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15DC = 1u;
    _cyc_081C15DC = 1u;
    uint32_t _base_081C15DC = g_cpu.R[5];
    uint32_t _off_081C15DC;
    _off_081C15DC = 0x00000630u;
    uint32_t _ea_081C15DC = _base_081C15DC + _off_081C15DC;
    uint32_t _post_081C15DC = _base_081C15DC + _off_081C15DC;
    _cyc_081C15DC += runtime_mem_cycles(_ea_081C15DC, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C15DCu, _ea_081C15DC & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_ea_081C15DC & ~3u, g_cpu.R[7]);
    g_cpu.R[15] = 0x081C15E0u;
    runtime_tick(_cyc_081C15DC);
    /* 081C15E0  081c15e0 A str r6,[r5],#0x4 */
    g_cpu.R[15] = 0x081C15E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15E0 = 1u;
    _cyc_081C15E0 = 1u;
    uint32_t _base_081C15E0 = g_cpu.R[5];
    uint32_t _off_081C15E0;
    _off_081C15E0 = 0x00000004u;
    uint32_t _ea_081C15E0 = _base_081C15E0;
    uint32_t _post_081C15E0 = _base_081C15E0 + _off_081C15E0;
    _cyc_081C15E0 += runtime_mem_cycles(_ea_081C15E0, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C15E0u, _ea_081C15E0 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_081C15E0 & ~3u, g_cpu.R[6]);
    g_cpu.R[5] = _post_081C15E0;
    g_cpu.R[15] = 0x081C15E4u;
    runtime_tick(_cyc_081C15E0);
    /* 081C15E4  081c15e4 A b 0x081c1684 */
    g_cpu.R[15] = 0x081C15E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15E4 = 1u;
    _cyc_081C15E4 = 3u;
    g_cpu.R[15] = 0x081C1684u;
    runtime_tick(_cyc_081C15E4);
    gf_memory_reads_arm_at_081C1684();
    return;
    g_cpu.R[15] = 0x081C15E8u;
    runtime_tick(_cyc_081C15E4);
    /* fall-through to 0x081C15E8 */
    g_cpu.R[15] = 0x081C15E8u;
    runtime_dispatch(0x081C15E8u);
    return;
}


/* 0x081C167C  mode=arm  end=0x081C1684  branches=0  indirect */
void gf_memory_writes_arm_at_081C167C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C167Cu);
    /* 081C167C  081c167c A str r2,[r4,#0x18] */
    g_cpu.R[15] = 0x081C167Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C167C = 1u;
    _cyc_081C167C = 1u;
    uint32_t _base_081C167C = g_cpu.R[4];
    uint32_t _off_081C167C;
    _off_081C167C = 0x00000018u;
    uint32_t _ea_081C167C = _base_081C167C + _off_081C167C;
    uint32_t _post_081C167C = _base_081C167C + _off_081C167C;
    _cyc_081C167C += runtime_mem_cycles(_ea_081C167C, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C167Cu, _ea_081C167C & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_081C167C & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x081C1680u;
    runtime_tick(_cyc_081C167C);
    /* 081C1680  081c1680 A str r3,[r4,#0x28] */
    g_cpu.R[15] = 0x081C1680u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1680 = 1u;
    _cyc_081C1680 = 1u;
    uint32_t _base_081C1680 = g_cpu.R[4];
    uint32_t _off_081C1680;
    _off_081C1680 = 0x00000028u;
    uint32_t _ea_081C1680 = _base_081C1680 + _off_081C1680;
    uint32_t _post_081C1680 = _base_081C1680 + _off_081C1680;
    _cyc_081C1680 += runtime_mem_cycles(_ea_081C1680, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C1680u, _ea_081C1680 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_081C1680 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x081C1684u;
    runtime_tick(_cyc_081C1680);
    /* fall-through to 0x081C1684 */
    g_cpu.R[15] = 0x081C1684u;
    runtime_dispatch(0x081C1684u);
    return;
}
