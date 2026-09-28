// Generated from a user supplied Golden Sun: The Lost Age ROM.
// memory_reads_arm: functions grouped by observable CPU/hardware operations.
#include "runtime_arm.h"
#include "recompiled.h"

/* 0x08001660  mode=arm  end=0x08001698  branches=3 */
void gf_memory_reads_arm_at_08001660(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08001660u);
    /* 08001660  08001660 A ldrb r14,[r0],#0x1 */
    g_cpu.R[15] = 0x08001660u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001660 = 1u;
    _cyc_08001660 = 2u;
    uint32_t _base_08001660 = g_cpu.R[0];
    uint32_t _off_08001660;
    _off_08001660 = 0x00000001u;
    uint32_t _ea_08001660 = _base_08001660;
    uint32_t _post_08001660 = _base_08001660 + _off_08001660;
    _cyc_08001660 += runtime_mem_cycles(_ea_08001660, 1u, 0u);
    uint32_t _v_08001660;
    _v_08001660 = bus_read_u8(_ea_08001660);
    if (0u != 14u) g_cpu.R[0] = _post_08001660;
    g_cpu.R[14] = _v_08001660;
    g_cpu.R[15] = 0x08001664u;
    runtime_tick(_cyc_08001660);
    /* 08001664  08001664 A movs r14,r14,lsl #24 */
    g_cpu.R[15] = 0x08001664u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001664 = 1u;
    _cyc_08001664 = 1u;
    uint32_t _rm_08001664 = g_cpu.R[14];
    uint32_t _op2_08001664;
    uint32_t _co_08001664;
    _op2_08001664 = _rm_08001664 << 24;
    _co_08001664 = (_rm_08001664 >> 8) & 1u;
    uint32_t _r_08001664;
    _r_08001664 = _op2_08001664;
    arm_set_nzc_logic(_r_08001664, _co_08001664);
    g_cpu.R[14] = _r_08001664;
    g_cpu.R[15] = 0x08001668u;
    runtime_tick(_cyc_08001664);
    /* 08001668  08001668 A bne 0x08001718 */
    g_cpu.R[15] = 0x08001668u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001668 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08001668 = 3u;
        g_cpu.R[15] = 0x08001718u;
        runtime_tick(_cyc_08001668);
        gf_indirect_control_flow_arm_at_08001718();
        return;
    }
    g_cpu.R[15] = 0x0800166Cu;
    runtime_tick(_cyc_08001668);
    /* 0800166C  0800166c A ands r2,r0,#0x3 */
    g_cpu.R[15] = 0x0800166Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800166C = 1u;
    _cyc_0800166C = 1u;
    uint32_t _rn_0800166C = g_cpu.R[0];
    uint32_t _r_0800166C;
    _r_0800166C = _rn_0800166C & 0x00000003u;
    arm_set_nzc_logic(_r_0800166C, cpsr_c());
    g_cpu.R[2] = _r_0800166C;
    g_cpu.R[15] = 0x08001670u;
    runtime_tick(_cyc_0800166C);
    /* 08001670  08001670 A ldmeq r0!,{r4,r5} */
    g_cpu.R[15] = 0x08001670u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001670 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08001670 = 2u;
        uint32_t _b_08001670 = g_cpu.R[0];
        uint32_t _a_08001670 = _b_08001670;
        uint32_t _fb_08001670 = _b_08001670 + 8u;
        _cyc_08001670 += runtime_mem_cycles(_a_08001670 & ~3u, 4u, 0u);
        g_cpu.R[4] = bus_read_u32(_a_08001670 & ~3u);
        _a_08001670 += 4u;
        _cyc_08001670 += runtime_mem_cycles(_a_08001670 & ~3u, 4u, 1u);
        g_cpu.R[5] = bus_read_u32(_a_08001670 & ~3u);
        _a_08001670 += 4u;
        g_cpu.R[0] = _fb_08001670;
    }
    g_cpu.R[15] = 0x08001674u;
    runtime_tick(_cyc_08001670);
    /* 08001674  08001674 A beq 0x08001698 */
    g_cpu.R[15] = 0x08001674u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001674 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08001674 = 3u;
        g_cpu.R[15] = 0x08001698u;
        runtime_tick(_cyc_08001674);
        gf_memory_writes_arm_at_08001698();
        return;
    }
    g_cpu.R[15] = 0x08001678u;
    runtime_tick(_cyc_08001674);
    /* 08001678  08001678 A ldm r0,{r4,r5,r6} */
    g_cpu.R[15] = 0x08001678u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001678 = 1u;
    _cyc_08001678 = 2u;
    uint32_t _b_08001678 = g_cpu.R[0];
    uint32_t _a_08001678 = _b_08001678;
    uint32_t _fb_08001678 = _b_08001678 + 12u;
    _cyc_08001678 += runtime_mem_cycles(_a_08001678 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08001678 & ~3u);
    _a_08001678 += 4u;
    _cyc_08001678 += runtime_mem_cycles(_a_08001678 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08001678 & ~3u);
    _a_08001678 += 4u;
    _cyc_08001678 += runtime_mem_cycles(_a_08001678 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08001678 & ~3u);
    _a_08001678 += 4u;
    g_cpu.R[15] = 0x0800167Cu;
    runtime_tick(_cyc_08001678);
    /* 0800167C  0800167c A mov r2,r2,lsl #3 */
    g_cpu.R[15] = 0x0800167Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800167C = 1u;
    _cyc_0800167C = 1u;
    uint32_t _rm_0800167C = g_cpu.R[2];
    uint32_t _op2_0800167C;
    uint32_t _co_0800167C;
    _op2_0800167C = _rm_0800167C << 3;
    _co_0800167C = (_rm_0800167C >> 29) & 1u;
    uint32_t _r_0800167C;
    _r_0800167C = _op2_0800167C;
    g_cpu.R[2] = _r_0800167C;
    g_cpu.R[15] = 0x08001680u;
    runtime_tick(_cyc_0800167C);
    /* 08001680  08001680 A rsb r7,r2,#0x20 */
    g_cpu.R[15] = 0x08001680u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001680 = 1u;
    _cyc_08001680 = 1u;
    uint32_t _rn_08001680 = g_cpu.R[2];
    uint32_t _r_08001680;
    _r_08001680 = 0x00000020u - _rn_08001680;
    g_cpu.R[7] = _r_08001680;
    g_cpu.R[15] = 0x08001684u;
    runtime_tick(_cyc_08001680);
    /* 08001684  08001684 A mov r4,r4,lsr r2 */
    g_cpu.R[15] = 0x08001684u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001684 = 1u;
    _cyc_08001684 = 2u;
    uint32_t _rm_08001684 = g_cpu.R[4];
    uint32_t _op2_08001684;
    uint32_t _co_08001684;
    uint32_t _cnt_08001684 = (g_cpu.R[2]) & 0xFFu;
    if (_cnt_08001684 == 0)      { _op2_08001684 = _rm_08001684; _co_08001684 = cpsr_c(); }
    else if (_cnt_08001684 < 32) { _op2_08001684 = _rm_08001684 >> _cnt_08001684; _co_08001684 = (_rm_08001684 >> (_cnt_08001684 - 1u)) & 1u; }
    else if (_cnt_08001684 == 32){ _op2_08001684 = 0u; _co_08001684 = (_rm_08001684 >> 31) & 1u; }
    else                                { _op2_08001684 = 0u; _co_08001684 = 0u; }
    uint32_t _r_08001684;
    _r_08001684 = _op2_08001684;
    g_cpu.R[4] = _r_08001684;
    g_cpu.R[15] = 0x08001688u;
    runtime_tick(_cyc_08001684);
    /* 08001688  08001688 A orr r4,r4,r5,lsl r7 */
    g_cpu.R[15] = 0x08001688u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001688 = 1u;
    _cyc_08001688 = 2u;
    uint32_t _rm_08001688 = g_cpu.R[5];
    uint32_t _op2_08001688;
    uint32_t _co_08001688;
    uint32_t _cnt_08001688 = (g_cpu.R[7]) & 0xFFu;
    if (_cnt_08001688 == 0)      { _op2_08001688 = _rm_08001688; _co_08001688 = cpsr_c(); }
    else if (_cnt_08001688 < 32) { _op2_08001688 = _rm_08001688 << _cnt_08001688; _co_08001688 = (_rm_08001688 >> (32u - _cnt_08001688)) & 1u; }
    else if (_cnt_08001688 == 32){ _op2_08001688 = 0u; _co_08001688 = _rm_08001688 & 1u; }
    else                                { _op2_08001688 = 0u; _co_08001688 = 0u; }
    uint32_t _rn_08001688 = g_cpu.R[4];
    uint32_t _r_08001688;
    _r_08001688 = _rn_08001688 | _op2_08001688;
    g_cpu.R[4] = _r_08001688;
    g_cpu.R[15] = 0x0800168Cu;
    runtime_tick(_cyc_08001688);
    /* 0800168C  0800168c A mov r5,r5,lsr r2 */
    g_cpu.R[15] = 0x0800168Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800168C = 1u;
    _cyc_0800168C = 2u;
    uint32_t _rm_0800168C = g_cpu.R[5];
    uint32_t _op2_0800168C;
    uint32_t _co_0800168C;
    uint32_t _cnt_0800168C = (g_cpu.R[2]) & 0xFFu;
    if (_cnt_0800168C == 0)      { _op2_0800168C = _rm_0800168C; _co_0800168C = cpsr_c(); }
    else if (_cnt_0800168C < 32) { _op2_0800168C = _rm_0800168C >> _cnt_0800168C; _co_0800168C = (_rm_0800168C >> (_cnt_0800168C - 1u)) & 1u; }
    else if (_cnt_0800168C == 32){ _op2_0800168C = 0u; _co_0800168C = (_rm_0800168C >> 31) & 1u; }
    else                                { _op2_0800168C = 0u; _co_0800168C = 0u; }
    uint32_t _r_0800168C;
    _r_0800168C = _op2_0800168C;
    g_cpu.R[5] = _r_0800168C;
    g_cpu.R[15] = 0x08001690u;
    runtime_tick(_cyc_0800168C);
    /* 08001690  08001690 A orr r5,r5,r6,lsl r7 */
    g_cpu.R[15] = 0x08001690u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001690 = 1u;
    _cyc_08001690 = 2u;
    uint32_t _rm_08001690 = g_cpu.R[6];
    uint32_t _op2_08001690;
    uint32_t _co_08001690;
    uint32_t _cnt_08001690 = (g_cpu.R[7]) & 0xFFu;
    if (_cnt_08001690 == 0)      { _op2_08001690 = _rm_08001690; _co_08001690 = cpsr_c(); }
    else if (_cnt_08001690 < 32) { _op2_08001690 = _rm_08001690 << _cnt_08001690; _co_08001690 = (_rm_08001690 >> (32u - _cnt_08001690)) & 1u; }
    else if (_cnt_08001690 == 32){ _op2_08001690 = 0u; _co_08001690 = _rm_08001690 & 1u; }
    else                                { _op2_08001690 = 0u; _co_08001690 = 0u; }
    uint32_t _rn_08001690 = g_cpu.R[5];
    uint32_t _r_08001690;
    _r_08001690 = _rn_08001690 | _op2_08001690;
    g_cpu.R[5] = _r_08001690;
    g_cpu.R[15] = 0x08001694u;
    runtime_tick(_cyc_08001690);
    /* 08001694  08001694 A add r0,r0,#0x8 */
    g_cpu.R[15] = 0x08001694u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001694 = 1u;
    _cyc_08001694 = 1u;
    uint32_t _rn_08001694 = g_cpu.R[0];
    uint32_t _r_08001694;
    _r_08001694 = _rn_08001694 + 0x00000008u;
    g_cpu.R[0] = _r_08001694;
    g_cpu.R[15] = 0x08001698u;
    runtime_tick(_cyc_08001694);
    /* fall-through to 0x08001698 */
    g_cpu.R[15] = 0x08001698u;
    runtime_dispatch(0x08001698u);
    return;
}


