// Generated from a user supplied Golden Sun: The Lost Age ROM.
// hardware_and_video_access: functions grouped by observable CPU/hardware operations.
#include "runtime_arm.h"
#include "recompiled.h"

/* 0x080139D6  mode=thumb  end=0x080139DA  branches=14 */
void gf_hardware_and_video_access_at_080139D6(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080139D6u);
    /* 080139D6  080139d6 T bl.hi 0x07fff9da */
    g_cpu.R[15] = 0x080139D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080139D6 = 1u;
    _cyc_080139D6 = 1u;
    g_cpu.R[14] = 0x07FFF9DAu;
    g_cpu.R[15] = 0x080139D8u;
    runtime_tick(_cyc_080139D6);
    /* 080139D8  080139d8 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x080139D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080139D8 = 1u;
    _cyc_080139D8 = 3u;
    uint32_t _blt_080139D8 = (g_cpu.R[14] + 0x00000C0Eu) & ~1u;
    g_cpu.R[14] = 0x080139DBu;
    g_cpu.R[15] = _blt_080139D8;
    runtime_call_push_return(0x080139DAu);
    runtime_tick(_cyc_080139D8);
    _cyc_080139D8 = 0u;
    runtime_dispatch(_blt_080139D8);
    if (g_cpu.R[15] != 0x080139DAu) { runtime_call_cancel_return(0x080139DAu); return; }
    g_cpu.R[15] = 0x080139DAu;
    runtime_tick(_cyc_080139D8);
    /* fall-through to 0x080139DA */
    g_cpu.R[15] = 0x080139DAu;
    runtime_dispatch(0x080139DAu);
    return;
}


/* 0x08013AE6  mode=thumb  end=0x08013AEA  branches=3  indirect */
void gf_hardware_and_video_access_at_08013AE6(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08013AE6u);
    /* 08013AE6  08013ae6 T bl.hi 0x07fffaea */
    g_cpu.R[15] = 0x08013AE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08013AE6 = 1u;
    _cyc_08013AE6 = 1u;
    g_cpu.R[14] = 0x07FFFAEAu;
    g_cpu.R[15] = 0x08013AE8u;
    runtime_tick(_cyc_08013AE6);
    /* 08013AE8  08013ae8 T bl.lo 0x00000000 */
    g_cpu.R[15] = 0x08013AE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08013AE8 = 1u;
    _cyc_08013AE8 = 3u;
    uint32_t _blt_08013AE8 = (g_cpu.R[14] + 0x00000B46u) & ~1u;
    g_cpu.R[14] = 0x08013AEBu;
    g_cpu.R[15] = _blt_08013AE8;
    runtime_call_push_return(0x08013AEAu);
    runtime_tick(_cyc_08013AE8);
    _cyc_08013AE8 = 0u;
    runtime_dispatch(_blt_08013AE8);
    if (g_cpu.R[15] != 0x08013AEAu) { runtime_call_cancel_return(0x08013AEAu); return; }
    g_cpu.R[15] = 0x08013AEAu;
    runtime_tick(_cyc_08013AE8);
    /* fall-through to 0x08013AEA */
    g_cpu.R[15] = 0x08013AEAu;
    runtime_dispatch(0x08013AEAu);
    return;
}


