// Generated from a user supplied Golden Sun: The Lost Age ROM.
// software_interrupts: functions grouped by observable CPU/hardware operations.
#include "runtime_arm.h"
#include "recompiled.h"

/* 0x080137B0  mode=thumb  end=0x080137B2  branches=4 */
void gf_software_interrupts_at_080137B0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080137B0u);
    /* 080137B0  080137b0 T swi #0x3 */
    g_cpu.R[15] = 0x080137B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080137B0 = 1u;
    g_cpu.R[15] = 0x080137B2u;
    runtime_swi(0x00000003u);
    return;
    g_cpu.R[15] = 0x080137B2u;
    runtime_tick(_cyc_080137B0);
    /* fall-through to 0x080137B2 */
    g_cpu.R[15] = 0x080137B2u;
    runtime_dispatch(0x080137B2u);
    return;
}


/* 0x08016DF8  mode=thumb  end=0x08016DFA  branches=1  indirect */
void gf_software_interrupts_at_08016DF8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08016DF8u);
    /* 08016DF8  08016df8 T swi #0xb */
    g_cpu.R[15] = 0x08016DF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08016DF8 = 1u;
    g_cpu.R[15] = 0x08016DFAu;
    runtime_swi(0x0000000Bu);
    return;
    g_cpu.R[15] = 0x08016DFAu;
    runtime_tick(_cyc_08016DF8);
    /* fall-through to 0x08016DFA */
    g_cpu.R[15] = 0x08016DFAu;
    runtime_dispatch(0x08016DFAu);
    return;
}


/* 0x08016DFC  mode=thumb  end=0x08016E00  branches=1  indirect */
void gf_software_interrupts_at_08016DFC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08016DFCu);
    /* 08016DFC  08016dfc T movs r0,#0x0 */
    g_cpu.R[15] = 0x08016DFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08016DFC = 1u;
    _cyc_08016DFC = 1u;
    uint32_t _r_08016DFC;
    _r_08016DFC = 0x00000000u;
    arm_set_nzc_logic(_r_08016DFC, cpsr_c());
    g_cpu.R[0] = _r_08016DFC;
    g_cpu.R[15] = 0x08016DFEu;
    runtime_tick(_cyc_08016DFC);
    /* 08016DFE  08016dfe T swi #0x19 */
    g_cpu.R[15] = 0x08016DFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08016DFE = 1u;
    g_cpu.R[15] = 0x08016E00u;
    runtime_swi(0x00000019u);
    return;
    g_cpu.R[15] = 0x08016E00u;
    runtime_tick(_cyc_08016DFE);
    /* fall-through to 0x08016E00 */
    g_cpu.R[15] = 0x08016E00u;
    runtime_dispatch(0x08016E00u);
    return;
}


/* 0x08016E04  mode=thumb  end=0x08016E08  branches=1  indirect */
void gf_software_interrupts_at_08016E04(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08016E04u);
    /* 08016E04  08016e04 T movs r0,#0x1 */
    g_cpu.R[15] = 0x08016E04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08016E04 = 1u;
    _cyc_08016E04 = 1u;
    uint32_t _r_08016E04;
    _r_08016E04 = 0x00000001u;
    arm_set_nzc_logic(_r_08016E04, cpsr_c());
    g_cpu.R[0] = _r_08016E04;
    g_cpu.R[15] = 0x08016E06u;
    runtime_tick(_cyc_08016E04);
    /* 08016E06  08016e06 T swi #0x19 */
    g_cpu.R[15] = 0x08016E06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08016E06 = 1u;
    g_cpu.R[15] = 0x08016E08u;
    runtime_swi(0x00000019u);
    return;
    g_cpu.R[15] = 0x08016E08u;
    runtime_tick(_cyc_08016E06);
    /* fall-through to 0x08016E08 */
    g_cpu.R[15] = 0x08016E08u;
    runtime_dispatch(0x08016E08u);
    return;
}