/* 0x08001738  mode=arm  end=0x0800175C  branches=1  indirect */
void gf_memory_reads_arm_at_08001738(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08001738u);
    /* 08001738  08001738 A ldrb r12,[r0],#0x1 */
    g_cpu.R[15] = 0x08001738u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001738 = 1u;
    _cyc_08001738 = 2u;
    uint32_t _base_08001738 = g_cpu.R[0];
    uint32_t _off_08001738;
    _off_08001738 = 0x00000001u;
    uint32_t _ea_08001738 = _base_08001738;
    uint32_t _post_08001738 = _base_08001738 + _off_08001738;
    _cyc_08001738 += runtime_mem_cycles(_ea_08001738, 1u, 0u);
    uint32_t _v_08001738;
    _v_08001738 = bus_read_u8(_ea_08001738);
    if (0u != 12u) g_cpu.R[0] = _post_08001738;
    g_cpu.R[12] = _v_08001738;
    g_cpu.R[15] = 0x0800173Cu;
    runtime_tick(_cyc_08001738);
    /* 0800173C  0800173c A ldrb r3,[r0],#0x1 */
    g_cpu.R[15] = 0x0800173Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800173C = 1u;
    _cyc_0800173C = 2u;
    uint32_t _base_0800173C = g_cpu.R[0];
    uint32_t _off_0800173C;
    _off_0800173C = 0x00000001u;
    uint32_t _ea_0800173C = _base_0800173C;
    uint32_t _post_0800173C = _base_0800173C + _off_0800173C;
    _cyc_0800173C += runtime_mem_cycles(_ea_0800173C, 1u, 0u);
    uint32_t _v_0800173C;
    _v_0800173C = bus_read_u8(_ea_0800173C);
    if (0u != 3u) g_cpu.R[0] = _post_0800173C;
    g_cpu.R[3] = _v_0800173C;
    g_cpu.R[15] = 0x08001740u;
    runtime_tick(_cyc_0800173C);
    /* 08001740  08001740 A and r2,r12,#0xf0 */
    g_cpu.R[15] = 0x08001740u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001740 = 1u;
    _cyc_08001740 = 1u;
    uint32_t _rn_08001740 = g_cpu.R[12];
    uint32_t _r_08001740;
    _r_08001740 = _rn_08001740 & 0x000000F0u;
    g_cpu.R[2] = _r_08001740;
    g_cpu.R[15] = 0x08001744u;
    runtime_tick(_cyc_08001740);
    /* 08001744  08001744 A rsb r3,r3,r1 */
    g_cpu.R[15] = 0x08001744u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001744 = 1u;
    _cyc_08001744 = 1u;
    uint32_t _rm_08001744 = g_cpu.R[1];
    uint32_t _op2_08001744;
    uint32_t _co_08001744;
    _op2_08001744 = _rm_08001744;
    _co_08001744 = cpsr_c();
    uint32_t _rn_08001744 = g_cpu.R[3];
    uint32_t _r_08001744;
    _r_08001744 = _op2_08001744 - _rn_08001744;
    g_cpu.R[3] = _r_08001744;
    g_cpu.R[15] = 0x08001748u;
    runtime_tick(_cyc_08001744);
    /* 08001748  08001748 A sub r4,r3,r2,lsl #4 */
    g_cpu.R[15] = 0x08001748u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001748 = 1u;
    _cyc_08001748 = 1u;
    uint32_t _rm_08001748 = g_cpu.R[2];
    uint32_t _op2_08001748;
    uint32_t _co_08001748;
    _op2_08001748 = _rm_08001748 << 4;
    _co_08001748 = (_rm_08001748 >> 28) & 1u;
    uint32_t _rn_08001748 = g_cpu.R[3];
    uint32_t _r_08001748;
    _r_08001748 = _rn_08001748 - _op2_08001748;
    g_cpu.R[4] = _r_08001748;
    g_cpu.R[15] = 0x0800174Cu;
    runtime_tick(_cyc_08001748);
    /* 0800174C  0800174c A ands r12,r12,#0xf */
    g_cpu.R[15] = 0x0800174Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800174C = 1u;
    _cyc_0800174C = 1u;
    uint32_t _rn_0800174C = g_cpu.R[12];
    uint32_t _r_0800174C;
    _r_0800174C = _rn_0800174C & 0x0000000Fu;
    arm_set_nzc_logic(_r_0800174C, cpsr_c());
    g_cpu.R[12] = _r_0800174C;
    g_cpu.R[15] = 0x08001750u;
    runtime_tick(_cyc_0800174C);
    /* 08001750  08001750 A beq 0x080017f0 */
    g_cpu.R[15] = 0x08001750u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001750 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08001750 = 3u;
        g_cpu.R[15] = 0x080017F0u;
        runtime_tick(_cyc_08001750);
        gf_memory_reads_arm_at_080017F0();
        return;
    }
    g_cpu.R[15] = 0x08001754u;
    runtime_tick(_cyc_08001750);
    /* 08001754  08001754 A rsb r12,r12,#0xf */
    g_cpu.R[15] = 0x08001754u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001754 = 1u;
    _cyc_08001754 = 1u;
    uint32_t _rn_08001754 = g_cpu.R[12];
    uint32_t _r_08001754;
    _r_08001754 = 0x0000000Fu - _rn_08001754;
    g_cpu.R[12] = _r_08001754;
    g_cpu.R[15] = 0x08001758u;
    runtime_tick(_cyc_08001754);
    /* 08001758  08001758 A add r15,r15,r12,lsl #3 */
    g_cpu.R[15] = 0x08001758u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001758 = 1u;
    _cyc_08001758 = 3u;
    uint32_t _rm_08001758 = g_cpu.R[12];
    uint32_t _op2_08001758;
    uint32_t _co_08001758;
    _op2_08001758 = _rm_08001758 << 3;
    _co_08001758 = (_rm_08001758 >> 29) & 1u;
    uint32_t _rn_08001758 = 0x08001760u;
    uint32_t _r_08001758;
    _r_08001758 = _rn_08001758 + _op2_08001758;
    uint32_t _pc_08001758 = _r_08001758 & ~3u;
    g_cpu.R[15] = _pc_08001758;
    runtime_tick(_cyc_08001758);
    runtime_dispatch(_pc_08001758);
    return;
    g_cpu.R[15] = 0x0800175Cu;
    runtime_tick(_cyc_08001758);
    /* fall-through to 0x0800175C */
    g_cpu.R[15] = 0x0800175Cu;
    runtime_dispatch(0x0800175Cu);
    return;
}


/* 0x080017F0  mode=arm  end=0x0800180C  branches=1  indirect */
void gf_memory_reads_arm_at_080017F0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080017F0u);
    /* 080017F0  080017f0 A cmps r4,r1 */
    g_cpu.R[15] = 0x080017F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080017F0 = 1u;
    _cyc_080017F0 = 1u;
    uint32_t _rm_080017F0 = g_cpu.R[1];
    uint32_t _op2_080017F0;
    uint32_t _co_080017F0;
    _op2_080017F0 = _rm_080017F0;
    _co_080017F0 = cpsr_c();
    uint32_t _rn_080017F0 = g_cpu.R[4];
    uint32_t _r_080017F0;
    _r_080017F0 = _rn_080017F0 - _op2_080017F0;
    arm_set_nzcv_sub(_rn_080017F0, _op2_080017F0, _r_080017F0);
    g_cpu.R[15] = 0x080017F4u;
    runtime_tick(_cyc_080017F0);
    /* 080017F4  080017f4 A beq 0x080018a8 */
    g_cpu.R[15] = 0x080017F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080017F4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080017F4 = 3u;
        g_cpu.R[15] = 0x080018A8u;
        runtime_tick(_cyc_080017F4);
        gf_memory_reads_arm_at_080018A8();
        return;
    }
    g_cpu.R[15] = 0x080017F8u;
    runtime_tick(_cyc_080017F4);
    /* 080017F8  080017f8 A ldrb r3,[r0],#0x1 */
    g_cpu.R[15] = 0x080017F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080017F8 = 1u;
    _cyc_080017F8 = 2u;
    uint32_t _base_080017F8 = g_cpu.R[0];
    uint32_t _off_080017F8;
    _off_080017F8 = 0x00000001u;
    uint32_t _ea_080017F8 = _base_080017F8;
    uint32_t _post_080017F8 = _base_080017F8 + _off_080017F8;
    _cyc_080017F8 += runtime_mem_cycles(_ea_080017F8, 1u, 0u);
    uint32_t _v_080017F8;
    _v_080017F8 = bus_read_u8(_ea_080017F8);
    if (0u != 3u) g_cpu.R[0] = _post_080017F8;
    g_cpu.R[3] = _v_080017F8;
    g_cpu.R[15] = 0x080017FCu;
    runtime_tick(_cyc_080017F8);
    /* 080017FC  080017fc A add r3,r3,#0x10 */
    g_cpu.R[15] = 0x080017FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080017FC = 1u;
    _cyc_080017FC = 1u;
    uint32_t _rn_080017FC = g_cpu.R[3];
    uint32_t _r_080017FC;
    _r_080017FC = _rn_080017FC + 0x00000010u;
    g_cpu.R[3] = _r_080017FC;
    g_cpu.R[15] = 0x08001800u;
    runtime_tick(_cyc_080017FC);
    /* 08001800  08001800 A and r12,r3,#0xf */
    g_cpu.R[15] = 0x08001800u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001800 = 1u;
    _cyc_08001800 = 1u;
    uint32_t _rn_08001800 = g_cpu.R[3];
    uint32_t _r_08001800;
    _r_08001800 = _rn_08001800 & 0x0000000Fu;
    g_cpu.R[12] = _r_08001800;
    g_cpu.R[15] = 0x08001804u;
    runtime_tick(_cyc_08001800);
    /* 08001804  08001804 A rsb r12,r12,#0xf */
    g_cpu.R[15] = 0x08001804u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001804 = 1u;
    _cyc_08001804 = 1u;
    uint32_t _rn_08001804 = g_cpu.R[12];
    uint32_t _r_08001804;
    _r_08001804 = 0x0000000Fu - _rn_08001804;
    g_cpu.R[12] = _r_08001804;
    g_cpu.R[15] = 0x08001808u;
    runtime_tick(_cyc_08001804);
    /* 08001808  08001808 A add r15,r15,r12,lsl #3 */
    g_cpu.R[15] = 0x08001808u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001808 = 1u;
    _cyc_08001808 = 3u;
    uint32_t _rm_08001808 = g_cpu.R[12];
    uint32_t _op2_08001808;
    uint32_t _co_08001808;
    _op2_08001808 = _rm_08001808 << 3;
    _co_08001808 = (_rm_08001808 >> 29) & 1u;
    uint32_t _rn_08001808 = 0x08001810u;
    uint32_t _r_08001808;
    _r_08001808 = _rn_08001808 + _op2_08001808;
    uint32_t _pc_08001808 = _r_08001808 & ~3u;
    g_cpu.R[15] = _pc_08001808;
    runtime_tick(_cyc_08001808);
    runtime_dispatch(_pc_08001808);
    return;
    g_cpu.R[15] = 0x0800180Cu;
    runtime_tick(_cyc_08001808);
    /* fall-through to 0x0800180C */
    g_cpu.R[15] = 0x0800180Cu;
    runtime_dispatch(0x0800180Cu);
    return;
}


/* 0x080018A8  mode=arm  end=0x080018B4  branches=0  indirect */
void gf_memory_reads_arm_at_080018A8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080018A8u);
    /* 080018A8  080018a8 A ldm r13!,{r0,r5,r6,r7,r12} */
    g_cpu.R[15] = 0x080018A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080018A8 = 1u;
    _cyc_080018A8 = 2u;
    uint32_t _b_080018A8 = g_cpu.R[13];
    uint32_t _a_080018A8 = _b_080018A8;
    uint32_t _fb_080018A8 = _b_080018A8 + 20u;
    _cyc_080018A8 += runtime_mem_cycles(_a_080018A8 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_080018A8 & ~3u);
    _a_080018A8 += 4u;
    _cyc_080018A8 += runtime_mem_cycles(_a_080018A8 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_080018A8 & ~3u);
    _a_080018A8 += 4u;
    _cyc_080018A8 += runtime_mem_cycles(_a_080018A8 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_080018A8 & ~3u);
    _a_080018A8 += 4u;
    _cyc_080018A8 += runtime_mem_cycles(_a_080018A8 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_080018A8 & ~3u);
    _a_080018A8 += 4u;
    _cyc_080018A8 += runtime_mem_cycles(_a_080018A8 & ~3u, 4u, 1u);
    g_cpu.R[12] = bus_read_u32(_a_080018A8 & ~3u);
    _a_080018A8 += 4u;
    g_cpu.R[13] = _fb_080018A8;
    g_cpu.R[15] = 0x080018ACu;
    runtime_tick(_cyc_080018A8);
    /* 080018AC  080018ac A sub r0,r1,r0 */
    g_cpu.R[15] = 0x080018ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080018AC = 1u;
    _cyc_080018AC = 1u;
    uint32_t _rm_080018AC = g_cpu.R[0];
    uint32_t _op2_080018AC;
    uint32_t _co_080018AC;
    _op2_080018AC = _rm_080018AC;
    _co_080018AC = cpsr_c();
    uint32_t _rn_080018AC = g_cpu.R[1];
    uint32_t _r_080018AC;
    _r_080018AC = _rn_080018AC - _op2_080018AC;
    g_cpu.R[0] = _r_080018AC;
    g_cpu.R[15] = 0x080018B0u;
    runtime_tick(_cyc_080018AC);
    /* 080018B0  080018b0 A bx r12 */
    g_cpu.R[15] = 0x080018B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080018B0 = 1u;
    _cyc_080018B0 = 3u;
    uint32_t _bxt_080018B0 = g_cpu.R[12];
    g_cpu.R[15] = _bxt_080018B0 & ~1u;
    runtime_tick(_cyc_080018B0);
    runtime_dispatch_with_exchange(_bxt_080018B0);
    return;
    g_cpu.R[15] = 0x080018B4u;
    runtime_tick(_cyc_080018B0);
    /* fall-through to 0x080018B4 */
    g_cpu.R[15] = 0x080018B4u;
    runtime_dispatch(0x080018B4u);
    return;
}


/* 0x08012AD0  mode=arm  end=0x08012AE0  branches=0  indirect */
void gf_memory_reads_arm_at_08012AD0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012AD0u);
    /* 08012AD0  08012ad0 A ldrh r3,[r0],#0x2 */
    g_cpu.R[15] = 0x08012AD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AD0 = 1u;
    _cyc_08012AD0 = 2u;
    uint32_t _base_08012AD0 = g_cpu.R[0];
    uint32_t _off_08012AD0;
    _off_08012AD0 = 0x00000002u;
    uint32_t _ea_08012AD0 = _base_08012AD0;
    uint32_t _post_08012AD0 = _base_08012AD0 + _off_08012AD0;
    _cyc_08012AD0 += runtime_mem_cycles(_ea_08012AD0, 2u, 0u);
    uint32_t _v_08012AD0;
    { uint32_t _h = bus_read_u16(_ea_08012AD0 & ~1u); if (_ea_08012AD0 & 1u) _v_08012AD0 = ((_h >> 8) | (_h << 24)); else _v_08012AD0 = _h; }
    if (0u != 3u) g_cpu.R[0] = _post_08012AD0;
    g_cpu.R[3] = _v_08012AD0;
    g_cpu.R[15] = 0x08012AD4u;
    runtime_tick(_cyc_08012AD0);
    /* 08012AD4  08012ad4 A add r4,r4,#0x10 */
    g_cpu.R[15] = 0x08012AD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AD4 = 1u;
    _cyc_08012AD4 = 1u;
    uint32_t _rn_08012AD4 = g_cpu.R[4];
    uint32_t _r_08012AD4;
    _r_08012AD4 = _rn_08012AD4 + 0x00000010u;
    g_cpu.R[4] = _r_08012AD4;
    g_cpu.R[15] = 0x08012AD8u;
    runtime_tick(_cyc_08012AD4);
    /* 08012AD8  08012ad8 A orr r2,r2,r3,lsl r4 */
    g_cpu.R[15] = 0x08012AD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AD8 = 1u;
    _cyc_08012AD8 = 2u;
    uint32_t _rm_08012AD8 = g_cpu.R[3];
    uint32_t _op2_08012AD8;
    uint32_t _co_08012AD8;
    uint32_t _cnt_08012AD8 = (g_cpu.R[4]) & 0xFFu;
    if (_cnt_08012AD8 == 0)      { _op2_08012AD8 = _rm_08012AD8; _co_08012AD8 = cpsr_c(); }
    else if (_cnt_08012AD8 < 32) { _op2_08012AD8 = _rm_08012AD8 << _cnt_08012AD8; _co_08012AD8 = (_rm_08012AD8 >> (32u - _cnt_08012AD8)) & 1u; }
    else if (_cnt_08012AD8 == 32){ _op2_08012AD8 = 0u; _co_08012AD8 = _rm_08012AD8 & 1u; }
    else                                { _op2_08012AD8 = 0u; _co_08012AD8 = 0u; }
    uint32_t _rn_08012AD8 = g_cpu.R[2];
    uint32_t _r_08012AD8;
    _r_08012AD8 = _rn_08012AD8 | _op2_08012AD8;
    g_cpu.R[2] = _r_08012AD8;
    g_cpu.R[15] = 0x08012ADCu;
    runtime_tick(_cyc_08012AD8);
    /* 08012ADC  08012adc A bx r14 */
    g_cpu.R[15] = 0x08012ADCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012ADC = 1u;
    _cyc_08012ADC = 3u;
    uint32_t _bxt_08012ADC = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08012ADC & ~1u;
    runtime_tick(_cyc_08012ADC);
    if (_bxt_08012ADC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08012ADC);
    return;
    g_cpu.R[15] = 0x08012AE0u;
    runtime_tick(_cyc_08012ADC);
    /* fall-through to 0x08012AE0 */
    g_cpu.R[15] = 0x08012AE0u;
    runtime_dispatch(0x08012AE0u);
    return;
}