/* 0x08038624  mode=arm  end=0x08038670  branches=8 */
void gf_hardware_and_video_access_at_08038624(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038624u);
    /* 08038624  08038624 A cmps r2,#0x0 */
    g_cpu.R[15] = 0x08038624u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038624 = 1u;
    _cyc_08038624 = 1u;
    uint32_t _rn_08038624 = g_cpu.R[2];
    uint32_t _r_08038624;
    _r_08038624 = _rn_08038624 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038624, 0x00000000u, _r_08038624);
    g_cpu.R[15] = 0x08038628u;
    runtime_tick(_cyc_08038624);
    /* 08038628  08038628 A beq 0x08038738 */
    g_cpu.R[15] = 0x08038628u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038628 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038628 = 3u;
        g_cpu.R[15] = 0x08038738u;
        runtime_tick(_cyc_08038628);
        gf_memory_transfer_arm_at_08038738();
        return;
    }
    g_cpu.R[15] = 0x0803862Cu;
    runtime_tick(_cyc_08038628);
    /* 0803862C  0803862c A add r2,r2,r3,lsl #5 */
    g_cpu.R[15] = 0x0803862Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803862C = 1u;
    _cyc_0803862C = 1u;
    uint32_t _rm_0803862C = g_cpu.R[3];
    uint32_t _op2_0803862C;
    uint32_t _co_0803862C;
    _op2_0803862C = _rm_0803862C << 5;
    _co_0803862C = (_rm_0803862C >> 27) & 1u;
    uint32_t _rn_0803862C = g_cpu.R[2];
    uint32_t _r_0803862C;
    _r_0803862C = _rn_0803862C + _op2_0803862C;
    g_cpu.R[2] = _r_0803862C;
    g_cpu.R[15] = 0x08038630u;
    runtime_tick(_cyc_0803862C);
    /* 08038630  08038630 A mov r1,#0x1100 */
    g_cpu.R[15] = 0x08038630u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038630 = 1u;
    _cyc_08038630 = 1u;
    uint32_t _r_08038630;
    _r_08038630 = 0x00001100u;
    g_cpu.R[1] = _r_08038630;
    g_cpu.R[15] = 0x08038634u;
    runtime_tick(_cyc_08038630);
    /* 08038634  08038634 A add r1,r1,#0x11 */
    g_cpu.R[15] = 0x08038634u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038634 = 1u;
    _cyc_08038634 = 1u;
    uint32_t _rn_08038634 = g_cpu.R[1];
    uint32_t _r_08038634;
    _r_08038634 = _rn_08038634 + 0x00000011u;
    g_cpu.R[1] = _r_08038634;
    g_cpu.R[15] = 0x08038638u;
    runtime_tick(_cyc_08038634);
    /* 08038638  08038638 A str r2,[r13,#0x18] */
    g_cpu.R[15] = 0x08038638u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038638 = 1u;
    _cyc_08038638 = 1u;
    uint32_t _base_08038638 = g_cpu.R[13];
    uint32_t _off_08038638;
    _off_08038638 = 0x00000018u;
    uint32_t _ea_08038638 = _base_08038638 + _off_08038638;
    uint32_t _post_08038638 = _base_08038638 + _off_08038638;
    _cyc_08038638 += runtime_mem_cycles(_ea_08038638, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038638u, _ea_08038638 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08038638 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x0803863Cu;
    runtime_tick(_cyc_08038638);
    /* 0803863C  0803863c A mov r2,#0x3300 */
    g_cpu.R[15] = 0x0803863Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803863C = 1u;
    _cyc_0803863C = 1u;
    uint32_t _r_0803863C;
    _r_0803863C = 0x00003300u;
    g_cpu.R[2] = _r_0803863C;
    g_cpu.R[15] = 0x08038640u;
    runtime_tick(_cyc_0803863C);
    /* 08038640  08038640 A str r1,[r13,#0x14] */
    g_cpu.R[15] = 0x08038640u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038640 = 1u;
    _cyc_08038640 = 1u;
    uint32_t _base_08038640 = g_cpu.R[13];
    uint32_t _off_08038640;
    _off_08038640 = 0x00000014u;
    uint32_t _ea_08038640 = _base_08038640 + _off_08038640;
    uint32_t _post_08038640 = _base_08038640 + _off_08038640;
    _cyc_08038640 += runtime_mem_cycles(_ea_08038640, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038640u, _ea_08038640 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_08038640 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x08038644u;
    runtime_tick(_cyc_08038640);
    /* 08038644  08038644 A add r2,r2,#0x33 */
    g_cpu.R[15] = 0x08038644u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038644 = 1u;
    _cyc_08038644 = 1u;
    uint32_t _rn_08038644 = g_cpu.R[2];
    uint32_t _r_08038644;
    _r_08038644 = _rn_08038644 + 0x00000033u;
    g_cpu.R[2] = _r_08038644;
    g_cpu.R[15] = 0x08038648u;
    runtime_tick(_cyc_08038644);
    /* 08038648  08038648 A str r2,[r13,#0x10] */
    g_cpu.R[15] = 0x08038648u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038648 = 1u;
    _cyc_08038648 = 1u;
    uint32_t _base_08038648 = g_cpu.R[13];
    uint32_t _off_08038648;
    _off_08038648 = 0x00000010u;
    uint32_t _ea_08038648 = _base_08038648 + _off_08038648;
    uint32_t _post_08038648 = _base_08038648 + _off_08038648;
    _cyc_08038648 += runtime_mem_cycles(_ea_08038648, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038648u, _ea_08038648 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08038648 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x0803864Cu;
    runtime_tick(_cyc_08038648);
    /* 0803864C  0803864c A mov r1,#0x0 */
    g_cpu.R[15] = 0x0803864Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803864C = 1u;
    _cyc_0803864C = 1u;
    uint32_t _r_0803864C;
    _r_0803864C = 0x00000000u;
    g_cpu.R[1] = _r_0803864C;
    g_cpu.R[15] = 0x08038650u;
    runtime_tick(_cyc_0803864C);
    /* 08038650  08038650 A ldr r2,[r15,#0x1a8] */
    g_cpu.R[15] = 0x08038650u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038650 = 1u;
    _cyc_08038650 = 2u;
    uint32_t _base_08038650 = 0x08038658u;
    uint32_t _off_08038650;
    _off_08038650 = 0x000001A8u;
    uint32_t _ea_08038650 = _base_08038650 + _off_08038650;
    uint32_t _post_08038650 = _base_08038650 + _off_08038650;
    _cyc_08038650 += runtime_mem_cycles(_ea_08038650, 4u, 0u);
    uint32_t _v_08038650;
    { uint32_t _w = bus_read_u32(_ea_08038650 & ~3u); uint32_t _rot = (_ea_08038650 & 3u) * 8u; _v_08038650 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08038650;
    g_cpu.R[15] = 0x08038654u;
    runtime_tick(_cyc_08038650);
    /* 08038654  08038654 A sub r3,r3,#0x20 */
    g_cpu.R[15] = 0x08038654u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038654 = 1u;
    _cyc_08038654 = 1u;
    uint32_t _rn_08038654 = g_cpu.R[3];
    uint32_t _r_08038654;
    _r_08038654 = _rn_08038654 - 0x00000020u;
    g_cpu.R[3] = _r_08038654;
    g_cpu.R[15] = 0x08038658u;
    runtime_tick(_cyc_08038654);
    /* 08038658  08038658 A ldrb r2,[r2,+r3] */
    g_cpu.R[15] = 0x08038658u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038658 = 1u;
    _cyc_08038658 = 2u;
    uint32_t _base_08038658 = g_cpu.R[2];
    uint32_t _off_08038658;
    uint32_t _morm_08038658 = g_cpu.R[3];
    _off_08038658 = _morm_08038658;
    uint32_t _ea_08038658 = _base_08038658 + _off_08038658;
    uint32_t _post_08038658 = _base_08038658 + _off_08038658;
    _cyc_08038658 += runtime_mem_cycles(_ea_08038658, 1u, 0u);
    uint32_t _v_08038658;
    _v_08038658 = bus_read_u8(_ea_08038658);
    g_cpu.R[2] = _v_08038658;
    g_cpu.R[15] = 0x0803865Cu;
    runtime_tick(_cyc_08038658);
    /* 0803865C  0803865c A cmps r7,#0x1f */
    g_cpu.R[15] = 0x0803865Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803865C = 1u;
    _cyc_0803865C = 1u;
    uint32_t _rn_0803865C = g_cpu.R[7];
    uint32_t _r_0803865C;
    _r_0803865C = _rn_0803865C - 0x0000001Fu;
    arm_set_nzcv_sub(_rn_0803865C, 0x0000001Fu, _r_0803865C);
    g_cpu.R[15] = 0x08038660u;
    runtime_tick(_cyc_0803865C);
    /* 08038660  08038660 A str r2,[r13,#0xc] */
    g_cpu.R[15] = 0x08038660u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038660 = 1u;
    _cyc_08038660 = 1u;
    uint32_t _base_08038660 = g_cpu.R[13];
    uint32_t _off_08038660;
    _off_08038660 = 0x0000000Cu;
    uint32_t _ea_08038660 = _base_08038660 + _off_08038660;
    uint32_t _post_08038660 = _base_08038660 + _off_08038660;
    _cyc_08038660 += runtime_mem_cycles(_ea_08038660, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038660u, _ea_08038660 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08038660 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x08038664u;
    runtime_tick(_cyc_08038660);
    /* 08038664  08038664 A bhi 0x08038730 */
    g_cpu.R[15] = 0x08038664u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038664 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08038664 = 3u;
        g_cpu.R[15] = 0x08038730u;
        runtime_tick(_cyc_08038664);
        gf_memory_reads_arm_at_08038730();
        return;
    }
    g_cpu.R[15] = 0x08038668u;
    runtime_tick(_cyc_08038664);
    /* 08038668  08038668 A mov r10,#0x2500 */
    g_cpu.R[15] = 0x08038668u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038668 = 1u;
    _cyc_08038668 = 1u;
    uint32_t _r_08038668;
    _r_08038668 = 0x00002500u;
    g_cpu.R[10] = _r_08038668;
    g_cpu.R[15] = 0x0803866Cu;
    runtime_tick(_cyc_08038668);
    /* 0803866C  0803866c A add r10,r10,#0x6000000 */
    g_cpu.R[15] = 0x0803866Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803866C = 1u;
    _cyc_0803866C = 1u;
    uint32_t _rn_0803866C = g_cpu.R[10];
    uint32_t _r_0803866C;
    _r_0803866C = _rn_0803866C + 0x06000000u;
    g_cpu.R[10] = _r_0803866C;
    g_cpu.R[15] = 0x08038670u;
    runtime_tick(_cyc_0803866C);
    /* fall-through to 0x08038670 */
    g_cpu.R[15] = 0x08038670u;
    runtime_dispatch(0x08038670u);
    return;
}


/* 0x0803880C  mode=arm  end=0x0803883C  branches=7  indirect */
void gf_hardware_and_video_access_at_0803880C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803880Cu);
    /* 0803880C  0803880c A ldr r3,[r13,#0x4] */
    g_cpu.R[15] = 0x0803880Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803880C = 1u;
    _cyc_0803880C = 2u;
    uint32_t _base_0803880C = g_cpu.R[13];
    uint32_t _off_0803880C;
    _off_0803880C = 0x00000004u;
    uint32_t _ea_0803880C = _base_0803880C + _off_0803880C;
    uint32_t _post_0803880C = _base_0803880C + _off_0803880C;
    _cyc_0803880C += runtime_mem_cycles(_ea_0803880C, 4u, 0u);
    uint32_t _v_0803880C;
    { uint32_t _w = bus_read_u32(_ea_0803880C & ~3u); uint32_t _rot = (_ea_0803880C & 3u) * 8u; _v_0803880C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_0803880C;
    g_cpu.R[15] = 0x08038810u;
    runtime_tick(_cyc_0803880C);
    /* 08038810  08038810 A ldr r0,[r13,#0x24] */
    g_cpu.R[15] = 0x08038810u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038810 = 1u;
    _cyc_08038810 = 2u;
    uint32_t _base_08038810 = g_cpu.R[13];
    uint32_t _off_08038810;
    _off_08038810 = 0x00000024u;
    uint32_t _ea_08038810 = _base_08038810 + _off_08038810;
    uint32_t _post_08038810 = _base_08038810 + _off_08038810;
    _cyc_08038810 += runtime_mem_cycles(_ea_08038810, 4u, 0u);
    uint32_t _v_08038810;
    { uint32_t _w = bus_read_u32(_ea_08038810 & ~3u); uint32_t _rot = (_ea_08038810 & 3u) * 8u; _v_08038810 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038810;
    g_cpu.R[15] = 0x08038814u;
    runtime_tick(_cyc_08038810);
    /* 08038814  08038814 A mov r1,#0x0 */
    g_cpu.R[15] = 0x08038814u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038814 = 1u;
    _cyc_08038814 = 1u;
    uint32_t _r_08038814;
    _r_08038814 = 0x00000000u;
    g_cpu.R[1] = _r_08038814;
    g_cpu.R[15] = 0x08038818u;
    runtime_tick(_cyc_08038814);
    /* 08038818  08038818 A str r3,[r13,#0x8] */
    g_cpu.R[15] = 0x08038818u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038818 = 1u;
    _cyc_08038818 = 1u;
    uint32_t _base_08038818 = g_cpu.R[13];
    uint32_t _off_08038818;
    _off_08038818 = 0x00000008u;
    uint32_t _ea_08038818 = _base_08038818 + _off_08038818;
    uint32_t _post_08038818 = _base_08038818 + _off_08038818;
    _cyc_08038818 += runtime_mem_cycles(_ea_08038818, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038818u, _ea_08038818 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_08038818 & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x0803881Cu;
    runtime_tick(_cyc_08038818);
    /* 0803881C  0803881c A cmps r7,#0x1f */
    g_cpu.R[15] = 0x0803881Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803881C = 1u;
    _cyc_0803881C = 1u;
    uint32_t _rn_0803881C = g_cpu.R[7];
    uint32_t _r_0803881C;
    _r_0803881C = _rn_0803881C - 0x0000001Fu;
    arm_set_nzcv_sub(_rn_0803881C, 0x0000001Fu, _r_0803881C);
    g_cpu.R[15] = 0x08038820u;
    runtime_tick(_cyc_0803881C);
    /* 08038820  08038820 A ldrh r12,[r0] */
    g_cpu.R[15] = 0x08038820u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038820 = 1u;
    _cyc_08038820 = 2u;
    uint32_t _base_08038820 = g_cpu.R[0];
    uint32_t _off_08038820;
    _off_08038820 = 0x00000000u;
    uint32_t _ea_08038820 = _base_08038820 + _off_08038820;
    uint32_t _post_08038820 = _base_08038820 + _off_08038820;
    _cyc_08038820 += runtime_mem_cycles(_ea_08038820, 2u, 0u);
    uint32_t _v_08038820;
    { uint32_t _h = bus_read_u16(_ea_08038820 & ~1u); if (_ea_08038820 & 1u) _v_08038820 = ((_h >> 8) | (_h << 24)); else _v_08038820 = _h; }
    g_cpu.R[12] = _v_08038820;
    g_cpu.R[15] = 0x08038824u;
    runtime_tick(_cyc_08038820);
    /* 08038824  08038824 A add r2,r2,#0x1 */
    g_cpu.R[15] = 0x08038824u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038824 = 1u;
    _cyc_08038824 = 1u;
    uint32_t _rn_08038824 = g_cpu.R[2];
    uint32_t _r_08038824;
    _r_08038824 = _rn_08038824 + 0x00000001u;
    g_cpu.R[2] = _r_08038824;
    g_cpu.R[15] = 0x08038828u;
    runtime_tick(_cyc_08038824);
    /* 08038828  08038828 A str r2,[r13] */
    g_cpu.R[15] = 0x08038828u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038828 = 1u;
    _cyc_08038828 = 1u;
    uint32_t _base_08038828 = g_cpu.R[13];
    uint32_t _off_08038828;
    _off_08038828 = 0x00000000u;
    uint32_t _ea_08038828 = _base_08038828 + _off_08038828;
    uint32_t _post_08038828 = _base_08038828 + _off_08038828;
    _cyc_08038828 += runtime_mem_cycles(_ea_08038828, 4u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038828u, _ea_08038828 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08038828 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x0803882Cu;
    runtime_tick(_cyc_08038828);
    /* 0803882C  0803882c A mov r12,r12,lsl #16 */
    g_cpu.R[15] = 0x0803882Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803882C = 1u;
    _cyc_0803882C = 1u;
    uint32_t _rm_0803882C = g_cpu.R[12];
    uint32_t _op2_0803882C;
    uint32_t _co_0803882C;
    _op2_0803882C = _rm_0803882C << 16;
    _co_0803882C = (_rm_0803882C >> 16) & 1u;
    uint32_t _r_0803882C;
    _r_0803882C = _op2_0803882C;
    g_cpu.R[12] = _r_0803882C;
    g_cpu.R[15] = 0x08038830u;
    runtime_tick(_cyc_0803882C);
    /* 08038830  08038830 A bhi 0x080388e0 */
    g_cpu.R[15] = 0x08038830u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038830 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08038830 = 3u;
        g_cpu.R[15] = 0x080388E0u;
        runtime_tick(_cyc_08038830);
        gf_memory_reads_arm_at_080388E0();
        return;
    }
    g_cpu.R[15] = 0x08038834u;
    runtime_tick(_cyc_08038830);
    /* 08038834  08038834 A mov r6,#0x2500 */
    g_cpu.R[15] = 0x08038834u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038834 = 1u;
    _cyc_08038834 = 1u;
    uint32_t _r_08038834;
    _r_08038834 = 0x00002500u;
    g_cpu.R[6] = _r_08038834;
    g_cpu.R[15] = 0x08038838u;
    runtime_tick(_cyc_08038834);
    /* 08038838  08038838 A add r6,r6,#0x6000000 */
    g_cpu.R[15] = 0x08038838u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038838 = 1u;
    _cyc_08038838 = 1u;
    uint32_t _rn_08038838 = g_cpu.R[6];
    uint32_t _r_08038838;
    _r_08038838 = _rn_08038838 + 0x06000000u;
    g_cpu.R[6] = _r_08038838;
    g_cpu.R[15] = 0x0803883Cu;
    runtime_tick(_cyc_08038838);
    /* fall-through to 0x0803883C */
    g_cpu.R[15] = 0x0803883Cu;
    runtime_dispatch(0x0803883Cu);
    return;
}


/* 0x080CF85A  mode=thumb  end=0x080CF868  branches=1 */
void gf_hardware_and_video_access_at_080CF85A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080CF85Au);
    /* 080CF85A  080cf85a T movs r0,r0 */
    g_cpu.R[15] = 0x080CF85Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080CF85A = 1u;
    _cyc_080CF85A = 1u;
    uint32_t _rm_080CF85A = g_cpu.R[0];
    uint32_t _op2_080CF85A;
    uint32_t _co_080CF85A;
    _op2_080CF85A = _rm_080CF85A;
    _co_080CF85A = cpsr_c();
    uint32_t _r_080CF85A;
    _r_080CF85A = _op2_080CF85A;
    arm_set_nzc_logic(_r_080CF85A, _co_080CF85A);
    g_cpu.R[0] = _r_080CF85A;
    g_cpu.R[15] = 0x080CF85Cu;
    runtime_tick(_cyc_080CF85A);
    /* 080CF85C  080cf85c T movs r7,r3 */
    g_cpu.R[15] = 0x080CF85Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080CF85C = 1u;
    _cyc_080CF85C = 1u;
    uint32_t _rm_080CF85C = g_cpu.R[3];
    uint32_t _op2_080CF85C;
    uint32_t _co_080CF85C;
    _op2_080CF85C = _rm_080CF85C;
    _co_080CF85C = cpsr_c();
    uint32_t _r_080CF85C;
    _r_080CF85C = _op2_080CF85C;
    arm_set_nzc_logic(_r_080CF85C, _co_080CF85C);
    g_cpu.R[7] = _r_080CF85C;
    g_cpu.R[15] = 0x080CF85Eu;
    runtime_tick(_cyc_080CF85C);
    /* 080CF85E  080cf85e T movs r0,r0 */
    g_cpu.R[15] = 0x080CF85Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080CF85E = 1u;
    _cyc_080CF85E = 1u;
    uint32_t _rm_080CF85E = g_cpu.R[0];
    uint32_t _op2_080CF85E;
    uint32_t _co_080CF85E;
    _op2_080CF85E = _rm_080CF85E;
    _co_080CF85E = cpsr_c();
    uint32_t _r_080CF85E;
    _r_080CF85E = _op2_080CF85E;
    arm_set_nzc_logic(_r_080CF85E, _co_080CF85E);
    g_cpu.R[0] = _r_080CF85E;
    g_cpu.R[15] = 0x080CF860u;
    runtime_tick(_cyc_080CF85E);
    /* 080CF860  080cf860 T bl.hi 0x07fcc864 */
    g_cpu.R[15] = 0x080CF860u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080CF860 = 1u;
    _cyc_080CF860 = 1u;
    g_cpu.R[14] = 0x07FCC864u;
    g_cpu.R[15] = 0x080CF862u;
    runtime_tick(_cyc_080CF860);
    /* 080CF862  080cf862 T movs r4,r1,lsr #0 */
    g_cpu.R[15] = 0x080CF862u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080CF862 = 1u;
    _cyc_080CF862 = 1u;
    uint32_t _rm_080CF862 = g_cpu.R[1];
    uint32_t _op2_080CF862;
    uint32_t _co_080CF862;
    _op2_080CF862 = 0u;
    _co_080CF862 = (_rm_080CF862 >> 31) & 1u;
    uint32_t _r_080CF862;
    _r_080CF862 = _op2_080CF862;
    arm_set_nzc_logic(_r_080CF862, _co_080CF862);
    g_cpu.R[4] = _r_080CF862;
    g_cpu.R[15] = 0x080CF864u;
    runtime_tick(_cyc_080CF862);
    /* 080CF864  080cf864 T bl.hi 0x0805c868 */
    g_cpu.R[15] = 0x080CF864u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080CF864 = 1u;
    _cyc_080CF864 = 1u;
    g_cpu.R[14] = 0x0805C868u;
    g_cpu.R[15] = 0x080CF866u;
    runtime_tick(_cyc_080CF864);
    /* 080CF866  080cf866 T movs r4,r1,lsr #0 */
    g_cpu.R[15] = 0x080CF866u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080CF866 = 1u;
    _cyc_080CF866 = 1u;
    uint32_t _rm_080CF866 = g_cpu.R[1];
    uint32_t _op2_080CF866;
    uint32_t _co_080CF866;
    _op2_080CF866 = 0u;
    _co_080CF866 = (_rm_080CF866 >> 31) & 1u;
    uint32_t _r_080CF866;
    _r_080CF866 = _op2_080CF866;
    arm_set_nzc_logic(_r_080CF866, _co_080CF866);
    g_cpu.R[4] = _r_080CF866;
    g_cpu.R[15] = 0x080CF868u;
    runtime_tick(_cyc_080CF866);
    /* fall-through to 0x080CF868 */
    g_cpu.R[15] = 0x080CF868u;
    runtime_dispatch(0x080CF868u);
    return;
}