/* 0x0805F192  mode=thumb  end=0x0805F1A8  branches=3  indirect */
void gf_software_interrupts_at_0805F192(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805F192u);
    /* 0805F192  0805f192 T movs r0,r0 */
    g_cpu.R[15] = 0x0805F192u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F192 = 1u;
    _cyc_0805F192 = 1u;
    uint32_t _rm_0805F192 = g_cpu.R[0];
    uint32_t _op2_0805F192;
    uint32_t _co_0805F192;
    _op2_0805F192 = _rm_0805F192;
    _co_0805F192 = cpsr_c();
    uint32_t _r_0805F192;
    _r_0805F192 = _op2_0805F192;
    arm_set_nzc_logic(_r_0805F192, _co_0805F192);
    g_cpu.R[0] = _r_0805F192;
    g_cpu.R[15] = 0x0805F194u;
    runtime_tick(_cyc_0805F192);
    /* 0805F194  0805f194 T movs r0,r0 */
    g_cpu.R[15] = 0x0805F194u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F194 = 1u;
    _cyc_0805F194 = 1u;
    uint32_t _rm_0805F194 = g_cpu.R[0];
    uint32_t _op2_0805F194;
    uint32_t _co_0805F194;
    _op2_0805F194 = _rm_0805F194;
    _co_0805F194 = cpsr_c();
    uint32_t _r_0805F194;
    _r_0805F194 = _op2_0805F194;
    arm_set_nzc_logic(_r_0805F194, _co_0805F194);
    g_cpu.R[0] = _r_0805F194;
    g_cpu.R[15] = 0x0805F196u;
    runtime_tick(_cyc_0805F194);
    /* 0805F196  0805f196 T ldrsb r0,[r0,+r4] */
    g_cpu.R[15] = 0x0805F196u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F196 = 1u;
    _cyc_0805F196 = 2u;
    uint32_t _base_0805F196 = g_cpu.R[0];
    uint32_t _off_0805F196;
    uint32_t _morm_0805F196 = g_cpu.R[4];
    _off_0805F196 = _morm_0805F196;
    uint32_t _ea_0805F196 = _base_0805F196 + _off_0805F196;
    uint32_t _post_0805F196 = _base_0805F196 + _off_0805F196;
    _cyc_0805F196 += runtime_mem_cycles(_ea_0805F196, 1u, 0u);
    uint32_t _v_0805F196;
    _v_0805F196 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0805F196);
    g_cpu.R[0] = _v_0805F196;
    g_cpu.R[15] = 0x0805F198u;
    runtime_tick(_cyc_0805F196);
    /* 0805F198  0805f198 T movs r5,r5,lsl #2 */
    g_cpu.R[15] = 0x0805F198u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F198 = 1u;
    _cyc_0805F198 = 1u;
    uint32_t _rm_0805F198 = g_cpu.R[5];
    uint32_t _op2_0805F198;
    uint32_t _co_0805F198;
    _op2_0805F198 = _rm_0805F198 << 2;
    _co_0805F198 = (_rm_0805F198 >> 30) & 1u;
    uint32_t _r_0805F198;
    _r_0805F198 = _op2_0805F198;
    arm_set_nzc_logic(_r_0805F198, _co_0805F198);
    g_cpu.R[5] = _r_0805F198;
    g_cpu.R[15] = 0x0805F19Au;
    runtime_tick(_cyc_0805F198);
    /* 0805F19A  0805f19a T movs r0,r0 */
    g_cpu.R[15] = 0x0805F19Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F19A = 1u;
    _cyc_0805F19A = 1u;
    uint32_t _rm_0805F19A = g_cpu.R[0];
    uint32_t _op2_0805F19A;
    uint32_t _co_0805F19A;
    _op2_0805F19A = _rm_0805F19A;
    _co_0805F19A = cpsr_c();
    uint32_t _r_0805F19A;
    _r_0805F19A = _op2_0805F19A;
    arm_set_nzc_logic(_r_0805F19A, _co_0805F19A);
    g_cpu.R[0] = _r_0805F19A;
    g_cpu.R[15] = 0x0805F19Cu;
    runtime_tick(_cyc_0805F19A);
    /* 0805F19C  0805f19c T movs r0,r0 */
    g_cpu.R[15] = 0x0805F19Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F19C = 1u;
    _cyc_0805F19C = 1u;
    uint32_t _rm_0805F19C = g_cpu.R[0];
    uint32_t _op2_0805F19C;
    uint32_t _co_0805F19C;
    _op2_0805F19C = _rm_0805F19C;
    _co_0805F19C = cpsr_c();
    uint32_t _r_0805F19C;
    _r_0805F19C = _op2_0805F19C;
    arm_set_nzc_logic(_r_0805F19C, _co_0805F19C);
    g_cpu.R[0] = _r_0805F19C;
    g_cpu.R[15] = 0x0805F19Eu;
    runtime_tick(_cyc_0805F19C);
    /* 0805F19E  0805f19e T strh r1,[r0,#0x10] */
    g_cpu.R[15] = 0x0805F19Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F19E = 1u;
    _cyc_0805F19E = 1u;
    uint32_t _base_0805F19E = g_cpu.R[0];
    uint32_t _off_0805F19E;
    _off_0805F19E = 0x00000010u;
    uint32_t _ea_0805F19E = _base_0805F19E + _off_0805F19E;
    uint32_t _post_0805F19E = _base_0805F19E + _off_0805F19E;
    _cyc_0805F19E += runtime_mem_cycles(_ea_0805F19E, 2u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805F19Eu, _ea_0805F19E & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805F19E & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x0805F1A0u;
    runtime_tick(_cyc_0805F19E);
    /* 0805F1A0  0805f1a0 T movs r7,r1 */
    g_cpu.R[15] = 0x0805F1A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F1A0 = 1u;
    _cyc_0805F1A0 = 1u;
    uint32_t _rm_0805F1A0 = g_cpu.R[1];
    uint32_t _op2_0805F1A0;
    uint32_t _co_0805F1A0;
    _op2_0805F1A0 = _rm_0805F1A0;
    _co_0805F1A0 = cpsr_c();
    uint32_t _r_0805F1A0;
    _r_0805F1A0 = _op2_0805F1A0;
    arm_set_nzc_logic(_r_0805F1A0, _co_0805F1A0);
    g_cpu.R[7] = _r_0805F1A0;
    g_cpu.R[15] = 0x0805F1A2u;
    runtime_tick(_cyc_0805F1A0);
    /* 0805F1A2  0805f1a2 T movs r0,r0 */
    g_cpu.R[15] = 0x0805F1A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F1A2 = 1u;
    _cyc_0805F1A2 = 1u;
    uint32_t _rm_0805F1A2 = g_cpu.R[0];
    uint32_t _op2_0805F1A2;
    uint32_t _co_0805F1A2;
    _op2_0805F1A2 = _rm_0805F1A2;
    _co_0805F1A2 = cpsr_c();
    uint32_t _r_0805F1A2;
    _r_0805F1A2 = _op2_0805F1A2;
    arm_set_nzc_logic(_r_0805F1A2, _co_0805F1A2);
    g_cpu.R[0] = _r_0805F1A2;
    g_cpu.R[15] = 0x0805F1A4u;
    runtime_tick(_cyc_0805F1A2);
    /* 0805F1A4  0805f1a4 T movs r0,r0 */
    g_cpu.R[15] = 0x0805F1A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F1A4 = 1u;
    _cyc_0805F1A4 = 1u;
    uint32_t _rm_0805F1A4 = g_cpu.R[0];
    uint32_t _op2_0805F1A4;
    uint32_t _co_0805F1A4;
    _op2_0805F1A4 = _rm_0805F1A4;
    _co_0805F1A4 = cpsr_c();
    uint32_t _r_0805F1A4;
    _r_0805F1A4 = _op2_0805F1A4;
    arm_set_nzc_logic(_r_0805F1A4, _co_0805F1A4);
    g_cpu.R[0] = _r_0805F1A4;
    g_cpu.R[15] = 0x0805F1A6u;
    runtime_tick(_cyc_0805F1A4);
    /* 0805F1A6  0805f1a6 T swi #0x12 */
    g_cpu.R[15] = 0x0805F1A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805F1A6 = 1u;
    g_cpu.R[15] = 0x0805F1A8u;
    runtime_swi(0x00000012u);
    return;
    g_cpu.R[15] = 0x0805F1A8u;
    runtime_tick(_cyc_0805F1A6);
    /* fall-through to 0x0805F1A8 */
    g_cpu.R[15] = 0x0805F1A8u;
    runtime_dispatch(0x0805F1A8u);
    return;
}