/* 0x08012AE4  mode=arm  end=0x08012AF0  branches=0  indirect */
void gf_memory_reads_arm_at_08012AE4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012AE4u);
    /* 08012AE4  08012ae4 A sub r0,r1,r9 */
    g_cpu.R[15] = 0x08012AE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AE4 = 1u;
    _cyc_08012AE4 = 1u;
    uint32_t _rm_08012AE4 = g_cpu.R[9];
    uint32_t _op2_08012AE4;
    uint32_t _co_08012AE4;
    _op2_08012AE4 = _rm_08012AE4;
    _co_08012AE4 = cpsr_c();
    uint32_t _rn_08012AE4 = g_cpu.R[1];
    uint32_t _r_08012AE4;
    _r_08012AE4 = _rn_08012AE4 - _op2_08012AE4;
    g_cpu.R[0] = _r_08012AE4;
    g_cpu.R[15] = 0x08012AE8u;
    runtime_tick(_cyc_08012AE4);
    /* 08012AE8  08012ae8 A ldm r13!,{r5,r6,r7,r9,r14} */
    g_cpu.R[15] = 0x08012AE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AE8 = 1u;
    _cyc_08012AE8 = 2u;
    uint32_t _b_08012AE8 = g_cpu.R[13];
    uint32_t _a_08012AE8 = _b_08012AE8;
    uint32_t _fb_08012AE8 = _b_08012AE8 + 20u;
    _cyc_08012AE8 += runtime_mem_cycles(_a_08012AE8 & ~3u, 4u, 0u);
    g_cpu.R[5] = bus_read_u32(_a_08012AE8 & ~3u);
    _a_08012AE8 += 4u;
    _cyc_08012AE8 += runtime_mem_cycles(_a_08012AE8 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08012AE8 & ~3u);
    _a_08012AE8 += 4u;
    _cyc_08012AE8 += runtime_mem_cycles(_a_08012AE8 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08012AE8 & ~3u);
    _a_08012AE8 += 4u;
    _cyc_08012AE8 += runtime_mem_cycles(_a_08012AE8 & ~3u, 4u, 1u);
    g_cpu.R[9] = bus_read_u32(_a_08012AE8 & ~3u);
    _a_08012AE8 += 4u;
    _cyc_08012AE8 += runtime_mem_cycles(_a_08012AE8 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_08012AE8 & ~3u);
    _a_08012AE8 += 4u;
    g_cpu.R[13] = _fb_08012AE8;
    g_cpu.R[15] = 0x08012AECu;
    runtime_tick(_cyc_08012AE8);
    /* 08012AEC  08012aec A bx r14 */
    g_cpu.R[15] = 0x08012AECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AEC = 1u;
    _cyc_08012AEC = 3u;
    uint32_t _bxt_08012AEC = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08012AEC & ~1u;
    runtime_tick(_cyc_08012AEC);
    if (_bxt_08012AEC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08012AEC);
    return;
    g_cpu.R[15] = 0x08012AF0u;
    runtime_tick(_cyc_08012AEC);
    /* fall-through to 0x08012AF0 */
    g_cpu.R[15] = 0x08012AF0u;
    runtime_dispatch(0x08012AF0u);
    return;
}


/* 0x08012B04  mode=arm  end=0x08012B14  branches=6 */
void gf_memory_reads_arm_at_08012B04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012B04u);
    /* 08012B04  08012b04 A ldrb r14,[r0],#0x1 */
    g_cpu.R[15] = 0x08012B04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B04 = 1u;
    _cyc_08012B04 = 2u;
    uint32_t _base_08012B04 = g_cpu.R[0];
    uint32_t _off_08012B04;
    _off_08012B04 = 0x00000001u;
    uint32_t _ea_08012B04 = _base_08012B04;
    uint32_t _post_08012B04 = _base_08012B04 + _off_08012B04;
    _cyc_08012B04 += runtime_mem_cycles(_ea_08012B04, 1u, 0u);
    uint32_t _v_08012B04;
    _v_08012B04 = bus_read_u8(_ea_08012B04);
    if (0u != 14u) g_cpu.R[0] = _post_08012B04;
    g_cpu.R[14] = _v_08012B04;
    g_cpu.R[15] = 0x08012B08u;
    runtime_tick(_cyc_08012B04);
    /* 08012B08  08012b08 A mov r3,#0x1000000 */
    g_cpu.R[15] = 0x08012B08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B08 = 1u;
    _cyc_08012B08 = 1u;
    uint32_t _r_08012B08;
    _r_08012B08 = 0x01000000u;
    g_cpu.R[3] = _r_08012B08;
    g_cpu.R[15] = 0x08012B0Cu;
    runtime_tick(_cyc_08012B08);
    /* 08012B0C  08012b0c A orrs r14,r3,r14,lsl #25 */
    g_cpu.R[15] = 0x08012B0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B0C = 1u;
    _cyc_08012B0C = 1u;
    uint32_t _rm_08012B0C = g_cpu.R[14];
    uint32_t _op2_08012B0C;
    uint32_t _co_08012B0C;
    _op2_08012B0C = _rm_08012B0C << 25;
    _co_08012B0C = (_rm_08012B0C >> 7) & 1u;
    uint32_t _rn_08012B0C = g_cpu.R[3];
    uint32_t _r_08012B0C;
    _r_08012B0C = _rn_08012B0C | _op2_08012B0C;
    arm_set_nzc_logic(_r_08012B0C, _co_08012B0C);
    g_cpu.R[14] = _r_08012B0C;
    g_cpu.R[15] = 0x08012B10u;
    runtime_tick(_cyc_08012B0C);
    /* 08012B10  08012b10 A bcs 0x08012b28 */
    g_cpu.R[15] = 0x08012B10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B10 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012B10 = 3u;
        g_cpu.R[15] = 0x08012B28u;
        runtime_tick(_cyc_08012B10);
        gf_memory_reads_arm_at_08012B28();
        return;
    }
    g_cpu.R[15] = 0x08012B14u;
    runtime_tick(_cyc_08012B10);
    /* fall-through to 0x08012B14 */
    g_cpu.R[15] = 0x08012B14u;
    runtime_dispatch(0x08012B14u);
    return;
}


/* 0x08012B28  mode=arm  end=0x08012B40  branches=3 */
void gf_memory_reads_arm_at_08012B28(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012B28u);
    /* 08012B28  08012b28 A ldrb r3,[r0],#0x1 */
    g_cpu.R[15] = 0x08012B28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B28 = 1u;
    _cyc_08012B28 = 2u;
    uint32_t _base_08012B28 = g_cpu.R[0];
    uint32_t _off_08012B28;
    _off_08012B28 = 0x00000001u;
    uint32_t _ea_08012B28 = _base_08012B28;
    uint32_t _post_08012B28 = _base_08012B28 + _off_08012B28;
    _cyc_08012B28 += runtime_mem_cycles(_ea_08012B28, 1u, 0u);
    uint32_t _v_08012B28;
    _v_08012B28 = bus_read_u8(_ea_08012B28);
    if (0u != 3u) g_cpu.R[0] = _post_08012B28;
    g_cpu.R[3] = _v_08012B28;
    g_cpu.R[15] = 0x08012B2Cu;
    runtime_tick(_cyc_08012B28);
    /* 08012B2C  08012b2c A ldrb r4,[r0],#0x1 */
    g_cpu.R[15] = 0x08012B2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B2C = 1u;
    _cyc_08012B2C = 2u;
    uint32_t _base_08012B2C = g_cpu.R[0];
    uint32_t _off_08012B2C;
    _off_08012B2C = 0x00000001u;
    uint32_t _ea_08012B2C = _base_08012B2C;
    uint32_t _post_08012B2C = _base_08012B2C + _off_08012B2C;
    _cyc_08012B2C += runtime_mem_cycles(_ea_08012B2C, 1u, 0u);
    uint32_t _v_08012B2C;
    _v_08012B2C = bus_read_u8(_ea_08012B2C);
    if (0u != 4u) g_cpu.R[0] = _post_08012B2C;
    g_cpu.R[4] = _v_08012B2C;
    g_cpu.R[15] = 0x08012B30u;
    runtime_tick(_cyc_08012B2C);
    /* 08012B30  08012b30 A and r2,r3,#0xf0 */
    g_cpu.R[15] = 0x08012B30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B30 = 1u;
    _cyc_08012B30 = 1u;
    uint32_t _rn_08012B30 = g_cpu.R[3];
    uint32_t _r_08012B30;
    _r_08012B30 = _rn_08012B30 & 0x000000F0u;
    g_cpu.R[2] = _r_08012B30;
    g_cpu.R[15] = 0x08012B34u;
    runtime_tick(_cyc_08012B30);
    /* 08012B34  08012b34 A orr r2,r4,r2,lsl #4 */
    g_cpu.R[15] = 0x08012B34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B34 = 1u;
    _cyc_08012B34 = 1u;
    uint32_t _rm_08012B34 = g_cpu.R[2];
    uint32_t _op2_08012B34;
    uint32_t _co_08012B34;
    _op2_08012B34 = _rm_08012B34 << 4;
    _co_08012B34 = (_rm_08012B34 >> 28) & 1u;
    uint32_t _rn_08012B34 = g_cpu.R[4];
    uint32_t _r_08012B34;
    _r_08012B34 = _rn_08012B34 | _op2_08012B34;
    g_cpu.R[2] = _r_08012B34;
    g_cpu.R[15] = 0x08012B38u;
    runtime_tick(_cyc_08012B34);
    /* 08012B38  08012b38 A ands r3,r3,#0xf */
    g_cpu.R[15] = 0x08012B38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B38 = 1u;
    _cyc_08012B38 = 1u;
    uint32_t _rn_08012B38 = g_cpu.R[3];
    uint32_t _r_08012B38;
    _r_08012B38 = _rn_08012B38 & 0x0000000Fu;
    arm_set_nzc_logic(_r_08012B38, cpsr_c());
    g_cpu.R[3] = _r_08012B38;
    g_cpu.R[15] = 0x08012B3Cu;
    runtime_tick(_cyc_08012B38);
    /* 08012B3C  08012b3c A beq 0x08012b5c */
    g_cpu.R[15] = 0x08012B3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B3C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08012B3C = 3u;
        g_cpu.R[15] = 0x08012B5Cu;
        runtime_tick(_cyc_08012B3C);
        gf_memory_reads_arm_at_08012B5C();
        return;
    }
    g_cpu.R[15] = 0x08012B40u;
    runtime_tick(_cyc_08012B3C);
    /* fall-through to 0x08012B40 */
    g_cpu.R[15] = 0x08012B40u;
    runtime_dispatch(0x08012B40u);
    return;
}


/* 0x08012B5C  mode=arm  end=0x08012B70  branches=2 */
void gf_memory_reads_arm_at_08012B5C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012B5Cu);
    /* 08012B5C  08012b5c A movs r2,r2 */
    g_cpu.R[15] = 0x08012B5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B5C = 1u;
    _cyc_08012B5C = 1u;
    uint32_t _rm_08012B5C = g_cpu.R[2];
    uint32_t _op2_08012B5C;
    uint32_t _co_08012B5C;
    _op2_08012B5C = _rm_08012B5C;
    _co_08012B5C = cpsr_c();
    uint32_t _r_08012B5C;
    _r_08012B5C = _op2_08012B5C;
    arm_set_nzc_logic(_r_08012B5C, _co_08012B5C);
    g_cpu.R[2] = _r_08012B5C;
    g_cpu.R[15] = 0x08012B60u;
    runtime_tick(_cyc_08012B5C);
    /* 08012B60  08012b60 A beq 0x08012ae4 */
    g_cpu.R[15] = 0x08012B60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B60 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08012B60 = 3u;
        g_cpu.R[15] = 0x08012AE4u;
        runtime_tick(_cyc_08012B60);
        gf_memory_reads_arm_at_08012AE4();
        return;
    }
    g_cpu.R[15] = 0x08012B64u;
    runtime_tick(_cyc_08012B60);
    /* 08012B64  08012b64 A ldrb r3,[r0],#0x1 */
    g_cpu.R[15] = 0x08012B64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B64 = 1u;
    _cyc_08012B64 = 2u;
    uint32_t _base_08012B64 = g_cpu.R[0];
    uint32_t _off_08012B64;
    _off_08012B64 = 0x00000001u;
    uint32_t _ea_08012B64 = _base_08012B64;
    uint32_t _post_08012B64 = _base_08012B64 + _off_08012B64;
    _cyc_08012B64 += runtime_mem_cycles(_ea_08012B64, 1u, 0u);
    uint32_t _v_08012B64;
    _v_08012B64 = bus_read_u8(_ea_08012B64);
    if (0u != 3u) g_cpu.R[0] = _post_08012B64;
    g_cpu.R[3] = _v_08012B64;
    g_cpu.R[15] = 0x08012B68u;
    runtime_tick(_cyc_08012B64);
    /* 08012B68  08012b68 A add r3,r3,#0x10 */
    g_cpu.R[15] = 0x08012B68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B68 = 1u;
    _cyc_08012B68 = 1u;
    uint32_t _rn_08012B68 = g_cpu.R[3];
    uint32_t _r_08012B68;
    _r_08012B68 = _rn_08012B68 + 0x00000010u;
    g_cpu.R[3] = _r_08012B68;
    g_cpu.R[15] = 0x08012B6Cu;
    runtime_tick(_cyc_08012B68);
    /* 08012B6C  08012b6c A b 0x08012b40 */
    g_cpu.R[15] = 0x08012B6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B6C = 1u;
    _cyc_08012B6C = 3u;
    g_cpu.R[15] = 0x08012B40u;
    runtime_tick(_cyc_08012B6C);
    gf_memory_transfer_arm_at_08012B40();
    return;
    g_cpu.R[15] = 0x08012B70u;
    runtime_tick(_cyc_08012B6C);
    /* fall-through to 0x08012B70 */
    g_cpu.R[15] = 0x08012B70u;
    runtime_dispatch(0x08012B70u);
    return;
}


