// Generated from a user supplied Golden Sun: The Lost Age ROM.
// memory_transfer_arm: functions grouped by observable CPU/hardware operations.
#include "runtime_arm.h"
#include "recompiled.h"

/* 0x08000428  mode=arm  end=0x08000458  branches=1  indirect */
void gf_memory_transfer_arm_at_08000428(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08000428u);
    /* 08000428  08000428 A mov r0,#0x12 */
    g_cpu.R[15] = 0x08000428u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000428 = 1u;
    _cyc_08000428 = 1u;
    uint32_t _r_08000428;
    _r_08000428 = 0x00000012u;
    g_cpu.R[0] = _r_08000428;
    g_cpu.R[15] = 0x0800042Cu;
    runtime_tick(_cyc_08000428);
    /* 0800042C  0800042c A msr cpsr_cf,r0 */
    g_cpu.R[15] = 0x0800042Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800042C = 1u;
    _cyc_0800042C = 1u;
    uint32_t _msrv_0800042C;
    _msrv_0800042C = g_cpu.R[0];
    runtime_msr_cpsr(_msrv_0800042C, 9u);
    g_cpu.R[15] = 0x08000430u;
    runtime_tick(_cyc_0800042C);
    /* 08000430  08000430 A ldr r13,[r15,#0x28] */
    g_cpu.R[15] = 0x08000430u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000430 = 1u;
    _cyc_08000430 = 2u;
    uint32_t _base_08000430 = 0x08000438u;
    uint32_t _off_08000430;
    _off_08000430 = 0x00000028u;
    uint32_t _ea_08000430 = _base_08000430 + _off_08000430;
    uint32_t _post_08000430 = _base_08000430 + _off_08000430;
    _cyc_08000430 += runtime_mem_cycles(_ea_08000430, 4u, 0u);
    uint32_t _v_08000430;
    { uint32_t _w = bus_read_u32(_ea_08000430 & ~3u); uint32_t _rot = (_ea_08000430 & 3u) * 8u; _v_08000430 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[13] = _v_08000430;
    g_cpu.R[15] = 0x08000434u;
    runtime_tick(_cyc_08000430);
    /* 08000434  08000434 A mov r0,#0x1f */
    g_cpu.R[15] = 0x08000434u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000434 = 1u;
    _cyc_08000434 = 1u;
    uint32_t _r_08000434;
    _r_08000434 = 0x0000001Fu;
    g_cpu.R[0] = _r_08000434;
    g_cpu.R[15] = 0x08000438u;
    runtime_tick(_cyc_08000434);
    /* 08000438  08000438 A msr cpsr_cf,r0 */
    g_cpu.R[15] = 0x08000438u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000438 = 1u;
    _cyc_08000438 = 1u;
    uint32_t _msrv_08000438;
    _msrv_08000438 = g_cpu.R[0];
    runtime_msr_cpsr(_msrv_08000438, 9u);
    g_cpu.R[15] = 0x0800043Cu;
    runtime_tick(_cyc_08000438);
    /* 0800043C  0800043c A ldr r13,[r15,#0x18] */
    g_cpu.R[15] = 0x0800043Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800043C = 1u;
    _cyc_0800043C = 2u;
    uint32_t _base_0800043C = 0x08000444u;
    uint32_t _off_0800043C;
    _off_0800043C = 0x00000018u;
    uint32_t _ea_0800043C = _base_0800043C + _off_0800043C;
    uint32_t _post_0800043C = _base_0800043C + _off_0800043C;
    _cyc_0800043C += runtime_mem_cycles(_ea_0800043C, 4u, 0u);
    uint32_t _v_0800043C;
    { uint32_t _w = bus_read_u32(_ea_0800043C & ~3u); uint32_t _rot = (_ea_0800043C & 3u) * 8u; _v_0800043C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[13] = _v_0800043C;
    g_cpu.R[15] = 0x08000440u;
    runtime_tick(_cyc_0800043C);
    /* 08000440  08000440 A ldr r1,[r15,#0x1c] */
    g_cpu.R[15] = 0x08000440u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000440 = 1u;
    _cyc_08000440 = 2u;
    uint32_t _base_08000440 = 0x08000448u;
    uint32_t _off_08000440;
    _off_08000440 = 0x0000001Cu;
    uint32_t _ea_08000440 = _base_08000440 + _off_08000440;
    uint32_t _post_08000440 = _base_08000440 + _off_08000440;
    _cyc_08000440 += runtime_mem_cycles(_ea_08000440, 4u, 0u);
    uint32_t _v_08000440;
    { uint32_t _w = bus_read_u32(_ea_08000440 & ~3u); uint32_t _rot = (_ea_08000440 & 3u) * 8u; _v_08000440 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08000440;
    g_cpu.R[15] = 0x08000444u;
    runtime_tick(_cyc_08000440);
    /* 08000444  08000444 A add r0,r15,#0x26c */
    g_cpu.R[15] = 0x08000444u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000444 = 1u;
    _cyc_08000444 = 1u;
    uint32_t _rn_08000444 = 0x0800044Cu;
    uint32_t _r_08000444;
    _r_08000444 = _rn_08000444 + 0x0000026Cu;
    g_cpu.R[0] = _r_08000444;
    g_cpu.R[15] = 0x08000448u;
    runtime_tick(_cyc_08000444);
    /* 08000448  08000448 A str r0,[r1] */
    g_cpu.R[15] = 0x08000448u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000448 = 1u;
    _cyc_08000448 = 1u;
    uint32_t _base_08000448 = g_cpu.R[1];
    uint32_t _off_08000448;
    _off_08000448 = 0x00000000u;
    uint32_t _ea_08000448 = _base_08000448 + _off_08000448;
    uint32_t _post_08000448 = _base_08000448 + _off_08000448;
    _cyc_08000448 += runtime_mem_cycles(_ea_08000448, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08000448u, _ea_08000448 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08000448 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0800044Cu;
    runtime_tick(_cyc_08000448);
    /* 0800044C  0800044c A ldr r1,[r15,#0x14] */
    g_cpu.R[15] = 0x0800044Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800044C = 1u;
    _cyc_0800044C = 2u;
    uint32_t _base_0800044C = 0x08000454u;
    uint32_t _off_0800044C;
    _off_0800044C = 0x00000014u;
    uint32_t _ea_0800044C = _base_0800044C + _off_0800044C;
    uint32_t _post_0800044C = _base_0800044C + _off_0800044C;
    _cyc_0800044C += runtime_mem_cycles(_ea_0800044C, 4u, 0u);
    uint32_t _v_0800044C;
    { uint32_t _w = bus_read_u32(_ea_0800044C & ~3u); uint32_t _rot = (_ea_0800044C & 3u) * 8u; _v_0800044C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0800044C;
    g_cpu.R[15] = 0x08000450u;
    runtime_tick(_cyc_0800044C);
    /* 08000450  08000450 A mov r14,r15 */
    g_cpu.R[15] = 0x08000450u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000450 = 1u;
    _cyc_08000450 = 1u;
    uint32_t _rm_08000450 = 0x08000458u;
    uint32_t _op2_08000450;
    uint32_t _co_08000450;
    _op2_08000450 = _rm_08000450;
    _co_08000450 = cpsr_c();
    uint32_t _r_08000450;
    _r_08000450 = _op2_08000450;
    g_cpu.R[14] = _r_08000450;
    g_cpu.R[15] = 0x08000454u;
    runtime_tick(_cyc_08000450);
    /* 08000454  08000454 A bx r1 */
    g_cpu.R[15] = 0x08000454u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000454 = 1u;
    _cyc_08000454 = 3u;
    uint32_t _bxt_08000454 = g_cpu.R[1];
    g_cpu.R[15] = _bxt_08000454 & ~1u;
    runtime_tick(_cyc_08000454);
    runtime_dispatch_with_exchange(_bxt_08000454);
    return;
    g_cpu.R[15] = 0x08000458u;
    runtime_tick(_cyc_08000454);
    /* fall-through to 0x08000458 */
    g_cpu.R[15] = 0x08000458u;
    runtime_dispatch(0x08000458u);
    return;
}


/* 0x08001724  mode=arm  end=0x08001738  branches=3  indirect */
void gf_memory_transfer_arm_at_08001724(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08001724u);
L_08001724:
    /* 08001724  08001724 A ldrb r3,[r0],#0x1 */
    g_cpu.R[15] = 0x08001724u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001724 = 1u;
    _cyc_08001724 = 2u;
    uint32_t _base_08001724 = g_cpu.R[0];
    uint32_t _off_08001724;
    _off_08001724 = 0x00000001u;
    uint32_t _ea_08001724 = _base_08001724;
    uint32_t _post_08001724 = _base_08001724 + _off_08001724;
    _cyc_08001724 += runtime_mem_cycles(_ea_08001724, 1u, 0u);
    uint32_t _v_08001724;
    _v_08001724 = bus_read_u8(_ea_08001724);
    if (0u != 3u) g_cpu.R[0] = _post_08001724;
    g_cpu.R[3] = _v_08001724;
    g_cpu.R[15] = 0x08001728u;
    runtime_tick(_cyc_08001724);
    /* 08001728  08001728 A strb r3,[r1],#0x1 */
    g_cpu.R[15] = 0x08001728u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001728 = 1u;
    _cyc_08001728 = 1u;
    uint32_t _base_08001728 = g_cpu.R[1];
    uint32_t _off_08001728;
    _off_08001728 = 0x00000001u;
    uint32_t _ea_08001728 = _base_08001728;
    uint32_t _post_08001728 = _base_08001728 + _off_08001728;
    _cyc_08001728 += runtime_mem_cycles(_ea_08001728, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08001728u, _ea_08001728, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_08001728, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[1] = _post_08001728;
    g_cpu.R[15] = 0x0800172Cu;
    runtime_tick(_cyc_08001728);
    /* 0800172C  0800172c A movs r14,r14,lsl #1 */
    g_cpu.R[15] = 0x0800172Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800172C = 1u;
    _cyc_0800172C = 1u;
    uint32_t _rm_0800172C = g_cpu.R[14];
    uint32_t _op2_0800172C;
    uint32_t _co_0800172C;
    _op2_0800172C = _rm_0800172C << 1;
    _co_0800172C = (_rm_0800172C >> 31) & 1u;
    uint32_t _r_0800172C;
    _r_0800172C = _op2_0800172C;
    arm_set_nzc_logic(_r_0800172C, _co_0800172C);
    g_cpu.R[14] = _r_0800172C;
    g_cpu.R[15] = 0x08001730u;
    runtime_tick(_cyc_0800172C);
    /* 08001730  08001730 A bcc 0x08001724 */
    g_cpu.R[15] = 0x08001730u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001730 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08001730 = 3u;
        g_cpu.R[15] = 0x08001724u;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08001730u, 0x08001724u, 0u, 0u);
        runtime_tick(_cyc_08001730);
        goto L_08001724;
    }
    g_cpu.R[15] = 0x08001734u;
    runtime_tick(_cyc_08001730);
    /* 08001734  08001734 A beq 0x08001660 */
    g_cpu.R[15] = 0x08001734u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001734 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08001734 = 3u;
        g_cpu.R[15] = 0x08001660u;
        runtime_tick(_cyc_08001734);
        gf_memory_reads_arm_at_08001660();
        return;
    }
    g_cpu.R[15] = 0x08001738u;
    runtime_tick(_cyc_08001734);
    /* fall-through to 0x08001738 */
    g_cpu.R[15] = 0x08001738u;
    runtime_dispatch(0x08001738u);
    return;
}


/* 0x080128A8  mode=arm  end=0x080128DC  branches=3 */
void gf_memory_transfer_arm_at_080128A8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080128A8u);
    /* 080128A8  080128a8 A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x080128A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128A8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080128A8 = 1u;
        uint32_t _rn_080128A8 = g_cpu.R[0];
        uint32_t _r_080128A8;
        _r_080128A8 = _rn_080128A8 & 0x01E00000u;
        g_cpu.R[4] = _r_080128A8;
    }
    g_cpu.R[15] = 0x080128ACu;
    runtime_tick(_cyc_080128A8);
    /* 080128AC  080128ac A stm r13!,{r5,r6,r7,r9,r14} */
    g_cpu.R[15] = 0x080128ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128AC = 1u;
    _cyc_080128AC = 1u;
    uint32_t _b_080128AC = g_cpu.R[13];
    uint32_t _a_080128AC = _b_080128AC - 20u;
    uint32_t _fb_080128AC = _b_080128AC - 20u;
    _cyc_080128AC += runtime_mem_cycles(_a_080128AC & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080128ACu, _a_080128AC & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_080128AC & ~3u, g_cpu.R[5]);
    _a_080128AC += 4u;
    _cyc_080128AC += runtime_mem_cycles(_a_080128AC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080128ACu, _a_080128AC & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_080128AC & ~3u, g_cpu.R[6]);
    _a_080128AC += 4u;
    _cyc_080128AC += runtime_mem_cycles(_a_080128AC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080128ACu, _a_080128AC & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_080128AC & ~3u, g_cpu.R[7]);
    _a_080128AC += 4u;
    _cyc_080128AC += runtime_mem_cycles(_a_080128AC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080128ACu, _a_080128AC & ~3u, g_cpu.R[9], 4u);
    bus_write_u32(_a_080128AC & ~3u, g_cpu.R[9]);
    _a_080128AC += 4u;
    _cyc_080128AC += runtime_mem_cycles(_a_080128AC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080128ACu, _a_080128AC & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_080128AC & ~3u, g_cpu.R[14]);
    _a_080128AC += 4u;
    g_cpu.R[13] = _fb_080128AC;
    g_cpu.R[15] = 0x080128B0u;
    runtime_tick(_cyc_080128AC);
    /* 080128B0  080128b0 A ldrb r2,[r0],#0x1 */
    g_cpu.R[15] = 0x080128B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128B0 = 1u;
    _cyc_080128B0 = 2u;
    uint32_t _base_080128B0 = g_cpu.R[0];
    uint32_t _off_080128B0;
    _off_080128B0 = 0x00000001u;
    uint32_t _ea_080128B0 = _base_080128B0;
    uint32_t _post_080128B0 = _base_080128B0 + _off_080128B0;
    _cyc_080128B0 += runtime_mem_cycles(_ea_080128B0, 1u, 0u);
    uint32_t _v_080128B0;
    _v_080128B0 = bus_read_u8(_ea_080128B0);
    if (0u != 2u) g_cpu.R[0] = _post_080128B0;
    g_cpu.R[2] = _v_080128B0;
    g_cpu.R[15] = 0x080128B4u;
    runtime_tick(_cyc_080128B0);
    /* 080128B4  080128b4 A cmps r2,#0x0 */
    g_cpu.R[15] = 0x080128B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128B4 = 1u;
    _cyc_080128B4 = 1u;
    uint32_t _rn_080128B4 = g_cpu.R[2];
    uint32_t _r_080128B4;
    _r_080128B4 = _rn_080128B4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080128B4, 0x00000000u, _r_080128B4);
    g_cpu.R[15] = 0x080128B8u;
    runtime_tick(_cyc_080128B4);
    /* 080128B8  080128b8 A bne 0x08012af0 */
    g_cpu.R[15] = 0x080128B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128B8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080128B8 = 3u;
        g_cpu.R[15] = 0x08012AF0u;
        runtime_tick(_cyc_080128B8);
        gf_indirect_control_flow_arm_at_08012AF0();
        return;
    }
    g_cpu.R[15] = 0x080128BCu;
    runtime_tick(_cyc_080128B8);
    /* 080128BC  080128bc A sub r1,r1,#0x1 */
    g_cpu.R[15] = 0x080128BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128BC = 1u;
    _cyc_080128BC = 1u;
    uint32_t _rn_080128BC = g_cpu.R[1];
    uint32_t _r_080128BC;
    _r_080128BC = _rn_080128BC - 0x00000001u;
    g_cpu.R[1] = _r_080128BC;
    g_cpu.R[15] = 0x080128C0u;
    runtime_tick(_cyc_080128BC);
    /* 080128C0  080128c0 A add r9,r1,#0x21 */
    g_cpu.R[15] = 0x080128C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128C0 = 1u;
    _cyc_080128C0 = 1u;
    uint32_t _rn_080128C0 = g_cpu.R[1];
    uint32_t _r_080128C0;
    _r_080128C0 = _rn_080128C0 + 0x00000021u;
    g_cpu.R[9] = _r_080128C0;
    g_cpu.R[15] = 0x080128C4u;
    runtime_tick(_cyc_080128C0);
    /* 080128C4  080128c4 A ands r2,r0,#0x1 */
    g_cpu.R[15] = 0x080128C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128C4 = 1u;
    _cyc_080128C4 = 1u;
    uint32_t _rn_080128C4 = g_cpu.R[0];
    uint32_t _r_080128C4;
    _r_080128C4 = _rn_080128C4 & 0x00000001u;
    arm_set_nzc_logic(_r_080128C4, cpsr_c());
    g_cpu.R[2] = _r_080128C4;
    g_cpu.R[15] = 0x080128C8u;
    runtime_tick(_cyc_080128C4);
    /* 080128C8  080128c8 A mov r4,r2,lsl #3 */
    g_cpu.R[15] = 0x080128C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128C8 = 1u;
    _cyc_080128C8 = 1u;
    uint32_t _rm_080128C8 = g_cpu.R[2];
    uint32_t _op2_080128C8;
    uint32_t _co_080128C8;
    _op2_080128C8 = _rm_080128C8 << 3;
    _co_080128C8 = (_rm_080128C8 >> 29) & 1u;
    uint32_t _r_080128C8;
    _r_080128C8 = _op2_080128C8;
    g_cpu.R[4] = _r_080128C8;
    g_cpu.R[15] = 0x080128CCu;
    runtime_tick(_cyc_080128C8);
    /* 080128CC  080128cc A ldrbne r2,[r0],#0x1 */
    g_cpu.R[15] = 0x080128CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128CC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080128CC = 2u;
        uint32_t _base_080128CC = g_cpu.R[0];
        uint32_t _off_080128CC;
        _off_080128CC = 0x00000001u;
        uint32_t _ea_080128CC = _base_080128CC;
        uint32_t _post_080128CC = _base_080128CC + _off_080128CC;
        _cyc_080128CC += runtime_mem_cycles(_ea_080128CC, 1u, 0u);
        uint32_t _v_080128CC;
        _v_080128CC = bus_read_u8(_ea_080128CC);
        if (0u != 2u) g_cpu.R[0] = _post_080128CC;
        g_cpu.R[2] = _v_080128CC;
    }
    g_cpu.R[15] = 0x080128D0u;
    runtime_tick(_cyc_080128CC);
    /* 080128D0  080128d0 A subs r4,r4,#0x10 */
    g_cpu.R[15] = 0x080128D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128D0 = 1u;
    _cyc_080128D0 = 1u;
    uint32_t _rn_080128D0 = g_cpu.R[4];
    uint32_t _r_080128D0;
    _r_080128D0 = _rn_080128D0 - 0x00000010u;
    arm_set_nzcv_sub(_rn_080128D0, 0x00000010u, _r_080128D0);
    g_cpu.R[4] = _r_080128D0;
    g_cpu.R[15] = 0x080128D4u;
    runtime_tick(_cyc_080128D0);
    /* 080128D4  080128d4 A blmi 0x08012ad0 */
    g_cpu.R[15] = 0x080128D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128D4 = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_080128D4 = 3u;
        g_cpu.R[14] = 0x080128D8u;
        g_cpu.R[15] = 0x08012AD0u;
        runtime_call_push_return(0x080128D8u);
        runtime_tick(_cyc_080128D4);
        _cyc_080128D4 = 0u;
        gf_memory_reads_arm_at_08012AD0();
        if (g_cpu.R[15] != 0x080128D8u) { runtime_call_cancel_return(0x080128D8u); return; }
    }
    g_cpu.R[15] = 0x080128D8u;
    runtime_tick(_cyc_080128D4);
    /* 080128D8  080128d8 A b 0x080128f4 */
    g_cpu.R[15] = 0x080128D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128D8 = 1u;
    _cyc_080128D8 = 3u;
    g_cpu.R[15] = 0x080128F4u;
    runtime_tick(_cyc_080128D8);
    gf_indirect_control_flow_arm_at_080128F4();
    return;
    g_cpu.R[15] = 0x080128DCu;
    runtime_tick(_cyc_080128D8);
    /* fall-through to 0x080128DC */
    g_cpu.R[15] = 0x080128DCu;
    runtime_dispatch(0x080128DCu);
    return;
}


/* 0x080128DC  mode=arm  end=0x080128F4  branches=16 */
void gf_memory_transfer_arm_at_080128DC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080128DCu);
    /* 080128DC  080128dc A strb r2,[r1,#0x1]! */
    g_cpu.R[15] = 0x080128DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128DC = 1u;
    _cyc_080128DC = 1u;
    uint32_t _base_080128DC = g_cpu.R[1];
    uint32_t _off_080128DC;
    _off_080128DC = 0x00000001u;
    uint32_t _ea_080128DC = _base_080128DC + _off_080128DC;
    uint32_t _post_080128DC = _base_080128DC + _off_080128DC;
    _cyc_080128DC += runtime_mem_cycles(_ea_080128DC, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080128DCu, _ea_080128DC, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_080128DC, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[1] = _ea_080128DC;
    g_cpu.R[15] = 0x080128E0u;
    runtime_tick(_cyc_080128DC);
    /* 080128E0  080128e0 A mov r2,r2,lsr #8 */
    g_cpu.R[15] = 0x080128E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128E0 = 1u;
    _cyc_080128E0 = 1u;
    uint32_t _rm_080128E0 = g_cpu.R[2];
    uint32_t _op2_080128E0;
    uint32_t _co_080128E0;
    _op2_080128E0 = _rm_080128E0 >> 8;
    _co_080128E0 = (_rm_080128E0 >> 7) & 1u;
    uint32_t _r_080128E0;
    _r_080128E0 = _op2_080128E0;
    g_cpu.R[2] = _r_080128E0;
    g_cpu.R[15] = 0x080128E4u;
    runtime_tick(_cyc_080128E0);
    /* 080128E4  080128e4 A subs r4,r4,#0x9 */
    g_cpu.R[15] = 0x080128E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128E4 = 1u;
    _cyc_080128E4 = 1u;
    uint32_t _rn_080128E4 = g_cpu.R[4];
    uint32_t _r_080128E4;
    _r_080128E4 = _rn_080128E4 - 0x00000009u;
    arm_set_nzcv_sub(_rn_080128E4, 0x00000009u, _r_080128E4);
    g_cpu.R[4] = _r_080128E4;
    g_cpu.R[15] = 0x080128E8u;
    runtime_tick(_cyc_080128E4);
    /* 080128E8  080128e8 A ldrhmi r3,[r0],#0x2 */
    g_cpu.R[15] = 0x080128E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128E8 = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_080128E8 = 2u;
        uint32_t _base_080128E8 = g_cpu.R[0];
        uint32_t _off_080128E8;
        _off_080128E8 = 0x00000002u;
        uint32_t _ea_080128E8 = _base_080128E8;
        uint32_t _post_080128E8 = _base_080128E8 + _off_080128E8;
        _cyc_080128E8 += runtime_mem_cycles(_ea_080128E8, 2u, 0u);
        uint32_t _v_080128E8;
        { uint32_t _h = bus_read_u16(_ea_080128E8 & ~1u); if (_ea_080128E8 & 1u) _v_080128E8 = ((_h >> 8) | (_h << 24)); else _v_080128E8 = _h; }
        if (0u != 3u) g_cpu.R[0] = _post_080128E8;
        g_cpu.R[3] = _v_080128E8;
    }
    g_cpu.R[15] = 0x080128ECu;
    runtime_tick(_cyc_080128E8);
    /* 080128EC  080128ec A addmi r4,r4,#0x10 */
    g_cpu.R[15] = 0x080128ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128EC = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_080128EC = 1u;
        uint32_t _rn_080128EC = g_cpu.R[4];
        uint32_t _r_080128EC;
        _r_080128EC = _rn_080128EC + 0x00000010u;
        g_cpu.R[4] = _r_080128EC;
    }
    g_cpu.R[15] = 0x080128F0u;
    runtime_tick(_cyc_080128EC);
    /* 080128F0  080128f0 A orrmi r2,r2,r3,lsl r4 */
    g_cpu.R[15] = 0x080128F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128F0 = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_080128F0 = 2u;
        uint32_t _rm_080128F0 = g_cpu.R[3];
        uint32_t _op2_080128F0;
        uint32_t _co_080128F0;
        uint32_t _cnt_080128F0 = (g_cpu.R[4]) & 0xFFu;
        if (_cnt_080128F0 == 0)      { _op2_080128F0 = _rm_080128F0; _co_080128F0 = cpsr_c(); }
        else if (_cnt_080128F0 < 32) { _op2_080128F0 = _rm_080128F0 << _cnt_080128F0; _co_080128F0 = (_rm_080128F0 >> (32u - _cnt_080128F0)) & 1u; }
        else if (_cnt_080128F0 == 32){ _op2_080128F0 = 0u; _co_080128F0 = _rm_080128F0 & 1u; }
        else                                { _op2_080128F0 = 0u; _co_080128F0 = 0u; }
        uint32_t _rn_080128F0 = g_cpu.R[2];
        uint32_t _r_080128F0;
        _r_080128F0 = _rn_080128F0 | _op2_080128F0;
        g_cpu.R[2] = _r_080128F0;
    }
    g_cpu.R[15] = 0x080128F4u;
    runtime_tick(_cyc_080128F0);
    /* fall-through to 0x080128F4 */
    g_cpu.R[15] = 0x080128F4u;
    runtime_dispatch(0x080128F4u);
    return;
}


/* 0x080129CC  mode=arm  end=0x080129E4  branches=2 */
void gf_memory_transfer_arm_at_080129CC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080129CCu);
    /* 080129CC  080129cc A ldrhmi r3,[r0],#0x2 */
    g_cpu.R[15] = 0x080129CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129CC = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_080129CC = 2u;
        uint32_t _base_080129CC = g_cpu.R[0];
        uint32_t _off_080129CC;
        _off_080129CC = 0x00000002u;
        uint32_t _ea_080129CC = _base_080129CC;
        uint32_t _post_080129CC = _base_080129CC + _off_080129CC;
        _cyc_080129CC += runtime_mem_cycles(_ea_080129CC, 2u, 0u);
        uint32_t _v_080129CC;
        { uint32_t _h = bus_read_u16(_ea_080129CC & ~1u); if (_ea_080129CC & 1u) _v_080129CC = ((_h >> 8) | (_h << 24)); else _v_080129CC = _h; }
        if (0u != 3u) g_cpu.R[0] = _post_080129CC;
        g_cpu.R[3] = _v_080129CC;
    }
    g_cpu.R[15] = 0x080129D0u;
    runtime_tick(_cyc_080129CC);
    /* 080129D0  080129d0 A addmi r4,r4,#0x10 */
    g_cpu.R[15] = 0x080129D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129D0 = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_080129D0 = 1u;
        uint32_t _rn_080129D0 = g_cpu.R[4];
        uint32_t _r_080129D0;
        _r_080129D0 = _rn_080129D0 + 0x00000010u;
        g_cpu.R[4] = _r_080129D0;
    }
    g_cpu.R[15] = 0x080129D4u;
    runtime_tick(_cyc_080129D0);
    /* 080129D4  080129d4 A orrmi r2,r2,r3,lsl r4 */
    g_cpu.R[15] = 0x080129D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129D4 = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_080129D4 = 2u;
        uint32_t _rm_080129D4 = g_cpu.R[3];
        uint32_t _op2_080129D4;
        uint32_t _co_080129D4;
        uint32_t _cnt_080129D4 = (g_cpu.R[4]) & 0xFFu;
        if (_cnt_080129D4 == 0)      { _op2_080129D4 = _rm_080129D4; _co_080129D4 = cpsr_c(); }
        else if (_cnt_080129D4 < 32) { _op2_080129D4 = _rm_080129D4 << _cnt_080129D4; _co_080129D4 = (_rm_080129D4 >> (32u - _cnt_080129D4)) & 1u; }
        else if (_cnt_080129D4 == 32){ _op2_080129D4 = 0u; _co_080129D4 = _rm_080129D4 & 1u; }
        else                                { _op2_080129D4 = 0u; _co_080129D4 = 0u; }
        uint32_t _rn_080129D4 = g_cpu.R[2];
        uint32_t _r_080129D4;
        _r_080129D4 = _rn_080129D4 | _op2_080129D4;
        g_cpu.R[2] = _r_080129D4;
    }
    g_cpu.R[15] = 0x080129D8u;
    runtime_tick(_cyc_080129D4);
    /* 080129D8  080129d8 A movs r5,r5,lsr #1 */
    g_cpu.R[15] = 0x080129D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129D8 = 1u;
    _cyc_080129D8 = 1u;
    uint32_t _rm_080129D8 = g_cpu.R[5];
    uint32_t _op2_080129D8;
    uint32_t _co_080129D8;
    _op2_080129D8 = _rm_080129D8 >> 1;
    _co_080129D8 = (_rm_080129D8 >> 0) & 1u;
    uint32_t _r_080129D8;
    _r_080129D8 = _op2_080129D8;
    arm_set_nzc_logic(_r_080129D8, _co_080129D8);
    g_cpu.R[5] = _r_080129D8;
    g_cpu.R[15] = 0x080129DCu;
    runtime_tick(_cyc_080129D8);
    /* 080129DC  080129dc A ldrbcs r7,[r1,-r6] */
    g_cpu.R[15] = 0x080129DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129DC = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_080129DC = 2u;
        uint32_t _base_080129DC = g_cpu.R[1];
        uint32_t _off_080129DC;
        uint32_t _morm_080129DC = g_cpu.R[6];
        _off_080129DC = _morm_080129DC;
        uint32_t _ea_080129DC = _base_080129DC - _off_080129DC;
        uint32_t _post_080129DC = _base_080129DC - _off_080129DC;
        _cyc_080129DC += runtime_mem_cycles(_ea_080129DC, 1u, 0u);
        uint32_t _v_080129DC;
        _v_080129DC = bus_read_u8(_ea_080129DC);
        g_cpu.R[7] = _v_080129DC;
    }
    g_cpu.R[15] = 0x080129E0u;
    runtime_tick(_cyc_080129DC);
    /* 080129E0  080129e0 A strbcs r7,[r1,#0x1]! */
    g_cpu.R[15] = 0x080129E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129E0 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_080129E0 = 1u;
        uint32_t _base_080129E0 = g_cpu.R[1];
        uint32_t _off_080129E0;
        _off_080129E0 = 0x00000001u;
        uint32_t _ea_080129E0 = _base_080129E0 + _off_080129E0;
        uint32_t _post_080129E0 = _base_080129E0 + _off_080129E0;
        _cyc_080129E0 += runtime_mem_cycles(_ea_080129E0, 1u, 0u);
        runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080129E0u, _ea_080129E0, (uint32_t)(g_cpu.R[7] & 0xFFu), 1u);
        bus_write_u8(_ea_080129E0, (uint8_t)(g_cpu.R[7] & 0xFFu));
        g_cpu.R[1] = _ea_080129E0;
    }
    g_cpu.R[15] = 0x080129E4u;
    runtime_tick(_cyc_080129E0);
    /* fall-through to 0x080129E4 */
    g_cpu.R[15] = 0x080129E4u;
    runtime_dispatch(0x080129E4u);
    return;
}


/* 0x080129E4  mode=arm  end=0x08012A00  branches=2 */
void gf_memory_transfer_arm_at_080129E4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080129E4u);
L_080129E4:
    /* 080129E4  080129e4 A ldrb r7,[r1,-r6] */
    g_cpu.R[15] = 0x080129E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129E4 = 1u;
    _cyc_080129E4 = 2u;
    uint32_t _base_080129E4 = g_cpu.R[1];
    uint32_t _off_080129E4;
    uint32_t _morm_080129E4 = g_cpu.R[6];
    _off_080129E4 = _morm_080129E4;
    uint32_t _ea_080129E4 = _base_080129E4 - _off_080129E4;
    uint32_t _post_080129E4 = _base_080129E4 - _off_080129E4;
    _cyc_080129E4 += runtime_mem_cycles(_ea_080129E4, 1u, 0u);
    uint32_t _v_080129E4;
    _v_080129E4 = bus_read_u8(_ea_080129E4);
    g_cpu.R[7] = _v_080129E4;
    g_cpu.R[15] = 0x080129E8u;
    runtime_tick(_cyc_080129E4);
    /* 080129E8  080129e8 A strb r7,[r1,#0x1]! */
    g_cpu.R[15] = 0x080129E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129E8 = 1u;
    _cyc_080129E8 = 1u;
    uint32_t _base_080129E8 = g_cpu.R[1];
    uint32_t _off_080129E8;
    _off_080129E8 = 0x00000001u;
    uint32_t _ea_080129E8 = _base_080129E8 + _off_080129E8;
    uint32_t _post_080129E8 = _base_080129E8 + _off_080129E8;
    _cyc_080129E8 += runtime_mem_cycles(_ea_080129E8, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080129E8u, _ea_080129E8, (uint32_t)(g_cpu.R[7] & 0xFFu), 1u);
    bus_write_u8(_ea_080129E8, (uint8_t)(g_cpu.R[7] & 0xFFu));
    g_cpu.R[1] = _ea_080129E8;
    g_cpu.R[15] = 0x080129ECu;
    runtime_tick(_cyc_080129E8);
    /* 080129EC  080129ec A ldrb r7,[r1,-r6] */
    g_cpu.R[15] = 0x080129ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129EC = 1u;
    _cyc_080129EC = 2u;
    uint32_t _base_080129EC = g_cpu.R[1];
    uint32_t _off_080129EC;
    uint32_t _morm_080129EC = g_cpu.R[6];
    _off_080129EC = _morm_080129EC;
    uint32_t _ea_080129EC = _base_080129EC - _off_080129EC;
    uint32_t _post_080129EC = _base_080129EC - _off_080129EC;
    _cyc_080129EC += runtime_mem_cycles(_ea_080129EC, 1u, 0u);
    uint32_t _v_080129EC;
    _v_080129EC = bus_read_u8(_ea_080129EC);
    g_cpu.R[7] = _v_080129EC;
    g_cpu.R[15] = 0x080129F0u;
    runtime_tick(_cyc_080129EC);
    /* 080129F0  080129f0 A strb r7,[r1,#0x1]! */
    g_cpu.R[15] = 0x080129F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129F0 = 1u;
    _cyc_080129F0 = 1u;
    uint32_t _base_080129F0 = g_cpu.R[1];
    uint32_t _off_080129F0;
    _off_080129F0 = 0x00000001u;
    uint32_t _ea_080129F0 = _base_080129F0 + _off_080129F0;
    uint32_t _post_080129F0 = _base_080129F0 + _off_080129F0;
    _cyc_080129F0 += runtime_mem_cycles(_ea_080129F0, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080129F0u, _ea_080129F0, (uint32_t)(g_cpu.R[7] & 0xFFu), 1u);
    bus_write_u8(_ea_080129F0, (uint8_t)(g_cpu.R[7] & 0xFFu));
    g_cpu.R[1] = _ea_080129F0;
    g_cpu.R[15] = 0x080129F4u;
    runtime_tick(_cyc_080129F0);
    /* 080129F4  080129f4 A subs r5,r5,#0x1 */
    g_cpu.R[15] = 0x080129F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129F4 = 1u;
    _cyc_080129F4 = 1u;
    uint32_t _rn_080129F4 = g_cpu.R[5];
    uint32_t _r_080129F4;
    _r_080129F4 = _rn_080129F4 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080129F4, 0x00000001u, _r_080129F4);
    g_cpu.R[5] = _r_080129F4;
    g_cpu.R[15] = 0x080129F8u;
    runtime_tick(_cyc_080129F4);
    /* 080129F8  080129f8 A bne 0x080129e4 */
    g_cpu.R[15] = 0x080129F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129F8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080129F8 = 3u;
        g_cpu.R[15] = 0x080129E4u;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x080129F8u, 0x080129E4u, 0u, 0u);
        runtime_tick(_cyc_080129F8);
        goto L_080129E4;
    }
    g_cpu.R[15] = 0x080129FCu;
    runtime_tick(_cyc_080129F8);
    /* 080129FC  080129fc A b 0x080128f4 */
    g_cpu.R[15] = 0x080129FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129FC = 1u;
    _cyc_080129FC = 3u;
    g_cpu.R[15] = 0x080128F4u;
    runtime_tick(_cyc_080129FC);
    gf_indirect_control_flow_arm_at_080128F4();
    return;
    g_cpu.R[15] = 0x08012A00u;
    runtime_tick(_cyc_080129FC);
    /* fall-through to 0x08012A00 */
    g_cpu.R[15] = 0x08012A00u;
    runtime_dispatch(0x08012A00u);
    return;
}


/* 0x08012B14  mode=arm  end=0x08012B1C  branches=5 */
void gf_memory_transfer_arm_at_08012B14(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012B14u);
    /* 08012B14  08012b14 A ldrb r3,[r0],#0x1 */
    g_cpu.R[15] = 0x08012B14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B14 = 1u;
    _cyc_08012B14 = 2u;
    uint32_t _base_08012B14 = g_cpu.R[0];
    uint32_t _off_08012B14;
    _off_08012B14 = 0x00000001u;
    uint32_t _ea_08012B14 = _base_08012B14;
    uint32_t _post_08012B14 = _base_08012B14 + _off_08012B14;
    _cyc_08012B14 += runtime_mem_cycles(_ea_08012B14, 1u, 0u);
    uint32_t _v_08012B14;
    _v_08012B14 = bus_read_u8(_ea_08012B14);
    if (0u != 3u) g_cpu.R[0] = _post_08012B14;
    g_cpu.R[3] = _v_08012B14;
    g_cpu.R[15] = 0x08012B18u;
    runtime_tick(_cyc_08012B14);
    /* 08012B18  08012b18 A strb r3,[r1],#0x1 */
    g_cpu.R[15] = 0x08012B18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B18 = 1u;
    _cyc_08012B18 = 1u;
    uint32_t _base_08012B18 = g_cpu.R[1];
    uint32_t _off_08012B18;
    _off_08012B18 = 0x00000001u;
    uint32_t _ea_08012B18 = _base_08012B18;
    uint32_t _post_08012B18 = _base_08012B18 + _off_08012B18;
    _cyc_08012B18 += runtime_mem_cycles(_ea_08012B18, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08012B18u, _ea_08012B18, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_08012B18, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[1] = _post_08012B18;
    g_cpu.R[15] = 0x08012B1Cu;
    runtime_tick(_cyc_08012B18);
    /* fall-through to 0x08012B1C */
    g_cpu.R[15] = 0x08012B1Cu;
    runtime_dispatch(0x08012B1Cu);
    return;
}


/* 0x08012B40  mode=arm  end=0x08012B5C  branches=2 */
void gf_memory_transfer_arm_at_08012B40(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012B40u);
L_08012B40:
    /* 08012B40  08012b40 A ldrb r4,[r1,-r2] */
    g_cpu.R[15] = 0x08012B40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B40 = 1u;
    _cyc_08012B40 = 2u;
    uint32_t _base_08012B40 = g_cpu.R[1];
    uint32_t _off_08012B40;
    uint32_t _morm_08012B40 = g_cpu.R[2];
    _off_08012B40 = _morm_08012B40;
    uint32_t _ea_08012B40 = _base_08012B40 - _off_08012B40;
    uint32_t _post_08012B40 = _base_08012B40 - _off_08012B40;
    _cyc_08012B40 += runtime_mem_cycles(_ea_08012B40, 1u, 0u);
    uint32_t _v_08012B40;
    _v_08012B40 = bus_read_u8(_ea_08012B40);
    g_cpu.R[4] = _v_08012B40;
    g_cpu.R[15] = 0x08012B44u;
    runtime_tick(_cyc_08012B40);
    /* 08012B44  08012b44 A strb r4,[r1],#0x1 */
    g_cpu.R[15] = 0x08012B44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B44 = 1u;
    _cyc_08012B44 = 1u;
    uint32_t _base_08012B44 = g_cpu.R[1];
    uint32_t _off_08012B44;
    _off_08012B44 = 0x00000001u;
    uint32_t _ea_08012B44 = _base_08012B44;
    uint32_t _post_08012B44 = _base_08012B44 + _off_08012B44;
    _cyc_08012B44 += runtime_mem_cycles(_ea_08012B44, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08012B44u, _ea_08012B44, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_08012B44, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[1] = _post_08012B44;
    g_cpu.R[15] = 0x08012B48u;
    runtime_tick(_cyc_08012B44);
    /* 08012B48  08012b48 A subs r3,r3,#0x1 */
    g_cpu.R[15] = 0x08012B48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B48 = 1u;
    _cyc_08012B48 = 1u;
    uint32_t _rn_08012B48 = g_cpu.R[3];
    uint32_t _r_08012B48;
    _r_08012B48 = _rn_08012B48 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08012B48, 0x00000001u, _r_08012B48);
    g_cpu.R[3] = _r_08012B48;
    g_cpu.R[15] = 0x08012B4Cu;
    runtime_tick(_cyc_08012B48);
    /* 08012B4C  08012b4c A bne 0x08012b40 */
    g_cpu.R[15] = 0x08012B4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B4C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08012B4C = 3u;
        g_cpu.R[15] = 0x08012B40u;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08012B4Cu, 0x08012B40u, 0u, 0u);
        runtime_tick(_cyc_08012B4C);
        goto L_08012B40;
    }
    g_cpu.R[15] = 0x08012B50u;
    runtime_tick(_cyc_08012B4C);
    /* 08012B50  08012b50 A ldrb r4,[r1,-r2] */
    g_cpu.R[15] = 0x08012B50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B50 = 1u;
    _cyc_08012B50 = 2u;
    uint32_t _base_08012B50 = g_cpu.R[1];
    uint32_t _off_08012B50;
    uint32_t _morm_08012B50 = g_cpu.R[2];
    _off_08012B50 = _morm_08012B50;
    uint32_t _ea_08012B50 = _base_08012B50 - _off_08012B50;
    uint32_t _post_08012B50 = _base_08012B50 - _off_08012B50;
    _cyc_08012B50 += runtime_mem_cycles(_ea_08012B50, 1u, 0u);
    uint32_t _v_08012B50;
    _v_08012B50 = bus_read_u8(_ea_08012B50);
    g_cpu.R[4] = _v_08012B50;
    g_cpu.R[15] = 0x08012B54u;
    runtime_tick(_cyc_08012B50);
    /* 08012B54  08012b54 A strb r4,[r1],#0x1 */
    g_cpu.R[15] = 0x08012B54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B54 = 1u;
    _cyc_08012B54 = 1u;
    uint32_t _base_08012B54 = g_cpu.R[1];
    uint32_t _off_08012B54;
    _off_08012B54 = 0x00000001u;
    uint32_t _ea_08012B54 = _base_08012B54;
    uint32_t _post_08012B54 = _base_08012B54 + _off_08012B54;
    _cyc_08012B54 += runtime_mem_cycles(_ea_08012B54, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08012B54u, _ea_08012B54, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_08012B54, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[1] = _post_08012B54;
    g_cpu.R[15] = 0x08012B58u;
    runtime_tick(_cyc_08012B54);
    /* 08012B58  08012b58 A b 0x08012b1c */
    g_cpu.R[15] = 0x08012B58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B58 = 1u;
    _cyc_08012B58 = 3u;
    g_cpu.R[15] = 0x08012B1Cu;
    runtime_tick(_cyc_08012B58);
    gf_indirect_control_flow_arm_at_08012B1C();
    return;
    g_cpu.R[15] = 0x08012B5Cu;
    runtime_tick(_cyc_08012B58);
    /* fall-through to 0x08012B5C */
    g_cpu.R[15] = 0x08012B5Cu;
    runtime_dispatch(0x08012B5Cu);
    return;
}


/* 0x08021084  mode=arm  end=0x080210A8  branches=2  indirect */
void gf_memory_transfer_arm_at_08021084(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021084u);
    /* 08021084  08021084 A ldrsh r6,[r0,#0x4] */
    g_cpu.R[15] = 0x08021084u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021084 = 1u;
    _cyc_08021084 = 2u;
    uint32_t _base_08021084 = g_cpu.R[0];
    uint32_t _off_08021084;
    _off_08021084 = 0x00000004u;
    uint32_t _ea_08021084 = _base_08021084 + _off_08021084;
    uint32_t _post_08021084 = _base_08021084 + _off_08021084;
    _cyc_08021084 += runtime_mem_cycles(_ea_08021084, 2u, 0u);
    uint32_t _v_08021084;
    if (_ea_08021084 & 1u) _v_08021084 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08021084);
    else _v_08021084 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08021084);
    g_cpu.R[6] = _v_08021084;
    g_cpu.R[15] = 0x08021088u;
    runtime_tick(_cyc_08021084);
    /* 08021088  08021088 A ldr r7,[r0,#0x8] */
    g_cpu.R[15] = 0x08021088u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021088 = 1u;
    _cyc_08021088 = 2u;
    uint32_t _base_08021088 = g_cpu.R[0];
    uint32_t _off_08021088;
    _off_08021088 = 0x00000008u;
    uint32_t _ea_08021088 = _base_08021088 + _off_08021088;
    uint32_t _post_08021088 = _base_08021088 + _off_08021088;
    _cyc_08021088 += runtime_mem_cycles(_ea_08021088, 4u, 0u);
    uint32_t _v_08021088;
    { uint32_t _w = bus_read_u32(_ea_08021088 & ~3u); uint32_t _rot = (_ea_08021088 & 3u) * 8u; _v_08021088 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_08021088;
    g_cpu.R[15] = 0x0802108Cu;
    runtime_tick(_cyc_08021088);
    /* 0802108C  0802108c A ldr r8,[r0,#0xc] */
    g_cpu.R[15] = 0x0802108Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802108C = 1u;
    _cyc_0802108C = 2u;
    uint32_t _base_0802108C = g_cpu.R[0];
    uint32_t _off_0802108C;
    _off_0802108C = 0x0000000Cu;
    uint32_t _ea_0802108C = _base_0802108C + _off_0802108C;
    uint32_t _post_0802108C = _base_0802108C + _off_0802108C;
    _cyc_0802108C += runtime_mem_cycles(_ea_0802108C, 4u, 0u);
    uint32_t _v_0802108C;
    { uint32_t _w = bus_read_u32(_ea_0802108C & ~3u); uint32_t _rot = (_ea_0802108C & 3u) * 8u; _v_0802108C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[8] = _v_0802108C;
    g_cpu.R[15] = 0x08021090u;
    runtime_tick(_cyc_0802108C);
    /* 08021090  08021090 A ldrsh r5,[r0],#0x20 */
    g_cpu.R[15] = 0x08021090u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021090 = 1u;
    _cyc_08021090 = 2u;
    uint32_t _base_08021090 = g_cpu.R[0];
    uint32_t _off_08021090;
    _off_08021090 = 0x00000020u;
    uint32_t _ea_08021090 = _base_08021090;
    uint32_t _post_08021090 = _base_08021090 + _off_08021090;
    _cyc_08021090 += runtime_mem_cycles(_ea_08021090, 2u, 0u);
    uint32_t _v_08021090;
    if (_ea_08021090 & 1u) _v_08021090 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08021090);
    else _v_08021090 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08021090);
    if (0u != 5u) g_cpu.R[0] = _post_08021090;
    g_cpu.R[5] = _v_08021090;
    g_cpu.R[15] = 0x08021094u;
    runtime_tick(_cyc_08021090);
    /* 08021094  08021094 A stm r13!,{r0} */
    g_cpu.R[15] = 0x08021094u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021094 = 1u;
    _cyc_08021094 = 1u;
    uint32_t _b_08021094 = g_cpu.R[13];
    uint32_t _a_08021094 = _b_08021094 - 4u;
    uint32_t _fb_08021094 = _b_08021094 - 4u;
    _cyc_08021094 += runtime_mem_cycles(_a_08021094 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021094u, _a_08021094 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_08021094 & ~3u, g_cpu.R[0]);
    _a_08021094 += 4u;
    g_cpu.R[13] = _fb_08021094;
    g_cpu.R[15] = 0x08021098u;
    runtime_tick(_cyc_08021094);
    /* 08021098  08021098 A mov r0,#0x1000 */
    g_cpu.R[15] = 0x08021098u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021098 = 1u;
    _cyc_08021098 = 1u;
    uint32_t _r_08021098;
    _r_08021098 = 0x00001000u;
    g_cpu.R[0] = _r_08021098;
    g_cpu.R[15] = 0x0802109Cu;
    runtime_tick(_cyc_08021098);
    /* 0802109C  0802109c A mov r7,r7,lsl #15 */
    g_cpu.R[15] = 0x0802109Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802109C = 1u;
    _cyc_0802109C = 1u;
    uint32_t _rm_0802109C = g_cpu.R[7];
    uint32_t _op2_0802109C;
    uint32_t _co_0802109C;
    _op2_0802109C = _rm_0802109C << 15;
    _co_0802109C = (_rm_0802109C >> 17) & 1u;
    uint32_t _r_0802109C;
    _r_0802109C = _op2_0802109C;
    g_cpu.R[7] = _r_0802109C;
    g_cpu.R[15] = 0x080210A0u;
    runtime_tick(_cyc_0802109C);
    /* 080210A0  080210a0 A mov r8,r8,lsl #15 */
    g_cpu.R[15] = 0x080210A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210A0 = 1u;
    _cyc_080210A0 = 1u;
    uint32_t _rm_080210A0 = g_cpu.R[8];
    uint32_t _op2_080210A0;
    uint32_t _co_080210A0;
    _op2_080210A0 = _rm_080210A0 << 15;
    _co_080210A0 = (_rm_080210A0 >> 17) & 1u;
    uint32_t _r_080210A0;
    _r_080210A0 = _op2_080210A0;
    g_cpu.R[8] = _r_080210A0;
    g_cpu.R[15] = 0x080210A4u;
    runtime_tick(_cyc_080210A0);
    /* 080210A4  080210a4 A add r4,r4,#0x1e000000 */
    g_cpu.R[15] = 0x080210A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210A4 = 1u;
    _cyc_080210A4 = 1u;
    uint32_t _rn_080210A4 = g_cpu.R[4];
    uint32_t _r_080210A4;
    _r_080210A4 = _rn_080210A4 + 0x1E000000u;
    g_cpu.R[4] = _r_080210A4;
    g_cpu.R[15] = 0x080210A8u;
    runtime_tick(_cyc_080210A4);
    /* fall-through to 0x080210A8 */
    g_cpu.R[15] = 0x080210A8u;
    runtime_dispatch(0x080210A8u);
    return;
}


/* 0x080210A8  mode=arm  end=0x080212D8  branches=2  indirect */
void gf_memory_transfer_arm_at_080210A8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080210A8u);
L_080210A8:
    /* 080210A8  080210a8 A mov r10,r8,lsr #26 */
    g_cpu.R[15] = 0x080210A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210A8 = 1u;
    _cyc_080210A8 = 1u;
    uint32_t _rm_080210A8 = g_cpu.R[8];
    uint32_t _op2_080210A8;
    uint32_t _co_080210A8;
    _op2_080210A8 = _rm_080210A8 >> 26;
    _co_080210A8 = (_rm_080210A8 >> 25) & 1u;
    uint32_t _r_080210A8;
    _r_080210A8 = _op2_080210A8;
    g_cpu.R[10] = _r_080210A8;
    g_cpu.R[15] = 0x080210ACu;
    runtime_tick(_cyc_080210A8);
    /* 080210AC  080210ac A add r11,r3,r7,lsr #26 */
    g_cpu.R[15] = 0x080210ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210AC = 1u;
    _cyc_080210AC = 1u;
    uint32_t _rm_080210AC = g_cpu.R[7];
    uint32_t _op2_080210AC;
    uint32_t _co_080210AC;
    _op2_080210AC = _rm_080210AC >> 26;
    _co_080210AC = (_rm_080210AC >> 25) & 1u;
    uint32_t _rn_080210AC = g_cpu.R[3];
    uint32_t _r_080210AC;
    _r_080210AC = _rn_080210AC + _op2_080210AC;
    g_cpu.R[11] = _r_080210AC;
    g_cpu.R[15] = 0x080210B0u;
    runtime_tick(_cyc_080210AC);
    /* 080210B0  080210b0 A ldrb r12,[r11,+r10]! */
    g_cpu.R[15] = 0x080210B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210B0 = 1u;
    _cyc_080210B0 = 2u;
    uint32_t _base_080210B0 = g_cpu.R[11];
    uint32_t _off_080210B0;
    uint32_t _morm_080210B0 = g_cpu.R[10];
    _off_080210B0 = _morm_080210B0 << 6;
    uint32_t _ea_080210B0 = _base_080210B0 + _off_080210B0;
    uint32_t _post_080210B0 = _base_080210B0 + _off_080210B0;
    _cyc_080210B0 += runtime_mem_cycles(_ea_080210B0, 1u, 0u);
    uint32_t _v_080210B0;
    _v_080210B0 = bus_read_u8(_ea_080210B0);
    if (11u != 12u) g_cpu.R[11] = _ea_080210B0;
    g_cpu.R[12] = _v_080210B0;
    g_cpu.R[15] = 0x080210B4u;
    runtime_tick(_cyc_080210B0);
    /* 080210B4  080210b4 A and r10,r4,r8,lsr #20 */
    g_cpu.R[15] = 0x080210B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210B4 = 1u;
    _cyc_080210B4 = 1u;
    uint32_t _rm_080210B4 = g_cpu.R[8];
    uint32_t _op2_080210B4;
    uint32_t _co_080210B4;
    _op2_080210B4 = _rm_080210B4 >> 20;
    _co_080210B4 = (_rm_080210B4 >> 19) & 1u;
    uint32_t _rn_080210B4 = g_cpu.R[4];
    uint32_t _r_080210B4;
    _r_080210B4 = _rn_080210B4 & _op2_080210B4;
    g_cpu.R[10] = _r_080210B4;
    g_cpu.R[15] = 0x080210B8u;
    runtime_tick(_cyc_080210B4);
    /* 080210B8  080210b8 A mov r14,r7,lsl #6 */
    g_cpu.R[15] = 0x080210B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210B8 = 1u;
    _cyc_080210B8 = 1u;
    uint32_t _rm_080210B8 = g_cpu.R[7];
    uint32_t _op2_080210B8;
    uint32_t _co_080210B8;
    _op2_080210B8 = _rm_080210B8 << 6;
    _co_080210B8 = (_rm_080210B8 >> 26) & 1u;
    uint32_t _r_080210B8;
    _r_080210B8 = _op2_080210B8;
    g_cpu.R[14] = _r_080210B8;
    g_cpu.R[15] = 0x080210BCu;
    runtime_tick(_cyc_080210B8);
    /* 080210BC  080210bc A add r10,r10,r14,lsr #29 */
    g_cpu.R[15] = 0x080210BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210BC = 1u;
    _cyc_080210BC = 1u;
    uint32_t _rm_080210BC = g_cpu.R[14];
    uint32_t _op2_080210BC;
    uint32_t _co_080210BC;
    _op2_080210BC = _rm_080210BC >> 29;
    _co_080210BC = (_rm_080210BC >> 28) & 1u;
    uint32_t _rn_080210BC = g_cpu.R[10];
    uint32_t _r_080210BC;
    _r_080210BC = _rn_080210BC + _op2_080210BC;
    g_cpu.R[10] = _r_080210BC;
    g_cpu.R[15] = 0x080210C0u;
    runtime_tick(_cyc_080210BC);
    /* 080210C0  080210c0 A add r10,r10,r2 */
    g_cpu.R[15] = 0x080210C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210C0 = 1u;
    _cyc_080210C0 = 1u;
    uint32_t _rm_080210C0 = g_cpu.R[2];
    uint32_t _op2_080210C0;
    uint32_t _co_080210C0;
    _op2_080210C0 = _rm_080210C0;
    _co_080210C0 = cpsr_c();
    uint32_t _rn_080210C0 = g_cpu.R[10];
    uint32_t _r_080210C0;
    _r_080210C0 = _rn_080210C0 + _op2_080210C0;
    g_cpu.R[10] = _r_080210C0;
    g_cpu.R[15] = 0x080210C4u;
    runtime_tick(_cyc_080210C0);
    /* 080210C4  080210c4 A cmps r12,#0x0 */
    g_cpu.R[15] = 0x080210C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210C4 = 1u;
    _cyc_080210C4 = 1u;
    uint32_t _rn_080210C4 = g_cpu.R[12];
    uint32_t _r_080210C4;
    _r_080210C4 = _rn_080210C4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080210C4, 0x00000000u, _r_080210C4);
    g_cpu.R[15] = 0x080210C8u;
    runtime_tick(_cyc_080210C4);
    /* 080210C8  080210c8 A ldrbne r12,[r10,+r12] */
    g_cpu.R[15] = 0x080210C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210C8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080210C8 = 2u;
        uint32_t _base_080210C8 = g_cpu.R[10];
        uint32_t _off_080210C8;
        uint32_t _morm_080210C8 = g_cpu.R[12];
        _off_080210C8 = _morm_080210C8 << 6;
        uint32_t _ea_080210C8 = _base_080210C8 + _off_080210C8;
        uint32_t _post_080210C8 = _base_080210C8 + _off_080210C8;
        _cyc_080210C8 += runtime_mem_cycles(_ea_080210C8, 1u, 0u);
        uint32_t _v_080210C8;
        _v_080210C8 = bus_read_u8(_ea_080210C8);
        g_cpu.R[12] = _v_080210C8;
    }
    g_cpu.R[15] = 0x080210CCu;
    runtime_tick(_cyc_080210C8);
    /* 080210CC  080210cc A cmps r12,#0x0 */
    g_cpu.R[15] = 0x080210CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210CC = 1u;
    _cyc_080210CC = 1u;
    uint32_t _rn_080210CC = g_cpu.R[12];
    uint32_t _r_080210CC;
    _r_080210CC = _rn_080210CC - 0x00000000u;
    arm_set_nzcv_sub(_rn_080210CC, 0x00000000u, _r_080210CC);
    g_cpu.R[15] = 0x080210D0u;
    runtime_tick(_cyc_080210CC);
    /* 080210D0  080210d0 A ldrbeq r12,[r11,-r0] */
    g_cpu.R[15] = 0x080210D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210D0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080210D0 = 2u;
        uint32_t _base_080210D0 = g_cpu.R[11];
        uint32_t _off_080210D0;
        uint32_t _morm_080210D0 = g_cpu.R[0];
        _off_080210D0 = _morm_080210D0;
        uint32_t _ea_080210D0 = _base_080210D0 - _off_080210D0;
        uint32_t _post_080210D0 = _base_080210D0 - _off_080210D0;
        _cyc_080210D0 += runtime_mem_cycles(_ea_080210D0, 1u, 0u);
        uint32_t _v_080210D0;
        _v_080210D0 = bus_read_u8(_ea_080210D0);
        g_cpu.R[12] = _v_080210D0;
    }
    g_cpu.R[15] = 0x080210D4u;
    runtime_tick(_cyc_080210D0);
    /* 080210D4  080210d4 A subeq r10,r10,#0x4000 */
    g_cpu.R[15] = 0x080210D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210D4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080210D4 = 1u;
        uint32_t _rn_080210D4 = g_cpu.R[10];
        uint32_t _r_080210D4;
        _r_080210D4 = _rn_080210D4 - 0x00004000u;
        g_cpu.R[10] = _r_080210D4;
    }
    g_cpu.R[15] = 0x080210D8u;
    runtime_tick(_cyc_080210D4);
    /* 080210D8  080210d8 A ldrbeq r12,[r10,+r12] */
    g_cpu.R[15] = 0x080210D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210D8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080210D8 = 2u;
        uint32_t _base_080210D8 = g_cpu.R[10];
        uint32_t _off_080210D8;
        uint32_t _morm_080210D8 = g_cpu.R[12];
        _off_080210D8 = _morm_080210D8 << 6;
        uint32_t _ea_080210D8 = _base_080210D8 + _off_080210D8;
        uint32_t _post_080210D8 = _base_080210D8 + _off_080210D8;
        _cyc_080210D8 += runtime_mem_cycles(_ea_080210D8, 1u, 0u);
        uint32_t _v_080210D8;
        _v_080210D8 = bus_read_u8(_ea_080210D8);
        g_cpu.R[12] = _v_080210D8;
    }
    g_cpu.R[15] = 0x080210DCu;
    runtime_tick(_cyc_080210D8);
    /* 080210DC  080210dc A add r7,r7,r5,lsl #15 */
    g_cpu.R[15] = 0x080210DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210DC = 1u;
    _cyc_080210DC = 1u;
    uint32_t _rm_080210DC = g_cpu.R[5];
    uint32_t _op2_080210DC;
    uint32_t _co_080210DC;
    _op2_080210DC = _rm_080210DC << 15;
    _co_080210DC = (_rm_080210DC >> 17) & 1u;
    uint32_t _rn_080210DC = g_cpu.R[7];
    uint32_t _r_080210DC;
    _r_080210DC = _rn_080210DC + _op2_080210DC;
    g_cpu.R[7] = _r_080210DC;
    g_cpu.R[15] = 0x080210E0u;
    runtime_tick(_cyc_080210DC);
    /* 080210E0  080210e0 A add r8,r8,r6,lsl #15 */
    g_cpu.R[15] = 0x080210E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210E0 = 1u;
    _cyc_080210E0 = 1u;
    uint32_t _rm_080210E0 = g_cpu.R[6];
    uint32_t _op2_080210E0;
    uint32_t _co_080210E0;
    _op2_080210E0 = _rm_080210E0 << 15;
    _co_080210E0 = (_rm_080210E0 >> 17) & 1u;
    uint32_t _rn_080210E0 = g_cpu.R[8];
    uint32_t _r_080210E0;
    _r_080210E0 = _rn_080210E0 + _op2_080210E0;
    g_cpu.R[8] = _r_080210E0;
    g_cpu.R[15] = 0x080210E4u;
    runtime_tick(_cyc_080210E0);
    /* 080210E4  080210e4 A mov r10,r8,lsr #26 */
    g_cpu.R[15] = 0x080210E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210E4 = 1u;
    _cyc_080210E4 = 1u;
    uint32_t _rm_080210E4 = g_cpu.R[8];
    uint32_t _op2_080210E4;
    uint32_t _co_080210E4;
    _op2_080210E4 = _rm_080210E4 >> 26;
    _co_080210E4 = (_rm_080210E4 >> 25) & 1u;
    uint32_t _r_080210E4;
    _r_080210E4 = _op2_080210E4;
    g_cpu.R[10] = _r_080210E4;
    g_cpu.R[15] = 0x080210E8u;
    runtime_tick(_cyc_080210E4);
    /* 080210E8  080210e8 A add r11,r3,r7,lsr #26 */
    g_cpu.R[15] = 0x080210E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210E8 = 1u;
    _cyc_080210E8 = 1u;
    uint32_t _rm_080210E8 = g_cpu.R[7];
    uint32_t _op2_080210E8;
    uint32_t _co_080210E8;
    _op2_080210E8 = _rm_080210E8 >> 26;
    _co_080210E8 = (_rm_080210E8 >> 25) & 1u;
    uint32_t _rn_080210E8 = g_cpu.R[3];
    uint32_t _r_080210E8;
    _r_080210E8 = _rn_080210E8 + _op2_080210E8;
    g_cpu.R[11] = _r_080210E8;
    g_cpu.R[15] = 0x080210ECu;
    runtime_tick(_cyc_080210E8);
    /* 080210EC  080210ec A ldrb r9,[r11,+r10]! */
    g_cpu.R[15] = 0x080210ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210EC = 1u;
    _cyc_080210EC = 2u;
    uint32_t _base_080210EC = g_cpu.R[11];
    uint32_t _off_080210EC;
    uint32_t _morm_080210EC = g_cpu.R[10];
    _off_080210EC = _morm_080210EC << 6;
    uint32_t _ea_080210EC = _base_080210EC + _off_080210EC;
    uint32_t _post_080210EC = _base_080210EC + _off_080210EC;
    _cyc_080210EC += runtime_mem_cycles(_ea_080210EC, 1u, 0u);
    uint32_t _v_080210EC;
    _v_080210EC = bus_read_u8(_ea_080210EC);
    if (11u != 9u) g_cpu.R[11] = _ea_080210EC;
    g_cpu.R[9] = _v_080210EC;
    g_cpu.R[15] = 0x080210F0u;
    runtime_tick(_cyc_080210EC);
    /* 080210F0  080210f0 A and r10,r4,r8,lsr #20 */
    g_cpu.R[15] = 0x080210F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210F0 = 1u;
    _cyc_080210F0 = 1u;
    uint32_t _rm_080210F0 = g_cpu.R[8];
    uint32_t _op2_080210F0;
    uint32_t _co_080210F0;
    _op2_080210F0 = _rm_080210F0 >> 20;
    _co_080210F0 = (_rm_080210F0 >> 19) & 1u;
    uint32_t _rn_080210F0 = g_cpu.R[4];
    uint32_t _r_080210F0;
    _r_080210F0 = _rn_080210F0 & _op2_080210F0;
    g_cpu.R[10] = _r_080210F0;
    g_cpu.R[15] = 0x080210F4u;
    runtime_tick(_cyc_080210F0);
    /* 080210F4  080210f4 A mov r14,r7,lsl #6 */
    g_cpu.R[15] = 0x080210F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210F4 = 1u;
    _cyc_080210F4 = 1u;
    uint32_t _rm_080210F4 = g_cpu.R[7];
    uint32_t _op2_080210F4;
    uint32_t _co_080210F4;
    _op2_080210F4 = _rm_080210F4 << 6;
    _co_080210F4 = (_rm_080210F4 >> 26) & 1u;
    uint32_t _r_080210F4;
    _r_080210F4 = _op2_080210F4;
    g_cpu.R[14] = _r_080210F4;
    g_cpu.R[15] = 0x080210F8u;
    runtime_tick(_cyc_080210F4);
    /* 080210F8  080210f8 A add r10,r10,r14,lsr #29 */
    g_cpu.R[15] = 0x080210F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210F8 = 1u;
    _cyc_080210F8 = 1u;
    uint32_t _rm_080210F8 = g_cpu.R[14];
    uint32_t _op2_080210F8;
    uint32_t _co_080210F8;
    _op2_080210F8 = _rm_080210F8 >> 29;
    _co_080210F8 = (_rm_080210F8 >> 28) & 1u;
    uint32_t _rn_080210F8 = g_cpu.R[10];
    uint32_t _r_080210F8;
    _r_080210F8 = _rn_080210F8 + _op2_080210F8;
    g_cpu.R[10] = _r_080210F8;
    g_cpu.R[15] = 0x080210FCu;
    runtime_tick(_cyc_080210F8);
    /* 080210FC  080210fc A add r10,r10,r2 */
    g_cpu.R[15] = 0x080210FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080210FC = 1u;
    _cyc_080210FC = 1u;
    uint32_t _rm_080210FC = g_cpu.R[2];
    uint32_t _op2_080210FC;
    uint32_t _co_080210FC;
    _op2_080210FC = _rm_080210FC;
    _co_080210FC = cpsr_c();
    uint32_t _rn_080210FC = g_cpu.R[10];
    uint32_t _r_080210FC;
    _r_080210FC = _rn_080210FC + _op2_080210FC;
    g_cpu.R[10] = _r_080210FC;
    g_cpu.R[15] = 0x08021100u;
    runtime_tick(_cyc_080210FC);
    /* 08021100  08021100 A cmps r9,#0x0 */
    g_cpu.R[15] = 0x08021100u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021100 = 1u;
    _cyc_08021100 = 1u;
    uint32_t _rn_08021100 = g_cpu.R[9];
    uint32_t _r_08021100;
    _r_08021100 = _rn_08021100 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021100, 0x00000000u, _r_08021100);
    g_cpu.R[15] = 0x08021104u;
    runtime_tick(_cyc_08021100);
    /* 08021104  08021104 A ldrbne r9,[r10,+r9] */
    g_cpu.R[15] = 0x08021104u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021104 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08021104 = 2u;
        uint32_t _base_08021104 = g_cpu.R[10];
        uint32_t _off_08021104;
        uint32_t _morm_08021104 = g_cpu.R[9];
        _off_08021104 = _morm_08021104 << 6;
        uint32_t _ea_08021104 = _base_08021104 + _off_08021104;
        uint32_t _post_08021104 = _base_08021104 + _off_08021104;
        _cyc_08021104 += runtime_mem_cycles(_ea_08021104, 1u, 0u);
        uint32_t _v_08021104;
        _v_08021104 = bus_read_u8(_ea_08021104);
        g_cpu.R[9] = _v_08021104;
    }
    g_cpu.R[15] = 0x08021108u;
    runtime_tick(_cyc_08021104);
    /* 08021108  08021108 A cmps r9,#0x0 */
    g_cpu.R[15] = 0x08021108u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021108 = 1u;
    _cyc_08021108 = 1u;
    uint32_t _rn_08021108 = g_cpu.R[9];
    uint32_t _r_08021108;
    _r_08021108 = _rn_08021108 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021108, 0x00000000u, _r_08021108);
    g_cpu.R[15] = 0x0802110Cu;
    runtime_tick(_cyc_08021108);
    /* 0802110C  0802110c A ldrbeq r9,[r11,-r0] */
    g_cpu.R[15] = 0x0802110Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802110C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0802110C = 2u;
        uint32_t _base_0802110C = g_cpu.R[11];
        uint32_t _off_0802110C;
        uint32_t _morm_0802110C = g_cpu.R[0];
        _off_0802110C = _morm_0802110C;
        uint32_t _ea_0802110C = _base_0802110C - _off_0802110C;
        uint32_t _post_0802110C = _base_0802110C - _off_0802110C;
        _cyc_0802110C += runtime_mem_cycles(_ea_0802110C, 1u, 0u);
        uint32_t _v_0802110C;
        _v_0802110C = bus_read_u8(_ea_0802110C);
        g_cpu.R[9] = _v_0802110C;
    }
    g_cpu.R[15] = 0x08021110u;
    runtime_tick(_cyc_0802110C);
    /* 08021110  08021110 A subeq r10,r10,#0x4000 */
    g_cpu.R[15] = 0x08021110u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021110 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021110 = 1u;
        uint32_t _rn_08021110 = g_cpu.R[10];
        uint32_t _r_08021110;
        _r_08021110 = _rn_08021110 - 0x00004000u;
        g_cpu.R[10] = _r_08021110;
    }
    g_cpu.R[15] = 0x08021114u;
    runtime_tick(_cyc_08021110);
    /* 08021114  08021114 A ldrbeq r9,[r10,+r9] */
    g_cpu.R[15] = 0x08021114u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021114 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021114 = 2u;
        uint32_t _base_08021114 = g_cpu.R[10];
        uint32_t _off_08021114;
        uint32_t _morm_08021114 = g_cpu.R[9];
        _off_08021114 = _morm_08021114 << 6;
        uint32_t _ea_08021114 = _base_08021114 + _off_08021114;
        uint32_t _post_08021114 = _base_08021114 + _off_08021114;
        _cyc_08021114 += runtime_mem_cycles(_ea_08021114, 1u, 0u);
        uint32_t _v_08021114;
        _v_08021114 = bus_read_u8(_ea_08021114);
        g_cpu.R[9] = _v_08021114;
    }
    g_cpu.R[15] = 0x08021118u;
    runtime_tick(_cyc_08021114);
    /* 08021118  08021118 A add r7,r7,r5,lsl #15 */
    g_cpu.R[15] = 0x08021118u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021118 = 1u;
    _cyc_08021118 = 1u;
    uint32_t _rm_08021118 = g_cpu.R[5];
    uint32_t _op2_08021118;
    uint32_t _co_08021118;
    _op2_08021118 = _rm_08021118 << 15;
    _co_08021118 = (_rm_08021118 >> 17) & 1u;
    uint32_t _rn_08021118 = g_cpu.R[7];
    uint32_t _r_08021118;
    _r_08021118 = _rn_08021118 + _op2_08021118;
    g_cpu.R[7] = _r_08021118;
    g_cpu.R[15] = 0x0802111Cu;
    runtime_tick(_cyc_08021118);
    /* 0802111C  0802111c A add r8,r8,r6,lsl #15 */
    g_cpu.R[15] = 0x0802111Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802111C = 1u;
    _cyc_0802111C = 1u;
    uint32_t _rm_0802111C = g_cpu.R[6];
    uint32_t _op2_0802111C;
    uint32_t _co_0802111C;
    _op2_0802111C = _rm_0802111C << 15;
    _co_0802111C = (_rm_0802111C >> 17) & 1u;
    uint32_t _rn_0802111C = g_cpu.R[8];
    uint32_t _r_0802111C;
    _r_0802111C = _rn_0802111C + _op2_0802111C;
    g_cpu.R[8] = _r_0802111C;
    g_cpu.R[15] = 0x08021120u;
    runtime_tick(_cyc_0802111C);
    /* 08021120  08021120 A orr r9,r12,r9,lsl #8 */
    g_cpu.R[15] = 0x08021120u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021120 = 1u;
    _cyc_08021120 = 1u;
    uint32_t _rm_08021120 = g_cpu.R[9];
    uint32_t _op2_08021120;
    uint32_t _co_08021120;
    _op2_08021120 = _rm_08021120 << 8;
    _co_08021120 = (_rm_08021120 >> 24) & 1u;
    uint32_t _rn_08021120 = g_cpu.R[12];
    uint32_t _r_08021120;
    _r_08021120 = _rn_08021120 | _op2_08021120;
    g_cpu.R[9] = _r_08021120;
    g_cpu.R[15] = 0x08021124u;
    runtime_tick(_cyc_08021120);
    /* 08021124  08021124 A strh r9,[r1],#0x2 */
    g_cpu.R[15] = 0x08021124u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021124 = 1u;
    _cyc_08021124 = 1u;
    uint32_t _base_08021124 = g_cpu.R[1];
    uint32_t _off_08021124;
    _off_08021124 = 0x00000002u;
    uint32_t _ea_08021124 = _base_08021124;
    uint32_t _post_08021124 = _base_08021124 + _off_08021124;
    _cyc_08021124 += runtime_mem_cycles(_ea_08021124, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021124u, _ea_08021124 & ~1u, (uint32_t)(g_cpu.R[9] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08021124 & ~1u, (uint16_t)(g_cpu.R[9] & 0xFFFFu));
    g_cpu.R[1] = _post_08021124;
    g_cpu.R[15] = 0x08021128u;
    runtime_tick(_cyc_08021124);
    /* 08021128  08021128 A mov r10,r8,lsr #26 */
    g_cpu.R[15] = 0x08021128u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021128 = 1u;
    _cyc_08021128 = 1u;
    uint32_t _rm_08021128 = g_cpu.R[8];
    uint32_t _op2_08021128;
    uint32_t _co_08021128;
    _op2_08021128 = _rm_08021128 >> 26;
    _co_08021128 = (_rm_08021128 >> 25) & 1u;
    uint32_t _r_08021128;
    _r_08021128 = _op2_08021128;
    g_cpu.R[10] = _r_08021128;
    g_cpu.R[15] = 0x0802112Cu;
    runtime_tick(_cyc_08021128);
    /* 0802112C  0802112c A add r11,r3,r7,lsr #26 */
    g_cpu.R[15] = 0x0802112Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802112C = 1u;
    _cyc_0802112C = 1u;
    uint32_t _rm_0802112C = g_cpu.R[7];
    uint32_t _op2_0802112C;
    uint32_t _co_0802112C;
    _op2_0802112C = _rm_0802112C >> 26;
    _co_0802112C = (_rm_0802112C >> 25) & 1u;
    uint32_t _rn_0802112C = g_cpu.R[3];
    uint32_t _r_0802112C;
    _r_0802112C = _rn_0802112C + _op2_0802112C;
    g_cpu.R[11] = _r_0802112C;
    g_cpu.R[15] = 0x08021130u;
    runtime_tick(_cyc_0802112C);
    /* 08021130  08021130 A ldrb r12,[r11,+r10]! */
    g_cpu.R[15] = 0x08021130u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021130 = 1u;
    _cyc_08021130 = 2u;
    uint32_t _base_08021130 = g_cpu.R[11];
    uint32_t _off_08021130;
    uint32_t _morm_08021130 = g_cpu.R[10];
    _off_08021130 = _morm_08021130 << 6;
    uint32_t _ea_08021130 = _base_08021130 + _off_08021130;
    uint32_t _post_08021130 = _base_08021130 + _off_08021130;
    _cyc_08021130 += runtime_mem_cycles(_ea_08021130, 1u, 0u);
    uint32_t _v_08021130;
    _v_08021130 = bus_read_u8(_ea_08021130);
    if (11u != 12u) g_cpu.R[11] = _ea_08021130;
    g_cpu.R[12] = _v_08021130;
    g_cpu.R[15] = 0x08021134u;
    runtime_tick(_cyc_08021130);
    /* 08021134  08021134 A and r10,r4,r8,lsr #20 */
    g_cpu.R[15] = 0x08021134u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021134 = 1u;
    _cyc_08021134 = 1u;
    uint32_t _rm_08021134 = g_cpu.R[8];
    uint32_t _op2_08021134;
    uint32_t _co_08021134;
    _op2_08021134 = _rm_08021134 >> 20;
    _co_08021134 = (_rm_08021134 >> 19) & 1u;
    uint32_t _rn_08021134 = g_cpu.R[4];
    uint32_t _r_08021134;
    _r_08021134 = _rn_08021134 & _op2_08021134;
    g_cpu.R[10] = _r_08021134;
    g_cpu.R[15] = 0x08021138u;
    runtime_tick(_cyc_08021134);
    /* 08021138  08021138 A mov r14,r7,lsl #6 */
    g_cpu.R[15] = 0x08021138u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021138 = 1u;
    _cyc_08021138 = 1u;
    uint32_t _rm_08021138 = g_cpu.R[7];
    uint32_t _op2_08021138;
    uint32_t _co_08021138;
    _op2_08021138 = _rm_08021138 << 6;
    _co_08021138 = (_rm_08021138 >> 26) & 1u;
    uint32_t _r_08021138;
    _r_08021138 = _op2_08021138;
    g_cpu.R[14] = _r_08021138;
    g_cpu.R[15] = 0x0802113Cu;
    runtime_tick(_cyc_08021138);
    /* 0802113C  0802113c A add r10,r10,r14,lsr #29 */
    g_cpu.R[15] = 0x0802113Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802113C = 1u;
    _cyc_0802113C = 1u;
    uint32_t _rm_0802113C = g_cpu.R[14];
    uint32_t _op2_0802113C;
    uint32_t _co_0802113C;
    _op2_0802113C = _rm_0802113C >> 29;
    _co_0802113C = (_rm_0802113C >> 28) & 1u;
    uint32_t _rn_0802113C = g_cpu.R[10];
    uint32_t _r_0802113C;
    _r_0802113C = _rn_0802113C + _op2_0802113C;
    g_cpu.R[10] = _r_0802113C;
    g_cpu.R[15] = 0x08021140u;
    runtime_tick(_cyc_0802113C);
    /* 08021140  08021140 A add r10,r10,r2 */
    g_cpu.R[15] = 0x08021140u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021140 = 1u;
    _cyc_08021140 = 1u;
    uint32_t _rm_08021140 = g_cpu.R[2];
    uint32_t _op2_08021140;
    uint32_t _co_08021140;
    _op2_08021140 = _rm_08021140;
    _co_08021140 = cpsr_c();
    uint32_t _rn_08021140 = g_cpu.R[10];
    uint32_t _r_08021140;
    _r_08021140 = _rn_08021140 + _op2_08021140;
    g_cpu.R[10] = _r_08021140;
    g_cpu.R[15] = 0x08021144u;
    runtime_tick(_cyc_08021140);
    /* 08021144  08021144 A cmps r12,#0x0 */
    g_cpu.R[15] = 0x08021144u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021144 = 1u;
    _cyc_08021144 = 1u;
    uint32_t _rn_08021144 = g_cpu.R[12];
    uint32_t _r_08021144;
    _r_08021144 = _rn_08021144 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021144, 0x00000000u, _r_08021144);
    g_cpu.R[15] = 0x08021148u;
    runtime_tick(_cyc_08021144);
    /* 08021148  08021148 A ldrbne r12,[r10,+r12] */
    g_cpu.R[15] = 0x08021148u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021148 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08021148 = 2u;
        uint32_t _base_08021148 = g_cpu.R[10];
        uint32_t _off_08021148;
        uint32_t _morm_08021148 = g_cpu.R[12];
        _off_08021148 = _morm_08021148 << 6;
        uint32_t _ea_08021148 = _base_08021148 + _off_08021148;
        uint32_t _post_08021148 = _base_08021148 + _off_08021148;
        _cyc_08021148 += runtime_mem_cycles(_ea_08021148, 1u, 0u);
        uint32_t _v_08021148;
        _v_08021148 = bus_read_u8(_ea_08021148);
        g_cpu.R[12] = _v_08021148;
    }
    g_cpu.R[15] = 0x0802114Cu;
    runtime_tick(_cyc_08021148);
    /* 0802114C  0802114c A cmps r12,#0x0 */
    g_cpu.R[15] = 0x0802114Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802114C = 1u;
    _cyc_0802114C = 1u;
    uint32_t _rn_0802114C = g_cpu.R[12];
    uint32_t _r_0802114C;
    _r_0802114C = _rn_0802114C - 0x00000000u;
    arm_set_nzcv_sub(_rn_0802114C, 0x00000000u, _r_0802114C);
    g_cpu.R[15] = 0x08021150u;
    runtime_tick(_cyc_0802114C);
    /* 08021150  08021150 A ldrbeq r12,[r11,-r0] */
    g_cpu.R[15] = 0x08021150u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021150 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021150 = 2u;
        uint32_t _base_08021150 = g_cpu.R[11];
        uint32_t _off_08021150;
        uint32_t _morm_08021150 = g_cpu.R[0];
        _off_08021150 = _morm_08021150;
        uint32_t _ea_08021150 = _base_08021150 - _off_08021150;
        uint32_t _post_08021150 = _base_08021150 - _off_08021150;
        _cyc_08021150 += runtime_mem_cycles(_ea_08021150, 1u, 0u);
        uint32_t _v_08021150;
        _v_08021150 = bus_read_u8(_ea_08021150);
        g_cpu.R[12] = _v_08021150;
    }
    g_cpu.R[15] = 0x08021154u;
    runtime_tick(_cyc_08021150);
    /* 08021154  08021154 A subeq r10,r10,#0x4000 */
    g_cpu.R[15] = 0x08021154u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021154 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021154 = 1u;
        uint32_t _rn_08021154 = g_cpu.R[10];
        uint32_t _r_08021154;
        _r_08021154 = _rn_08021154 - 0x00004000u;
        g_cpu.R[10] = _r_08021154;
    }
    g_cpu.R[15] = 0x08021158u;
    runtime_tick(_cyc_08021154);
    /* 08021158  08021158 A ldrbeq r12,[r10,+r12] */
    g_cpu.R[15] = 0x08021158u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021158 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021158 = 2u;
        uint32_t _base_08021158 = g_cpu.R[10];
        uint32_t _off_08021158;
        uint32_t _morm_08021158 = g_cpu.R[12];
        _off_08021158 = _morm_08021158 << 6;
        uint32_t _ea_08021158 = _base_08021158 + _off_08021158;
        uint32_t _post_08021158 = _base_08021158 + _off_08021158;
        _cyc_08021158 += runtime_mem_cycles(_ea_08021158, 1u, 0u);
        uint32_t _v_08021158;
        _v_08021158 = bus_read_u8(_ea_08021158);
        g_cpu.R[12] = _v_08021158;
    }
    g_cpu.R[15] = 0x0802115Cu;
    runtime_tick(_cyc_08021158);
    /* 0802115C  0802115c A add r7,r7,r5,lsl #15 */
    g_cpu.R[15] = 0x0802115Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802115C = 1u;
    _cyc_0802115C = 1u;
    uint32_t _rm_0802115C = g_cpu.R[5];
    uint32_t _op2_0802115C;
    uint32_t _co_0802115C;
    _op2_0802115C = _rm_0802115C << 15;
    _co_0802115C = (_rm_0802115C >> 17) & 1u;
    uint32_t _rn_0802115C = g_cpu.R[7];
    uint32_t _r_0802115C;
    _r_0802115C = _rn_0802115C + _op2_0802115C;
    g_cpu.R[7] = _r_0802115C;
    g_cpu.R[15] = 0x08021160u;
    runtime_tick(_cyc_0802115C);
    /* 08021160  08021160 A add r8,r8,r6,lsl #15 */
    g_cpu.R[15] = 0x08021160u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021160 = 1u;
    _cyc_08021160 = 1u;
    uint32_t _rm_08021160 = g_cpu.R[6];
    uint32_t _op2_08021160;
    uint32_t _co_08021160;
    _op2_08021160 = _rm_08021160 << 15;
    _co_08021160 = (_rm_08021160 >> 17) & 1u;
    uint32_t _rn_08021160 = g_cpu.R[8];
    uint32_t _r_08021160;
    _r_08021160 = _rn_08021160 + _op2_08021160;
    g_cpu.R[8] = _r_08021160;
    g_cpu.R[15] = 0x08021164u;
    runtime_tick(_cyc_08021160);
    /* 08021164  08021164 A mov r10,r8,lsr #26 */
    g_cpu.R[15] = 0x08021164u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021164 = 1u;
    _cyc_08021164 = 1u;
    uint32_t _rm_08021164 = g_cpu.R[8];
    uint32_t _op2_08021164;
    uint32_t _co_08021164;
    _op2_08021164 = _rm_08021164 >> 26;
    _co_08021164 = (_rm_08021164 >> 25) & 1u;
    uint32_t _r_08021164;
    _r_08021164 = _op2_08021164;
    g_cpu.R[10] = _r_08021164;
    g_cpu.R[15] = 0x08021168u;
    runtime_tick(_cyc_08021164);
    /* 08021168  08021168 A add r11,r3,r7,lsr #26 */
    g_cpu.R[15] = 0x08021168u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021168 = 1u;
    _cyc_08021168 = 1u;
    uint32_t _rm_08021168 = g_cpu.R[7];
    uint32_t _op2_08021168;
    uint32_t _co_08021168;
    _op2_08021168 = _rm_08021168 >> 26;
    _co_08021168 = (_rm_08021168 >> 25) & 1u;
    uint32_t _rn_08021168 = g_cpu.R[3];
    uint32_t _r_08021168;
    _r_08021168 = _rn_08021168 + _op2_08021168;
    g_cpu.R[11] = _r_08021168;
    g_cpu.R[15] = 0x0802116Cu;
    runtime_tick(_cyc_08021168);
    /* 0802116C  0802116c A ldrb r9,[r11,+r10]! */
    g_cpu.R[15] = 0x0802116Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802116C = 1u;
    _cyc_0802116C = 2u;
    uint32_t _base_0802116C = g_cpu.R[11];
    uint32_t _off_0802116C;
    uint32_t _morm_0802116C = g_cpu.R[10];
    _off_0802116C = _morm_0802116C << 6;
    uint32_t _ea_0802116C = _base_0802116C + _off_0802116C;
    uint32_t _post_0802116C = _base_0802116C + _off_0802116C;
    _cyc_0802116C += runtime_mem_cycles(_ea_0802116C, 1u, 0u);
    uint32_t _v_0802116C;
    _v_0802116C = bus_read_u8(_ea_0802116C);
    if (11u != 9u) g_cpu.R[11] = _ea_0802116C;
    g_cpu.R[9] = _v_0802116C;
    g_cpu.R[15] = 0x08021170u;
    runtime_tick(_cyc_0802116C);
    /* 08021170  08021170 A and r10,r4,r8,lsr #20 */
    g_cpu.R[15] = 0x08021170u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021170 = 1u;
    _cyc_08021170 = 1u;
    uint32_t _rm_08021170 = g_cpu.R[8];
    uint32_t _op2_08021170;
    uint32_t _co_08021170;
    _op2_08021170 = _rm_08021170 >> 20;
    _co_08021170 = (_rm_08021170 >> 19) & 1u;
    uint32_t _rn_08021170 = g_cpu.R[4];
    uint32_t _r_08021170;
    _r_08021170 = _rn_08021170 & _op2_08021170;
    g_cpu.R[10] = _r_08021170;
    g_cpu.R[15] = 0x08021174u;
    runtime_tick(_cyc_08021170);
    /* 08021174  08021174 A mov r14,r7,lsl #6 */
    g_cpu.R[15] = 0x08021174u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021174 = 1u;
    _cyc_08021174 = 1u;
    uint32_t _rm_08021174 = g_cpu.R[7];
    uint32_t _op2_08021174;
    uint32_t _co_08021174;
    _op2_08021174 = _rm_08021174 << 6;
    _co_08021174 = (_rm_08021174 >> 26) & 1u;
    uint32_t _r_08021174;
    _r_08021174 = _op2_08021174;
    g_cpu.R[14] = _r_08021174;
    g_cpu.R[15] = 0x08021178u;
    runtime_tick(_cyc_08021174);
    /* 08021178  08021178 A add r10,r10,r14,lsr #29 */
    g_cpu.R[15] = 0x08021178u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021178 = 1u;
    _cyc_08021178 = 1u;
    uint32_t _rm_08021178 = g_cpu.R[14];
    uint32_t _op2_08021178;
    uint32_t _co_08021178;
    _op2_08021178 = _rm_08021178 >> 29;
    _co_08021178 = (_rm_08021178 >> 28) & 1u;
    uint32_t _rn_08021178 = g_cpu.R[10];
    uint32_t _r_08021178;
    _r_08021178 = _rn_08021178 + _op2_08021178;
    g_cpu.R[10] = _r_08021178;
    g_cpu.R[15] = 0x0802117Cu;
    runtime_tick(_cyc_08021178);
    /* 0802117C  0802117c A add r10,r10,r2 */
    g_cpu.R[15] = 0x0802117Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802117C = 1u;
    _cyc_0802117C = 1u;
    uint32_t _rm_0802117C = g_cpu.R[2];
    uint32_t _op2_0802117C;
    uint32_t _co_0802117C;
    _op2_0802117C = _rm_0802117C;
    _co_0802117C = cpsr_c();
    uint32_t _rn_0802117C = g_cpu.R[10];
    uint32_t _r_0802117C;
    _r_0802117C = _rn_0802117C + _op2_0802117C;
    g_cpu.R[10] = _r_0802117C;
    g_cpu.R[15] = 0x08021180u;
    runtime_tick(_cyc_0802117C);
    /* 08021180  08021180 A cmps r9,#0x0 */
    g_cpu.R[15] = 0x08021180u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021180 = 1u;
    _cyc_08021180 = 1u;
    uint32_t _rn_08021180 = g_cpu.R[9];
    uint32_t _r_08021180;
    _r_08021180 = _rn_08021180 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021180, 0x00000000u, _r_08021180);
    g_cpu.R[15] = 0x08021184u;
    runtime_tick(_cyc_08021180);
    /* 08021184  08021184 A ldrbne r9,[r10,+r9] */
    g_cpu.R[15] = 0x08021184u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021184 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08021184 = 2u;
        uint32_t _base_08021184 = g_cpu.R[10];
        uint32_t _off_08021184;
        uint32_t _morm_08021184 = g_cpu.R[9];
        _off_08021184 = _morm_08021184 << 6;
        uint32_t _ea_08021184 = _base_08021184 + _off_08021184;
        uint32_t _post_08021184 = _base_08021184 + _off_08021184;
        _cyc_08021184 += runtime_mem_cycles(_ea_08021184, 1u, 0u);
        uint32_t _v_08021184;
        _v_08021184 = bus_read_u8(_ea_08021184);
        g_cpu.R[9] = _v_08021184;
    }
    g_cpu.R[15] = 0x08021188u;
    runtime_tick(_cyc_08021184);
    /* 08021188  08021188 A cmps r9,#0x0 */
    g_cpu.R[15] = 0x08021188u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021188 = 1u;
    _cyc_08021188 = 1u;
    uint32_t _rn_08021188 = g_cpu.R[9];
    uint32_t _r_08021188;
    _r_08021188 = _rn_08021188 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021188, 0x00000000u, _r_08021188);
    g_cpu.R[15] = 0x0802118Cu;
    runtime_tick(_cyc_08021188);
    /* 0802118C  0802118c A ldrbeq r9,[r11,-r0] */
    g_cpu.R[15] = 0x0802118Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802118C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0802118C = 2u;
        uint32_t _base_0802118C = g_cpu.R[11];
        uint32_t _off_0802118C;
        uint32_t _morm_0802118C = g_cpu.R[0];
        _off_0802118C = _morm_0802118C;
        uint32_t _ea_0802118C = _base_0802118C - _off_0802118C;
        uint32_t _post_0802118C = _base_0802118C - _off_0802118C;
        _cyc_0802118C += runtime_mem_cycles(_ea_0802118C, 1u, 0u);
        uint32_t _v_0802118C;
        _v_0802118C = bus_read_u8(_ea_0802118C);
        g_cpu.R[9] = _v_0802118C;
    }
    g_cpu.R[15] = 0x08021190u;
    runtime_tick(_cyc_0802118C);
    /* 08021190  08021190 A subeq r10,r10,#0x4000 */
    g_cpu.R[15] = 0x08021190u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021190 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021190 = 1u;
        uint32_t _rn_08021190 = g_cpu.R[10];
        uint32_t _r_08021190;
        _r_08021190 = _rn_08021190 - 0x00004000u;
        g_cpu.R[10] = _r_08021190;
    }
    g_cpu.R[15] = 0x08021194u;
    runtime_tick(_cyc_08021190);
    /* 08021194  08021194 A ldrbeq r9,[r10,+r9] */
    g_cpu.R[15] = 0x08021194u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021194 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021194 = 2u;
        uint32_t _base_08021194 = g_cpu.R[10];
        uint32_t _off_08021194;
        uint32_t _morm_08021194 = g_cpu.R[9];
        _off_08021194 = _morm_08021194 << 6;
        uint32_t _ea_08021194 = _base_08021194 + _off_08021194;
        uint32_t _post_08021194 = _base_08021194 + _off_08021194;
        _cyc_08021194 += runtime_mem_cycles(_ea_08021194, 1u, 0u);
        uint32_t _v_08021194;
        _v_08021194 = bus_read_u8(_ea_08021194);
        g_cpu.R[9] = _v_08021194;
    }
    g_cpu.R[15] = 0x08021198u;
    runtime_tick(_cyc_08021194);
    /* 08021198  08021198 A add r7,r7,r5,lsl #15 */
    g_cpu.R[15] = 0x08021198u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021198 = 1u;
    _cyc_08021198 = 1u;
    uint32_t _rm_08021198 = g_cpu.R[5];
    uint32_t _op2_08021198;
    uint32_t _co_08021198;
    _op2_08021198 = _rm_08021198 << 15;
    _co_08021198 = (_rm_08021198 >> 17) & 1u;
    uint32_t _rn_08021198 = g_cpu.R[7];
    uint32_t _r_08021198;
    _r_08021198 = _rn_08021198 + _op2_08021198;
    g_cpu.R[7] = _r_08021198;
    g_cpu.R[15] = 0x0802119Cu;
    runtime_tick(_cyc_08021198);
    /* 0802119C  0802119c A add r8,r8,r6,lsl #15 */
    g_cpu.R[15] = 0x0802119Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802119C = 1u;
    _cyc_0802119C = 1u;
    uint32_t _rm_0802119C = g_cpu.R[6];
    uint32_t _op2_0802119C;
    uint32_t _co_0802119C;
    _op2_0802119C = _rm_0802119C << 15;
    _co_0802119C = (_rm_0802119C >> 17) & 1u;
    uint32_t _rn_0802119C = g_cpu.R[8];
    uint32_t _r_0802119C;
    _r_0802119C = _rn_0802119C + _op2_0802119C;
    g_cpu.R[8] = _r_0802119C;
    g_cpu.R[15] = 0x080211A0u;
    runtime_tick(_cyc_0802119C);
    /* 080211A0  080211a0 A orr r9,r12,r9,lsl #8 */
    g_cpu.R[15] = 0x080211A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211A0 = 1u;
    _cyc_080211A0 = 1u;
    uint32_t _rm_080211A0 = g_cpu.R[9];
    uint32_t _op2_080211A0;
    uint32_t _co_080211A0;
    _op2_080211A0 = _rm_080211A0 << 8;
    _co_080211A0 = (_rm_080211A0 >> 24) & 1u;
    uint32_t _rn_080211A0 = g_cpu.R[12];
    uint32_t _r_080211A0;
    _r_080211A0 = _rn_080211A0 | _op2_080211A0;
    g_cpu.R[9] = _r_080211A0;
    g_cpu.R[15] = 0x080211A4u;
    runtime_tick(_cyc_080211A0);
    /* 080211A4  080211a4 A strh r9,[r1],#0x2 */
    g_cpu.R[15] = 0x080211A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211A4 = 1u;
    _cyc_080211A4 = 1u;
    uint32_t _base_080211A4 = g_cpu.R[1];
    uint32_t _off_080211A4;
    _off_080211A4 = 0x00000002u;
    uint32_t _ea_080211A4 = _base_080211A4;
    uint32_t _post_080211A4 = _base_080211A4 + _off_080211A4;
    _cyc_080211A4 += runtime_mem_cycles(_ea_080211A4, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080211A4u, _ea_080211A4 & ~1u, (uint32_t)(g_cpu.R[9] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080211A4 & ~1u, (uint16_t)(g_cpu.R[9] & 0xFFFFu));
    g_cpu.R[1] = _post_080211A4;
    g_cpu.R[15] = 0x080211A8u;
    runtime_tick(_cyc_080211A4);
    /* 080211A8  080211a8 A mov r10,r8,lsr #26 */
    g_cpu.R[15] = 0x080211A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211A8 = 1u;
    _cyc_080211A8 = 1u;
    uint32_t _rm_080211A8 = g_cpu.R[8];
    uint32_t _op2_080211A8;
    uint32_t _co_080211A8;
    _op2_080211A8 = _rm_080211A8 >> 26;
    _co_080211A8 = (_rm_080211A8 >> 25) & 1u;
    uint32_t _r_080211A8;
    _r_080211A8 = _op2_080211A8;
    g_cpu.R[10] = _r_080211A8;
    g_cpu.R[15] = 0x080211ACu;
    runtime_tick(_cyc_080211A8);
    /* 080211AC  080211ac A add r11,r3,r7,lsr #26 */
    g_cpu.R[15] = 0x080211ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211AC = 1u;
    _cyc_080211AC = 1u;
    uint32_t _rm_080211AC = g_cpu.R[7];
    uint32_t _op2_080211AC;
    uint32_t _co_080211AC;
    _op2_080211AC = _rm_080211AC >> 26;
    _co_080211AC = (_rm_080211AC >> 25) & 1u;
    uint32_t _rn_080211AC = g_cpu.R[3];
    uint32_t _r_080211AC;
    _r_080211AC = _rn_080211AC + _op2_080211AC;
    g_cpu.R[11] = _r_080211AC;
    g_cpu.R[15] = 0x080211B0u;
    runtime_tick(_cyc_080211AC);
    /* 080211B0  080211b0 A ldrb r12,[r11,+r10]! */
    g_cpu.R[15] = 0x080211B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211B0 = 1u;
    _cyc_080211B0 = 2u;
    uint32_t _base_080211B0 = g_cpu.R[11];
    uint32_t _off_080211B0;
    uint32_t _morm_080211B0 = g_cpu.R[10];
    _off_080211B0 = _morm_080211B0 << 6;
    uint32_t _ea_080211B0 = _base_080211B0 + _off_080211B0;
    uint32_t _post_080211B0 = _base_080211B0 + _off_080211B0;
    _cyc_080211B0 += runtime_mem_cycles(_ea_080211B0, 1u, 0u);
    uint32_t _v_080211B0;
    _v_080211B0 = bus_read_u8(_ea_080211B0);
    if (11u != 12u) g_cpu.R[11] = _ea_080211B0;
    g_cpu.R[12] = _v_080211B0;
    g_cpu.R[15] = 0x080211B4u;
    runtime_tick(_cyc_080211B0);
    /* 080211B4  080211b4 A and r10,r4,r8,lsr #20 */
    g_cpu.R[15] = 0x080211B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211B4 = 1u;
    _cyc_080211B4 = 1u;
    uint32_t _rm_080211B4 = g_cpu.R[8];
    uint32_t _op2_080211B4;
    uint32_t _co_080211B4;
    _op2_080211B4 = _rm_080211B4 >> 20;
    _co_080211B4 = (_rm_080211B4 >> 19) & 1u;
    uint32_t _rn_080211B4 = g_cpu.R[4];
    uint32_t _r_080211B4;
    _r_080211B4 = _rn_080211B4 & _op2_080211B4;
    g_cpu.R[10] = _r_080211B4;
    g_cpu.R[15] = 0x080211B8u;
    runtime_tick(_cyc_080211B4);
    /* 080211B8  080211b8 A mov r14,r7,lsl #6 */
    g_cpu.R[15] = 0x080211B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211B8 = 1u;
    _cyc_080211B8 = 1u;
    uint32_t _rm_080211B8 = g_cpu.R[7];
    uint32_t _op2_080211B8;
    uint32_t _co_080211B8;
    _op2_080211B8 = _rm_080211B8 << 6;
    _co_080211B8 = (_rm_080211B8 >> 26) & 1u;
    uint32_t _r_080211B8;
    _r_080211B8 = _op2_080211B8;
    g_cpu.R[14] = _r_080211B8;
    g_cpu.R[15] = 0x080211BCu;
    runtime_tick(_cyc_080211B8);
    /* 080211BC  080211bc A add r10,r10,r14,lsr #29 */
    g_cpu.R[15] = 0x080211BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211BC = 1u;
    _cyc_080211BC = 1u;
    uint32_t _rm_080211BC = g_cpu.R[14];
    uint32_t _op2_080211BC;
    uint32_t _co_080211BC;
    _op2_080211BC = _rm_080211BC >> 29;
    _co_080211BC = (_rm_080211BC >> 28) & 1u;
    uint32_t _rn_080211BC = g_cpu.R[10];
    uint32_t _r_080211BC;
    _r_080211BC = _rn_080211BC + _op2_080211BC;
    g_cpu.R[10] = _r_080211BC;
    g_cpu.R[15] = 0x080211C0u;
    runtime_tick(_cyc_080211BC);
    /* 080211C0  080211c0 A add r10,r10,r2 */
    g_cpu.R[15] = 0x080211C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211C0 = 1u;
    _cyc_080211C0 = 1u;
    uint32_t _rm_080211C0 = g_cpu.R[2];
    uint32_t _op2_080211C0;
    uint32_t _co_080211C0;
    _op2_080211C0 = _rm_080211C0;
    _co_080211C0 = cpsr_c();
    uint32_t _rn_080211C0 = g_cpu.R[10];
    uint32_t _r_080211C0;
    _r_080211C0 = _rn_080211C0 + _op2_080211C0;
    g_cpu.R[10] = _r_080211C0;
    g_cpu.R[15] = 0x080211C4u;
    runtime_tick(_cyc_080211C0);
    /* 080211C4  080211c4 A cmps r12,#0x0 */
    g_cpu.R[15] = 0x080211C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211C4 = 1u;
    _cyc_080211C4 = 1u;
    uint32_t _rn_080211C4 = g_cpu.R[12];
    uint32_t _r_080211C4;
    _r_080211C4 = _rn_080211C4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080211C4, 0x00000000u, _r_080211C4);
    g_cpu.R[15] = 0x080211C8u;
    runtime_tick(_cyc_080211C4);
    /* 080211C8  080211c8 A ldrbne r12,[r10,+r12] */
    g_cpu.R[15] = 0x080211C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211C8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080211C8 = 2u;
        uint32_t _base_080211C8 = g_cpu.R[10];
        uint32_t _off_080211C8;
        uint32_t _morm_080211C8 = g_cpu.R[12];
        _off_080211C8 = _morm_080211C8 << 6;
        uint32_t _ea_080211C8 = _base_080211C8 + _off_080211C8;
        uint32_t _post_080211C8 = _base_080211C8 + _off_080211C8;
        _cyc_080211C8 += runtime_mem_cycles(_ea_080211C8, 1u, 0u);
        uint32_t _v_080211C8;
        _v_080211C8 = bus_read_u8(_ea_080211C8);
        g_cpu.R[12] = _v_080211C8;
    }
    g_cpu.R[15] = 0x080211CCu;
    runtime_tick(_cyc_080211C8);
    /* 080211CC  080211cc A cmps r12,#0x0 */
    g_cpu.R[15] = 0x080211CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211CC = 1u;
    _cyc_080211CC = 1u;
    uint32_t _rn_080211CC = g_cpu.R[12];
    uint32_t _r_080211CC;
    _r_080211CC = _rn_080211CC - 0x00000000u;
    arm_set_nzcv_sub(_rn_080211CC, 0x00000000u, _r_080211CC);
    g_cpu.R[15] = 0x080211D0u;
    runtime_tick(_cyc_080211CC);
    /* 080211D0  080211d0 A ldrbeq r12,[r11,-r0] */
    g_cpu.R[15] = 0x080211D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211D0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080211D0 = 2u;
        uint32_t _base_080211D0 = g_cpu.R[11];
        uint32_t _off_080211D0;
        uint32_t _morm_080211D0 = g_cpu.R[0];
        _off_080211D0 = _morm_080211D0;
        uint32_t _ea_080211D0 = _base_080211D0 - _off_080211D0;
        uint32_t _post_080211D0 = _base_080211D0 - _off_080211D0;
        _cyc_080211D0 += runtime_mem_cycles(_ea_080211D0, 1u, 0u);
        uint32_t _v_080211D0;
        _v_080211D0 = bus_read_u8(_ea_080211D0);
        g_cpu.R[12] = _v_080211D0;
    }
    g_cpu.R[15] = 0x080211D4u;
    runtime_tick(_cyc_080211D0);
    /* 080211D4  080211d4 A subeq r10,r10,#0x4000 */
    g_cpu.R[15] = 0x080211D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211D4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080211D4 = 1u;
        uint32_t _rn_080211D4 = g_cpu.R[10];
        uint32_t _r_080211D4;
        _r_080211D4 = _rn_080211D4 - 0x00004000u;
        g_cpu.R[10] = _r_080211D4;
    }
    g_cpu.R[15] = 0x080211D8u;
    runtime_tick(_cyc_080211D4);
    /* 080211D8  080211d8 A ldrbeq r12,[r10,+r12] */
    g_cpu.R[15] = 0x080211D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211D8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080211D8 = 2u;
        uint32_t _base_080211D8 = g_cpu.R[10];
        uint32_t _off_080211D8;
        uint32_t _morm_080211D8 = g_cpu.R[12];
        _off_080211D8 = _morm_080211D8 << 6;
        uint32_t _ea_080211D8 = _base_080211D8 + _off_080211D8;
        uint32_t _post_080211D8 = _base_080211D8 + _off_080211D8;
        _cyc_080211D8 += runtime_mem_cycles(_ea_080211D8, 1u, 0u);
        uint32_t _v_080211D8;
        _v_080211D8 = bus_read_u8(_ea_080211D8);
        g_cpu.R[12] = _v_080211D8;
    }
    g_cpu.R[15] = 0x080211DCu;
    runtime_tick(_cyc_080211D8);
    /* 080211DC  080211dc A add r7,r7,r5,lsl #15 */
    g_cpu.R[15] = 0x080211DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211DC = 1u;
    _cyc_080211DC = 1u;
    uint32_t _rm_080211DC = g_cpu.R[5];
    uint32_t _op2_080211DC;
    uint32_t _co_080211DC;
    _op2_080211DC = _rm_080211DC << 15;
    _co_080211DC = (_rm_080211DC >> 17) & 1u;
    uint32_t _rn_080211DC = g_cpu.R[7];
    uint32_t _r_080211DC;
    _r_080211DC = _rn_080211DC + _op2_080211DC;
    g_cpu.R[7] = _r_080211DC;
    g_cpu.R[15] = 0x080211E0u;
    runtime_tick(_cyc_080211DC);
    /* 080211E0  080211e0 A add r8,r8,r6,lsl #15 */
    g_cpu.R[15] = 0x080211E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211E0 = 1u;
    _cyc_080211E0 = 1u;
    uint32_t _rm_080211E0 = g_cpu.R[6];
    uint32_t _op2_080211E0;
    uint32_t _co_080211E0;
    _op2_080211E0 = _rm_080211E0 << 15;
    _co_080211E0 = (_rm_080211E0 >> 17) & 1u;
    uint32_t _rn_080211E0 = g_cpu.R[8];
    uint32_t _r_080211E0;
    _r_080211E0 = _rn_080211E0 + _op2_080211E0;
    g_cpu.R[8] = _r_080211E0;
    g_cpu.R[15] = 0x080211E4u;
    runtime_tick(_cyc_080211E0);
    /* 080211E4  080211e4 A mov r10,r8,lsr #26 */
    g_cpu.R[15] = 0x080211E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211E4 = 1u;
    _cyc_080211E4 = 1u;
    uint32_t _rm_080211E4 = g_cpu.R[8];
    uint32_t _op2_080211E4;
    uint32_t _co_080211E4;
    _op2_080211E4 = _rm_080211E4 >> 26;
    _co_080211E4 = (_rm_080211E4 >> 25) & 1u;
    uint32_t _r_080211E4;
    _r_080211E4 = _op2_080211E4;
    g_cpu.R[10] = _r_080211E4;
    g_cpu.R[15] = 0x080211E8u;
    runtime_tick(_cyc_080211E4);
    /* 080211E8  080211e8 A add r11,r3,r7,lsr #26 */
    g_cpu.R[15] = 0x080211E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211E8 = 1u;
    _cyc_080211E8 = 1u;
    uint32_t _rm_080211E8 = g_cpu.R[7];
    uint32_t _op2_080211E8;
    uint32_t _co_080211E8;
    _op2_080211E8 = _rm_080211E8 >> 26;
    _co_080211E8 = (_rm_080211E8 >> 25) & 1u;
    uint32_t _rn_080211E8 = g_cpu.R[3];
    uint32_t _r_080211E8;
    _r_080211E8 = _rn_080211E8 + _op2_080211E8;
    g_cpu.R[11] = _r_080211E8;
    g_cpu.R[15] = 0x080211ECu;
    runtime_tick(_cyc_080211E8);
    /* 080211EC  080211ec A ldrb r9,[r11,+r10]! */
    g_cpu.R[15] = 0x080211ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211EC = 1u;
    _cyc_080211EC = 2u;
    uint32_t _base_080211EC = g_cpu.R[11];
    uint32_t _off_080211EC;
    uint32_t _morm_080211EC = g_cpu.R[10];
    _off_080211EC = _morm_080211EC << 6;
    uint32_t _ea_080211EC = _base_080211EC + _off_080211EC;
    uint32_t _post_080211EC = _base_080211EC + _off_080211EC;
    _cyc_080211EC += runtime_mem_cycles(_ea_080211EC, 1u, 0u);
    uint32_t _v_080211EC;
    _v_080211EC = bus_read_u8(_ea_080211EC);
    if (11u != 9u) g_cpu.R[11] = _ea_080211EC;
    g_cpu.R[9] = _v_080211EC;
    g_cpu.R[15] = 0x080211F0u;
    runtime_tick(_cyc_080211EC);
    /* 080211F0  080211f0 A and r10,r4,r8,lsr #20 */
    g_cpu.R[15] = 0x080211F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211F0 = 1u;
    _cyc_080211F0 = 1u;
    uint32_t _rm_080211F0 = g_cpu.R[8];
    uint32_t _op2_080211F0;
    uint32_t _co_080211F0;
    _op2_080211F0 = _rm_080211F0 >> 20;
    _co_080211F0 = (_rm_080211F0 >> 19) & 1u;
    uint32_t _rn_080211F0 = g_cpu.R[4];
    uint32_t _r_080211F0;
    _r_080211F0 = _rn_080211F0 & _op2_080211F0;
    g_cpu.R[10] = _r_080211F0;
    g_cpu.R[15] = 0x080211F4u;
    runtime_tick(_cyc_080211F0);
    /* 080211F4  080211f4 A mov r14,r7,lsl #6 */
    g_cpu.R[15] = 0x080211F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211F4 = 1u;
    _cyc_080211F4 = 1u;
    uint32_t _rm_080211F4 = g_cpu.R[7];
    uint32_t _op2_080211F4;
    uint32_t _co_080211F4;
    _op2_080211F4 = _rm_080211F4 << 6;
    _co_080211F4 = (_rm_080211F4 >> 26) & 1u;
    uint32_t _r_080211F4;
    _r_080211F4 = _op2_080211F4;
    g_cpu.R[14] = _r_080211F4;
    g_cpu.R[15] = 0x080211F8u;
    runtime_tick(_cyc_080211F4);
    /* 080211F8  080211f8 A add r10,r10,r14,lsr #29 */
    g_cpu.R[15] = 0x080211F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211F8 = 1u;
    _cyc_080211F8 = 1u;
    uint32_t _rm_080211F8 = g_cpu.R[14];
    uint32_t _op2_080211F8;
    uint32_t _co_080211F8;
    _op2_080211F8 = _rm_080211F8 >> 29;
    _co_080211F8 = (_rm_080211F8 >> 28) & 1u;
    uint32_t _rn_080211F8 = g_cpu.R[10];
    uint32_t _r_080211F8;
    _r_080211F8 = _rn_080211F8 + _op2_080211F8;
    g_cpu.R[10] = _r_080211F8;
    g_cpu.R[15] = 0x080211FCu;
    runtime_tick(_cyc_080211F8);
    /* 080211FC  080211fc A add r10,r10,r2 */
    g_cpu.R[15] = 0x080211FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080211FC = 1u;
    _cyc_080211FC = 1u;
    uint32_t _rm_080211FC = g_cpu.R[2];
    uint32_t _op2_080211FC;
    uint32_t _co_080211FC;
    _op2_080211FC = _rm_080211FC;
    _co_080211FC = cpsr_c();
    uint32_t _rn_080211FC = g_cpu.R[10];
    uint32_t _r_080211FC;
    _r_080211FC = _rn_080211FC + _op2_080211FC;
    g_cpu.R[10] = _r_080211FC;
    g_cpu.R[15] = 0x08021200u;
    runtime_tick(_cyc_080211FC);
    /* 08021200  08021200 A cmps r9,#0x0 */
    g_cpu.R[15] = 0x08021200u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021200 = 1u;
    _cyc_08021200 = 1u;
    uint32_t _rn_08021200 = g_cpu.R[9];
    uint32_t _r_08021200;
    _r_08021200 = _rn_08021200 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021200, 0x00000000u, _r_08021200);
    g_cpu.R[15] = 0x08021204u;
    runtime_tick(_cyc_08021200);
    /* 08021204  08021204 A ldrbne r9,[r10,+r9] */
    g_cpu.R[15] = 0x08021204u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021204 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08021204 = 2u;
        uint32_t _base_08021204 = g_cpu.R[10];
        uint32_t _off_08021204;
        uint32_t _morm_08021204 = g_cpu.R[9];
        _off_08021204 = _morm_08021204 << 6;
        uint32_t _ea_08021204 = _base_08021204 + _off_08021204;
        uint32_t _post_08021204 = _base_08021204 + _off_08021204;
        _cyc_08021204 += runtime_mem_cycles(_ea_08021204, 1u, 0u);
        uint32_t _v_08021204;
        _v_08021204 = bus_read_u8(_ea_08021204);
        g_cpu.R[9] = _v_08021204;
    }
    g_cpu.R[15] = 0x08021208u;
    runtime_tick(_cyc_08021204);
    /* 08021208  08021208 A cmps r9,#0x0 */
    g_cpu.R[15] = 0x08021208u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021208 = 1u;
    _cyc_08021208 = 1u;
    uint32_t _rn_08021208 = g_cpu.R[9];
    uint32_t _r_08021208;
    _r_08021208 = _rn_08021208 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021208, 0x00000000u, _r_08021208);
    g_cpu.R[15] = 0x0802120Cu;
    runtime_tick(_cyc_08021208);
    /* 0802120C  0802120c A ldrbeq r9,[r11,-r0] */
    g_cpu.R[15] = 0x0802120Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802120C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0802120C = 2u;
        uint32_t _base_0802120C = g_cpu.R[11];
        uint32_t _off_0802120C;
        uint32_t _morm_0802120C = g_cpu.R[0];
        _off_0802120C = _morm_0802120C;
        uint32_t _ea_0802120C = _base_0802120C - _off_0802120C;
        uint32_t _post_0802120C = _base_0802120C - _off_0802120C;
        _cyc_0802120C += runtime_mem_cycles(_ea_0802120C, 1u, 0u);
        uint32_t _v_0802120C;
        _v_0802120C = bus_read_u8(_ea_0802120C);
        g_cpu.R[9] = _v_0802120C;
    }
    g_cpu.R[15] = 0x08021210u;
    runtime_tick(_cyc_0802120C);
    /* 08021210  08021210 A subeq r10,r10,#0x4000 */
    g_cpu.R[15] = 0x08021210u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021210 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021210 = 1u;
        uint32_t _rn_08021210 = g_cpu.R[10];
        uint32_t _r_08021210;
        _r_08021210 = _rn_08021210 - 0x00004000u;
        g_cpu.R[10] = _r_08021210;
    }
    g_cpu.R[15] = 0x08021214u;
    runtime_tick(_cyc_08021210);
    /* 08021214  08021214 A ldrbeq r9,[r10,+r9] */
    g_cpu.R[15] = 0x08021214u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021214 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021214 = 2u;
        uint32_t _base_08021214 = g_cpu.R[10];
        uint32_t _off_08021214;
        uint32_t _morm_08021214 = g_cpu.R[9];
        _off_08021214 = _morm_08021214 << 6;
        uint32_t _ea_08021214 = _base_08021214 + _off_08021214;
        uint32_t _post_08021214 = _base_08021214 + _off_08021214;
        _cyc_08021214 += runtime_mem_cycles(_ea_08021214, 1u, 0u);
        uint32_t _v_08021214;
        _v_08021214 = bus_read_u8(_ea_08021214);
        g_cpu.R[9] = _v_08021214;
    }
    g_cpu.R[15] = 0x08021218u;
    runtime_tick(_cyc_08021214);
    /* 08021218  08021218 A add r7,r7,r5,lsl #15 */
    g_cpu.R[15] = 0x08021218u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021218 = 1u;
    _cyc_08021218 = 1u;
    uint32_t _rm_08021218 = g_cpu.R[5];
    uint32_t _op2_08021218;
    uint32_t _co_08021218;
    _op2_08021218 = _rm_08021218 << 15;
    _co_08021218 = (_rm_08021218 >> 17) & 1u;
    uint32_t _rn_08021218 = g_cpu.R[7];
    uint32_t _r_08021218;
    _r_08021218 = _rn_08021218 + _op2_08021218;
    g_cpu.R[7] = _r_08021218;
    g_cpu.R[15] = 0x0802121Cu;
    runtime_tick(_cyc_08021218);
    /* 0802121C  0802121c A add r8,r8,r6,lsl #15 */
    g_cpu.R[15] = 0x0802121Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802121C = 1u;
    _cyc_0802121C = 1u;
    uint32_t _rm_0802121C = g_cpu.R[6];
    uint32_t _op2_0802121C;
    uint32_t _co_0802121C;
    _op2_0802121C = _rm_0802121C << 15;
    _co_0802121C = (_rm_0802121C >> 17) & 1u;
    uint32_t _rn_0802121C = g_cpu.R[8];
    uint32_t _r_0802121C;
    _r_0802121C = _rn_0802121C + _op2_0802121C;
    g_cpu.R[8] = _r_0802121C;
    g_cpu.R[15] = 0x08021220u;
    runtime_tick(_cyc_0802121C);
    /* 08021220  08021220 A orr r9,r12,r9,lsl #8 */
    g_cpu.R[15] = 0x08021220u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021220 = 1u;
    _cyc_08021220 = 1u;
    uint32_t _rm_08021220 = g_cpu.R[9];
    uint32_t _op2_08021220;
    uint32_t _co_08021220;
    _op2_08021220 = _rm_08021220 << 8;
    _co_08021220 = (_rm_08021220 >> 24) & 1u;
    uint32_t _rn_08021220 = g_cpu.R[12];
    uint32_t _r_08021220;
    _r_08021220 = _rn_08021220 | _op2_08021220;
    g_cpu.R[9] = _r_08021220;
    g_cpu.R[15] = 0x08021224u;
    runtime_tick(_cyc_08021220);
    /* 08021224  08021224 A strh r9,[r1],#0x2 */
    g_cpu.R[15] = 0x08021224u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021224 = 1u;
    _cyc_08021224 = 1u;
    uint32_t _base_08021224 = g_cpu.R[1];
    uint32_t _off_08021224;
    _off_08021224 = 0x00000002u;
    uint32_t _ea_08021224 = _base_08021224;
    uint32_t _post_08021224 = _base_08021224 + _off_08021224;
    _cyc_08021224 += runtime_mem_cycles(_ea_08021224, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021224u, _ea_08021224 & ~1u, (uint32_t)(g_cpu.R[9] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08021224 & ~1u, (uint16_t)(g_cpu.R[9] & 0xFFFFu));
    g_cpu.R[1] = _post_08021224;
    g_cpu.R[15] = 0x08021228u;
    runtime_tick(_cyc_08021224);
    /* 08021228  08021228 A mov r10,r8,lsr #26 */
    g_cpu.R[15] = 0x08021228u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021228 = 1u;
    _cyc_08021228 = 1u;
    uint32_t _rm_08021228 = g_cpu.R[8];
    uint32_t _op2_08021228;
    uint32_t _co_08021228;
    _op2_08021228 = _rm_08021228 >> 26;
    _co_08021228 = (_rm_08021228 >> 25) & 1u;
    uint32_t _r_08021228;
    _r_08021228 = _op2_08021228;
    g_cpu.R[10] = _r_08021228;
    g_cpu.R[15] = 0x0802122Cu;
    runtime_tick(_cyc_08021228);
    /* 0802122C  0802122c A add r11,r3,r7,lsr #26 */
    g_cpu.R[15] = 0x0802122Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802122C = 1u;
    _cyc_0802122C = 1u;
    uint32_t _rm_0802122C = g_cpu.R[7];
    uint32_t _op2_0802122C;
    uint32_t _co_0802122C;
    _op2_0802122C = _rm_0802122C >> 26;
    _co_0802122C = (_rm_0802122C >> 25) & 1u;
    uint32_t _rn_0802122C = g_cpu.R[3];
    uint32_t _r_0802122C;
    _r_0802122C = _rn_0802122C + _op2_0802122C;
    g_cpu.R[11] = _r_0802122C;
    g_cpu.R[15] = 0x08021230u;
    runtime_tick(_cyc_0802122C);
    /* 08021230  08021230 A ldrb r12,[r11,+r10]! */
    g_cpu.R[15] = 0x08021230u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021230 = 1u;
    _cyc_08021230 = 2u;
    uint32_t _base_08021230 = g_cpu.R[11];
    uint32_t _off_08021230;
    uint32_t _morm_08021230 = g_cpu.R[10];
    _off_08021230 = _morm_08021230 << 6;
    uint32_t _ea_08021230 = _base_08021230 + _off_08021230;
    uint32_t _post_08021230 = _base_08021230 + _off_08021230;
    _cyc_08021230 += runtime_mem_cycles(_ea_08021230, 1u, 0u);
    uint32_t _v_08021230;
    _v_08021230 = bus_read_u8(_ea_08021230);
    if (11u != 12u) g_cpu.R[11] = _ea_08021230;
    g_cpu.R[12] = _v_08021230;
    g_cpu.R[15] = 0x08021234u;
    runtime_tick(_cyc_08021230);
    /* 08021234  08021234 A and r10,r4,r8,lsr #20 */
    g_cpu.R[15] = 0x08021234u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021234 = 1u;
    _cyc_08021234 = 1u;
    uint32_t _rm_08021234 = g_cpu.R[8];
    uint32_t _op2_08021234;
    uint32_t _co_08021234;
    _op2_08021234 = _rm_08021234 >> 20;
    _co_08021234 = (_rm_08021234 >> 19) & 1u;
    uint32_t _rn_08021234 = g_cpu.R[4];
    uint32_t _r_08021234;
    _r_08021234 = _rn_08021234 & _op2_08021234;
    g_cpu.R[10] = _r_08021234;
    g_cpu.R[15] = 0x08021238u;
    runtime_tick(_cyc_08021234);
    /* 08021238  08021238 A mov r14,r7,lsl #6 */
    g_cpu.R[15] = 0x08021238u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021238 = 1u;
    _cyc_08021238 = 1u;
    uint32_t _rm_08021238 = g_cpu.R[7];
    uint32_t _op2_08021238;
    uint32_t _co_08021238;
    _op2_08021238 = _rm_08021238 << 6;
    _co_08021238 = (_rm_08021238 >> 26) & 1u;
    uint32_t _r_08021238;
    _r_08021238 = _op2_08021238;
    g_cpu.R[14] = _r_08021238;
    g_cpu.R[15] = 0x0802123Cu;
    runtime_tick(_cyc_08021238);
    /* 0802123C  0802123c A add r10,r10,r14,lsr #29 */
    g_cpu.R[15] = 0x0802123Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802123C = 1u;
    _cyc_0802123C = 1u;
    uint32_t _rm_0802123C = g_cpu.R[14];
    uint32_t _op2_0802123C;
    uint32_t _co_0802123C;
    _op2_0802123C = _rm_0802123C >> 29;
    _co_0802123C = (_rm_0802123C >> 28) & 1u;
    uint32_t _rn_0802123C = g_cpu.R[10];
    uint32_t _r_0802123C;
    _r_0802123C = _rn_0802123C + _op2_0802123C;
    g_cpu.R[10] = _r_0802123C;
    g_cpu.R[15] = 0x08021240u;
    runtime_tick(_cyc_0802123C);
    /* 08021240  08021240 A add r10,r10,r2 */
    g_cpu.R[15] = 0x08021240u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021240 = 1u;
    _cyc_08021240 = 1u;
    uint32_t _rm_08021240 = g_cpu.R[2];
    uint32_t _op2_08021240;
    uint32_t _co_08021240;
    _op2_08021240 = _rm_08021240;
    _co_08021240 = cpsr_c();
    uint32_t _rn_08021240 = g_cpu.R[10];
    uint32_t _r_08021240;
    _r_08021240 = _rn_08021240 + _op2_08021240;
    g_cpu.R[10] = _r_08021240;
    g_cpu.R[15] = 0x08021244u;
    runtime_tick(_cyc_08021240);
    /* 08021244  08021244 A cmps r12,#0x0 */
    g_cpu.R[15] = 0x08021244u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021244 = 1u;
    _cyc_08021244 = 1u;
    uint32_t _rn_08021244 = g_cpu.R[12];
    uint32_t _r_08021244;
    _r_08021244 = _rn_08021244 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021244, 0x00000000u, _r_08021244);
    g_cpu.R[15] = 0x08021248u;
    runtime_tick(_cyc_08021244);
    /* 08021248  08021248 A ldrbne r12,[r10,+r12] */
    g_cpu.R[15] = 0x08021248u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021248 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08021248 = 2u;
        uint32_t _base_08021248 = g_cpu.R[10];
        uint32_t _off_08021248;
        uint32_t _morm_08021248 = g_cpu.R[12];
        _off_08021248 = _morm_08021248 << 6;
        uint32_t _ea_08021248 = _base_08021248 + _off_08021248;
        uint32_t _post_08021248 = _base_08021248 + _off_08021248;
        _cyc_08021248 += runtime_mem_cycles(_ea_08021248, 1u, 0u);
        uint32_t _v_08021248;
        _v_08021248 = bus_read_u8(_ea_08021248);
        g_cpu.R[12] = _v_08021248;
    }
    g_cpu.R[15] = 0x0802124Cu;
    runtime_tick(_cyc_08021248);
    /* 0802124C  0802124c A cmps r12,#0x0 */
    g_cpu.R[15] = 0x0802124Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802124C = 1u;
    _cyc_0802124C = 1u;
    uint32_t _rn_0802124C = g_cpu.R[12];
    uint32_t _r_0802124C;
    _r_0802124C = _rn_0802124C - 0x00000000u;
    arm_set_nzcv_sub(_rn_0802124C, 0x00000000u, _r_0802124C);
    g_cpu.R[15] = 0x08021250u;
    runtime_tick(_cyc_0802124C);
    /* 08021250  08021250 A ldrbeq r12,[r11,-r0] */
    g_cpu.R[15] = 0x08021250u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021250 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021250 = 2u;
        uint32_t _base_08021250 = g_cpu.R[11];
        uint32_t _off_08021250;
        uint32_t _morm_08021250 = g_cpu.R[0];
        _off_08021250 = _morm_08021250;
        uint32_t _ea_08021250 = _base_08021250 - _off_08021250;
        uint32_t _post_08021250 = _base_08021250 - _off_08021250;
        _cyc_08021250 += runtime_mem_cycles(_ea_08021250, 1u, 0u);
        uint32_t _v_08021250;
        _v_08021250 = bus_read_u8(_ea_08021250);
        g_cpu.R[12] = _v_08021250;
    }
    g_cpu.R[15] = 0x08021254u;
    runtime_tick(_cyc_08021250);
    /* 08021254  08021254 A subeq r10,r10,#0x4000 */
    g_cpu.R[15] = 0x08021254u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021254 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021254 = 1u;
        uint32_t _rn_08021254 = g_cpu.R[10];
        uint32_t _r_08021254;
        _r_08021254 = _rn_08021254 - 0x00004000u;
        g_cpu.R[10] = _r_08021254;
    }
    g_cpu.R[15] = 0x08021258u;
    runtime_tick(_cyc_08021254);
    /* 08021258  08021258 A ldrbeq r12,[r10,+r12] */
    g_cpu.R[15] = 0x08021258u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021258 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021258 = 2u;
        uint32_t _base_08021258 = g_cpu.R[10];
        uint32_t _off_08021258;
        uint32_t _morm_08021258 = g_cpu.R[12];
        _off_08021258 = _morm_08021258 << 6;
        uint32_t _ea_08021258 = _base_08021258 + _off_08021258;
        uint32_t _post_08021258 = _base_08021258 + _off_08021258;
        _cyc_08021258 += runtime_mem_cycles(_ea_08021258, 1u, 0u);
        uint32_t _v_08021258;
        _v_08021258 = bus_read_u8(_ea_08021258);
        g_cpu.R[12] = _v_08021258;
    }
    g_cpu.R[15] = 0x0802125Cu;
    runtime_tick(_cyc_08021258);
    /* 0802125C  0802125c A add r7,r7,r5,lsl #15 */
    g_cpu.R[15] = 0x0802125Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802125C = 1u;
    _cyc_0802125C = 1u;
    uint32_t _rm_0802125C = g_cpu.R[5];
    uint32_t _op2_0802125C;
    uint32_t _co_0802125C;
    _op2_0802125C = _rm_0802125C << 15;
    _co_0802125C = (_rm_0802125C >> 17) & 1u;
    uint32_t _rn_0802125C = g_cpu.R[7];
    uint32_t _r_0802125C;
    _r_0802125C = _rn_0802125C + _op2_0802125C;
    g_cpu.R[7] = _r_0802125C;
    g_cpu.R[15] = 0x08021260u;
    runtime_tick(_cyc_0802125C);
    /* 08021260  08021260 A add r8,r8,r6,lsl #15 */
    g_cpu.R[15] = 0x08021260u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021260 = 1u;
    _cyc_08021260 = 1u;
    uint32_t _rm_08021260 = g_cpu.R[6];
    uint32_t _op2_08021260;
    uint32_t _co_08021260;
    _op2_08021260 = _rm_08021260 << 15;
    _co_08021260 = (_rm_08021260 >> 17) & 1u;
    uint32_t _rn_08021260 = g_cpu.R[8];
    uint32_t _r_08021260;
    _r_08021260 = _rn_08021260 + _op2_08021260;
    g_cpu.R[8] = _r_08021260;
    g_cpu.R[15] = 0x08021264u;
    runtime_tick(_cyc_08021260);
    /* 08021264  08021264 A mov r10,r8,lsr #26 */
    g_cpu.R[15] = 0x08021264u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021264 = 1u;
    _cyc_08021264 = 1u;
    uint32_t _rm_08021264 = g_cpu.R[8];
    uint32_t _op2_08021264;
    uint32_t _co_08021264;
    _op2_08021264 = _rm_08021264 >> 26;
    _co_08021264 = (_rm_08021264 >> 25) & 1u;
    uint32_t _r_08021264;
    _r_08021264 = _op2_08021264;
    g_cpu.R[10] = _r_08021264;
    g_cpu.R[15] = 0x08021268u;
    runtime_tick(_cyc_08021264);
    /* 08021268  08021268 A add r11,r3,r7,lsr #26 */
    g_cpu.R[15] = 0x08021268u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021268 = 1u;
    _cyc_08021268 = 1u;
    uint32_t _rm_08021268 = g_cpu.R[7];
    uint32_t _op2_08021268;
    uint32_t _co_08021268;
    _op2_08021268 = _rm_08021268 >> 26;
    _co_08021268 = (_rm_08021268 >> 25) & 1u;
    uint32_t _rn_08021268 = g_cpu.R[3];
    uint32_t _r_08021268;
    _r_08021268 = _rn_08021268 + _op2_08021268;
    g_cpu.R[11] = _r_08021268;
    g_cpu.R[15] = 0x0802126Cu;
    runtime_tick(_cyc_08021268);
    /* 0802126C  0802126c A ldrb r9,[r11,+r10]! */
    g_cpu.R[15] = 0x0802126Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802126C = 1u;
    _cyc_0802126C = 2u;
    uint32_t _base_0802126C = g_cpu.R[11];
    uint32_t _off_0802126C;
    uint32_t _morm_0802126C = g_cpu.R[10];
    _off_0802126C = _morm_0802126C << 6;
    uint32_t _ea_0802126C = _base_0802126C + _off_0802126C;
    uint32_t _post_0802126C = _base_0802126C + _off_0802126C;
    _cyc_0802126C += runtime_mem_cycles(_ea_0802126C, 1u, 0u);
    uint32_t _v_0802126C;
    _v_0802126C = bus_read_u8(_ea_0802126C);
    if (11u != 9u) g_cpu.R[11] = _ea_0802126C;
    g_cpu.R[9] = _v_0802126C;
    g_cpu.R[15] = 0x08021270u;
    runtime_tick(_cyc_0802126C);
    /* 08021270  08021270 A and r10,r4,r8,lsr #20 */
    g_cpu.R[15] = 0x08021270u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021270 = 1u;
    _cyc_08021270 = 1u;
    uint32_t _rm_08021270 = g_cpu.R[8];
    uint32_t _op2_08021270;
    uint32_t _co_08021270;
    _op2_08021270 = _rm_08021270 >> 20;
    _co_08021270 = (_rm_08021270 >> 19) & 1u;
    uint32_t _rn_08021270 = g_cpu.R[4];
    uint32_t _r_08021270;
    _r_08021270 = _rn_08021270 & _op2_08021270;
    g_cpu.R[10] = _r_08021270;
    g_cpu.R[15] = 0x08021274u;
    runtime_tick(_cyc_08021270);
    /* 08021274  08021274 A mov r14,r7,lsl #6 */
    g_cpu.R[15] = 0x08021274u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021274 = 1u;
    _cyc_08021274 = 1u;
    uint32_t _rm_08021274 = g_cpu.R[7];
    uint32_t _op2_08021274;
    uint32_t _co_08021274;
    _op2_08021274 = _rm_08021274 << 6;
    _co_08021274 = (_rm_08021274 >> 26) & 1u;
    uint32_t _r_08021274;
    _r_08021274 = _op2_08021274;
    g_cpu.R[14] = _r_08021274;
    g_cpu.R[15] = 0x08021278u;
    runtime_tick(_cyc_08021274);
    /* 08021278  08021278 A add r10,r10,r14,lsr #29 */
    g_cpu.R[15] = 0x08021278u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021278 = 1u;
    _cyc_08021278 = 1u;
    uint32_t _rm_08021278 = g_cpu.R[14];
    uint32_t _op2_08021278;
    uint32_t _co_08021278;
    _op2_08021278 = _rm_08021278 >> 29;
    _co_08021278 = (_rm_08021278 >> 28) & 1u;
    uint32_t _rn_08021278 = g_cpu.R[10];
    uint32_t _r_08021278;
    _r_08021278 = _rn_08021278 + _op2_08021278;
    g_cpu.R[10] = _r_08021278;
    g_cpu.R[15] = 0x0802127Cu;
    runtime_tick(_cyc_08021278);
    /* 0802127C  0802127c A add r10,r10,r2 */
    g_cpu.R[15] = 0x0802127Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802127C = 1u;
    _cyc_0802127C = 1u;
    uint32_t _rm_0802127C = g_cpu.R[2];
    uint32_t _op2_0802127C;
    uint32_t _co_0802127C;
    _op2_0802127C = _rm_0802127C;
    _co_0802127C = cpsr_c();
    uint32_t _rn_0802127C = g_cpu.R[10];
    uint32_t _r_0802127C;
    _r_0802127C = _rn_0802127C + _op2_0802127C;
    g_cpu.R[10] = _r_0802127C;
    g_cpu.R[15] = 0x08021280u;
    runtime_tick(_cyc_0802127C);
    /* 08021280  08021280 A cmps r9,#0x0 */
    g_cpu.R[15] = 0x08021280u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021280 = 1u;
    _cyc_08021280 = 1u;
    uint32_t _rn_08021280 = g_cpu.R[9];
    uint32_t _r_08021280;
    _r_08021280 = _rn_08021280 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021280, 0x00000000u, _r_08021280);
    g_cpu.R[15] = 0x08021284u;
    runtime_tick(_cyc_08021280);
    /* 08021284  08021284 A ldrbne r9,[r10,+r9] */
    g_cpu.R[15] = 0x08021284u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021284 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08021284 = 2u;
        uint32_t _base_08021284 = g_cpu.R[10];
        uint32_t _off_08021284;
        uint32_t _morm_08021284 = g_cpu.R[9];
        _off_08021284 = _morm_08021284 << 6;
        uint32_t _ea_08021284 = _base_08021284 + _off_08021284;
        uint32_t _post_08021284 = _base_08021284 + _off_08021284;
        _cyc_08021284 += runtime_mem_cycles(_ea_08021284, 1u, 0u);
        uint32_t _v_08021284;
        _v_08021284 = bus_read_u8(_ea_08021284);
        g_cpu.R[9] = _v_08021284;
    }
    g_cpu.R[15] = 0x08021288u;
    runtime_tick(_cyc_08021284);
    /* 08021288  08021288 A cmps r9,#0x0 */
    g_cpu.R[15] = 0x08021288u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021288 = 1u;
    _cyc_08021288 = 1u;
    uint32_t _rn_08021288 = g_cpu.R[9];
    uint32_t _r_08021288;
    _r_08021288 = _rn_08021288 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021288, 0x00000000u, _r_08021288);
    g_cpu.R[15] = 0x0802128Cu;
    runtime_tick(_cyc_08021288);
    /* 0802128C  0802128c A ldrbeq r9,[r11,-r0] */
    g_cpu.R[15] = 0x0802128Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802128C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0802128C = 2u;
        uint32_t _base_0802128C = g_cpu.R[11];
        uint32_t _off_0802128C;
        uint32_t _morm_0802128C = g_cpu.R[0];
        _off_0802128C = _morm_0802128C;
        uint32_t _ea_0802128C = _base_0802128C - _off_0802128C;
        uint32_t _post_0802128C = _base_0802128C - _off_0802128C;
        _cyc_0802128C += runtime_mem_cycles(_ea_0802128C, 1u, 0u);
        uint32_t _v_0802128C;
        _v_0802128C = bus_read_u8(_ea_0802128C);
        g_cpu.R[9] = _v_0802128C;
    }
    g_cpu.R[15] = 0x08021290u;
    runtime_tick(_cyc_0802128C);
    /* 08021290  08021290 A subeq r10,r10,#0x4000 */
    g_cpu.R[15] = 0x08021290u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021290 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021290 = 1u;
        uint32_t _rn_08021290 = g_cpu.R[10];
        uint32_t _r_08021290;
        _r_08021290 = _rn_08021290 - 0x00004000u;
        g_cpu.R[10] = _r_08021290;
    }
    g_cpu.R[15] = 0x08021294u;
    runtime_tick(_cyc_08021290);
    /* 08021294  08021294 A ldrbeq r9,[r10,+r9] */
    g_cpu.R[15] = 0x08021294u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021294 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021294 = 2u;
        uint32_t _base_08021294 = g_cpu.R[10];
        uint32_t _off_08021294;
        uint32_t _morm_08021294 = g_cpu.R[9];
        _off_08021294 = _morm_08021294 << 6;
        uint32_t _ea_08021294 = _base_08021294 + _off_08021294;
        uint32_t _post_08021294 = _base_08021294 + _off_08021294;
        _cyc_08021294 += runtime_mem_cycles(_ea_08021294, 1u, 0u);
        uint32_t _v_08021294;
        _v_08021294 = bus_read_u8(_ea_08021294);
        g_cpu.R[9] = _v_08021294;
    }
    g_cpu.R[15] = 0x08021298u;
    runtime_tick(_cyc_08021294);
    /* 08021298  08021298 A add r7,r7,r5,lsl #15 */
    g_cpu.R[15] = 0x08021298u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021298 = 1u;
    _cyc_08021298 = 1u;
    uint32_t _rm_08021298 = g_cpu.R[5];
    uint32_t _op2_08021298;
    uint32_t _co_08021298;
    _op2_08021298 = _rm_08021298 << 15;
    _co_08021298 = (_rm_08021298 >> 17) & 1u;
    uint32_t _rn_08021298 = g_cpu.R[7];
    uint32_t _r_08021298;
    _r_08021298 = _rn_08021298 + _op2_08021298;
    g_cpu.R[7] = _r_08021298;
    g_cpu.R[15] = 0x0802129Cu;
    runtime_tick(_cyc_08021298);
    /* 0802129C  0802129c A add r8,r8,r6,lsl #15 */
    g_cpu.R[15] = 0x0802129Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802129C = 1u;
    _cyc_0802129C = 1u;
    uint32_t _rm_0802129C = g_cpu.R[6];
    uint32_t _op2_0802129C;
    uint32_t _co_0802129C;
    _op2_0802129C = _rm_0802129C << 15;
    _co_0802129C = (_rm_0802129C >> 17) & 1u;
    uint32_t _rn_0802129C = g_cpu.R[8];
    uint32_t _r_0802129C;
    _r_0802129C = _rn_0802129C + _op2_0802129C;
    g_cpu.R[8] = _r_0802129C;
    g_cpu.R[15] = 0x080212A0u;
    runtime_tick(_cyc_0802129C);
    /* 080212A0  080212a0 A orr r9,r12,r9,lsl #8 */
    g_cpu.R[15] = 0x080212A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212A0 = 1u;
    _cyc_080212A0 = 1u;
    uint32_t _rm_080212A0 = g_cpu.R[9];
    uint32_t _op2_080212A0;
    uint32_t _co_080212A0;
    _op2_080212A0 = _rm_080212A0 << 8;
    _co_080212A0 = (_rm_080212A0 >> 24) & 1u;
    uint32_t _rn_080212A0 = g_cpu.R[12];
    uint32_t _r_080212A0;
    _r_080212A0 = _rn_080212A0 | _op2_080212A0;
    g_cpu.R[9] = _r_080212A0;
    g_cpu.R[15] = 0x080212A4u;
    runtime_tick(_cyc_080212A0);
    /* 080212A4  080212a4 A strh r9,[r1],#0x3a */
    g_cpu.R[15] = 0x080212A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212A4 = 1u;
    _cyc_080212A4 = 1u;
    uint32_t _base_080212A4 = g_cpu.R[1];
    uint32_t _off_080212A4;
    _off_080212A4 = 0x0000003Au;
    uint32_t _ea_080212A4 = _base_080212A4;
    uint32_t _post_080212A4 = _base_080212A4 + _off_080212A4;
    _cyc_080212A4 += runtime_mem_cycles(_ea_080212A4, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080212A4u, _ea_080212A4 & ~1u, (uint32_t)(g_cpu.R[9] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080212A4 & ~1u, (uint16_t)(g_cpu.R[9] & 0xFFFFu));
    g_cpu.R[1] = _post_080212A4;
    g_cpu.R[15] = 0x080212A8u;
    runtime_tick(_cyc_080212A4);
    /* 080212A8  080212a8 A subs r4,r4,#0x1000000 */
    g_cpu.R[15] = 0x080212A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212A8 = 1u;
    _cyc_080212A8 = 1u;
    uint32_t _rn_080212A8 = g_cpu.R[4];
    uint32_t _r_080212A8;
    _r_080212A8 = _rn_080212A8 - 0x01000000u;
    arm_set_nzcv_sub(_rn_080212A8, 0x01000000u, _r_080212A8);
    g_cpu.R[4] = _r_080212A8;
    g_cpu.R[15] = 0x080212ACu;
    runtime_tick(_cyc_080212A8);
    /* 080212AC  080212ac A bpl 0x080210a8 */
    g_cpu.R[15] = 0x080212ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212AC = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_080212AC = 3u;
        g_cpu.R[15] = 0x080210A8u;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x080212ACu, 0x080210A8u, 0u, 0u);
        runtime_tick(_cyc_080212AC);
        goto L_080210A8;
    }
    g_cpu.R[15] = 0x080212B0u;
    runtime_tick(_cyc_080212AC);
    /* 080212B0  080212b0 A sub r1,r1,#0x780 */
    g_cpu.R[15] = 0x080212B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212B0 = 1u;
    _cyc_080212B0 = 1u;
    uint32_t _rn_080212B0 = g_cpu.R[1];
    uint32_t _r_080212B0;
    _r_080212B0 = _rn_080212B0 - 0x00000780u;
    g_cpu.R[1] = _r_080212B0;
    g_cpu.R[15] = 0x080212B4u;
    runtime_tick(_cyc_080212B0);
    /* 080212B4  080212b4 A add r1,r1,#0x8 */
    g_cpu.R[15] = 0x080212B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212B4 = 1u;
    _cyc_080212B4 = 1u;
    uint32_t _rn_080212B4 = g_cpu.R[1];
    uint32_t _r_080212B4;
    _r_080212B4 = _rn_080212B4 + 0x00000008u;
    g_cpu.R[1] = _r_080212B4;
    g_cpu.R[15] = 0x080212B8u;
    runtime_tick(_cyc_080212B4);
    /* 080212B8  080212b8 A sub r4,r4,#0x10000 */
    g_cpu.R[15] = 0x080212B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212B8 = 1u;
    _cyc_080212B8 = 1u;
    uint32_t _rn_080212B8 = g_cpu.R[4];
    uint32_t _r_080212B8;
    _r_080212B8 = _rn_080212B8 - 0x00010000u;
    g_cpu.R[4] = _r_080212B8;
    g_cpu.R[15] = 0x080212BCu;
    runtime_tick(_cyc_080212B8);
    /* 080212BC  080212bc A tsts r4,#0x70000 */
    g_cpu.R[15] = 0x080212BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212BC = 1u;
    _cyc_080212BC = 1u;
    uint32_t _rn_080212BC = g_cpu.R[4];
    uint32_t _r_080212BC;
    _r_080212BC = _rn_080212BC & 0x00070000u;
    arm_set_nzc_logic(_r_080212BC, 0u);
    g_cpu.R[15] = 0x080212C0u;
    runtime_tick(_cyc_080212BC);
    /* 080212C0  080212c0 A addeq r1,r1,#0x7c0 */
    g_cpu.R[15] = 0x080212C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212C0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080212C0 = 1u;
        uint32_t _rn_080212C0 = g_cpu.R[1];
        uint32_t _r_080212C0;
        _r_080212C0 = _rn_080212C0 + 0x000007C0u;
        g_cpu.R[1] = _r_080212C0;
    }
    g_cpu.R[15] = 0x080212C4u;
    runtime_tick(_cyc_080212C0);
    /* 080212C4  080212c4 A ldm r13!,{r0} */
    g_cpu.R[15] = 0x080212C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212C4 = 1u;
    _cyc_080212C4 = 2u;
    uint32_t _b_080212C4 = g_cpu.R[13];
    uint32_t _a_080212C4 = _b_080212C4;
    uint32_t _fb_080212C4 = _b_080212C4 + 4u;
    _cyc_080212C4 += runtime_mem_cycles(_a_080212C4 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_080212C4 & ~3u);
    _a_080212C4 += 4u;
    g_cpu.R[13] = _fb_080212C4;
    g_cpu.R[15] = 0x080212C8u;
    runtime_tick(_cyc_080212C4);
    /* 080212C8  080212c8 A tsts r4,#0xff0000 */
    g_cpu.R[15] = 0x080212C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212C8 = 1u;
    _cyc_080212C8 = 1u;
    uint32_t _rn_080212C8 = g_cpu.R[4];
    uint32_t _r_080212C8;
    _r_080212C8 = _rn_080212C8 & 0x00FF0000u;
    arm_set_nzc_logic(_r_080212C8, 0u);
    g_cpu.R[15] = 0x080212CCu;
    runtime_tick(_cyc_080212C8);
    /* 080212CC  080212cc A bne 0x08021084 */
    g_cpu.R[15] = 0x080212CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212CC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080212CC = 3u;
        g_cpu.R[15] = 0x08021084u;
        runtime_tick(_cyc_080212CC);
        gf_memory_transfer_arm_at_08021084();
        return;
    }
    g_cpu.R[15] = 0x080212D0u;
    runtime_tick(_cyc_080212CC);
    /* 080212D0  080212d0 A ldm r13!,{r5,r6,r7,r8,r9,r10,r11,r14} */
    g_cpu.R[15] = 0x080212D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212D0 = 1u;
    _cyc_080212D0 = 2u;
    uint32_t _b_080212D0 = g_cpu.R[13];
    uint32_t _a_080212D0 = _b_080212D0;
    uint32_t _fb_080212D0 = _b_080212D0 + 32u;
    _cyc_080212D0 += runtime_mem_cycles(_a_080212D0 & ~3u, 4u, 0u);
    g_cpu.R[5] = bus_read_u32(_a_080212D0 & ~3u);
    _a_080212D0 += 4u;
    _cyc_080212D0 += runtime_mem_cycles(_a_080212D0 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_080212D0 & ~3u);
    _a_080212D0 += 4u;
    _cyc_080212D0 += runtime_mem_cycles(_a_080212D0 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_080212D0 & ~3u);
    _a_080212D0 += 4u;
    _cyc_080212D0 += runtime_mem_cycles(_a_080212D0 & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_080212D0 & ~3u);
    _a_080212D0 += 4u;
    _cyc_080212D0 += runtime_mem_cycles(_a_080212D0 & ~3u, 4u, 1u);
    g_cpu.R[9] = bus_read_u32(_a_080212D0 & ~3u);
    _a_080212D0 += 4u;
    _cyc_080212D0 += runtime_mem_cycles(_a_080212D0 & ~3u, 4u, 1u);
    g_cpu.R[10] = bus_read_u32(_a_080212D0 & ~3u);
    _a_080212D0 += 4u;
    _cyc_080212D0 += runtime_mem_cycles(_a_080212D0 & ~3u, 4u, 1u);
    g_cpu.R[11] = bus_read_u32(_a_080212D0 & ~3u);
    _a_080212D0 += 4u;
    _cyc_080212D0 += runtime_mem_cycles(_a_080212D0 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_080212D0 & ~3u);
    _a_080212D0 += 4u;
    g_cpu.R[13] = _fb_080212D0;
    g_cpu.R[15] = 0x080212D4u;
    runtime_tick(_cyc_080212D0);
    /* 080212D4  080212d4 A bx r14 */
    g_cpu.R[15] = 0x080212D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080212D4 = 1u;
    _cyc_080212D4 = 3u;
    uint32_t _bxt_080212D4 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_080212D4 & ~1u;
    runtime_tick(_cyc_080212D4);
    if (_bxt_080212D4 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_080212D4);
    return;
    g_cpu.R[15] = 0x080212D8u;
    runtime_tick(_cyc_080212D4);
    /* fall-through to 0x080212D8 */
    g_cpu.R[15] = 0x080212D8u;
    runtime_dispatch(0x080212D8u);
    return;
}


/* 0x0802146C  mode=arm  end=0x08021508  branches=3  indirect */
void gf_memory_transfer_arm_at_0802146C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0802146Cu);
    /* 0802146C  0802146c A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x0802146Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802146C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0802146C = 1u;
        uint32_t _rn_0802146C = g_cpu.R[0];
        uint32_t _r_0802146C;
        _r_0802146C = _rn_0802146C & 0x01E00000u;
        g_cpu.R[4] = _r_0802146C;
    }
    g_cpu.R[15] = 0x08021470u;
    runtime_tick(_cyc_0802146C);
    /* 08021470  08021470 A stm r13!,{r5,r6,r7,r8,r9,r10,r14} */
    g_cpu.R[15] = 0x08021470u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021470 = 1u;
    _cyc_08021470 = 1u;
    uint32_t _b_08021470 = g_cpu.R[13];
    uint32_t _a_08021470 = _b_08021470 - 28u;
    uint32_t _fb_08021470 = _b_08021470 - 28u;
    _cyc_08021470 += runtime_mem_cycles(_a_08021470 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021470u, _a_08021470 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08021470 & ~3u, g_cpu.R[5]);
    _a_08021470 += 4u;
    _cyc_08021470 += runtime_mem_cycles(_a_08021470 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021470u, _a_08021470 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08021470 & ~3u, g_cpu.R[6]);
    _a_08021470 += 4u;
    _cyc_08021470 += runtime_mem_cycles(_a_08021470 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021470u, _a_08021470 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08021470 & ~3u, g_cpu.R[7]);
    _a_08021470 += 4u;
    _cyc_08021470 += runtime_mem_cycles(_a_08021470 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021470u, _a_08021470 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_a_08021470 & ~3u, g_cpu.R[8]);
    _a_08021470 += 4u;
    _cyc_08021470 += runtime_mem_cycles(_a_08021470 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021470u, _a_08021470 & ~3u, g_cpu.R[9], 4u);
    bus_write_u32(_a_08021470 & ~3u, g_cpu.R[9]);
    _a_08021470 += 4u;
    _cyc_08021470 += runtime_mem_cycles(_a_08021470 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021470u, _a_08021470 & ~3u, g_cpu.R[10], 4u);
    bus_write_u32(_a_08021470 & ~3u, g_cpu.R[10]);
    _a_08021470 += 4u;
    _cyc_08021470 += runtime_mem_cycles(_a_08021470 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021470u, _a_08021470 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08021470 & ~3u, g_cpu.R[14]);
    _a_08021470 += 4u;
    g_cpu.R[13] = _fb_08021470;
    g_cpu.R[15] = 0x08021474u;
    runtime_tick(_cyc_08021470);
    /* 08021474  08021474 A mov r5,r1 */
    g_cpu.R[15] = 0x08021474u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021474 = 1u;
    _cyc_08021474 = 1u;
    uint32_t _rm_08021474 = g_cpu.R[1];
    uint32_t _op2_08021474;
    uint32_t _co_08021474;
    _op2_08021474 = _rm_08021474;
    _co_08021474 = cpsr_c();
    uint32_t _r_08021474;
    _r_08021474 = _op2_08021474;
    g_cpu.R[5] = _r_08021474;
    g_cpu.R[15] = 0x08021478u;
    runtime_tick(_cyc_08021474);
    /* 08021478  08021478 A ldr r9,[r15,#0x200] */
    g_cpu.R[15] = 0x08021478u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021478 = 1u;
    _cyc_08021478 = 2u;
    uint32_t _base_08021478 = 0x08021480u;
    uint32_t _off_08021478;
    _off_08021478 = 0x00000200u;
    uint32_t _ea_08021478 = _base_08021478 + _off_08021478;
    uint32_t _post_08021478 = _base_08021478 + _off_08021478;
    _cyc_08021478 += runtime_mem_cycles(_ea_08021478, 4u, 0u);
    uint32_t _v_08021478;
    { uint32_t _w = bus_read_u32(_ea_08021478 & ~3u); uint32_t _rot = (_ea_08021478 & 3u) * 8u; _v_08021478 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[9] = _v_08021478;
    g_cpu.R[15] = 0x0802147Cu;
    runtime_tick(_cyc_08021478);
    /* 0802147C  0802147c A sub r13,r13,#0x8 */
    g_cpu.R[15] = 0x0802147Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802147C = 1u;
    _cyc_0802147C = 1u;
    uint32_t _rn_0802147C = g_cpu.R[13];
    uint32_t _r_0802147C;
    _r_0802147C = _rn_0802147C - 0x00000008u;
    g_cpu.R[13] = _r_0802147C;
    g_cpu.R[15] = 0x08021480u;
    runtime_tick(_cyc_0802147C);
    /* 08021480  08021480 A ldr r1,[r5] */
    g_cpu.R[15] = 0x08021480u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021480 = 1u;
    _cyc_08021480 = 2u;
    uint32_t _base_08021480 = g_cpu.R[5];
    uint32_t _off_08021480;
    _off_08021480 = 0x00000000u;
    uint32_t _ea_08021480 = _base_08021480 + _off_08021480;
    uint32_t _post_08021480 = _base_08021480 + _off_08021480;
    _cyc_08021480 += runtime_mem_cycles(_ea_08021480, 4u, 0u);
    uint32_t _v_08021480;
    { uint32_t _w = bus_read_u32(_ea_08021480 & ~3u); uint32_t _rot = (_ea_08021480 & 3u) * 8u; _v_08021480 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08021480;
    g_cpu.R[15] = 0x08021484u;
    runtime_tick(_cyc_08021480);
    /* 08021484  08021484 A ldr r12,[r5,#0x8] */
    g_cpu.R[15] = 0x08021484u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021484 = 1u;
    _cyc_08021484 = 2u;
    uint32_t _base_08021484 = g_cpu.R[5];
    uint32_t _off_08021484;
    _off_08021484 = 0x00000008u;
    uint32_t _ea_08021484 = _base_08021484 + _off_08021484;
    uint32_t _post_08021484 = _base_08021484 + _off_08021484;
    _cyc_08021484 += runtime_mem_cycles(_ea_08021484, 4u, 0u);
    uint32_t _v_08021484;
    { uint32_t _w = bus_read_u32(_ea_08021484 & ~3u); uint32_t _rot = (_ea_08021484 & 3u) * 8u; _v_08021484 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[12] = _v_08021484;
    g_cpu.R[15] = 0x08021488u;
    runtime_tick(_cyc_08021484);
    /* 08021488  08021488 A mov r7,r2 */
    g_cpu.R[15] = 0x08021488u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021488 = 1u;
    _cyc_08021488 = 1u;
    uint32_t _rm_08021488 = g_cpu.R[2];
    uint32_t _op2_08021488;
    uint32_t _co_08021488;
    _op2_08021488 = _rm_08021488;
    _co_08021488 = cpsr_c();
    uint32_t _r_08021488;
    _r_08021488 = _op2_08021488;
    g_cpu.R[7] = _r_08021488;
    g_cpu.R[15] = 0x0802148Cu;
    runtime_tick(_cyc_08021488);
    /* 0802148C  0802148c A ldr r2,[r0,#0x8] */
    g_cpu.R[15] = 0x0802148Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802148C = 1u;
    _cyc_0802148C = 2u;
    uint32_t _base_0802148C = g_cpu.R[0];
    uint32_t _off_0802148C;
    _off_0802148C = 0x00000008u;
    uint32_t _ea_0802148C = _base_0802148C + _off_0802148C;
    uint32_t _post_0802148C = _base_0802148C + _off_0802148C;
    _cyc_0802148C += runtime_mem_cycles(_ea_0802148C, 4u, 0u);
    uint32_t _v_0802148C;
    { uint32_t _w = bus_read_u32(_ea_0802148C & ~3u); uint32_t _rot = (_ea_0802148C & 3u) * 8u; _v_0802148C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0802148C;
    g_cpu.R[15] = 0x08021490u;
    runtime_tick(_cyc_0802148C);
    /* 08021490  08021490 A mov r6,r3 */
    g_cpu.R[15] = 0x08021490u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021490 = 1u;
    _cyc_08021490 = 1u;
    uint32_t _rm_08021490 = g_cpu.R[3];
    uint32_t _op2_08021490;
    uint32_t _co_08021490;
    _op2_08021490 = _rm_08021490;
    _co_08021490 = cpsr_c();
    uint32_t _r_08021490;
    _r_08021490 = _op2_08021490;
    g_cpu.R[6] = _r_08021490;
    g_cpu.R[15] = 0x08021494u;
    runtime_tick(_cyc_08021490);
    /* 08021494  08021494 A ldr r3,[r0] */
    g_cpu.R[15] = 0x08021494u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021494 = 1u;
    _cyc_08021494 = 2u;
    uint32_t _base_08021494 = g_cpu.R[0];
    uint32_t _off_08021494;
    _off_08021494 = 0x00000000u;
    uint32_t _ea_08021494 = _base_08021494 + _off_08021494;
    uint32_t _post_08021494 = _base_08021494 + _off_08021494;
    _cyc_08021494 += runtime_mem_cycles(_ea_08021494, 4u, 0u);
    uint32_t _v_08021494;
    { uint32_t _w = bus_read_u32(_ea_08021494 & ~3u); uint32_t _rot = (_ea_08021494 & 3u) * 8u; _v_08021494 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08021494;
    g_cpu.R[15] = 0x08021498u;
    runtime_tick(_cyc_08021494);
    /* 08021498  08021498 A rsb r4,r2,r12 */
    g_cpu.R[15] = 0x08021498u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021498 = 1u;
    _cyc_08021498 = 1u;
    uint32_t _rm_08021498 = g_cpu.R[12];
    uint32_t _op2_08021498;
    uint32_t _co_08021498;
    _op2_08021498 = _rm_08021498;
    _co_08021498 = cpsr_c();
    uint32_t _rn_08021498 = g_cpu.R[2];
    uint32_t _r_08021498;
    _r_08021498 = _op2_08021498 - _rn_08021498;
    g_cpu.R[4] = _r_08021498;
    g_cpu.R[15] = 0x0802149Cu;
    runtime_tick(_cyc_08021498);
    /* 0802149C  0802149c A rsb r1,r3,r1 */
    g_cpu.R[15] = 0x0802149Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802149C = 1u;
    _cyc_0802149C = 1u;
    uint32_t _rm_0802149C = g_cpu.R[1];
    uint32_t _op2_0802149C;
    uint32_t _co_0802149C;
    _op2_0802149C = _rm_0802149C;
    _co_0802149C = cpsr_c();
    uint32_t _rn_0802149C = g_cpu.R[3];
    uint32_t _r_0802149C;
    _r_0802149C = _op2_0802149C - _rn_0802149C;
    g_cpu.R[1] = _r_0802149C;
    g_cpu.R[15] = 0x080214A0u;
    runtime_tick(_cyc_0802149C);
    /* 080214A0  080214a0 A mov r0,r1,asr #4 */
    g_cpu.R[15] = 0x080214A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214A0 = 1u;
    _cyc_080214A0 = 1u;
    uint32_t _rm_080214A0 = g_cpu.R[1];
    uint32_t _op2_080214A0;
    uint32_t _co_080214A0;
    _op2_080214A0 = (uint32_t)((int32_t)_rm_080214A0 >> 4);
    _co_080214A0 = (_rm_080214A0 >> 3) & 1u;
    uint32_t _r_080214A0;
    _r_080214A0 = _op2_080214A0;
    g_cpu.R[0] = _r_080214A0;
    g_cpu.R[15] = 0x080214A4u;
    runtime_tick(_cyc_080214A0);
    /* 080214A4  080214a4 A mov r1,r4,asr #4 */
    g_cpu.R[15] = 0x080214A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214A4 = 1u;
    _cyc_080214A4 = 1u;
    uint32_t _rm_080214A4 = g_cpu.R[4];
    uint32_t _op2_080214A4;
    uint32_t _co_080214A4;
    _op2_080214A4 = (uint32_t)((int32_t)_rm_080214A4 >> 4);
    _co_080214A4 = (_rm_080214A4 >> 3) & 1u;
    uint32_t _r_080214A4;
    _r_080214A4 = _op2_080214A4;
    g_cpu.R[1] = _r_080214A4;
    g_cpu.R[15] = 0x080214A8u;
    runtime_tick(_cyc_080214A4);
    /* 080214A8  080214a8 A ldr r12,[r9,#0x44] */
    g_cpu.R[15] = 0x080214A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214A8 = 1u;
    _cyc_080214A8 = 2u;
    uint32_t _base_080214A8 = g_cpu.R[9];
    uint32_t _off_080214A8;
    _off_080214A8 = 0x00000044u;
    uint32_t _ea_080214A8 = _base_080214A8 + _off_080214A8;
    uint32_t _post_080214A8 = _base_080214A8 + _off_080214A8;
    _cyc_080214A8 += runtime_mem_cycles(_ea_080214A8, 4u, 0u);
    uint32_t _v_080214A8;
    { uint32_t _w = bus_read_u32(_ea_080214A8 & ~3u); uint32_t _rot = (_ea_080214A8 & 3u) * 8u; _v_080214A8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[12] = _v_080214A8;
    g_cpu.R[15] = 0x080214ACu;
    runtime_tick(_cyc_080214A8);
    /* 080214AC  080214ac A bl 0x080216f0 */
    g_cpu.R[15] = 0x080214ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214AC = 1u;
    _cyc_080214AC = 3u;
    g_cpu.R[14] = 0x080214B0u;
    g_cpu.R[15] = 0x080216F0u;
    runtime_call_push_return(0x080214B0u);
    runtime_tick(_cyc_080214AC);
    _cyc_080214AC = 0u;
    gf_memory_writes_arm_at_080216F0();
    if (g_cpu.R[15] != 0x080214B0u) { runtime_call_cancel_return(0x080214B0u); return; }
    g_cpu.R[15] = 0x080214B0u;
    runtime_tick(_cyc_080214AC);
    /* 080214B0  080214b0 A mov r0,r0,lsl #16 */
    g_cpu.R[15] = 0x080214B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214B0 = 1u;
    _cyc_080214B0 = 1u;
    uint32_t _rm_080214B0 = g_cpu.R[0];
    uint32_t _op2_080214B0;
    uint32_t _co_080214B0;
    _op2_080214B0 = _rm_080214B0 << 16;
    _co_080214B0 = (_rm_080214B0 >> 16) & 1u;
    uint32_t _r_080214B0;
    _r_080214B0 = _op2_080214B0;
    g_cpu.R[0] = _r_080214B0;
    g_cpu.R[15] = 0x080214B4u;
    runtime_tick(_cyc_080214B0);
    /* 080214B4  080214b4 A mov r8,r0,lsr #16 */
    g_cpu.R[15] = 0x080214B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214B4 = 1u;
    _cyc_080214B4 = 1u;
    uint32_t _rm_080214B4 = g_cpu.R[0];
    uint32_t _op2_080214B4;
    uint32_t _co_080214B4;
    _op2_080214B4 = _rm_080214B4 >> 16;
    _co_080214B4 = (_rm_080214B4 >> 15) & 1u;
    uint32_t _r_080214B4;
    _r_080214B4 = _op2_080214B4;
    g_cpu.R[8] = _r_080214B4;
    g_cpu.R[15] = 0x080214B8u;
    runtime_tick(_cyc_080214B4);
    /* 080214B8  080214b8 A mov r1,#0x8000 */
    g_cpu.R[15] = 0x080214B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214B8 = 1u;
    _cyc_080214B8 = 1u;
    uint32_t _r_080214B8;
    _r_080214B8 = 0x00008000u;
    g_cpu.R[1] = _r_080214B8;
    g_cpu.R[15] = 0x080214BCu;
    runtime_tick(_cyc_080214B8);
    /* 080214BC  080214bc A ldr r3,[r5] */
    g_cpu.R[15] = 0x080214BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214BC = 1u;
    _cyc_080214BC = 2u;
    uint32_t _base_080214BC = g_cpu.R[5];
    uint32_t _off_080214BC;
    _off_080214BC = 0x00000000u;
    uint32_t _ea_080214BC = _base_080214BC + _off_080214BC;
    uint32_t _post_080214BC = _base_080214BC + _off_080214BC;
    _cyc_080214BC += runtime_mem_cycles(_ea_080214BC, 4u, 0u);
    uint32_t _v_080214BC;
    { uint32_t _w = bus_read_u32(_ea_080214BC & ~3u); uint32_t _rot = (_ea_080214BC & 3u) * 8u; _v_080214BC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_080214BC;
    g_cpu.R[15] = 0x080214C0u;
    runtime_tick(_cyc_080214BC);
    /* 080214C0  080214c0 A smull raw=0xe0c30391 */
    g_cpu.R[15] = 0x080214C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214C0 = 1u;
    _cyc_080214C0 = 1u;
    _cyc_080214C0 += runtime_mul_cycles(g_cpu.R[3], 1u, 1u);
    int64_t _p_080214C0 = (int64_t)(int32_t)g_cpu.R[1] * (int64_t)(int32_t)g_cpu.R[3];
    g_cpu.R[0] = (uint32_t)((uint64_t)_p_080214C0 & 0xFFFFFFFFu);
    g_cpu.R[3] = (uint32_t)((uint64_t)_p_080214C0 >> 32);
    g_cpu.R[15] = 0x080214C4u;
    runtime_tick(_cyc_080214C0);
    /* 080214C4  080214c4 A mov r3,r3,lsl #16 */
    g_cpu.R[15] = 0x080214C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214C4 = 1u;
    _cyc_080214C4 = 1u;
    uint32_t _rm_080214C4 = g_cpu.R[3];
    uint32_t _op2_080214C4;
    uint32_t _co_080214C4;
    _op2_080214C4 = _rm_080214C4 << 16;
    _co_080214C4 = (_rm_080214C4 >> 16) & 1u;
    uint32_t _r_080214C4;
    _r_080214C4 = _op2_080214C4;
    g_cpu.R[3] = _r_080214C4;
    g_cpu.R[15] = 0x080214C8u;
    runtime_tick(_cyc_080214C4);
    /* 080214C8  080214c8 A orr r2,r3,r0,lsr #16 */
    g_cpu.R[15] = 0x080214C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214C8 = 1u;
    _cyc_080214C8 = 1u;
    uint32_t _rm_080214C8 = g_cpu.R[0];
    uint32_t _op2_080214C8;
    uint32_t _co_080214C8;
    _op2_080214C8 = _rm_080214C8 >> 16;
    _co_080214C8 = (_rm_080214C8 >> 15) & 1u;
    uint32_t _rn_080214C8 = g_cpu.R[3];
    uint32_t _r_080214C8;
    _r_080214C8 = _rn_080214C8 | _op2_080214C8;
    g_cpu.R[2] = _r_080214C8;
    g_cpu.R[15] = 0x080214CCu;
    runtime_tick(_cyc_080214C8);
    /* 080214CC  080214cc A str r2,[r13,#0x4] */
    g_cpu.R[15] = 0x080214CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214CC = 1u;
    _cyc_080214CC = 1u;
    uint32_t _base_080214CC = g_cpu.R[13];
    uint32_t _off_080214CC;
    _off_080214CC = 0x00000004u;
    uint32_t _ea_080214CC = _base_080214CC + _off_080214CC;
    uint32_t _post_080214CC = _base_080214CC + _off_080214CC;
    _cyc_080214CC += runtime_mem_cycles(_ea_080214CC, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080214CCu, _ea_080214CC & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_080214CC & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x080214D0u;
    runtime_tick(_cyc_080214CC);
    /* 080214D0  080214d0 A ldr r2,[r5,#0x8] */
    g_cpu.R[15] = 0x080214D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214D0 = 1u;
    _cyc_080214D0 = 2u;
    uint32_t _base_080214D0 = g_cpu.R[5];
    uint32_t _off_080214D0;
    _off_080214D0 = 0x00000008u;
    uint32_t _ea_080214D0 = _base_080214D0 + _off_080214D0;
    uint32_t _post_080214D0 = _base_080214D0 + _off_080214D0;
    _cyc_080214D0 += runtime_mem_cycles(_ea_080214D0, 4u, 0u);
    uint32_t _v_080214D0;
    { uint32_t _w = bus_read_u32(_ea_080214D0 & ~3u); uint32_t _rot = (_ea_080214D0 & 3u) * 8u; _v_080214D0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080214D0;
    g_cpu.R[15] = 0x080214D4u;
    runtime_tick(_cyc_080214D0);
    /* 080214D4  080214d4 A smull raw=0xe0c23291 */
    g_cpu.R[15] = 0x080214D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214D4 = 1u;
    _cyc_080214D4 = 1u;
    _cyc_080214D4 += runtime_mul_cycles(g_cpu.R[2], 1u, 1u);
    int64_t _p_080214D4 = (int64_t)(int32_t)g_cpu.R[1] * (int64_t)(int32_t)g_cpu.R[2];
    g_cpu.R[3] = (uint32_t)((uint64_t)_p_080214D4 & 0xFFFFFFFFu);
    g_cpu.R[2] = (uint32_t)((uint64_t)_p_080214D4 >> 32);
    g_cpu.R[15] = 0x080214D8u;
    runtime_tick(_cyc_080214D4);
    /* 080214D8  080214d8 A mov r2,r2,lsl #16 */
    g_cpu.R[15] = 0x080214D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214D8 = 1u;
    _cyc_080214D8 = 1u;
    uint32_t _rm_080214D8 = g_cpu.R[2];
    uint32_t _op2_080214D8;
    uint32_t _co_080214D8;
    _op2_080214D8 = _rm_080214D8 << 16;
    _co_080214D8 = (_rm_080214D8 >> 16) & 1u;
    uint32_t _r_080214D8;
    _r_080214D8 = _op2_080214D8;
    g_cpu.R[2] = _r_080214D8;
    g_cpu.R[15] = 0x080214DCu;
    runtime_tick(_cyc_080214D8);
    /* 080214DC  080214dc A orr r1,r2,r3,lsr #16 */
    g_cpu.R[15] = 0x080214DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214DC = 1u;
    _cyc_080214DC = 1u;
    uint32_t _rm_080214DC = g_cpu.R[3];
    uint32_t _op2_080214DC;
    uint32_t _co_080214DC;
    _op2_080214DC = _rm_080214DC >> 16;
    _co_080214DC = (_rm_080214DC >> 15) & 1u;
    uint32_t _rn_080214DC = g_cpu.R[2];
    uint32_t _r_080214DC;
    _r_080214DC = _rn_080214DC | _op2_080214DC;
    g_cpu.R[1] = _r_080214DC;
    g_cpu.R[15] = 0x080214E0u;
    runtime_tick(_cyc_080214DC);
    /* 080214E0  080214e0 A str r1,[r13] */
    g_cpu.R[15] = 0x080214E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214E0 = 1u;
    _cyc_080214E0 = 1u;
    uint32_t _base_080214E0 = g_cpu.R[13];
    uint32_t _off_080214E0;
    _off_080214E0 = 0x00000000u;
    uint32_t _ea_080214E0 = _base_080214E0 + _off_080214E0;
    uint32_t _post_080214E0 = _base_080214E0 + _off_080214E0;
    _cyc_080214E0 += runtime_mem_cycles(_ea_080214E0, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080214E0u, _ea_080214E0 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_080214E0 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x080214E4u;
    runtime_tick(_cyc_080214E0);
    /* 080214E4  080214e4 A ldr r2,[r15,#0x198] */
    g_cpu.R[15] = 0x080214E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214E4 = 1u;
    _cyc_080214E4 = 2u;
    uint32_t _base_080214E4 = 0x080214ECu;
    uint32_t _off_080214E4;
    _off_080214E4 = 0x00000198u;
    uint32_t _ea_080214E4 = _base_080214E4 + _off_080214E4;
    uint32_t _post_080214E4 = _base_080214E4 + _off_080214E4;
    _cyc_080214E4 += runtime_mem_cycles(_ea_080214E4, 4u, 0u);
    uint32_t _v_080214E4;
    { uint32_t _w = bus_read_u32(_ea_080214E4 & ~3u); uint32_t _rot = (_ea_080214E4 & 3u) * 8u; _v_080214E4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080214E4;
    g_cpu.R[15] = 0x080214E8u;
    runtime_tick(_cyc_080214E4);
    /* 080214E8  080214e8 A ldr r3,[r2] */
    g_cpu.R[15] = 0x080214E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214E8 = 1u;
    _cyc_080214E8 = 2u;
    uint32_t _base_080214E8 = g_cpu.R[2];
    uint32_t _off_080214E8;
    _off_080214E8 = 0x00000000u;
    uint32_t _ea_080214E8 = _base_080214E8 + _off_080214E8;
    uint32_t _post_080214E8 = _base_080214E8 + _off_080214E8;
    _cyc_080214E8 += runtime_mem_cycles(_ea_080214E8, 4u, 0u);
    uint32_t _v_080214E8;
    { uint32_t _w = bus_read_u32(_ea_080214E8 & ~3u); uint32_t _rot = (_ea_080214E8 & 3u) * 8u; _v_080214E8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_080214E8;
    g_cpu.R[15] = 0x080214ECu;
    runtime_tick(_cyc_080214E8);
    /* 080214EC  080214ec A cmps r8,r3 */
    g_cpu.R[15] = 0x080214ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214EC = 1u;
    _cyc_080214EC = 1u;
    uint32_t _rm_080214EC = g_cpu.R[3];
    uint32_t _op2_080214EC;
    uint32_t _co_080214EC;
    _op2_080214EC = _rm_080214EC;
    _co_080214EC = cpsr_c();
    uint32_t _rn_080214EC = g_cpu.R[8];
    uint32_t _r_080214EC;
    _r_080214EC = _rn_080214EC - _op2_080214EC;
    arm_set_nzcv_sub(_rn_080214EC, _op2_080214EC, _r_080214EC);
    g_cpu.R[15] = 0x080214F0u;
    runtime_tick(_cyc_080214EC);
    /* 080214F0  080214f0 A beq 0x08021608 */
    g_cpu.R[15] = 0x080214F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214F0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080214F0 = 3u;
        g_cpu.R[15] = 0x08021608u;
        runtime_tick(_cyc_080214F0);
        gf_memory_reads_arm_at_08021608();
        return;
    }
    g_cpu.R[15] = 0x080214F4u;
    runtime_tick(_cyc_080214F0);
    /* 080214F4  080214f4 A mov r0,r8 */
    g_cpu.R[15] = 0x080214F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214F4 = 1u;
    _cyc_080214F4 = 1u;
    uint32_t _rm_080214F4 = g_cpu.R[8];
    uint32_t _op2_080214F4;
    uint32_t _co_080214F4;
    _op2_080214F4 = _rm_080214F4;
    _co_080214F4 = cpsr_c();
    uint32_t _r_080214F4;
    _r_080214F4 = _op2_080214F4;
    g_cpu.R[0] = _r_080214F4;
    g_cpu.R[15] = 0x080214F8u;
    runtime_tick(_cyc_080214F4);
    /* 080214F8  080214f8 A str r8,[r2] */
    g_cpu.R[15] = 0x080214F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214F8 = 1u;
    _cyc_080214F8 = 1u;
    uint32_t _base_080214F8 = g_cpu.R[2];
    uint32_t _off_080214F8;
    _off_080214F8 = 0x00000000u;
    uint32_t _ea_080214F8 = _base_080214F8 + _off_080214F8;
    uint32_t _post_080214F8 = _base_080214F8 + _off_080214F8;
    _cyc_080214F8 += runtime_mem_cycles(_ea_080214F8, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080214F8u, _ea_080214F8 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_ea_080214F8 & ~3u, g_cpu.R[8]);
    g_cpu.R[15] = 0x080214FCu;
    runtime_tick(_cyc_080214F8);
    /* 080214FC  080214fc A ldr r12,[r9,#0x5c] */
    g_cpu.R[15] = 0x080214FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080214FC = 1u;
    _cyc_080214FC = 2u;
    uint32_t _base_080214FC = g_cpu.R[9];
    uint32_t _off_080214FC;
    _off_080214FC = 0x0000005Cu;
    uint32_t _ea_080214FC = _base_080214FC + _off_080214FC;
    uint32_t _post_080214FC = _base_080214FC + _off_080214FC;
    _cyc_080214FC += runtime_mem_cycles(_ea_080214FC, 4u, 0u);
    uint32_t _v_080214FC;
    { uint32_t _w = bus_read_u32(_ea_080214FC & ~3u); uint32_t _rot = (_ea_080214FC & 3u) * 8u; _v_080214FC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[12] = _v_080214FC;
    g_cpu.R[15] = 0x08021500u;
    runtime_tick(_cyc_080214FC);
    /* 08021500  08021500 A mov r14,r15 */
    g_cpu.R[15] = 0x08021500u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021500 = 1u;
    _cyc_08021500 = 1u;
    uint32_t _rm_08021500 = 0x08021508u;
    uint32_t _op2_08021500;
    uint32_t _co_08021500;
    _op2_08021500 = _rm_08021500;
    _co_08021500 = cpsr_c();
    uint32_t _r_08021500;
    _r_08021500 = _op2_08021500;
    g_cpu.R[14] = _r_08021500;
    g_cpu.R[15] = 0x08021504u;
    runtime_tick(_cyc_08021500);
    /* 08021504  08021504 A bx r12 */
    g_cpu.R[15] = 0x08021504u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021504 = 1u;
    _cyc_08021504 = 3u;
    uint32_t _bxt_08021504 = g_cpu.R[12];
    g_cpu.R[15] = _bxt_08021504 & ~1u;
    runtime_tick(_cyc_08021504);
    runtime_dispatch_with_exchange(_bxt_08021504);
    return;
    g_cpu.R[15] = 0x08021508u;
    runtime_tick(_cyc_08021504);
    /* fall-through to 0x08021508 */
    g_cpu.R[15] = 0x08021508u;
    runtime_dispatch(0x08021508u);
    return;
}


/* 0x08021528  mode=arm  end=0x08021608  branches=2 */
void gf_memory_transfer_arm_at_08021528(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021528u);
L_08021528:
    /* 08021528  08021528 A ldm r7,{r2,r4} */
    g_cpu.R[15] = 0x08021528u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021528 = 1u;
    _cyc_08021528 = 2u;
    uint32_t _b_08021528 = g_cpu.R[7];
    uint32_t _a_08021528 = _b_08021528;
    uint32_t _fb_08021528 = _b_08021528 + 8u;
    _cyc_08021528 += runtime_mem_cycles(_a_08021528 & ~3u, 4u, 0u);
    g_cpu.R[2] = bus_read_u32(_a_08021528 & ~3u);
    _a_08021528 += 4u;
    _cyc_08021528 += runtime_mem_cycles(_a_08021528 & ~3u, 4u, 1u);
    g_cpu.R[4] = bus_read_u32(_a_08021528 & ~3u);
    _a_08021528 += 4u;
    g_cpu.R[15] = 0x0802152Cu;
    runtime_tick(_cyc_08021528);
    /* 0802152C  0802152c A smull raw=0xe0c31295 */
    g_cpu.R[15] = 0x0802152Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802152C = 1u;
    _cyc_0802152C = 1u;
    _cyc_0802152C += runtime_mul_cycles(g_cpu.R[2], 1u, 1u);
    int64_t _p_0802152C = (int64_t)(int32_t)g_cpu.R[5] * (int64_t)(int32_t)g_cpu.R[2];
    g_cpu.R[1] = (uint32_t)((uint64_t)_p_0802152C & 0xFFFFFFFFu);
    g_cpu.R[3] = (uint32_t)((uint64_t)_p_0802152C >> 32);
    g_cpu.R[15] = 0x08021530u;
    runtime_tick(_cyc_0802152C);
    /* 08021530  08021530 A mov r3,r3,lsl #16 */
    g_cpu.R[15] = 0x08021530u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021530 = 1u;
    _cyc_08021530 = 1u;
    uint32_t _rm_08021530 = g_cpu.R[3];
    uint32_t _op2_08021530;
    uint32_t _co_08021530;
    _op2_08021530 = _rm_08021530 << 16;
    _co_08021530 = (_rm_08021530 >> 16) & 1u;
    uint32_t _r_08021530;
    _r_08021530 = _op2_08021530;
    g_cpu.R[3] = _r_08021530;
    g_cpu.R[15] = 0x08021534u;
    runtime_tick(_cyc_08021530);
    /* 08021534  08021534 A orr r3,r3,r1,lsr #16 */
    g_cpu.R[15] = 0x08021534u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021534 = 1u;
    _cyc_08021534 = 1u;
    uint32_t _rm_08021534 = g_cpu.R[1];
    uint32_t _op2_08021534;
    uint32_t _co_08021534;
    _op2_08021534 = _rm_08021534 >> 16;
    _co_08021534 = (_rm_08021534 >> 15) & 1u;
    uint32_t _rn_08021534 = g_cpu.R[3];
    uint32_t _r_08021534;
    _r_08021534 = _rn_08021534 | _op2_08021534;
    g_cpu.R[3] = _r_08021534;
    g_cpu.R[15] = 0x08021538u;
    runtime_tick(_cyc_08021534);
    /* 08021538  08021538 A cmps r3,#0x0 */
    g_cpu.R[15] = 0x08021538u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021538 = 1u;
    _cyc_08021538 = 1u;
    uint32_t _rn_08021538 = g_cpu.R[3];
    uint32_t _r_08021538;
    _r_08021538 = _rn_08021538 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021538, 0x00000000u, _r_08021538);
    g_cpu.R[15] = 0x0802153Cu;
    runtime_tick(_cyc_08021538);
    /* 0802153C  0802153c A addlt r3,r3,#0xff */
    g_cpu.R[15] = 0x0802153Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802153C = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_0802153C = 1u;
        uint32_t _rn_0802153C = g_cpu.R[3];
        uint32_t _r_0802153C;
        _r_0802153C = _rn_0802153C + 0x000000FFu;
        g_cpu.R[3] = _r_0802153C;
    }
    g_cpu.R[15] = 0x08021540u;
    runtime_tick(_cyc_0802153C);
    /* 08021540  08021540 A mov r3,r3,asr #8 */
    g_cpu.R[15] = 0x08021540u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021540 = 1u;
    _cyc_08021540 = 1u;
    uint32_t _rm_08021540 = g_cpu.R[3];
    uint32_t _op2_08021540;
    uint32_t _co_08021540;
    _op2_08021540 = (uint32_t)((int32_t)_rm_08021540 >> 8);
    _co_08021540 = (_rm_08021540 >> 7) & 1u;
    uint32_t _r_08021540;
    _r_08021540 = _op2_08021540;
    g_cpu.R[3] = _r_08021540;
    g_cpu.R[15] = 0x08021544u;
    runtime_tick(_cyc_08021540);
    /* 08021544  08021544 A rsb r3,r3,#0x0 */
    g_cpu.R[15] = 0x08021544u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021544 = 1u;
    _cyc_08021544 = 1u;
    uint32_t _rn_08021544 = g_cpu.R[3];
    uint32_t _r_08021544;
    _r_08021544 = 0x00000000u - _rn_08021544;
    g_cpu.R[3] = _r_08021544;
    g_cpu.R[15] = 0x08021548u;
    runtime_tick(_cyc_08021544);
    /* 08021548  08021548 A mov r1,r3,lsl #16 */
    g_cpu.R[15] = 0x08021548u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021548 = 1u;
    _cyc_08021548 = 1u;
    uint32_t _rm_08021548 = g_cpu.R[3];
    uint32_t _op2_08021548;
    uint32_t _co_08021548;
    _op2_08021548 = _rm_08021548 << 16;
    _co_08021548 = (_rm_08021548 >> 16) & 1u;
    uint32_t _r_08021548;
    _r_08021548 = _op2_08021548;
    g_cpu.R[1] = _r_08021548;
    g_cpu.R[15] = 0x0802154Cu;
    runtime_tick(_cyc_08021548);
    /* 0802154C  0802154c A strh r3,[r7,#0x10] */
    g_cpu.R[15] = 0x0802154Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802154C = 1u;
    _cyc_0802154C = 1u;
    uint32_t _base_0802154C = g_cpu.R[7];
    uint32_t _off_0802154C;
    _off_0802154C = 0x00000010u;
    uint32_t _ea_0802154C = _base_0802154C + _off_0802154C;
    uint32_t _post_0802154C = _base_0802154C + _off_0802154C;
    _cyc_0802154C += runtime_mem_cycles(_ea_0802154C, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0802154Cu, _ea_0802154C & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0802154C & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x08021550u;
    runtime_tick(_cyc_0802154C);
    /* 08021550  08021550 A mov r14,r1,asr #16 */
    g_cpu.R[15] = 0x08021550u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021550 = 1u;
    _cyc_08021550 = 1u;
    uint32_t _rm_08021550 = g_cpu.R[1];
    uint32_t _op2_08021550;
    uint32_t _co_08021550;
    _op2_08021550 = (uint32_t)((int32_t)_rm_08021550 >> 16);
    _co_08021550 = (_rm_08021550 >> 15) & 1u;
    uint32_t _r_08021550;
    _r_08021550 = _op2_08021550;
    g_cpu.R[14] = _r_08021550;
    g_cpu.R[15] = 0x08021554u;
    runtime_tick(_cyc_08021550);
    /* 08021554  08021554 A strh r3,[r6] */
    g_cpu.R[15] = 0x08021554u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021554 = 1u;
    _cyc_08021554 = 1u;
    uint32_t _base_08021554 = g_cpu.R[6];
    uint32_t _off_08021554;
    _off_08021554 = 0x00000000u;
    uint32_t _ea_08021554 = _base_08021554 + _off_08021554;
    uint32_t _post_08021554 = _base_08021554 + _off_08021554;
    _cyc_08021554 += runtime_mem_cycles(_ea_08021554, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021554u, _ea_08021554 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08021554 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[15] = 0x08021558u;
    runtime_tick(_cyc_08021554);
    /* 08021558  08021558 A smull raw=0xe0c2129a */
    g_cpu.R[15] = 0x08021558u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021558 = 1u;
    _cyc_08021558 = 1u;
    _cyc_08021558 += runtime_mul_cycles(g_cpu.R[2], 1u, 1u);
    int64_t _p_08021558 = (int64_t)(int32_t)g_cpu.R[10] * (int64_t)(int32_t)g_cpu.R[2];
    g_cpu.R[1] = (uint32_t)((uint64_t)_p_08021558 & 0xFFFFFFFFu);
    g_cpu.R[2] = (uint32_t)((uint64_t)_p_08021558 >> 32);
    g_cpu.R[15] = 0x0802155Cu;
    runtime_tick(_cyc_08021558);
    /* 0802155C  0802155c A mov r2,r2,lsl #16 */
    g_cpu.R[15] = 0x0802155Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802155C = 1u;
    _cyc_0802155C = 1u;
    uint32_t _rm_0802155C = g_cpu.R[2];
    uint32_t _op2_0802155C;
    uint32_t _co_0802155C;
    _op2_0802155C = _rm_0802155C << 16;
    _co_0802155C = (_rm_0802155C >> 16) & 1u;
    uint32_t _r_0802155C;
    _r_0802155C = _op2_0802155C;
    g_cpu.R[2] = _r_0802155C;
    g_cpu.R[15] = 0x08021560u;
    runtime_tick(_cyc_0802155C);
    /* 08021560  08021560 A orr r2,r2,r1,lsr #16 */
    g_cpu.R[15] = 0x08021560u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021560 = 1u;
    _cyc_08021560 = 1u;
    uint32_t _rm_08021560 = g_cpu.R[1];
    uint32_t _op2_08021560;
    uint32_t _co_08021560;
    _op2_08021560 = _rm_08021560 >> 16;
    _co_08021560 = (_rm_08021560 >> 15) & 1u;
    uint32_t _rn_08021560 = g_cpu.R[2];
    uint32_t _r_08021560;
    _r_08021560 = _rn_08021560 | _op2_08021560;
    g_cpu.R[2] = _r_08021560;
    g_cpu.R[15] = 0x08021564u;
    runtime_tick(_cyc_08021560);
    /* 08021564  08021564 A cmps r2,#0x0 */
    g_cpu.R[15] = 0x08021564u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021564 = 1u;
    _cyc_08021564 = 1u;
    uint32_t _rn_08021564 = g_cpu.R[2];
    uint32_t _r_08021564;
    _r_08021564 = _rn_08021564 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021564, 0x00000000u, _r_08021564);
    g_cpu.R[15] = 0x08021568u;
    runtime_tick(_cyc_08021564);
    /* 08021568  08021568 A addlt r2,r2,#0xff */
    g_cpu.R[15] = 0x08021568u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021568 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08021568 = 1u;
        uint32_t _rn_08021568 = g_cpu.R[2];
        uint32_t _r_08021568;
        _r_08021568 = _rn_08021568 + 0x000000FFu;
        g_cpu.R[2] = _r_08021568;
    }
    g_cpu.R[15] = 0x0802156Cu;
    runtime_tick(_cyc_08021568);
    /* 0802156C  0802156c A mov r2,r2,asr #8 */
    g_cpu.R[15] = 0x0802156Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802156C = 1u;
    _cyc_0802156C = 1u;
    uint32_t _rm_0802156C = g_cpu.R[2];
    uint32_t _op2_0802156C;
    uint32_t _co_0802156C;
    _op2_0802156C = (uint32_t)((int32_t)_rm_0802156C >> 8);
    _co_0802156C = (_rm_0802156C >> 7) & 1u;
    uint32_t _r_0802156C;
    _r_0802156C = _op2_0802156C;
    g_cpu.R[2] = _r_0802156C;
    g_cpu.R[15] = 0x08021570u;
    runtime_tick(_cyc_0802156C);
    /* 08021570  08021570 A strh r2,[r7,#0x12] */
    g_cpu.R[15] = 0x08021570u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021570 = 1u;
    _cyc_08021570 = 1u;
    uint32_t _base_08021570 = g_cpu.R[7];
    uint32_t _off_08021570;
    _off_08021570 = 0x00000012u;
    uint32_t _ea_08021570 = _base_08021570 + _off_08021570;
    uint32_t _post_08021570 = _base_08021570 + _off_08021570;
    _cyc_08021570 += runtime_mem_cycles(_ea_08021570, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021570u, _ea_08021570 & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08021570 & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x08021574u;
    runtime_tick(_cyc_08021570);
    /* 08021574  08021574 A strh r2,[r6,#0x4] */
    g_cpu.R[15] = 0x08021574u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021574 = 1u;
    _cyc_08021574 = 1u;
    uint32_t _base_08021574 = g_cpu.R[6];
    uint32_t _off_08021574;
    _off_08021574 = 0x00000004u;
    uint32_t _ea_08021574 = _base_08021574 + _off_08021574;
    uint32_t _post_08021574 = _base_08021574 + _off_08021574;
    _cyc_08021574 += runtime_mem_cycles(_ea_08021574, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021574u, _ea_08021574 & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08021574 & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x08021578u;
    runtime_tick(_cyc_08021574);
    /* 08021578  08021578 A ldr r3,[r15,#0x108] */
    g_cpu.R[15] = 0x08021578u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021578 = 1u;
    _cyc_08021578 = 2u;
    uint32_t _base_08021578 = 0x08021580u;
    uint32_t _off_08021578;
    _off_08021578 = 0x00000108u;
    uint32_t _ea_08021578 = _base_08021578 + _off_08021578;
    uint32_t _post_08021578 = _base_08021578 + _off_08021578;
    _cyc_08021578 += runtime_mem_cycles(_ea_08021578, 4u, 0u);
    uint32_t _v_08021578;
    { uint32_t _w = bus_read_u32(_ea_08021578 & ~3u); uint32_t _rot = (_ea_08021578 & 3u) * 8u; _v_08021578 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08021578;
    g_cpu.R[15] = 0x0802157Cu;
    runtime_tick(_cyc_08021578);
    /* 0802157C  0802157c A ldr r0,[r3] */
    g_cpu.R[15] = 0x0802157Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802157C = 1u;
    _cyc_0802157C = 2u;
    uint32_t _base_0802157C = g_cpu.R[3];
    uint32_t _off_0802157C;
    _off_0802157C = 0x00000000u;
    uint32_t _ea_0802157C = _base_0802157C + _off_0802157C;
    uint32_t _post_0802157C = _base_0802157C + _off_0802157C;
    _cyc_0802157C += runtime_mem_cycles(_ea_0802157C, 4u, 0u);
    uint32_t _v_0802157C;
    { uint32_t _w = bus_read_u32(_ea_0802157C & ~3u); uint32_t _rot = (_ea_0802157C & 3u) * 8u; _v_0802157C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0802157C;
    g_cpu.R[15] = 0x08021580u;
    runtime_tick(_cyc_0802157C);
    /* 08021580  08021580 A mov r3,r14,lsl #8 */
    g_cpu.R[15] = 0x08021580u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021580 = 1u;
    _cyc_08021580 = 1u;
    uint32_t _rm_08021580 = g_cpu.R[14];
    uint32_t _op2_08021580;
    uint32_t _co_08021580;
    _op2_08021580 = _rm_08021580 << 8;
    _co_08021580 = (_rm_08021580 >> 24) & 1u;
    uint32_t _r_08021580;
    _r_08021580 = _op2_08021580;
    g_cpu.R[3] = _r_08021580;
    g_cpu.R[15] = 0x08021584u;
    runtime_tick(_cyc_08021580);
    /* 08021584  08021584 A mul r14,r0,r3 */
    g_cpu.R[15] = 0x08021584u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021584 = 1u;
    _cyc_08021584 = 1u;
    _cyc_08021584 += runtime_mul_cycles(g_cpu.R[3], 1u, 0u);
    uint32_t _r_08021584 = g_cpu.R[0] * g_cpu.R[3];
    g_cpu.R[14] = _r_08021584;
    g_cpu.R[15] = 0x08021588u;
    runtime_tick(_cyc_08021584);
    /* 08021588  08021588 A mov r2,r2,lsl #16 */
    g_cpu.R[15] = 0x08021588u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021588 = 1u;
    _cyc_08021588 = 1u;
    uint32_t _rm_08021588 = g_cpu.R[2];
    uint32_t _op2_08021588;
    uint32_t _co_08021588;
    _op2_08021588 = _rm_08021588 << 16;
    _co_08021588 = (_rm_08021588 >> 16) & 1u;
    uint32_t _r_08021588;
    _r_08021588 = _op2_08021588;
    g_cpu.R[2] = _r_08021588;
    g_cpu.R[15] = 0x0802158Cu;
    runtime_tick(_cyc_08021588);
    /* 0802158C  0802158c A mov r2,r2,asr #8 */
    g_cpu.R[15] = 0x0802158Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802158C = 1u;
    _cyc_0802158C = 1u;
    uint32_t _rm_0802158C = g_cpu.R[2];
    uint32_t _op2_0802158C;
    uint32_t _co_0802158C;
    _op2_0802158C = (uint32_t)((int32_t)_rm_0802158C >> 8);
    _co_0802158C = (_rm_0802158C >> 7) & 1u;
    uint32_t _r_0802158C;
    _r_0802158C = _op2_0802158C;
    g_cpu.R[2] = _r_0802158C;
    g_cpu.R[15] = 0x08021590u;
    runtime_tick(_cyc_0802158C);
    /* 08021590  08021590 A rsb r0,r0,#0x0 */
    g_cpu.R[15] = 0x08021590u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021590 = 1u;
    _cyc_08021590 = 1u;
    uint32_t _rn_08021590 = g_cpu.R[0];
    uint32_t _r_08021590;
    _r_08021590 = 0x00000000u - _rn_08021590;
    g_cpu.R[0] = _r_08021590;
    g_cpu.R[15] = 0x08021594u;
    runtime_tick(_cyc_08021590);
    /* 08021594  08021594 A mul r12,r0,r2 */
    g_cpu.R[15] = 0x08021594u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021594 = 1u;
    _cyc_08021594 = 1u;
    _cyc_08021594 += runtime_mul_cycles(g_cpu.R[2], 1u, 0u);
    uint32_t _r_08021594 = g_cpu.R[0] * g_cpu.R[2];
    g_cpu.R[12] = _r_08021594;
    g_cpu.R[15] = 0x08021598u;
    runtime_tick(_cyc_08021594);
    /* 08021598  08021598 A smull raw=0xe0c13994 */
    g_cpu.R[15] = 0x08021598u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021598 = 1u;
    _cyc_08021598 = 1u;
    _cyc_08021598 += runtime_mul_cycles(g_cpu.R[9], 1u, 1u);
    int64_t _p_08021598 = (int64_t)(int32_t)g_cpu.R[4] * (int64_t)(int32_t)g_cpu.R[9];
    g_cpu.R[3] = (uint32_t)((uint64_t)_p_08021598 & 0xFFFFFFFFu);
    g_cpu.R[1] = (uint32_t)((uint64_t)_p_08021598 >> 32);
    g_cpu.R[15] = 0x0802159Cu;
    runtime_tick(_cyc_08021598);
    /* 0802159C  0802159c A mov r1,r1,lsl #16 */
    g_cpu.R[15] = 0x0802159Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802159C = 1u;
    _cyc_0802159C = 1u;
    uint32_t _rm_0802159C = g_cpu.R[1];
    uint32_t _op2_0802159C;
    uint32_t _co_0802159C;
    _op2_0802159C = _rm_0802159C << 16;
    _co_0802159C = (_rm_0802159C >> 16) & 1u;
    uint32_t _r_0802159C;
    _r_0802159C = _op2_0802159C;
    g_cpu.R[1] = _r_0802159C;
    g_cpu.R[15] = 0x080215A0u;
    runtime_tick(_cyc_0802159C);
    /* 080215A0  080215a0 A orr r1,r1,r3,lsr #16 */
    g_cpu.R[15] = 0x080215A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215A0 = 1u;
    _cyc_080215A0 = 1u;
    uint32_t _rm_080215A0 = g_cpu.R[3];
    uint32_t _op2_080215A0;
    uint32_t _co_080215A0;
    _op2_080215A0 = _rm_080215A0 >> 16;
    _co_080215A0 = (_rm_080215A0 >> 15) & 1u;
    uint32_t _rn_080215A0 = g_cpu.R[1];
    uint32_t _r_080215A0;
    _r_080215A0 = _rn_080215A0 | _op2_080215A0;
    g_cpu.R[1] = _r_080215A0;
    g_cpu.R[15] = 0x080215A4u;
    runtime_tick(_cyc_080215A0);
    /* 080215A4  080215a4 A add r1,r14,r1 */
    g_cpu.R[15] = 0x080215A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215A4 = 1u;
    _cyc_080215A4 = 1u;
    uint32_t _rm_080215A4 = g_cpu.R[1];
    uint32_t _op2_080215A4;
    uint32_t _co_080215A4;
    _op2_080215A4 = _rm_080215A4;
    _co_080215A4 = cpsr_c();
    uint32_t _rn_080215A4 = g_cpu.R[14];
    uint32_t _r_080215A4;
    _r_080215A4 = _rn_080215A4 + _op2_080215A4;
    g_cpu.R[1] = _r_080215A4;
    g_cpu.R[15] = 0x080215A8u;
    runtime_tick(_cyc_080215A4);
    /* 080215A8  080215a8 A rsb r1,r1,#0x0 */
    g_cpu.R[15] = 0x080215A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215A8 = 1u;
    _cyc_080215A8 = 1u;
    uint32_t _rn_080215A8 = g_cpu.R[1];
    uint32_t _r_080215A8;
    _r_080215A8 = 0x00000000u - _rn_080215A8;
    g_cpu.R[1] = _r_080215A8;
    g_cpu.R[15] = 0x080215ACu;
    runtime_tick(_cyc_080215A8);
    /* 080215AC  080215ac A str r1,[r7,#0x8] */
    g_cpu.R[15] = 0x080215ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215AC = 1u;
    _cyc_080215AC = 1u;
    uint32_t _base_080215AC = g_cpu.R[7];
    uint32_t _off_080215AC;
    _off_080215AC = 0x00000008u;
    uint32_t _ea_080215AC = _base_080215AC + _off_080215AC;
    uint32_t _post_080215AC = _base_080215AC + _off_080215AC;
    _cyc_080215AC += runtime_mem_cycles(_ea_080215AC, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080215ACu, _ea_080215AC & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_080215AC & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x080215B0u;
    runtime_tick(_cyc_080215AC);
    /* 080215B0  080215b0 A smull raw=0xe0c32594 */
    g_cpu.R[15] = 0x080215B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215B0 = 1u;
    _cyc_080215B0 = 1u;
    _cyc_080215B0 += runtime_mul_cycles(g_cpu.R[5], 1u, 1u);
    int64_t _p_080215B0 = (int64_t)(int32_t)g_cpu.R[4] * (int64_t)(int32_t)g_cpu.R[5];
    g_cpu.R[2] = (uint32_t)((uint64_t)_p_080215B0 & 0xFFFFFFFFu);
    g_cpu.R[3] = (uint32_t)((uint64_t)_p_080215B0 >> 32);
    g_cpu.R[15] = 0x080215B4u;
    runtime_tick(_cyc_080215B0);
    /* 080215B4  080215b4 A mov r3,r3,lsl #16 */
    g_cpu.R[15] = 0x080215B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215B4 = 1u;
    _cyc_080215B4 = 1u;
    uint32_t _rm_080215B4 = g_cpu.R[3];
    uint32_t _op2_080215B4;
    uint32_t _co_080215B4;
    _op2_080215B4 = _rm_080215B4 << 16;
    _co_080215B4 = (_rm_080215B4 >> 16) & 1u;
    uint32_t _r_080215B4;
    _r_080215B4 = _op2_080215B4;
    g_cpu.R[3] = _r_080215B4;
    g_cpu.R[15] = 0x080215B8u;
    runtime_tick(_cyc_080215B4);
    /* 080215B8  080215b8 A orr r3,r3,r2,lsr #16 */
    g_cpu.R[15] = 0x080215B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215B8 = 1u;
    _cyc_080215B8 = 1u;
    uint32_t _rm_080215B8 = g_cpu.R[2];
    uint32_t _op2_080215B8;
    uint32_t _co_080215B8;
    _op2_080215B8 = _rm_080215B8 >> 16;
    _co_080215B8 = (_rm_080215B8 >> 15) & 1u;
    uint32_t _rn_080215B8 = g_cpu.R[3];
    uint32_t _r_080215B8;
    _r_080215B8 = _rn_080215B8 | _op2_080215B8;
    g_cpu.R[3] = _r_080215B8;
    g_cpu.R[15] = 0x080215BCu;
    runtime_tick(_cyc_080215B8);
    /* 080215BC  080215bc A add r12,r12,r3 */
    g_cpu.R[15] = 0x080215BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215BC = 1u;
    _cyc_080215BC = 1u;
    uint32_t _rm_080215BC = g_cpu.R[3];
    uint32_t _op2_080215BC;
    uint32_t _co_080215BC;
    _op2_080215BC = _rm_080215BC;
    _co_080215BC = cpsr_c();
    uint32_t _rn_080215BC = g_cpu.R[12];
    uint32_t _r_080215BC;
    _r_080215BC = _rn_080215BC + _op2_080215BC;
    g_cpu.R[12] = _r_080215BC;
    g_cpu.R[15] = 0x080215C0u;
    runtime_tick(_cyc_080215BC);
    /* 080215C0  080215c0 A str r12,[r7,#0xc] */
    g_cpu.R[15] = 0x080215C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215C0 = 1u;
    _cyc_080215C0 = 1u;
    uint32_t _base_080215C0 = g_cpu.R[7];
    uint32_t _off_080215C0;
    _off_080215C0 = 0x0000000Cu;
    uint32_t _ea_080215C0 = _base_080215C0 + _off_080215C0;
    uint32_t _post_080215C0 = _base_080215C0 + _off_080215C0;
    _cyc_080215C0 += runtime_mem_cycles(_ea_080215C0, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080215C0u, _ea_080215C0 & ~3u, g_cpu.R[12], 4u);
    bus_write_u32(_ea_080215C0 & ~3u, g_cpu.R[12]);
    g_cpu.R[15] = 0x080215C4u;
    runtime_tick(_cyc_080215C0);
    /* 080215C4  080215c4 A ldr r2,[r13,#0x4] */
    g_cpu.R[15] = 0x080215C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215C4 = 1u;
    _cyc_080215C4 = 2u;
    uint32_t _base_080215C4 = g_cpu.R[13];
    uint32_t _off_080215C4;
    _off_080215C4 = 0x00000004u;
    uint32_t _ea_080215C4 = _base_080215C4 + _off_080215C4;
    uint32_t _post_080215C4 = _base_080215C4 + _off_080215C4;
    _cyc_080215C4 += runtime_mem_cycles(_ea_080215C4, 4u, 0u);
    uint32_t _v_080215C4;
    { uint32_t _w = bus_read_u32(_ea_080215C4 & ~3u); uint32_t _rot = (_ea_080215C4 & 3u) * 8u; _v_080215C4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080215C4;
    g_cpu.R[15] = 0x080215C8u;
    runtime_tick(_cyc_080215C4);
    /* 080215C8  080215c8 A add r1,r2,r1 */
    g_cpu.R[15] = 0x080215C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215C8 = 1u;
    _cyc_080215C8 = 1u;
    uint32_t _rm_080215C8 = g_cpu.R[1];
    uint32_t _op2_080215C8;
    uint32_t _co_080215C8;
    _op2_080215C8 = _rm_080215C8;
    _co_080215C8 = cpsr_c();
    uint32_t _rn_080215C8 = g_cpu.R[2];
    uint32_t _r_080215C8;
    _r_080215C8 = _rn_080215C8 + _op2_080215C8;
    g_cpu.R[1] = _r_080215C8;
    g_cpu.R[15] = 0x080215CCu;
    runtime_tick(_cyc_080215C8);
    /* 080215CC  080215cc A mov r1,r1,asr #8 */
    g_cpu.R[15] = 0x080215CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215CC = 1u;
    _cyc_080215CC = 1u;
    uint32_t _rm_080215CC = g_cpu.R[1];
    uint32_t _op2_080215CC;
    uint32_t _co_080215CC;
    _op2_080215CC = (uint32_t)((int32_t)_rm_080215CC >> 8);
    _co_080215CC = (_rm_080215CC >> 7) & 1u;
    uint32_t _r_080215CC;
    _r_080215CC = _op2_080215CC;
    g_cpu.R[1] = _r_080215CC;
    g_cpu.R[15] = 0x080215D0u;
    runtime_tick(_cyc_080215CC);
    /* 080215D0  080215d0 A str r1,[r6,#0x8] */
    g_cpu.R[15] = 0x080215D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215D0 = 1u;
    _cyc_080215D0 = 1u;
    uint32_t _base_080215D0 = g_cpu.R[6];
    uint32_t _off_080215D0;
    _off_080215D0 = 0x00000008u;
    uint32_t _ea_080215D0 = _base_080215D0 + _off_080215D0;
    uint32_t _post_080215D0 = _base_080215D0 + _off_080215D0;
    _cyc_080215D0 += runtime_mem_cycles(_ea_080215D0, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080215D0u, _ea_080215D0 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_080215D0 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x080215D4u;
    runtime_tick(_cyc_080215D0);
    /* 080215D4  080215d4 A ldr r1,[r13] */
    g_cpu.R[15] = 0x080215D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215D4 = 1u;
    _cyc_080215D4 = 2u;
    uint32_t _base_080215D4 = g_cpu.R[13];
    uint32_t _off_080215D4;
    _off_080215D4 = 0x00000000u;
    uint32_t _ea_080215D4 = _base_080215D4 + _off_080215D4;
    uint32_t _post_080215D4 = _base_080215D4 + _off_080215D4;
    _cyc_080215D4 += runtime_mem_cycles(_ea_080215D4, 4u, 0u);
    uint32_t _v_080215D4;
    { uint32_t _w = bus_read_u32(_ea_080215D4 & ~3u); uint32_t _rot = (_ea_080215D4 & 3u) * 8u; _v_080215D4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080215D4;
    g_cpu.R[15] = 0x080215D8u;
    runtime_tick(_cyc_080215D4);
    /* 080215D8  080215d8 A subs r8,r8,#0x1 */
    g_cpu.R[15] = 0x080215D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215D8 = 1u;
    _cyc_080215D8 = 1u;
    uint32_t _rn_080215D8 = g_cpu.R[8];
    uint32_t _r_080215D8;
    _r_080215D8 = _rn_080215D8 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080215D8, 0x00000001u, _r_080215D8);
    g_cpu.R[8] = _r_080215D8;
    g_cpu.R[15] = 0x080215DCu;
    runtime_tick(_cyc_080215D8);
    /* 080215DC  080215dc A ldr r3,[r7,#0xc] */
    g_cpu.R[15] = 0x080215DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215DC = 1u;
    _cyc_080215DC = 2u;
    uint32_t _base_080215DC = g_cpu.R[7];
    uint32_t _off_080215DC;
    _off_080215DC = 0x0000000Cu;
    uint32_t _ea_080215DC = _base_080215DC + _off_080215DC;
    uint32_t _post_080215DC = _base_080215DC + _off_080215DC;
    _cyc_080215DC += runtime_mem_cycles(_ea_080215DC, 4u, 0u);
    uint32_t _v_080215DC;
    { uint32_t _w = bus_read_u32(_ea_080215DC & ~3u); uint32_t _rot = (_ea_080215DC & 3u) * 8u; _v_080215DC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_080215DC;
    g_cpu.R[15] = 0x080215E0u;
    runtime_tick(_cyc_080215DC);
    /* 080215E0  080215e0 A add r12,r6,#0x10 */
    g_cpu.R[15] = 0x080215E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215E0 = 1u;
    _cyc_080215E0 = 1u;
    uint32_t _rn_080215E0 = g_cpu.R[6];
    uint32_t _r_080215E0;
    _r_080215E0 = _rn_080215E0 + 0x00000010u;
    g_cpu.R[12] = _r_080215E0;
    g_cpu.R[15] = 0x080215E4u;
    runtime_tick(_cyc_080215E0);
    /* 080215E4  080215e4 A add r3,r1,r3 */
    g_cpu.R[15] = 0x080215E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215E4 = 1u;
    _cyc_080215E4 = 1u;
    uint32_t _rm_080215E4 = g_cpu.R[3];
    uint32_t _op2_080215E4;
    uint32_t _co_080215E4;
    _op2_080215E4 = _rm_080215E4;
    _co_080215E4 = cpsr_c();
    uint32_t _rn_080215E4 = g_cpu.R[1];
    uint32_t _r_080215E4;
    _r_080215E4 = _rn_080215E4 + _op2_080215E4;
    g_cpu.R[3] = _r_080215E4;
    g_cpu.R[15] = 0x080215E8u;
    runtime_tick(_cyc_080215E4);
    /* 080215E8  080215e8 A mov r3,r3,asr #8 */
    g_cpu.R[15] = 0x080215E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215E8 = 1u;
    _cyc_080215E8 = 1u;
    uint32_t _rm_080215E8 = g_cpu.R[3];
    uint32_t _op2_080215E8;
    uint32_t _co_080215E8;
    _op2_080215E8 = (uint32_t)((int32_t)_rm_080215E8 >> 8);
    _co_080215E8 = (_rm_080215E8 >> 7) & 1u;
    uint32_t _r_080215E8;
    _r_080215E8 = _op2_080215E8;
    g_cpu.R[3] = _r_080215E8;
    g_cpu.R[15] = 0x080215ECu;
    runtime_tick(_cyc_080215E8);
    /* 080215EC  080215ec A str r3,[r6,#0xc] */
    g_cpu.R[15] = 0x080215ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215EC = 1u;
    _cyc_080215EC = 1u;
    uint32_t _base_080215EC = g_cpu.R[6];
    uint32_t _off_080215EC;
    _off_080215EC = 0x0000000Cu;
    uint32_t _ea_080215EC = _base_080215EC + _off_080215EC;
    uint32_t _post_080215EC = _base_080215EC + _off_080215EC;
    _cyc_080215EC += runtime_mem_cycles(_ea_080215EC, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080215ECu, _ea_080215EC & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_080215EC & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x080215F0u;
    runtime_tick(_cyc_080215EC);
    /* 080215F0  080215f0 A add r7,r7,#0x14 */
    g_cpu.R[15] = 0x080215F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215F0 = 1u;
    _cyc_080215F0 = 1u;
    uint32_t _rn_080215F0 = g_cpu.R[7];
    uint32_t _r_080215F0;
    _r_080215F0 = _rn_080215F0 + 0x00000014u;
    g_cpu.R[7] = _r_080215F0;
    g_cpu.R[15] = 0x080215F4u;
    runtime_tick(_cyc_080215F0);
    /* 080215F4  080215f4 A ldm r6,{r0,r1,r2,r3} */
    g_cpu.R[15] = 0x080215F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215F4 = 1u;
    _cyc_080215F4 = 2u;
    uint32_t _b_080215F4 = g_cpu.R[6];
    uint32_t _a_080215F4 = _b_080215F4;
    uint32_t _fb_080215F4 = _b_080215F4 + 16u;
    _cyc_080215F4 += runtime_mem_cycles(_a_080215F4 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_080215F4 & ~3u);
    _a_080215F4 += 4u;
    _cyc_080215F4 += runtime_mem_cycles(_a_080215F4 & ~3u, 4u, 1u);
    g_cpu.R[1] = bus_read_u32(_a_080215F4 & ~3u);
    _a_080215F4 += 4u;
    _cyc_080215F4 += runtime_mem_cycles(_a_080215F4 & ~3u, 4u, 1u);
    g_cpu.R[2] = bus_read_u32(_a_080215F4 & ~3u);
    _a_080215F4 += 4u;
    _cyc_080215F4 += runtime_mem_cycles(_a_080215F4 & ~3u, 4u, 1u);
    g_cpu.R[3] = bus_read_u32(_a_080215F4 & ~3u);
    _a_080215F4 += 4u;
    g_cpu.R[15] = 0x080215F8u;
    runtime_tick(_cyc_080215F4);
    /* 080215F8  080215f8 A add r6,r6,#0x20 */
    g_cpu.R[15] = 0x080215F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215F8 = 1u;
    _cyc_080215F8 = 1u;
    uint32_t _rn_080215F8 = g_cpu.R[6];
    uint32_t _r_080215F8;
    _r_080215F8 = _rn_080215F8 + 0x00000020u;
    g_cpu.R[6] = _r_080215F8;
    g_cpu.R[15] = 0x080215FCu;
    runtime_tick(_cyc_080215F8);
    /* 080215FC  080215fc A stm r12,{r0,r1,r2,r3} */
    g_cpu.R[15] = 0x080215FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080215FC = 1u;
    _cyc_080215FC = 1u;
    uint32_t _b_080215FC = g_cpu.R[12];
    uint32_t _a_080215FC = _b_080215FC;
    uint32_t _fb_080215FC = _b_080215FC + 16u;
    _cyc_080215FC += runtime_mem_cycles(_a_080215FC & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080215FCu, _a_080215FC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_080215FC & ~3u, g_cpu.R[0]);
    _a_080215FC += 4u;
    _cyc_080215FC += runtime_mem_cycles(_a_080215FC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080215FCu, _a_080215FC & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_080215FC & ~3u, g_cpu.R[1]);
    _a_080215FC += 4u;
    _cyc_080215FC += runtime_mem_cycles(_a_080215FC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080215FCu, _a_080215FC & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_080215FC & ~3u, g_cpu.R[2]);
    _a_080215FC += 4u;
    _cyc_080215FC += runtime_mem_cycles(_a_080215FC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080215FCu, _a_080215FC & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_080215FC & ~3u, g_cpu.R[3]);
    _a_080215FC += 4u;
    g_cpu.R[15] = 0x08021600u;
    runtime_tick(_cyc_080215FC);
    /* 08021600  08021600 A bpl 0x08021528 */
    g_cpu.R[15] = 0x08021600u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021600 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08021600 = 3u;
        g_cpu.R[15] = 0x08021528u;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08021600u, 0x08021528u, 0u, 0u);
        runtime_tick(_cyc_08021600);
        goto L_08021528;
    }
    g_cpu.R[15] = 0x08021604u;
    runtime_tick(_cyc_08021600);
    /* 08021604  08021604 A b 0x080216e4 */
    g_cpu.R[15] = 0x08021604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021604 = 1u;
    _cyc_08021604 = 3u;
    g_cpu.R[15] = 0x080216E4u;
    runtime_tick(_cyc_08021604);
    gf_memory_reads_arm_at_080216E4();
    return;
    g_cpu.R[15] = 0x08021608u;
    runtime_tick(_cyc_08021604);
    /* fall-through to 0x08021608 */
    g_cpu.R[15] = 0x08021608u;
    runtime_dispatch(0x08021608u);
    return;
}


/* 0x08021610  mode=arm  end=0x08021680  branches=2 */
void gf_memory_transfer_arm_at_08021610(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021610u);
    /* 08021610  08021610 A ldr r3,[r14] */
    g_cpu.R[15] = 0x08021610u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021610 = 1u;
    _cyc_08021610 = 2u;
    uint32_t _base_08021610 = g_cpu.R[14];
    uint32_t _off_08021610;
    _off_08021610 = 0x00000000u;
    uint32_t _ea_08021610 = _base_08021610 + _off_08021610;
    uint32_t _post_08021610 = _base_08021610 + _off_08021610;
    _cyc_08021610 += runtime_mem_cycles(_ea_08021610, 4u, 0u);
    uint32_t _v_08021610;
    { uint32_t _w = bus_read_u32(_ea_08021610 & ~3u); uint32_t _rot = (_ea_08021610 & 3u) * 8u; _v_08021610 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08021610;
    g_cpu.R[15] = 0x08021614u;
    runtime_tick(_cyc_08021610);
    /* 08021614  08021614 A tsts r3,#0x1 */
    g_cpu.R[15] = 0x08021614u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021614 = 1u;
    _cyc_08021614 = 1u;
    uint32_t _rn_08021614 = g_cpu.R[3];
    uint32_t _r_08021614;
    _r_08021614 = _rn_08021614 & 0x00000001u;
    arm_set_nzc_logic(_r_08021614, cpsr_c());
    g_cpu.R[15] = 0x08021618u;
    runtime_tick(_cyc_08021614);
    /* 08021618  08021618 A beq 0x08021690 */
    g_cpu.R[15] = 0x08021618u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021618 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021618 = 3u;
        g_cpu.R[15] = 0x08021690u;
        runtime_tick(_cyc_08021618);
        gf_memory_transfer_arm_at_08021690();
        return;
    }
    g_cpu.R[15] = 0x0802161Cu;
    runtime_tick(_cyc_08021618);
    /* 0802161C  0802161c A ldr r1,[r7,#0x8] */
    g_cpu.R[15] = 0x0802161Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802161C = 1u;
    _cyc_0802161C = 2u;
    uint32_t _base_0802161C = g_cpu.R[7];
    uint32_t _off_0802161C;
    _off_0802161C = 0x00000008u;
    uint32_t _ea_0802161C = _base_0802161C + _off_0802161C;
    uint32_t _post_0802161C = _base_0802161C + _off_0802161C;
    _cyc_0802161C += runtime_mem_cycles(_ea_0802161C, 4u, 0u);
    uint32_t _v_0802161C;
    { uint32_t _w = bus_read_u32(_ea_0802161C & ~3u); uint32_t _rot = (_ea_0802161C & 3u) * 8u; _v_0802161C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0802161C;
    g_cpu.R[15] = 0x08021620u;
    runtime_tick(_cyc_0802161C);
    /* 08021620  08021620 A ldr r2,[r13,#0x4] */
    g_cpu.R[15] = 0x08021620u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021620 = 1u;
    _cyc_08021620 = 2u;
    uint32_t _base_08021620 = g_cpu.R[13];
    uint32_t _off_08021620;
    _off_08021620 = 0x00000004u;
    uint32_t _ea_08021620 = _base_08021620 + _off_08021620;
    uint32_t _post_08021620 = _base_08021620 + _off_08021620;
    _cyc_08021620 += runtime_mem_cycles(_ea_08021620, 4u, 0u);
    uint32_t _v_08021620;
    { uint32_t _w = bus_read_u32(_ea_08021620 & ~3u); uint32_t _rot = (_ea_08021620 & 3u) * 8u; _v_08021620 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08021620;
    g_cpu.R[15] = 0x08021624u;
    runtime_tick(_cyc_08021620);
    /* 08021624  08021624 A ldrsh r3,[r7,#0x12] */
    g_cpu.R[15] = 0x08021624u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021624 = 1u;
    _cyc_08021624 = 2u;
    uint32_t _base_08021624 = g_cpu.R[7];
    uint32_t _off_08021624;
    _off_08021624 = 0x00000012u;
    uint32_t _ea_08021624 = _base_08021624 + _off_08021624;
    uint32_t _post_08021624 = _base_08021624 + _off_08021624;
    _cyc_08021624 += runtime_mem_cycles(_ea_08021624, 2u, 0u);
    uint32_t _v_08021624;
    if (_ea_08021624 & 1u) _v_08021624 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08021624);
    else _v_08021624 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08021624);
    g_cpu.R[3] = _v_08021624;
    g_cpu.R[15] = 0x08021628u;
    runtime_tick(_cyc_08021624);
    /* 08021628  08021628 A add r1,r2,r1 */
    g_cpu.R[15] = 0x08021628u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021628 = 1u;
    _cyc_08021628 = 1u;
    uint32_t _rm_08021628 = g_cpu.R[1];
    uint32_t _op2_08021628;
    uint32_t _co_08021628;
    _op2_08021628 = _rm_08021628;
    _co_08021628 = cpsr_c();
    uint32_t _rn_08021628 = g_cpu.R[2];
    uint32_t _r_08021628;
    _r_08021628 = _rn_08021628 + _op2_08021628;
    g_cpu.R[1] = _r_08021628;
    g_cpu.R[15] = 0x0802162Cu;
    runtime_tick(_cyc_08021628);
    /* 0802162C  0802162c A cmps r3,#0x0 */
    g_cpu.R[15] = 0x0802162Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802162C = 1u;
    _cyc_0802162C = 1u;
    uint32_t _rn_0802162C = g_cpu.R[3];
    uint32_t _r_0802162C;
    _r_0802162C = _rn_0802162C - 0x00000000u;
    arm_set_nzcv_sub(_rn_0802162C, 0x00000000u, _r_0802162C);
    g_cpu.R[15] = 0x08021630u;
    runtime_tick(_cyc_0802162C);
    /* 08021630  08021630 A addlt r3,r3,#0x3 */
    g_cpu.R[15] = 0x08021630u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021630 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08021630 = 1u;
        uint32_t _rn_08021630 = g_cpu.R[3];
        uint32_t _r_08021630;
        _r_08021630 = _rn_08021630 + 0x00000003u;
        g_cpu.R[3] = _r_08021630;
    }
    g_cpu.R[15] = 0x08021634u;
    runtime_tick(_cyc_08021630);
    /* 08021634  08021634 A mov r3,r3,asr #2 */
    g_cpu.R[15] = 0x08021634u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021634 = 1u;
    _cyc_08021634 = 1u;
    uint32_t _rm_08021634 = g_cpu.R[3];
    uint32_t _op2_08021634;
    uint32_t _co_08021634;
    _op2_08021634 = (uint32_t)((int32_t)_rm_08021634 >> 2);
    _co_08021634 = (_rm_08021634 >> 1) & 1u;
    uint32_t _r_08021634;
    _r_08021634 = _op2_08021634;
    g_cpu.R[3] = _r_08021634;
    g_cpu.R[15] = 0x08021638u;
    runtime_tick(_cyc_08021634);
    /* 08021638  08021638 A ldrsh r2,[r7,#0x10] */
    g_cpu.R[15] = 0x08021638u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021638 = 1u;
    _cyc_08021638 = 2u;
    uint32_t _base_08021638 = g_cpu.R[7];
    uint32_t _off_08021638;
    _off_08021638 = 0x00000010u;
    uint32_t _ea_08021638 = _base_08021638 + _off_08021638;
    uint32_t _post_08021638 = _base_08021638 + _off_08021638;
    _cyc_08021638 += runtime_mem_cycles(_ea_08021638, 2u, 0u);
    uint32_t _v_08021638;
    if (_ea_08021638 & 1u) _v_08021638 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08021638);
    else _v_08021638 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08021638);
    g_cpu.R[2] = _v_08021638;
    g_cpu.R[15] = 0x0802163Cu;
    runtime_tick(_cyc_08021638);
    /* 0802163C  0802163c A add r3,r3,r1,asr #8 */
    g_cpu.R[15] = 0x0802163Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802163C = 1u;
    _cyc_0802163C = 1u;
    uint32_t _rm_0802163C = g_cpu.R[1];
    uint32_t _op2_0802163C;
    uint32_t _co_0802163C;
    _op2_0802163C = (uint32_t)((int32_t)_rm_0802163C >> 8);
    _co_0802163C = (_rm_0802163C >> 7) & 1u;
    uint32_t _rn_0802163C = g_cpu.R[3];
    uint32_t _r_0802163C;
    _r_0802163C = _rn_0802163C + _op2_0802163C;
    g_cpu.R[3] = _r_0802163C;
    g_cpu.R[15] = 0x08021640u;
    runtime_tick(_cyc_0802163C);
    /* 08021640  08021640 A add r2,r2,r2,lsr #31 */
    g_cpu.R[15] = 0x08021640u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021640 = 1u;
    _cyc_08021640 = 1u;
    uint32_t _rm_08021640 = g_cpu.R[2];
    uint32_t _op2_08021640;
    uint32_t _co_08021640;
    _op2_08021640 = _rm_08021640 >> 31;
    _co_08021640 = (_rm_08021640 >> 30) & 1u;
    uint32_t _rn_08021640 = g_cpu.R[2];
    uint32_t _r_08021640;
    _r_08021640 = _rn_08021640 + _op2_08021640;
    g_cpu.R[2] = _r_08021640;
    g_cpu.R[15] = 0x08021644u;
    runtime_tick(_cyc_08021640);
    /* 08021644  08021644 A add r3,r3,r2,asr #1 */
    g_cpu.R[15] = 0x08021644u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021644 = 1u;
    _cyc_08021644 = 1u;
    uint32_t _rm_08021644 = g_cpu.R[2];
    uint32_t _op2_08021644;
    uint32_t _co_08021644;
    _op2_08021644 = (uint32_t)((int32_t)_rm_08021644 >> 1);
    _co_08021644 = (_rm_08021644 >> 0) & 1u;
    uint32_t _rn_08021644 = g_cpu.R[3];
    uint32_t _r_08021644;
    _r_08021644 = _rn_08021644 + _op2_08021644;
    g_cpu.R[3] = _r_08021644;
    g_cpu.R[15] = 0x08021648u;
    runtime_tick(_cyc_08021644);
    /* 08021648  08021648 A str r3,[r6,#0x8] */
    g_cpu.R[15] = 0x08021648u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021648 = 1u;
    _cyc_08021648 = 1u;
    uint32_t _base_08021648 = g_cpu.R[6];
    uint32_t _off_08021648;
    _off_08021648 = 0x00000008u;
    uint32_t _ea_08021648 = _base_08021648 + _off_08021648;
    uint32_t _post_08021648 = _base_08021648 + _off_08021648;
    _cyc_08021648 += runtime_mem_cycles(_ea_08021648, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021648u, _ea_08021648 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_08021648 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x0802164Cu;
    runtime_tick(_cyc_08021648);
    /* 0802164C  0802164c A ldrsh r3,[r7,#0x10] */
    g_cpu.R[15] = 0x0802164Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802164C = 1u;
    _cyc_0802164C = 2u;
    uint32_t _base_0802164C = g_cpu.R[7];
    uint32_t _off_0802164C;
    _off_0802164C = 0x00000010u;
    uint32_t _ea_0802164C = _base_0802164C + _off_0802164C;
    uint32_t _post_0802164C = _base_0802164C + _off_0802164C;
    _cyc_0802164C += runtime_mem_cycles(_ea_0802164C, 2u, 0u);
    uint32_t _v_0802164C;
    if (_ea_0802164C & 1u) _v_0802164C = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0802164C);
    else _v_0802164C = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_0802164C);
    g_cpu.R[3] = _v_0802164C;
    g_cpu.R[15] = 0x08021650u;
    runtime_tick(_cyc_0802164C);
    /* 08021650  08021650 A ldr r2,[r13] */
    g_cpu.R[15] = 0x08021650u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021650 = 1u;
    _cyc_08021650 = 2u;
    uint32_t _base_08021650 = g_cpu.R[13];
    uint32_t _off_08021650;
    _off_08021650 = 0x00000000u;
    uint32_t _ea_08021650 = _base_08021650 + _off_08021650;
    uint32_t _post_08021650 = _base_08021650 + _off_08021650;
    _cyc_08021650 += runtime_mem_cycles(_ea_08021650, 4u, 0u);
    uint32_t _v_08021650;
    { uint32_t _w = bus_read_u32(_ea_08021650 & ~3u); uint32_t _rot = (_ea_08021650 & 3u) * 8u; _v_08021650 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08021650;
    g_cpu.R[15] = 0x08021654u;
    runtime_tick(_cyc_08021650);
    /* 08021654  08021654 A cmps r3,#0x0 */
    g_cpu.R[15] = 0x08021654u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021654 = 1u;
    _cyc_08021654 = 1u;
    uint32_t _rn_08021654 = g_cpu.R[3];
    uint32_t _r_08021654;
    _r_08021654 = _rn_08021654 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08021654, 0x00000000u, _r_08021654);
    g_cpu.R[15] = 0x08021658u;
    runtime_tick(_cyc_08021654);
    /* 08021658  08021658 A addlt r3,r3,#0x3 */
    g_cpu.R[15] = 0x08021658u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021658 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08021658 = 1u;
        uint32_t _rn_08021658 = g_cpu.R[3];
        uint32_t _r_08021658;
        _r_08021658 = _rn_08021658 + 0x00000003u;
        g_cpu.R[3] = _r_08021658;
    }
    g_cpu.R[15] = 0x0802165Cu;
    runtime_tick(_cyc_08021658);
    /* 0802165C  0802165c A ldr r1,[r7,#0xc] */
    g_cpu.R[15] = 0x0802165Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802165C = 1u;
    _cyc_0802165C = 2u;
    uint32_t _base_0802165C = g_cpu.R[7];
    uint32_t _off_0802165C;
    _off_0802165C = 0x0000000Cu;
    uint32_t _ea_0802165C = _base_0802165C + _off_0802165C;
    uint32_t _post_0802165C = _base_0802165C + _off_0802165C;
    _cyc_0802165C += runtime_mem_cycles(_ea_0802165C, 4u, 0u);
    uint32_t _v_0802165C;
    { uint32_t _w = bus_read_u32(_ea_0802165C & ~3u); uint32_t _rot = (_ea_0802165C & 3u) * 8u; _v_0802165C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0802165C;
    g_cpu.R[15] = 0x08021660u;
    runtime_tick(_cyc_0802165C);
    /* 08021660  08021660 A mov r3,r3,asr #2 */
    g_cpu.R[15] = 0x08021660u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021660 = 1u;
    _cyc_08021660 = 1u;
    uint32_t _rm_08021660 = g_cpu.R[3];
    uint32_t _op2_08021660;
    uint32_t _co_08021660;
    _op2_08021660 = (uint32_t)((int32_t)_rm_08021660 >> 2);
    _co_08021660 = (_rm_08021660 >> 1) & 1u;
    uint32_t _r_08021660;
    _r_08021660 = _op2_08021660;
    g_cpu.R[3] = _r_08021660;
    g_cpu.R[15] = 0x08021664u;
    runtime_tick(_cyc_08021660);
    /* 08021664  08021664 A add r1,r2,r1 */
    g_cpu.R[15] = 0x08021664u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021664 = 1u;
    _cyc_08021664 = 1u;
    uint32_t _rm_08021664 = g_cpu.R[1];
    uint32_t _op2_08021664;
    uint32_t _co_08021664;
    _op2_08021664 = _rm_08021664;
    _co_08021664 = cpsr_c();
    uint32_t _rn_08021664 = g_cpu.R[2];
    uint32_t _r_08021664;
    _r_08021664 = _rn_08021664 + _op2_08021664;
    g_cpu.R[1] = _r_08021664;
    g_cpu.R[15] = 0x08021668u;
    runtime_tick(_cyc_08021664);
    /* 08021668  08021668 A ldrsh r2,[r7,#0x12] */
    g_cpu.R[15] = 0x08021668u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021668 = 1u;
    _cyc_08021668 = 2u;
    uint32_t _base_08021668 = g_cpu.R[7];
    uint32_t _off_08021668;
    _off_08021668 = 0x00000012u;
    uint32_t _ea_08021668 = _base_08021668 + _off_08021668;
    uint32_t _post_08021668 = _base_08021668 + _off_08021668;
    _cyc_08021668 += runtime_mem_cycles(_ea_08021668, 2u, 0u);
    uint32_t _v_08021668;
    if (_ea_08021668 & 1u) _v_08021668 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08021668);
    else _v_08021668 = (uint32_t)(int32_t)(int16_t)bus_read_u16(_ea_08021668);
    g_cpu.R[2] = _v_08021668;
    g_cpu.R[15] = 0x0802166Cu;
    runtime_tick(_cyc_08021668);
    /* 0802166C  0802166c A add r3,r3,r1,asr #8 */
    g_cpu.R[15] = 0x0802166Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802166C = 1u;
    _cyc_0802166C = 1u;
    uint32_t _rm_0802166C = g_cpu.R[1];
    uint32_t _op2_0802166C;
    uint32_t _co_0802166C;
    _op2_0802166C = (uint32_t)((int32_t)_rm_0802166C >> 8);
    _co_0802166C = (_rm_0802166C >> 7) & 1u;
    uint32_t _rn_0802166C = g_cpu.R[3];
    uint32_t _r_0802166C;
    _r_0802166C = _rn_0802166C + _op2_0802166C;
    g_cpu.R[3] = _r_0802166C;
    g_cpu.R[15] = 0x08021670u;
    runtime_tick(_cyc_0802166C);
    /* 08021670  08021670 A add r2,r2,r2,lsr #31 */
    g_cpu.R[15] = 0x08021670u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021670 = 1u;
    _cyc_08021670 = 1u;
    uint32_t _rm_08021670 = g_cpu.R[2];
    uint32_t _op2_08021670;
    uint32_t _co_08021670;
    _op2_08021670 = _rm_08021670 >> 31;
    _co_08021670 = (_rm_08021670 >> 30) & 1u;
    uint32_t _rn_08021670 = g_cpu.R[2];
    uint32_t _r_08021670;
    _r_08021670 = _rn_08021670 + _op2_08021670;
    g_cpu.R[2] = _r_08021670;
    g_cpu.R[15] = 0x08021674u;
    runtime_tick(_cyc_08021670);
    /* 08021674  08021674 A add r3,r3,r2,asr #1 */
    g_cpu.R[15] = 0x08021674u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021674 = 1u;
    _cyc_08021674 = 1u;
    uint32_t _rm_08021674 = g_cpu.R[2];
    uint32_t _op2_08021674;
    uint32_t _co_08021674;
    _op2_08021674 = (uint32_t)((int32_t)_rm_08021674 >> 1);
    _co_08021674 = (_rm_08021674 >> 0) & 1u;
    uint32_t _rn_08021674 = g_cpu.R[3];
    uint32_t _r_08021674;
    _r_08021674 = _rn_08021674 + _op2_08021674;
    g_cpu.R[3] = _r_08021674;
    g_cpu.R[15] = 0x08021678u;
    runtime_tick(_cyc_08021674);
    /* 08021678  08021678 A str r3,[r6,#0xc] */
    g_cpu.R[15] = 0x08021678u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021678 = 1u;
    _cyc_08021678 = 1u;
    uint32_t _base_08021678 = g_cpu.R[6];
    uint32_t _off_08021678;
    _off_08021678 = 0x0000000Cu;
    uint32_t _ea_08021678 = _base_08021678 + _off_08021678;
    uint32_t _post_08021678 = _base_08021678 + _off_08021678;
    _cyc_08021678 += runtime_mem_cycles(_ea_08021678, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021678u, _ea_08021678 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_08021678 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x0802167Cu;
    runtime_tick(_cyc_08021678);
    /* 0802167C  0802167c A b 0x080216b8 */
    g_cpu.R[15] = 0x0802167Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802167C = 1u;
    _cyc_0802167C = 3u;
    g_cpu.R[15] = 0x080216B8u;
    runtime_tick(_cyc_0802167C);
    gf_memory_transfer_arm_at_080216B8();
    return;
    g_cpu.R[15] = 0x08021680u;
    runtime_tick(_cyc_0802167C);
    /* fall-through to 0x08021680 */
    g_cpu.R[15] = 0x08021680u;
    runtime_dispatch(0x08021680u);
    return;
}


/* 0x08021690  mode=arm  end=0x080216B8  branches=1  indirect */
void gf_memory_transfer_arm_at_08021690(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021690u);
    /* 08021690  08021690 A ldr r3,[r7,#0x8] */
    g_cpu.R[15] = 0x08021690u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021690 = 1u;
    _cyc_08021690 = 2u;
    uint32_t _base_08021690 = g_cpu.R[7];
    uint32_t _off_08021690;
    _off_08021690 = 0x00000008u;
    uint32_t _ea_08021690 = _base_08021690 + _off_08021690;
    uint32_t _post_08021690 = _base_08021690 + _off_08021690;
    _cyc_08021690 += runtime_mem_cycles(_ea_08021690, 4u, 0u);
    uint32_t _v_08021690;
    { uint32_t _w = bus_read_u32(_ea_08021690 & ~3u); uint32_t _rot = (_ea_08021690 & 3u) * 8u; _v_08021690 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08021690;
    g_cpu.R[15] = 0x08021694u;
    runtime_tick(_cyc_08021690);
    /* 08021694  08021694 A ldr r1,[r13,#0x4] */
    g_cpu.R[15] = 0x08021694u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021694 = 1u;
    _cyc_08021694 = 2u;
    uint32_t _base_08021694 = g_cpu.R[13];
    uint32_t _off_08021694;
    _off_08021694 = 0x00000004u;
    uint32_t _ea_08021694 = _base_08021694 + _off_08021694;
    uint32_t _post_08021694 = _base_08021694 + _off_08021694;
    _cyc_08021694 += runtime_mem_cycles(_ea_08021694, 4u, 0u);
    uint32_t _v_08021694;
    { uint32_t _w = bus_read_u32(_ea_08021694 & ~3u); uint32_t _rot = (_ea_08021694 & 3u) * 8u; _v_08021694 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08021694;
    g_cpu.R[15] = 0x08021698u;
    runtime_tick(_cyc_08021694);
    /* 08021698  08021698 A add r3,r1,r3 */
    g_cpu.R[15] = 0x08021698u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021698 = 1u;
    _cyc_08021698 = 1u;
    uint32_t _rm_08021698 = g_cpu.R[3];
    uint32_t _op2_08021698;
    uint32_t _co_08021698;
    _op2_08021698 = _rm_08021698;
    _co_08021698 = cpsr_c();
    uint32_t _rn_08021698 = g_cpu.R[1];
    uint32_t _r_08021698;
    _r_08021698 = _rn_08021698 + _op2_08021698;
    g_cpu.R[3] = _r_08021698;
    g_cpu.R[15] = 0x0802169Cu;
    runtime_tick(_cyc_08021698);
    /* 0802169C  0802169c A mov r3,r3,asr #8 */
    g_cpu.R[15] = 0x0802169Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802169C = 1u;
    _cyc_0802169C = 1u;
    uint32_t _rm_0802169C = g_cpu.R[3];
    uint32_t _op2_0802169C;
    uint32_t _co_0802169C;
    _op2_0802169C = (uint32_t)((int32_t)_rm_0802169C >> 8);
    _co_0802169C = (_rm_0802169C >> 7) & 1u;
    uint32_t _r_0802169C;
    _r_0802169C = _op2_0802169C;
    g_cpu.R[3] = _r_0802169C;
    g_cpu.R[15] = 0x080216A0u;
    runtime_tick(_cyc_0802169C);
    /* 080216A0  080216a0 A str r3,[r6,#0x8] */
    g_cpu.R[15] = 0x080216A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216A0 = 1u;
    _cyc_080216A0 = 1u;
    uint32_t _base_080216A0 = g_cpu.R[6];
    uint32_t _off_080216A0;
    _off_080216A0 = 0x00000008u;
    uint32_t _ea_080216A0 = _base_080216A0 + _off_080216A0;
    uint32_t _post_080216A0 = _base_080216A0 + _off_080216A0;
    _cyc_080216A0 += runtime_mem_cycles(_ea_080216A0, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216A0u, _ea_080216A0 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_080216A0 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x080216A4u;
    runtime_tick(_cyc_080216A0);
    /* 080216A4  080216a4 A ldr r3,[r13] */
    g_cpu.R[15] = 0x080216A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216A4 = 1u;
    _cyc_080216A4 = 2u;
    uint32_t _base_080216A4 = g_cpu.R[13];
    uint32_t _off_080216A4;
    _off_080216A4 = 0x00000000u;
    uint32_t _ea_080216A4 = _base_080216A4 + _off_080216A4;
    uint32_t _post_080216A4 = _base_080216A4 + _off_080216A4;
    _cyc_080216A4 += runtime_mem_cycles(_ea_080216A4, 4u, 0u);
    uint32_t _v_080216A4;
    { uint32_t _w = bus_read_u32(_ea_080216A4 & ~3u); uint32_t _rot = (_ea_080216A4 & 3u) * 8u; _v_080216A4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_080216A4;
    g_cpu.R[15] = 0x080216A8u;
    runtime_tick(_cyc_080216A4);
    /* 080216A8  080216a8 A ldr r2,[r7,#0xc] */
    g_cpu.R[15] = 0x080216A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216A8 = 1u;
    _cyc_080216A8 = 2u;
    uint32_t _base_080216A8 = g_cpu.R[7];
    uint32_t _off_080216A8;
    _off_080216A8 = 0x0000000Cu;
    uint32_t _ea_080216A8 = _base_080216A8 + _off_080216A8;
    uint32_t _post_080216A8 = _base_080216A8 + _off_080216A8;
    _cyc_080216A8 += runtime_mem_cycles(_ea_080216A8, 4u, 0u);
    uint32_t _v_080216A8;
    { uint32_t _w = bus_read_u32(_ea_080216A8 & ~3u); uint32_t _rot = (_ea_080216A8 & 3u) * 8u; _v_080216A8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080216A8;
    g_cpu.R[15] = 0x080216ACu;
    runtime_tick(_cyc_080216A8);
    /* 080216AC  080216ac A add r2,r3,r2 */
    g_cpu.R[15] = 0x080216ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216AC = 1u;
    _cyc_080216AC = 1u;
    uint32_t _rm_080216AC = g_cpu.R[2];
    uint32_t _op2_080216AC;
    uint32_t _co_080216AC;
    _op2_080216AC = _rm_080216AC;
    _co_080216AC = cpsr_c();
    uint32_t _rn_080216AC = g_cpu.R[3];
    uint32_t _r_080216AC;
    _r_080216AC = _rn_080216AC + _op2_080216AC;
    g_cpu.R[2] = _r_080216AC;
    g_cpu.R[15] = 0x080216B0u;
    runtime_tick(_cyc_080216AC);
    /* 080216B0  080216b0 A mov r2,r2,asr #8 */
    g_cpu.R[15] = 0x080216B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216B0 = 1u;
    _cyc_080216B0 = 1u;
    uint32_t _rm_080216B0 = g_cpu.R[2];
    uint32_t _op2_080216B0;
    uint32_t _co_080216B0;
    _op2_080216B0 = (uint32_t)((int32_t)_rm_080216B0 >> 8);
    _co_080216B0 = (_rm_080216B0 >> 7) & 1u;
    uint32_t _r_080216B0;
    _r_080216B0 = _op2_080216B0;
    g_cpu.R[2] = _r_080216B0;
    g_cpu.R[15] = 0x080216B4u;
    runtime_tick(_cyc_080216B0);
    /* 080216B4  080216b4 A str r2,[r6,#0xc] */
    g_cpu.R[15] = 0x080216B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216B4 = 1u;
    _cyc_080216B4 = 1u;
    uint32_t _base_080216B4 = g_cpu.R[6];
    uint32_t _off_080216B4;
    _off_080216B4 = 0x0000000Cu;
    uint32_t _ea_080216B4 = _base_080216B4 + _off_080216B4;
    uint32_t _post_080216B4 = _base_080216B4 + _off_080216B4;
    _cyc_080216B4 += runtime_mem_cycles(_ea_080216B4, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216B4u, _ea_080216B4 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_080216B4 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x080216B8u;
    runtime_tick(_cyc_080216B4);
    /* fall-through to 0x080216B8 */
    g_cpu.R[15] = 0x080216B8u;
    runtime_dispatch(0x080216B8u);
    return;
}


/* 0x080216B8  mode=arm  end=0x080216E4  branches=1  indirect */
void gf_memory_transfer_arm_at_080216B8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080216B8u);
    /* 080216B8  080216b8 A ldrh r1,[r7,#0x10] */
    g_cpu.R[15] = 0x080216B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216B8 = 1u;
    _cyc_080216B8 = 2u;
    uint32_t _base_080216B8 = g_cpu.R[7];
    uint32_t _off_080216B8;
    _off_080216B8 = 0x00000010u;
    uint32_t _ea_080216B8 = _base_080216B8 + _off_080216B8;
    uint32_t _post_080216B8 = _base_080216B8 + _off_080216B8;
    _cyc_080216B8 += runtime_mem_cycles(_ea_080216B8, 2u, 0u);
    uint32_t _v_080216B8;
    { uint32_t _h = bus_read_u16(_ea_080216B8 & ~1u); if (_ea_080216B8 & 1u) _v_080216B8 = ((_h >> 8) | (_h << 24)); else _v_080216B8 = _h; }
    g_cpu.R[1] = _v_080216B8;
    g_cpu.R[15] = 0x080216BCu;
    runtime_tick(_cyc_080216B8);
    /* 080216BC  080216bc A strh r1,[r6] */
    g_cpu.R[15] = 0x080216BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216BC = 1u;
    _cyc_080216BC = 1u;
    uint32_t _base_080216BC = g_cpu.R[6];
    uint32_t _off_080216BC;
    _off_080216BC = 0x00000000u;
    uint32_t _ea_080216BC = _base_080216BC + _off_080216BC;
    uint32_t _post_080216BC = _base_080216BC + _off_080216BC;
    _cyc_080216BC += runtime_mem_cycles(_ea_080216BC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216BCu, _ea_080216BC & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080216BC & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x080216C0u;
    runtime_tick(_cyc_080216BC);
    /* 080216C0  080216c0 A add r12,r6,#0x10 */
    g_cpu.R[15] = 0x080216C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216C0 = 1u;
    _cyc_080216C0 = 1u;
    uint32_t _rn_080216C0 = g_cpu.R[6];
    uint32_t _r_080216C0;
    _r_080216C0 = _rn_080216C0 + 0x00000010u;
    g_cpu.R[12] = _r_080216C0;
    g_cpu.R[15] = 0x080216C4u;
    runtime_tick(_cyc_080216C0);
    /* 080216C4  080216c4 A ldrh r2,[r7,#0x12] */
    g_cpu.R[15] = 0x080216C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216C4 = 1u;
    _cyc_080216C4 = 2u;
    uint32_t _base_080216C4 = g_cpu.R[7];
    uint32_t _off_080216C4;
    _off_080216C4 = 0x00000012u;
    uint32_t _ea_080216C4 = _base_080216C4 + _off_080216C4;
    uint32_t _post_080216C4 = _base_080216C4 + _off_080216C4;
    _cyc_080216C4 += runtime_mem_cycles(_ea_080216C4, 2u, 0u);
    uint32_t _v_080216C4;
    { uint32_t _h = bus_read_u16(_ea_080216C4 & ~1u); if (_ea_080216C4 & 1u) _v_080216C4 = ((_h >> 8) | (_h << 24)); else _v_080216C4 = _h; }
    g_cpu.R[2] = _v_080216C4;
    g_cpu.R[15] = 0x080216C8u;
    runtime_tick(_cyc_080216C4);
    /* 080216C8  080216c8 A subs r8,r8,#0x1 */
    g_cpu.R[15] = 0x080216C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216C8 = 1u;
    _cyc_080216C8 = 1u;
    uint32_t _rn_080216C8 = g_cpu.R[8];
    uint32_t _r_080216C8;
    _r_080216C8 = _rn_080216C8 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080216C8, 0x00000001u, _r_080216C8);
    g_cpu.R[8] = _r_080216C8;
    g_cpu.R[15] = 0x080216CCu;
    runtime_tick(_cyc_080216C8);
    /* 080216CC  080216cc A strh r2,[r6,#0x4] */
    g_cpu.R[15] = 0x080216CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216CC = 1u;
    _cyc_080216CC = 1u;
    uint32_t _base_080216CC = g_cpu.R[6];
    uint32_t _off_080216CC;
    _off_080216CC = 0x00000004u;
    uint32_t _ea_080216CC = _base_080216CC + _off_080216CC;
    uint32_t _post_080216CC = _base_080216CC + _off_080216CC;
    _cyc_080216CC += runtime_mem_cycles(_ea_080216CC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216CCu, _ea_080216CC & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080216CC & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x080216D0u;
    runtime_tick(_cyc_080216CC);
    /* 080216D0  080216d0 A add r7,r7,#0x14 */
    g_cpu.R[15] = 0x080216D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216D0 = 1u;
    _cyc_080216D0 = 1u;
    uint32_t _rn_080216D0 = g_cpu.R[7];
    uint32_t _r_080216D0;
    _r_080216D0 = _rn_080216D0 + 0x00000014u;
    g_cpu.R[7] = _r_080216D0;
    g_cpu.R[15] = 0x080216D4u;
    runtime_tick(_cyc_080216D0);
    /* 080216D4  080216d4 A ldm r6,{r0,r1,r2,r3} */
    g_cpu.R[15] = 0x080216D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216D4 = 1u;
    _cyc_080216D4 = 2u;
    uint32_t _b_080216D4 = g_cpu.R[6];
    uint32_t _a_080216D4 = _b_080216D4;
    uint32_t _fb_080216D4 = _b_080216D4 + 16u;
    _cyc_080216D4 += runtime_mem_cycles(_a_080216D4 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_080216D4 & ~3u);
    _a_080216D4 += 4u;
    _cyc_080216D4 += runtime_mem_cycles(_a_080216D4 & ~3u, 4u, 1u);
    g_cpu.R[1] = bus_read_u32(_a_080216D4 & ~3u);
    _a_080216D4 += 4u;
    _cyc_080216D4 += runtime_mem_cycles(_a_080216D4 & ~3u, 4u, 1u);
    g_cpu.R[2] = bus_read_u32(_a_080216D4 & ~3u);
    _a_080216D4 += 4u;
    _cyc_080216D4 += runtime_mem_cycles(_a_080216D4 & ~3u, 4u, 1u);
    g_cpu.R[3] = bus_read_u32(_a_080216D4 & ~3u);
    _a_080216D4 += 4u;
    g_cpu.R[15] = 0x080216D8u;
    runtime_tick(_cyc_080216D4);
    /* 080216D8  080216d8 A add r6,r6,#0x20 */
    g_cpu.R[15] = 0x080216D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216D8 = 1u;
    _cyc_080216D8 = 1u;
    uint32_t _rn_080216D8 = g_cpu.R[6];
    uint32_t _r_080216D8;
    _r_080216D8 = _rn_080216D8 + 0x00000020u;
    g_cpu.R[6] = _r_080216D8;
    g_cpu.R[15] = 0x080216DCu;
    runtime_tick(_cyc_080216D8);
    /* 080216DC  080216dc A stm r12,{r0,r1,r2,r3} */
    g_cpu.R[15] = 0x080216DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216DC = 1u;
    _cyc_080216DC = 1u;
    uint32_t _b_080216DC = g_cpu.R[12];
    uint32_t _a_080216DC = _b_080216DC;
    uint32_t _fb_080216DC = _b_080216DC + 16u;
    _cyc_080216DC += runtime_mem_cycles(_a_080216DC & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216DCu, _a_080216DC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_080216DC & ~3u, g_cpu.R[0]);
    _a_080216DC += 4u;
    _cyc_080216DC += runtime_mem_cycles(_a_080216DC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216DCu, _a_080216DC & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_080216DC & ~3u, g_cpu.R[1]);
    _a_080216DC += 4u;
    _cyc_080216DC += runtime_mem_cycles(_a_080216DC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216DCu, _a_080216DC & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_a_080216DC & ~3u, g_cpu.R[2]);
    _a_080216DC += 4u;
    _cyc_080216DC += runtime_mem_cycles(_a_080216DC & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080216DCu, _a_080216DC & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_080216DC & ~3u, g_cpu.R[3]);
    _a_080216DC += 4u;
    g_cpu.R[15] = 0x080216E0u;
    runtime_tick(_cyc_080216DC);
    /* 080216E0  080216e0 A bpl 0x08021610 */
    g_cpu.R[15] = 0x080216E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216E0 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_080216E0 = 3u;
        g_cpu.R[15] = 0x08021610u;
        runtime_tick(_cyc_080216E0);
        gf_memory_transfer_arm_at_08021610();
        return;
    }
    g_cpu.R[15] = 0x080216E4u;
    runtime_tick(_cyc_080216E0);
    /* fall-through to 0x080216E4 */
    g_cpu.R[15] = 0x080216E4u;
    runtime_dispatch(0x080216E4u);
    return;
}


/* 0x08021824  mode=arm  end=0x08021864  branches=12 */
void gf_memory_transfer_arm_at_08021824(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021824u);
    /* 08021824  08021824 A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x08021824u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021824 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021824 = 1u;
        uint32_t _rn_08021824 = g_cpu.R[0];
        uint32_t _r_08021824;
        _r_08021824 = _rn_08021824 & 0x01E00000u;
        g_cpu.R[4] = _r_08021824;
    }
    g_cpu.R[15] = 0x08021828u;
    runtime_tick(_cyc_08021824);
    /* 08021828  08021828 A stm r13!,{r5,r6,r7,r8,r9,r10,r14} */
    g_cpu.R[15] = 0x08021828u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021828 = 1u;
    _cyc_08021828 = 1u;
    uint32_t _b_08021828 = g_cpu.R[13];
    uint32_t _a_08021828 = _b_08021828 - 28u;
    uint32_t _fb_08021828 = _b_08021828 - 28u;
    _cyc_08021828 += runtime_mem_cycles(_a_08021828 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021828u, _a_08021828 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08021828 & ~3u, g_cpu.R[5]);
    _a_08021828 += 4u;
    _cyc_08021828 += runtime_mem_cycles(_a_08021828 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021828u, _a_08021828 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08021828 & ~3u, g_cpu.R[6]);
    _a_08021828 += 4u;
    _cyc_08021828 += runtime_mem_cycles(_a_08021828 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021828u, _a_08021828 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08021828 & ~3u, g_cpu.R[7]);
    _a_08021828 += 4u;
    _cyc_08021828 += runtime_mem_cycles(_a_08021828 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021828u, _a_08021828 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_a_08021828 & ~3u, g_cpu.R[8]);
    _a_08021828 += 4u;
    _cyc_08021828 += runtime_mem_cycles(_a_08021828 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021828u, _a_08021828 & ~3u, g_cpu.R[9], 4u);
    bus_write_u32(_a_08021828 & ~3u, g_cpu.R[9]);
    _a_08021828 += 4u;
    _cyc_08021828 += runtime_mem_cycles(_a_08021828 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021828u, _a_08021828 & ~3u, g_cpu.R[10], 4u);
    bus_write_u32(_a_08021828 & ~3u, g_cpu.R[10]);
    _a_08021828 += 4u;
    _cyc_08021828 += runtime_mem_cycles(_a_08021828 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021828u, _a_08021828 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08021828 & ~3u, g_cpu.R[14]);
    _a_08021828 += 4u;
    g_cpu.R[13] = _fb_08021828;
    g_cpu.R[15] = 0x0802182Cu;
    runtime_tick(_cyc_08021828);
    /* 0802182C  0802182c A mov r7,r2 */
    g_cpu.R[15] = 0x0802182Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802182C = 1u;
    _cyc_0802182C = 1u;
    uint32_t _rm_0802182C = g_cpu.R[2];
    uint32_t _op2_0802182C;
    uint32_t _co_0802182C;
    _op2_0802182C = _rm_0802182C;
    _co_0802182C = cpsr_c();
    uint32_t _r_0802182C;
    _r_0802182C = _op2_0802182C;
    g_cpu.R[7] = _r_0802182C;
    g_cpu.R[15] = 0x08021830u;
    runtime_tick(_cyc_0802182C);
    /* 08021830  08021830 A add r2,r7,r0 */
    g_cpu.R[15] = 0x08021830u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021830 = 1u;
    _cyc_08021830 = 1u;
    uint32_t _rm_08021830 = g_cpu.R[0];
    uint32_t _op2_08021830;
    uint32_t _co_08021830;
    _op2_08021830 = _rm_08021830;
    _co_08021830 = cpsr_c();
    uint32_t _rn_08021830 = g_cpu.R[7];
    uint32_t _r_08021830;
    _r_08021830 = _rn_08021830 + _op2_08021830;
    g_cpu.R[2] = _r_08021830;
    g_cpu.R[15] = 0x08021834u;
    runtime_tick(_cyc_08021830);
    /* 08021834  08021834 A add r2,r2,#0x1 */
    g_cpu.R[15] = 0x08021834u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021834 = 1u;
    _cyc_08021834 = 1u;
    uint32_t _rn_08021834 = g_cpu.R[2];
    uint32_t _r_08021834;
    _r_08021834 = _rn_08021834 + 0x00000001u;
    g_cpu.R[2] = _r_08021834;
    g_cpu.R[15] = 0x08021838u;
    runtime_tick(_cyc_08021834);
    /* 08021838  08021838 A mov r12,#0x1 */
    g_cpu.R[15] = 0x08021838u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021838 = 1u;
    _cyc_08021838 = 1u;
    uint32_t _r_08021838;
    _r_08021838 = 0x00000001u;
    g_cpu.R[12] = _r_08021838;
    g_cpu.R[15] = 0x0802183Cu;
    runtime_tick(_cyc_08021838);
    /* 0802183C  0802183c A sub r4,r1,#0x1 */
    g_cpu.R[15] = 0x0802183Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802183C = 1u;
    _cyc_0802183C = 1u;
    uint32_t _rn_0802183C = g_cpu.R[1];
    uint32_t _r_0802183C;
    _r_0802183C = _rn_0802183C - 0x00000001u;
    g_cpu.R[4] = _r_0802183C;
    g_cpu.R[15] = 0x08021840u;
    runtime_tick(_cyc_0802183C);
    /* 08021840  08021840 A cmps r12,r4 */
    g_cpu.R[15] = 0x08021840u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021840 = 1u;
    _cyc_08021840 = 1u;
    uint32_t _rm_08021840 = g_cpu.R[4];
    uint32_t _op2_08021840;
    uint32_t _co_08021840;
    _op2_08021840 = _rm_08021840;
    _co_08021840 = cpsr_c();
    uint32_t _rn_08021840 = g_cpu.R[12];
    uint32_t _r_08021840;
    _r_08021840 = _rn_08021840 - _op2_08021840;
    arm_set_nzcv_sub(_rn_08021840, _op2_08021840, _r_08021840);
    g_cpu.R[15] = 0x08021844u;
    runtime_tick(_cyc_08021840);
    /* 08021844  08021844 A mov r8,r3 */
    g_cpu.R[15] = 0x08021844u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021844 = 1u;
    _cyc_08021844 = 1u;
    uint32_t _rm_08021844 = g_cpu.R[3];
    uint32_t _op2_08021844;
    uint32_t _co_08021844;
    _op2_08021844 = _rm_08021844;
    _co_08021844 = cpsr_c();
    uint32_t _r_08021844;
    _r_08021844 = _op2_08021844;
    g_cpu.R[8] = _r_08021844;
    g_cpu.R[15] = 0x08021848u;
    runtime_tick(_cyc_08021844);
    /* 08021848  08021848 A mvn r6,r0 */
    g_cpu.R[15] = 0x08021848u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021848 = 1u;
    _cyc_08021848 = 1u;
    uint32_t _rm_08021848 = g_cpu.R[0];
    uint32_t _op2_08021848;
    uint32_t _co_08021848;
    _op2_08021848 = _rm_08021848;
    _co_08021848 = cpsr_c();
    uint32_t _r_08021848;
    _r_08021848 = ~(_op2_08021848);
    g_cpu.R[6] = _r_08021848;
    g_cpu.R[15] = 0x0802184Cu;
    runtime_tick(_cyc_08021848);
    /* 0802184C  0802184c A ldr r9,[r13,#0x1c] */
    g_cpu.R[15] = 0x0802184Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802184C = 1u;
    _cyc_0802184C = 2u;
    uint32_t _base_0802184C = g_cpu.R[13];
    uint32_t _off_0802184C;
    _off_0802184C = 0x0000001Cu;
    uint32_t _ea_0802184C = _base_0802184C + _off_0802184C;
    uint32_t _post_0802184C = _base_0802184C + _off_0802184C;
    _cyc_0802184C += runtime_mem_cycles(_ea_0802184C, 4u, 0u);
    uint32_t _v_0802184C;
    { uint32_t _w = bus_read_u32(_ea_0802184C & ~3u); uint32_t _rot = (_ea_0802184C & 3u) * 8u; _v_0802184C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[9] = _v_0802184C;
    g_cpu.R[15] = 0x08021850u;
    runtime_tick(_cyc_0802184C);
    /* 08021850  08021850 A sub r5,r0,#0x1 */
    g_cpu.R[15] = 0x08021850u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021850 = 1u;
    _cyc_08021850 = 1u;
    uint32_t _rn_08021850 = g_cpu.R[0];
    uint32_t _r_08021850;
    _r_08021850 = _rn_08021850 - 0x00000001u;
    g_cpu.R[5] = _r_08021850;
    g_cpu.R[15] = 0x08021854u;
    runtime_tick(_cyc_08021850);
    /* 08021854  08021854 A mul r10,r1,r0 */
    g_cpu.R[15] = 0x08021854u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021854 = 1u;
    _cyc_08021854 = 1u;
    _cyc_08021854 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_08021854 = g_cpu.R[1] * g_cpu.R[0];
    g_cpu.R[10] = _r_08021854;
    g_cpu.R[15] = 0x08021858u;
    runtime_tick(_cyc_08021854);
    /* 08021858  08021858 A bcs 0x080218e0 */
    g_cpu.R[15] = 0x08021858u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021858 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08021858 = 3u;
        g_cpu.R[15] = 0x080218E0u;
        runtime_tick(_cyc_08021858);
        gf_indirect_control_flow_arm_at_080218E0();
        return;
    }
    g_cpu.R[15] = 0x0802185Cu;
    runtime_tick(_cyc_08021858);
    /* 0802185C  0802185c A mov r14,r5 */
    g_cpu.R[15] = 0x0802185Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802185C = 1u;
    _cyc_0802185C = 1u;
    uint32_t _rm_0802185C = g_cpu.R[5];
    uint32_t _op2_0802185C;
    uint32_t _co_0802185C;
    _op2_0802185C = _rm_0802185C;
    _co_0802185C = cpsr_c();
    uint32_t _r_0802185C;
    _r_0802185C = _op2_0802185C;
    g_cpu.R[14] = _r_0802185C;
    g_cpu.R[15] = 0x08021860u;
    runtime_tick(_cyc_0802185C);
    /* 08021860  08021860 A mov r1,r4 */
    g_cpu.R[15] = 0x08021860u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021860 = 1u;
    _cyc_08021860 = 1u;
    uint32_t _rm_08021860 = g_cpu.R[4];
    uint32_t _op2_08021860;
    uint32_t _co_08021860;
    _op2_08021860 = _rm_08021860;
    _co_08021860 = cpsr_c();
    uint32_t _r_08021860;
    _r_08021860 = _op2_08021860;
    g_cpu.R[1] = _r_08021860;
    g_cpu.R[15] = 0x08021864u;
    runtime_tick(_cyc_08021860);
    /* fall-through to 0x08021864 */
    g_cpu.R[15] = 0x08021864u;
    runtime_dispatch(0x08021864u);
    return;
}


/* 0x08021874  mode=arm  end=0x080218C8  branches=10 */
void gf_memory_transfer_arm_at_08021874(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021874u);
    /* 08021874  08021874 A ldrb r3,[r2,#0x1]! */
    g_cpu.R[15] = 0x08021874u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021874 = 1u;
    _cyc_08021874 = 2u;
    uint32_t _base_08021874 = g_cpu.R[2];
    uint32_t _off_08021874;
    _off_08021874 = 0x00000001u;
    uint32_t _ea_08021874 = _base_08021874 + _off_08021874;
    uint32_t _post_08021874 = _base_08021874 + _off_08021874;
    _cyc_08021874 += runtime_mem_cycles(_ea_08021874, 1u, 0u);
    uint32_t _v_08021874;
    _v_08021874 = bus_read_u8(_ea_08021874);
    if (2u != 3u) g_cpu.R[2] = _ea_08021874;
    g_cpu.R[3] = _v_08021874;
    g_cpu.R[15] = 0x08021878u;
    runtime_tick(_cyc_08021874);
    /* 08021878  08021878 A cmps r3,#0xff */
    g_cpu.R[15] = 0x08021878u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021878 = 1u;
    _cyc_08021878 = 1u;
    uint32_t _rn_08021878 = g_cpu.R[3];
    uint32_t _r_08021878;
    _r_08021878 = _rn_08021878 - 0x000000FFu;
    arm_set_nzcv_sub(_rn_08021878, 0x000000FFu, _r_08021878);
    g_cpu.R[15] = 0x0802187Cu;
    runtime_tick(_cyc_08021878);
    /* 0802187C  0802187c A cmpnes r3,#0x0 */
    g_cpu.R[15] = 0x0802187Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802187C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0802187C = 1u;
        uint32_t _rn_0802187C = g_cpu.R[3];
        uint32_t _r_0802187C;
        _r_0802187C = _rn_0802187C - 0x00000000u;
        arm_set_nzcv_sub(_rn_0802187C, 0x00000000u, _r_0802187C);
    }
    g_cpu.R[15] = 0x08021880u;
    runtime_tick(_cyc_0802187C);
    /* 08021880  08021880 A beq 0x080218c8 */
    g_cpu.R[15] = 0x08021880u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021880 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021880 = 3u;
        g_cpu.R[15] = 0x080218C8u;
        runtime_tick(_cyc_08021880);
        gf_indirect_control_flow_arm_at_080218C8();
        return;
    }
    g_cpu.R[15] = 0x08021884u;
    runtime_tick(_cyc_08021880);
    /* 08021884  08021884 A ldrb r3,[r2,#-0x2] */
    g_cpu.R[15] = 0x08021884u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021884 = 1u;
    _cyc_08021884 = 2u;
    uint32_t _base_08021884 = g_cpu.R[2];
    uint32_t _off_08021884;
    _off_08021884 = 0x00000002u;
    uint32_t _ea_08021884 = _base_08021884 - _off_08021884;
    uint32_t _post_08021884 = _base_08021884 - _off_08021884;
    _cyc_08021884 += runtime_mem_cycles(_ea_08021884, 1u, 0u);
    uint32_t _v_08021884;
    _v_08021884 = bus_read_u8(_ea_08021884);
    g_cpu.R[3] = _v_08021884;
    g_cpu.R[15] = 0x08021888u;
    runtime_tick(_cyc_08021884);
    /* 08021888  08021888 A cmps r3,#0xff */
    g_cpu.R[15] = 0x08021888u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021888 = 1u;
    _cyc_08021888 = 1u;
    uint32_t _rn_08021888 = g_cpu.R[3];
    uint32_t _r_08021888;
    _r_08021888 = _rn_08021888 - 0x000000FFu;
    arm_set_nzcv_sub(_rn_08021888, 0x000000FFu, _r_08021888);
    g_cpu.R[15] = 0x0802188Cu;
    runtime_tick(_cyc_08021888);
    /* 0802188C  0802188c A cmpnes r3,#0x0 */
    g_cpu.R[15] = 0x0802188Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802188C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0802188C = 1u;
        uint32_t _rn_0802188C = g_cpu.R[3];
        uint32_t _r_0802188C;
        _r_0802188C = _rn_0802188C - 0x00000000u;
        arm_set_nzcv_sub(_rn_0802188C, 0x00000000u, _r_0802188C);
    }
    g_cpu.R[15] = 0x08021890u;
    runtime_tick(_cyc_0802188C);
    /* 08021890  08021890 A beq 0x080218c8 */
    g_cpu.R[15] = 0x08021890u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021890 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08021890 = 3u;
        g_cpu.R[15] = 0x080218C8u;
        runtime_tick(_cyc_08021890);
        gf_indirect_control_flow_arm_at_080218C8();
        return;
    }
    g_cpu.R[15] = 0x08021894u;
    runtime_tick(_cyc_08021890);
    /* 08021894  08021894 A ldrb r3,[r2,+r6] */
    g_cpu.R[15] = 0x08021894u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021894 = 1u;
    _cyc_08021894 = 2u;
    uint32_t _base_08021894 = g_cpu.R[2];
    uint32_t _off_08021894;
    uint32_t _morm_08021894 = g_cpu.R[6];
    _off_08021894 = _morm_08021894;
    uint32_t _ea_08021894 = _base_08021894 + _off_08021894;
    uint32_t _post_08021894 = _base_08021894 + _off_08021894;
    _cyc_08021894 += runtime_mem_cycles(_ea_08021894, 1u, 0u);
    uint32_t _v_08021894;
    _v_08021894 = bus_read_u8(_ea_08021894);
    g_cpu.R[3] = _v_08021894;
    g_cpu.R[15] = 0x08021898u;
    runtime_tick(_cyc_08021894);
    /* 08021898  08021898 A cmps r3,#0xff */
    g_cpu.R[15] = 0x08021898u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021898 = 1u;
    _cyc_08021898 = 1u;
    uint32_t _rn_08021898 = g_cpu.R[3];
    uint32_t _r_08021898;
    _r_08021898 = _rn_08021898 - 0x000000FFu;
    arm_set_nzcv_sub(_rn_08021898, 0x000000FFu, _r_08021898);
    g_cpu.R[15] = 0x0802189Cu;
    runtime_tick(_cyc_08021898);
    /* 0802189C  0802189c A cmpnes r3,#0x0 */
    g_cpu.R[15] = 0x0802189Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802189C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0802189C = 1u;
        uint32_t _rn_0802189C = g_cpu.R[3];
        uint32_t _r_0802189C;
        _r_0802189C = _rn_0802189C - 0x00000000u;
        arm_set_nzcv_sub(_rn_0802189C, 0x00000000u, _r_0802189C);
    }
    g_cpu.R[15] = 0x080218A0u;
    runtime_tick(_cyc_0802189C);
    /* 080218A0  080218a0 A beq 0x080218c8 */
    g_cpu.R[15] = 0x080218A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218A0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080218A0 = 3u;
        g_cpu.R[15] = 0x080218C8u;
        runtime_tick(_cyc_080218A0);
        gf_indirect_control_flow_arm_at_080218C8();
        return;
    }
    g_cpu.R[15] = 0x080218A4u;
    runtime_tick(_cyc_080218A0);
    /* 080218A4  080218a4 A ldrb r3,[r2,+r5] */
    g_cpu.R[15] = 0x080218A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218A4 = 1u;
    _cyc_080218A4 = 2u;
    uint32_t _base_080218A4 = g_cpu.R[2];
    uint32_t _off_080218A4;
    uint32_t _morm_080218A4 = g_cpu.R[5];
    _off_080218A4 = _morm_080218A4;
    uint32_t _ea_080218A4 = _base_080218A4 + _off_080218A4;
    uint32_t _post_080218A4 = _base_080218A4 + _off_080218A4;
    _cyc_080218A4 += runtime_mem_cycles(_ea_080218A4, 1u, 0u);
    uint32_t _v_080218A4;
    _v_080218A4 = bus_read_u8(_ea_080218A4);
    g_cpu.R[3] = _v_080218A4;
    g_cpu.R[15] = 0x080218A8u;
    runtime_tick(_cyc_080218A4);
    /* 080218A8  080218a8 A cmps r3,#0xff */
    g_cpu.R[15] = 0x080218A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218A8 = 1u;
    _cyc_080218A8 = 1u;
    uint32_t _rn_080218A8 = g_cpu.R[3];
    uint32_t _r_080218A8;
    _r_080218A8 = _rn_080218A8 - 0x000000FFu;
    arm_set_nzcv_sub(_rn_080218A8, 0x000000FFu, _r_080218A8);
    g_cpu.R[15] = 0x080218ACu;
    runtime_tick(_cyc_080218A8);
    /* 080218AC  080218ac A cmpnes r3,#0x0 */
    g_cpu.R[15] = 0x080218ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218AC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080218AC = 1u;
        uint32_t _rn_080218AC = g_cpu.R[3];
        uint32_t _r_080218AC;
        _r_080218AC = _rn_080218AC - 0x00000000u;
        arm_set_nzcv_sub(_rn_080218AC, 0x00000000u, _r_080218AC);
    }
    g_cpu.R[15] = 0x080218B0u;
    runtime_tick(_cyc_080218AC);
    /* 080218B0  080218b0 A beq 0x080218c8 */
    g_cpu.R[15] = 0x080218B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218B0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080218B0 = 3u;
        g_cpu.R[15] = 0x080218C8u;
        runtime_tick(_cyc_080218B0);
        gf_indirect_control_flow_arm_at_080218C8();
        return;
    }
    g_cpu.R[15] = 0x080218B4u;
    runtime_tick(_cyc_080218B0);
    /* 080218B4  080218b4 A ldrb r3,[r2,#-0x1] */
    g_cpu.R[15] = 0x080218B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218B4 = 1u;
    _cyc_080218B4 = 2u;
    uint32_t _base_080218B4 = g_cpu.R[2];
    uint32_t _off_080218B4;
    _off_080218B4 = 0x00000001u;
    uint32_t _ea_080218B4 = _base_080218B4 - _off_080218B4;
    uint32_t _post_080218B4 = _base_080218B4 - _off_080218B4;
    _cyc_080218B4 += runtime_mem_cycles(_ea_080218B4, 1u, 0u);
    uint32_t _v_080218B4;
    _v_080218B4 = bus_read_u8(_ea_080218B4);
    g_cpu.R[3] = _v_080218B4;
    g_cpu.R[15] = 0x080218B8u;
    runtime_tick(_cyc_080218B4);
    /* 080218B8  080218b8 A cmps r3,#0x0 */
    g_cpu.R[15] = 0x080218B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218B8 = 1u;
    _cyc_080218B8 = 1u;
    uint32_t _rn_080218B8 = g_cpu.R[3];
    uint32_t _r_080218B8;
    _r_080218B8 = _rn_080218B8 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080218B8, 0x00000000u, _r_080218B8);
    g_cpu.R[15] = 0x080218BCu;
    runtime_tick(_cyc_080218B8);
    /* 080218BC  080218bc A mov r3,#0xff */
    g_cpu.R[15] = 0x080218BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218BC = 1u;
    _cyc_080218BC = 1u;
    uint32_t _r_080218BC;
    _r_080218BC = 0x000000FFu;
    g_cpu.R[3] = _r_080218BC;
    g_cpu.R[15] = 0x080218C0u;
    runtime_tick(_cyc_080218BC);
    /* 080218C0  080218c0 A movne r3,#0xfe */
    g_cpu.R[15] = 0x080218C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218C0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080218C0 = 1u;
        uint32_t _r_080218C0;
        _r_080218C0 = 0x000000FEu;
        g_cpu.R[3] = _r_080218C0;
    }
    g_cpu.R[15] = 0x080218C4u;
    runtime_tick(_cyc_080218C0);
    /* 080218C4  080218c4 A strb r3,[r2,#-0x1] */
    g_cpu.R[15] = 0x080218C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218C4 = 1u;
    _cyc_080218C4 = 1u;
    uint32_t _base_080218C4 = g_cpu.R[2];
    uint32_t _off_080218C4;
    _off_080218C4 = 0x00000001u;
    uint32_t _ea_080218C4 = _base_080218C4 - _off_080218C4;
    uint32_t _post_080218C4 = _base_080218C4 - _off_080218C4;
    _cyc_080218C4 += runtime_mem_cycles(_ea_080218C4, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080218C4u, _ea_080218C4, (uint32_t)(g_cpu.R[3] & 0xFFu), 1u);
    bus_write_u8(_ea_080218C4, (uint8_t)(g_cpu.R[3] & 0xFFu));
    g_cpu.R[15] = 0x080218C8u;
    runtime_tick(_cyc_080218C4);
    /* fall-through to 0x080218C8 */
    g_cpu.R[15] = 0x080218C8u;
    runtime_dispatch(0x080218C8u);
    return;
}


/* 0x080218E8  mode=arm  end=0x08021910  branches=4 */
void gf_memory_transfer_arm_at_080218E8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080218E8u);
L_080218E8:
    /* 080218E8  080218e8 A cmps r2,r1 */
    g_cpu.R[15] = 0x080218E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218E8 = 1u;
    _cyc_080218E8 = 1u;
    uint32_t _rm_080218E8 = g_cpu.R[1];
    uint32_t _op2_080218E8;
    uint32_t _co_080218E8;
    _op2_080218E8 = _rm_080218E8;
    _co_080218E8 = cpsr_c();
    uint32_t _rn_080218E8 = g_cpu.R[2];
    uint32_t _r_080218E8;
    _r_080218E8 = _rn_080218E8 - _op2_080218E8;
    arm_set_nzcv_sub(_rn_080218E8, _op2_080218E8, _r_080218E8);
    g_cpu.R[15] = 0x080218ECu;
    runtime_tick(_cyc_080218E8);
    /* 080218EC  080218ec A beq 0x08021910 */
    g_cpu.R[15] = 0x080218ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218EC = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080218EC = 3u;
        g_cpu.R[15] = 0x08021910u;
        runtime_tick(_cyc_080218EC);
        gf_memory_reads_arm_at_08021910();
        return;
    }
    g_cpu.R[15] = 0x080218F0u;
    runtime_tick(_cyc_080218EC);
    /* 080218F0  080218f0 A ldrb r3,[r2],#0x1 */
    g_cpu.R[15] = 0x080218F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218F0 = 1u;
    _cyc_080218F0 = 2u;
    uint32_t _base_080218F0 = g_cpu.R[2];
    uint32_t _off_080218F0;
    _off_080218F0 = 0x00000001u;
    uint32_t _ea_080218F0 = _base_080218F0;
    uint32_t _post_080218F0 = _base_080218F0 + _off_080218F0;
    _cyc_080218F0 += runtime_mem_cycles(_ea_080218F0, 1u, 0u);
    uint32_t _v_080218F0;
    _v_080218F0 = bus_read_u8(_ea_080218F0);
    if (2u != 3u) g_cpu.R[2] = _post_080218F0;
    g_cpu.R[3] = _v_080218F0;
    g_cpu.R[15] = 0x080218F4u;
    runtime_tick(_cyc_080218F0);
    /* 080218F4  080218f4 A cmps r3,#0x0 */
    g_cpu.R[15] = 0x080218F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218F4 = 1u;
    _cyc_080218F4 = 1u;
    uint32_t _rn_080218F4 = g_cpu.R[3];
    uint32_t _r_080218F4;
    _r_080218F4 = _rn_080218F4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080218F4, 0x00000000u, _r_080218F4);
    g_cpu.R[15] = 0x080218F8u;
    runtime_tick(_cyc_080218F4);
    /* 080218F8  080218f8 A beq 0x080218e8 */
    g_cpu.R[15] = 0x080218F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218F8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080218F8 = 3u;
        g_cpu.R[15] = 0x080218E8u;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x080218F8u, 0x080218E8u, 0u, 0u);
        runtime_tick(_cyc_080218F8);
        goto L_080218E8;
    }
    g_cpu.R[15] = 0x080218FCu;
    runtime_tick(_cyc_080218F8);
    /* 080218FC  080218fc A cmps r3,#0xfd */
    g_cpu.R[15] = 0x080218FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218FC = 1u;
    _cyc_080218FC = 1u;
    uint32_t _rn_080218FC = g_cpu.R[3];
    uint32_t _r_080218FC;
    _r_080218FC = _rn_080218FC - 0x000000FDu;
    arm_set_nzcv_sub(_rn_080218FC, 0x000000FDu, _r_080218FC);
    g_cpu.R[15] = 0x08021900u;
    runtime_tick(_cyc_080218FC);
    /* 08021900  08021900 A strbhi r9,[r2,#-0x1] */
    g_cpu.R[15] = 0x08021900u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021900 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08021900 = 1u;
        uint32_t _base_08021900 = g_cpu.R[2];
        uint32_t _off_08021900;
        _off_08021900 = 0x00000001u;
        uint32_t _ea_08021900 = _base_08021900 - _off_08021900;
        uint32_t _post_08021900 = _base_08021900 - _off_08021900;
        _cyc_08021900 += runtime_mem_cycles(_ea_08021900, 1u, 0u);
        runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021900u, _ea_08021900, (uint32_t)(g_cpu.R[9] & 0xFFu), 1u);
        bus_write_u8(_ea_08021900, (uint8_t)(g_cpu.R[9] & 0xFFu));
    }
    g_cpu.R[15] = 0x08021904u;
    runtime_tick(_cyc_08021900);
    /* 08021904  08021904 A bhi 0x080218e8 */
    g_cpu.R[15] = 0x08021904u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021904 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08021904 = 3u;
        g_cpu.R[15] = 0x080218E8u;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08021904u, 0x080218E8u, 0u, 0u);
        runtime_tick(_cyc_08021904);
        goto L_080218E8;
    }
    g_cpu.R[15] = 0x08021908u;
    runtime_tick(_cyc_08021904);
    /* 08021908  08021908 A strb r8,[r2,#-0x1] */
    g_cpu.R[15] = 0x08021908u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021908 = 1u;
    _cyc_08021908 = 1u;
    uint32_t _base_08021908 = g_cpu.R[2];
    uint32_t _off_08021908;
    _off_08021908 = 0x00000001u;
    uint32_t _ea_08021908 = _base_08021908 - _off_08021908;
    uint32_t _post_08021908 = _base_08021908 - _off_08021908;
    _cyc_08021908 += runtime_mem_cycles(_ea_08021908, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08021908u, _ea_08021908, (uint32_t)(g_cpu.R[8] & 0xFFu), 1u);
    bus_write_u8(_ea_08021908, (uint8_t)(g_cpu.R[8] & 0xFFu));
    g_cpu.R[15] = 0x0802190Cu;
    runtime_tick(_cyc_08021908);
    /* 0802190C  0802190c A b 0x080218e8 */
    g_cpu.R[15] = 0x0802190Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802190C = 1u;
    _cyc_0802190C = 3u;
    g_cpu.R[15] = 0x080218E8u;
    runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x0802190Cu, 0x080218E8u, 0u, 0u);
    runtime_tick(_cyc_0802190C);
    goto L_080218E8;
    g_cpu.R[15] = 0x08021910u;
    runtime_tick(_cyc_0802190C);
    /* fall-through to 0x08021910 */
    g_cpu.R[15] = 0x08021910u;
    runtime_dispatch(0x08021910u);
    return;
}


/* 0x080385E0  mode=arm  end=0x08038624  branches=11 */
void gf_memory_transfer_arm_at_080385E0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080385E0u);
    /* 080385E0  080385e0 A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x080385E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080385E0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080385E0 = 1u;
        uint32_t _rn_080385E0 = g_cpu.R[0];
        uint32_t _r_080385E0;
        _r_080385E0 = _rn_080385E0 & 0x01E00000u;
        g_cpu.R[4] = _r_080385E0;
    }
    g_cpu.R[15] = 0x080385E4u;
    runtime_tick(_cyc_080385E0);
    /* 080385E4  080385e4 A stm r13!,{r5,r6,r7,r8,r9,r10,r14} */
    g_cpu.R[15] = 0x080385E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080385E4 = 1u;
    _cyc_080385E4 = 1u;
    uint32_t _b_080385E4 = g_cpu.R[13];
    uint32_t _a_080385E4 = _b_080385E4 - 28u;
    uint32_t _fb_080385E4 = _b_080385E4 - 28u;
    _cyc_080385E4 += runtime_mem_cycles(_a_080385E4 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080385E4u, _a_080385E4 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_080385E4 & ~3u, g_cpu.R[5]);
    _a_080385E4 += 4u;
    _cyc_080385E4 += runtime_mem_cycles(_a_080385E4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080385E4u, _a_080385E4 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_080385E4 & ~3u, g_cpu.R[6]);
    _a_080385E4 += 4u;
    _cyc_080385E4 += runtime_mem_cycles(_a_080385E4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080385E4u, _a_080385E4 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_080385E4 & ~3u, g_cpu.R[7]);
    _a_080385E4 += 4u;
    _cyc_080385E4 += runtime_mem_cycles(_a_080385E4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080385E4u, _a_080385E4 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_a_080385E4 & ~3u, g_cpu.R[8]);
    _a_080385E4 += 4u;
    _cyc_080385E4 += runtime_mem_cycles(_a_080385E4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080385E4u, _a_080385E4 & ~3u, g_cpu.R[9], 4u);
    bus_write_u32(_a_080385E4 & ~3u, g_cpu.R[9]);
    _a_080385E4 += 4u;
    _cyc_080385E4 += runtime_mem_cycles(_a_080385E4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080385E4u, _a_080385E4 & ~3u, g_cpu.R[10], 4u);
    bus_write_u32(_a_080385E4 & ~3u, g_cpu.R[10]);
    _a_080385E4 += 4u;
    _cyc_080385E4 += runtime_mem_cycles(_a_080385E4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080385E4u, _a_080385E4 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_080385E4 & ~3u, g_cpu.R[14]);
    _a_080385E4 += 4u;
    g_cpu.R[13] = _fb_080385E4;
    g_cpu.R[15] = 0x080385E8u;
    runtime_tick(_cyc_080385E4);
    /* 080385E8  080385e8 A mov r9,r2 */
    g_cpu.R[15] = 0x080385E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080385E8 = 1u;
    _cyc_080385E8 = 1u;
    uint32_t _rm_080385E8 = g_cpu.R[2];
    uint32_t _op2_080385E8;
    uint32_t _co_080385E8;
    _op2_080385E8 = _rm_080385E8;
    _co_080385E8 = cpsr_c();
    uint32_t _r_080385E8;
    _r_080385E8 = _op2_080385E8;
    g_cpu.R[9] = _r_080385E8;
    g_cpu.R[15] = 0x080385ECu;
    runtime_tick(_cyc_080385E8);
    /* 080385EC  080385ec A sub r13,r13,#0x2c */
    g_cpu.R[15] = 0x080385ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080385EC = 1u;
    _cyc_080385EC = 1u;
    uint32_t _rn_080385EC = g_cpu.R[13];
    uint32_t _r_080385EC;
    _r_080385EC = _rn_080385EC - 0x0000002Cu;
    g_cpu.R[13] = _r_080385EC;
    g_cpu.R[15] = 0x080385F0u;
    runtime_tick(_cyc_080385EC);
    /* 080385F0  080385f0 A ldr r2,[r13,#0x48] */
    g_cpu.R[15] = 0x080385F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080385F0 = 1u;
    _cyc_080385F0 = 2u;
    uint32_t _base_080385F0 = g_cpu.R[13];
    uint32_t _off_080385F0;
    _off_080385F0 = 0x00000048u;
    uint32_t _ea_080385F0 = _base_080385F0 + _off_080385F0;
    uint32_t _post_080385F0 = _base_080385F0 + _off_080385F0;
    _cyc_080385F0 += runtime_mem_cycles(_ea_080385F0, 4u, 0u);
    uint32_t _v_080385F0;
    { uint32_t _w = bus_read_u32(_ea_080385F0 & ~3u); uint32_t _rot = (_ea_080385F0 & 3u) * 8u; _v_080385F0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080385F0;
    g_cpu.R[15] = 0x080385F4u;
    runtime_tick(_cyc_080385F0);
    /* 080385F4  080385f4 A mov r7,r3 */
    g_cpu.R[15] = 0x080385F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080385F4 = 1u;
    _cyc_080385F4 = 1u;
    uint32_t _rm_080385F4 = g_cpu.R[3];
    uint32_t _op2_080385F4;
    uint32_t _co_080385F4;
    _op2_080385F4 = _rm_080385F4;
    _co_080385F4 = cpsr_c();
    uint32_t _r_080385F4;
    _r_080385F4 = _op2_080385F4;
    g_cpu.R[7] = _r_080385F4;
    g_cpu.R[15] = 0x080385F8u;
    runtime_tick(_cyc_080385F4);
    /* 080385F8  080385f8 A str r0,[r13,#0x28] */
    g_cpu.R[15] = 0x080385F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080385F8 = 1u;
    _cyc_080385F8 = 1u;
    uint32_t _base_080385F8 = g_cpu.R[13];
    uint32_t _off_080385F8;
    _off_080385F8 = 0x00000028u;
    uint32_t _ea_080385F8 = _base_080385F8 + _off_080385F8;
    uint32_t _post_080385F8 = _base_080385F8 + _off_080385F8;
    _cyc_080385F8 += runtime_mem_cycles(_ea_080385F8, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080385F8u, _ea_080385F8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_080385F8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x080385FCu;
    runtime_tick(_cyc_080385F8);
    /* 080385FC  080385fc A mov r3,r1 */
    g_cpu.R[15] = 0x080385FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080385FC = 1u;
    _cyc_080385FC = 1u;
    uint32_t _rm_080385FC = g_cpu.R[1];
    uint32_t _op2_080385FC;
    uint32_t _co_080385FC;
    _op2_080385FC = _rm_080385FC;
    _co_080385FC = cpsr_c();
    uint32_t _r_080385FC;
    _r_080385FC = _op2_080385FC;
    g_cpu.R[3] = _r_080385FC;
    g_cpu.R[15] = 0x08038600u;
    runtime_tick(_cyc_080385FC);
    /* 08038600  08038600 A ldrh r0,[r0,#0xa] */
    g_cpu.R[15] = 0x08038600u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038600 = 1u;
    _cyc_08038600 = 2u;
    uint32_t _base_08038600 = g_cpu.R[0];
    uint32_t _off_08038600;
    _off_08038600 = 0x0000000Au;
    uint32_t _ea_08038600 = _base_08038600 + _off_08038600;
    uint32_t _post_08038600 = _base_08038600 + _off_08038600;
    _cyc_08038600 += runtime_mem_cycles(_ea_08038600, 2u, 0u);
    uint32_t _v_08038600;
    { uint32_t _h = bus_read_u16(_ea_08038600 & ~1u); if (_ea_08038600 & 1u) _v_08038600 = ((_h >> 8) | (_h << 24)); else _v_08038600 = _h; }
    g_cpu.R[0] = _v_08038600;
    g_cpu.R[15] = 0x08038604u;
    runtime_tick(_cyc_08038600);
    /* 08038604  08038604 A cmps r3,#0xff */
    g_cpu.R[15] = 0x08038604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038604 = 1u;
    _cyc_08038604 = 1u;
    uint32_t _rn_08038604 = g_cpu.R[3];
    uint32_t _r_08038604;
    _r_08038604 = _rn_08038604 - 0x000000FFu;
    arm_set_nzcv_sub(_rn_08038604, 0x000000FFu, _r_08038604);
    g_cpu.R[15] = 0x08038608u;
    runtime_tick(_cyc_08038604);
    /* 08038608  08038608 A str r0,[r13,#0x1c] */
    g_cpu.R[15] = 0x08038608u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038608 = 1u;
    _cyc_08038608 = 1u;
    uint32_t _base_08038608 = g_cpu.R[13];
    uint32_t _off_08038608;
    _off_08038608 = 0x0000001Cu;
    uint32_t _ea_08038608 = _base_08038608 + _off_08038608;
    uint32_t _post_08038608 = _base_08038608 + _off_08038608;
    _cyc_08038608 += runtime_mem_cycles(_ea_08038608, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038608u, _ea_08038608 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08038608 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0803860Cu;
    runtime_tick(_cyc_08038608);
    /* 0803860C  0803860c A bls 0x08038624 */
    g_cpu.R[15] = 0x0803860Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803860C = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_0803860C = 3u;
        g_cpu.R[15] = 0x08038624u;
        runtime_tick(_cyc_0803860C);
        gf_hardware_and_video_access_at_08038624();
        return;
    }
    g_cpu.R[15] = 0x08038610u;
    runtime_tick(_cyc_0803860C);
    /* 08038610  08038610 A cmps r2,#0x0 */
    g_cpu.R[15] = 0x08038610u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038610 = 1u;
    _cyc_08038610 = 1u;
    uint32_t _rn_08038610 = g_cpu.R[2];
    uint32_t _r_08038610;
    _r_08038610 = _rn_08038610 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038610, 0x00000000u, _r_08038610);
    g_cpu.R[15] = 0x08038614u;
    runtime_tick(_cyc_08038610);
    /* 08038614  08038614 A sub r12,r3,#0xde */
    g_cpu.R[15] = 0x08038614u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038614 = 1u;
    _cyc_08038614 = 1u;
    uint32_t _rn_08038614 = g_cpu.R[3];
    uint32_t _r_08038614;
    _r_08038614 = _rn_08038614 - 0x000000DEu;
    g_cpu.R[12] = _r_08038614;
    g_cpu.R[15] = 0x08038618u;
    runtime_tick(_cyc_08038614);
    /* 08038618  08038618 A beq 0x08038764 */
    g_cpu.R[15] = 0x08038618u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038618 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038618 = 3u;
        g_cpu.R[15] = 0x08038764u;
        runtime_tick(_cyc_08038618);
        gf_memory_transfer_arm_at_08038764();
        return;
    }
    g_cpu.R[15] = 0x0803861Cu;
    runtime_tick(_cyc_08038618);
    /* 0803861C  0803861c A cmps r12,#0x1 */
    g_cpu.R[15] = 0x0803861Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803861C = 1u;
    _cyc_0803861C = 1u;
    uint32_t _rn_0803861C = g_cpu.R[12];
    uint32_t _r_0803861C;
    _r_0803861C = _rn_0803861C - 0x00000001u;
    arm_set_nzcv_sub(_rn_0803861C, 0x00000001u, _r_0803861C);
    g_cpu.R[15] = 0x08038620u;
    runtime_tick(_cyc_0803861C);
    /* 08038620  08038620 A bhi 0x08038764 */
    g_cpu.R[15] = 0x08038620u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038620 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08038620 = 3u;
        g_cpu.R[15] = 0x08038764u;
        runtime_tick(_cyc_08038620);
        gf_memory_transfer_arm_at_08038764();
        return;
    }
    g_cpu.R[15] = 0x08038624u;
    runtime_tick(_cyc_08038620);
    /* fall-through to 0x08038624 */
    g_cpu.R[15] = 0x08038624u;
    runtime_dispatch(0x08038624u);
    return;
}


/* 0x08038688  mode=arm  end=0x0803870C  branches=6 */
void gf_memory_transfer_arm_at_08038688(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038688u);
    /* 08038688  08038688 A tsts r14,#0x1 */
    g_cpu.R[15] = 0x08038688u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038688 = 1u;
    _cyc_08038688 = 1u;
    uint32_t _rn_08038688 = g_cpu.R[14];
    uint32_t _r_08038688;
    _r_08038688 = _rn_08038688 & 0x00000001u;
    arm_set_nzc_logic(_r_08038688, cpsr_c());
    g_cpu.R[15] = 0x0803868Cu;
    runtime_tick(_cyc_08038688);
    /* 0803868C  0803868c A mov r5,r5,lsr #4 */
    g_cpu.R[15] = 0x0803868Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803868C = 1u;
    _cyc_0803868C = 1u;
    uint32_t _rm_0803868C = g_cpu.R[5];
    uint32_t _op2_0803868C;
    uint32_t _co_0803868C;
    _op2_0803868C = _rm_0803868C >> 4;
    _co_0803868C = (_rm_0803868C >> 3) & 1u;
    uint32_t _r_0803868C;
    _r_0803868C = _op2_0803868C;
    g_cpu.R[5] = _r_0803868C;
    g_cpu.R[15] = 0x08038690u;
    runtime_tick(_cyc_0803868C);
    /* 08038690  08038690 A ldreq r3,[r13,#0x18] */
    g_cpu.R[15] = 0x08038690u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038690 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038690 = 2u;
        uint32_t _base_08038690 = g_cpu.R[13];
        uint32_t _off_08038690;
        _off_08038690 = 0x00000018u;
        uint32_t _ea_08038690 = _base_08038690 + _off_08038690;
        uint32_t _post_08038690 = _base_08038690 + _off_08038690;
        _cyc_08038690 += runtime_mem_cycles(_ea_08038690, 4u, 0u);
        uint32_t _v_08038690;
        { uint32_t _w = bus_read_u32(_ea_08038690 & ~3u); uint32_t _rot = (_ea_08038690 & 3u) * 8u; _v_08038690 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
        g_cpu.R[3] = _v_08038690;
    }
    g_cpu.R[15] = 0x08038694u;
    runtime_tick(_cyc_08038690);
    /* 08038694  08038694 A ldrbeq r5,[r3],#0x1 */
    g_cpu.R[15] = 0x08038694u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038694 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038694 = 2u;
        uint32_t _base_08038694 = g_cpu.R[3];
        uint32_t _off_08038694;
        _off_08038694 = 0x00000001u;
        uint32_t _ea_08038694 = _base_08038694;
        uint32_t _post_08038694 = _base_08038694 + _off_08038694;
        _cyc_08038694 += runtime_mem_cycles(_ea_08038694, 1u, 0u);
        uint32_t _v_08038694;
        _v_08038694 = bus_read_u8(_ea_08038694);
        if (3u != 5u) g_cpu.R[3] = _post_08038694;
        g_cpu.R[5] = _v_08038694;
    }
    g_cpu.R[15] = 0x08038698u;
    runtime_tick(_cyc_08038694);
    /* 08038698  08038698 A streq r3,[r13,#0x18] */
    g_cpu.R[15] = 0x08038698u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038698 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038698 = 1u;
        uint32_t _base_08038698 = g_cpu.R[13];
        uint32_t _off_08038698;
        _off_08038698 = 0x00000018u;
        uint32_t _ea_08038698 = _base_08038698 + _off_08038698;
        uint32_t _post_08038698 = _base_08038698 + _off_08038698;
        _cyc_08038698 += runtime_mem_cycles(_ea_08038698, 4u, 0u);
        runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038698u, _ea_08038698 & ~3u, g_cpu.R[3], 4u);
        bus_write_u32(_ea_08038698 & ~3u, g_cpu.R[3]);
    }
    g_cpu.R[15] = 0x0803869Cu;
    runtime_tick(_cyc_08038698);
    /* 0803869C  0803869c A and r3,r5,#0xd */
    g_cpu.R[15] = 0x0803869Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803869C = 1u;
    _cyc_0803869C = 1u;
    uint32_t _rn_0803869C = g_cpu.R[5];
    uint32_t _r_0803869C;
    _r_0803869C = _rn_0803869C & 0x0000000Du;
    g_cpu.R[3] = _r_0803869C;
    g_cpu.R[15] = 0x080386A0u;
    runtime_tick(_cyc_0803869C);
    /* 080386A0  080386a0 A cmps r3,#0x1 */
    g_cpu.R[15] = 0x080386A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386A0 = 1u;
    _cyc_080386A0 = 1u;
    uint32_t _rn_080386A0 = g_cpu.R[3];
    uint32_t _r_080386A0;
    _r_080386A0 = _rn_080386A0 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080386A0, 0x00000001u, _r_080386A0);
    g_cpu.R[15] = 0x080386A4u;
    runtime_tick(_cyc_080386A0);
    /* 080386A4  080386a4 A bne 0x0803870c */
    g_cpu.R[15] = 0x080386A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386A4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080386A4 = 3u;
        g_cpu.R[15] = 0x0803870Cu;
        runtime_tick(_cyc_080386A4);
        gf_indirect_control_flow_arm_at_0803870C();
        return;
    }
    g_cpu.R[15] = 0x080386A8u;
    runtime_tick(_cyc_080386A4);
    /* 080386A8  080386a8 A and r3,r5,#0xf */
    g_cpu.R[15] = 0x080386A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386A8 = 1u;
    _cyc_080386A8 = 1u;
    uint32_t _rn_080386A8 = g_cpu.R[5];
    uint32_t _r_080386A8;
    _r_080386A8 = _rn_080386A8 & 0x0000000Fu;
    g_cpu.R[3] = _r_080386A8;
    g_cpu.R[15] = 0x080386ACu;
    runtime_tick(_cyc_080386A8);
    /* 080386AC  080386ac A cmps r3,#0x1 */
    g_cpu.R[15] = 0x080386ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386AC = 1u;
    _cyc_080386AC = 1u;
    uint32_t _rn_080386AC = g_cpu.R[3];
    uint32_t _r_080386AC;
    _r_080386AC = _rn_080386AC - 0x00000001u;
    arm_set_nzcv_sub(_rn_080386AC, 0x00000001u, _r_080386AC);
    g_cpu.R[15] = 0x080386B0u;
    runtime_tick(_cyc_080386AC);
    /* 080386B0  080386b0 A ldr r12,[r13,#0x10] */
    g_cpu.R[15] = 0x080386B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386B0 = 1u;
    _cyc_080386B0 = 2u;
    uint32_t _base_080386B0 = g_cpu.R[13];
    uint32_t _off_080386B0;
    _off_080386B0 = 0x00000010u;
    uint32_t _ea_080386B0 = _base_080386B0 + _off_080386B0;
    uint32_t _post_080386B0 = _base_080386B0 + _off_080386B0;
    _cyc_080386B0 += runtime_mem_cycles(_ea_080386B0, 4u, 0u);
    uint32_t _v_080386B0;
    { uint32_t _w = bus_read_u32(_ea_080386B0 & ~3u); uint32_t _rot = (_ea_080386B0 & 3u) * 8u; _v_080386B0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[12] = _v_080386B0;
    g_cpu.R[15] = 0x080386B4u;
    runtime_tick(_cyc_080386B0);
    /* 080386B4  080386b4 A add r1,r9,r14 */
    g_cpu.R[15] = 0x080386B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386B4 = 1u;
    _cyc_080386B4 = 1u;
    uint32_t _rm_080386B4 = g_cpu.R[14];
    uint32_t _op2_080386B4;
    uint32_t _co_080386B4;
    _op2_080386B4 = _rm_080386B4;
    _co_080386B4 = cpsr_c();
    uint32_t _rn_080386B4 = g_cpu.R[9];
    uint32_t _r_080386B4;
    _r_080386B4 = _rn_080386B4 + _op2_080386B4;
    g_cpu.R[1] = _r_080386B4;
    g_cpu.R[15] = 0x080386B8u;
    runtime_tick(_cyc_080386B4);
    /* 080386B8  080386b8 A ldr r0,[r13,#0x14] */
    g_cpu.R[15] = 0x080386B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386B8 = 1u;
    _cyc_080386B8 = 2u;
    uint32_t _base_080386B8 = g_cpu.R[13];
    uint32_t _off_080386B8;
    _off_080386B8 = 0x00000014u;
    uint32_t _ea_080386B8 = _base_080386B8 + _off_080386B8;
    uint32_t _post_080386B8 = _base_080386B8 + _off_080386B8;
    _cyc_080386B8 += runtime_mem_cycles(_ea_080386B8, 4u, 0u);
    uint32_t _v_080386B8;
    { uint32_t _w = bus_read_u32(_ea_080386B8 & ~3u); uint32_t _rot = (_ea_080386B8 & 3u) * 8u; _v_080386B8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080386B8;
    g_cpu.R[15] = 0x080386BCu;
    runtime_tick(_cyc_080386B8);
    /* 080386BC  080386bc A mov r2,r1,lsr #3 */
    g_cpu.R[15] = 0x080386BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386BC = 1u;
    _cyc_080386BC = 1u;
    uint32_t _rm_080386BC = g_cpu.R[1];
    uint32_t _op2_080386BC;
    uint32_t _co_080386BC;
    _op2_080386BC = _rm_080386BC >> 3;
    _co_080386BC = (_rm_080386BC >> 2) & 1u;
    uint32_t _r_080386BC;
    _r_080386BC = _op2_080386BC;
    g_cpu.R[2] = _r_080386BC;
    g_cpu.R[15] = 0x080386C0u;
    runtime_tick(_cyc_080386BC);
    /* 080386C0  080386c0 A moveq r12,r0 */
    g_cpu.R[15] = 0x080386C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386C0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080386C0 = 1u;
        uint32_t _rm_080386C0 = g_cpu.R[0];
        uint32_t _op2_080386C0;
        uint32_t _co_080386C0;
        _op2_080386C0 = _rm_080386C0;
        _co_080386C0 = cpsr_c();
        uint32_t _r_080386C0;
        _r_080386C0 = _op2_080386C0;
        g_cpu.R[12] = _r_080386C0;
    }
    g_cpu.R[15] = 0x080386C4u;
    runtime_tick(_cyc_080386C0);
    /* 080386C4  080386c4 A cmps r2,#0x1d */
    g_cpu.R[15] = 0x080386C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386C4 = 1u;
    _cyc_080386C4 = 1u;
    uint32_t _rn_080386C4 = g_cpu.R[2];
    uint32_t _r_080386C4;
    _r_080386C4 = _rn_080386C4 - 0x0000001Du;
    arm_set_nzcv_sub(_rn_080386C4, 0x0000001Du, _r_080386C4);
    g_cpu.R[15] = 0x080386C8u;
    runtime_tick(_cyc_080386C4);
    /* 080386C8  080386c8 A bhi 0x0803870c */
    g_cpu.R[15] = 0x080386C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386C8 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_080386C8 = 3u;
        g_cpu.R[15] = 0x0803870Cu;
        runtime_tick(_cyc_080386C8);
        gf_indirect_control_flow_arm_at_0803870C();
        return;
    }
    g_cpu.R[15] = 0x080386CCu;
    runtime_tick(_cyc_080386C8);
    /* 080386CC  080386cc A ldr r0,[r13,#0x1c] */
    g_cpu.R[15] = 0x080386CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386CC = 1u;
    _cyc_080386CC = 2u;
    uint32_t _base_080386CC = g_cpu.R[13];
    uint32_t _off_080386CC;
    _off_080386CC = 0x0000001Cu;
    uint32_t _ea_080386CC = _base_080386CC + _off_080386CC;
    uint32_t _post_080386CC = _base_080386CC + _off_080386CC;
    _cyc_080386CC += runtime_mem_cycles(_ea_080386CC, 4u, 0u);
    uint32_t _v_080386CC;
    { uint32_t _w = bus_read_u32(_ea_080386CC & ~3u); uint32_t _rot = (_ea_080386CC & 3u) * 8u; _v_080386CC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080386CC;
    g_cpu.R[15] = 0x080386D0u;
    runtime_tick(_cyc_080386CC);
    /* 080386D0  080386d0 A sub r3,r0,#0x2 */
    g_cpu.R[15] = 0x080386D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386D0 = 1u;
    _cyc_080386D0 = 1u;
    uint32_t _rn_080386D0 = g_cpu.R[0];
    uint32_t _r_080386D0;
    _r_080386D0 = _rn_080386D0 - 0x00000002u;
    g_cpu.R[3] = _r_080386D0;
    g_cpu.R[15] = 0x080386D4u;
    runtime_tick(_cyc_080386D0);
    /* 080386D4  080386d4 A mla r0,r3,r2,r8 */
    g_cpu.R[15] = 0x080386D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386D4 = 1u;
    _cyc_080386D4 = 1u;
    _cyc_080386D4 += runtime_mul_cycles(g_cpu.R[2], 1u, 1u);
    uint32_t _r_080386D4 = g_cpu.R[3] * g_cpu.R[2] + g_cpu.R[8];
    g_cpu.R[0] = _r_080386D4;
    g_cpu.R[15] = 0x080386D8u;
    runtime_tick(_cyc_080386D4);
    /* 080386D8  080386d8 A and r3,r1,#0x7 */
    g_cpu.R[15] = 0x080386D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386D8 = 1u;
    _cyc_080386D8 = 1u;
    uint32_t _rn_080386D8 = g_cpu.R[1];
    uint32_t _r_080386D8;
    _r_080386D8 = _rn_080386D8 & 0x00000007u;
    g_cpu.R[3] = _r_080386D8;
    g_cpu.R[15] = 0x080386DCu;
    runtime_tick(_cyc_080386D8);
    /* 080386DC  080386dc A orr r3,r6,r3,lsr #2 */
    g_cpu.R[15] = 0x080386DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386DC = 1u;
    _cyc_080386DC = 1u;
    uint32_t _rm_080386DC = g_cpu.R[3];
    uint32_t _op2_080386DC;
    uint32_t _co_080386DC;
    _op2_080386DC = _rm_080386DC >> 2;
    _co_080386DC = (_rm_080386DC >> 1) & 1u;
    uint32_t _rn_080386DC = g_cpu.R[6];
    uint32_t _r_080386DC;
    _r_080386DC = _rn_080386DC | _op2_080386DC;
    g_cpu.R[3] = _r_080386DC;
    g_cpu.R[15] = 0x080386E0u;
    runtime_tick(_cyc_080386DC);
    /* 080386E0  080386e0 A and r1,r1,#0x3 */
    g_cpu.R[15] = 0x080386E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386E0 = 1u;
    _cyc_080386E0 = 1u;
    uint32_t _rn_080386E0 = g_cpu.R[1];
    uint32_t _r_080386E0;
    _r_080386E0 = _rn_080386E0 & 0x00000003u;
    g_cpu.R[1] = _r_080386E0;
    g_cpu.R[15] = 0x080386E4u;
    runtime_tick(_cyc_080386E0);
    /* 080386E4  080386e4 A mov r1,r1,lsl #2 */
    g_cpu.R[15] = 0x080386E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386E4 = 1u;
    _cyc_080386E4 = 1u;
    uint32_t _rm_080386E4 = g_cpu.R[1];
    uint32_t _op2_080386E4;
    uint32_t _co_080386E4;
    _op2_080386E4 = _rm_080386E4 << 2;
    _co_080386E4 = (_rm_080386E4 >> 30) & 1u;
    uint32_t _r_080386E4;
    _r_080386E4 = _op2_080386E4;
    g_cpu.R[1] = _r_080386E4;
    g_cpu.R[15] = 0x080386E8u;
    runtime_tick(_cyc_080386E4);
    /* 080386E8  080386e8 A add r0,r10,r0,lsl #5 */
    g_cpu.R[15] = 0x080386E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386E8 = 1u;
    _cyc_080386E8 = 1u;
    uint32_t _rm_080386E8 = g_cpu.R[0];
    uint32_t _op2_080386E8;
    uint32_t _co_080386E8;
    _op2_080386E8 = _rm_080386E8 << 5;
    _co_080386E8 = (_rm_080386E8 >> 27) & 1u;
    uint32_t _rn_080386E8 = g_cpu.R[10];
    uint32_t _r_080386E8;
    _r_080386E8 = _rn_080386E8 + _op2_080386E8;
    g_cpu.R[0] = _r_080386E8;
    g_cpu.R[15] = 0x080386ECu;
    runtime_tick(_cyc_080386E8);
    /* 080386EC  080386ec A orr r0,r0,r3,lsl #1 */
    g_cpu.R[15] = 0x080386ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386EC = 1u;
    _cyc_080386EC = 1u;
    uint32_t _rm_080386EC = g_cpu.R[3];
    uint32_t _op2_080386EC;
    uint32_t _co_080386EC;
    _op2_080386EC = _rm_080386EC << 1;
    _co_080386EC = (_rm_080386EC >> 31) & 1u;
    uint32_t _rn_080386EC = g_cpu.R[0];
    uint32_t _r_080386EC;
    _r_080386EC = _rn_080386EC | _op2_080386EC;
    g_cpu.R[0] = _r_080386EC;
    g_cpu.R[15] = 0x080386F0u;
    runtime_tick(_cyc_080386EC);
    /* 080386F0  080386f0 A mov r3,#0xf */
    g_cpu.R[15] = 0x080386F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386F0 = 1u;
    _cyc_080386F0 = 1u;
    uint32_t _r_080386F0;
    _r_080386F0 = 0x0000000Fu;
    g_cpu.R[3] = _r_080386F0;
    g_cpu.R[15] = 0x080386F4u;
    runtime_tick(_cyc_080386F0);
    /* 080386F4  080386f4 A ldrh r2,[r0] */
    g_cpu.R[15] = 0x080386F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386F4 = 1u;
    _cyc_080386F4 = 2u;
    uint32_t _base_080386F4 = g_cpu.R[0];
    uint32_t _off_080386F4;
    _off_080386F4 = 0x00000000u;
    uint32_t _ea_080386F4 = _base_080386F4 + _off_080386F4;
    uint32_t _post_080386F4 = _base_080386F4 + _off_080386F4;
    _cyc_080386F4 += runtime_mem_cycles(_ea_080386F4, 2u, 0u);
    uint32_t _v_080386F4;
    { uint32_t _h = bus_read_u16(_ea_080386F4 & ~1u); if (_ea_080386F4 & 1u) _v_080386F4 = ((_h >> 8) | (_h << 24)); else _v_080386F4 = _h; }
    g_cpu.R[2] = _v_080386F4;
    g_cpu.R[15] = 0x080386F8u;
    runtime_tick(_cyc_080386F4);
    /* 080386F8  080386f8 A mov r3,r3,lsl r1 */
    g_cpu.R[15] = 0x080386F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386F8 = 1u;
    _cyc_080386F8 = 2u;
    uint32_t _rm_080386F8 = g_cpu.R[3];
    uint32_t _op2_080386F8;
    uint32_t _co_080386F8;
    uint32_t _cnt_080386F8 = (g_cpu.R[1]) & 0xFFu;
    if (_cnt_080386F8 == 0)      { _op2_080386F8 = _rm_080386F8; _co_080386F8 = cpsr_c(); }
    else if (_cnt_080386F8 < 32) { _op2_080386F8 = _rm_080386F8 << _cnt_080386F8; _co_080386F8 = (_rm_080386F8 >> (32u - _cnt_080386F8)) & 1u; }
    else if (_cnt_080386F8 == 32){ _op2_080386F8 = 0u; _co_080386F8 = _rm_080386F8 & 1u; }
    else                                { _op2_080386F8 = 0u; _co_080386F8 = 0u; }
    uint32_t _r_080386F8;
    _r_080386F8 = _op2_080386F8;
    g_cpu.R[3] = _r_080386F8;
    g_cpu.R[15] = 0x080386FCu;
    runtime_tick(_cyc_080386F8);
    /* 080386FC  080386fc A bic r2,r2,r3 */
    g_cpu.R[15] = 0x080386FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080386FC = 1u;
    _cyc_080386FC = 1u;
    uint32_t _rm_080386FC = g_cpu.R[3];
    uint32_t _op2_080386FC;
    uint32_t _co_080386FC;
    _op2_080386FC = _rm_080386FC;
    _co_080386FC = cpsr_c();
    uint32_t _rn_080386FC = g_cpu.R[2];
    uint32_t _r_080386FC;
    _r_080386FC = _rn_080386FC & ~(_op2_080386FC);
    g_cpu.R[2] = _r_080386FC;
    g_cpu.R[15] = 0x08038700u;
    runtime_tick(_cyc_080386FC);
    /* 08038700  08038700 A and r3,r3,r12 */
    g_cpu.R[15] = 0x08038700u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038700 = 1u;
    _cyc_08038700 = 1u;
    uint32_t _rm_08038700 = g_cpu.R[12];
    uint32_t _op2_08038700;
    uint32_t _co_08038700;
    _op2_08038700 = _rm_08038700;
    _co_08038700 = cpsr_c();
    uint32_t _rn_08038700 = g_cpu.R[3];
    uint32_t _r_08038700;
    _r_08038700 = _rn_08038700 & _op2_08038700;
    g_cpu.R[3] = _r_08038700;
    g_cpu.R[15] = 0x08038704u;
    runtime_tick(_cyc_08038700);
    /* 08038704  08038704 A orr r2,r2,r3 */
    g_cpu.R[15] = 0x08038704u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038704 = 1u;
    _cyc_08038704 = 1u;
    uint32_t _rm_08038704 = g_cpu.R[3];
    uint32_t _op2_08038704;
    uint32_t _co_08038704;
    _op2_08038704 = _rm_08038704;
    _co_08038704 = cpsr_c();
    uint32_t _rn_08038704 = g_cpu.R[2];
    uint32_t _r_08038704;
    _r_08038704 = _rn_08038704 | _op2_08038704;
    g_cpu.R[2] = _r_08038704;
    g_cpu.R[15] = 0x08038708u;
    runtime_tick(_cyc_08038704);
    /* 08038708  08038708 A strh r2,[r0] */
    g_cpu.R[15] = 0x08038708u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038708 = 1u;
    _cyc_08038708 = 1u;
    uint32_t _base_08038708 = g_cpu.R[0];
    uint32_t _off_08038708;
    _off_08038708 = 0x00000000u;
    uint32_t _ea_08038708 = _base_08038708 + _off_08038708;
    uint32_t _post_08038708 = _base_08038708 + _off_08038708;
    _cyc_08038708 += runtime_mem_cycles(_ea_08038708, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038708u, _ea_08038708 & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038708 & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x0803870Cu;
    runtime_tick(_cyc_08038708);
    /* fall-through to 0x0803870C */
    g_cpu.R[15] = 0x0803870Cu;
    runtime_dispatch(0x0803870Cu);
    return;
}


/* 0x08038738  mode=arm  end=0x08038764  branches=1 */
void gf_memory_transfer_arm_at_08038738(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038738u);
    /* 08038738  08038738 A sub r12,r3,#0xde */
    g_cpu.R[15] = 0x08038738u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038738 = 1u;
    _cyc_08038738 = 1u;
    uint32_t _rn_08038738 = g_cpu.R[3];
    uint32_t _r_08038738;
    _r_08038738 = _rn_08038738 - 0x000000DEu;
    g_cpu.R[12] = _r_08038738;
    g_cpu.R[15] = 0x0803873Cu;
    runtime_tick(_cyc_08038738);
    /* 0803873C  0803873c A sub r3,r3,#0x20 */
    g_cpu.R[15] = 0x0803873Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803873C = 1u;
    _cyc_0803873C = 1u;
    uint32_t _rn_0803873C = g_cpu.R[3];
    uint32_t _r_0803873C;
    _r_0803873C = _rn_0803873C - 0x00000020u;
    g_cpu.R[3] = _r_0803873C;
    g_cpu.R[15] = 0x08038740u;
    runtime_tick(_cyc_0803873C);
    /* 08038740  08038740 A add r2,r3,r3,lsl #1 */
    g_cpu.R[15] = 0x08038740u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038740 = 1u;
    _cyc_08038740 = 1u;
    uint32_t _rm_08038740 = g_cpu.R[3];
    uint32_t _op2_08038740;
    uint32_t _co_08038740;
    _op2_08038740 = _rm_08038740 << 1;
    _co_08038740 = (_rm_08038740 >> 31) & 1u;
    uint32_t _rn_08038740 = g_cpu.R[3];
    uint32_t _r_08038740;
    _r_08038740 = _rn_08038740 + _op2_08038740;
    g_cpu.R[2] = _r_08038740;
    g_cpu.R[15] = 0x08038744u;
    runtime_tick(_cyc_08038740);
    /* 08038744  08038744 A add r3,r3,r2,lsl #2 */
    g_cpu.R[15] = 0x08038744u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038744 = 1u;
    _cyc_08038744 = 1u;
    uint32_t _rm_08038744 = g_cpu.R[2];
    uint32_t _op2_08038744;
    uint32_t _co_08038744;
    _op2_08038744 = _rm_08038744 << 2;
    _co_08038744 = (_rm_08038744 >> 30) & 1u;
    uint32_t _rn_08038744 = g_cpu.R[3];
    uint32_t _r_08038744;
    _r_08038744 = _rn_08038744 + _op2_08038744;
    g_cpu.R[3] = _r_08038744;
    g_cpu.R[15] = 0x08038748u;
    runtime_tick(_cyc_08038744);
    /* 08038748  08038748 A ldr r1,[r15,#0xb4] */
    g_cpu.R[15] = 0x08038748u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038748 = 1u;
    _cyc_08038748 = 2u;
    uint32_t _base_08038748 = 0x08038750u;
    uint32_t _off_08038748;
    _off_08038748 = 0x000000B4u;
    uint32_t _ea_08038748 = _base_08038748 + _off_08038748;
    uint32_t _post_08038748 = _base_08038748 + _off_08038748;
    _cyc_08038748 += runtime_mem_cycles(_ea_08038748, 4u, 0u);
    uint32_t _v_08038748;
    { uint32_t _w = bus_read_u32(_ea_08038748 & ~3u); uint32_t _rot = (_ea_08038748 & 3u) * 8u; _v_08038748 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08038748;
    g_cpu.R[15] = 0x0803874Cu;
    runtime_tick(_cyc_08038748);
    /* 0803874C  0803874c A mov r3,r3,lsl #1 */
    g_cpu.R[15] = 0x0803874Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803874C = 1u;
    _cyc_0803874C = 1u;
    uint32_t _rm_0803874C = g_cpu.R[3];
    uint32_t _op2_0803874C;
    uint32_t _co_0803874C;
    _op2_0803874C = _rm_0803874C << 1;
    _co_0803874C = (_rm_0803874C >> 31) & 1u;
    uint32_t _r_0803874C;
    _r_0803874C = _op2_0803874C;
    g_cpu.R[3] = _r_0803874C;
    g_cpu.R[15] = 0x08038750u;
    runtime_tick(_cyc_0803874C);
    /* 08038750  08038750 A add r2,r3,r1 */
    g_cpu.R[15] = 0x08038750u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038750 = 1u;
    _cyc_08038750 = 1u;
    uint32_t _rm_08038750 = g_cpu.R[1];
    uint32_t _op2_08038750;
    uint32_t _co_08038750;
    _op2_08038750 = _rm_08038750;
    _co_08038750 = cpsr_c();
    uint32_t _rn_08038750 = g_cpu.R[3];
    uint32_t _r_08038750;
    _r_08038750 = _rn_08038750 + _op2_08038750;
    g_cpu.R[2] = _r_08038750;
    g_cpu.R[15] = 0x08038754u;
    runtime_tick(_cyc_08038750);
    /* 08038754  08038754 A add r2,r2,#0x2 */
    g_cpu.R[15] = 0x08038754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038754 = 1u;
    _cyc_08038754 = 1u;
    uint32_t _rn_08038754 = g_cpu.R[2];
    uint32_t _r_08038754;
    _r_08038754 = _rn_08038754 + 0x00000002u;
    g_cpu.R[2] = _r_08038754;
    g_cpu.R[15] = 0x08038758u;
    runtime_tick(_cyc_08038754);
    /* 08038758  08038758 A str r2,[r13,#0x24] */
    g_cpu.R[15] = 0x08038758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038758 = 1u;
    _cyc_08038758 = 1u;
    uint32_t _base_08038758 = g_cpu.R[13];
    uint32_t _off_08038758;
    _off_08038758 = 0x00000024u;
    uint32_t _ea_08038758 = _base_08038758 + _off_08038758;
    uint32_t _post_08038758 = _base_08038758 + _off_08038758;
    _cyc_08038758 += runtime_mem_cycles(_ea_08038758, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038758u, _ea_08038758 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08038758 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x0803875Cu;
    runtime_tick(_cyc_08038758);
    /* 0803875C  0803875c A ldrh r0,[r3,+r1] */
    g_cpu.R[15] = 0x0803875Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803875C = 1u;
    _cyc_0803875C = 2u;
    uint32_t _base_0803875C = g_cpu.R[3];
    uint32_t _off_0803875C;
    uint32_t _morm_0803875C = g_cpu.R[1];
    _off_0803875C = _morm_0803875C;
    uint32_t _ea_0803875C = _base_0803875C + _off_0803875C;
    uint32_t _post_0803875C = _base_0803875C + _off_0803875C;
    _cyc_0803875C += runtime_mem_cycles(_ea_0803875C, 2u, 0u);
    uint32_t _v_0803875C;
    { uint32_t _h = bus_read_u16(_ea_0803875C & ~1u); if (_ea_0803875C & 1u) _v_0803875C = ((_h >> 8) | (_h << 24)); else _v_0803875C = _h; }
    g_cpu.R[0] = _v_0803875C;
    g_cpu.R[15] = 0x08038760u;
    runtime_tick(_cyc_0803875C);
    /* 08038760  08038760 A b 0x08038780 */
    g_cpu.R[15] = 0x08038760u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038760 = 1u;
    _cyc_08038760 = 3u;
    g_cpu.R[15] = 0x08038780u;
    runtime_tick(_cyc_08038760);
    gf_memory_writes_arm_at_08038780();
    return;
    g_cpu.R[15] = 0x08038764u;
    runtime_tick(_cyc_08038760);
    /* fall-through to 0x08038764 */
    g_cpu.R[15] = 0x08038764u;
    runtime_dispatch(0x08038764u);
    return;
}


/* 0x08038764  mode=arm  end=0x08038780  branches=2 */
void gf_memory_transfer_arm_at_08038764(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038764u);
    /* 08038764  08038764 A sub r3,r3,#0x20 */
    g_cpu.R[15] = 0x08038764u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038764 = 1u;
    _cyc_08038764 = 1u;
    uint32_t _rn_08038764 = g_cpu.R[3];
    uint32_t _r_08038764;
    _r_08038764 = _rn_08038764 - 0x00000020u;
    g_cpu.R[3] = _r_08038764;
    g_cpu.R[15] = 0x08038768u;
    runtime_tick(_cyc_08038764);
    /* 08038768  08038768 A ldr r2,[r15,#0x94] */
    g_cpu.R[15] = 0x08038768u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038768 = 1u;
    _cyc_08038768 = 2u;
    uint32_t _base_08038768 = 0x08038770u;
    uint32_t _off_08038768;
    _off_08038768 = 0x00000094u;
    uint32_t _ea_08038768 = _base_08038768 + _off_08038768;
    uint32_t _post_08038768 = _base_08038768 + _off_08038768;
    _cyc_08038768 += runtime_mem_cycles(_ea_08038768, 4u, 0u);
    uint32_t _v_08038768;
    { uint32_t _w = bus_read_u32(_ea_08038768 & ~3u); uint32_t _rot = (_ea_08038768 & 3u) * 8u; _v_08038768 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08038768;
    g_cpu.R[15] = 0x0803876Cu;
    runtime_tick(_cyc_08038768);
    /* 0803876C  0803876c A mov r3,r3,lsl #5 */
    g_cpu.R[15] = 0x0803876Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803876C = 1u;
    _cyc_0803876C = 1u;
    uint32_t _rm_0803876C = g_cpu.R[3];
    uint32_t _op2_0803876C;
    uint32_t _co_0803876C;
    _op2_0803876C = _rm_0803876C << 5;
    _co_0803876C = (_rm_0803876C >> 27) & 1u;
    uint32_t _r_0803876C;
    _r_0803876C = _op2_0803876C;
    g_cpu.R[3] = _r_0803876C;
    g_cpu.R[15] = 0x08038770u;
    runtime_tick(_cyc_0803876C);
    /* 08038770  08038770 A add r0,r3,r2 */
    g_cpu.R[15] = 0x08038770u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038770 = 1u;
    _cyc_08038770 = 1u;
    uint32_t _rm_08038770 = g_cpu.R[2];
    uint32_t _op2_08038770;
    uint32_t _co_08038770;
    _op2_08038770 = _rm_08038770;
    _co_08038770 = cpsr_c();
    uint32_t _rn_08038770 = g_cpu.R[3];
    uint32_t _r_08038770;
    _r_08038770 = _rn_08038770 + _op2_08038770;
    g_cpu.R[0] = _r_08038770;
    g_cpu.R[15] = 0x08038774u;
    runtime_tick(_cyc_08038770);
    /* 08038774  08038774 A add r0,r0,#0x8 */
    g_cpu.R[15] = 0x08038774u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038774 = 1u;
    _cyc_08038774 = 1u;
    uint32_t _rn_08038774 = g_cpu.R[0];
    uint32_t _r_08038774;
    _r_08038774 = _rn_08038774 + 0x00000008u;
    g_cpu.R[0] = _r_08038774;
    g_cpu.R[15] = 0x08038778u;
    runtime_tick(_cyc_08038774);
    /* 08038778  08038778 A str r0,[r13,#0x24] */
    g_cpu.R[15] = 0x08038778u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038778 = 1u;
    _cyc_08038778 = 1u;
    uint32_t _base_08038778 = g_cpu.R[13];
    uint32_t _off_08038778;
    _off_08038778 = 0x00000024u;
    uint32_t _ea_08038778 = _base_08038778 + _off_08038778;
    uint32_t _post_08038778 = _base_08038778 + _off_08038778;
    _cyc_08038778 += runtime_mem_cycles(_ea_08038778, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038778u, _ea_08038778 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08038778 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0803877Cu;
    runtime_tick(_cyc_08038778);
    /* 0803877C  0803877c A ldrh r0,[r3,+r2] */
    g_cpu.R[15] = 0x0803877Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803877C = 1u;
    _cyc_0803877C = 2u;
    uint32_t _base_0803877C = g_cpu.R[3];
    uint32_t _off_0803877C;
    uint32_t _morm_0803877C = g_cpu.R[2];
    _off_0803877C = _morm_0803877C;
    uint32_t _ea_0803877C = _base_0803877C + _off_0803877C;
    uint32_t _post_0803877C = _base_0803877C + _off_0803877C;
    _cyc_0803877C += runtime_mem_cycles(_ea_0803877C, 2u, 0u);
    uint32_t _v_0803877C;
    { uint32_t _h = bus_read_u16(_ea_0803877C & ~1u); if (_ea_0803877C & 1u) _v_0803877C = ((_h >> 8) | (_h << 24)); else _v_0803877C = _h; }
    g_cpu.R[0] = _v_0803877C;
    g_cpu.R[15] = 0x08038780u;
    runtime_tick(_cyc_0803877C);
    /* fall-through to 0x08038780 */
    g_cpu.R[15] = 0x08038780u;
    runtime_dispatch(0x08038780u);
    return;
}


/* 0x080387A0  mode=arm  end=0x080387B0  branches=4 */
void gf_memory_transfer_arm_at_080387A0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080387A0u);
    /* 080387A0  080387a0 A ldr r3,[r13,#0x24] */
    g_cpu.R[15] = 0x080387A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387A0 = 1u;
    _cyc_080387A0 = 2u;
    uint32_t _base_080387A0 = g_cpu.R[13];
    uint32_t _off_080387A0;
    _off_080387A0 = 0x00000024u;
    uint32_t _ea_080387A0 = _base_080387A0 + _off_080387A0;
    uint32_t _post_080387A0 = _base_080387A0 + _off_080387A0;
    _cyc_080387A0 += runtime_mem_cycles(_ea_080387A0, 4u, 0u);
    uint32_t _v_080387A0;
    { uint32_t _w = bus_read_u32(_ea_080387A0 & ~3u); uint32_t _rot = (_ea_080387A0 & 3u) * 8u; _v_080387A0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_080387A0;
    g_cpu.R[15] = 0x080387A4u;
    runtime_tick(_cyc_080387A0);
    /* 080387A4  080387a4 A mov r2,#0x0 */
    g_cpu.R[15] = 0x080387A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387A4 = 1u;
    _cyc_080387A4 = 1u;
    uint32_t _r_080387A4;
    _r_080387A4 = 0x00000000u;
    g_cpu.R[2] = _r_080387A4;
    g_cpu.R[15] = 0x080387A8u;
    runtime_tick(_cyc_080387A4);
    /* 080387A8  080387a8 A add r3,r3,#0x2 */
    g_cpu.R[15] = 0x080387A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387A8 = 1u;
    _cyc_080387A8 = 1u;
    uint32_t _rn_080387A8 = g_cpu.R[3];
    uint32_t _r_080387A8;
    _r_080387A8 = _rn_080387A8 + 0x00000002u;
    g_cpu.R[3] = _r_080387A8;
    g_cpu.R[15] = 0x080387ACu;
    runtime_tick(_cyc_080387A8);
    /* 080387AC  080387ac A str r3,[r13,#0x4] */
    g_cpu.R[15] = 0x080387ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387AC = 1u;
    _cyc_080387AC = 1u;
    uint32_t _base_080387AC = g_cpu.R[13];
    uint32_t _off_080387AC;
    _off_080387AC = 0x00000004u;
    uint32_t _ea_080387AC = _base_080387AC + _off_080387AC;
    uint32_t _post_080387AC = _base_080387AC + _off_080387AC;
    _cyc_080387AC += runtime_mem_cycles(_ea_080387AC, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080387ACu, _ea_080387AC & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_080387AC & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x080387B0u;
    runtime_tick(_cyc_080387AC);
    /* fall-through to 0x080387B0 */
    g_cpu.R[15] = 0x080387B0u;
    runtime_dispatch(0x080387B0u);
    return;
}


/* 0x08038854  mode=arm  end=0x080388A4  branches=6  indirect */
void gf_memory_transfer_arm_at_08038854(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038854u);
    /* 08038854  08038854 A cmps r12,#0x0 */
    g_cpu.R[15] = 0x08038854u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038854 = 1u;
    _cyc_08038854 = 1u;
    uint32_t _rn_08038854 = g_cpu.R[12];
    uint32_t _r_08038854;
    _r_08038854 = _rn_08038854 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038854, 0x00000000u, _r_08038854);
    g_cpu.R[15] = 0x08038858u;
    runtime_tick(_cyc_08038854);
    /* 08038858  08038858 A bge 0x080388a4 */
    g_cpu.R[15] = 0x08038858u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038858 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08038858 = 3u;
        g_cpu.R[15] = 0x080388A4u;
        runtime_tick(_cyc_08038858);
        gf_indirect_control_flow_arm_at_080388A4();
        return;
    }
    g_cpu.R[15] = 0x0803885Cu;
    runtime_tick(_cyc_08038858);
    /* 0803885C  0803885c A add r1,r9,r14 */
    g_cpu.R[15] = 0x0803885Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803885C = 1u;
    _cyc_0803885C = 1u;
    uint32_t _rm_0803885C = g_cpu.R[14];
    uint32_t _op2_0803885C;
    uint32_t _co_0803885C;
    _op2_0803885C = _rm_0803885C;
    _co_0803885C = cpsr_c();
    uint32_t _rn_0803885C = g_cpu.R[9];
    uint32_t _r_0803885C;
    _r_0803885C = _rn_0803885C + _op2_0803885C;
    g_cpu.R[1] = _r_0803885C;
    g_cpu.R[15] = 0x08038860u;
    runtime_tick(_cyc_0803885C);
    /* 08038860  08038860 A ldr r0,[r13,#0x1c] */
    g_cpu.R[15] = 0x08038860u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038860 = 1u;
    _cyc_08038860 = 2u;
    uint32_t _base_08038860 = g_cpu.R[13];
    uint32_t _off_08038860;
    _off_08038860 = 0x0000001Cu;
    uint32_t _ea_08038860 = _base_08038860 + _off_08038860;
    uint32_t _post_08038860 = _base_08038860 + _off_08038860;
    _cyc_08038860 += runtime_mem_cycles(_ea_08038860, 4u, 0u);
    uint32_t _v_08038860;
    { uint32_t _w = bus_read_u32(_ea_08038860 & ~3u); uint32_t _rot = (_ea_08038860 & 3u) * 8u; _v_08038860 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038860;
    g_cpu.R[15] = 0x08038864u;
    runtime_tick(_cyc_08038860);
    /* 08038864  08038864 A mov r2,r1,lsr #3 */
    g_cpu.R[15] = 0x08038864u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038864 = 1u;
    _cyc_08038864 = 1u;
    uint32_t _rm_08038864 = g_cpu.R[1];
    uint32_t _op2_08038864;
    uint32_t _co_08038864;
    _op2_08038864 = _rm_08038864 >> 3;
    _co_08038864 = (_rm_08038864 >> 2) & 1u;
    uint32_t _r_08038864;
    _r_08038864 = _op2_08038864;
    g_cpu.R[2] = _r_08038864;
    g_cpu.R[15] = 0x08038868u;
    runtime_tick(_cyc_08038864);
    /* 08038868  08038868 A sub r3,r0,#0x2 */
    g_cpu.R[15] = 0x08038868u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038868 = 1u;
    _cyc_08038868 = 1u;
    uint32_t _rn_08038868 = g_cpu.R[0];
    uint32_t _r_08038868;
    _r_08038868 = _rn_08038868 - 0x00000002u;
    g_cpu.R[3] = _r_08038868;
    g_cpu.R[15] = 0x0803886Cu;
    runtime_tick(_cyc_08038868);
    /* 0803886C  0803886c A mla r0,r3,r2,r10 */
    g_cpu.R[15] = 0x0803886Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803886C = 1u;
    _cyc_0803886C = 1u;
    _cyc_0803886C += runtime_mul_cycles(g_cpu.R[2], 1u, 1u);
    uint32_t _r_0803886C = g_cpu.R[3] * g_cpu.R[2] + g_cpu.R[10];
    g_cpu.R[0] = _r_0803886C;
    g_cpu.R[15] = 0x08038870u;
    runtime_tick(_cyc_0803886C);
    /* 08038870  08038870 A and r3,r1,#0x7 */
    g_cpu.R[15] = 0x08038870u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038870 = 1u;
    _cyc_08038870 = 1u;
    uint32_t _rn_08038870 = g_cpu.R[1];
    uint32_t _r_08038870;
    _r_08038870 = _rn_08038870 & 0x00000007u;
    g_cpu.R[3] = _r_08038870;
    g_cpu.R[15] = 0x08038874u;
    runtime_tick(_cyc_08038870);
    /* 08038874  08038874 A orr r3,r8,r3,lsr #2 */
    g_cpu.R[15] = 0x08038874u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038874 = 1u;
    _cyc_08038874 = 1u;
    uint32_t _rm_08038874 = g_cpu.R[3];
    uint32_t _op2_08038874;
    uint32_t _co_08038874;
    _op2_08038874 = _rm_08038874 >> 2;
    _co_08038874 = (_rm_08038874 >> 1) & 1u;
    uint32_t _rn_08038874 = g_cpu.R[8];
    uint32_t _r_08038874;
    _r_08038874 = _rn_08038874 | _op2_08038874;
    g_cpu.R[3] = _r_08038874;
    g_cpu.R[15] = 0x08038878u;
    runtime_tick(_cyc_08038874);
    /* 08038878  08038878 A and r1,r1,#0x3 */
    g_cpu.R[15] = 0x08038878u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038878 = 1u;
    _cyc_08038878 = 1u;
    uint32_t _rn_08038878 = g_cpu.R[1];
    uint32_t _r_08038878;
    _r_08038878 = _rn_08038878 & 0x00000003u;
    g_cpu.R[1] = _r_08038878;
    g_cpu.R[15] = 0x0803887Cu;
    runtime_tick(_cyc_08038878);
    /* 0803887C  0803887c A mov r1,r1,lsl #2 */
    g_cpu.R[15] = 0x0803887Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803887C = 1u;
    _cyc_0803887C = 1u;
    uint32_t _rm_0803887C = g_cpu.R[1];
    uint32_t _op2_0803887C;
    uint32_t _co_0803887C;
    _op2_0803887C = _rm_0803887C << 2;
    _co_0803887C = (_rm_0803887C >> 30) & 1u;
    uint32_t _r_0803887C;
    _r_0803887C = _op2_0803887C;
    g_cpu.R[1] = _r_0803887C;
    g_cpu.R[15] = 0x08038880u;
    runtime_tick(_cyc_0803887C);
    /* 08038880  08038880 A add r0,r6,r0,lsl #5 */
    g_cpu.R[15] = 0x08038880u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038880 = 1u;
    _cyc_08038880 = 1u;
    uint32_t _rm_08038880 = g_cpu.R[0];
    uint32_t _op2_08038880;
    uint32_t _co_08038880;
    _op2_08038880 = _rm_08038880 << 5;
    _co_08038880 = (_rm_08038880 >> 27) & 1u;
    uint32_t _rn_08038880 = g_cpu.R[6];
    uint32_t _r_08038880;
    _r_08038880 = _rn_08038880 + _op2_08038880;
    g_cpu.R[0] = _r_08038880;
    g_cpu.R[15] = 0x08038884u;
    runtime_tick(_cyc_08038880);
    /* 08038884  08038884 A orr r0,r0,r3,lsl #1 */
    g_cpu.R[15] = 0x08038884u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038884 = 1u;
    _cyc_08038884 = 1u;
    uint32_t _rm_08038884 = g_cpu.R[3];
    uint32_t _op2_08038884;
    uint32_t _co_08038884;
    _op2_08038884 = _rm_08038884 << 1;
    _co_08038884 = (_rm_08038884 >> 31) & 1u;
    uint32_t _rn_08038884 = g_cpu.R[0];
    uint32_t _r_08038884;
    _r_08038884 = _rn_08038884 | _op2_08038884;
    g_cpu.R[0] = _r_08038884;
    g_cpu.R[15] = 0x08038888u;
    runtime_tick(_cyc_08038884);
    /* 08038888  08038888 A mov r3,#0xf */
    g_cpu.R[15] = 0x08038888u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038888 = 1u;
    _cyc_08038888 = 1u;
    uint32_t _r_08038888;
    _r_08038888 = 0x0000000Fu;
    g_cpu.R[3] = _r_08038888;
    g_cpu.R[15] = 0x0803888Cu;
    runtime_tick(_cyc_08038888);
    /* 0803888C  0803888c A ldrh r2,[r0] */
    g_cpu.R[15] = 0x0803888Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803888C = 1u;
    _cyc_0803888C = 2u;
    uint32_t _base_0803888C = g_cpu.R[0];
    uint32_t _off_0803888C;
    _off_0803888C = 0x00000000u;
    uint32_t _ea_0803888C = _base_0803888C + _off_0803888C;
    uint32_t _post_0803888C = _base_0803888C + _off_0803888C;
    _cyc_0803888C += runtime_mem_cycles(_ea_0803888C, 2u, 0u);
    uint32_t _v_0803888C;
    { uint32_t _h = bus_read_u16(_ea_0803888C & ~1u); if (_ea_0803888C & 1u) _v_0803888C = ((_h >> 8) | (_h << 24)); else _v_0803888C = _h; }
    g_cpu.R[2] = _v_0803888C;
    g_cpu.R[15] = 0x08038890u;
    runtime_tick(_cyc_0803888C);
    /* 08038890  08038890 A mov r3,r3,lsl r1 */
    g_cpu.R[15] = 0x08038890u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038890 = 1u;
    _cyc_08038890 = 2u;
    uint32_t _rm_08038890 = g_cpu.R[3];
    uint32_t _op2_08038890;
    uint32_t _co_08038890;
    uint32_t _cnt_08038890 = (g_cpu.R[1]) & 0xFFu;
    if (_cnt_08038890 == 0)      { _op2_08038890 = _rm_08038890; _co_08038890 = cpsr_c(); }
    else if (_cnt_08038890 < 32) { _op2_08038890 = _rm_08038890 << _cnt_08038890; _co_08038890 = (_rm_08038890 >> (32u - _cnt_08038890)) & 1u; }
    else if (_cnt_08038890 == 32){ _op2_08038890 = 0u; _co_08038890 = _rm_08038890 & 1u; }
    else                                { _op2_08038890 = 0u; _co_08038890 = 0u; }
    uint32_t _r_08038890;
    _r_08038890 = _op2_08038890;
    g_cpu.R[3] = _r_08038890;
    g_cpu.R[15] = 0x08038894u;
    runtime_tick(_cyc_08038890);
    /* 08038894  08038894 A bic r2,r2,r3 */
    g_cpu.R[15] = 0x08038894u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038894 = 1u;
    _cyc_08038894 = 1u;
    uint32_t _rm_08038894 = g_cpu.R[3];
    uint32_t _op2_08038894;
    uint32_t _co_08038894;
    _op2_08038894 = _rm_08038894;
    _co_08038894 = cpsr_c();
    uint32_t _rn_08038894 = g_cpu.R[2];
    uint32_t _r_08038894;
    _r_08038894 = _rn_08038894 & ~(_op2_08038894);
    g_cpu.R[2] = _r_08038894;
    g_cpu.R[15] = 0x08038898u;
    runtime_tick(_cyc_08038894);
    /* 08038898  08038898 A and r3,r3,r5 */
    g_cpu.R[15] = 0x08038898u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038898 = 1u;
    _cyc_08038898 = 1u;
    uint32_t _rm_08038898 = g_cpu.R[5];
    uint32_t _op2_08038898;
    uint32_t _co_08038898;
    _op2_08038898 = _rm_08038898;
    _co_08038898 = cpsr_c();
    uint32_t _rn_08038898 = g_cpu.R[3];
    uint32_t _r_08038898;
    _r_08038898 = _rn_08038898 & _op2_08038898;
    g_cpu.R[3] = _r_08038898;
    g_cpu.R[15] = 0x0803889Cu;
    runtime_tick(_cyc_08038898);
    /* 0803889C  0803889c A orr r2,r2,r3 */
    g_cpu.R[15] = 0x0803889Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803889C = 1u;
    _cyc_0803889C = 1u;
    uint32_t _rm_0803889C = g_cpu.R[3];
    uint32_t _op2_0803889C;
    uint32_t _co_0803889C;
    _op2_0803889C = _rm_0803889C;
    _co_0803889C = cpsr_c();
    uint32_t _rn_0803889C = g_cpu.R[2];
    uint32_t _r_0803889C;
    _r_0803889C = _rn_0803889C | _op2_0803889C;
    g_cpu.R[2] = _r_0803889C;
    g_cpu.R[15] = 0x080388A0u;
    runtime_tick(_cyc_0803889C);
    /* 080388A0  080388a0 A strh r2,[r0] */
    g_cpu.R[15] = 0x080388A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388A0 = 1u;
    _cyc_080388A0 = 1u;
    uint32_t _base_080388A0 = g_cpu.R[0];
    uint32_t _off_080388A0;
    _off_080388A0 = 0x00000000u;
    uint32_t _ea_080388A0 = _base_080388A0 + _off_080388A0;
    uint32_t _post_080388A0 = _base_080388A0 + _off_080388A0;
    _cyc_080388A0 += runtime_mem_cycles(_ea_080388A0, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080388A0u, _ea_080388A0 & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080388A0 & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x080388A4u;
    runtime_tick(_cyc_080388A0);
    /* fall-through to 0x080388A4 */
    g_cpu.R[15] = 0x080388A4u;
    runtime_dispatch(0x080388A4u);
    return;
}


/* 0x080388B8  mode=arm  end=0x080388E0  branches=3  indirect */
void gf_memory_transfer_arm_at_080388B8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080388B8u);
    /* 080388B8  080388b8 A mov r1,r4 */
    g_cpu.R[15] = 0x080388B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388B8 = 1u;
    _cyc_080388B8 = 1u;
    uint32_t _rm_080388B8 = g_cpu.R[4];
    uint32_t _op2_080388B8;
    uint32_t _co_080388B8;
    _op2_080388B8 = _rm_080388B8;
    _co_080388B8 = cpsr_c();
    uint32_t _r_080388B8;
    _r_080388B8 = _op2_080388B8;
    g_cpu.R[1] = _r_080388B8;
    g_cpu.R[15] = 0x080388BCu;
    runtime_tick(_cyc_080388B8);
    /* 080388BC  080388bc A cmps r4,#0xb */
    g_cpu.R[15] = 0x080388BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388BC = 1u;
    _cyc_080388BC = 1u;
    uint32_t _rn_080388BC = g_cpu.R[4];
    uint32_t _r_080388BC;
    _r_080388BC = _rn_080388BC - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_080388BC, 0x0000000Bu, _r_080388BC);
    g_cpu.R[15] = 0x080388C0u;
    runtime_tick(_cyc_080388BC);
    /* 080388C0  080388c0 A bhi 0x080388e0 */
    g_cpu.R[15] = 0x080388C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388C0 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_080388C0 = 3u;
        g_cpu.R[15] = 0x080388E0u;
        runtime_tick(_cyc_080388C0);
        gf_memory_reads_arm_at_080388E0();
        return;
    }
    g_cpu.R[15] = 0x080388C4u;
    runtime_tick(_cyc_080388C0);
    /* 080388C4  080388c4 A ldr r2,[r13,#0x8] */
    g_cpu.R[15] = 0x080388C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388C4 = 1u;
    _cyc_080388C4 = 2u;
    uint32_t _base_080388C4 = g_cpu.R[13];
    uint32_t _off_080388C4;
    _off_080388C4 = 0x00000008u;
    uint32_t _ea_080388C4 = _base_080388C4 + _off_080388C4;
    uint32_t _post_080388C4 = _base_080388C4 + _off_080388C4;
    _cyc_080388C4 += runtime_mem_cycles(_ea_080388C4, 4u, 0u);
    uint32_t _v_080388C4;
    { uint32_t _w = bus_read_u32(_ea_080388C4 & ~3u); uint32_t _rot = (_ea_080388C4 & 3u) * 8u; _v_080388C4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080388C4;
    g_cpu.R[15] = 0x080388C8u;
    runtime_tick(_cyc_080388C4);
    /* 080388C8  080388c8 A add r3,r7,r4 */
    g_cpu.R[15] = 0x080388C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388C8 = 1u;
    _cyc_080388C8 = 1u;
    uint32_t _rm_080388C8 = g_cpu.R[4];
    uint32_t _op2_080388C8;
    uint32_t _co_080388C8;
    _op2_080388C8 = _rm_080388C8;
    _co_080388C8 = cpsr_c();
    uint32_t _rn_080388C8 = g_cpu.R[7];
    uint32_t _r_080388C8;
    _r_080388C8 = _rn_080388C8 + _op2_080388C8;
    g_cpu.R[3] = _r_080388C8;
    g_cpu.R[15] = 0x080388CCu;
    runtime_tick(_cyc_080388C8);
    /* 080388CC  080388cc A ldrh r12,[r2],#0x2 */
    g_cpu.R[15] = 0x080388CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388CC = 1u;
    _cyc_080388CC = 2u;
    uint32_t _base_080388CC = g_cpu.R[2];
    uint32_t _off_080388CC;
    _off_080388CC = 0x00000002u;
    uint32_t _ea_080388CC = _base_080388CC;
    uint32_t _post_080388CC = _base_080388CC + _off_080388CC;
    _cyc_080388CC += runtime_mem_cycles(_ea_080388CC, 2u, 0u);
    uint32_t _v_080388CC;
    { uint32_t _h = bus_read_u16(_ea_080388CC & ~1u); if (_ea_080388CC & 1u) _v_080388CC = ((_h >> 8) | (_h << 24)); else _v_080388CC = _h; }
    if (2u != 12u) g_cpu.R[2] = _post_080388CC;
    g_cpu.R[12] = _v_080388CC;
    g_cpu.R[15] = 0x080388D0u;
    runtime_tick(_cyc_080388CC);
    /* 080388D0  080388d0 A cmps r3,#0x1f */
    g_cpu.R[15] = 0x080388D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388D0 = 1u;
    _cyc_080388D0 = 1u;
    uint32_t _rn_080388D0 = g_cpu.R[3];
    uint32_t _r_080388D0;
    _r_080388D0 = _rn_080388D0 - 0x0000001Fu;
    arm_set_nzcv_sub(_rn_080388D0, 0x0000001Fu, _r_080388D0);
    g_cpu.R[15] = 0x080388D4u;
    runtime_tick(_cyc_080388D0);
    /* 080388D4  080388d4 A mov r12,r12,lsl #16 */
    g_cpu.R[15] = 0x080388D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388D4 = 1u;
    _cyc_080388D4 = 1u;
    uint32_t _rm_080388D4 = g_cpu.R[12];
    uint32_t _op2_080388D4;
    uint32_t _co_080388D4;
    _op2_080388D4 = _rm_080388D4 << 16;
    _co_080388D4 = (_rm_080388D4 >> 16) & 1u;
    uint32_t _r_080388D4;
    _r_080388D4 = _op2_080388D4;
    g_cpu.R[12] = _r_080388D4;
    g_cpu.R[15] = 0x080388D8u;
    runtime_tick(_cyc_080388D4);
    /* 080388D8  080388d8 A str r2,[r13,#0x8] */
    g_cpu.R[15] = 0x080388D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388D8 = 1u;
    _cyc_080388D8 = 1u;
    uint32_t _base_080388D8 = g_cpu.R[13];
    uint32_t _off_080388D8;
    _off_080388D8 = 0x00000008u;
    uint32_t _ea_080388D8 = _base_080388D8 + _off_080388D8;
    uint32_t _post_080388D8 = _base_080388D8 + _off_080388D8;
    _cyc_080388D8 += runtime_mem_cycles(_ea_080388D8, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080388D8u, _ea_080388D8 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_080388D8 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x080388DCu;
    runtime_tick(_cyc_080388D8);
    /* 080388DC  080388dc A bls 0x0803883c */
    g_cpu.R[15] = 0x080388DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388DC = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_080388DC = 3u;
        g_cpu.R[15] = 0x0803883Cu;
        runtime_tick(_cyc_080388DC);
        gf_indirect_control_flow_arm_at_0803883C();
        return;
    }
    g_cpu.R[15] = 0x080388E0u;
    runtime_tick(_cyc_080388DC);
    /* fall-through to 0x080388E0 */
    g_cpu.R[15] = 0x080388E0u;
    runtime_dispatch(0x080388E0u);
    return;
}


/* 0x08038AA4  mode=arm  end=0x08038B14  branches=2  indirect */
void gf_memory_transfer_arm_at_08038AA4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038AA4u);
    /* 08038AA4  08038aa4 A add r1,r1,#0x8 */
    g_cpu.R[15] = 0x08038AA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AA4 = 1u;
    _cyc_08038AA4 = 1u;
    uint32_t _rn_08038AA4 = g_cpu.R[1];
    uint32_t _r_08038AA4;
    _r_08038AA4 = _rn_08038AA4 + 0x00000008u;
    g_cpu.R[1] = _r_08038AA4;
    g_cpu.R[15] = 0x08038AA8u;
    runtime_tick(_cyc_08038AA4);
    /* 08038AA8  08038aa8 A add r6,r6,#0x1 */
    g_cpu.R[15] = 0x08038AA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AA8 = 1u;
    _cyc_08038AA8 = 1u;
    uint32_t _rn_08038AA8 = g_cpu.R[6];
    uint32_t _r_08038AA8;
    _r_08038AA8 = _rn_08038AA8 + 0x00000001u;
    g_cpu.R[6] = _r_08038AA8;
    g_cpu.R[15] = 0x08038AACu;
    runtime_tick(_cyc_08038AA8);
    /* 08038AAC  08038aac A cmps r6,#0x1d */
    g_cpu.R[15] = 0x08038AACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AAC = 1u;
    _cyc_08038AAC = 1u;
    uint32_t _rn_08038AAC = g_cpu.R[6];
    uint32_t _r_08038AAC;
    _r_08038AAC = _rn_08038AAC - 0x0000001Du;
    arm_set_nzcv_sub(_rn_08038AAC, 0x0000001Du, _r_08038AAC);
    g_cpu.R[15] = 0x08038AB0u;
    runtime_tick(_cyc_08038AAC);
    /* 08038AB0  08038ab0 A bls 0x08038938 */
    g_cpu.R[15] = 0x08038AB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AB0 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08038AB0 = 3u;
        g_cpu.R[15] = 0x08038938u;
        runtime_tick(_cyc_08038AB0);
        gf_memory_reads_arm_at_08038938();
        return;
    }
    g_cpu.R[15] = 0x08038AB4u;
    runtime_tick(_cyc_08038AB0);
    /* 08038AB4  08038ab4 A add r3,r4,r8,lsl #8 */
    g_cpu.R[15] = 0x08038AB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AB4 = 1u;
    _cyc_08038AB4 = 1u;
    uint32_t _rm_08038AB4 = g_cpu.R[8];
    uint32_t _op2_08038AB4;
    uint32_t _co_08038AB4;
    _op2_08038AB4 = _rm_08038AB4 << 8;
    _co_08038AB4 = (_rm_08038AB4 >> 24) & 1u;
    uint32_t _rn_08038AB4 = g_cpu.R[4];
    uint32_t _r_08038AB4;
    _r_08038AB4 = _rn_08038AB4 + _op2_08038AB4;
    g_cpu.R[3] = _r_08038AB4;
    g_cpu.R[15] = 0x08038AB8u;
    runtime_tick(_cyc_08038AB4);
    /* 08038AB8  08038ab8 A strh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08038AB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AB8 = 1u;
    _cyc_08038AB8 = 1u;
    uint32_t _base_08038AB8 = g_cpu.R[0];
    uint32_t _off_08038AB8;
    _off_08038AB8 = 0x00000002u;
    uint32_t _ea_08038AB8 = _base_08038AB8;
    uint32_t _post_08038AB8 = _base_08038AB8 + _off_08038AB8;
    _cyc_08038AB8 += runtime_mem_cycles(_ea_08038AB8, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038AB8u, _ea_08038AB8 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038AB8 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[0] = _post_08038AB8;
    g_cpu.R[15] = 0x08038ABCu;
    runtime_tick(_cyc_08038AB8);
    /* 08038ABC  08038abc A add r3,r12,r14,lsl #8 */
    g_cpu.R[15] = 0x08038ABCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ABC = 1u;
    _cyc_08038ABC = 1u;
    uint32_t _rm_08038ABC = g_cpu.R[14];
    uint32_t _op2_08038ABC;
    uint32_t _co_08038ABC;
    _op2_08038ABC = _rm_08038ABC << 8;
    _co_08038ABC = (_rm_08038ABC >> 24) & 1u;
    uint32_t _rn_08038ABC = g_cpu.R[12];
    uint32_t _r_08038ABC;
    _r_08038ABC = _rn_08038ABC + _op2_08038ABC;
    g_cpu.R[3] = _r_08038ABC;
    g_cpu.R[15] = 0x08038AC0u;
    runtime_tick(_cyc_08038ABC);
    /* 08038AC0  08038ac0 A add r0,r0,#0x2 */
    g_cpu.R[15] = 0x08038AC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AC0 = 1u;
    _cyc_08038AC0 = 1u;
    uint32_t _rn_08038AC0 = g_cpu.R[0];
    uint32_t _r_08038AC0;
    _r_08038AC0 = _rn_08038AC0 + 0x00000002u;
    g_cpu.R[0] = _r_08038AC0;
    g_cpu.R[15] = 0x08038AC4u;
    runtime_tick(_cyc_08038AC0);
    /* 08038AC4  08038ac4 A strh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08038AC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AC4 = 1u;
    _cyc_08038AC4 = 1u;
    uint32_t _base_08038AC4 = g_cpu.R[0];
    uint32_t _off_08038AC4;
    _off_08038AC4 = 0x00000002u;
    uint32_t _ea_08038AC4 = _base_08038AC4;
    uint32_t _post_08038AC4 = _base_08038AC4 + _off_08038AC4;
    _cyc_08038AC4 += runtime_mem_cycles(_ea_08038AC4, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038AC4u, _ea_08038AC4 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038AC4 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[0] = _post_08038AC4;
    g_cpu.R[15] = 0x08038AC8u;
    runtime_tick(_cyc_08038AC4);
    /* 08038AC8  08038ac8 A add r0,r0,#0x2 */
    g_cpu.R[15] = 0x08038AC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AC8 = 1u;
    _cyc_08038AC8 = 1u;
    uint32_t _rn_08038AC8 = g_cpu.R[0];
    uint32_t _r_08038AC8;
    _r_08038AC8 = _rn_08038AC8 + 0x00000002u;
    g_cpu.R[0] = _r_08038AC8;
    g_cpu.R[15] = 0x08038ACCu;
    runtime_tick(_cyc_08038AC8);
    /* 08038ACC  08038acc A strh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08038ACCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ACC = 1u;
    _cyc_08038ACC = 1u;
    uint32_t _base_08038ACC = g_cpu.R[0];
    uint32_t _off_08038ACC;
    _off_08038ACC = 0x00000002u;
    uint32_t _ea_08038ACC = _base_08038ACC;
    uint32_t _post_08038ACC = _base_08038ACC + _off_08038ACC;
    _cyc_08038ACC += runtime_mem_cycles(_ea_08038ACC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038ACCu, _ea_08038ACC & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038ACC & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[0] = _post_08038ACC;
    g_cpu.R[15] = 0x08038AD0u;
    runtime_tick(_cyc_08038ACC);
    /* 08038AD0  08038ad0 A add r0,r0,#0x2 */
    g_cpu.R[15] = 0x08038AD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AD0 = 1u;
    _cyc_08038AD0 = 1u;
    uint32_t _rn_08038AD0 = g_cpu.R[0];
    uint32_t _r_08038AD0;
    _r_08038AD0 = _rn_08038AD0 + 0x00000002u;
    g_cpu.R[0] = _r_08038AD0;
    g_cpu.R[15] = 0x08038AD4u;
    runtime_tick(_cyc_08038AD0);
    /* 08038AD4  08038ad4 A strh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08038AD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AD4 = 1u;
    _cyc_08038AD4 = 1u;
    uint32_t _base_08038AD4 = g_cpu.R[0];
    uint32_t _off_08038AD4;
    _off_08038AD4 = 0x00000002u;
    uint32_t _ea_08038AD4 = _base_08038AD4;
    uint32_t _post_08038AD4 = _base_08038AD4 + _off_08038AD4;
    _cyc_08038AD4 += runtime_mem_cycles(_ea_08038AD4, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038AD4u, _ea_08038AD4 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038AD4 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[0] = _post_08038AD4;
    g_cpu.R[15] = 0x08038AD8u;
    runtime_tick(_cyc_08038AD4);
    /* 08038AD8  08038ad8 A add r10,r10,#0x4 */
    g_cpu.R[15] = 0x08038AD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AD8 = 1u;
    _cyc_08038AD8 = 1u;
    uint32_t _rn_08038AD8 = g_cpu.R[10];
    uint32_t _r_08038AD8;
    _r_08038AD8 = _rn_08038AD8 + 0x00000004u;
    g_cpu.R[10] = _r_08038AD8;
    g_cpu.R[15] = 0x08038ADCu;
    runtime_tick(_cyc_08038AD8);
    /* 08038ADC  08038adc A add r0,r0,#0x2 */
    g_cpu.R[15] = 0x08038ADCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ADC = 1u;
    _cyc_08038ADC = 1u;
    uint32_t _rn_08038ADC = g_cpu.R[0];
    uint32_t _r_08038ADC;
    _r_08038ADC = _rn_08038ADC + 0x00000002u;
    g_cpu.R[0] = _r_08038ADC;
    g_cpu.R[15] = 0x08038AE0u;
    runtime_tick(_cyc_08038ADC);
    /* 08038AE0  08038ae0 A strh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08038AE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AE0 = 1u;
    _cyc_08038AE0 = 1u;
    uint32_t _base_08038AE0 = g_cpu.R[0];
    uint32_t _off_08038AE0;
    _off_08038AE0 = 0x00000002u;
    uint32_t _ea_08038AE0 = _base_08038AE0;
    uint32_t _post_08038AE0 = _base_08038AE0 + _off_08038AE0;
    _cyc_08038AE0 += runtime_mem_cycles(_ea_08038AE0, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038AE0u, _ea_08038AE0 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038AE0 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[0] = _post_08038AE0;
    g_cpu.R[15] = 0x08038AE4u;
    runtime_tick(_cyc_08038AE0);
    /* 08038AE4  08038ae4 A mov r1,r9 */
    g_cpu.R[15] = 0x08038AE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AE4 = 1u;
    _cyc_08038AE4 = 1u;
    uint32_t _rm_08038AE4 = g_cpu.R[9];
    uint32_t _op2_08038AE4;
    uint32_t _co_08038AE4;
    _op2_08038AE4 = _rm_08038AE4;
    _co_08038AE4 = cpsr_c();
    uint32_t _r_08038AE4;
    _r_08038AE4 = _op2_08038AE4;
    g_cpu.R[1] = _r_08038AE4;
    g_cpu.R[15] = 0x08038AE8u;
    runtime_tick(_cyc_08038AE4);
    /* 08038AE8  08038ae8 A add r0,r0,#0x2 */
    g_cpu.R[15] = 0x08038AE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AE8 = 1u;
    _cyc_08038AE8 = 1u;
    uint32_t _rn_08038AE8 = g_cpu.R[0];
    uint32_t _r_08038AE8;
    _r_08038AE8 = _rn_08038AE8 + 0x00000002u;
    g_cpu.R[0] = _r_08038AE8;
    g_cpu.R[15] = 0x08038AECu;
    runtime_tick(_cyc_08038AE8);
    /* 08038AEC  08038aec A strh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08038AECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AEC = 1u;
    _cyc_08038AEC = 1u;
    uint32_t _base_08038AEC = g_cpu.R[0];
    uint32_t _off_08038AEC;
    _off_08038AEC = 0x00000002u;
    uint32_t _ea_08038AEC = _base_08038AEC;
    uint32_t _post_08038AEC = _base_08038AEC + _off_08038AEC;
    _cyc_08038AEC += runtime_mem_cycles(_ea_08038AEC, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038AECu, _ea_08038AEC & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038AEC & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[0] = _post_08038AEC;
    g_cpu.R[15] = 0x08038AF0u;
    runtime_tick(_cyc_08038AEC);
    /* 08038AF0  08038af0 A cmps r1,#0x13 */
    g_cpu.R[15] = 0x08038AF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AF0 = 1u;
    _cyc_08038AF0 = 1u;
    uint32_t _rn_08038AF0 = g_cpu.R[1];
    uint32_t _r_08038AF0;
    _r_08038AF0 = _rn_08038AF0 - 0x00000013u;
    arm_set_nzcv_sub(_rn_08038AF0, 0x00000013u, _r_08038AF0);
    g_cpu.R[15] = 0x08038AF4u;
    runtime_tick(_cyc_08038AF0);
    /* 08038AF4  08038af4 A add r0,r0,#0x2 */
    g_cpu.R[15] = 0x08038AF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AF4 = 1u;
    _cyc_08038AF4 = 1u;
    uint32_t _rn_08038AF4 = g_cpu.R[0];
    uint32_t _r_08038AF4;
    _r_08038AF4 = _rn_08038AF4 + 0x00000002u;
    g_cpu.R[0] = _r_08038AF4;
    g_cpu.R[15] = 0x08038AF8u;
    runtime_tick(_cyc_08038AF4);
    /* 08038AF8  08038af8 A strh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08038AF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AF8 = 1u;
    _cyc_08038AF8 = 1u;
    uint32_t _base_08038AF8 = g_cpu.R[0];
    uint32_t _off_08038AF8;
    _off_08038AF8 = 0x00000002u;
    uint32_t _ea_08038AF8 = _base_08038AF8;
    uint32_t _post_08038AF8 = _base_08038AF8 + _off_08038AF8;
    _cyc_08038AF8 += runtime_mem_cycles(_ea_08038AF8, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038AF8u, _ea_08038AF8 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038AF8 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[0] = _post_08038AF8;
    g_cpu.R[15] = 0x08038AFCu;
    runtime_tick(_cyc_08038AF8);
    /* 08038AFC  08038afc A add r3,r2,r7,lsl #8 */
    g_cpu.R[15] = 0x08038AFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038AFC = 1u;
    _cyc_08038AFC = 1u;
    uint32_t _rm_08038AFC = g_cpu.R[7];
    uint32_t _op2_08038AFC;
    uint32_t _co_08038AFC;
    _op2_08038AFC = _rm_08038AFC << 8;
    _co_08038AFC = (_rm_08038AFC >> 24) & 1u;
    uint32_t _rn_08038AFC = g_cpu.R[2];
    uint32_t _r_08038AFC;
    _r_08038AFC = _rn_08038AFC + _op2_08038AFC;
    g_cpu.R[3] = _r_08038AFC;
    g_cpu.R[15] = 0x08038B00u;
    runtime_tick(_cyc_08038AFC);
    /* 08038B00  08038b00 A add r0,r0,#0x2 */
    g_cpu.R[15] = 0x08038B00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B00 = 1u;
    _cyc_08038B00 = 1u;
    uint32_t _rn_08038B00 = g_cpu.R[0];
    uint32_t _r_08038B00;
    _r_08038B00 = _rn_08038B00 + 0x00000002u;
    g_cpu.R[0] = _r_08038B00;
    g_cpu.R[15] = 0x08038B04u;
    runtime_tick(_cyc_08038B00);
    /* 08038B04  08038b04 A strh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08038B04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B04 = 1u;
    _cyc_08038B04 = 1u;
    uint32_t _base_08038B04 = g_cpu.R[0];
    uint32_t _off_08038B04;
    _off_08038B04 = 0x00000002u;
    uint32_t _ea_08038B04 = _base_08038B04;
    uint32_t _post_08038B04 = _base_08038B04 + _off_08038B04;
    _cyc_08038B04 += runtime_mem_cycles(_ea_08038B04, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038B04u, _ea_08038B04 & ~1u, (uint32_t)(g_cpu.R[3] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08038B04 & ~1u, (uint16_t)(g_cpu.R[3] & 0xFFFFu));
    g_cpu.R[0] = _post_08038B04;
    g_cpu.R[15] = 0x08038B08u;
    runtime_tick(_cyc_08038B04);
    /* 08038B08  08038b08 A bls 0x0803890c */
    g_cpu.R[15] = 0x08038B08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B08 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08038B08 = 3u;
        g_cpu.R[15] = 0x0803890Cu;
        runtime_tick(_cyc_08038B08);
        gf_indirect_control_flow_arm_at_0803890C();
        return;
    }
    g_cpu.R[15] = 0x08038B0Cu;
    runtime_tick(_cyc_08038B08);
    /* 08038B0C  08038b0c A ldm r13!,{r5,r6,r7,r8,r9,r10,r14} */
    g_cpu.R[15] = 0x08038B0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B0C = 1u;
    _cyc_08038B0C = 2u;
    uint32_t _b_08038B0C = g_cpu.R[13];
    uint32_t _a_08038B0C = _b_08038B0C;
    uint32_t _fb_08038B0C = _b_08038B0C + 28u;
    _cyc_08038B0C += runtime_mem_cycles(_a_08038B0C & ~3u, 4u, 0u);
    g_cpu.R[5] = bus_read_u32(_a_08038B0C & ~3u);
    _a_08038B0C += 4u;
    _cyc_08038B0C += runtime_mem_cycles(_a_08038B0C & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08038B0C & ~3u);
    _a_08038B0C += 4u;
    _cyc_08038B0C += runtime_mem_cycles(_a_08038B0C & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08038B0C & ~3u);
    _a_08038B0C += 4u;
    _cyc_08038B0C += runtime_mem_cycles(_a_08038B0C & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_08038B0C & ~3u);
    _a_08038B0C += 4u;
    _cyc_08038B0C += runtime_mem_cycles(_a_08038B0C & ~3u, 4u, 1u);
    g_cpu.R[9] = bus_read_u32(_a_08038B0C & ~3u);
    _a_08038B0C += 4u;
    _cyc_08038B0C += runtime_mem_cycles(_a_08038B0C & ~3u, 4u, 1u);
    g_cpu.R[10] = bus_read_u32(_a_08038B0C & ~3u);
    _a_08038B0C += 4u;
    _cyc_08038B0C += runtime_mem_cycles(_a_08038B0C & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_08038B0C & ~3u);
    _a_08038B0C += 4u;
    g_cpu.R[13] = _fb_08038B0C;
    g_cpu.R[15] = 0x08038B10u;
    runtime_tick(_cyc_08038B0C);
    /* 08038B10  08038b10 A bx r14 */
    g_cpu.R[15] = 0x08038B10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B10 = 1u;
    _cyc_08038B10 = 3u;
    uint32_t _bxt_08038B10 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08038B10 & ~1u;
    runtime_tick(_cyc_08038B10);
    if (_bxt_08038B10 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08038B10);
    return;
    g_cpu.R[15] = 0x08038B14u;
    runtime_tick(_cyc_08038B10);
    /* fall-through to 0x08038B14 */
    g_cpu.R[15] = 0x08038B14u;
    runtime_dispatch(0x08038B14u);
    return;
}


/* 0x08118160  mode=arm  end=0x0811817C  branches=12  indirect */
void gf_memory_transfer_arm_at_08118160(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08118160u);
    /* 08118160  08118160 A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x08118160u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118160 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08118160 = 1u;
        uint32_t _rn_08118160 = g_cpu.R[0];
        uint32_t _r_08118160;
        _r_08118160 = _rn_08118160 & 0x01E00000u;
        g_cpu.R[4] = _r_08118160;
    }
    g_cpu.R[15] = 0x08118164u;
    runtime_tick(_cyc_08118160);
    /* 08118164  08118164 A stm r13!,{r5,r6,r7,r8,r9,r10,r11,r14} */
    g_cpu.R[15] = 0x08118164u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118164 = 1u;
    _cyc_08118164 = 1u;
    uint32_t _b_08118164 = g_cpu.R[13];
    uint32_t _a_08118164 = _b_08118164 - 32u;
    uint32_t _fb_08118164 = _b_08118164 - 32u;
    _cyc_08118164 += runtime_mem_cycles(_a_08118164 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118164u, _a_08118164 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08118164 & ~3u, g_cpu.R[5]);
    _a_08118164 += 4u;
    _cyc_08118164 += runtime_mem_cycles(_a_08118164 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118164u, _a_08118164 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08118164 & ~3u, g_cpu.R[6]);
    _a_08118164 += 4u;
    _cyc_08118164 += runtime_mem_cycles(_a_08118164 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118164u, _a_08118164 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08118164 & ~3u, g_cpu.R[7]);
    _a_08118164 += 4u;
    _cyc_08118164 += runtime_mem_cycles(_a_08118164 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118164u, _a_08118164 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_a_08118164 & ~3u, g_cpu.R[8]);
    _a_08118164 += 4u;
    _cyc_08118164 += runtime_mem_cycles(_a_08118164 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118164u, _a_08118164 & ~3u, g_cpu.R[9], 4u);
    bus_write_u32(_a_08118164 & ~3u, g_cpu.R[9]);
    _a_08118164 += 4u;
    _cyc_08118164 += runtime_mem_cycles(_a_08118164 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118164u, _a_08118164 & ~3u, g_cpu.R[10], 4u);
    bus_write_u32(_a_08118164 & ~3u, g_cpu.R[10]);
    _a_08118164 += 4u;
    _cyc_08118164 += runtime_mem_cycles(_a_08118164 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118164u, _a_08118164 & ~3u, g_cpu.R[11], 4u);
    bus_write_u32(_a_08118164 & ~3u, g_cpu.R[11]);
    _a_08118164 += 4u;
    _cyc_08118164 += runtime_mem_cycles(_a_08118164 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118164u, _a_08118164 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08118164 & ~3u, g_cpu.R[14]);
    _a_08118164 += 4u;
    g_cpu.R[13] = _fb_08118164;
    g_cpu.R[15] = 0x08118168u;
    runtime_tick(_cyc_08118164);
    /* 08118168  08118168 A ldr r2,[r15,#0xc4] */
    g_cpu.R[15] = 0x08118168u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118168 = 1u;
    _cyc_08118168 = 2u;
    uint32_t _base_08118168 = 0x08118170u;
    uint32_t _off_08118168;
    _off_08118168 = 0x000000C4u;
    uint32_t _ea_08118168 = _base_08118168 + _off_08118168;
    uint32_t _post_08118168 = _base_08118168 + _off_08118168;
    _cyc_08118168 += runtime_mem_cycles(_ea_08118168, 4u, 0u);
    uint32_t _v_08118168;
    { uint32_t _w = bus_read_u32(_ea_08118168 & ~3u); uint32_t _rot = (_ea_08118168 & 3u) * 8u; _v_08118168 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08118168;
    g_cpu.R[15] = 0x0811816Cu;
    runtime_tick(_cyc_08118168);
    /* 0811816C  0811816c A add r3,r15,#0xf0 */
    g_cpu.R[15] = 0x0811816Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0811816C = 1u;
    _cyc_0811816C = 1u;
    uint32_t _rn_0811816C = 0x08118174u;
    uint32_t _r_0811816C;
    _r_0811816C = _rn_0811816C + 0x000000F0u;
    g_cpu.R[3] = _r_0811816C;
    g_cpu.R[15] = 0x08118170u;
    runtime_tick(_cyc_0811816C);
    /* 08118170  08118170 A sub r2,r3,r2 */
    g_cpu.R[15] = 0x08118170u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118170 = 1u;
    _cyc_08118170 = 1u;
    uint32_t _rm_08118170 = g_cpu.R[2];
    uint32_t _op2_08118170;
    uint32_t _co_08118170;
    _op2_08118170 = _rm_08118170;
    _co_08118170 = cpsr_c();
    uint32_t _rn_08118170 = g_cpu.R[3];
    uint32_t _r_08118170;
    _r_08118170 = _rn_08118170 - _op2_08118170;
    g_cpu.R[2] = _r_08118170;
    g_cpu.R[15] = 0x08118174u;
    runtime_tick(_cyc_08118170);
    /* 08118174  08118174 A add r4,r15,#0xc8 */
    g_cpu.R[15] = 0x08118174u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118174 = 1u;
    _cyc_08118174 = 1u;
    uint32_t _rn_08118174 = 0x0811817Cu;
    uint32_t _r_08118174;
    _r_08118174 = _rn_08118174 + 0x000000C8u;
    g_cpu.R[4] = _r_08118174;
    g_cpu.R[15] = 0x08118178u;
    runtime_tick(_cyc_08118174);
    /* 08118178  08118178 A mov r5,#0x8 */
    g_cpu.R[15] = 0x08118178u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118178 = 1u;
    _cyc_08118178 = 1u;
    uint32_t _r_08118178;
    _r_08118178 = 0x00000008u;
    g_cpu.R[5] = _r_08118178;
    g_cpu.R[15] = 0x0811817Cu;
    runtime_tick(_cyc_08118178);
    /* fall-through to 0x0811817C */
    g_cpu.R[15] = 0x0811817Cu;
    runtime_dispatch(0x0811817Cu);
    return;
}


/* 0x0811817C  mode=arm  end=0x081181A8  branches=12  indirect */
void gf_memory_transfer_arm_at_0811817C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0811817Cu);
L_0811817C:
    /* 0811817C  0811817c A ldr r6,[r3],#0x4 */
    g_cpu.R[15] = 0x0811817Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0811817C = 1u;
    _cyc_0811817C = 2u;
    uint32_t _base_0811817C = g_cpu.R[3];
    uint32_t _off_0811817C;
    _off_0811817C = 0x00000004u;
    uint32_t _ea_0811817C = _base_0811817C;
    uint32_t _post_0811817C = _base_0811817C + _off_0811817C;
    _cyc_0811817C += runtime_mem_cycles(_ea_0811817C, 4u, 0u);
    uint32_t _v_0811817C;
    { uint32_t _w = bus_read_u32(_ea_0811817C & ~3u); uint32_t _rot = (_ea_0811817C & 3u) * 8u; _v_0811817C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    if (3u != 6u) g_cpu.R[3] = _post_0811817C;
    g_cpu.R[6] = _v_0811817C;
    g_cpu.R[15] = 0x08118180u;
    runtime_tick(_cyc_0811817C);
    /* 08118180  08118180 A add r6,r6,r2 */
    g_cpu.R[15] = 0x08118180u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118180 = 1u;
    _cyc_08118180 = 1u;
    uint32_t _rm_08118180 = g_cpu.R[2];
    uint32_t _op2_08118180;
    uint32_t _co_08118180;
    _op2_08118180 = _rm_08118180;
    _co_08118180 = cpsr_c();
    uint32_t _rn_08118180 = g_cpu.R[6];
    uint32_t _r_08118180;
    _r_08118180 = _rn_08118180 + _op2_08118180;
    g_cpu.R[6] = _r_08118180;
    g_cpu.R[15] = 0x08118184u;
    runtime_tick(_cyc_08118180);
    /* 08118184  08118184 A str r6,[r4],#0x4 */
    g_cpu.R[15] = 0x08118184u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118184 = 1u;
    _cyc_08118184 = 1u;
    uint32_t _base_08118184 = g_cpu.R[4];
    uint32_t _off_08118184;
    _off_08118184 = 0x00000004u;
    uint32_t _ea_08118184 = _base_08118184;
    uint32_t _post_08118184 = _base_08118184 + _off_08118184;
    _cyc_08118184 += runtime_mem_cycles(_ea_08118184, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08118184u, _ea_08118184 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_08118184 & ~3u, g_cpu.R[6]);
    g_cpu.R[4] = _post_08118184;
    g_cpu.R[15] = 0x08118188u;
    runtime_tick(_cyc_08118184);
    /* 08118188  08118188 A subs r5,r5,#0x1 */
    g_cpu.R[15] = 0x08118188u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118188 = 1u;
    _cyc_08118188 = 1u;
    uint32_t _rn_08118188 = g_cpu.R[5];
    uint32_t _r_08118188;
    _r_08118188 = _rn_08118188 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08118188, 0x00000001u, _r_08118188);
    g_cpu.R[5] = _r_08118188;
    g_cpu.R[15] = 0x0811818Cu;
    runtime_tick(_cyc_08118188);
    /* 0811818C  0811818c A bne 0x0811817c */
    g_cpu.R[15] = 0x0811818Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0811818C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0811818C = 3u;
        g_cpu.R[15] = 0x0811817Cu;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x0811818Cu, 0x0811817Cu, 0u, 0u);
        runtime_tick(_cyc_0811818C);
        goto L_0811817C;
    }
    g_cpu.R[15] = 0x08118190u;
    runtime_tick(_cyc_0811818C);
    /* 08118190  08118190 A mov r11,#0x7 */
    g_cpu.R[15] = 0x08118190u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118190 = 1u;
    _cyc_08118190 = 1u;
    uint32_t _r_08118190;
    _r_08118190 = 0x00000007u;
    g_cpu.R[11] = _r_08118190;
    g_cpu.R[15] = 0x08118194u;
    runtime_tick(_cyc_08118190);
    /* 08118194  08118194 A ldrh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08118194u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118194 = 1u;
    _cyc_08118194 = 2u;
    uint32_t _base_08118194 = g_cpu.R[0];
    uint32_t _off_08118194;
    _off_08118194 = 0x00000002u;
    uint32_t _ea_08118194 = _base_08118194;
    uint32_t _post_08118194 = _base_08118194 + _off_08118194;
    _cyc_08118194 += runtime_mem_cycles(_ea_08118194, 2u, 0u);
    uint32_t _v_08118194;
    { uint32_t _h = bus_read_u16(_ea_08118194 & ~1u); if (_ea_08118194 & 1u) _v_08118194 = ((_h >> 8) | (_h << 24)); else _v_08118194 = _h; }
    if (0u != 3u) g_cpu.R[0] = _post_08118194;
    g_cpu.R[3] = _v_08118194;
    g_cpu.R[15] = 0x08118198u;
    runtime_tick(_cyc_08118194);
    /* 08118198  08118198 A mov r2,#0x0 */
    g_cpu.R[15] = 0x08118198u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118198 = 1u;
    _cyc_08118198 = 1u;
    uint32_t _r_08118198;
    _r_08118198 = 0x00000000u;
    g_cpu.R[2] = _r_08118198;
    g_cpu.R[15] = 0x0811819Cu;
    runtime_tick(_cyc_08118198);
    /* 0811819C  0811819c A mov r5,#0x0 */
    g_cpu.R[15] = 0x0811819Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0811819C = 1u;
    _cyc_0811819C = 1u;
    uint32_t _r_0811819C;
    _r_0811819C = 0x00000000u;
    g_cpu.R[5] = _r_0811819C;
    g_cpu.R[15] = 0x081181A0u;
    runtime_tick(_cyc_0811819C);
    /* 081181A0  081181a0 A mov r9,#0xf */
    g_cpu.R[15] = 0x081181A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181A0 = 1u;
    _cyc_081181A0 = 1u;
    uint32_t _r_081181A0;
    _r_081181A0 = 0x0000000Fu;
    g_cpu.R[9] = _r_081181A0;
    g_cpu.R[15] = 0x081181A4u;
    runtime_tick(_cyc_081181A0);
    /* 081181A4  081181a4 A ldr r10,[r15,#0x84] */
    g_cpu.R[15] = 0x081181A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181A4 = 1u;
    _cyc_081181A4 = 2u;
    uint32_t _base_081181A4 = 0x081181ACu;
    uint32_t _off_081181A4;
    _off_081181A4 = 0x00000084u;
    uint32_t _ea_081181A4 = _base_081181A4 + _off_081181A4;
    uint32_t _post_081181A4 = _base_081181A4 + _off_081181A4;
    _cyc_081181A4 += runtime_mem_cycles(_ea_081181A4, 4u, 0u);
    uint32_t _v_081181A4;
    { uint32_t _w = bus_read_u32(_ea_081181A4 & ~3u); uint32_t _rot = (_ea_081181A4 & 3u) * 8u; _v_081181A4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[10] = _v_081181A4;
    g_cpu.R[15] = 0x081181A8u;
    runtime_tick(_cyc_081181A4);
    /* fall-through to 0x081181A8 */
    g_cpu.R[15] = 0x081181A8u;
    runtime_dispatch(0x081181A8u);
    return;
}


/* 0x081181B0  mode=arm  end=0x08118230  branches=11  indirect */
void gf_memory_transfer_arm_at_081181B0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081181B0u);
L_081181B0:
    /* 081181B0  081181b0 A bl 0x08118238 */
    g_cpu.R[15] = 0x081181B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181B0 = 1u;
    _cyc_081181B0 = 3u;
    g_cpu.R[14] = 0x081181B4u;
    g_cpu.R[15] = 0x08118238u;
    runtime_call_push_return(0x081181B4u);
    runtime_tick(_cyc_081181B0);
    _cyc_081181B0 = 0u;
    gf_memory_reads_arm_at_08118238();
    if (g_cpu.R[15] != 0x081181B4u) { runtime_call_cancel_return(0x081181B4u); return; }
    g_cpu.R[15] = 0x081181B4u;
    runtime_tick(_cyc_081181B0);
    /* 081181B4  081181b4 A mov r6,r5,lsr #25 */
    g_cpu.R[15] = 0x081181B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181B4 = 1u;
    _cyc_081181B4 = 1u;
    uint32_t _rm_081181B4 = g_cpu.R[5];
    uint32_t _op2_081181B4;
    uint32_t _co_081181B4;
    _op2_081181B4 = _rm_081181B4 >> 25;
    _co_081181B4 = (_rm_081181B4 >> 24) & 1u;
    uint32_t _r_081181B4;
    _r_081181B4 = _op2_081181B4;
    g_cpu.R[6] = _r_081181B4;
    g_cpu.R[15] = 0x081181B8u;
    runtime_tick(_cyc_081181B4);
    /* 081181B8  081181b8 A bl 0x08118238 */
    g_cpu.R[15] = 0x081181B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181B8 = 1u;
    _cyc_081181B8 = 3u;
    g_cpu.R[14] = 0x081181BCu;
    g_cpu.R[15] = 0x08118238u;
    runtime_call_push_return(0x081181BCu);
    runtime_tick(_cyc_081181B8);
    _cyc_081181B8 = 0u;
    gf_memory_reads_arm_at_08118238();
    if (g_cpu.R[15] != 0x081181BCu) { runtime_call_cancel_return(0x081181BCu); return; }
    g_cpu.R[15] = 0x081181BCu;
    runtime_tick(_cyc_081181B8);
    /* 081181BC  081181bc A orr r6,r6,r5,lsr #17 */
    g_cpu.R[15] = 0x081181BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181BC = 1u;
    _cyc_081181BC = 1u;
    uint32_t _rm_081181BC = g_cpu.R[5];
    uint32_t _op2_081181BC;
    uint32_t _co_081181BC;
    _op2_081181BC = _rm_081181BC >> 17;
    _co_081181BC = (_rm_081181BC >> 16) & 1u;
    uint32_t _rn_081181BC = g_cpu.R[6];
    uint32_t _r_081181BC;
    _r_081181BC = _rn_081181BC | _op2_081181BC;
    g_cpu.R[6] = _r_081181BC;
    g_cpu.R[15] = 0x081181C0u;
    runtime_tick(_cyc_081181BC);
    /* 081181C0  081181c0 A bl 0x08118238 */
    g_cpu.R[15] = 0x081181C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181C0 = 1u;
    _cyc_081181C0 = 3u;
    g_cpu.R[14] = 0x081181C4u;
    g_cpu.R[15] = 0x08118238u;
    runtime_call_push_return(0x081181C4u);
    runtime_tick(_cyc_081181C0);
    _cyc_081181C0 = 0u;
    gf_memory_reads_arm_at_08118238();
    if (g_cpu.R[15] != 0x081181C4u) { runtime_call_cancel_return(0x081181C4u); return; }
    g_cpu.R[15] = 0x081181C4u;
    runtime_tick(_cyc_081181C0);
    /* 081181C4  081181c4 A orr r6,r6,r5,lsr #9 */
    g_cpu.R[15] = 0x081181C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181C4 = 1u;
    _cyc_081181C4 = 1u;
    uint32_t _rm_081181C4 = g_cpu.R[5];
    uint32_t _op2_081181C4;
    uint32_t _co_081181C4;
    _op2_081181C4 = _rm_081181C4 >> 9;
    _co_081181C4 = (_rm_081181C4 >> 8) & 1u;
    uint32_t _rn_081181C4 = g_cpu.R[6];
    uint32_t _r_081181C4;
    _r_081181C4 = _rn_081181C4 | _op2_081181C4;
    g_cpu.R[6] = _r_081181C4;
    g_cpu.R[15] = 0x081181C8u;
    runtime_tick(_cyc_081181C4);
    /* 081181C8  081181c8 A bl 0x08118238 */
    g_cpu.R[15] = 0x081181C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181C8 = 1u;
    _cyc_081181C8 = 3u;
    g_cpu.R[14] = 0x081181CCu;
    g_cpu.R[15] = 0x08118238u;
    runtime_call_push_return(0x081181CCu);
    runtime_tick(_cyc_081181C8);
    _cyc_081181C8 = 0u;
    gf_memory_reads_arm_at_08118238();
    if (g_cpu.R[15] != 0x081181CCu) { runtime_call_cancel_return(0x081181CCu); return; }
    g_cpu.R[15] = 0x081181CCu;
    runtime_tick(_cyc_081181C8);
    /* 081181CC  081181cc A orr r6,r6,r5,lsr #1 */
    g_cpu.R[15] = 0x081181CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181CC = 1u;
    _cyc_081181CC = 1u;
    uint32_t _rm_081181CC = g_cpu.R[5];
    uint32_t _op2_081181CC;
    uint32_t _co_081181CC;
    _op2_081181CC = _rm_081181CC >> 1;
    _co_081181CC = (_rm_081181CC >> 0) & 1u;
    uint32_t _rn_081181CC = g_cpu.R[6];
    uint32_t _r_081181CC;
    _r_081181CC = _rn_081181CC | _op2_081181CC;
    g_cpu.R[6] = _r_081181CC;
    g_cpu.R[15] = 0x081181D0u;
    runtime_tick(_cyc_081181CC);
    /* 081181D0  081181d0 A add r6,r6,r10 */
    g_cpu.R[15] = 0x081181D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181D0 = 1u;
    _cyc_081181D0 = 1u;
    uint32_t _rm_081181D0 = g_cpu.R[10];
    uint32_t _op2_081181D0;
    uint32_t _co_081181D0;
    _op2_081181D0 = _rm_081181D0;
    _co_081181D0 = cpsr_c();
    uint32_t _rn_081181D0 = g_cpu.R[6];
    uint32_t _r_081181D0;
    _r_081181D0 = _rn_081181D0 + _op2_081181D0;
    g_cpu.R[6] = _r_081181D0;
    g_cpu.R[15] = 0x081181D4u;
    runtime_tick(_cyc_081181D0);
    /* 081181D4  081181d4 A str r6,[r1],#0x4 */
    g_cpu.R[15] = 0x081181D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181D4 = 1u;
    _cyc_081181D4 = 1u;
    uint32_t _base_081181D4 = g_cpu.R[1];
    uint32_t _off_081181D4;
    _off_081181D4 = 0x00000004u;
    uint32_t _ea_081181D4 = _base_081181D4;
    uint32_t _post_081181D4 = _base_081181D4 + _off_081181D4;
    _cyc_081181D4 += runtime_mem_cycles(_ea_081181D4, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081181D4u, _ea_081181D4 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_081181D4 & ~3u, g_cpu.R[6]);
    g_cpu.R[1] = _post_081181D4;
    g_cpu.R[15] = 0x081181D8u;
    runtime_tick(_cyc_081181D4);
    /* 081181D8  081181d8 A bl 0x08118238 */
    g_cpu.R[15] = 0x081181D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181D8 = 1u;
    _cyc_081181D8 = 3u;
    g_cpu.R[14] = 0x081181DCu;
    g_cpu.R[15] = 0x08118238u;
    runtime_call_push_return(0x081181DCu);
    runtime_tick(_cyc_081181D8);
    _cyc_081181D8 = 0u;
    gf_memory_reads_arm_at_08118238();
    if (g_cpu.R[15] != 0x081181DCu) { runtime_call_cancel_return(0x081181DCu); return; }
    g_cpu.R[15] = 0x081181DCu;
    runtime_tick(_cyc_081181D8);
    /* 081181DC  081181dc A mov r6,r5,lsr #25 */
    g_cpu.R[15] = 0x081181DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181DC = 1u;
    _cyc_081181DC = 1u;
    uint32_t _rm_081181DC = g_cpu.R[5];
    uint32_t _op2_081181DC;
    uint32_t _co_081181DC;
    _op2_081181DC = _rm_081181DC >> 25;
    _co_081181DC = (_rm_081181DC >> 24) & 1u;
    uint32_t _r_081181DC;
    _r_081181DC = _op2_081181DC;
    g_cpu.R[6] = _r_081181DC;
    g_cpu.R[15] = 0x081181E0u;
    runtime_tick(_cyc_081181DC);
    /* 081181E0  081181e0 A bl 0x08118238 */
    g_cpu.R[15] = 0x081181E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181E0 = 1u;
    _cyc_081181E0 = 3u;
    g_cpu.R[14] = 0x081181E4u;
    g_cpu.R[15] = 0x08118238u;
    runtime_call_push_return(0x081181E4u);
    runtime_tick(_cyc_081181E0);
    _cyc_081181E0 = 0u;
    gf_memory_reads_arm_at_08118238();
    if (g_cpu.R[15] != 0x081181E4u) { runtime_call_cancel_return(0x081181E4u); return; }
    g_cpu.R[15] = 0x081181E4u;
    runtime_tick(_cyc_081181E0);
    /* 081181E4  081181e4 A orr r6,r6,r5,lsr #17 */
    g_cpu.R[15] = 0x081181E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181E4 = 1u;
    _cyc_081181E4 = 1u;
    uint32_t _rm_081181E4 = g_cpu.R[5];
    uint32_t _op2_081181E4;
    uint32_t _co_081181E4;
    _op2_081181E4 = _rm_081181E4 >> 17;
    _co_081181E4 = (_rm_081181E4 >> 16) & 1u;
    uint32_t _rn_081181E4 = g_cpu.R[6];
    uint32_t _r_081181E4;
    _r_081181E4 = _rn_081181E4 | _op2_081181E4;
    g_cpu.R[6] = _r_081181E4;
    g_cpu.R[15] = 0x081181E8u;
    runtime_tick(_cyc_081181E4);
    /* 081181E8  081181e8 A bl 0x08118238 */
    g_cpu.R[15] = 0x081181E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181E8 = 1u;
    _cyc_081181E8 = 3u;
    g_cpu.R[14] = 0x081181ECu;
    g_cpu.R[15] = 0x08118238u;
    runtime_call_push_return(0x081181ECu);
    runtime_tick(_cyc_081181E8);
    _cyc_081181E8 = 0u;
    gf_memory_reads_arm_at_08118238();
    if (g_cpu.R[15] != 0x081181ECu) { runtime_call_cancel_return(0x081181ECu); return; }
    g_cpu.R[15] = 0x081181ECu;
    runtime_tick(_cyc_081181E8);
    /* 081181EC  081181ec A orr r6,r6,r5,lsr #9 */
    g_cpu.R[15] = 0x081181ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181EC = 1u;
    _cyc_081181EC = 1u;
    uint32_t _rm_081181EC = g_cpu.R[5];
    uint32_t _op2_081181EC;
    uint32_t _co_081181EC;
    _op2_081181EC = _rm_081181EC >> 9;
    _co_081181EC = (_rm_081181EC >> 8) & 1u;
    uint32_t _rn_081181EC = g_cpu.R[6];
    uint32_t _r_081181EC;
    _r_081181EC = _rn_081181EC | _op2_081181EC;
    g_cpu.R[6] = _r_081181EC;
    g_cpu.R[15] = 0x081181F0u;
    runtime_tick(_cyc_081181EC);
    /* 081181F0  081181f0 A bl 0x08118238 */
    g_cpu.R[15] = 0x081181F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181F0 = 1u;
    _cyc_081181F0 = 3u;
    g_cpu.R[14] = 0x081181F4u;
    g_cpu.R[15] = 0x08118238u;
    runtime_call_push_return(0x081181F4u);
    runtime_tick(_cyc_081181F0);
    _cyc_081181F0 = 0u;
    gf_memory_reads_arm_at_08118238();
    if (g_cpu.R[15] != 0x081181F4u) { runtime_call_cancel_return(0x081181F4u); return; }
    g_cpu.R[15] = 0x081181F4u;
    runtime_tick(_cyc_081181F0);
    /* 081181F4  081181f4 A orr r6,r6,r5,lsr #1 */
    g_cpu.R[15] = 0x081181F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181F4 = 1u;
    _cyc_081181F4 = 1u;
    uint32_t _rm_081181F4 = g_cpu.R[5];
    uint32_t _op2_081181F4;
    uint32_t _co_081181F4;
    _op2_081181F4 = _rm_081181F4 >> 1;
    _co_081181F4 = (_rm_081181F4 >> 0) & 1u;
    uint32_t _rn_081181F4 = g_cpu.R[6];
    uint32_t _r_081181F4;
    _r_081181F4 = _rn_081181F4 | _op2_081181F4;
    g_cpu.R[6] = _r_081181F4;
    g_cpu.R[15] = 0x081181F8u;
    runtime_tick(_cyc_081181F4);
    /* 081181F8  081181f8 A add r6,r6,r10 */
    g_cpu.R[15] = 0x081181F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181F8 = 1u;
    _cyc_081181F8 = 1u;
    uint32_t _rm_081181F8 = g_cpu.R[10];
    uint32_t _op2_081181F8;
    uint32_t _co_081181F8;
    _op2_081181F8 = _rm_081181F8;
    _co_081181F8 = cpsr_c();
    uint32_t _rn_081181F8 = g_cpu.R[6];
    uint32_t _r_081181F8;
    _r_081181F8 = _rn_081181F8 + _op2_081181F8;
    g_cpu.R[6] = _r_081181F8;
    g_cpu.R[15] = 0x081181FCu;
    runtime_tick(_cyc_081181F8);
    /* 081181FC  081181fc A str r6,[r1],#0x3c */
    g_cpu.R[15] = 0x081181FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181FC = 1u;
    _cyc_081181FC = 1u;
    uint32_t _base_081181FC = g_cpu.R[1];
    uint32_t _off_081181FC;
    _off_081181FC = 0x0000003Cu;
    uint32_t _ea_081181FC = _base_081181FC;
    uint32_t _post_081181FC = _base_081181FC + _off_081181FC;
    _cyc_081181FC += runtime_mem_cycles(_ea_081181FC, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081181FCu, _ea_081181FC & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_081181FC & ~3u, g_cpu.R[6]);
    g_cpu.R[1] = _post_081181FC;
    g_cpu.R[15] = 0x08118200u;
    runtime_tick(_cyc_081181FC);
    /* 08118200  08118200 A subs r7,r7,#0x1 */
    g_cpu.R[15] = 0x08118200u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118200 = 1u;
    _cyc_08118200 = 1u;
    uint32_t _rn_08118200 = g_cpu.R[7];
    uint32_t _r_08118200;
    _r_08118200 = _rn_08118200 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08118200, 0x00000001u, _r_08118200);
    g_cpu.R[7] = _r_08118200;
    g_cpu.R[15] = 0x08118204u;
    runtime_tick(_cyc_08118200);
    /* 08118204  08118204 A bne 0x081181b0 */
    g_cpu.R[15] = 0x08118204u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118204 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08118204 = 3u;
        g_cpu.R[15] = 0x081181B0u;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08118204u, 0x081181B0u, 0u, 0u);
        runtime_tick(_cyc_08118204);
        goto L_081181B0;
    }
    g_cpu.R[15] = 0x08118208u;
    runtime_tick(_cyc_08118204);
    /* 08118208  08118208 A sub r1,r1,#0x800 */
    g_cpu.R[15] = 0x08118208u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118208 = 1u;
    _cyc_08118208 = 1u;
    uint32_t _rn_08118208 = g_cpu.R[1];
    uint32_t _r_08118208;
    _r_08118208 = _rn_08118208 - 0x00000800u;
    g_cpu.R[1] = _r_08118208;
    g_cpu.R[15] = 0x0811820Cu;
    runtime_tick(_cyc_08118208);
    /* 0811820C  0811820c A add r1,r1,#0x8 */
    g_cpu.R[15] = 0x0811820Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0811820C = 1u;
    _cyc_0811820C = 1u;
    uint32_t _rn_0811820C = g_cpu.R[1];
    uint32_t _r_0811820C;
    _r_0811820C = _rn_0811820C + 0x00000008u;
    g_cpu.R[1] = _r_0811820C;
    g_cpu.R[15] = 0x08118210u;
    runtime_tick(_cyc_0811820C);
    /* 08118210  08118210 A subs r8,r8,#0x1 */
    g_cpu.R[15] = 0x08118210u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118210 = 1u;
    _cyc_08118210 = 1u;
    uint32_t _rn_08118210 = g_cpu.R[8];
    uint32_t _r_08118210;
    _r_08118210 = _rn_08118210 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08118210, 0x00000001u, _r_08118210);
    g_cpu.R[8] = _r_08118210;
    g_cpu.R[15] = 0x08118214u;
    runtime_tick(_cyc_08118210);
    /* 08118214  08118214 A bne 0x081181ac */
    g_cpu.R[15] = 0x08118214u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118214 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08118214 = 3u;
        g_cpu.R[15] = 0x081181ACu;
        runtime_tick(_cyc_08118214);
        gf_indirect_control_flow_arm_at_081181AC();
        return;
    }
    g_cpu.R[15] = 0x08118218u;
    runtime_tick(_cyc_08118214);
    /* 08118218  08118218 A sub r1,r1,#0x40 */
    g_cpu.R[15] = 0x08118218u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118218 = 1u;
    _cyc_08118218 = 1u;
    uint32_t _rn_08118218 = g_cpu.R[1];
    uint32_t _r_08118218;
    _r_08118218 = _rn_08118218 - 0x00000040u;
    g_cpu.R[1] = _r_08118218;
    g_cpu.R[15] = 0x0811821Cu;
    runtime_tick(_cyc_08118218);
    /* 0811821C  0811821c A add r1,r1,#0x800 */
    g_cpu.R[15] = 0x0811821Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0811821C = 1u;
    _cyc_0811821C = 1u;
    uint32_t _rn_0811821C = g_cpu.R[1];
    uint32_t _r_0811821C;
    _r_0811821C = _rn_0811821C + 0x00000800u;
    g_cpu.R[1] = _r_0811821C;
    g_cpu.R[15] = 0x08118220u;
    runtime_tick(_cyc_0811821C);
    /* 08118220  08118220 A subs r9,r9,#0x1 */
    g_cpu.R[15] = 0x08118220u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118220 = 1u;
    _cyc_08118220 = 1u;
    uint32_t _rn_08118220 = g_cpu.R[9];
    uint32_t _r_08118220;
    _r_08118220 = _rn_08118220 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08118220, 0x00000001u, _r_08118220);
    g_cpu.R[9] = _r_08118220;
    g_cpu.R[15] = 0x08118224u;
    runtime_tick(_cyc_08118220);
    /* 08118224  08118224 A bne 0x081181a8 */
    g_cpu.R[15] = 0x08118224u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118224 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08118224 = 3u;
        g_cpu.R[15] = 0x081181A8u;
        runtime_tick(_cyc_08118224);
        gf_indirect_control_flow_arm_at_081181A8();
        return;
    }
    g_cpu.R[15] = 0x08118228u;
    runtime_tick(_cyc_08118224);
    /* 08118228  08118228 A ldm r13!,{r5,r6,r7,r8,r9,r10,r11,r14} */
    g_cpu.R[15] = 0x08118228u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118228 = 1u;
    _cyc_08118228 = 2u;
    uint32_t _b_08118228 = g_cpu.R[13];
    uint32_t _a_08118228 = _b_08118228;
    uint32_t _fb_08118228 = _b_08118228 + 32u;
    _cyc_08118228 += runtime_mem_cycles(_a_08118228 & ~3u, 4u, 0u);
    g_cpu.R[5] = bus_read_u32(_a_08118228 & ~3u);
    _a_08118228 += 4u;
    _cyc_08118228 += runtime_mem_cycles(_a_08118228 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08118228 & ~3u);
    _a_08118228 += 4u;
    _cyc_08118228 += runtime_mem_cycles(_a_08118228 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08118228 & ~3u);
    _a_08118228 += 4u;
    _cyc_08118228 += runtime_mem_cycles(_a_08118228 & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_08118228 & ~3u);
    _a_08118228 += 4u;
    _cyc_08118228 += runtime_mem_cycles(_a_08118228 & ~3u, 4u, 1u);
    g_cpu.R[9] = bus_read_u32(_a_08118228 & ~3u);
    _a_08118228 += 4u;
    _cyc_08118228 += runtime_mem_cycles(_a_08118228 & ~3u, 4u, 1u);
    g_cpu.R[10] = bus_read_u32(_a_08118228 & ~3u);
    _a_08118228 += 4u;
    _cyc_08118228 += runtime_mem_cycles(_a_08118228 & ~3u, 4u, 1u);
    g_cpu.R[11] = bus_read_u32(_a_08118228 & ~3u);
    _a_08118228 += 4u;
    _cyc_08118228 += runtime_mem_cycles(_a_08118228 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_08118228 & ~3u);
    _a_08118228 += 4u;
    g_cpu.R[13] = _fb_08118228;
    g_cpu.R[15] = 0x0811822Cu;
    runtime_tick(_cyc_08118228);
    /* 0811822C  0811822c A bx r14 */
    g_cpu.R[15] = 0x0811822Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0811822C = 1u;
    _cyc_0811822C = 3u;
    uint32_t _bxt_0811822C = g_cpu.R[14];
    g_cpu.R[15] = _bxt_0811822C & ~1u;
    runtime_tick(_cyc_0811822C);
    if (_bxt_0811822C & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_0811822C);
    return;
    g_cpu.R[15] = 0x08118230u;
    runtime_tick(_cyc_0811822C);
    /* fall-through to 0x08118230 */
    g_cpu.R[15] = 0x08118230u;
    runtime_dispatch(0x08118230u);
    return;
}


/* 0x081972A0  mode=arm  end=0x08197308  branches=9  indirect */
void gf_memory_transfer_arm_at_081972A0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081972A0u);
    /* 081972A0  081972a0 A andeq r4,r0,#0x1e00000 */
    g_cpu.R[15] = 0x081972A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972A0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081972A0 = 1u;
        uint32_t _rn_081972A0 = g_cpu.R[0];
        uint32_t _r_081972A0;
        _r_081972A0 = _rn_081972A0 & 0x01E00000u;
        g_cpu.R[4] = _r_081972A0;
    }
    g_cpu.R[15] = 0x081972A4u;
    runtime_tick(_cyc_081972A0);
    /* 081972A4  081972a4 A stm r13!,{r5,r6,r7,r8,r9,r10,r11,r14} */
    g_cpu.R[15] = 0x081972A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972A4 = 1u;
    _cyc_081972A4 = 1u;
    uint32_t _b_081972A4 = g_cpu.R[13];
    uint32_t _a_081972A4 = _b_081972A4 - 32u;
    uint32_t _fb_081972A4 = _b_081972A4 - 32u;
    _cyc_081972A4 += runtime_mem_cycles(_a_081972A4 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081972A4u, _a_081972A4 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_081972A4 & ~3u, g_cpu.R[5]);
    _a_081972A4 += 4u;
    _cyc_081972A4 += runtime_mem_cycles(_a_081972A4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081972A4u, _a_081972A4 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_081972A4 & ~3u, g_cpu.R[6]);
    _a_081972A4 += 4u;
    _cyc_081972A4 += runtime_mem_cycles(_a_081972A4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081972A4u, _a_081972A4 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_081972A4 & ~3u, g_cpu.R[7]);
    _a_081972A4 += 4u;
    _cyc_081972A4 += runtime_mem_cycles(_a_081972A4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081972A4u, _a_081972A4 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_a_081972A4 & ~3u, g_cpu.R[8]);
    _a_081972A4 += 4u;
    _cyc_081972A4 += runtime_mem_cycles(_a_081972A4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081972A4u, _a_081972A4 & ~3u, g_cpu.R[9], 4u);
    bus_write_u32(_a_081972A4 & ~3u, g_cpu.R[9]);
    _a_081972A4 += 4u;
    _cyc_081972A4 += runtime_mem_cycles(_a_081972A4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081972A4u, _a_081972A4 & ~3u, g_cpu.R[10], 4u);
    bus_write_u32(_a_081972A4 & ~3u, g_cpu.R[10]);
    _a_081972A4 += 4u;
    _cyc_081972A4 += runtime_mem_cycles(_a_081972A4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081972A4u, _a_081972A4 & ~3u, g_cpu.R[11], 4u);
    bus_write_u32(_a_081972A4 & ~3u, g_cpu.R[11]);
    _a_081972A4 += 4u;
    _cyc_081972A4 += runtime_mem_cycles(_a_081972A4 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081972A4u, _a_081972A4 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_081972A4 & ~3u, g_cpu.R[14]);
    _a_081972A4 += 4u;
    g_cpu.R[13] = _fb_081972A4;
    g_cpu.R[15] = 0x081972A8u;
    runtime_tick(_cyc_081972A4);
    /* 081972A8  081972a8 A add r4,r13,#0x20 */
    g_cpu.R[15] = 0x081972A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972A8 = 1u;
    _cyc_081972A8 = 1u;
    uint32_t _rn_081972A8 = g_cpu.R[13];
    uint32_t _r_081972A8;
    _r_081972A8 = _rn_081972A8 + 0x00000020u;
    g_cpu.R[4] = _r_081972A8;
    g_cpu.R[15] = 0x081972ACu;
    runtime_tick(_cyc_081972A8);
    /* 081972AC  081972ac A ldm r4,{r4,r5} */
    g_cpu.R[15] = 0x081972ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972AC = 1u;
    _cyc_081972AC = 2u;
    uint32_t _b_081972AC = g_cpu.R[4];
    uint32_t _a_081972AC = _b_081972AC;
    uint32_t _fb_081972AC = _b_081972AC + 8u;
    _cyc_081972AC += runtime_mem_cycles(_a_081972AC & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_081972AC & ~3u);
    _a_081972AC += 4u;
    _cyc_081972AC += runtime_mem_cycles(_a_081972AC & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_081972AC & ~3u);
    _a_081972AC += 4u;
    g_cpu.R[15] = 0x081972B0u;
    runtime_tick(_cyc_081972AC);
    /* 081972B0  081972b0 A add r6,r1,r4 */
    g_cpu.R[15] = 0x081972B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972B0 = 1u;
    _cyc_081972B0 = 1u;
    uint32_t _rm_081972B0 = g_cpu.R[4];
    uint32_t _op2_081972B0;
    uint32_t _co_081972B0;
    _op2_081972B0 = _rm_081972B0;
    _co_081972B0 = cpsr_c();
    uint32_t _rn_081972B0 = g_cpu.R[1];
    uint32_t _r_081972B0;
    _r_081972B0 = _rn_081972B0 + _op2_081972B0;
    g_cpu.R[6] = _r_081972B0;
    g_cpu.R[15] = 0x081972B4u;
    runtime_tick(_cyc_081972B0);
    /* 081972B4  081972b4 A sub r1,r6,#0x1 */
    g_cpu.R[15] = 0x081972B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972B4 = 1u;
    _cyc_081972B4 = 1u;
    uint32_t _rn_081972B4 = g_cpu.R[6];
    uint32_t _r_081972B4;
    _r_081972B4 = _rn_081972B4 - 0x00000001u;
    g_cpu.R[1] = _r_081972B4;
    g_cpu.R[15] = 0x081972B8u;
    runtime_tick(_cyc_081972B4);
    /* 081972B8  081972b8 A mov r6,r4,lsl #1 */
    g_cpu.R[15] = 0x081972B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972B8 = 1u;
    _cyc_081972B8 = 1u;
    uint32_t _rm_081972B8 = g_cpu.R[4];
    uint32_t _op2_081972B8;
    uint32_t _co_081972B8;
    _op2_081972B8 = _rm_081972B8 << 1;
    _co_081972B8 = (_rm_081972B8 >> 31) & 1u;
    uint32_t _r_081972B8;
    _r_081972B8 = _op2_081972B8;
    g_cpu.R[6] = _r_081972B8;
    g_cpu.R[15] = 0x081972BCu;
    runtime_tick(_cyc_081972B8);
    /* 081972BC  081972bc A sub r6,r5,#0x1 */
    g_cpu.R[15] = 0x081972BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972BC = 1u;
    _cyc_081972BC = 1u;
    uint32_t _rn_081972BC = g_cpu.R[5];
    uint32_t _r_081972BC;
    _r_081972BC = _rn_081972BC - 0x00000001u;
    g_cpu.R[6] = _r_081972BC;
    g_cpu.R[15] = 0x081972C0u;
    runtime_tick(_cyc_081972BC);
    /* 081972C0  081972c0 A mla r1,r6,r4,r1 */
    g_cpu.R[15] = 0x081972C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972C0 = 1u;
    _cyc_081972C0 = 1u;
    _cyc_081972C0 += runtime_mul_cycles(g_cpu.R[4], 1u, 1u);
    uint32_t _r_081972C0 = g_cpu.R[6] * g_cpu.R[4] + g_cpu.R[1];
    g_cpu.R[1] = _r_081972C0;
    g_cpu.R[15] = 0x081972C4u;
    runtime_tick(_cyc_081972C0);
    /* 081972C4  081972c4 A rsb r6,r4,#0x0 */
    g_cpu.R[15] = 0x081972C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972C4 = 1u;
    _cyc_081972C4 = 1u;
    uint32_t _rn_081972C4 = g_cpu.R[4];
    uint32_t _r_081972C4;
    _r_081972C4 = 0x00000000u - _rn_081972C4;
    g_cpu.R[6] = _r_081972C4;
    g_cpu.R[15] = 0x081972C8u;
    runtime_tick(_cyc_081972C4);
    /* 081972C8  081972c8 A mov r6,r6,lsl #1 */
    g_cpu.R[15] = 0x081972C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972C8 = 1u;
    _cyc_081972C8 = 1u;
    uint32_t _rm_081972C8 = g_cpu.R[6];
    uint32_t _op2_081972C8;
    uint32_t _co_081972C8;
    _op2_081972C8 = _rm_081972C8 << 1;
    _co_081972C8 = (_rm_081972C8 >> 31) & 1u;
    uint32_t _r_081972C8;
    _r_081972C8 = _op2_081972C8;
    g_cpu.R[6] = _r_081972C8;
    g_cpu.R[15] = 0x081972CCu;
    runtime_tick(_cyc_081972C8);
    /* 081972CC  081972cc A mla r1,r4,r5,r1 */
    g_cpu.R[15] = 0x081972CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972CC = 1u;
    _cyc_081972CC = 1u;
    _cyc_081972CC += runtime_mul_cycles(g_cpu.R[5], 1u, 1u);
    uint32_t _r_081972CC = g_cpu.R[4] * g_cpu.R[5] + g_cpu.R[1];
    g_cpu.R[1] = _r_081972CC;
    g_cpu.R[15] = 0x081972D0u;
    runtime_tick(_cyc_081972CC);
    /* 081972D0  081972d0 A sub r1,r1,#0x1 */
    g_cpu.R[15] = 0x081972D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972D0 = 1u;
    _cyc_081972D0 = 1u;
    uint32_t _rn_081972D0 = g_cpu.R[1];
    uint32_t _r_081972D0;
    _r_081972D0 = _rn_081972D0 - 0x00000001u;
    g_cpu.R[1] = _r_081972D0;
    g_cpu.R[15] = 0x081972D4u;
    runtime_tick(_cyc_081972D0);
    /* 081972D4  081972d4 A mov r6,#0x0 */
    g_cpu.R[15] = 0x081972D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972D4 = 1u;
    _cyc_081972D4 = 1u;
    uint32_t _r_081972D4;
    _r_081972D4 = 0x00000000u;
    g_cpu.R[6] = _r_081972D4;
    g_cpu.R[15] = 0x081972D8u;
    runtime_tick(_cyc_081972D4);
    /* 081972D8  081972d8 A mov r6,#0x0 */
    g_cpu.R[15] = 0x081972D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972D8 = 1u;
    _cyc_081972D8 = 1u;
    uint32_t _r_081972D8;
    _r_081972D8 = 0x00000000u;
    g_cpu.R[6] = _r_081972D8;
    g_cpu.R[15] = 0x081972DCu;
    runtime_tick(_cyc_081972D8);
    /* 081972DC  081972dc A rsbs r12,r3,#0x0 */
    g_cpu.R[15] = 0x081972DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972DC = 1u;
    _cyc_081972DC = 1u;
    uint32_t _rn_081972DC = g_cpu.R[3];
    uint32_t _r_081972DC;
    _r_081972DC = 0x00000000u - _rn_081972DC;
    arm_set_nzcv_sub(0x00000000u, _rn_081972DC, _r_081972DC);
    g_cpu.R[12] = _r_081972DC;
    g_cpu.R[15] = 0x081972E0u;
    runtime_tick(_cyc_081972DC);
    /* 081972E0  081972e0 A addpl r5,r5,r3 */
    g_cpu.R[15] = 0x081972E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972E0 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_081972E0 = 1u;
        uint32_t _rm_081972E0 = g_cpu.R[3];
        uint32_t _op2_081972E0;
        uint32_t _co_081972E0;
        _op2_081972E0 = _rm_081972E0;
        _co_081972E0 = cpsr_c();
        uint32_t _rn_081972E0 = g_cpu.R[5];
        uint32_t _r_081972E0;
        _r_081972E0 = _rn_081972E0 + _op2_081972E0;
        g_cpu.R[5] = _r_081972E0;
    }
    g_cpu.R[15] = 0x081972E4u;
    runtime_tick(_cyc_081972E0);
    /* 081972E4  081972e4 A mlapl r1,r3,r4,r1 */
    g_cpu.R[15] = 0x081972E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972E4 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_081972E4 = 1u;
        _cyc_081972E4 += runtime_mul_cycles(g_cpu.R[4], 1u, 1u);
        uint32_t _r_081972E4 = g_cpu.R[3] * g_cpu.R[4] + g_cpu.R[1];
        g_cpu.R[1] = _r_081972E4;
    }
    g_cpu.R[15] = 0x081972E8u;
    runtime_tick(_cyc_081972E4);
    /* 081972E8  081972e8 A mlapl r1,r12,r4,r1 */
    g_cpu.R[15] = 0x081972E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972E8 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_081972E8 = 1u;
        _cyc_081972E8 += runtime_mul_cycles(g_cpu.R[4], 1u, 1u);
        uint32_t _r_081972E8 = g_cpu.R[12] * g_cpu.R[4] + g_cpu.R[1];
        g_cpu.R[1] = _r_081972E8;
    }
    g_cpu.R[15] = 0x081972ECu;
    runtime_tick(_cyc_081972E8);
    /* 081972EC  081972ec A movpl r3,#0x0 */
    g_cpu.R[15] = 0x081972ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972EC = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_081972EC = 1u;
        uint32_t _r_081972EC;
        _r_081972EC = 0x00000000u;
        g_cpu.R[3] = _r_081972EC;
    }
    g_cpu.R[15] = 0x081972F0u;
    runtime_tick(_cyc_081972EC);
    /* 081972F0  081972f0 A add r12,r3,r5 */
    g_cpu.R[15] = 0x081972F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972F0 = 1u;
    _cyc_081972F0 = 1u;
    uint32_t _rm_081972F0 = g_cpu.R[5];
    uint32_t _op2_081972F0;
    uint32_t _co_081972F0;
    _op2_081972F0 = _rm_081972F0;
    _co_081972F0 = cpsr_c();
    uint32_t _rn_081972F0 = g_cpu.R[3];
    uint32_t _r_081972F0;
    _r_081972F0 = _rn_081972F0 + _op2_081972F0;
    g_cpu.R[12] = _r_081972F0;
    g_cpu.R[15] = 0x081972F4u;
    runtime_tick(_cyc_081972F0);
    /* 081972F4  081972f4 A cmps r12,#0x0 */
    g_cpu.R[15] = 0x081972F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972F4 = 1u;
    _cyc_081972F4 = 1u;
    uint32_t _rn_081972F4 = g_cpu.R[12];
    uint32_t _r_081972F4;
    _r_081972F4 = _rn_081972F4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_081972F4, 0x00000000u, _r_081972F4);
    g_cpu.R[15] = 0x081972F8u;
    runtime_tick(_cyc_081972F4);
    /* 081972F8  081972f8 A rsbgt r5,r3,#0x0 */
    g_cpu.R[15] = 0x081972F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972F8 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_081972F8 = 1u;
        uint32_t _rn_081972F8 = g_cpu.R[3];
        uint32_t _r_081972F8;
        _r_081972F8 = 0x00000000u - _rn_081972F8;
        g_cpu.R[5] = _r_081972F8;
    }
    g_cpu.R[15] = 0x081972FCu;
    runtime_tick(_cyc_081972F8);
    /* 081972FC  081972fc A cmps r5,#0x0 */
    g_cpu.R[15] = 0x081972FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081972FC = 1u;
    _cyc_081972FC = 1u;
    uint32_t _rn_081972FC = g_cpu.R[5];
    uint32_t _r_081972FC;
    _r_081972FC = _rn_081972FC - 0x00000000u;
    arm_set_nzcv_sub(_rn_081972FC, 0x00000000u, _r_081972FC);
    g_cpu.R[15] = 0x08197300u;
    runtime_tick(_cyc_081972FC);
    /* 08197300  08197300 A ble 0x08197308 */
    g_cpu.R[15] = 0x08197300u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197300 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_08197300 = 3u;
        g_cpu.R[15] = 0x08197308u;
        runtime_tick(_cyc_08197300);
        gf_indirect_control_flow_arm_at_08197308();
        return;
    }
    g_cpu.R[15] = 0x08197304u;
    runtime_tick(_cyc_08197300);
    /* 08197304  08197304 A and r2,r2,#0x0 */
    g_cpu.R[15] = 0x08197304u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197304 = 1u;
    _cyc_08197304 = 1u;
    uint32_t _rn_08197304 = g_cpu.R[2];
    uint32_t _r_08197304;
    _r_08197304 = _rn_08197304 & 0x00000000u;
    g_cpu.R[2] = _r_08197304;
    g_cpu.R[15] = 0x08197308u;
    runtime_tick(_cyc_08197304);
    /* fall-through to 0x08197308 */
    g_cpu.R[15] = 0x08197308u;
    runtime_dispatch(0x08197308u);
    return;
}


/* 0x081C132C  mode=arm  end=0x081C1370  branches=1  indirect */
void gf_memory_transfer_arm_at_081C132C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C132Cu);
L_081C132C:
    /* 081C132C  081c132c A ldrsb r0,[r5,+r6] */
    g_cpu.R[15] = 0x081C132Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C132C = 1u;
    _cyc_081C132C = 2u;
    uint32_t _base_081C132C = g_cpu.R[5];
    uint32_t _off_081C132C;
    uint32_t _morm_081C132C = g_cpu.R[6];
    _off_081C132C = _morm_081C132C;
    uint32_t _ea_081C132C = _base_081C132C + _off_081C132C;
    uint32_t _post_081C132C = _base_081C132C + _off_081C132C;
    _cyc_081C132C += runtime_mem_cycles(_ea_081C132C, 1u, 0u);
    uint32_t _v_081C132C;
    _v_081C132C = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C132C);
    g_cpu.R[0] = _v_081C132C;
    g_cpu.R[15] = 0x081C1330u;
    runtime_tick(_cyc_081C132C);
    /* 081C1330  081c1330 A ldrsb r1,[r5] */
    g_cpu.R[15] = 0x081C1330u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1330 = 1u;
    _cyc_081C1330 = 2u;
    uint32_t _base_081C1330 = g_cpu.R[5];
    uint32_t _off_081C1330;
    _off_081C1330 = 0x00000000u;
    uint32_t _ea_081C1330 = _base_081C1330 + _off_081C1330;
    uint32_t _post_081C1330 = _base_081C1330 + _off_081C1330;
    _cyc_081C1330 += runtime_mem_cycles(_ea_081C1330, 1u, 0u);
    uint32_t _v_081C1330;
    _v_081C1330 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C1330);
    g_cpu.R[1] = _v_081C1330;
    g_cpu.R[15] = 0x081C1334u;
    runtime_tick(_cyc_081C1330);
    /* 081C1334  081c1334 A add r0,r0,r1 */
    g_cpu.R[15] = 0x081C1334u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1334 = 1u;
    _cyc_081C1334 = 1u;
    uint32_t _rm_081C1334 = g_cpu.R[1];
    uint32_t _op2_081C1334;
    uint32_t _co_081C1334;
    _op2_081C1334 = _rm_081C1334;
    _co_081C1334 = cpsr_c();
    uint32_t _rn_081C1334 = g_cpu.R[0];
    uint32_t _r_081C1334;
    _r_081C1334 = _rn_081C1334 + _op2_081C1334;
    g_cpu.R[0] = _r_081C1334;
    g_cpu.R[15] = 0x081C1338u;
    runtime_tick(_cyc_081C1334);
    /* 081C1338  081c1338 A ldrsb r1,[r7,+r6] */
    g_cpu.R[15] = 0x081C1338u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1338 = 1u;
    _cyc_081C1338 = 2u;
    uint32_t _base_081C1338 = g_cpu.R[7];
    uint32_t _off_081C1338;
    uint32_t _morm_081C1338 = g_cpu.R[6];
    _off_081C1338 = _morm_081C1338;
    uint32_t _ea_081C1338 = _base_081C1338 + _off_081C1338;
    uint32_t _post_081C1338 = _base_081C1338 + _off_081C1338;
    _cyc_081C1338 += runtime_mem_cycles(_ea_081C1338, 1u, 0u);
    uint32_t _v_081C1338;
    _v_081C1338 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C1338);
    g_cpu.R[1] = _v_081C1338;
    g_cpu.R[15] = 0x081C133Cu;
    runtime_tick(_cyc_081C1338);
    /* 081C133C  081c133c A add r0,r0,r1 */
    g_cpu.R[15] = 0x081C133Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C133C = 1u;
    _cyc_081C133C = 1u;
    uint32_t _rm_081C133C = g_cpu.R[1];
    uint32_t _op2_081C133C;
    uint32_t _co_081C133C;
    _op2_081C133C = _rm_081C133C;
    _co_081C133C = cpsr_c();
    uint32_t _rn_081C133C = g_cpu.R[0];
    uint32_t _r_081C133C;
    _r_081C133C = _rn_081C133C + _op2_081C133C;
    g_cpu.R[0] = _r_081C133C;
    g_cpu.R[15] = 0x081C1340u;
    runtime_tick(_cyc_081C133C);
    /* 081C1340  081c1340 A ldrsb r1,[r7],#0x1 */
    g_cpu.R[15] = 0x081C1340u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1340 = 1u;
    _cyc_081C1340 = 2u;
    uint32_t _base_081C1340 = g_cpu.R[7];
    uint32_t _off_081C1340;
    _off_081C1340 = 0x00000001u;
    uint32_t _ea_081C1340 = _base_081C1340;
    uint32_t _post_081C1340 = _base_081C1340 + _off_081C1340;
    _cyc_081C1340 += runtime_mem_cycles(_ea_081C1340, 1u, 0u);
    uint32_t _v_081C1340;
    _v_081C1340 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C1340);
    if (7u != 1u) g_cpu.R[7] = _post_081C1340;
    g_cpu.R[1] = _v_081C1340;
    g_cpu.R[15] = 0x081C1344u;
    runtime_tick(_cyc_081C1340);
    /* 081C1344  081c1344 A add r0,r0,r1 */
    g_cpu.R[15] = 0x081C1344u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1344 = 1u;
    _cyc_081C1344 = 1u;
    uint32_t _rm_081C1344 = g_cpu.R[1];
    uint32_t _op2_081C1344;
    uint32_t _co_081C1344;
    _op2_081C1344 = _rm_081C1344;
    _co_081C1344 = cpsr_c();
    uint32_t _rn_081C1344 = g_cpu.R[0];
    uint32_t _r_081C1344;
    _r_081C1344 = _rn_081C1344 + _op2_081C1344;
    g_cpu.R[0] = _r_081C1344;
    g_cpu.R[15] = 0x081C1348u;
    runtime_tick(_cyc_081C1344);
    /* 081C1348  081c1348 A mul r1,r0,r3 */
    g_cpu.R[15] = 0x081C1348u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1348 = 1u;
    _cyc_081C1348 = 1u;
    _cyc_081C1348 += runtime_mul_cycles(g_cpu.R[3], 1u, 0u);
    uint32_t _r_081C1348 = g_cpu.R[0] * g_cpu.R[3];
    g_cpu.R[1] = _r_081C1348;
    g_cpu.R[15] = 0x081C134Cu;
    runtime_tick(_cyc_081C1348);
    /* 081C134C  081c134c A mov r0,r1,asr #9 */
    g_cpu.R[15] = 0x081C134Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C134C = 1u;
    _cyc_081C134C = 1u;
    uint32_t _rm_081C134C = g_cpu.R[1];
    uint32_t _op2_081C134C;
    uint32_t _co_081C134C;
    _op2_081C134C = (uint32_t)((int32_t)_rm_081C134C >> 9);
    _co_081C134C = (_rm_081C134C >> 8) & 1u;
    uint32_t _r_081C134C;
    _r_081C134C = _op2_081C134C;
    g_cpu.R[0] = _r_081C134C;
    g_cpu.R[15] = 0x081C1350u;
    runtime_tick(_cyc_081C134C);
    /* 081C1350  081c1350 A tsts r0,#0x80 */
    g_cpu.R[15] = 0x081C1350u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1350 = 1u;
    _cyc_081C1350 = 1u;
    uint32_t _rn_081C1350 = g_cpu.R[0];
    uint32_t _r_081C1350;
    _r_081C1350 = _rn_081C1350 & 0x00000080u;
    arm_set_nzc_logic(_r_081C1350, cpsr_c());
    g_cpu.R[15] = 0x081C1354u;
    runtime_tick(_cyc_081C1350);
    /* 081C1354  081c1354 A addne r0,r0,#0x1 */
    g_cpu.R[15] = 0x081C1354u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1354 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081C1354 = 1u;
        uint32_t _rn_081C1354 = g_cpu.R[0];
        uint32_t _r_081C1354;
        _r_081C1354 = _rn_081C1354 + 0x00000001u;
        g_cpu.R[0] = _r_081C1354;
    }
    g_cpu.R[15] = 0x081C1358u;
    runtime_tick(_cyc_081C1354);
    /* 081C1358  081c1358 A strb r0,[r5,+r6] */
    g_cpu.R[15] = 0x081C1358u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1358 = 1u;
    _cyc_081C1358 = 1u;
    uint32_t _base_081C1358 = g_cpu.R[5];
    uint32_t _off_081C1358;
    uint32_t _morm_081C1358 = g_cpu.R[6];
    _off_081C1358 = _morm_081C1358;
    uint32_t _ea_081C1358 = _base_081C1358 + _off_081C1358;
    uint32_t _post_081C1358 = _base_081C1358 + _off_081C1358;
    _cyc_081C1358 += runtime_mem_cycles(_ea_081C1358, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C1358u, _ea_081C1358, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_081C1358, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x081C135Cu;
    runtime_tick(_cyc_081C1358);
    /* 081C135C  081c135c A strb r0,[r5],#0x1 */
    g_cpu.R[15] = 0x081C135Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C135C = 1u;
    _cyc_081C135C = 1u;
    uint32_t _base_081C135C = g_cpu.R[5];
    uint32_t _off_081C135C;
    _off_081C135C = 0x00000001u;
    uint32_t _ea_081C135C = _base_081C135C;
    uint32_t _post_081C135C = _base_081C135C + _off_081C135C;
    _cyc_081C135C += runtime_mem_cycles(_ea_081C135C, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C135Cu, _ea_081C135C, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_081C135C, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[5] = _post_081C135C;
    g_cpu.R[15] = 0x081C1360u;
    runtime_tick(_cyc_081C135C);
    /* 081C1360  081c1360 A subs r4,r4,#0x1 */
    g_cpu.R[15] = 0x081C1360u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1360 = 1u;
    _cyc_081C1360 = 1u;
    uint32_t _rn_081C1360 = g_cpu.R[4];
    uint32_t _r_081C1360;
    _r_081C1360 = _rn_081C1360 - 0x00000001u;
    arm_set_nzcv_sub(_rn_081C1360, 0x00000001u, _r_081C1360);
    g_cpu.R[4] = _r_081C1360;
    g_cpu.R[15] = 0x081C1364u;
    runtime_tick(_cyc_081C1360);
    /* 081C1364  081c1364 A bgt 0x081c132c */
    g_cpu.R[15] = 0x081C1364u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1364 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_081C1364 = 3u;
        g_cpu.R[15] = 0x081C132Cu;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x081C1364u, 0x081C132Cu, 0u, 0u);
        runtime_tick(_cyc_081C1364);
        goto L_081C132C;
    }
    g_cpu.R[15] = 0x081C1368u;
    runtime_tick(_cyc_081C1364);
    /* 081C1368  081c1368 A add r0,r15,#0x2f */
    g_cpu.R[15] = 0x081C1368u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1368 = 1u;
    _cyc_081C1368 = 1u;
    uint32_t _rn_081C1368 = 0x081C1370u;
    uint32_t _r_081C1368;
    _r_081C1368 = _rn_081C1368 + 0x0000002Fu;
    g_cpu.R[0] = _r_081C1368;
    g_cpu.R[15] = 0x081C136Cu;
    runtime_tick(_cyc_081C1368);
    /* 081C136C  081c136c A bx r0 */
    g_cpu.R[15] = 0x081C136Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C136C = 1u;
    _cyc_081C136C = 3u;
    uint32_t _bxt_081C136C = g_cpu.R[0];
    g_cpu.R[15] = _bxt_081C136C & ~1u;
    runtime_tick(_cyc_081C136C);
    runtime_dispatch_with_exchange(_bxt_081C136C);
    return;
    g_cpu.R[15] = 0x081C1370u;
    runtime_tick(_cyc_081C136C);
    /* fall-through to 0x081C1370 */
    g_cpu.R[15] = 0x081C1370u;
    runtime_dispatch(0x081C1370u);
    return;
}


/* 0x081C14A8  mode=arm  end=0x081C14C8  branches=10 */
void gf_memory_transfer_arm_at_081C14A8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C14A8u);
    /* 081C14A8  081c14a8 A str r8,[r13] */
    g_cpu.R[15] = 0x081C14A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14A8 = 1u;
    _cyc_081C14A8 = 1u;
    uint32_t _base_081C14A8 = g_cpu.R[13];
    uint32_t _off_081C14A8;
    _off_081C14A8 = 0x00000000u;
    uint32_t _ea_081C14A8 = _base_081C14A8 + _off_081C14A8;
    uint32_t _post_081C14A8 = _base_081C14A8 + _off_081C14A8;
    _cyc_081C14A8 += runtime_mem_cycles(_ea_081C14A8, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C14A8u, _ea_081C14A8 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_ea_081C14A8 & ~3u, g_cpu.R[8]);
    g_cpu.R[15] = 0x081C14ACu;
    runtime_tick(_cyc_081C14A8);
    /* 081C14AC  081c14ac A ldrb r10,[r4,#0xa] */
    g_cpu.R[15] = 0x081C14ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14AC = 1u;
    _cyc_081C14AC = 2u;
    uint32_t _base_081C14AC = g_cpu.R[4];
    uint32_t _off_081C14AC;
    _off_081C14AC = 0x0000000Au;
    uint32_t _ea_081C14AC = _base_081C14AC + _off_081C14AC;
    uint32_t _post_081C14AC = _base_081C14AC + _off_081C14AC;
    _cyc_081C14AC += runtime_mem_cycles(_ea_081C14AC, 1u, 0u);
    uint32_t _v_081C14AC;
    _v_081C14AC = bus_read_u8(_ea_081C14AC);
    g_cpu.R[10] = _v_081C14AC;
    g_cpu.R[15] = 0x081C14B0u;
    runtime_tick(_cyc_081C14AC);
    /* 081C14B0  081c14b0 A ldrb r11,[r4,#0xb] */
    g_cpu.R[15] = 0x081C14B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14B0 = 1u;
    _cyc_081C14B0 = 2u;
    uint32_t _base_081C14B0 = g_cpu.R[4];
    uint32_t _off_081C14B0;
    _off_081C14B0 = 0x0000000Bu;
    uint32_t _ea_081C14B0 = _base_081C14B0 + _off_081C14B0;
    uint32_t _post_081C14B0 = _base_081C14B0 + _off_081C14B0;
    _cyc_081C14B0 += runtime_mem_cycles(_ea_081C14B0, 1u, 0u);
    uint32_t _v_081C14B0;
    _v_081C14B0 = bus_read_u8(_ea_081C14B0);
    g_cpu.R[11] = _v_081C14B0;
    g_cpu.R[15] = 0x081C14B4u;
    runtime_tick(_cyc_081C14B0);
    /* 081C14B4  081c14b4 A mov r10,r10,lsl #16 */
    g_cpu.R[15] = 0x081C14B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14B4 = 1u;
    _cyc_081C14B4 = 1u;
    uint32_t _rm_081C14B4 = g_cpu.R[10];
    uint32_t _op2_081C14B4;
    uint32_t _co_081C14B4;
    _op2_081C14B4 = _rm_081C14B4 << 16;
    _co_081C14B4 = (_rm_081C14B4 >> 16) & 1u;
    uint32_t _r_081C14B4;
    _r_081C14B4 = _op2_081C14B4;
    g_cpu.R[10] = _r_081C14B4;
    g_cpu.R[15] = 0x081C14B8u;
    runtime_tick(_cyc_081C14B4);
    /* 081C14B8  081c14b8 A mov r11,r11,lsl #16 */
    g_cpu.R[15] = 0x081C14B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14B8 = 1u;
    _cyc_081C14B8 = 1u;
    uint32_t _rm_081C14B8 = g_cpu.R[11];
    uint32_t _op2_081C14B8;
    uint32_t _co_081C14B8;
    _op2_081C14B8 = _rm_081C14B8 << 16;
    _co_081C14B8 = (_rm_081C14B8 >> 16) & 1u;
    uint32_t _r_081C14B8;
    _r_081C14B8 = _op2_081C14B8;
    g_cpu.R[11] = _r_081C14B8;
    g_cpu.R[15] = 0x081C14BCu;
    runtime_tick(_cyc_081C14B8);
    /* 081C14BC  081c14bc A ldrb r0,[r4,#0x1] */
    g_cpu.R[15] = 0x081C14BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14BC = 1u;
    _cyc_081C14BC = 2u;
    uint32_t _base_081C14BC = g_cpu.R[4];
    uint32_t _off_081C14BC;
    _off_081C14BC = 0x00000001u;
    uint32_t _ea_081C14BC = _base_081C14BC + _off_081C14BC;
    uint32_t _post_081C14BC = _base_081C14BC + _off_081C14BC;
    _cyc_081C14BC += runtime_mem_cycles(_ea_081C14BC, 1u, 0u);
    uint32_t _v_081C14BC;
    _v_081C14BC = bus_read_u8(_ea_081C14BC);
    g_cpu.R[0] = _v_081C14BC;
    g_cpu.R[15] = 0x081C14C0u;
    runtime_tick(_cyc_081C14BC);
    /* 081C14C0  081c14c0 A tsts r0,#0x8 */
    g_cpu.R[15] = 0x081C14C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14C0 = 1u;
    _cyc_081C14C0 = 1u;
    uint32_t _rn_081C14C0 = g_cpu.R[0];
    uint32_t _r_081C14C0;
    _r_081C14C0 = _rn_081C14C0 & 0x00000008u;
    arm_set_nzc_logic(_r_081C14C0, cpsr_c());
    g_cpu.R[15] = 0x081C14C4u;
    runtime_tick(_cyc_081C14C0);
    /* 081C14C4  081c14c4 A beq 0x081c15e8 */
    g_cpu.R[15] = 0x081C14C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14C4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C14C4 = 3u;
        g_cpu.R[15] = 0x081C15E8u;
        runtime_tick(_cyc_081C14C4);
        gf_memory_transfer_arm_at_081C15E8();
        return;
    }
    g_cpu.R[15] = 0x081C14C8u;
    runtime_tick(_cyc_081C14C4);
    /* fall-through to 0x081C14C8 */
    g_cpu.R[15] = 0x081C14C8u;
    runtime_dispatch(0x081C14C8u);
    return;
}


/* 0x081C14FC  mode=arm  end=0x081C1538  branches=7 */
void gf_memory_transfer_arm_at_081C14FC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C14FCu);
L_081C14FC:
    /* 081C14FC  081c14fc A ldrsb r0,[r3],#0x1 */
    g_cpu.R[15] = 0x081C14FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14FC = 1u;
    _cyc_081C14FC = 2u;
    uint32_t _base_081C14FC = g_cpu.R[3];
    uint32_t _off_081C14FC;
    _off_081C14FC = 0x00000001u;
    uint32_t _ea_081C14FC = _base_081C14FC;
    uint32_t _post_081C14FC = _base_081C14FC + _off_081C14FC;
    _cyc_081C14FC += runtime_mem_cycles(_ea_081C14FC, 1u, 0u);
    uint32_t _v_081C14FC;
    _v_081C14FC = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C14FC);
    if (3u != 0u) g_cpu.R[3] = _post_081C14FC;
    g_cpu.R[0] = _v_081C14FC;
    g_cpu.R[15] = 0x081C1500u;
    runtime_tick(_cyc_081C14FC);
    /* 081C1500  081c1500 A mul r1,r10,r0 */
    g_cpu.R[15] = 0x081C1500u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1500 = 1u;
    _cyc_081C1500 = 1u;
    _cyc_081C1500 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_081C1500 = g_cpu.R[10] * g_cpu.R[0];
    g_cpu.R[1] = _r_081C1500;
    g_cpu.R[15] = 0x081C1504u;
    runtime_tick(_cyc_081C1500);
    /* 081C1504  081c1504 A bic r1,r1,#0xff0000 */
    g_cpu.R[15] = 0x081C1504u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1504 = 1u;
    _cyc_081C1504 = 1u;
    uint32_t _rn_081C1504 = g_cpu.R[1];
    uint32_t _r_081C1504;
    _r_081C1504 = _rn_081C1504 & ~(0x00FF0000u);
    g_cpu.R[1] = _r_081C1504;
    g_cpu.R[15] = 0x081C1508u;
    runtime_tick(_cyc_081C1504);
    /* 081C1508  081c1508 A add r6,r1,r6,ror #8 */
    g_cpu.R[15] = 0x081C1508u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1508 = 1u;
    _cyc_081C1508 = 1u;
    uint32_t _rm_081C1508 = g_cpu.R[6];
    uint32_t _op2_081C1508;
    uint32_t _co_081C1508;
    _op2_081C1508 = (_rm_081C1508 >> 8) | (_rm_081C1508 << 24);
    _co_081C1508 = (_op2_081C1508 >> 31) & 1u;
    uint32_t _rn_081C1508 = g_cpu.R[1];
    uint32_t _r_081C1508;
    _r_081C1508 = _rn_081C1508 + _op2_081C1508;
    g_cpu.R[6] = _r_081C1508;
    g_cpu.R[15] = 0x081C150Cu;
    runtime_tick(_cyc_081C1508);
    /* 081C150C  081c150c A mul r1,r11,r0 */
    g_cpu.R[15] = 0x081C150Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C150C = 1u;
    _cyc_081C150C = 1u;
    _cyc_081C150C += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_081C150C = g_cpu.R[11] * g_cpu.R[0];
    g_cpu.R[1] = _r_081C150C;
    g_cpu.R[15] = 0x081C1510u;
    runtime_tick(_cyc_081C150C);
    /* 081C1510  081c1510 A bic r1,r1,#0xff0000 */
    g_cpu.R[15] = 0x081C1510u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1510 = 1u;
    _cyc_081C1510 = 1u;
    uint32_t _rn_081C1510 = g_cpu.R[1];
    uint32_t _r_081C1510;
    _r_081C1510 = _rn_081C1510 & ~(0x00FF0000u);
    g_cpu.R[1] = _r_081C1510;
    g_cpu.R[15] = 0x081C1514u;
    runtime_tick(_cyc_081C1510);
    /* 081C1514  081c1514 A add r7,r1,r7,ror #8 */
    g_cpu.R[15] = 0x081C1514u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1514 = 1u;
    _cyc_081C1514 = 1u;
    uint32_t _rm_081C1514 = g_cpu.R[7];
    uint32_t _op2_081C1514;
    uint32_t _co_081C1514;
    _op2_081C1514 = (_rm_081C1514 >> 8) | (_rm_081C1514 << 24);
    _co_081C1514 = (_op2_081C1514 >> 31) & 1u;
    uint32_t _rn_081C1514 = g_cpu.R[1];
    uint32_t _r_081C1514;
    _r_081C1514 = _rn_081C1514 + _op2_081C1514;
    g_cpu.R[7] = _r_081C1514;
    g_cpu.R[15] = 0x081C1518u;
    runtime_tick(_cyc_081C1514);
    /* 081C1518  081c1518 A adds r5,r5,#0x40000000 */
    g_cpu.R[15] = 0x081C1518u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1518 = 1u;
    _cyc_081C1518 = 1u;
    uint32_t _rn_081C1518 = g_cpu.R[5];
    uint32_t _r_081C1518;
    _r_081C1518 = _rn_081C1518 + 0x40000000u;
    arm_set_nzcv_add(_rn_081C1518, 0x40000000u, _r_081C1518);
    g_cpu.R[5] = _r_081C1518;
    g_cpu.R[15] = 0x081C151Cu;
    runtime_tick(_cyc_081C1518);
    /* 081C151C  081c151c A bcc 0x081c14fc */
    g_cpu.R[15] = 0x081C151Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C151C = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_081C151C = 3u;
        g_cpu.R[15] = 0x081C14FCu;
        runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x081C151Cu, 0x081C14FCu, 0u, 0u);
        runtime_tick(_cyc_081C151C);
        runtime_idle_backedge(0x081C14FCu);
        goto L_081C14FC;
    }
    g_cpu.R[15] = 0x081C1520u;
    runtime_tick(_cyc_081C151C);
    /* 081C1520  081c1520 A str r7,[r5,#0x630] */
    g_cpu.R[15] = 0x081C1520u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1520 = 1u;
    _cyc_081C1520 = 1u;
    uint32_t _base_081C1520 = g_cpu.R[5];
    uint32_t _off_081C1520;
    _off_081C1520 = 0x00000630u;
    uint32_t _ea_081C1520 = _base_081C1520 + _off_081C1520;
    uint32_t _post_081C1520 = _base_081C1520 + _off_081C1520;
    _cyc_081C1520 += runtime_mem_cycles(_ea_081C1520, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C1520u, _ea_081C1520 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_ea_081C1520 & ~3u, g_cpu.R[7]);
    g_cpu.R[15] = 0x081C1524u;
    runtime_tick(_cyc_081C1520);
    /* 081C1524  081c1524 A str r6,[r5],#0x4 */
    g_cpu.R[15] = 0x081C1524u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1524 = 1u;
    _cyc_081C1524 = 1u;
    uint32_t _base_081C1524 = g_cpu.R[5];
    uint32_t _off_081C1524;
    _off_081C1524 = 0x00000004u;
    uint32_t _ea_081C1524 = _base_081C1524;
    uint32_t _post_081C1524 = _base_081C1524 + _off_081C1524;
    _cyc_081C1524 += runtime_mem_cycles(_ea_081C1524, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C1524u, _ea_081C1524 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_081C1524 & ~3u, g_cpu.R[6]);
    g_cpu.R[5] = _post_081C1524;
    g_cpu.R[15] = 0x081C1528u;
    runtime_tick(_cyc_081C1524);
    /* 081C1528  081c1528 A subs r8,r8,#0x4 */
    g_cpu.R[15] = 0x081C1528u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1528 = 1u;
    _cyc_081C1528 = 1u;
    uint32_t _rn_081C1528 = g_cpu.R[8];
    uint32_t _r_081C1528;
    _r_081C1528 = _rn_081C1528 - 0x00000004u;
    arm_set_nzcv_sub(_rn_081C1528, 0x00000004u, _r_081C1528);
    g_cpu.R[8] = _r_081C1528;
    g_cpu.R[15] = 0x081C152Cu;
    runtime_tick(_cyc_081C1528);
    /* 081C152C  081c152c A bgt 0x081c14f4 */
    g_cpu.R[15] = 0x081C152Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C152C = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_081C152C = 3u;
        g_cpu.R[15] = 0x081C14F4u;
        runtime_tick(_cyc_081C152C);
        gf_memory_reads_arm_at_081C14F4();
        return;
    }
    g_cpu.R[15] = 0x081C1530u;
    runtime_tick(_cyc_081C152C);
    /* 081C1530  081c1530 A adds r8,r8,r14 */
    g_cpu.R[15] = 0x081C1530u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1530 = 1u;
    _cyc_081C1530 = 1u;
    uint32_t _rm_081C1530 = g_cpu.R[14];
    uint32_t _op2_081C1530;
    uint32_t _co_081C1530;
    _op2_081C1530 = _rm_081C1530;
    _co_081C1530 = cpsr_c();
    uint32_t _rn_081C1530 = g_cpu.R[8];
    uint32_t _r_081C1530;
    _r_081C1530 = _rn_081C1530 + _op2_081C1530;
    arm_set_nzcv_add(_rn_081C1530, _op2_081C1530, _r_081C1530);
    g_cpu.R[8] = _r_081C1530;
    g_cpu.R[15] = 0x081C1534u;
    runtime_tick(_cyc_081C1530);
    /* 081C1534  081c1534 A beq 0x081c167c */
    g_cpu.R[15] = 0x081C1534u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1534 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C1534 = 3u;
        g_cpu.R[15] = 0x081C167Cu;
        runtime_tick(_cyc_081C1534);
        gf_memory_writes_arm_at_081C167C();
        return;
    }
    g_cpu.R[15] = 0x081C1538u;
    runtime_tick(_cyc_081C1534);
    /* fall-through to 0x081C1538 */
    g_cpu.R[15] = 0x081C1538u;
    runtime_dispatch(0x081C1538u);
    return;
}


/* 0x081C15E8  mode=arm  end=0x081C1604  branches=4  indirect */
void gf_memory_transfer_arm_at_081C15E8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C15E8u);
    /* 081C15E8  081c15e8 A stm r13!,{r4,r12} */
    g_cpu.R[15] = 0x081C15E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15E8 = 1u;
    _cyc_081C15E8 = 1u;
    uint32_t _b_081C15E8 = g_cpu.R[13];
    uint32_t _a_081C15E8 = _b_081C15E8 - 8u;
    uint32_t _fb_081C15E8 = _b_081C15E8 - 8u;
    _cyc_081C15E8 += runtime_mem_cycles(_a_081C15E8 & ~3u, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C15E8u, _a_081C15E8 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_081C15E8 & ~3u, g_cpu.R[4]);
    _a_081C15E8 += 4u;
    _cyc_081C15E8 += runtime_mem_cycles(_a_081C15E8 & ~3u, 4u, 1u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C15E8u, _a_081C15E8 & ~3u, g_cpu.R[12], 4u);
    bus_write_u32(_a_081C15E8 & ~3u, g_cpu.R[12]);
    _a_081C15E8 += 4u;
    g_cpu.R[13] = _fb_081C15E8;
    g_cpu.R[15] = 0x081C15ECu;
    runtime_tick(_cyc_081C15E8);
    /* 081C15EC  081c15ec A ldr r14,[r4,#0x1c] */
    g_cpu.R[15] = 0x081C15ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15EC = 1u;
    _cyc_081C15EC = 2u;
    uint32_t _base_081C15EC = g_cpu.R[4];
    uint32_t _off_081C15EC;
    _off_081C15EC = 0x0000001Cu;
    uint32_t _ea_081C15EC = _base_081C15EC + _off_081C15EC;
    uint32_t _post_081C15EC = _base_081C15EC + _off_081C15EC;
    _cyc_081C15EC += runtime_mem_cycles(_ea_081C15EC, 4u, 0u);
    uint32_t _v_081C15EC;
    { uint32_t _w = bus_read_u32(_ea_081C15EC & ~3u); uint32_t _rot = (_ea_081C15EC & 3u) * 8u; _v_081C15EC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[14] = _v_081C15EC;
    g_cpu.R[15] = 0x081C15F0u;
    runtime_tick(_cyc_081C15EC);
    /* 081C15F0  081c15f0 A ldr r1,[r4,#0x20] */
    g_cpu.R[15] = 0x081C15F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15F0 = 1u;
    _cyc_081C15F0 = 2u;
    uint32_t _base_081C15F0 = g_cpu.R[4];
    uint32_t _off_081C15F0;
    _off_081C15F0 = 0x00000020u;
    uint32_t _ea_081C15F0 = _base_081C15F0 + _off_081C15F0;
    uint32_t _post_081C15F0 = _base_081C15F0 + _off_081C15F0;
    _cyc_081C15F0 += runtime_mem_cycles(_ea_081C15F0, 4u, 0u);
    uint32_t _v_081C15F0;
    { uint32_t _w = bus_read_u32(_ea_081C15F0 & ~3u); uint32_t _rot = (_ea_081C15F0 & 3u) * 8u; _v_081C15F0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_081C15F0;
    g_cpu.R[15] = 0x081C15F4u;
    runtime_tick(_cyc_081C15F0);
    /* 081C15F4  081c15f4 A mul r4,r12,r1 */
    g_cpu.R[15] = 0x081C15F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15F4 = 1u;
    _cyc_081C15F4 = 1u;
    _cyc_081C15F4 += runtime_mul_cycles(g_cpu.R[1], 1u, 0u);
    uint32_t _r_081C15F4 = g_cpu.R[12] * g_cpu.R[1];
    g_cpu.R[4] = _r_081C15F4;
    g_cpu.R[15] = 0x081C15F8u;
    runtime_tick(_cyc_081C15F4);
    /* 081C15F8  081c15f8 A ldrsb r0,[r3] */
    g_cpu.R[15] = 0x081C15F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15F8 = 1u;
    _cyc_081C15F8 = 2u;
    uint32_t _base_081C15F8 = g_cpu.R[3];
    uint32_t _off_081C15F8;
    _off_081C15F8 = 0x00000000u;
    uint32_t _ea_081C15F8 = _base_081C15F8 + _off_081C15F8;
    uint32_t _post_081C15F8 = _base_081C15F8 + _off_081C15F8;
    _cyc_081C15F8 += runtime_mem_cycles(_ea_081C15F8, 1u, 0u);
    uint32_t _v_081C15F8;
    _v_081C15F8 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C15F8);
    g_cpu.R[0] = _v_081C15F8;
    g_cpu.R[15] = 0x081C15FCu;
    runtime_tick(_cyc_081C15F8);
    /* 081C15FC  081c15fc A ldrsb r1,[r3,#0x1]! */
    g_cpu.R[15] = 0x081C15FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15FC = 1u;
    _cyc_081C15FC = 2u;
    uint32_t _base_081C15FC = g_cpu.R[3];
    uint32_t _off_081C15FC;
    _off_081C15FC = 0x00000001u;
    uint32_t _ea_081C15FC = _base_081C15FC + _off_081C15FC;
    uint32_t _post_081C15FC = _base_081C15FC + _off_081C15FC;
    _cyc_081C15FC += runtime_mem_cycles(_ea_081C15FC, 1u, 0u);
    uint32_t _v_081C15FC;
    _v_081C15FC = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C15FC);
    if (3u != 1u) g_cpu.R[3] = _ea_081C15FC;
    g_cpu.R[1] = _v_081C15FC;
    g_cpu.R[15] = 0x081C1600u;
    runtime_tick(_cyc_081C15FC);
    /* 081C1600  081c1600 A sub r1,r1,r0 */
    g_cpu.R[15] = 0x081C1600u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1600 = 1u;
    _cyc_081C1600 = 1u;
    uint32_t _rm_081C1600 = g_cpu.R[0];
    uint32_t _op2_081C1600;
    uint32_t _co_081C1600;
    _op2_081C1600 = _rm_081C1600;
    _co_081C1600 = cpsr_c();
    uint32_t _rn_081C1600 = g_cpu.R[1];
    uint32_t _r_081C1600;
    _r_081C1600 = _rn_081C1600 - _op2_081C1600;
    g_cpu.R[1] = _r_081C1600;
    g_cpu.R[15] = 0x081C1604u;
    runtime_tick(_cyc_081C1600);
    /* fall-through to 0x081C1604 */
    g_cpu.R[15] = 0x081C1604u;
    runtime_dispatch(0x081C1604u);
    return;
}


/* 0x081C1658  mode=arm  end=0x081C167C  branches=2  indirect */
void gf_memory_transfer_arm_at_081C1658(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C1658u);
    /* 081C1658  081c1658 A adds r5,r5,#0x40000000 */
    g_cpu.R[15] = 0x081C1658u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1658 = 1u;
    _cyc_081C1658 = 1u;
    uint32_t _rn_081C1658 = g_cpu.R[5];
    uint32_t _r_081C1658;
    _r_081C1658 = _rn_081C1658 + 0x40000000u;
    arm_set_nzcv_add(_rn_081C1658, 0x40000000u, _r_081C1658);
    g_cpu.R[5] = _r_081C1658;
    g_cpu.R[15] = 0x081C165Cu;
    runtime_tick(_cyc_081C1658);
    /* 081C165C  081c165c A bcc 0x081c160c */
    g_cpu.R[15] = 0x081C165Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C165C = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_081C165C = 3u;
        g_cpu.R[15] = 0x081C160Cu;
        runtime_tick(_cyc_081C165C);
        gf_indirect_control_flow_arm_at_081C160C();
        return;
    }
    g_cpu.R[15] = 0x081C1660u;
    runtime_tick(_cyc_081C165C);
    /* 081C1660  081c1660 A str r7,[r5,#0x630] */
    g_cpu.R[15] = 0x081C1660u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1660 = 1u;
    _cyc_081C1660 = 1u;
    uint32_t _base_081C1660 = g_cpu.R[5];
    uint32_t _off_081C1660;
    _off_081C1660 = 0x00000630u;
    uint32_t _ea_081C1660 = _base_081C1660 + _off_081C1660;
    uint32_t _post_081C1660 = _base_081C1660 + _off_081C1660;
    _cyc_081C1660 += runtime_mem_cycles(_ea_081C1660, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C1660u, _ea_081C1660 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_ea_081C1660 & ~3u, g_cpu.R[7]);
    g_cpu.R[15] = 0x081C1664u;
    runtime_tick(_cyc_081C1660);
    /* 081C1664  081c1664 A str r6,[r5],#0x4 */
    g_cpu.R[15] = 0x081C1664u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1664 = 1u;
    _cyc_081C1664 = 1u;
    uint32_t _base_081C1664 = g_cpu.R[5];
    uint32_t _off_081C1664;
    _off_081C1664 = 0x00000004u;
    uint32_t _ea_081C1664 = _base_081C1664;
    uint32_t _post_081C1664 = _base_081C1664 + _off_081C1664;
    _cyc_081C1664 += runtime_mem_cycles(_ea_081C1664, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C1664u, _ea_081C1664 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_081C1664 & ~3u, g_cpu.R[6]);
    g_cpu.R[5] = _post_081C1664;
    g_cpu.R[15] = 0x081C1668u;
    runtime_tick(_cyc_081C1664);
    /* 081C1668  081c1668 A subs r8,r8,#0x4 */
    g_cpu.R[15] = 0x081C1668u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1668 = 1u;
    _cyc_081C1668 = 1u;
    uint32_t _rn_081C1668 = g_cpu.R[8];
    uint32_t _r_081C1668;
    _r_081C1668 = _rn_081C1668 - 0x00000004u;
    arm_set_nzcv_sub(_rn_081C1668, 0x00000004u, _r_081C1668);
    g_cpu.R[8] = _r_081C1668;
    g_cpu.R[15] = 0x081C166Cu;
    runtime_tick(_cyc_081C1668);
    /* 081C166C  081c166c A bgt 0x081c1604 */
    g_cpu.R[15] = 0x081C166Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C166C = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_081C166C = 3u;
        g_cpu.R[15] = 0x081C1604u;
        runtime_tick(_cyc_081C166C);
        gf_memory_reads_arm_at_081C1604();
        return;
    }
    g_cpu.R[15] = 0x081C1670u;
    runtime_tick(_cyc_081C166C);
    /* 081C1670  081c1670 A sub r3,r3,#0x1 */
    g_cpu.R[15] = 0x081C1670u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1670 = 1u;
    _cyc_081C1670 = 1u;
    uint32_t _rn_081C1670 = g_cpu.R[3];
    uint32_t _r_081C1670;
    _r_081C1670 = _rn_081C1670 - 0x00000001u;
    g_cpu.R[3] = _r_081C1670;
    g_cpu.R[15] = 0x081C1674u;
    runtime_tick(_cyc_081C1670);
    /* 081C1674  081c1674 A ldm r13!,{r4,r12} */
    g_cpu.R[15] = 0x081C1674u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1674 = 1u;
    _cyc_081C1674 = 2u;
    uint32_t _b_081C1674 = g_cpu.R[13];
    uint32_t _a_081C1674 = _b_081C1674;
    uint32_t _fb_081C1674 = _b_081C1674 + 8u;
    _cyc_081C1674 += runtime_mem_cycles(_a_081C1674 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_081C1674 & ~3u);
    _a_081C1674 += 4u;
    _cyc_081C1674 += runtime_mem_cycles(_a_081C1674 & ~3u, 4u, 1u);
    g_cpu.R[12] = bus_read_u32(_a_081C1674 & ~3u);
    _a_081C1674 += 4u;
    g_cpu.R[13] = _fb_081C1674;
    g_cpu.R[15] = 0x081C1678u;
    runtime_tick(_cyc_081C1674);
    /* 081C1678  081c1678 A str r14,[r4,#0x1c] */
    g_cpu.R[15] = 0x081C1678u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1678 = 1u;
    _cyc_081C1678 = 1u;
    uint32_t _base_081C1678 = g_cpu.R[4];
    uint32_t _off_081C1678;
    _off_081C1678 = 0x0000001Cu;
    uint32_t _ea_081C1678 = _base_081C1678 + _off_081C1678;
    uint32_t _post_081C1678 = _base_081C1678 + _off_081C1678;
    _cyc_081C1678 += runtime_mem_cycles(_ea_081C1678, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C1678u, _ea_081C1678 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_ea_081C1678 & ~3u, g_cpu.R[14]);
    g_cpu.R[15] = 0x081C167Cu;
    runtime_tick(_cyc_081C1678);
    /* fall-through to 0x081C167C */
    g_cpu.R[15] = 0x081C167Cu;
    runtime_dispatch(0x081C167Cu);
    return;
}