/* 0x08021508  mode=arm  end=0x0802151C  branches=1  indirect */
void gf_memory_reads_arm_at_08021508(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021508u);
    /* 08021508  08021508 A mov r10,r0 */
    g_cpu.R[15] = 0x08021508u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021508 = 1u;
    _cyc_08021508 = 1u;
    uint32_t _rm_08021508 = g_cpu.R[0];
    uint32_t _op2_08021508;
    uint32_t _co_08021508;
    _op2_08021508 = _rm_08021508;
    _co_08021508 = cpsr_c();
    uint32_t _r_08021508;
    _r_08021508 = _op2_08021508;
    g_cpu.R[10] = _r_08021508;
    g_cpu.R[15] = 0x0802150Cu;
    runtime_tick(_cyc_08021508);
    /* 0802150C  0802150c A mov r0,r8 */
    g_cpu.R[15] = 0x0802150Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802150C = 1u;
    _cyc_0802150C = 1u;
    uint32_t _rm_0802150C = g_cpu.R[8];
    uint32_t _op2_0802150C;
    uint32_t _co_0802150C;
    _op2_0802150C = _rm_0802150C;
    _co_0802150C = cpsr_c();
    uint32_t _r_0802150C;
    _r_0802150C = _op2_0802150C;
    g_cpu.R[0] = _r_0802150C;
    g_cpu.R[15] = 0x08021510u;
    runtime_tick(_cyc_0802150C);
    /* 08021510  08021510 A ldr r12,[r9,#0x64] */
    g_cpu.R[15] = 0x08021510u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021510 = 1u;
    _cyc_08021510 = 2u;
    uint32_t _base_08021510 = g_cpu.R[9];
    uint32_t _off_08021510;
    _off_08021510 = 0x00000064u;
    uint32_t _ea_08021510 = _base_08021510 + _off_08021510;
    uint32_t _post_08021510 = _base_08021510 + _off_08021510;
    _cyc_08021510 += runtime_mem_cycles(_ea_08021510, 4u, 0u);
    uint32_t _v_08021510;
    { uint32_t _w = bus_read_u32(_ea_08021510 & ~3u); uint32_t _rot = (_ea_08021510 & 3u) * 8u; _v_08021510 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[12] = _v_08021510;
    g_cpu.R[15] = 0x08021514u;
    runtime_tick(_cyc_08021510);
    /* 08021514  08021514 A mov r14,r15 */
    g_cpu.R[15] = 0x08021514u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021514 = 1u;
    _cyc_08021514 = 1u;
    uint32_t _rm_08021514 = 0x0802151Cu;
    uint32_t _op2_08021514;
    uint32_t _co_08021514;
    _op2_08021514 = _rm_08021514;
    _co_08021514 = cpsr_c();
    uint32_t _r_08021514;
    _r_08021514 = _op2_08021514;
    g_cpu.R[14] = _r_08021514;
    g_cpu.R[15] = 0x08021518u;
    runtime_tick(_cyc_08021514);
    /* 08021518  08021518 A bx r12 */
    g_cpu.R[15] = 0x08021518u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021518 = 1u;
    _cyc_08021518 = 3u;
    uint32_t _bxt_08021518 = g_cpu.R[12];
    g_cpu.R[15] = _bxt_08021518 & ~1u;
    runtime_tick(_cyc_08021518);
    runtime_dispatch_with_exchange(_bxt_08021518);
    return;
    g_cpu.R[15] = 0x0802151Cu;
    runtime_tick(_cyc_08021518);
    /* fall-through to 0x0802151C */
    g_cpu.R[15] = 0x0802151Cu;
    runtime_dispatch(0x0802151Cu);
    return;
}


/* 0x08021608  mode=arm  end=0x08021610  branches=2 */
void gf_memory_reads_arm_at_08021608(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021608u);
    /* 08021608  08021608 A mov r8,#0x9f */
    g_cpu.R[15] = 0x08021608u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021608 = 1u;
    _cyc_08021608 = 1u;
    uint32_t _r_08021608;
    _r_08021608 = 0x0000009Fu;
    g_cpu.R[8] = _r_08021608;
    g_cpu.R[15] = 0x0802160Cu;
    runtime_tick(_cyc_08021608);
    /* 0802160C  0802160c A ldr r14,[r15,#0x78] */
    g_cpu.R[15] = 0x0802160Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802160C = 1u;
    _cyc_0802160C = 2u;
    uint32_t _base_0802160C = 0x08021614u;
    uint32_t _off_0802160C;
    _off_0802160C = 0x00000078u;
    uint32_t _ea_0802160C = _base_0802160C + _off_0802160C;
    uint32_t _post_0802160C = _base_0802160C + _off_0802160C;
    _cyc_0802160C += runtime_mem_cycles(_ea_0802160C, 4u, 0u);
    uint32_t _v_0802160C;
    { uint32_t _w = bus_read_u32(_ea_0802160C & ~3u); uint32_t _rot = (_ea_0802160C & 3u) * 8u; _v_0802160C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[14] = _v_0802160C;
    g_cpu.R[15] = 0x08021610u;
    runtime_tick(_cyc_0802160C);
    /* fall-through to 0x08021610 */
    g_cpu.R[15] = 0x08021610u;
    runtime_dispatch(0x08021610u);
    return;
}


/* 0x080216E4  mode=arm  end=0x080216F0  branches=0  indirect */
void gf_memory_reads_arm_at_080216E4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080216E4u);
    /* 080216E4  080216e4 A add r13,r13,#0x8 */
    g_cpu.R[15] = 0x080216E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216E4 = 1u;
    _cyc_080216E4 = 1u;
    uint32_t _rn_080216E4 = g_cpu.R[13];
    uint32_t _r_080216E4;
    _r_080216E4 = _rn_080216E4 + 0x00000008u;
    g_cpu.R[13] = _r_080216E4;
    g_cpu.R[15] = 0x080216E8u;
    runtime_tick(_cyc_080216E4);
    /* 080216E8  080216e8 A ldm r13!,{r5,r6,r7,r8,r9,r10,r14} */
    g_cpu.R[15] = 0x080216E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216E8 = 1u;
    _cyc_080216E8 = 2u;
    uint32_t _b_080216E8 = g_cpu.R[13];
    uint32_t _a_080216E8 = _b_080216E8;
    uint32_t _fb_080216E8 = _b_080216E8 + 28u;
    _cyc_080216E8 += runtime_mem_cycles(_a_080216E8 & ~3u, 4u, 0u);
    g_cpu.R[5] = bus_read_u32(_a_080216E8 & ~3u);
    _a_080216E8 += 4u;
    _cyc_080216E8 += runtime_mem_cycles(_a_080216E8 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_080216E8 & ~3u);
    _a_080216E8 += 4u;
    _cyc_080216E8 += runtime_mem_cycles(_a_080216E8 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_080216E8 & ~3u);
    _a_080216E8 += 4u;
    _cyc_080216E8 += runtime_mem_cycles(_a_080216E8 & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_080216E8 & ~3u);
    _a_080216E8 += 4u;
    _cyc_080216E8 += runtime_mem_cycles(_a_080216E8 & ~3u, 4u, 1u);
    g_cpu.R[9] = bus_read_u32(_a_080216E8 & ~3u);
    _a_080216E8 += 4u;
    _cyc_080216E8 += runtime_mem_cycles(_a_080216E8 & ~3u, 4u, 1u);
    g_cpu.R[10] = bus_read_u32(_a_080216E8 & ~3u);
    _a_080216E8 += 4u;
    _cyc_080216E8 += runtime_mem_cycles(_a_080216E8 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_080216E8 & ~3u);
    _a_080216E8 += 4u;
    g_cpu.R[13] = _fb_080216E8;
    g_cpu.R[15] = 0x080216ECu;
    runtime_tick(_cyc_080216E8);
    /* 080216EC  080216ec A bx r14 */
    g_cpu.R[15] = 0x080216ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080216EC = 1u;
    _cyc_080216EC = 3u;
    uint32_t _bxt_080216EC = g_cpu.R[14];
    g_cpu.R[15] = _bxt_080216EC & ~1u;
    runtime_tick(_cyc_080216EC);
    if (_bxt_080216EC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_080216EC);
    return;
    g_cpu.R[15] = 0x080216F0u;
    runtime_tick(_cyc_080216EC);
    /* fall-through to 0x080216F0 */
    g_cpu.R[15] = 0x080216F0u;
    runtime_dispatch(0x080216F0u);
    return;
}


/* 0x08021700  mode=arm  end=0x08021704  branches=0  indirect */
void gf_memory_reads_arm_at_08021700(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021700u);
    /* 08021700  08021700 A ldm r13!,{r15} */
    g_cpu.R[15] = 0x08021700u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021700 = 1u;
    _cyc_08021700 = 4u;
    uint32_t _b_08021700 = g_cpu.R[13];
    uint32_t _a_08021700 = _b_08021700;
    uint32_t _fb_08021700 = _b_08021700 + 4u;
    _cyc_08021700 += runtime_mem_cycles(_a_08021700 & ~3u, 4u, 0u);
    uint32_t _pc_08021700 = bus_read_u32(_a_08021700 & ~3u);
    g_cpu.R[15] = _pc_08021700 & ~1u;
    _a_08021700 += 4u;
    g_cpu.R[13] = _fb_08021700;
    runtime_tick(_cyc_08021700);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch(g_cpu.R[15]);
    return;
    g_cpu.R[15] = 0x08021704u;
    runtime_tick(_cyc_08021700);
    /* fall-through to 0x08021704 */
    g_cpu.R[15] = 0x08021704u;
    runtime_dispatch(0x08021704u);
    return;
}


/* 0x08021910  mode=arm  end=0x08021918  branches=0  indirect */
void gf_memory_reads_arm_at_08021910(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021910u);
    /* 08021910  08021910 A ldm r13!,{r5,r6,r7,r8,r9,r10,r14} */
    g_cpu.R[15] = 0x08021910u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021910 = 1u;
    _cyc_08021910 = 2u;
    uint32_t _b_08021910 = g_cpu.R[13];
    uint32_t _a_08021910 = _b_08021910;
    uint32_t _fb_08021910 = _b_08021910 + 28u;
    _cyc_08021910 += runtime_mem_cycles(_a_08021910 & ~3u, 4u, 0u);
    g_cpu.R[5] = bus_read_u32(_a_08021910 & ~3u);
    _a_08021910 += 4u;
    _cyc_08021910 += runtime_mem_cycles(_a_08021910 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08021910 & ~3u);
    _a_08021910 += 4u;
    _cyc_08021910 += runtime_mem_cycles(_a_08021910 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08021910 & ~3u);
    _a_08021910 += 4u;
    _cyc_08021910 += runtime_mem_cycles(_a_08021910 & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_08021910 & ~3u);
    _a_08021910 += 4u;
    _cyc_08021910 += runtime_mem_cycles(_a_08021910 & ~3u, 4u, 1u);
    g_cpu.R[9] = bus_read_u32(_a_08021910 & ~3u);
    _a_08021910 += 4u;
    _cyc_08021910 += runtime_mem_cycles(_a_08021910 & ~3u, 4u, 1u);
    g_cpu.R[10] = bus_read_u32(_a_08021910 & ~3u);
    _a_08021910 += 4u;
    _cyc_08021910 += runtime_mem_cycles(_a_08021910 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_08021910 & ~3u);
    _a_08021910 += 4u;
    g_cpu.R[13] = _fb_08021910;
    g_cpu.R[15] = 0x08021914u;
    runtime_tick(_cyc_08021910);
    /* 08021914  08021914 A bx r14 */
    g_cpu.R[15] = 0x08021914u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021914 = 1u;
    _cyc_08021914 = 3u;
    uint32_t _bxt_08021914 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08021914 & ~1u;
    runtime_tick(_cyc_08021914);
    if (_bxt_08021914 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08021914);
    return;
    g_cpu.R[15] = 0x08021918u;
    runtime_tick(_cyc_08021914);
    /* fall-through to 0x08021918 */
    g_cpu.R[15] = 0x08021918u;
    runtime_dispatch(0x08021918u);
    return;
}


/* 0x08038730  mode=arm  end=0x08038738  branches=1 */
void gf_memory_reads_arm_at_08038730(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038730u);
    /* 08038730  08038730 A ldr r0,[r13,#0xc] */
    g_cpu.R[15] = 0x08038730u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038730 = 1u;
    _cyc_08038730 = 2u;
    uint32_t _base_08038730 = g_cpu.R[13];
    uint32_t _off_08038730;
    _off_08038730 = 0x0000000Cu;
    uint32_t _ea_08038730 = _base_08038730 + _off_08038730;
    uint32_t _post_08038730 = _base_08038730 + _off_08038730;
    _cyc_08038730 += runtime_mem_cycles(_ea_08038730, 4u, 0u);
    uint32_t _v_08038730;
    { uint32_t _w = bus_read_u32(_ea_08038730 & ~3u); uint32_t _rot = (_ea_08038730 & 3u) * 8u; _v_08038730 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038730;
    g_cpu.R[15] = 0x08038734u;
    runtime_tick(_cyc_08038730);
    /* 08038734  08038734 A b 0x080388f0 */
    g_cpu.R[15] = 0x08038734u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038734 = 1u;
    _cyc_08038734 = 3u;
    g_cpu.R[15] = 0x080388F0u;
    runtime_tick(_cyc_08038734);
    gf_memory_reads_arm_at_080388F0();
    return;
    g_cpu.R[15] = 0x08038738u;
    runtime_tick(_cyc_08038734);
    /* fall-through to 0x08038738 */
    g_cpu.R[15] = 0x08038738u;
    runtime_dispatch(0x08038738u);
    return;
}


/* 0x080387B0  mode=arm  end=0x080387EC  branches=4 */
void gf_memory_reads_arm_at_080387B0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080387B0u);
    /* 080387B0  080387b0 A cmps r2,#0x3 */
    g_cpu.R[15] = 0x080387B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387B0 = 1u;
    _cyc_080387B0 = 1u;
    uint32_t _rn_080387B0 = g_cpu.R[2];
    uint32_t _r_080387B0;
    _r_080387B0 = _rn_080387B0 - 0x00000003u;
    arm_set_nzcv_sub(_rn_080387B0, 0x00000003u, _r_080387B0);
    g_cpu.R[15] = 0x080387B4u;
    runtime_tick(_cyc_080387B0);
    /* 080387B4  080387b4 A moveq r5,#0x1100 */
    g_cpu.R[15] = 0x080387B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387B4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080387B4 = 1u;
        uint32_t _r_080387B4;
        _r_080387B4 = 0x00001100u;
        g_cpu.R[5] = _r_080387B4;
    }
    g_cpu.R[15] = 0x080387B8u;
    runtime_tick(_cyc_080387B4);
    /* 080387B8  080387b8 A addeq r5,r5,#0x11 */
    g_cpu.R[15] = 0x080387B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387B8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080387B8 = 1u;
        uint32_t _rn_080387B8 = g_cpu.R[5];
        uint32_t _r_080387B8;
        _r_080387B8 = _rn_080387B8 + 0x00000011u;
        g_cpu.R[5] = _r_080387B8;
    }
    g_cpu.R[15] = 0x080387BCu;
    runtime_tick(_cyc_080387B8);
    /* 080387BC  080387bc A movne r5,#0x5500 */
    g_cpu.R[15] = 0x080387BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387BC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080387BC = 1u;
        uint32_t _r_080387BC;
        _r_080387BC = 0x00005500u;
        g_cpu.R[5] = _r_080387BC;
    }
    g_cpu.R[15] = 0x080387C0u;
    runtime_tick(_cyc_080387BC);
    /* 080387C0  080387c0 A addne r5,r5,#0x55 */
    g_cpu.R[15] = 0x080387C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387C0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080387C0 = 1u;
        uint32_t _rn_080387C0 = g_cpu.R[5];
        uint32_t _r_080387C0;
        _r_080387C0 = _rn_080387C0 + 0x00000055u;
        g_cpu.R[5] = _r_080387C0;
    }
    g_cpu.R[15] = 0x080387C4u;
    runtime_tick(_cyc_080387C0);
    /* 080387C4  080387c4 A ldr r0,[r13,#0x28] */
    g_cpu.R[15] = 0x080387C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387C4 = 1u;
    _cyc_080387C4 = 2u;
    uint32_t _base_080387C4 = g_cpu.R[13];
    uint32_t _off_080387C4;
    _off_080387C4 = 0x00000028u;
    uint32_t _ea_080387C4 = _base_080387C4 + _off_080387C4;
    uint32_t _post_080387C4 = _base_080387C4 + _off_080387C4;
    _cyc_080387C4 += runtime_mem_cycles(_ea_080387C4, 4u, 0u);
    uint32_t _v_080387C4;
    { uint32_t _w = bus_read_u32(_ea_080387C4 & ~3u); uint32_t _rot = (_ea_080387C4 & 3u) * 8u; _v_080387C4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080387C4;
    g_cpu.R[15] = 0x080387C8u;
    runtime_tick(_cyc_080387C4);
    /* 080387C8  080387c8 A ldrh r3,[r0,#0x16] */
    g_cpu.R[15] = 0x080387C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387C8 = 1u;
    _cyc_080387C8 = 2u;
    uint32_t _base_080387C8 = g_cpu.R[0];
    uint32_t _off_080387C8;
    _off_080387C8 = 0x00000016u;
    uint32_t _ea_080387C8 = _base_080387C8 + _off_080387C8;
    uint32_t _post_080387C8 = _base_080387C8 + _off_080387C8;
    _cyc_080387C8 += runtime_mem_cycles(_ea_080387C8, 2u, 0u);
    uint32_t _v_080387C8;
    { uint32_t _h = bus_read_u16(_ea_080387C8 & ~1u); if (_ea_080387C8 & 1u) _v_080387C8 = ((_h >> 8) | (_h << 24)); else _v_080387C8 = _h; }
    g_cpu.R[3] = _v_080387C8;
    g_cpu.R[15] = 0x080387CCu;
    runtime_tick(_cyc_080387C8);
    /* 080387CC  080387cc A tsts r3,#0x40 */
    g_cpu.R[15] = 0x080387CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387CC = 1u;
    _cyc_080387CC = 1u;
    uint32_t _rn_080387CC = g_cpu.R[3];
    uint32_t _r_080387CC;
    _r_080387CC = _rn_080387CC & 0x00000040u;
    arm_set_nzc_logic(_r_080387CC, cpsr_c());
    g_cpu.R[15] = 0x080387D0u;
    runtime_tick(_cyc_080387CC);
    /* 080387D0  080387d0 A beq 0x0803880c */
    g_cpu.R[15] = 0x080387D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387D0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080387D0 = 3u;
        g_cpu.R[15] = 0x0803880Cu;
        runtime_tick(_cyc_080387D0);
        gf_hardware_and_video_access_at_0803880C();
        return;
    }
    g_cpu.R[15] = 0x080387D4u;
    runtime_tick(_cyc_080387D0);
    /* 080387D4  080387d4 A cmps r2,#0x1 */
    g_cpu.R[15] = 0x080387D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387D4 = 1u;
    _cyc_080387D4 = 1u;
    uint32_t _rn_080387D4 = g_cpu.R[2];
    uint32_t _r_080387D4;
    _r_080387D4 = _rn_080387D4 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080387D4, 0x00000001u, _r_080387D4);
    g_cpu.R[15] = 0x080387D8u;
    runtime_tick(_cyc_080387D4);
    /* 080387D8  080387d8 A bhi 0x080387ec */
    g_cpu.R[15] = 0x080387D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387D8 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_080387D8 = 3u;
        g_cpu.R[15] = 0x080387ECu;
        runtime_tick(_cyc_080387D8);
        gf_indirect_control_flow_arm_at_080387EC();
        return;
    }
    g_cpu.R[15] = 0x080387DCu;
    runtime_tick(_cyc_080387D8);
    /* 080387DC  080387dc A addeq r9,r9,#0x2 */
    g_cpu.R[15] = 0x080387DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387DC = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080387DC = 1u;
        uint32_t _rn_080387DC = g_cpu.R[9];
        uint32_t _r_080387DC;
        _r_080387DC = _rn_080387DC + 0x00000002u;
        g_cpu.R[9] = _r_080387DC;
    }
    g_cpu.R[15] = 0x080387E0u;
    runtime_tick(_cyc_080387DC);
    /* 080387E0  080387e0 A beq 0x0803880c */
    g_cpu.R[15] = 0x080387E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387E0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080387E0 = 3u;
        g_cpu.R[15] = 0x0803880Cu;
        runtime_tick(_cyc_080387E0);
        gf_hardware_and_video_access_at_0803880C();
        return;
    }
    g_cpu.R[15] = 0x080387E4u;
    runtime_tick(_cyc_080387E0);
    /* 080387E4  080387e4 A sub r9,r9,#0x1 */
    g_cpu.R[15] = 0x080387E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387E4 = 1u;
    _cyc_080387E4 = 1u;
    uint32_t _rn_080387E4 = g_cpu.R[9];
    uint32_t _r_080387E4;
    _r_080387E4 = _rn_080387E4 - 0x00000001u;
    g_cpu.R[9] = _r_080387E4;
    g_cpu.R[15] = 0x080387E8u;
    runtime_tick(_cyc_080387E4);
    /* 080387E8  080387e8 A b 0x0803880c */
    g_cpu.R[15] = 0x080387E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387E8 = 1u;
    _cyc_080387E8 = 3u;
    g_cpu.R[15] = 0x0803880Cu;
    runtime_tick(_cyc_080387E8);
    gf_hardware_and_video_access_at_0803880C();
    return;
    g_cpu.R[15] = 0x080387ECu;
    runtime_tick(_cyc_080387E8);
    /* fall-through to 0x080387EC */
    g_cpu.R[15] = 0x080387ECu;
    runtime_dispatch(0x080387ECu);
    return;
}


/* 0x080388E0  mode=arm  end=0x080388F0  branches=1  indirect */
void gf_memory_reads_arm_at_080388E0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080388E0u);
    /* 080388E0  080388e0 A ldr r2,[r13] */
    g_cpu.R[15] = 0x080388E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388E0 = 1u;
    _cyc_080388E0 = 2u;
    uint32_t _base_080388E0 = g_cpu.R[13];
    uint32_t _off_080388E0;
    _off_080388E0 = 0x00000000u;
    uint32_t _ea_080388E0 = _base_080388E0 + _off_080388E0;
    uint32_t _post_080388E0 = _base_080388E0 + _off_080388E0;
    _cyc_080388E0 += runtime_mem_cycles(_ea_080388E0, 4u, 0u);
    uint32_t _v_080388E0;
    { uint32_t _w = bus_read_u32(_ea_080388E0 & ~3u); uint32_t _rot = (_ea_080388E0 & 3u) * 8u; _v_080388E0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080388E0;
    g_cpu.R[15] = 0x080388E4u;
    runtime_tick(_cyc_080388E0);
    /* 080388E4  080388e4 A cmps r2,#0x3 */
    g_cpu.R[15] = 0x080388E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388E4 = 1u;
    _cyc_080388E4 = 1u;
    uint32_t _rn_080388E4 = g_cpu.R[2];
    uint32_t _r_080388E4;
    _r_080388E4 = _rn_080388E4 - 0x00000003u;
    arm_set_nzcv_sub(_rn_080388E4, 0x00000003u, _r_080388E4);
    g_cpu.R[15] = 0x080388E8u;
    runtime_tick(_cyc_080388E4);
    /* 080388E8  080388e8 A bls 0x080387b0 */
    g_cpu.R[15] = 0x080388E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388E8 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_080388E8 = 3u;
        g_cpu.R[15] = 0x080387B0u;
        runtime_tick(_cyc_080388E8);
        gf_memory_reads_arm_at_080387B0();
        return;
    }
    g_cpu.R[15] = 0x080388ECu;
    runtime_tick(_cyc_080388E8);
    /* 080388EC  080388ec A ldr r0,[r13,#0x20] */
    g_cpu.R[15] = 0x080388ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388EC = 1u;
    _cyc_080388EC = 2u;
    uint32_t _base_080388EC = g_cpu.R[13];
    uint32_t _off_080388EC;
    _off_080388EC = 0x00000020u;
    uint32_t _ea_080388EC = _base_080388EC + _off_080388EC;
    uint32_t _post_080388EC = _base_080388EC + _off_080388EC;
    _cyc_080388EC += runtime_mem_cycles(_ea_080388EC, 4u, 0u);
    uint32_t _v_080388EC;
    { uint32_t _w = bus_read_u32(_ea_080388EC & ~3u); uint32_t _rot = (_ea_080388EC & 3u) * 8u; _v_080388EC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080388EC;
    g_cpu.R[15] = 0x080388F0u;
    runtime_tick(_cyc_080388EC);
    /* fall-through to 0x080388F0 */
    g_cpu.R[15] = 0x080388F0u;
    runtime_dispatch(0x080388F0u);
    return;
}


/* 0x080388F0  mode=arm  end=0x080388FC  branches=0  indirect */
void gf_memory_reads_arm_at_080388F0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080388F0u);
    /* 080388F0  080388f0 A add r13,r13,#0x2c */
    g_cpu.R[15] = 0x080388F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388F0 = 1u;
    _cyc_080388F0 = 1u;
    uint32_t _rn_080388F0 = g_cpu.R[13];
    uint32_t _r_080388F0;
    _r_080388F0 = _rn_080388F0 + 0x0000002Cu;
    g_cpu.R[13] = _r_080388F0;
    g_cpu.R[15] = 0x080388F4u;
    runtime_tick(_cyc_080388F0);
    /* 080388F4  080388f4 A ldm r13!,{r5,r6,r7,r8,r9,r10,r14} */
    g_cpu.R[15] = 0x080388F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388F4 = 1u;
    _cyc_080388F4 = 2u;
    uint32_t _b_080388F4 = g_cpu.R[13];
    uint32_t _a_080388F4 = _b_080388F4;
    uint32_t _fb_080388F4 = _b_080388F4 + 28u;
    _cyc_080388F4 += runtime_mem_cycles(_a_080388F4 & ~3u, 4u, 0u);
    g_cpu.R[5] = bus_read_u32(_a_080388F4 & ~3u);
    _a_080388F4 += 4u;
    _cyc_080388F4 += runtime_mem_cycles(_a_080388F4 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_080388F4 & ~3u);
    _a_080388F4 += 4u;
    _cyc_080388F4 += runtime_mem_cycles(_a_080388F4 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_080388F4 & ~3u);
    _a_080388F4 += 4u;
    _cyc_080388F4 += runtime_mem_cycles(_a_080388F4 & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_080388F4 & ~3u);
    _a_080388F4 += 4u;
    _cyc_080388F4 += runtime_mem_cycles(_a_080388F4 & ~3u, 4u, 1u);
    g_cpu.R[9] = bus_read_u32(_a_080388F4 & ~3u);
    _a_080388F4 += 4u;
    _cyc_080388F4 += runtime_mem_cycles(_a_080388F4 & ~3u, 4u, 1u);
    g_cpu.R[10] = bus_read_u32(_a_080388F4 & ~3u);
    _a_080388F4 += 4u;
    _cyc_080388F4 += runtime_mem_cycles(_a_080388F4 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_080388F4 & ~3u);
    _a_080388F4 += 4u;
    g_cpu.R[13] = _fb_080388F4;
    g_cpu.R[15] = 0x080388F8u;
    runtime_tick(_cyc_080388F4);
    /* 080388F8  080388f8 A bx r14 */
    g_cpu.R[15] = 0x080388F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388F8 = 1u;
    _cyc_080388F8 = 3u;
    uint32_t _bxt_080388F8 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_080388F8 & ~1u;
    runtime_tick(_cyc_080388F8);
    if (_bxt_080388F8 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_080388F8);
    return;
    g_cpu.R[15] = 0x080388FCu;
    runtime_tick(_cyc_080388F8);
    /* fall-through to 0x080388FC */
    g_cpu.R[15] = 0x080388FCu;
    runtime_dispatch(0x080388FCu);
    return;
}


/* 0x08038938  mode=arm  end=0x0803895C  branches=3  indirect */
void gf_memory_reads_arm_at_08038938(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038938u);
    /* 08038938  08038938 A ldrh r3,[r10],#0x2 */
    g_cpu.R[15] = 0x08038938u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038938 = 1u;
    _cyc_08038938 = 2u;
    uint32_t _base_08038938 = g_cpu.R[10];
    uint32_t _off_08038938;
    _off_08038938 = 0x00000002u;
    uint32_t _ea_08038938 = _base_08038938;
    uint32_t _post_08038938 = _base_08038938 + _off_08038938;
    _cyc_08038938 += runtime_mem_cycles(_ea_08038938, 2u, 0u);
    uint32_t _v_08038938;
    { uint32_t _h = bus_read_u16(_ea_08038938 & ~1u); if (_ea_08038938 & 1u) _v_08038938 = ((_h >> 8) | (_h << 24)); else _v_08038938 = _h; }
    if (10u != 3u) g_cpu.R[10] = _post_08038938;
    g_cpu.R[3] = _v_08038938;
    g_cpu.R[15] = 0x0803893Cu;
    runtime_tick(_cyc_08038938);
    /* 0803893C  0803893c A cmps r3,#0x0 */
    g_cpu.R[15] = 0x0803893Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803893C = 1u;
    _cyc_0803893C = 1u;
    uint32_t _rn_0803893C = g_cpu.R[3];
    uint32_t _r_0803893C;
    _r_0803893C = _rn_0803893C - 0x00000000u;
    arm_set_nzcv_sub(_rn_0803893C, 0x00000000u, _r_0803893C);
    g_cpu.R[15] = 0x08038940u;
    runtime_tick(_cyc_0803893C);
    /* 08038940  08038940 A beq 0x08038aa4 */
    g_cpu.R[15] = 0x08038940u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038940 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038940 = 3u;
        g_cpu.R[15] = 0x08038AA4u;
        runtime_tick(_cyc_08038940);
        gf_memory_transfer_arm_at_08038AA4();
        return;
    }
    g_cpu.R[15] = 0x08038944u;
    runtime_tick(_cyc_08038940);
    /* 08038944  08038944 A cmps r5,#0x0 */
    g_cpu.R[15] = 0x08038944u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038944 = 1u;
    _cyc_08038944 = 1u;
    uint32_t _rn_08038944 = g_cpu.R[5];
    uint32_t _r_08038944;
    _r_08038944 = _rn_08038944 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038944, 0x00000000u, _r_08038944);
    g_cpu.R[15] = 0x08038948u;
    runtime_tick(_cyc_08038944);
    /* 08038948  08038948 A bne 0x08038a10 */
    g_cpu.R[15] = 0x08038948u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038948 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08038948 = 3u;
        g_cpu.R[15] = 0x08038A10u;
        runtime_tick(_cyc_08038948);
        gf_memory_reads_arm_at_08038A10();
        return;
    }
    g_cpu.R[15] = 0x0803894Cu;
    runtime_tick(_cyc_08038948);
    /* 0803894C  0803894c A sub r3,r3,#0xf000 */
    g_cpu.R[15] = 0x0803894Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803894C = 1u;
    _cyc_0803894C = 1u;
    uint32_t _rn_0803894C = g_cpu.R[3];
    uint32_t _r_0803894C;
    _r_0803894C = _rn_0803894C - 0x0000F000u;
    g_cpu.R[3] = _r_0803894C;
    g_cpu.R[15] = 0x08038950u;
    runtime_tick(_cyc_0803894C);
    /* 08038950  08038950 A sub r3,r3,#0x7 */
    g_cpu.R[15] = 0x08038950u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038950 = 1u;
    _cyc_08038950 = 1u;
    uint32_t _rn_08038950 = g_cpu.R[3];
    uint32_t _r_08038950;
    _r_08038950 = _rn_08038950 - 0x00000007u;
    g_cpu.R[3] = _r_08038950;
    g_cpu.R[15] = 0x08038954u;
    runtime_tick(_cyc_08038950);
    /* 08038954  08038954 A cmps r3,#0x13 */
    g_cpu.R[15] = 0x08038954u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038954 = 1u;
    _cyc_08038954 = 1u;
    uint32_t _rn_08038954 = g_cpu.R[3];
    uint32_t _r_08038954;
    _r_08038954 = _rn_08038954 - 0x00000013u;
    arm_set_nzcv_sub(_rn_08038954, 0x00000013u, _r_08038954);
    g_cpu.R[15] = 0x08038958u;
    runtime_tick(_cyc_08038954);
    /* 08038958  08038958 A ldrls r15,[r15,+r3] */
    g_cpu.R[15] = 0x08038958u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038958 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08038958 = 4u;
        uint32_t _base_08038958 = 0x08038960u;
        uint32_t _off_08038958;
        uint32_t _morm_08038958 = g_cpu.R[3];
        _off_08038958 = _morm_08038958 << 2;
        uint32_t _ea_08038958 = _base_08038958 + _off_08038958;
        uint32_t _post_08038958 = _base_08038958 + _off_08038958;
        _cyc_08038958 += runtime_mem_cycles(_ea_08038958, 4u, 0u);
        uint32_t _v_08038958;
        { uint32_t _w = bus_read_u32(_ea_08038958 & ~3u); uint32_t _rot = (_ea_08038958 & 3u) * 8u; _v_08038958 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
        g_cpu.R[15] = _v_08038958 & ~1u;
        runtime_tick(_cyc_08038958);
        runtime_dispatch(_v_08038958 & ~1u);
        return;
    }
    g_cpu.R[15] = 0x0803895Cu;
    runtime_tick(_cyc_08038958);
    /* fall-through to 0x0803895C */
    g_cpu.R[15] = 0x0803895Cu;
    runtime_dispatch(0x0803895Cu);
    return;
}


/* 0x08038A10  mode=arm  end=0x08038A20  branches=1  indirect */
void gf_memory_reads_arm_at_08038A10(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038A10u);
    /* 08038A10  08038a10 A sub r3,r3,#0xf000 */
    g_cpu.R[15] = 0x08038A10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038A10 = 1u;
    _cyc_08038A10 = 1u;
    uint32_t _rn_08038A10 = g_cpu.R[3];
    uint32_t _r_08038A10;
    _r_08038A10 = _rn_08038A10 - 0x0000F000u;
    g_cpu.R[3] = _r_08038A10;
    g_cpu.R[15] = 0x08038A14u;
    runtime_tick(_cyc_08038A10);
    /* 08038A14  08038a14 A sub r3,r3,#0x7 */
    g_cpu.R[15] = 0x08038A14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038A14 = 1u;
    _cyc_08038A14 = 1u;
    uint32_t _rn_08038A14 = g_cpu.R[3];
    uint32_t _r_08038A14;
    _r_08038A14 = _rn_08038A14 - 0x00000007u;
    g_cpu.R[3] = _r_08038A14;
    g_cpu.R[15] = 0x08038A18u;
    runtime_tick(_cyc_08038A14);
    /* 08038A18  08038a18 A cmps r3,#0x14 */
    g_cpu.R[15] = 0x08038A18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038A18 = 1u;
    _cyc_08038A18 = 1u;
    uint32_t _rn_08038A18 = g_cpu.R[3];
    uint32_t _r_08038A18;
    _r_08038A18 = _rn_08038A18 - 0x00000014u;
    arm_set_nzcv_sub(_rn_08038A18, 0x00000014u, _r_08038A18);
    g_cpu.R[15] = 0x08038A1Cu;
    runtime_tick(_cyc_08038A18);
    /* 08038A1C  08038a1c A ldrls r15,[r15,+r3] */
    g_cpu.R[15] = 0x08038A1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038A1C = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08038A1C = 4u;
        uint32_t _base_08038A1C = 0x08038A24u;
        uint32_t _off_08038A1C;
        uint32_t _morm_08038A1C = g_cpu.R[3];
        _off_08038A1C = _morm_08038A1C << 2;
        uint32_t _ea_08038A1C = _base_08038A1C + _off_08038A1C;
        uint32_t _post_08038A1C = _base_08038A1C + _off_08038A1C;
        _cyc_08038A1C += runtime_mem_cycles(_ea_08038A1C, 4u, 0u);
        uint32_t _v_08038A1C;
        { uint32_t _w = bus_read_u32(_ea_08038A1C & ~3u); uint32_t _rot = (_ea_08038A1C & 3u) * 8u; _v_08038A1C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
        g_cpu.R[15] = _v_08038A1C & ~1u;
        runtime_tick(_cyc_08038A1C);
        runtime_dispatch(_v_08038A1C & ~1u);
        return;
    }
    g_cpu.R[15] = 0x08038A20u;
    runtime_tick(_cyc_08038A1C);
    /* fall-through to 0x08038A20 */
    g_cpu.R[15] = 0x08038A20u;
    runtime_dispatch(0x08038A20u);
    return;
}


/* 0x08118238  mode=arm  end=0x08118240  branches=0  indirect */
void gf_memory_reads_arm_at_08118238(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08118238u);
    /* 08118238  08118238 A and r12,r3,#0x7 */
    g_cpu.R[15] = 0x08118238u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08118238 = 1u;
    _cyc_08118238 = 1u;
    uint32_t _rn_08118238 = g_cpu.R[3];
    uint32_t _r_08118238;
    _r_08118238 = _rn_08118238 & 0x00000007u;
    g_cpu.R[12] = _r_08118238;
    g_cpu.R[15] = 0x0811823Cu;
    runtime_tick(_cyc_08118238);
    /* 0811823C  0811823c A ldr r15,[r15,+r12] */
    g_cpu.R[15] = 0x0811823Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0811823C = 1u;
    _cyc_0811823C = 4u;
    uint32_t _base_0811823C = 0x08118244u;
    uint32_t _off_0811823C;
    uint32_t _morm_0811823C = g_cpu.R[12];
    _off_0811823C = _morm_0811823C << 2;
    uint32_t _ea_0811823C = _base_0811823C + _off_0811823C;
    uint32_t _post_0811823C = _base_0811823C + _off_0811823C;
    _cyc_0811823C += runtime_mem_cycles(_ea_0811823C, 4u, 0u);
    uint32_t _v_0811823C;
    { uint32_t _w = bus_read_u32(_ea_0811823C & ~3u); uint32_t _rot = (_ea_0811823C & 3u) * 8u; _v_0811823C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[15] = _v_0811823C & ~1u;
    runtime_tick(_cyc_0811823C);
    runtime_dispatch(_v_0811823C & ~1u);
    return;
    g_cpu.R[15] = 0x08118240u;
    runtime_tick(_cyc_0811823C);
    /* fall-through to 0x08118240 */
    g_cpu.R[15] = 0x08118240u;
    runtime_dispatch(0x08118240u);
    return;
}


/* 0x081973D4  mode=arm  end=0x081973EC  branches=1  indirect */
void gf_memory_reads_arm_at_081973D4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081973D4u);
    /* 081973D4  081973d4 A add r12,r1,r12 */
    g_cpu.R[15] = 0x081973D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973D4 = 1u;
    _cyc_081973D4 = 1u;
    uint32_t _rm_081973D4 = g_cpu.R[12];
    uint32_t _op2_081973D4;
    uint32_t _co_081973D4;
    _op2_081973D4 = _rm_081973D4;
    _co_081973D4 = cpsr_c();
    uint32_t _rn_081973D4 = g_cpu.R[1];
    uint32_t _r_081973D4;
    _r_081973D4 = _rn_081973D4 + _op2_081973D4;
    g_cpu.R[12] = _r_081973D4;
    g_cpu.R[15] = 0x081973D8u;
    runtime_tick(_cyc_081973D4);
    /* 081973D8  081973d8 A add r1,r1,r6 */
    g_cpu.R[15] = 0x081973D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973D8 = 1u;
    _cyc_081973D8 = 1u;
    uint32_t _rm_081973D8 = g_cpu.R[6];
    uint32_t _op2_081973D8;
    uint32_t _co_081973D8;
    _op2_081973D8 = _rm_081973D8;
    _co_081973D8 = cpsr_c();
    uint32_t _rn_081973D8 = g_cpu.R[1];
    uint32_t _r_081973D8;
    _r_081973D8 = _rn_081973D8 + _op2_081973D8;
    g_cpu.R[1] = _r_081973D8;
    g_cpu.R[15] = 0x081973DCu;
    runtime_tick(_cyc_081973D8);
    /* 081973DC  081973dc A add r3,r3,#0x8 */
    g_cpu.R[15] = 0x081973DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973DC = 1u;
    _cyc_081973DC = 1u;
    uint32_t _rn_081973DC = g_cpu.R[3];
    uint32_t _r_081973DC;
    _r_081973DC = _rn_081973DC + 0x00000008u;
    g_cpu.R[3] = _r_081973DC;
    g_cpu.R[15] = 0x081973E0u;
    runtime_tick(_cyc_081973DC);
    /* 081973E0  081973e0 A cmps r3,r2 */
    g_cpu.R[15] = 0x081973E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973E0 = 1u;
    _cyc_081973E0 = 1u;
    uint32_t _rm_081973E0 = g_cpu.R[2];
    uint32_t _op2_081973E0;
    uint32_t _co_081973E0;
    _op2_081973E0 = _rm_081973E0;
    _co_081973E0 = cpsr_c();
    uint32_t _rn_081973E0 = g_cpu.R[3];
    uint32_t _r_081973E0;
    _r_081973E0 = _rn_081973E0 - _op2_081973E0;
    arm_set_nzcv_sub(_rn_081973E0, _op2_081973E0, _r_081973E0);
    g_cpu.R[15] = 0x081973E4u;
    runtime_tick(_cyc_081973E0);
    /* 081973E4  081973e4 A bne 0x081973ec */
    g_cpu.R[15] = 0x081973E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973E4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081973E4 = 3u;
        g_cpu.R[15] = 0x081973ECu;
        runtime_tick(_cyc_081973E4);
        gf_indirect_control_flow_arm_at_081973EC();
        return;
    }
    g_cpu.R[15] = 0x081973E8u;
    runtime_tick(_cyc_081973E4);
    /* 081973E8  081973e8 A ldm r13!,{r5,r6,r7,r8,r9,r10,r11,r14} */
    g_cpu.R[15] = 0x081973E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973E8 = 1u;
    _cyc_081973E8 = 2u;
    uint32_t _b_081973E8 = g_cpu.R[13];
    uint32_t _a_081973E8 = _b_081973E8;
    uint32_t _fb_081973E8 = _b_081973E8 + 32u;
    _cyc_081973E8 += runtime_mem_cycles(_a_081973E8 & ~3u, 4u, 0u);
    g_cpu.R[5] = bus_read_u32(_a_081973E8 & ~3u);
    _a_081973E8 += 4u;
    _cyc_081973E8 += runtime_mem_cycles(_a_081973E8 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_081973E8 & ~3u);
    _a_081973E8 += 4u;
    _cyc_081973E8 += runtime_mem_cycles(_a_081973E8 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_081973E8 & ~3u);
    _a_081973E8 += 4u;
    _cyc_081973E8 += runtime_mem_cycles(_a_081973E8 & ~3u, 4u, 1u);
    g_cpu.R[8] = bus_read_u32(_a_081973E8 & ~3u);
    _a_081973E8 += 4u;
    _cyc_081973E8 += runtime_mem_cycles(_a_081973E8 & ~3u, 4u, 1u);
    g_cpu.R[9] = bus_read_u32(_a_081973E8 & ~3u);
    _a_081973E8 += 4u;
    _cyc_081973E8 += runtime_mem_cycles(_a_081973E8 & ~3u, 4u, 1u);
    g_cpu.R[10] = bus_read_u32(_a_081973E8 & ~3u);
    _a_081973E8 += 4u;
    _cyc_081973E8 += runtime_mem_cycles(_a_081973E8 & ~3u, 4u, 1u);
    g_cpu.R[11] = bus_read_u32(_a_081973E8 & ~3u);
    _a_081973E8 += 4u;
    _cyc_081973E8 += runtime_mem_cycles(_a_081973E8 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_081973E8 & ~3u);
    _a_081973E8 += 4u;
    g_cpu.R[13] = _fb_081973E8;
    g_cpu.R[15] = 0x081973ECu;
    runtime_tick(_cyc_081973E8);
    /* fall-through to 0x081973EC */
    g_cpu.R[15] = 0x081973ECu;
    runtime_dispatch(0x081973ECu);
    return;
}


/* 0x081C14F4  mode=arm  end=0x081C14FC  branches=7 */
void gf_memory_reads_arm_at_081C14F4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C14F4u);
    /* 081C14F4  081c14f4 A ldr r6,[r5] */
    g_cpu.R[15] = 0x081C14F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14F4 = 1u;
    _cyc_081C14F4 = 2u;
    uint32_t _base_081C14F4 = g_cpu.R[5];
    uint32_t _off_081C14F4;
    _off_081C14F4 = 0x00000000u;
    uint32_t _ea_081C14F4 = _base_081C14F4 + _off_081C14F4;
    uint32_t _post_081C14F4 = _base_081C14F4 + _off_081C14F4;
    _cyc_081C14F4 += runtime_mem_cycles(_ea_081C14F4, 4u, 0u);
    uint32_t _v_081C14F4;
    { uint32_t _w = bus_read_u32(_ea_081C14F4 & ~3u); uint32_t _rot = (_ea_081C14F4 & 3u) * 8u; _v_081C14F4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_081C14F4;
    g_cpu.R[15] = 0x081C14F8u;
    runtime_tick(_cyc_081C14F4);
    /* 081C14F8  081c14f8 A ldr r7,[r5,#0x630] */
    g_cpu.R[15] = 0x081C14F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14F8 = 1u;
    _cyc_081C14F8 = 2u;
    uint32_t _base_081C14F8 = g_cpu.R[5];
    uint32_t _off_081C14F8;
    _off_081C14F8 = 0x00000630u;
    uint32_t _ea_081C14F8 = _base_081C14F8 + _off_081C14F8;
    uint32_t _post_081C14F8 = _base_081C14F8 + _off_081C14F8;
    _cyc_081C14F8 += runtime_mem_cycles(_ea_081C14F8, 4u, 0u);
    uint32_t _v_081C14F8;
    { uint32_t _w = bus_read_u32(_ea_081C14F8 & ~3u); uint32_t _rot = (_ea_081C14F8 & 3u) * 8u; _v_081C14F8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_081C14F8;
    g_cpu.R[15] = 0x081C14FCu;
    runtime_tick(_cyc_081C14F8);
    /* fall-through to 0x081C14FC */
    g_cpu.R[15] = 0x081C14FCu;
    runtime_dispatch(0x081C14FCu);
    return;
}


/* 0x081C1538  mode=arm  end=0x081C1540  branches=4 */
void gf_memory_reads_arm_at_081C1538(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C1538u);
    /* 081C1538  081c1538 A ldr r6,[r5] */
    g_cpu.R[15] = 0x081C1538u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1538 = 1u;
    _cyc_081C1538 = 2u;
    uint32_t _base_081C1538 = g_cpu.R[5];
    uint32_t _off_081C1538;
    _off_081C1538 = 0x00000000u;
    uint32_t _ea_081C1538 = _base_081C1538 + _off_081C1538;
    uint32_t _post_081C1538 = _base_081C1538 + _off_081C1538;
    _cyc_081C1538 += runtime_mem_cycles(_ea_081C1538, 4u, 0u);
    uint32_t _v_081C1538;
    { uint32_t _w = bus_read_u32(_ea_081C1538 & ~3u); uint32_t _rot = (_ea_081C1538 & 3u) * 8u; _v_081C1538 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_081C1538;
    g_cpu.R[15] = 0x081C153Cu;
    runtime_tick(_cyc_081C1538);
    /* 081C153C  081c153c A ldr r7,[r5,#0x630] */
    g_cpu.R[15] = 0x081C153Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C153C = 1u;
    _cyc_081C153C = 2u;
    uint32_t _base_081C153C = g_cpu.R[5];
    uint32_t _off_081C153C;
    _off_081C153C = 0x00000630u;
    uint32_t _ea_081C153C = _base_081C153C + _off_081C153C;
    uint32_t _post_081C153C = _base_081C153C + _off_081C153C;
    _cyc_081C153C += runtime_mem_cycles(_ea_081C153C, 4u, 0u);
    uint32_t _v_081C153C;
    { uint32_t _w = bus_read_u32(_ea_081C153C & ~3u); uint32_t _rot = (_ea_081C153C & 3u) * 8u; _v_081C153C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_081C153C;
    g_cpu.R[15] = 0x081C1540u;
    runtime_tick(_cyc_081C153C);
    /* fall-through to 0x081C1540 */
    g_cpu.R[15] = 0x081C1540u;
    runtime_dispatch(0x081C1540u);
    return;
}


/* 0x081C1540  mode=arm  end=0x081C1564  branches=4 */
void gf_memory_reads_arm_at_081C1540(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C1540u);
    /* 081C1540  081c1540 A ldrsb r0,[r3],#0x1 */
    g_cpu.R[15] = 0x081C1540u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1540 = 1u;
    _cyc_081C1540 = 2u;
    uint32_t _base_081C1540 = g_cpu.R[3];
    uint32_t _off_081C1540;
    _off_081C1540 = 0x00000001u;
    uint32_t _ea_081C1540 = _base_081C1540;
    uint32_t _post_081C1540 = _base_081C1540 + _off_081C1540;
    _cyc_081C1540 += runtime_mem_cycles(_ea_081C1540, 1u, 0u);
    uint32_t _v_081C1540;
    _v_081C1540 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C1540);
    if (3u != 0u) g_cpu.R[3] = _post_081C1540;
    g_cpu.R[0] = _v_081C1540;
    g_cpu.R[15] = 0x081C1544u;
    runtime_tick(_cyc_081C1540);
    /* 081C1544  081c1544 A mul r1,r10,r0 */
    g_cpu.R[15] = 0x081C1544u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1544 = 1u;
    _cyc_081C1544 = 1u;
    _cyc_081C1544 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_081C1544 = g_cpu.R[10] * g_cpu.R[0];
    g_cpu.R[1] = _r_081C1544;
    g_cpu.R[15] = 0x081C1548u;
    runtime_tick(_cyc_081C1544);
    /* 081C1548  081c1548 A bic r1,r1,#0xff0000 */
    g_cpu.R[15] = 0x081C1548u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1548 = 1u;
    _cyc_081C1548 = 1u;
    uint32_t _rn_081C1548 = g_cpu.R[1];
    uint32_t _r_081C1548;
    _r_081C1548 = _rn_081C1548 & ~(0x00FF0000u);
    g_cpu.R[1] = _r_081C1548;
    g_cpu.R[15] = 0x081C154Cu;
    runtime_tick(_cyc_081C1548);
    /* 081C154C  081c154c A add r6,r1,r6,ror #8 */
    g_cpu.R[15] = 0x081C154Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C154C = 1u;
    _cyc_081C154C = 1u;
    uint32_t _rm_081C154C = g_cpu.R[6];
    uint32_t _op2_081C154C;
    uint32_t _co_081C154C;
    _op2_081C154C = (_rm_081C154C >> 8) | (_rm_081C154C << 24);
    _co_081C154C = (_op2_081C154C >> 31) & 1u;
    uint32_t _rn_081C154C = g_cpu.R[1];
    uint32_t _r_081C154C;
    _r_081C154C = _rn_081C154C + _op2_081C154C;
    g_cpu.R[6] = _r_081C154C;
    g_cpu.R[15] = 0x081C1550u;
    runtime_tick(_cyc_081C154C);
    /* 081C1550  081c1550 A mul r1,r11,r0 */
    g_cpu.R[15] = 0x081C1550u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1550 = 1u;
    _cyc_081C1550 = 1u;
    _cyc_081C1550 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_081C1550 = g_cpu.R[11] * g_cpu.R[0];
    g_cpu.R[1] = _r_081C1550;
    g_cpu.R[15] = 0x081C1554u;
    runtime_tick(_cyc_081C1550);
    /* 081C1554  081c1554 A bic r1,r1,#0xff0000 */
    g_cpu.R[15] = 0x081C1554u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1554 = 1u;
    _cyc_081C1554 = 1u;
    uint32_t _rn_081C1554 = g_cpu.R[1];
    uint32_t _r_081C1554;
    _r_081C1554 = _rn_081C1554 & ~(0x00FF0000u);
    g_cpu.R[1] = _r_081C1554;
    g_cpu.R[15] = 0x081C1558u;
    runtime_tick(_cyc_081C1554);
    /* 081C1558  081c1558 A add r7,r1,r7,ror #8 */
    g_cpu.R[15] = 0x081C1558u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1558 = 1u;
    _cyc_081C1558 = 1u;
    uint32_t _rm_081C1558 = g_cpu.R[7];
    uint32_t _op2_081C1558;
    uint32_t _co_081C1558;
    _op2_081C1558 = (_rm_081C1558 >> 8) | (_rm_081C1558 << 24);
    _co_081C1558 = (_op2_081C1558 >> 31) & 1u;
    uint32_t _rn_081C1558 = g_cpu.R[1];
    uint32_t _r_081C1558;
    _r_081C1558 = _rn_081C1558 + _op2_081C1558;
    g_cpu.R[7] = _r_081C1558;
    g_cpu.R[15] = 0x081C155Cu;
    runtime_tick(_cyc_081C1558);
    /* 081C155C  081c155c A subs r2,r2,#0x1 */
    g_cpu.R[15] = 0x081C155Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C155C = 1u;
    _cyc_081C155C = 1u;
    uint32_t _rn_081C155C = g_cpu.R[2];
    uint32_t _r_081C155C;
    _r_081C155C = _rn_081C155C - 0x00000001u;
    arm_set_nzcv_sub(_rn_081C155C, 0x00000001u, _r_081C155C);
    g_cpu.R[2] = _r_081C155C;
    g_cpu.R[15] = 0x081C1560u;
    runtime_tick(_cyc_081C155C);
    /* 081C1560  081c1560 A beq 0x081c15b0 */
    g_cpu.R[15] = 0x081C1560u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1560 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C1560 = 3u;
        g_cpu.R[15] = 0x081C15B0u;
        runtime_tick(_cyc_081C1560);
        gf_memory_reads_arm_at_081C15B0();
        return;
    }
    g_cpu.R[15] = 0x081C1564u;
    runtime_tick(_cyc_081C1560);
    /* fall-through to 0x081C1564 */
    g_cpu.R[15] = 0x081C1564u;
    runtime_dispatch(0x081C1564u);
    return;
}


/* 0x081C1580  mode=arm  end=0x081C1594  branches=3 */
void gf_memory_reads_arm_at_081C1580(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C1580u);
    /* 081C1580  081c1580 A ldr r0,[r13,#0x18] */
    g_cpu.R[15] = 0x081C1580u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1580 = 1u;
    _cyc_081C1580 = 2u;
    uint32_t _base_081C1580 = g_cpu.R[13];
    uint32_t _off_081C1580;
    _off_081C1580 = 0x00000018u;
    uint32_t _ea_081C1580 = _base_081C1580 + _off_081C1580;
    uint32_t _post_081C1580 = _base_081C1580 + _off_081C1580;
    _cyc_081C1580 += runtime_mem_cycles(_ea_081C1580, 4u, 0u);
    uint32_t _v_081C1580;
    { uint32_t _w = bus_read_u32(_ea_081C1580 & ~3u); uint32_t _rot = (_ea_081C1580 & 3u) * 8u; _v_081C1580 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C1580;
    g_cpu.R[15] = 0x081C1584u;
    runtime_tick(_cyc_081C1580);
    /* 081C1584  081c1584 A cmps r0,#0x0 */
    g_cpu.R[15] = 0x081C1584u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1584 = 1u;
    _cyc_081C1584 = 1u;
    uint32_t _rn_081C1584 = g_cpu.R[0];
    uint32_t _r_081C1584;
    _r_081C1584 = _rn_081C1584 - 0x00000000u;
    arm_set_nzcv_sub(_rn_081C1584, 0x00000000u, _r_081C1584);
    g_cpu.R[15] = 0x081C1588u;
    runtime_tick(_cyc_081C1584);
    /* 081C1588  081c1588 A beq 0x081c15a4 */
    g_cpu.R[15] = 0x081C1588u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1588 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C1588 = 3u;
        g_cpu.R[15] = 0x081C15A4u;
        runtime_tick(_cyc_081C1588);
        gf_memory_reads_arm_at_081C15A4();
        return;
    }
    g_cpu.R[15] = 0x081C158Cu;
    runtime_tick(_cyc_081C1588);
    /* 081C158C  081c158c A ldr r3,[r13,#0x14] */
    g_cpu.R[15] = 0x081C158Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C158C = 1u;
    _cyc_081C158C = 2u;
    uint32_t _base_081C158C = g_cpu.R[13];
    uint32_t _off_081C158C;
    _off_081C158C = 0x00000014u;
    uint32_t _ea_081C158C = _base_081C158C + _off_081C158C;
    uint32_t _post_081C158C = _base_081C158C + _off_081C158C;
    _cyc_081C158C += runtime_mem_cycles(_ea_081C158C, 4u, 0u);
    uint32_t _v_081C158C;
    { uint32_t _w = bus_read_u32(_ea_081C158C & ~3u); uint32_t _rot = (_ea_081C158C & 3u) * 8u; _v_081C158C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_081C158C;
    g_cpu.R[15] = 0x081C1590u;
    runtime_tick(_cyc_081C158C);
    /* 081C1590  081c1590 A rsb r9,r2,#0x0 */
    g_cpu.R[15] = 0x081C1590u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1590 = 1u;
    _cyc_081C1590 = 1u;
    uint32_t _rn_081C1590 = g_cpu.R[2];
    uint32_t _r_081C1590;
    _r_081C1590 = 0x00000000u - _rn_081C1590;
    g_cpu.R[9] = _r_081C1590;
    g_cpu.R[15] = 0x081C1594u;
    runtime_tick(_cyc_081C1590);
    /* fall-through to 0x081C1594 */
    g_cpu.R[15] = 0x081C1594u;
    runtime_dispatch(0x081C1594u);
    return;
}


/* 0x081C15A4  mode=arm  end=0x081C15B0  branches=1 */
void gf_memory_reads_arm_at_081C15A4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C15A4u);
    /* 081C15A4  081c15a4 A ldm r13!,{r4,r12} */
    g_cpu.R[15] = 0x081C15A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15A4 = 1u;
    _cyc_081C15A4 = 2u;
    uint32_t _b_081C15A4 = g_cpu.R[13];
    uint32_t _a_081C15A4 = _b_081C15A4;
    uint32_t _fb_081C15A4 = _b_081C15A4 + 8u;
    _cyc_081C15A4 += runtime_mem_cycles(_a_081C15A4 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_081C15A4 & ~3u);
    _a_081C15A4 += 4u;
    _cyc_081C15A4 += runtime_mem_cycles(_a_081C15A4 & ~3u, 4u, 1u);
    g_cpu.R[12] = bus_read_u32(_a_081C15A4 & ~3u);
    _a_081C15A4 += 4u;
    g_cpu.R[13] = _fb_081C15A4;
    g_cpu.R[15] = 0x081C15A8u;
    runtime_tick(_cyc_081C15A4);
    /* 081C15A8  081c15a8 A mov r2,#0x0 */
    g_cpu.R[15] = 0x081C15A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15A8 = 1u;
    _cyc_081C15A8 = 1u;
    uint32_t _r_081C15A8;
    _r_081C15A8 = 0x00000000u;
    g_cpu.R[2] = _r_081C15A8;
    g_cpu.R[15] = 0x081C15ACu;
    runtime_tick(_cyc_081C15A8);
    /* 081C15AC  081c15ac A b 0x081c15c0 */
    g_cpu.R[15] = 0x081C15ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15AC = 1u;
    _cyc_081C15AC = 3u;
    g_cpu.R[15] = 0x081C15C0u;
    runtime_tick(_cyc_081C15AC);
    gf_memory_writes_arm_at_081C15C0();
    return;
    g_cpu.R[15] = 0x081C15B0u;
    runtime_tick(_cyc_081C15AC);
    /* fall-through to 0x081C15B0 */
    g_cpu.R[15] = 0x081C15B0u;
    runtime_dispatch(0x081C15B0u);
    return;
}


/* 0x081C15B0  mode=arm  end=0x081C15C0  branches=2 */
void gf_memory_reads_arm_at_081C15B0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C15B0u);
    /* 081C15B0  081c15b0 A ldr r2,[r13,#0x10] */
    g_cpu.R[15] = 0x081C15B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15B0 = 1u;
    _cyc_081C15B0 = 2u;
    uint32_t _base_081C15B0 = g_cpu.R[13];
    uint32_t _off_081C15B0;
    _off_081C15B0 = 0x00000010u;
    uint32_t _ea_081C15B0 = _base_081C15B0 + _off_081C15B0;
    uint32_t _post_081C15B0 = _base_081C15B0 + _off_081C15B0;
    _cyc_081C15B0 += runtime_mem_cycles(_ea_081C15B0, 4u, 0u);
    uint32_t _v_081C15B0;
    { uint32_t _w = bus_read_u32(_ea_081C15B0 & ~3u); uint32_t _rot = (_ea_081C15B0 & 3u) * 8u; _v_081C15B0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_081C15B0;
    g_cpu.R[15] = 0x081C15B4u;
    runtime_tick(_cyc_081C15B0);
    /* 081C15B4  081c15b4 A cmps r2,#0x0 */
    g_cpu.R[15] = 0x081C15B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15B4 = 1u;
    _cyc_081C15B4 = 1u;
    uint32_t _rn_081C15B4 = g_cpu.R[2];
    uint32_t _r_081C15B4;
    _r_081C15B4 = _rn_081C15B4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_081C15B4, 0x00000000u, _r_081C15B4);
    g_cpu.R[15] = 0x081C15B8u;
    runtime_tick(_cyc_081C15B4);
    /* 081C15B8  081c15b8 A ldrne r3,[r13,#0xc] */
    g_cpu.R[15] = 0x081C15B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15B8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081C15B8 = 2u;
        uint32_t _base_081C15B8 = g_cpu.R[13];
        uint32_t _off_081C15B8;
        _off_081C15B8 = 0x0000000Cu;
        uint32_t _ea_081C15B8 = _base_081C15B8 + _off_081C15B8;
        uint32_t _post_081C15B8 = _base_081C15B8 + _off_081C15B8;
        _cyc_081C15B8 += runtime_mem_cycles(_ea_081C15B8, 4u, 0u);
        uint32_t _v_081C15B8;
        { uint32_t _w = bus_read_u32(_ea_081C15B8 & ~3u); uint32_t _rot = (_ea_081C15B8 & 3u) * 8u; _v_081C15B8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
        g_cpu.R[3] = _v_081C15B8;
    }
    g_cpu.R[15] = 0x081C15BCu;
    runtime_tick(_cyc_081C15B8);
    /* 081C15BC  081c15bc A bne 0x081c1564 */
    g_cpu.R[15] = 0x081C15BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15BC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081C15BC = 3u;
        g_cpu.R[15] = 0x081C1564u;
        runtime_tick(_cyc_081C15BC);
        gf_memory_writes_arm_at_081C1564();
        return;
    }
    g_cpu.R[15] = 0x081C15C0u;
    runtime_tick(_cyc_081C15BC);
    /* fall-through to 0x081C15C0 */
    g_cpu.R[15] = 0x081C15C0u;
    runtime_dispatch(0x081C15C0u);
    return;
}


/* 0x081C1604  mode=arm  end=0x081C160C  branches=4  indirect */
void gf_memory_reads_arm_at_081C1604(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C1604u);
    /* 081C1604  081c1604 A ldr r6,[r5] */
    g_cpu.R[15] = 0x081C1604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1604 = 1u;
    _cyc_081C1604 = 2u;
    uint32_t _base_081C1604 = g_cpu.R[5];
    uint32_t _off_081C1604;
    _off_081C1604 = 0x00000000u;
    uint32_t _ea_081C1604 = _base_081C1604 + _off_081C1604;
    uint32_t _post_081C1604 = _base_081C1604 + _off_081C1604;
    _cyc_081C1604 += runtime_mem_cycles(_ea_081C1604, 4u, 0u);
    uint32_t _v_081C1604;
    { uint32_t _w = bus_read_u32(_ea_081C1604 & ~3u); uint32_t _rot = (_ea_081C1604 & 3u) * 8u; _v_081C1604 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_081C1604;
    g_cpu.R[15] = 0x081C1608u;
    runtime_tick(_cyc_081C1604);
    /* 081C1608  081c1608 A ldr r7,[r5,#0x630] */
    g_cpu.R[15] = 0x081C1608u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1608 = 1u;
    _cyc_081C1608 = 2u;
    uint32_t _base_081C1608 = g_cpu.R[5];
    uint32_t _off_081C1608;
    _off_081C1608 = 0x00000630u;
    uint32_t _ea_081C1608 = _base_081C1608 + _off_081C1608;
    uint32_t _post_081C1608 = _base_081C1608 + _off_081C1608;
    _cyc_081C1608 += runtime_mem_cycles(_ea_081C1608, 4u, 0u);
    uint32_t _v_081C1608;
    { uint32_t _w = bus_read_u32(_ea_081C1608 & ~3u); uint32_t _rot = (_ea_081C1608 & 3u) * 8u; _v_081C1608 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_081C1608;
    g_cpu.R[15] = 0x081C160Cu;
    runtime_tick(_cyc_081C1608);
    /* fall-through to 0x081C160C */
    g_cpu.R[15] = 0x081C160Cu;
    runtime_dispatch(0x081C160Cu);
    return;
}


/* 0x081C164C  mode=arm  end=0x081C1658  branches=2  indirect */
void gf_memory_reads_arm_at_081C164C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C164Cu);
    /* 081C164C  081c164c A ldrsbne r0,[r3,+r9]! */
    g_cpu.R[15] = 0x081C164Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C164C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081C164C = 2u;
        uint32_t _base_081C164C = g_cpu.R[3];
        uint32_t _off_081C164C;
        uint32_t _morm_081C164C = g_cpu.R[9];
        _off_081C164C = _morm_081C164C;
        uint32_t _ea_081C164C = _base_081C164C + _off_081C164C;
        uint32_t _post_081C164C = _base_081C164C + _off_081C164C;
        _cyc_081C164C += runtime_mem_cycles(_ea_081C164C, 1u, 0u);
        uint32_t _v_081C164C;
        _v_081C164C = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C164C);
        if (3u != 0u) g_cpu.R[3] = _ea_081C164C;
        g_cpu.R[0] = _v_081C164C;
    }
    g_cpu.R[15] = 0x081C1650u;
    runtime_tick(_cyc_081C164C);
    /* 081C1650  081c1650 A ldrsb r1,[r3,#0x1]! */
    g_cpu.R[15] = 0x081C1650u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1650 = 1u;
    _cyc_081C1650 = 2u;
    uint32_t _base_081C1650 = g_cpu.R[3];
    uint32_t _off_081C1650;
    _off_081C1650 = 0x00000001u;
    uint32_t _ea_081C1650 = _base_081C1650 + _off_081C1650;
    uint32_t _post_081C1650 = _base_081C1650 + _off_081C1650;
    _cyc_081C1650 += runtime_mem_cycles(_ea_081C1650, 1u, 0u);
    uint32_t _v_081C1650;
    _v_081C1650 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_081C1650);
    if (3u != 1u) g_cpu.R[3] = _ea_081C1650;
    g_cpu.R[1] = _v_081C1650;
    g_cpu.R[15] = 0x081C1654u;
    runtime_tick(_cyc_081C1650);
    /* 081C1654  081c1654 A sub r1,r1,r0 */
    g_cpu.R[15] = 0x081C1654u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1654 = 1u;
    _cyc_081C1654 = 1u;
    uint32_t _rm_081C1654 = g_cpu.R[0];
    uint32_t _op2_081C1654;
    uint32_t _co_081C1654;
    _op2_081C1654 = _rm_081C1654;
    _co_081C1654 = cpsr_c();
    uint32_t _rn_081C1654 = g_cpu.R[1];
    uint32_t _r_081C1654;
    _r_081C1654 = _rn_081C1654 - _op2_081C1654;
    g_cpu.R[1] = _r_081C1654;
    g_cpu.R[15] = 0x081C1658u;
    runtime_tick(_cyc_081C1654);
    /* fall-through to 0x081C1658 */
    g_cpu.R[15] = 0x081C1658u;
    runtime_dispatch(0x081C1658u);
    return;
}


/* 0x081C1684  mode=arm  end=0x081C1690  branches=0  indirect */
void gf_memory_reads_arm_at_081C1684(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C1684u);
    /* 081C1684  081c1684 A ldr r8,[r13] */
    g_cpu.R[15] = 0x081C1684u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1684 = 1u;
    _cyc_081C1684 = 2u;
    uint32_t _base_081C1684 = g_cpu.R[13];
    uint32_t _off_081C1684;
    _off_081C1684 = 0x00000000u;
    uint32_t _ea_081C1684 = _base_081C1684 + _off_081C1684;
    uint32_t _post_081C1684 = _base_081C1684 + _off_081C1684;
    _cyc_081C1684 += runtime_mem_cycles(_ea_081C1684, 4u, 0u);
    uint32_t _v_081C1684;
    { uint32_t _w = bus_read_u32(_ea_081C1684 & ~3u); uint32_t _rot = (_ea_081C1684 & 3u) * 8u; _v_081C1684 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[8] = _v_081C1684;
    g_cpu.R[15] = 0x081C1688u;
    runtime_tick(_cyc_081C1684);
    /* 081C1688  081c1688 A add r0,r15,#0x1 */
    g_cpu.R[15] = 0x081C1688u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1688 = 1u;
    _cyc_081C1688 = 1u;
    uint32_t _rn_081C1688 = 0x081C1690u;
    uint32_t _r_081C1688;
    _r_081C1688 = _rn_081C1688 + 0x00000001u;
    g_cpu.R[0] = _r_081C1688;
    g_cpu.R[15] = 0x081C168Cu;
    runtime_tick(_cyc_081C1688);
    /* 081C168C  081c168c A bx r0 */
    g_cpu.R[15] = 0x081C168Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C168C = 1u;
    _cyc_081C168C = 3u;
    uint32_t _bxt_081C168C = g_cpu.R[0];
    g_cpu.R[15] = _bxt_081C168C & ~1u;
    runtime_tick(_cyc_081C168C);
    runtime_dispatch_with_exchange(_bxt_081C168C);
    return;
    g_cpu.R[15] = 0x081C1690u;
    runtime_tick(_cyc_081C168C);
    /* fall-through to 0x081C1690 */
    g_cpu.R[15] = 0x081C1690u;
    runtime_dispatch(0x081C1690u);
    return;
}
