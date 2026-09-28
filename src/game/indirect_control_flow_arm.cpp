// Generated from a user supplied Golden Sun: The Lost Age ROM.
// indirect_control_flow_arm: functions grouped by observable CPU/hardware operations.
#include "runtime_arm.h"
#include "recompiled.h"

/* 0x08000458  mode=arm  end=0x0800045C  branches=1 */
void gf_indirect_control_flow_arm_at_08000458(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08000458u);
    /* 08000458  08000458 A b 0x08000428 */
    g_cpu.R[15] = 0x08000458u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08000458 = 1u;
    _cyc_08000458 = 3u;
    g_cpu.R[15] = 0x08000428u;
    runtime_tick(_cyc_08000458);
    gf_memory_transfer_arm_at_08000428();
    return;
    g_cpu.R[15] = 0x0800045Cu;
    runtime_tick(_cyc_08000458);
    /* fall-through to 0x0800045C */
    g_cpu.R[15] = 0x0800045Cu;
    runtime_dispatch(0x0800045Cu);
    return;
}


/* 0x08001718  mode=arm  end=0x08001724  branches=4  indirect */
void gf_indirect_control_flow_arm_at_08001718(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08001718u);
    /* 08001718  08001718 A orr r14,r14,#0x800000 */
    g_cpu.R[15] = 0x08001718u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001718 = 1u;
    _cyc_08001718 = 1u;
    uint32_t _rn_08001718 = g_cpu.R[14];
    uint32_t _r_08001718;
    _r_08001718 = _rn_08001718 | 0x00800000u;
    g_cpu.R[14] = _r_08001718;
    g_cpu.R[15] = 0x0800171Cu;
    runtime_tick(_cyc_08001718);
    /* 0800171C  0800171c A movs r14,r14,lsl #1 */
    g_cpu.R[15] = 0x0800171Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800171C = 1u;
    _cyc_0800171C = 1u;
    uint32_t _rm_0800171C = g_cpu.R[14];
    uint32_t _op2_0800171C;
    uint32_t _co_0800171C;
    _op2_0800171C = _rm_0800171C << 1;
    _co_0800171C = (_rm_0800171C >> 31) & 1u;
    uint32_t _r_0800171C;
    _r_0800171C = _op2_0800171C;
    arm_set_nzc_logic(_r_0800171C, _co_0800171C);
    g_cpu.R[14] = _r_0800171C;
    g_cpu.R[15] = 0x08001720u;
    runtime_tick(_cyc_0800171C);
    /* 08001720  08001720 A bcs 0x08001738 */
    g_cpu.R[15] = 0x08001720u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08001720 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08001720 = 3u;
        g_cpu.R[15] = 0x08001738u;
        runtime_tick(_cyc_08001720);
        gf_memory_reads_arm_at_08001738();
        return;
    }
    g_cpu.R[15] = 0x08001724u;
    runtime_tick(_cyc_08001720);
    /* fall-through to 0x08001724 */
    g_cpu.R[15] = 0x08001724u;
    runtime_dispatch(0x08001724u);
    return;
}


/* 0x08002078  mode=arm  end=0x08002080  branches=0  indirect */
void gf_indirect_control_flow_arm_at_08002078(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002078u);
    /* 08002078  08002078 A umulls raw=0xe0903091 */
    g_cpu.R[15] = 0x08002078u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002078 = 1u;
    _cyc_08002078 = 1u;
    _cyc_08002078 += runtime_mul_cycles(g_cpu.R[0], 0u, 1u);
    uint64_t _p_08002078 = (uint64_t)g_cpu.R[1] * (uint64_t)g_cpu.R[0];
    g_cpu.R[3] = (uint32_t)(_p_08002078 & 0xFFFFFFFFu);
    g_cpu.R[0] = (uint32_t)(_p_08002078 >> 32);
    { uint32_t _c = g_cpu.cpsr & ~(CPSR_N_BIT|CPSR_Z_BIT); if (_p_08002078 >> 63) _c |= CPSR_N_BIT; if (_p_08002078 == 0) _c |= CPSR_Z_BIT; g_cpu.cpsr = _c; }
    g_cpu.R[15] = 0x0800207Cu;
    runtime_tick(_cyc_08002078);
    /* 0800207C  0800207c A bx r14 */
    g_cpu.R[15] = 0x0800207Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800207C = 1u;
    _cyc_0800207C = 3u;
    uint32_t _bxt_0800207C = g_cpu.R[14];
    g_cpu.R[15] = _bxt_0800207C & ~1u;
    runtime_tick(_cyc_0800207C);
    if (_bxt_0800207C & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_0800207C);
    return;
    g_cpu.R[15] = 0x08002080u;
    runtime_tick(_cyc_0800207C);
    /* fall-through to 0x08002080 */
    g_cpu.R[15] = 0x08002080u;
    runtime_dispatch(0x08002080u);
    return;
}


/* 0x08002084  mode=arm  end=0x08002090  branches=0  indirect */
void gf_indirect_control_flow_arm_at_08002084(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08002084u);
    /* 08002084  08002084 A umulls raw=0xe093c091 */
    g_cpu.R[15] = 0x08002084u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002084 = 1u;
    _cyc_08002084 = 1u;
    _cyc_08002084 += runtime_mul_cycles(g_cpu.R[0], 0u, 1u);
    uint64_t _p_08002084 = (uint64_t)g_cpu.R[1] * (uint64_t)g_cpu.R[0];
    g_cpu.R[12] = (uint32_t)(_p_08002084 & 0xFFFFFFFFu);
    g_cpu.R[3] = (uint32_t)(_p_08002084 >> 32);
    { uint32_t _c = g_cpu.cpsr & ~(CPSR_N_BIT|CPSR_Z_BIT); if (_p_08002084 >> 63) _c |= CPSR_N_BIT; if (_p_08002084 == 0) _c |= CPSR_Z_BIT; g_cpu.cpsr = _c; }
    g_cpu.R[15] = 0x08002088u;
    runtime_tick(_cyc_08002084);
    /* 08002088  08002088 A mla r0,r3,r2,r0 */
    g_cpu.R[15] = 0x08002088u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08002088 = 1u;
    _cyc_08002088 = 1u;
    _cyc_08002088 += runtime_mul_cycles(g_cpu.R[2], 1u, 1u);
    uint32_t _r_08002088 = g_cpu.R[3] * g_cpu.R[2] + g_cpu.R[0];
    g_cpu.R[0] = _r_08002088;
    g_cpu.R[15] = 0x0800208Cu;
    runtime_tick(_cyc_08002088);
    /* 0800208C  0800208c A bx r14 */
    g_cpu.R[15] = 0x0800208Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0800208C = 1u;
    _cyc_0800208C = 3u;
    uint32_t _bxt_0800208C = g_cpu.R[14];
    g_cpu.R[15] = _bxt_0800208C & ~1u;
    runtime_tick(_cyc_0800208C);
    if (_bxt_0800208C & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_0800208C);
    return;
    g_cpu.R[15] = 0x08002090u;
    runtime_tick(_cyc_0800208C);
    /* fall-through to 0x08002090 */
    g_cpu.R[15] = 0x08002090u;
    runtime_dispatch(0x08002090u);
    return;
}


/* 0x080128F4  mode=arm  end=0x0801293C  branches=16 */
void gf_indirect_control_flow_arm_at_080128F4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080128F4u);
    /* 080128F4  080128f4 A movs r2,r2,lsr #1 */
    g_cpu.R[15] = 0x080128F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128F4 = 1u;
    _cyc_080128F4 = 1u;
    uint32_t _rm_080128F4 = g_cpu.R[2];
    uint32_t _op2_080128F4;
    uint32_t _co_080128F4;
    _op2_080128F4 = _rm_080128F4 >> 1;
    _co_080128F4 = (_rm_080128F4 >> 0) & 1u;
    uint32_t _r_080128F4;
    _r_080128F4 = _op2_080128F4;
    arm_set_nzc_logic(_r_080128F4, _co_080128F4);
    g_cpu.R[2] = _r_080128F4;
    g_cpu.R[15] = 0x080128F8u;
    runtime_tick(_cyc_080128F4);
    /* 080128F8  080128f8 A bcs 0x080128dc */
    g_cpu.R[15] = 0x080128F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128F8 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_080128F8 = 3u;
        g_cpu.R[15] = 0x080128DCu;
        runtime_tick(_cyc_080128F8);
        gf_memory_transfer_arm_at_080128DC();
        return;
    }
    g_cpu.R[15] = 0x080128FCu;
    runtime_tick(_cyc_080128F8);
    /* 080128FC  080128fc A movs r2,r2,lsr #1 */
    g_cpu.R[15] = 0x080128FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080128FC = 1u;
    _cyc_080128FC = 1u;
    uint32_t _rm_080128FC = g_cpu.R[2];
    uint32_t _op2_080128FC;
    uint32_t _co_080128FC;
    _op2_080128FC = _rm_080128FC >> 1;
    _co_080128FC = (_rm_080128FC >> 0) & 1u;
    uint32_t _r_080128FC;
    _r_080128FC = _op2_080128FC;
    arm_set_nzc_logic(_r_080128FC, _co_080128FC);
    g_cpu.R[2] = _r_080128FC;
    g_cpu.R[15] = 0x08012900u;
    runtime_tick(_cyc_080128FC);
    /* 08012900  08012900 A bcc 0x080129b0 */
    g_cpu.R[15] = 0x08012900u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012900 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08012900 = 3u;
        g_cpu.R[15] = 0x080129B0u;
        runtime_tick(_cyc_08012900);
        gf_indirect_control_flow_arm_at_080129B0();
        return;
    }
    g_cpu.R[15] = 0x08012904u;
    runtime_tick(_cyc_08012900);
    /* 08012904  08012904 A movs r2,r2,lsr #1 */
    g_cpu.R[15] = 0x08012904u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012904 = 1u;
    _cyc_08012904 = 1u;
    uint32_t _rm_08012904 = g_cpu.R[2];
    uint32_t _op2_08012904;
    uint32_t _co_08012904;
    _op2_08012904 = _rm_08012904 >> 1;
    _co_08012904 = (_rm_08012904 >> 0) & 1u;
    uint32_t _r_08012904;
    _r_08012904 = _op2_08012904;
    arm_set_nzc_logic(_r_08012904, _co_08012904);
    g_cpu.R[2] = _r_08012904;
    g_cpu.R[15] = 0x08012908u;
    runtime_tick(_cyc_08012904);
    /* 08012908  08012908 A bcc 0x08012974 */
    g_cpu.R[15] = 0x08012908u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012908 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08012908 = 3u;
        g_cpu.R[15] = 0x08012974u;
        runtime_tick(_cyc_08012908);
        gf_indirect_control_flow_arm_at_08012974();
        return;
    }
    g_cpu.R[15] = 0x0801290Cu;
    runtime_tick(_cyc_08012908);
    /* 0801290C  0801290c A movs r2,r2,lsr #1 */
    g_cpu.R[15] = 0x0801290Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801290C = 1u;
    _cyc_0801290C = 1u;
    uint32_t _rm_0801290C = g_cpu.R[2];
    uint32_t _op2_0801290C;
    uint32_t _co_0801290C;
    _op2_0801290C = _rm_0801290C >> 1;
    _co_0801290C = (_rm_0801290C >> 0) & 1u;
    uint32_t _r_0801290C;
    _r_0801290C = _op2_0801290C;
    arm_set_nzc_logic(_r_0801290C, _co_0801290C);
    g_cpu.R[2] = _r_0801290C;
    g_cpu.R[15] = 0x08012910u;
    runtime_tick(_cyc_0801290C);
    /* 08012910  08012910 A bcc 0x08012980 */
    g_cpu.R[15] = 0x08012910u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012910 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08012910 = 3u;
        g_cpu.R[15] = 0x08012980u;
        runtime_tick(_cyc_08012910);
        gf_indirect_control_flow_arm_at_08012980();
        return;
    }
    g_cpu.R[15] = 0x08012914u;
    runtime_tick(_cyc_08012910);
    /* 08012914  08012914 A movs r2,r2,lsr #1 */
    g_cpu.R[15] = 0x08012914u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012914 = 1u;
    _cyc_08012914 = 1u;
    uint32_t _rm_08012914 = g_cpu.R[2];
    uint32_t _op2_08012914;
    uint32_t _co_08012914;
    _op2_08012914 = _rm_08012914 >> 1;
    _co_08012914 = (_rm_08012914 >> 0) & 1u;
    uint32_t _r_08012914;
    _r_08012914 = _op2_08012914;
    arm_set_nzc_logic(_r_08012914, _co_08012914);
    g_cpu.R[2] = _r_08012914;
    g_cpu.R[15] = 0x08012918u;
    runtime_tick(_cyc_08012914);
    /* 08012918  08012918 A bcc 0x08012990 */
    g_cpu.R[15] = 0x08012918u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012918 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08012918 = 3u;
        g_cpu.R[15] = 0x08012990u;
        runtime_tick(_cyc_08012918);
        gf_indirect_control_flow_arm_at_08012990();
        return;
    }
    g_cpu.R[15] = 0x0801291Cu;
    runtime_tick(_cyc_08012918);
    /* 0801291C  0801291c A movs r2,r2,lsr #1 */
    g_cpu.R[15] = 0x0801291Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801291C = 1u;
    _cyc_0801291C = 1u;
    uint32_t _rm_0801291C = g_cpu.R[2];
    uint32_t _op2_0801291C;
    uint32_t _co_0801291C;
    _op2_0801291C = _rm_0801291C >> 1;
    _co_0801291C = (_rm_0801291C >> 0) & 1u;
    uint32_t _r_0801291C;
    _r_0801291C = _op2_0801291C;
    arm_set_nzc_logic(_r_0801291C, _co_0801291C);
    g_cpu.R[2] = _r_0801291C;
    g_cpu.R[15] = 0x08012920u;
    runtime_tick(_cyc_0801291C);
    /* 08012920  08012920 A bcs 0x0801293c */
    g_cpu.R[15] = 0x08012920u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012920 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012920 = 3u;
        g_cpu.R[15] = 0x0801293Cu;
        runtime_tick(_cyc_08012920);
        gf_indirect_control_flow_arm_at_0801293C();
        return;
    }
    g_cpu.R[15] = 0x08012924u;
    runtime_tick(_cyc_08012920);
    /* 08012924  08012924 A movs r2,r2,lsr #1 */
    g_cpu.R[15] = 0x08012924u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012924 = 1u;
    _cyc_08012924 = 1u;
    uint32_t _rm_08012924 = g_cpu.R[2];
    uint32_t _op2_08012924;
    uint32_t _co_08012924;
    _op2_08012924 = _rm_08012924 >> 1;
    _co_08012924 = (_rm_08012924 >> 0) & 1u;
    uint32_t _r_08012924;
    _r_08012924 = _op2_08012924;
    arm_set_nzc_logic(_r_08012924, _co_08012924);
    g_cpu.R[2] = _r_08012924;
    g_cpu.R[15] = 0x08012928u;
    runtime_tick(_cyc_08012924);
    /* 08012928  08012928 A bcc 0x080129a0 */
    g_cpu.R[15] = 0x08012928u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012928 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08012928 = 3u;
        g_cpu.R[15] = 0x080129A0u;
        runtime_tick(_cyc_08012928);
        gf_indirect_control_flow_arm_at_080129A0();
        return;
    }
    g_cpu.R[15] = 0x0801292Cu;
    runtime_tick(_cyc_08012928);
    /* 0801292C  0801292c A subs r4,r4,#0x7 */
    g_cpu.R[15] = 0x0801292Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801292C = 1u;
    _cyc_0801292C = 1u;
    uint32_t _rn_0801292C = g_cpu.R[4];
    uint32_t _r_0801292C;
    _r_0801292C = _rn_0801292C - 0x00000007u;
    arm_set_nzcv_sub(_rn_0801292C, 0x00000007u, _r_0801292C);
    g_cpu.R[4] = _r_0801292C;
    g_cpu.R[15] = 0x08012930u;
    runtime_tick(_cyc_0801292C);
    /* 08012930  08012930 A mov r5,#0x7 */
    g_cpu.R[15] = 0x08012930u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012930 = 1u;
    _cyc_08012930 = 1u;
    uint32_t _r_08012930;
    _r_08012930 = 0x00000007u;
    g_cpu.R[5] = _r_08012930;
    g_cpu.R[15] = 0x08012934u;
    runtime_tick(_cyc_08012930);
    /* 08012934  08012934 A bpl 0x080129b8 */
    g_cpu.R[15] = 0x08012934u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012934 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08012934 = 3u;
        g_cpu.R[15] = 0x080129B8u;
        runtime_tick(_cyc_08012934);
        gf_indirect_control_flow_arm_at_080129B8();
        return;
    }
    g_cpu.R[15] = 0x08012938u;
    runtime_tick(_cyc_08012934);
    /* 08012938  08012938 A blmi 0x08012acc */
    g_cpu.R[15] = 0x08012938u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012938 = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_08012938 = 3u;
        g_cpu.R[14] = 0x0801293Cu;
        g_cpu.R[15] = 0x08012ACCu;
        runtime_call_push_return(0x0801293Cu);
        runtime_tick(_cyc_08012938);
        _cyc_08012938 = 0u;
        gf_indirect_control_flow_arm_at_08012ACC();
        if (g_cpu.R[15] != 0x0801293Cu) { runtime_call_cancel_return(0x0801293Cu); return; }
    }
    g_cpu.R[15] = 0x0801293Cu;
    runtime_tick(_cyc_08012938);
    /* fall-through to 0x0801293C */
    g_cpu.R[15] = 0x0801293Cu;
    runtime_dispatch(0x0801293Cu);
    return;
}


/* 0x0801293C  mode=arm  end=0x08012958  branches=7 */
void gf_indirect_control_flow_arm_at_0801293C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0801293Cu);
    /* 0801293C  0801293c A ands r5,r2,#0x3 */
    g_cpu.R[15] = 0x0801293Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801293C = 1u;
    _cyc_0801293C = 1u;
    uint32_t _rn_0801293C = g_cpu.R[2];
    uint32_t _r_0801293C;
    _r_0801293C = _rn_0801293C & 0x00000003u;
    arm_set_nzc_logic(_r_0801293C, cpsr_c());
    g_cpu.R[5] = _r_0801293C;
    g_cpu.R[15] = 0x08012940u;
    runtime_tick(_cyc_0801293C);
    /* 08012940  08012940 A mov r2,r2,lsr #2 */
    g_cpu.R[15] = 0x08012940u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012940 = 1u;
    _cyc_08012940 = 1u;
    uint32_t _rm_08012940 = g_cpu.R[2];
    uint32_t _op2_08012940;
    uint32_t _co_08012940;
    _op2_08012940 = _rm_08012940 >> 2;
    _co_08012940 = (_rm_08012940 >> 1) & 1u;
    uint32_t _r_08012940;
    _r_08012940 = _op2_08012940;
    g_cpu.R[2] = _r_08012940;
    g_cpu.R[15] = 0x08012944u;
    runtime_tick(_cyc_08012940);
    /* 08012944  08012944 A beq 0x08012958 */
    g_cpu.R[15] = 0x08012944u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012944 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08012944 = 3u;
        g_cpu.R[15] = 0x08012958u;
        runtime_tick(_cyc_08012944);
        gf_indirect_control_flow_arm_at_08012958();
        return;
    }
    g_cpu.R[15] = 0x08012948u;
    runtime_tick(_cyc_08012944);
    /* 08012948  08012948 A add r5,r5,#0x7 */
    g_cpu.R[15] = 0x08012948u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012948 = 1u;
    _cyc_08012948 = 1u;
    uint32_t _rn_08012948 = g_cpu.R[5];
    uint32_t _r_08012948;
    _r_08012948 = _rn_08012948 + 0x00000007u;
    g_cpu.R[5] = _r_08012948;
    g_cpu.R[15] = 0x0801294Cu;
    runtime_tick(_cyc_08012948);
    /* 0801294C  0801294c A subs r4,r4,#0x8 */
    g_cpu.R[15] = 0x0801294Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801294C = 1u;
    _cyc_0801294C = 1u;
    uint32_t _rn_0801294C = g_cpu.R[4];
    uint32_t _r_0801294C;
    _r_0801294C = _rn_0801294C - 0x00000008u;
    arm_set_nzcv_sub(_rn_0801294C, 0x00000008u, _r_0801294C);
    g_cpu.R[4] = _r_0801294C;
    g_cpu.R[15] = 0x08012950u;
    runtime_tick(_cyc_0801294C);
    /* 08012950  08012950 A bpl 0x080129b8 */
    g_cpu.R[15] = 0x08012950u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012950 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08012950 = 3u;
        g_cpu.R[15] = 0x080129B8u;
        runtime_tick(_cyc_08012950);
        gf_indirect_control_flow_arm_at_080129B8();
        return;
    }
    g_cpu.R[15] = 0x08012954u;
    runtime_tick(_cyc_08012950);
    /* 08012954  08012954 A blmi 0x08012acc */
    g_cpu.R[15] = 0x08012954u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012954 = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_08012954 = 3u;
        g_cpu.R[14] = 0x08012958u;
        g_cpu.R[15] = 0x08012ACCu;
        runtime_call_push_return(0x08012958u);
        runtime_tick(_cyc_08012954);
        _cyc_08012954 = 0u;
        gf_indirect_control_flow_arm_at_08012ACC();
        if (g_cpu.R[15] != 0x08012958u) { runtime_call_cancel_return(0x08012958u); return; }
    }
    g_cpu.R[15] = 0x08012958u;
    runtime_tick(_cyc_08012954);
    /* fall-through to 0x08012958 */
    g_cpu.R[15] = 0x08012958u;
    runtime_dispatch(0x08012958u);
    return;
}


/* 0x08012958  mode=arm  end=0x08012974  branches=4 */
void gf_indirect_control_flow_arm_at_08012958(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012958u);
    /* 08012958  08012958 A ands r5,r2,#0x7f */
    g_cpu.R[15] = 0x08012958u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012958 = 1u;
    _cyc_08012958 = 1u;
    uint32_t _rn_08012958 = g_cpu.R[2];
    uint32_t _r_08012958;
    _r_08012958 = _rn_08012958 & 0x0000007Fu;
    arm_set_nzc_logic(_r_08012958, cpsr_c());
    g_cpu.R[5] = _r_08012958;
    g_cpu.R[15] = 0x0801295Cu;
    runtime_tick(_cyc_08012958);
    /* 0801295C  0801295c A beq 0x08012ae0 */
    g_cpu.R[15] = 0x0801295Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801295C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0801295C = 3u;
        g_cpu.R[15] = 0x08012AE0u;
        runtime_tick(_cyc_0801295C);
        gf_indirect_control_flow_arm_at_08012AE0();
        return;
    }
    g_cpu.R[15] = 0x08012960u;
    runtime_tick(_cyc_0801295C);
    /* 08012960  08012960 A add r5,r5,#0xa */
    g_cpu.R[15] = 0x08012960u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012960 = 1u;
    _cyc_08012960 = 1u;
    uint32_t _rn_08012960 = g_cpu.R[5];
    uint32_t _r_08012960;
    _r_08012960 = _rn_08012960 + 0x0000000Au;
    g_cpu.R[5] = _r_08012960;
    g_cpu.R[15] = 0x08012964u;
    runtime_tick(_cyc_08012960);
    /* 08012964  08012964 A mov r2,r2,lsr #7 */
    g_cpu.R[15] = 0x08012964u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012964 = 1u;
    _cyc_08012964 = 1u;
    uint32_t _rm_08012964 = g_cpu.R[2];
    uint32_t _op2_08012964;
    uint32_t _co_08012964;
    _op2_08012964 = _rm_08012964 >> 7;
    _co_08012964 = (_rm_08012964 >> 6) & 1u;
    uint32_t _r_08012964;
    _r_08012964 = _op2_08012964;
    g_cpu.R[2] = _r_08012964;
    g_cpu.R[15] = 0x08012968u;
    runtime_tick(_cyc_08012964);
    /* 08012968  08012968 A subs r4,r4,#0xf */
    g_cpu.R[15] = 0x08012968u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012968 = 1u;
    _cyc_08012968 = 1u;
    uint32_t _rn_08012968 = g_cpu.R[4];
    uint32_t _r_08012968;
    _r_08012968 = _rn_08012968 - 0x0000000Fu;
    arm_set_nzcv_sub(_rn_08012968, 0x0000000Fu, _r_08012968);
    g_cpu.R[4] = _r_08012968;
    g_cpu.R[15] = 0x0801296Cu;
    runtime_tick(_cyc_08012968);
    /* 0801296C  0801296c A bpl 0x080129b8 */
    g_cpu.R[15] = 0x0801296Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801296C = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_0801296C = 3u;
        g_cpu.R[15] = 0x080129B8u;
        runtime_tick(_cyc_0801296C);
        gf_indirect_control_flow_arm_at_080129B8();
        return;
    }
    g_cpu.R[15] = 0x08012970u;
    runtime_tick(_cyc_0801296C);
    /* 08012970  08012970 A blmi 0x08012acc */
    g_cpu.R[15] = 0x08012970u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012970 = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_08012970 = 3u;
        g_cpu.R[14] = 0x08012974u;
        g_cpu.R[15] = 0x08012ACCu;
        runtime_call_push_return(0x08012974u);
        runtime_tick(_cyc_08012970);
        _cyc_08012970 = 0u;
        gf_indirect_control_flow_arm_at_08012ACC();
        if (g_cpu.R[15] != 0x08012974u) { runtime_call_cancel_return(0x08012974u); return; }
    }
    g_cpu.R[15] = 0x08012974u;
    runtime_tick(_cyc_08012970);
    /* fall-through to 0x08012974 */
    g_cpu.R[15] = 0x08012974u;
    runtime_dispatch(0x08012974u);
    return;
}


/* 0x08012974  mode=arm  end=0x08012980  branches=1 */
void gf_indirect_control_flow_arm_at_08012974(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012974u);
    /* 08012974  08012974 A subs r4,r4,#0x3 */
    g_cpu.R[15] = 0x08012974u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012974 = 1u;
    _cyc_08012974 = 1u;
    uint32_t _rn_08012974 = g_cpu.R[4];
    uint32_t _r_08012974;
    _r_08012974 = _rn_08012974 - 0x00000003u;
    arm_set_nzcv_sub(_rn_08012974, 0x00000003u, _r_08012974);
    g_cpu.R[4] = _r_08012974;
    g_cpu.R[15] = 0x08012978u;
    runtime_tick(_cyc_08012974);
    /* 08012978  08012978 A mov r5,#0x3 */
    g_cpu.R[15] = 0x08012978u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012978 = 1u;
    _cyc_08012978 = 1u;
    uint32_t _r_08012978;
    _r_08012978 = 0x00000003u;
    g_cpu.R[5] = _r_08012978;
    g_cpu.R[15] = 0x0801297Cu;
    runtime_tick(_cyc_08012978);
    /* 0801297C  0801297c A b 0x080129b8 */
    g_cpu.R[15] = 0x0801297Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801297C = 1u;
    _cyc_0801297C = 3u;
    g_cpu.R[15] = 0x080129B8u;
    runtime_tick(_cyc_0801297C);
    gf_indirect_control_flow_arm_at_080129B8();
    return;
    g_cpu.R[15] = 0x08012980u;
    runtime_tick(_cyc_0801297C);
    /* fall-through to 0x08012980 */
    g_cpu.R[15] = 0x08012980u;
    runtime_dispatch(0x08012980u);
    return;
}


/* 0x08012980  mode=arm  end=0x08012990  branches=9 */
void gf_indirect_control_flow_arm_at_08012980(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012980u);
    /* 08012980  08012980 A subs r4,r4,#0x4 */
    g_cpu.R[15] = 0x08012980u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012980 = 1u;
    _cyc_08012980 = 1u;
    uint32_t _rn_08012980 = g_cpu.R[4];
    uint32_t _r_08012980;
    _r_08012980 = _rn_08012980 - 0x00000004u;
    arm_set_nzcv_sub(_rn_08012980, 0x00000004u, _r_08012980);
    g_cpu.R[4] = _r_08012980;
    g_cpu.R[15] = 0x08012984u;
    runtime_tick(_cyc_08012980);
    /* 08012984  08012984 A mov r5,#0x4 */
    g_cpu.R[15] = 0x08012984u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012984 = 1u;
    _cyc_08012984 = 1u;
    uint32_t _r_08012984;
    _r_08012984 = 0x00000004u;
    g_cpu.R[5] = _r_08012984;
    g_cpu.R[15] = 0x08012988u;
    runtime_tick(_cyc_08012984);
    /* 08012988  08012988 A bpl 0x080129b8 */
    g_cpu.R[15] = 0x08012988u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012988 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08012988 = 3u;
        g_cpu.R[15] = 0x080129B8u;
        runtime_tick(_cyc_08012988);
        gf_indirect_control_flow_arm_at_080129B8();
        return;
    }
    g_cpu.R[15] = 0x0801298Cu;
    runtime_tick(_cyc_08012988);
    /* 0801298C  0801298c A blmi 0x08012acc */
    g_cpu.R[15] = 0x0801298Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801298C = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_0801298C = 3u;
        g_cpu.R[14] = 0x08012990u;
        g_cpu.R[15] = 0x08012ACCu;
        runtime_call_push_return(0x08012990u);
        runtime_tick(_cyc_0801298C);
        _cyc_0801298C = 0u;
        gf_indirect_control_flow_arm_at_08012ACC();
        if (g_cpu.R[15] != 0x08012990u) { runtime_call_cancel_return(0x08012990u); return; }
    }
    g_cpu.R[15] = 0x08012990u;
    runtime_tick(_cyc_0801298C);
    /* fall-through to 0x08012990 */
    g_cpu.R[15] = 0x08012990u;
    runtime_dispatch(0x08012990u);
    return;
}


/* 0x08012990  mode=arm  end=0x080129A0  branches=7 */
void gf_indirect_control_flow_arm_at_08012990(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012990u);
    /* 08012990  08012990 A subs r4,r4,#0x5 */
    g_cpu.R[15] = 0x08012990u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012990 = 1u;
    _cyc_08012990 = 1u;
    uint32_t _rn_08012990 = g_cpu.R[4];
    uint32_t _r_08012990;
    _r_08012990 = _rn_08012990 - 0x00000005u;
    arm_set_nzcv_sub(_rn_08012990, 0x00000005u, _r_08012990);
    g_cpu.R[4] = _r_08012990;
    g_cpu.R[15] = 0x08012994u;
    runtime_tick(_cyc_08012990);
    /* 08012994  08012994 A mov r5,#0x5 */
    g_cpu.R[15] = 0x08012994u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012994 = 1u;
    _cyc_08012994 = 1u;
    uint32_t _r_08012994;
    _r_08012994 = 0x00000005u;
    g_cpu.R[5] = _r_08012994;
    g_cpu.R[15] = 0x08012998u;
    runtime_tick(_cyc_08012994);
    /* 08012998  08012998 A bpl 0x080129b8 */
    g_cpu.R[15] = 0x08012998u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012998 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08012998 = 3u;
        g_cpu.R[15] = 0x080129B8u;
        runtime_tick(_cyc_08012998);
        gf_indirect_control_flow_arm_at_080129B8();
        return;
    }
    g_cpu.R[15] = 0x0801299Cu;
    runtime_tick(_cyc_08012998);
    /* 0801299C  0801299c A blmi 0x08012acc */
    g_cpu.R[15] = 0x0801299Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0801299C = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_0801299C = 3u;
        g_cpu.R[14] = 0x080129A0u;
        g_cpu.R[15] = 0x08012ACCu;
        runtime_call_push_return(0x080129A0u);
        runtime_tick(_cyc_0801299C);
        _cyc_0801299C = 0u;
        gf_indirect_control_flow_arm_at_08012ACC();
        if (g_cpu.R[15] != 0x080129A0u) { runtime_call_cancel_return(0x080129A0u); return; }
    }
    g_cpu.R[15] = 0x080129A0u;
    runtime_tick(_cyc_0801299C);
    /* fall-through to 0x080129A0 */
    g_cpu.R[15] = 0x080129A0u;
    runtime_dispatch(0x080129A0u);
    return;
}


/* 0x080129A0  mode=arm  end=0x080129B0  branches=5 */
void gf_indirect_control_flow_arm_at_080129A0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080129A0u);
    /* 080129A0  080129a0 A subs r4,r4,#0x7 */
    g_cpu.R[15] = 0x080129A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129A0 = 1u;
    _cyc_080129A0 = 1u;
    uint32_t _rn_080129A0 = g_cpu.R[4];
    uint32_t _r_080129A0;
    _r_080129A0 = _rn_080129A0 - 0x00000007u;
    arm_set_nzcv_sub(_rn_080129A0, 0x00000007u, _r_080129A0);
    g_cpu.R[4] = _r_080129A0;
    g_cpu.R[15] = 0x080129A4u;
    runtime_tick(_cyc_080129A0);
    /* 080129A4  080129a4 A mov r5,#0x6 */
    g_cpu.R[15] = 0x080129A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129A4 = 1u;
    _cyc_080129A4 = 1u;
    uint32_t _r_080129A4;
    _r_080129A4 = 0x00000006u;
    g_cpu.R[5] = _r_080129A4;
    g_cpu.R[15] = 0x080129A8u;
    runtime_tick(_cyc_080129A4);
    /* 080129A8  080129a8 A bpl 0x080129b8 */
    g_cpu.R[15] = 0x080129A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129A8 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_080129A8 = 3u;
        g_cpu.R[15] = 0x080129B8u;
        runtime_tick(_cyc_080129A8);
        gf_indirect_control_flow_arm_at_080129B8();
        return;
    }
    g_cpu.R[15] = 0x080129ACu;
    runtime_tick(_cyc_080129A8);
    /* 080129AC  080129ac A blmi 0x08012acc */
    g_cpu.R[15] = 0x080129ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129AC = 1u;
    if (arm_cond_passes(0x4u)) {
        _cyc_080129AC = 3u;
        g_cpu.R[14] = 0x080129B0u;
        g_cpu.R[15] = 0x08012ACCu;
        runtime_call_push_return(0x080129B0u);
        runtime_tick(_cyc_080129AC);
        _cyc_080129AC = 0u;
        gf_indirect_control_flow_arm_at_08012ACC();
        if (g_cpu.R[15] != 0x080129B0u) { runtime_call_cancel_return(0x080129B0u); return; }
    }
    g_cpu.R[15] = 0x080129B0u;
    runtime_tick(_cyc_080129AC);
    /* fall-through to 0x080129B0 */
    g_cpu.R[15] = 0x080129B0u;
    runtime_dispatch(0x080129B0u);
    return;
}


/* 0x080129B0  mode=arm  end=0x080129B8  branches=3 */
void gf_indirect_control_flow_arm_at_080129B0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080129B0u);
    /* 080129B0  080129b0 A subs r4,r4,#0x2 */
    g_cpu.R[15] = 0x080129B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129B0 = 1u;
    _cyc_080129B0 = 1u;
    uint32_t _rn_080129B0 = g_cpu.R[4];
    uint32_t _r_080129B0;
    _r_080129B0 = _rn_080129B0 - 0x00000002u;
    arm_set_nzcv_sub(_rn_080129B0, 0x00000002u, _r_080129B0);
    g_cpu.R[4] = _r_080129B0;
    g_cpu.R[15] = 0x080129B4u;
    runtime_tick(_cyc_080129B0);
    /* 080129B4  080129b4 A mov r5,#0x2 */
    g_cpu.R[15] = 0x080129B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129B4 = 1u;
    _cyc_080129B4 = 1u;
    uint32_t _r_080129B4;
    _r_080129B4 = 0x00000002u;
    g_cpu.R[5] = _r_080129B4;
    g_cpu.R[15] = 0x080129B8u;
    runtime_tick(_cyc_080129B4);
    /* fall-through to 0x080129B8 */
    g_cpu.R[15] = 0x080129B8u;
    runtime_dispatch(0x080129B8u);
    return;
}


/* 0x080129B8  mode=arm  end=0x080129CC  branches=3 */
void gf_indirect_control_flow_arm_at_080129B8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080129B8u);
    /* 080129B8  080129b8 A movs r2,r2,lsr #1 */
    g_cpu.R[15] = 0x080129B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129B8 = 1u;
    _cyc_080129B8 = 1u;
    uint32_t _rm_080129B8 = g_cpu.R[2];
    uint32_t _op2_080129B8;
    uint32_t _co_080129B8;
    _op2_080129B8 = _rm_080129B8 >> 1;
    _co_080129B8 = (_rm_080129B8 >> 0) & 1u;
    uint32_t _r_080129B8;
    _r_080129B8 = _op2_080129B8;
    arm_set_nzc_logic(_r_080129B8, _co_080129B8);
    g_cpu.R[2] = _r_080129B8;
    g_cpu.R[15] = 0x080129BCu;
    runtime_tick(_cyc_080129B8);
    /* 080129BC  080129bc A bcc 0x08012a00 */
    g_cpu.R[15] = 0x080129BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129BC = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_080129BC = 3u;
        g_cpu.R[15] = 0x08012A00u;
        runtime_tick(_cyc_080129BC);
        gf_indirect_control_flow_arm_at_08012A00();
        return;
    }
    g_cpu.R[15] = 0x080129C0u;
    runtime_tick(_cyc_080129BC);
    /* 080129C0  080129c0 A and r6,r2,#0x1f */
    g_cpu.R[15] = 0x080129C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129C0 = 1u;
    _cyc_080129C0 = 1u;
    uint32_t _rn_080129C0 = g_cpu.R[2];
    uint32_t _r_080129C0;
    _r_080129C0 = _rn_080129C0 & 0x0000001Fu;
    g_cpu.R[6] = _r_080129C0;
    g_cpu.R[15] = 0x080129C4u;
    runtime_tick(_cyc_080129C0);
    /* 080129C4  080129c4 A subs r4,r4,#0x6 */
    g_cpu.R[15] = 0x080129C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129C4 = 1u;
    _cyc_080129C4 = 1u;
    uint32_t _rn_080129C4 = g_cpu.R[4];
    uint32_t _r_080129C4;
    _r_080129C4 = _rn_080129C4 - 0x00000006u;
    arm_set_nzcv_sub(_rn_080129C4, 0x00000006u, _r_080129C4);
    g_cpu.R[4] = _r_080129C4;
    g_cpu.R[15] = 0x080129C8u;
    runtime_tick(_cyc_080129C4);
    /* 080129C8  080129c8 A mov r2,r2,lsr #5 */
    g_cpu.R[15] = 0x080129C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080129C8 = 1u;
    _cyc_080129C8 = 1u;
    uint32_t _rm_080129C8 = g_cpu.R[2];
    uint32_t _op2_080129C8;
    uint32_t _co_080129C8;
    _op2_080129C8 = _rm_080129C8 >> 5;
    _co_080129C8 = (_rm_080129C8 >> 4) & 1u;
    uint32_t _r_080129C8;
    _r_080129C8 = _op2_080129C8;
    g_cpu.R[2] = _r_080129C8;
    g_cpu.R[15] = 0x080129CCu;
    runtime_tick(_cyc_080129C8);
    /* fall-through to 0x080129CC */
    g_cpu.R[15] = 0x080129CCu;
    runtime_dispatch(0x080129CCu);
    return;
}


/* 0x08012A00  mode=arm  end=0x08012A24  branches=2 */
void gf_indirect_control_flow_arm_at_08012A00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012A00u);
    /* 08012A00  08012a00 A sub r6,r1,r9 */
    g_cpu.R[15] = 0x08012A00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A00 = 1u;
    _cyc_08012A00 = 1u;
    uint32_t _rm_08012A00 = g_cpu.R[9];
    uint32_t _op2_08012A00;
    uint32_t _co_08012A00;
    _op2_08012A00 = _rm_08012A00;
    _co_08012A00 = cpsr_c();
    uint32_t _rn_08012A00 = g_cpu.R[1];
    uint32_t _r_08012A00;
    _r_08012A00 = _rn_08012A00 - _op2_08012A00;
    g_cpu.R[6] = _r_08012A00;
    g_cpu.R[15] = 0x08012A04u;
    runtime_tick(_cyc_08012A00);
    /* 08012A04  08012a04 A cmps r6,#0x800 */
    g_cpu.R[15] = 0x08012A04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A04 = 1u;
    _cyc_08012A04 = 1u;
    uint32_t _rn_08012A04 = g_cpu.R[6];
    uint32_t _r_08012A04;
    _r_08012A04 = _rn_08012A04 - 0x00000800u;
    arm_set_nzcv_sub(_rn_08012A04, 0x00000800u, _r_08012A04);
    g_cpu.R[15] = 0x08012A08u;
    runtime_tick(_cyc_08012A04);
    /* 08012A08  08012a08 A bcc 0x08012a24 */
    g_cpu.R[15] = 0x08012A08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A08 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08012A08 = 3u;
        g_cpu.R[15] = 0x08012A24u;
        runtime_tick(_cyc_08012A08);
        gf_indirect_control_flow_arm_at_08012A24();
        return;
    }
    g_cpu.R[15] = 0x08012A0Cu;
    runtime_tick(_cyc_08012A08);
    /* 08012A0C  08012a0c A mov r6,r2,ror #12 */
    g_cpu.R[15] = 0x08012A0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A0C = 1u;
    _cyc_08012A0C = 1u;
    uint32_t _rm_08012A0C = g_cpu.R[2];
    uint32_t _op2_08012A0C;
    uint32_t _co_08012A0C;
    _op2_08012A0C = (_rm_08012A0C >> 12) | (_rm_08012A0C << 20);
    _co_08012A0C = (_op2_08012A0C >> 31) & 1u;
    uint32_t _r_08012A0C;
    _r_08012A0C = _op2_08012A0C;
    g_cpu.R[6] = _r_08012A0C;
    g_cpu.R[15] = 0x08012A10u;
    runtime_tick(_cyc_08012A0C);
    /* 08012A10  08012a10 A mov r2,r2,lsr #12 */
    g_cpu.R[15] = 0x08012A10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A10 = 1u;
    _cyc_08012A10 = 1u;
    uint32_t _rm_08012A10 = g_cpu.R[2];
    uint32_t _op2_08012A10;
    uint32_t _co_08012A10;
    _op2_08012A10 = _rm_08012A10 >> 12;
    _co_08012A10 = (_rm_08012A10 >> 11) & 1u;
    uint32_t _r_08012A10;
    _r_08012A10 = _op2_08012A10;
    g_cpu.R[2] = _r_08012A10;
    g_cpu.R[15] = 0x08012A14u;
    runtime_tick(_cyc_08012A10);
    /* 08012A14  08012a14 A mov r6,r6,lsr #20 */
    g_cpu.R[15] = 0x08012A14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A14 = 1u;
    _cyc_08012A14 = 1u;
    uint32_t _rm_08012A14 = g_cpu.R[6];
    uint32_t _op2_08012A14;
    uint32_t _co_08012A14;
    _op2_08012A14 = _rm_08012A14 >> 20;
    _co_08012A14 = (_rm_08012A14 >> 19) & 1u;
    uint32_t _r_08012A14;
    _r_08012A14 = _op2_08012A14;
    g_cpu.R[6] = _r_08012A14;
    g_cpu.R[15] = 0x08012A18u;
    runtime_tick(_cyc_08012A14);
    /* 08012A18  08012a18 A add r6,r6,#0x20 */
    g_cpu.R[15] = 0x08012A18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A18 = 1u;
    _cyc_08012A18 = 1u;
    uint32_t _rn_08012A18 = g_cpu.R[6];
    uint32_t _r_08012A18;
    _r_08012A18 = _rn_08012A18 + 0x00000020u;
    g_cpu.R[6] = _r_08012A18;
    g_cpu.R[15] = 0x08012A1Cu;
    runtime_tick(_cyc_08012A18);
    /* 08012A1C  08012a1c A subs r4,r4,#0xd */
    g_cpu.R[15] = 0x08012A1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A1C = 1u;
    _cyc_08012A1C = 1u;
    uint32_t _rn_08012A1C = g_cpu.R[4];
    uint32_t _r_08012A1C;
    _r_08012A1C = _rn_08012A1C - 0x0000000Du;
    arm_set_nzcv_sub(_rn_08012A1C, 0x0000000Du, _r_08012A1C);
    g_cpu.R[4] = _r_08012A1C;
    g_cpu.R[15] = 0x08012A20u;
    runtime_tick(_cyc_08012A1C);
    /* 08012A20  08012a20 A b 0x080129cc */
    g_cpu.R[15] = 0x08012A20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A20 = 1u;
    _cyc_08012A20 = 3u;
    g_cpu.R[15] = 0x080129CCu;
    runtime_tick(_cyc_08012A20);
    gf_memory_transfer_arm_at_080129CC();
    return;
    g_cpu.R[15] = 0x08012A24u;
    runtime_tick(_cyc_08012A20);
    /* fall-through to 0x08012A24 */
    g_cpu.R[15] = 0x08012A24u;
    runtime_dispatch(0x08012A24u);
    return;
}


/* 0x08012A24  mode=arm  end=0x08012AAC  branches=12 */
void gf_indirect_control_flow_arm_at_08012A24(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012A24u);
    /* 08012A24  08012a24 A mov r7,#0xb */
    g_cpu.R[15] = 0x08012A24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A24 = 1u;
    _cyc_08012A24 = 1u;
    uint32_t _r_08012A24;
    _r_08012A24 = 0x0000000Bu;
    g_cpu.R[7] = _r_08012A24;
    g_cpu.R[15] = 0x08012A28u;
    runtime_tick(_cyc_08012A24);
    /* 08012A28  08012a28 A movs r6,r6,lsl #22 */
    g_cpu.R[15] = 0x08012A28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A28 = 1u;
    _cyc_08012A28 = 1u;
    uint32_t _rm_08012A28 = g_cpu.R[6];
    uint32_t _op2_08012A28;
    uint32_t _co_08012A28;
    _op2_08012A28 = _rm_08012A28 << 22;
    _co_08012A28 = (_rm_08012A28 >> 10) & 1u;
    uint32_t _r_08012A28;
    _r_08012A28 = _op2_08012A28;
    arm_set_nzc_logic(_r_08012A28, _co_08012A28);
    g_cpu.R[6] = _r_08012A28;
    g_cpu.R[15] = 0x08012A2Cu;
    runtime_tick(_cyc_08012A28);
    /* 08012A2C  08012a2c A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A2C = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A2C = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A2C);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A30u;
    runtime_tick(_cyc_08012A2C);
    /* 08012A30  08012a30 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A30 = 1u;
    _cyc_08012A30 = 1u;
    uint32_t _rn_08012A30 = g_cpu.R[7];
    uint32_t _r_08012A30;
    _r_08012A30 = _rn_08012A30 - 0x00000001u;
    g_cpu.R[7] = _r_08012A30;
    g_cpu.R[15] = 0x08012A34u;
    runtime_tick(_cyc_08012A30);
    /* 08012A34  08012a34 A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A34 = 1u;
    _cyc_08012A34 = 1u;
    uint32_t _rm_08012A34 = g_cpu.R[6];
    uint32_t _op2_08012A34;
    uint32_t _co_08012A34;
    _op2_08012A34 = _rm_08012A34 << 1;
    _co_08012A34 = (_rm_08012A34 >> 31) & 1u;
    uint32_t _r_08012A34;
    _r_08012A34 = _op2_08012A34;
    arm_set_nzc_logic(_r_08012A34, _co_08012A34);
    g_cpu.R[6] = _r_08012A34;
    g_cpu.R[15] = 0x08012A38u;
    runtime_tick(_cyc_08012A34);
    /* 08012A38  08012a38 A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A38 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A38 = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A38);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A3Cu;
    runtime_tick(_cyc_08012A38);
    /* 08012A3C  08012a3c A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A3C = 1u;
    _cyc_08012A3C = 1u;
    uint32_t _rn_08012A3C = g_cpu.R[7];
    uint32_t _r_08012A3C;
    _r_08012A3C = _rn_08012A3C - 0x00000001u;
    g_cpu.R[7] = _r_08012A3C;
    g_cpu.R[15] = 0x08012A40u;
    runtime_tick(_cyc_08012A3C);
    /* 08012A40  08012a40 A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A40 = 1u;
    _cyc_08012A40 = 1u;
    uint32_t _rm_08012A40 = g_cpu.R[6];
    uint32_t _op2_08012A40;
    uint32_t _co_08012A40;
    _op2_08012A40 = _rm_08012A40 << 1;
    _co_08012A40 = (_rm_08012A40 >> 31) & 1u;
    uint32_t _r_08012A40;
    _r_08012A40 = _op2_08012A40;
    arm_set_nzc_logic(_r_08012A40, _co_08012A40);
    g_cpu.R[6] = _r_08012A40;
    g_cpu.R[15] = 0x08012A44u;
    runtime_tick(_cyc_08012A40);
    /* 08012A44  08012a44 A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A44 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A44 = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A44);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A48u;
    runtime_tick(_cyc_08012A44);
    /* 08012A48  08012a48 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A48 = 1u;
    _cyc_08012A48 = 1u;
    uint32_t _rn_08012A48 = g_cpu.R[7];
    uint32_t _r_08012A48;
    _r_08012A48 = _rn_08012A48 - 0x00000001u;
    g_cpu.R[7] = _r_08012A48;
    g_cpu.R[15] = 0x08012A4Cu;
    runtime_tick(_cyc_08012A48);
    /* 08012A4C  08012a4c A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A4C = 1u;
    _cyc_08012A4C = 1u;
    uint32_t _rm_08012A4C = g_cpu.R[6];
    uint32_t _op2_08012A4C;
    uint32_t _co_08012A4C;
    _op2_08012A4C = _rm_08012A4C << 1;
    _co_08012A4C = (_rm_08012A4C >> 31) & 1u;
    uint32_t _r_08012A4C;
    _r_08012A4C = _op2_08012A4C;
    arm_set_nzc_logic(_r_08012A4C, _co_08012A4C);
    g_cpu.R[6] = _r_08012A4C;
    g_cpu.R[15] = 0x08012A50u;
    runtime_tick(_cyc_08012A4C);
    /* 08012A50  08012a50 A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A50 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A50 = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A50);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A54u;
    runtime_tick(_cyc_08012A50);
    /* 08012A54  08012a54 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A54 = 1u;
    _cyc_08012A54 = 1u;
    uint32_t _rn_08012A54 = g_cpu.R[7];
    uint32_t _r_08012A54;
    _r_08012A54 = _rn_08012A54 - 0x00000001u;
    g_cpu.R[7] = _r_08012A54;
    g_cpu.R[15] = 0x08012A58u;
    runtime_tick(_cyc_08012A54);
    /* 08012A58  08012a58 A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A58 = 1u;
    _cyc_08012A58 = 1u;
    uint32_t _rm_08012A58 = g_cpu.R[6];
    uint32_t _op2_08012A58;
    uint32_t _co_08012A58;
    _op2_08012A58 = _rm_08012A58 << 1;
    _co_08012A58 = (_rm_08012A58 >> 31) & 1u;
    uint32_t _r_08012A58;
    _r_08012A58 = _op2_08012A58;
    arm_set_nzc_logic(_r_08012A58, _co_08012A58);
    g_cpu.R[6] = _r_08012A58;
    g_cpu.R[15] = 0x08012A5Cu;
    runtime_tick(_cyc_08012A58);
    /* 08012A5C  08012a5c A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A5C = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A5C = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A5C);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A60u;
    runtime_tick(_cyc_08012A5C);
    /* 08012A60  08012a60 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A60 = 1u;
    _cyc_08012A60 = 1u;
    uint32_t _rn_08012A60 = g_cpu.R[7];
    uint32_t _r_08012A60;
    _r_08012A60 = _rn_08012A60 - 0x00000001u;
    g_cpu.R[7] = _r_08012A60;
    g_cpu.R[15] = 0x08012A64u;
    runtime_tick(_cyc_08012A60);
    /* 08012A64  08012a64 A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A64 = 1u;
    _cyc_08012A64 = 1u;
    uint32_t _rm_08012A64 = g_cpu.R[6];
    uint32_t _op2_08012A64;
    uint32_t _co_08012A64;
    _op2_08012A64 = _rm_08012A64 << 1;
    _co_08012A64 = (_rm_08012A64 >> 31) & 1u;
    uint32_t _r_08012A64;
    _r_08012A64 = _op2_08012A64;
    arm_set_nzc_logic(_r_08012A64, _co_08012A64);
    g_cpu.R[6] = _r_08012A64;
    g_cpu.R[15] = 0x08012A68u;
    runtime_tick(_cyc_08012A64);
    /* 08012A68  08012a68 A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A68 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A68 = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A68);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A6Cu;
    runtime_tick(_cyc_08012A68);
    /* 08012A6C  08012a6c A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A6C = 1u;
    _cyc_08012A6C = 1u;
    uint32_t _rn_08012A6C = g_cpu.R[7];
    uint32_t _r_08012A6C;
    _r_08012A6C = _rn_08012A6C - 0x00000001u;
    g_cpu.R[7] = _r_08012A6C;
    g_cpu.R[15] = 0x08012A70u;
    runtime_tick(_cyc_08012A6C);
    /* 08012A70  08012a70 A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A70 = 1u;
    _cyc_08012A70 = 1u;
    uint32_t _rm_08012A70 = g_cpu.R[6];
    uint32_t _op2_08012A70;
    uint32_t _co_08012A70;
    _op2_08012A70 = _rm_08012A70 << 1;
    _co_08012A70 = (_rm_08012A70 >> 31) & 1u;
    uint32_t _r_08012A70;
    _r_08012A70 = _op2_08012A70;
    arm_set_nzc_logic(_r_08012A70, _co_08012A70);
    g_cpu.R[6] = _r_08012A70;
    g_cpu.R[15] = 0x08012A74u;
    runtime_tick(_cyc_08012A70);
    /* 08012A74  08012a74 A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A74 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A74 = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A74);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A78u;
    runtime_tick(_cyc_08012A74);
    /* 08012A78  08012a78 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A78 = 1u;
    _cyc_08012A78 = 1u;
    uint32_t _rn_08012A78 = g_cpu.R[7];
    uint32_t _r_08012A78;
    _r_08012A78 = _rn_08012A78 - 0x00000001u;
    g_cpu.R[7] = _r_08012A78;
    g_cpu.R[15] = 0x08012A7Cu;
    runtime_tick(_cyc_08012A78);
    /* 08012A7C  08012a7c A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A7C = 1u;
    _cyc_08012A7C = 1u;
    uint32_t _rm_08012A7C = g_cpu.R[6];
    uint32_t _op2_08012A7C;
    uint32_t _co_08012A7C;
    _op2_08012A7C = _rm_08012A7C << 1;
    _co_08012A7C = (_rm_08012A7C >> 31) & 1u;
    uint32_t _r_08012A7C;
    _r_08012A7C = _op2_08012A7C;
    arm_set_nzc_logic(_r_08012A7C, _co_08012A7C);
    g_cpu.R[6] = _r_08012A7C;
    g_cpu.R[15] = 0x08012A80u;
    runtime_tick(_cyc_08012A7C);
    /* 08012A80  08012a80 A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A80 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A80 = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A80);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A84u;
    runtime_tick(_cyc_08012A80);
    /* 08012A84  08012a84 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A84 = 1u;
    _cyc_08012A84 = 1u;
    uint32_t _rn_08012A84 = g_cpu.R[7];
    uint32_t _r_08012A84;
    _r_08012A84 = _rn_08012A84 - 0x00000001u;
    g_cpu.R[7] = _r_08012A84;
    g_cpu.R[15] = 0x08012A88u;
    runtime_tick(_cyc_08012A84);
    /* 08012A88  08012a88 A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A88 = 1u;
    _cyc_08012A88 = 1u;
    uint32_t _rm_08012A88 = g_cpu.R[6];
    uint32_t _op2_08012A88;
    uint32_t _co_08012A88;
    _op2_08012A88 = _rm_08012A88 << 1;
    _co_08012A88 = (_rm_08012A88 >> 31) & 1u;
    uint32_t _r_08012A88;
    _r_08012A88 = _op2_08012A88;
    arm_set_nzc_logic(_r_08012A88, _co_08012A88);
    g_cpu.R[6] = _r_08012A88;
    g_cpu.R[15] = 0x08012A8Cu;
    runtime_tick(_cyc_08012A88);
    /* 08012A8C  08012a8c A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A8C = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A8C = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A8C);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A90u;
    runtime_tick(_cyc_08012A8C);
    /* 08012A90  08012a90 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A90 = 1u;
    _cyc_08012A90 = 1u;
    uint32_t _rn_08012A90 = g_cpu.R[7];
    uint32_t _r_08012A90;
    _r_08012A90 = _rn_08012A90 - 0x00000001u;
    g_cpu.R[7] = _r_08012A90;
    g_cpu.R[15] = 0x08012A94u;
    runtime_tick(_cyc_08012A90);
    /* 08012A94  08012a94 A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012A94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A94 = 1u;
    _cyc_08012A94 = 1u;
    uint32_t _rm_08012A94 = g_cpu.R[6];
    uint32_t _op2_08012A94;
    uint32_t _co_08012A94;
    _op2_08012A94 = _rm_08012A94 << 1;
    _co_08012A94 = (_rm_08012A94 >> 31) & 1u;
    uint32_t _r_08012A94;
    _r_08012A94 = _op2_08012A94;
    arm_set_nzc_logic(_r_08012A94, _co_08012A94);
    g_cpu.R[6] = _r_08012A94;
    g_cpu.R[15] = 0x08012A98u;
    runtime_tick(_cyc_08012A94);
    /* 08012A98  08012a98 A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012A98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A98 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012A98 = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012A98);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012A9Cu;
    runtime_tick(_cyc_08012A98);
    /* 08012A9C  08012a9c A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012A9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012A9C = 1u;
    _cyc_08012A9C = 1u;
    uint32_t _rn_08012A9C = g_cpu.R[7];
    uint32_t _r_08012A9C;
    _r_08012A9C = _rn_08012A9C - 0x00000001u;
    g_cpu.R[7] = _r_08012A9C;
    g_cpu.R[15] = 0x08012AA0u;
    runtime_tick(_cyc_08012A9C);
    /* 08012AA0  08012aa0 A movs r6,r6,lsl #1 */
    g_cpu.R[15] = 0x08012AA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AA0 = 1u;
    _cyc_08012AA0 = 1u;
    uint32_t _rm_08012AA0 = g_cpu.R[6];
    uint32_t _op2_08012AA0;
    uint32_t _co_08012AA0;
    _op2_08012AA0 = _rm_08012AA0 << 1;
    _co_08012AA0 = (_rm_08012AA0 >> 31) & 1u;
    uint32_t _r_08012AA0;
    _r_08012AA0 = _op2_08012AA0;
    arm_set_nzc_logic(_r_08012AA0, _co_08012AA0);
    g_cpu.R[6] = _r_08012AA0;
    g_cpu.R[15] = 0x08012AA4u;
    runtime_tick(_cyc_08012AA0);
    /* 08012AA4  08012aa4 A bcs 0x08012aac */
    g_cpu.R[15] = 0x08012AA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AA4 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08012AA4 = 3u;
        g_cpu.R[15] = 0x08012AACu;
        runtime_tick(_cyc_08012AA4);
        gf_indirect_control_flow_arm_at_08012AAC();
        return;
    }
    g_cpu.R[15] = 0x08012AA8u;
    runtime_tick(_cyc_08012AA4);
    /* 08012AA8  08012aa8 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08012AA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AA8 = 1u;
    _cyc_08012AA8 = 1u;
    uint32_t _rn_08012AA8 = g_cpu.R[7];
    uint32_t _r_08012AA8;
    _r_08012AA8 = _rn_08012AA8 - 0x00000001u;
    g_cpu.R[7] = _r_08012AA8;
    g_cpu.R[15] = 0x08012AACu;
    runtime_tick(_cyc_08012AA8);
    /* fall-through to 0x08012AAC */
    g_cpu.R[15] = 0x08012AACu;
    runtime_dispatch(0x08012AACu);
    return;
}


/* 0x08012AAC  mode=arm  end=0x08012ACC  branches=1 */
void gf_indirect_control_flow_arm_at_08012AAC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012AACu);
    /* 08012AAC  08012aac A mov r6,#0x1 */
    g_cpu.R[15] = 0x08012AACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AAC = 1u;
    _cyc_08012AAC = 1u;
    uint32_t _r_08012AAC;
    _r_08012AAC = 0x00000001u;
    g_cpu.R[6] = _r_08012AAC;
    g_cpu.R[15] = 0x08012AB0u;
    runtime_tick(_cyc_08012AAC);
    /* 08012AB0  08012ab0 A rsb r6,r6,r6,lsl r7 */
    g_cpu.R[15] = 0x08012AB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AB0 = 1u;
    _cyc_08012AB0 = 2u;
    uint32_t _rm_08012AB0 = g_cpu.R[6];
    uint32_t _op2_08012AB0;
    uint32_t _co_08012AB0;
    uint32_t _cnt_08012AB0 = (g_cpu.R[7]) & 0xFFu;
    if (_cnt_08012AB0 == 0)      { _op2_08012AB0 = _rm_08012AB0; _co_08012AB0 = cpsr_c(); }
    else if (_cnt_08012AB0 < 32) { _op2_08012AB0 = _rm_08012AB0 << _cnt_08012AB0; _co_08012AB0 = (_rm_08012AB0 >> (32u - _cnt_08012AB0)) & 1u; }
    else if (_cnt_08012AB0 == 32){ _op2_08012AB0 = 0u; _co_08012AB0 = _rm_08012AB0 & 1u; }
    else                                { _op2_08012AB0 = 0u; _co_08012AB0 = 0u; }
    uint32_t _rn_08012AB0 = g_cpu.R[6];
    uint32_t _r_08012AB0;
    _r_08012AB0 = _op2_08012AB0 - _rn_08012AB0;
    g_cpu.R[6] = _r_08012AB0;
    g_cpu.R[15] = 0x08012AB4u;
    runtime_tick(_cyc_08012AB0);
    /* 08012AB4  08012ab4 A and r6,r2,r6 */
    g_cpu.R[15] = 0x08012AB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AB4 = 1u;
    _cyc_08012AB4 = 1u;
    uint32_t _rm_08012AB4 = g_cpu.R[6];
    uint32_t _op2_08012AB4;
    uint32_t _co_08012AB4;
    _op2_08012AB4 = _rm_08012AB4;
    _co_08012AB4 = cpsr_c();
    uint32_t _rn_08012AB4 = g_cpu.R[2];
    uint32_t _r_08012AB4;
    _r_08012AB4 = _rn_08012AB4 & _op2_08012AB4;
    g_cpu.R[6] = _r_08012AB4;
    g_cpu.R[15] = 0x08012AB8u;
    runtime_tick(_cyc_08012AB4);
    /* 08012AB8  08012ab8 A add r6,r6,#0x20 */
    g_cpu.R[15] = 0x08012AB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AB8 = 1u;
    _cyc_08012AB8 = 1u;
    uint32_t _rn_08012AB8 = g_cpu.R[6];
    uint32_t _r_08012AB8;
    _r_08012AB8 = _rn_08012AB8 + 0x00000020u;
    g_cpu.R[6] = _r_08012AB8;
    g_cpu.R[15] = 0x08012ABCu;
    runtime_tick(_cyc_08012AB8);
    /* 08012ABC  08012abc A mov r2,r2,lsr r7 */
    g_cpu.R[15] = 0x08012ABCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012ABC = 1u;
    _cyc_08012ABC = 2u;
    uint32_t _rm_08012ABC = g_cpu.R[2];
    uint32_t _op2_08012ABC;
    uint32_t _co_08012ABC;
    uint32_t _cnt_08012ABC = (g_cpu.R[7]) & 0xFFu;
    if (_cnt_08012ABC == 0)      { _op2_08012ABC = _rm_08012ABC; _co_08012ABC = cpsr_c(); }
    else if (_cnt_08012ABC < 32) { _op2_08012ABC = _rm_08012ABC >> _cnt_08012ABC; _co_08012ABC = (_rm_08012ABC >> (_cnt_08012ABC - 1u)) & 1u; }
    else if (_cnt_08012ABC == 32){ _op2_08012ABC = 0u; _co_08012ABC = (_rm_08012ABC >> 31) & 1u; }
    else                                { _op2_08012ABC = 0u; _co_08012ABC = 0u; }
    uint32_t _r_08012ABC;
    _r_08012ABC = _op2_08012ABC;
    g_cpu.R[2] = _r_08012ABC;
    g_cpu.R[15] = 0x08012AC0u;
    runtime_tick(_cyc_08012ABC);
    /* 08012AC0  08012ac0 A sub r4,r4,#0x1 */
    g_cpu.R[15] = 0x08012AC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AC0 = 1u;
    _cyc_08012AC0 = 1u;
    uint32_t _rn_08012AC0 = g_cpu.R[4];
    uint32_t _r_08012AC0;
    _r_08012AC0 = _rn_08012AC0 - 0x00000001u;
    g_cpu.R[4] = _r_08012AC0;
    g_cpu.R[15] = 0x08012AC4u;
    runtime_tick(_cyc_08012AC0);
    /* 08012AC4  08012ac4 A subs r4,r4,r7 */
    g_cpu.R[15] = 0x08012AC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AC4 = 1u;
    _cyc_08012AC4 = 1u;
    uint32_t _rm_08012AC4 = g_cpu.R[7];
    uint32_t _op2_08012AC4;
    uint32_t _co_08012AC4;
    _op2_08012AC4 = _rm_08012AC4;
    _co_08012AC4 = cpsr_c();
    uint32_t _rn_08012AC4 = g_cpu.R[4];
    uint32_t _r_08012AC4;
    _r_08012AC4 = _rn_08012AC4 - _op2_08012AC4;
    arm_set_nzcv_sub(_rn_08012AC4, _op2_08012AC4, _r_08012AC4);
    g_cpu.R[4] = _r_08012AC4;
    g_cpu.R[15] = 0x08012AC8u;
    runtime_tick(_cyc_08012AC4);
    /* 08012AC8  08012ac8 A b 0x080129cc */
    g_cpu.R[15] = 0x08012AC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AC8 = 1u;
    _cyc_08012AC8 = 3u;
    g_cpu.R[15] = 0x080129CCu;
    runtime_tick(_cyc_08012AC8);
    gf_memory_transfer_arm_at_080129CC();
    return;
    g_cpu.R[15] = 0x08012ACCu;
    runtime_tick(_cyc_08012AC8);
    /* fall-through to 0x08012ACC */
    g_cpu.R[15] = 0x08012ACCu;
    runtime_dispatch(0x08012ACCu);
    return;
}


/* 0x08012ACC  mode=arm  end=0x08012AD0  branches=0  indirect */
void gf_indirect_control_flow_arm_at_08012ACC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012ACCu);
    /* 08012ACC  08012acc A sub r14,r15,#0x11c */
    g_cpu.R[15] = 0x08012ACCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012ACC = 1u;
    _cyc_08012ACC = 1u;
    uint32_t _rn_08012ACC = 0x08012AD4u;
    uint32_t _r_08012ACC;
    _r_08012ACC = _rn_08012ACC - 0x0000011Cu;
    g_cpu.R[14] = _r_08012ACC;
    g_cpu.R[15] = 0x08012AD0u;
    runtime_tick(_cyc_08012ACC);
    /* fall-through to 0x08012AD0 */
    g_cpu.R[15] = 0x08012AD0u;
    runtime_dispatch(0x08012AD0u);
    return;
}


/* 0x08012AE0  mode=arm  end=0x08012AE4  branches=0  indirect */
void gf_indirect_control_flow_arm_at_08012AE0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012AE0u);
    /* 08012AE0  08012ae0 A sub r9,r9,#0x21 */
    g_cpu.R[15] = 0x08012AE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AE0 = 1u;
    _cyc_08012AE0 = 1u;
    uint32_t _rn_08012AE0 = g_cpu.R[9];
    uint32_t _r_08012AE0;
    _r_08012AE0 = _rn_08012AE0 - 0x00000021u;
    g_cpu.R[9] = _r_08012AE0;
    g_cpu.R[15] = 0x08012AE4u;
    runtime_tick(_cyc_08012AE0);
    /* fall-through to 0x08012AE4 */
    g_cpu.R[15] = 0x08012AE4u;
    runtime_dispatch(0x08012AE4u);
    return;
}


/* 0x08012AF0  mode=arm  end=0x08012B00  branches=2 */
void gf_indirect_control_flow_arm_at_08012AF0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012AF0u);
    /* 08012AF0  08012af0 A cmps r2,#0x1 */
    g_cpu.R[15] = 0x08012AF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AF0 = 1u;
    _cyc_08012AF0 = 1u;
    uint32_t _rn_08012AF0 = g_cpu.R[2];
    uint32_t _r_08012AF0;
    _r_08012AF0 = _rn_08012AF0 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08012AF0, 0x00000001u, _r_08012AF0);
    g_cpu.R[15] = 0x08012AF4u;
    runtime_tick(_cyc_08012AF0);
    /* 08012AF4  08012af4 A beq 0x08012b00 */
    g_cpu.R[15] = 0x08012AF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AF4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08012AF4 = 3u;
        g_cpu.R[15] = 0x08012B00u;
        runtime_tick(_cyc_08012AF4);
        gf_indirect_control_flow_arm_at_08012B00();
        return;
    }
    g_cpu.R[15] = 0x08012AF8u;
    runtime_tick(_cyc_08012AF4);
    /* 08012AF8  08012af8 A sub r9,r1,#0x4 */
    g_cpu.R[15] = 0x08012AF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AF8 = 1u;
    _cyc_08012AF8 = 1u;
    uint32_t _rn_08012AF8 = g_cpu.R[1];
    uint32_t _r_08012AF8;
    _r_08012AF8 = _rn_08012AF8 - 0x00000004u;
    g_cpu.R[9] = _r_08012AF8;
    g_cpu.R[15] = 0x08012AFCu;
    runtime_tick(_cyc_08012AF8);
    /* 08012AFC  08012afc A b 0x08012ae4 */
    g_cpu.R[15] = 0x08012AFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012AFC = 1u;
    _cyc_08012AFC = 3u;
    g_cpu.R[15] = 0x08012AE4u;
    runtime_tick(_cyc_08012AFC);
    gf_memory_reads_arm_at_08012AE4();
    return;
    g_cpu.R[15] = 0x08012B00u;
    runtime_tick(_cyc_08012AFC);
    /* fall-through to 0x08012B00 */
    g_cpu.R[15] = 0x08012B00u;
    runtime_dispatch(0x08012B00u);
    return;
}


/* 0x08012B00  mode=arm  end=0x08012B04  branches=6 */
void gf_indirect_control_flow_arm_at_08012B00(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012B00u);
    /* 08012B00  08012b00 A mov r9,r1 */
    g_cpu.R[15] = 0x08012B00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B00 = 1u;
    _cyc_08012B00 = 1u;
    uint32_t _rm_08012B00 = g_cpu.R[1];
    uint32_t _op2_08012B00;
    uint32_t _co_08012B00;
    _op2_08012B00 = _rm_08012B00;
    _co_08012B00 = cpsr_c();
    uint32_t _r_08012B00;
    _r_08012B00 = _op2_08012B00;
    g_cpu.R[9] = _r_08012B00;
    g_cpu.R[15] = 0x08012B04u;
    runtime_tick(_cyc_08012B00);
    /* fall-through to 0x08012B04 */
    g_cpu.R[15] = 0x08012B04u;
    runtime_dispatch(0x08012B04u);
    return;
}


/* 0x08012B1C  mode=arm  end=0x08012B28  branches=5 */
void gf_indirect_control_flow_arm_at_08012B1C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08012B1Cu);
    /* 08012B1C  08012b1c A movs r14,r14,lsl #1 */
    g_cpu.R[15] = 0x08012B1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B1C = 1u;
    _cyc_08012B1C = 1u;
    uint32_t _rm_08012B1C = g_cpu.R[14];
    uint32_t _op2_08012B1C;
    uint32_t _co_08012B1C;
    _op2_08012B1C = _rm_08012B1C << 1;
    _co_08012B1C = (_rm_08012B1C >> 31) & 1u;
    uint32_t _r_08012B1C;
    _r_08012B1C = _op2_08012B1C;
    arm_set_nzc_logic(_r_08012B1C, _co_08012B1C);
    g_cpu.R[14] = _r_08012B1C;
    g_cpu.R[15] = 0x08012B20u;
    runtime_tick(_cyc_08012B1C);
    /* 08012B20  08012b20 A bcc 0x08012b14 */
    g_cpu.R[15] = 0x08012B20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B20 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_08012B20 = 3u;
        g_cpu.R[15] = 0x08012B14u;
        runtime_tick(_cyc_08012B20);
        gf_memory_transfer_arm_at_08012B14();
        return;
    }
    g_cpu.R[15] = 0x08012B24u;
    runtime_tick(_cyc_08012B20);
    /* 08012B24  08012b24 A beq 0x08012b04 */
    g_cpu.R[15] = 0x08012B24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08012B24 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08012B24 = 3u;
        g_cpu.R[15] = 0x08012B04u;
        runtime_tick(_cyc_08012B24);
        gf_memory_reads_arm_at_08012B04();
        return;
    }
    g_cpu.R[15] = 0x08012B28u;
    runtime_tick(_cyc_08012B24);
    /* fall-through to 0x08012B28 */
    g_cpu.R[15] = 0x08012B28u;
    runtime_dispatch(0x08012B28u);
    return;
}


/* 0x0802151C  mode=arm  end=0x08021528  branches=2 */
void gf_indirect_control_flow_arm_at_0802151C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0802151Cu);
    /* 0802151C  0802151c A mov r5,r0 */
    g_cpu.R[15] = 0x0802151Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802151C = 1u;
    _cyc_0802151C = 1u;
    uint32_t _rm_0802151C = g_cpu.R[0];
    uint32_t _op2_0802151C;
    uint32_t _co_0802151C;
    _op2_0802151C = _rm_0802151C;
    _co_0802151C = cpsr_c();
    uint32_t _r_0802151C;
    _r_0802151C = _op2_0802151C;
    g_cpu.R[5] = _r_0802151C;
    g_cpu.R[15] = 0x08021520u;
    runtime_tick(_cyc_0802151C);
    /* 08021520  08021520 A rsb r9,r10,#0x0 */
    g_cpu.R[15] = 0x08021520u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021520 = 1u;
    _cyc_08021520 = 1u;
    uint32_t _rn_08021520 = g_cpu.R[10];
    uint32_t _r_08021520;
    _r_08021520 = 0x00000000u - _rn_08021520;
    g_cpu.R[9] = _r_08021520;
    g_cpu.R[15] = 0x08021524u;
    runtime_tick(_cyc_08021520);
    /* 08021524  08021524 A mov r8,#0x9f */
    g_cpu.R[15] = 0x08021524u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021524 = 1u;
    _cyc_08021524 = 1u;
    uint32_t _r_08021524;
    _r_08021524 = 0x0000009Fu;
    g_cpu.R[8] = _r_08021524;
    g_cpu.R[15] = 0x08021528u;
    runtime_tick(_cyc_08021524);
    /* fall-through to 0x08021528 */
    g_cpu.R[15] = 0x08021528u;
    runtime_dispatch(0x08021528u);
    return;
}


/* 0x08021864  mode=arm  end=0x08021874  branches=11 */
void gf_indirect_control_flow_arm_at_08021864(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08021864u);
    /* 08021864  08021864 A mov r0,#0x1 */
    g_cpu.R[15] = 0x08021864u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021864 = 1u;
    _cyc_08021864 = 1u;
    uint32_t _r_08021864;
    _r_08021864 = 0x00000001u;
    g_cpu.R[0] = _r_08021864;
    g_cpu.R[15] = 0x08021868u;
    runtime_tick(_cyc_08021864);
    /* 08021868  08021868 A cmps r0,r14 */
    g_cpu.R[15] = 0x08021868u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021868 = 1u;
    _cyc_08021868 = 1u;
    uint32_t _rm_08021868 = g_cpu.R[14];
    uint32_t _op2_08021868;
    uint32_t _co_08021868;
    _op2_08021868 = _rm_08021868;
    _co_08021868 = cpsr_c();
    uint32_t _rn_08021868 = g_cpu.R[0];
    uint32_t _r_08021868;
    _r_08021868 = _rn_08021868 - _op2_08021868;
    arm_set_nzcv_sub(_rn_08021868, _op2_08021868, _r_08021868);
    g_cpu.R[15] = 0x0802186Cu;
    runtime_tick(_cyc_08021868);
    /* 0802186C  0802186c A add r12,r12,r0 */
    g_cpu.R[15] = 0x0802186Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0802186C = 1u;
    _cyc_0802186C = 1u;
    uint32_t _rm_0802186C = g_cpu.R[0];
    uint32_t _op2_0802186C;
    uint32_t _co_0802186C;
    _op2_0802186C = _rm_0802186C;
    _co_0802186C = cpsr_c();
    uint32_t _rn_0802186C = g_cpu.R[12];
    uint32_t _r_0802186C;
    _r_0802186C = _rn_0802186C + _op2_0802186C;
    g_cpu.R[12] = _r_0802186C;
    g_cpu.R[15] = 0x08021870u;
    runtime_tick(_cyc_0802186C);
    /* 08021870  08021870 A bcs 0x080218d4 */
    g_cpu.R[15] = 0x08021870u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08021870 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_08021870 = 3u;
        g_cpu.R[15] = 0x080218D4u;
        runtime_tick(_cyc_08021870);
        gf_indirect_control_flow_arm_at_080218D4();
        return;
    }
    g_cpu.R[15] = 0x08021874u;
    runtime_tick(_cyc_08021870);
    /* fall-through to 0x08021874 */
    g_cpu.R[15] = 0x08021874u;
    runtime_dispatch(0x08021874u);
    return;
}


/* 0x080218C8  mode=arm  end=0x080218D4  branches=6 */
void gf_indirect_control_flow_arm_at_080218C8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080218C8u);
    /* 080218C8  080218c8 A add r0,r0,#0x1 */
    g_cpu.R[15] = 0x080218C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218C8 = 1u;
    _cyc_080218C8 = 1u;
    uint32_t _rn_080218C8 = g_cpu.R[0];
    uint32_t _r_080218C8;
    _r_080218C8 = _rn_080218C8 + 0x00000001u;
    g_cpu.R[0] = _r_080218C8;
    g_cpu.R[15] = 0x080218CCu;
    runtime_tick(_cyc_080218C8);
    /* 080218CC  080218cc A cmps r0,r14 */
    g_cpu.R[15] = 0x080218CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218CC = 1u;
    _cyc_080218CC = 1u;
    uint32_t _rm_080218CC = g_cpu.R[14];
    uint32_t _op2_080218CC;
    uint32_t _co_080218CC;
    _op2_080218CC = _rm_080218CC;
    _co_080218CC = cpsr_c();
    uint32_t _rn_080218CC = g_cpu.R[0];
    uint32_t _r_080218CC;
    _r_080218CC = _rn_080218CC - _op2_080218CC;
    arm_set_nzcv_sub(_rn_080218CC, _op2_080218CC, _r_080218CC);
    g_cpu.R[15] = 0x080218D0u;
    runtime_tick(_cyc_080218CC);
    /* 080218D0  080218d0 A bcc 0x08021874 */
    g_cpu.R[15] = 0x080218D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218D0 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_080218D0 = 3u;
        g_cpu.R[15] = 0x08021874u;
        runtime_tick(_cyc_080218D0);
        gf_memory_transfer_arm_at_08021874();
        return;
    }
    g_cpu.R[15] = 0x080218D4u;
    runtime_tick(_cyc_080218D0);
    /* fall-through to 0x080218D4 */
    g_cpu.R[15] = 0x080218D4u;
    runtime_dispatch(0x080218D4u);
    return;
}


/* 0x080218D4  mode=arm  end=0x080218E0  branches=5 */
void gf_indirect_control_flow_arm_at_080218D4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080218D4u);
    /* 080218D4  080218d4 A add r2,r2,#0x2 */
    g_cpu.R[15] = 0x080218D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218D4 = 1u;
    _cyc_080218D4 = 1u;
    uint32_t _rn_080218D4 = g_cpu.R[2];
    uint32_t _r_080218D4;
    _r_080218D4 = _rn_080218D4 + 0x00000002u;
    g_cpu.R[2] = _r_080218D4;
    g_cpu.R[15] = 0x080218D8u;
    runtime_tick(_cyc_080218D4);
    /* 080218D8  080218d8 A cmps r12,r1 */
    g_cpu.R[15] = 0x080218D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218D8 = 1u;
    _cyc_080218D8 = 1u;
    uint32_t _rm_080218D8 = g_cpu.R[1];
    uint32_t _op2_080218D8;
    uint32_t _co_080218D8;
    _op2_080218D8 = _rm_080218D8;
    _co_080218D8 = cpsr_c();
    uint32_t _rn_080218D8 = g_cpu.R[12];
    uint32_t _r_080218D8;
    _r_080218D8 = _rn_080218D8 - _op2_080218D8;
    arm_set_nzcv_sub(_rn_080218D8, _op2_080218D8, _r_080218D8);
    g_cpu.R[15] = 0x080218DCu;
    runtime_tick(_cyc_080218D8);
    /* 080218DC  080218dc A bcc 0x08021864 */
    g_cpu.R[15] = 0x080218DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218DC = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_080218DC = 3u;
        g_cpu.R[15] = 0x08021864u;
        runtime_tick(_cyc_080218DC);
        gf_indirect_control_flow_arm_at_08021864();
        return;
    }
    g_cpu.R[15] = 0x080218E0u;
    runtime_tick(_cyc_080218DC);
    /* fall-through to 0x080218E0 */
    g_cpu.R[15] = 0x080218E0u;
    runtime_dispatch(0x080218E0u);
    return;
}


/* 0x080218E0  mode=arm  end=0x080218E8  branches=4 */
void gf_indirect_control_flow_arm_at_080218E0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080218E0u);
    /* 080218E0  080218e0 A mov r2,r7 */
    g_cpu.R[15] = 0x080218E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218E0 = 1u;
    _cyc_080218E0 = 1u;
    uint32_t _rm_080218E0 = g_cpu.R[7];
    uint32_t _op2_080218E0;
    uint32_t _co_080218E0;
    _op2_080218E0 = _rm_080218E0;
    _co_080218E0 = cpsr_c();
    uint32_t _r_080218E0;
    _r_080218E0 = _op2_080218E0;
    g_cpu.R[2] = _r_080218E0;
    g_cpu.R[15] = 0x080218E4u;
    runtime_tick(_cyc_080218E0);
    /* 080218E4  080218e4 A add r1,r2,r10 */
    g_cpu.R[15] = 0x080218E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080218E4 = 1u;
    _cyc_080218E4 = 1u;
    uint32_t _rm_080218E4 = g_cpu.R[10];
    uint32_t _op2_080218E4;
    uint32_t _co_080218E4;
    _op2_080218E4 = _rm_080218E4;
    _co_080218E4 = cpsr_c();
    uint32_t _rn_080218E4 = g_cpu.R[2];
    uint32_t _r_080218E4;
    _r_080218E4 = _rn_080218E4 + _op2_080218E4;
    g_cpu.R[1] = _r_080218E4;
    g_cpu.R[15] = 0x080218E8u;
    runtime_tick(_cyc_080218E4);
    /* fall-through to 0x080218E8 */
    g_cpu.R[15] = 0x080218E8u;
    runtime_dispatch(0x080218E8u);
    return;
}


/* 0x08038670  mode=arm  end=0x08038688  branches=6 */
void gf_indirect_control_flow_arm_at_08038670(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038670u);
    /* 08038670  08038670 A mov r14,#0x0 */
    g_cpu.R[15] = 0x08038670u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038670 = 1u;
    _cyc_08038670 = 1u;
    uint32_t _r_08038670;
    _r_08038670 = 0x00000000u;
    g_cpu.R[14] = _r_08038670;
    g_cpu.R[15] = 0x08038674u;
    runtime_tick(_cyc_08038670);
    /* 08038674  08038674 A add r4,r1,#0x1 */
    g_cpu.R[15] = 0x08038674u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038674 = 1u;
    _cyc_08038674 = 1u;
    uint32_t _rn_08038674 = g_cpu.R[1];
    uint32_t _r_08038674;
    _r_08038674 = _rn_08038674 + 0x00000001u;
    g_cpu.R[4] = _r_08038674;
    g_cpu.R[15] = 0x08038678u;
    runtime_tick(_cyc_08038674);
    /* 08038678  08038678 A add r3,r7,r1 */
    g_cpu.R[15] = 0x08038678u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038678 = 1u;
    _cyc_08038678 = 1u;
    uint32_t _rm_08038678 = g_cpu.R[1];
    uint32_t _op2_08038678;
    uint32_t _co_08038678;
    _op2_08038678 = _rm_08038678;
    _co_08038678 = cpsr_c();
    uint32_t _rn_08038678 = g_cpu.R[7];
    uint32_t _r_08038678;
    _r_08038678 = _rn_08038678 + _op2_08038678;
    g_cpu.R[3] = _r_08038678;
    g_cpu.R[15] = 0x0803867Cu;
    runtime_tick(_cyc_08038678);
    /* 0803867C  0803867c A mov r8,r3,lsr #3 */
    g_cpu.R[15] = 0x0803867Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803867C = 1u;
    _cyc_0803867C = 1u;
    uint32_t _rm_0803867C = g_cpu.R[3];
    uint32_t _op2_0803867C;
    uint32_t _co_0803867C;
    _op2_0803867C = _rm_0803867C >> 3;
    _co_0803867C = (_rm_0803867C >> 2) & 1u;
    uint32_t _r_0803867C;
    _r_0803867C = _op2_0803867C;
    g_cpu.R[8] = _r_0803867C;
    g_cpu.R[15] = 0x08038680u;
    runtime_tick(_cyc_0803867C);
    /* 08038680  08038680 A and r3,r3,#0x7 */
    g_cpu.R[15] = 0x08038680u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038680 = 1u;
    _cyc_08038680 = 1u;
    uint32_t _rn_08038680 = g_cpu.R[3];
    uint32_t _r_08038680;
    _r_08038680 = _rn_08038680 & 0x00000007u;
    g_cpu.R[3] = _r_08038680;
    g_cpu.R[15] = 0x08038684u;
    runtime_tick(_cyc_08038680);
    /* 08038684  08038684 A mov r6,r3,lsl #1 */
    g_cpu.R[15] = 0x08038684u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038684 = 1u;
    _cyc_08038684 = 1u;
    uint32_t _rm_08038684 = g_cpu.R[3];
    uint32_t _op2_08038684;
    uint32_t _co_08038684;
    _op2_08038684 = _rm_08038684 << 1;
    _co_08038684 = (_rm_08038684 >> 31) & 1u;
    uint32_t _r_08038684;
    _r_08038684 = _op2_08038684;
    g_cpu.R[6] = _r_08038684;
    g_cpu.R[15] = 0x08038688u;
    runtime_tick(_cyc_08038684);
    /* fall-through to 0x08038688 */
    g_cpu.R[15] = 0x08038688u;
    runtime_dispatch(0x08038688u);
    return;
}


/* 0x0803870C  mode=arm  end=0x08038730  branches=4 */
void gf_indirect_control_flow_arm_at_0803870C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803870Cu);
    /* 0803870C  0803870c A add r14,r14,#0x1 */
    g_cpu.R[15] = 0x0803870Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803870C = 1u;
    _cyc_0803870C = 1u;
    uint32_t _rn_0803870C = g_cpu.R[14];
    uint32_t _r_0803870C;
    _r_0803870C = _rn_0803870C + 0x00000001u;
    g_cpu.R[14] = _r_0803870C;
    g_cpu.R[15] = 0x08038710u;
    runtime_tick(_cyc_0803870C);
    /* 08038710  08038710 A cmps r14,#0x7 */
    g_cpu.R[15] = 0x08038710u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038710 = 1u;
    _cyc_08038710 = 1u;
    uint32_t _rn_08038710 = g_cpu.R[14];
    uint32_t _r_08038710;
    _r_08038710 = _rn_08038710 - 0x00000007u;
    arm_set_nzcv_sub(_rn_08038710, 0x00000007u, _r_08038710);
    g_cpu.R[15] = 0x08038714u;
    runtime_tick(_cyc_08038710);
    /* 08038714  08038714 A bls 0x08038688 */
    g_cpu.R[15] = 0x08038714u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038714 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08038714 = 3u;
        g_cpu.R[15] = 0x08038688u;
        runtime_tick(_cyc_08038714);
        gf_memory_transfer_arm_at_08038688();
        return;
    }
    g_cpu.R[15] = 0x08038718u;
    runtime_tick(_cyc_08038714);
    /* 08038718  08038718 A mov r1,r4 */
    g_cpu.R[15] = 0x08038718u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038718 = 1u;
    _cyc_08038718 = 1u;
    uint32_t _rm_08038718 = g_cpu.R[4];
    uint32_t _op2_08038718;
    uint32_t _co_08038718;
    _op2_08038718 = _rm_08038718;
    _co_08038718 = cpsr_c();
    uint32_t _r_08038718;
    _r_08038718 = _op2_08038718;
    g_cpu.R[1] = _r_08038718;
    g_cpu.R[15] = 0x0803871Cu;
    runtime_tick(_cyc_08038718);
    /* 0803871C  0803871c A cmps r4,#0x7 */
    g_cpu.R[15] = 0x0803871Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803871C = 1u;
    _cyc_0803871C = 1u;
    uint32_t _rn_0803871C = g_cpu.R[4];
    uint32_t _r_0803871C;
    _r_0803871C = _rn_0803871C - 0x00000007u;
    arm_set_nzcv_sub(_rn_0803871C, 0x00000007u, _r_0803871C);
    g_cpu.R[15] = 0x08038720u;
    runtime_tick(_cyc_0803871C);
    /* 08038720  08038720 A bhi 0x08038730 */
    g_cpu.R[15] = 0x08038720u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038720 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_08038720 = 3u;
        g_cpu.R[15] = 0x08038730u;
        runtime_tick(_cyc_08038720);
        gf_memory_reads_arm_at_08038730();
        return;
    }
    g_cpu.R[15] = 0x08038724u;
    runtime_tick(_cyc_08038720);
    /* 08038724  08038724 A add r3,r7,r4 */
    g_cpu.R[15] = 0x08038724u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038724 = 1u;
    _cyc_08038724 = 1u;
    uint32_t _rm_08038724 = g_cpu.R[4];
    uint32_t _op2_08038724;
    uint32_t _co_08038724;
    _op2_08038724 = _rm_08038724;
    _co_08038724 = cpsr_c();
    uint32_t _rn_08038724 = g_cpu.R[7];
    uint32_t _r_08038724;
    _r_08038724 = _rn_08038724 + _op2_08038724;
    g_cpu.R[3] = _r_08038724;
    g_cpu.R[15] = 0x08038728u;
    runtime_tick(_cyc_08038724);
    /* 08038728  08038728 A cmps r3,#0x1f */
    g_cpu.R[15] = 0x08038728u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038728 = 1u;
    _cyc_08038728 = 1u;
    uint32_t _rn_08038728 = g_cpu.R[3];
    uint32_t _r_08038728;
    _r_08038728 = _rn_08038728 - 0x0000001Fu;
    arm_set_nzcv_sub(_rn_08038728, 0x0000001Fu, _r_08038728);
    g_cpu.R[15] = 0x0803872Cu;
    runtime_tick(_cyc_08038728);
    /* 0803872C  0803872c A bls 0x08038670 */
    g_cpu.R[15] = 0x0803872Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803872C = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_0803872C = 3u;
        g_cpu.R[15] = 0x08038670u;
        runtime_tick(_cyc_0803872C);
        gf_indirect_control_flow_arm_at_08038670();
        return;
    }
    g_cpu.R[15] = 0x08038730u;
    runtime_tick(_cyc_0803872C);
    /* fall-through to 0x08038730 */
    g_cpu.R[15] = 0x08038730u;
    runtime_dispatch(0x08038730u);
    return;
}


/* 0x080387EC  mode=arm  end=0x08038800  branches=2 */
void gf_indirect_control_flow_arm_at_080387EC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080387ECu);
    /* 080387EC  080387ec A cmps r2,#0x2 */
    g_cpu.R[15] = 0x080387ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387EC = 1u;
    _cyc_080387EC = 1u;
    uint32_t _rn_080387EC = g_cpu.R[2];
    uint32_t _r_080387EC;
    _r_080387EC = _rn_080387EC - 0x00000002u;
    arm_set_nzcv_sub(_rn_080387EC, 0x00000002u, _r_080387EC);
    g_cpu.R[15] = 0x080387F0u;
    runtime_tick(_cyc_080387EC);
    /* 080387F0  080387f0 A bne 0x08038808 */
    g_cpu.R[15] = 0x080387F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387F0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080387F0 = 3u;
        g_cpu.R[15] = 0x08038808u;
        runtime_tick(_cyc_080387F0);
        gf_indirect_control_flow_arm_at_08038808();
        return;
    }
    g_cpu.R[15] = 0x080387F4u;
    runtime_tick(_cyc_080387F0);
    /* 080387F4  080387f4 A sub r9,r9,#0x1 */
    g_cpu.R[15] = 0x080387F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387F4 = 1u;
    _cyc_080387F4 = 1u;
    uint32_t _rn_080387F4 = g_cpu.R[9];
    uint32_t _r_080387F4;
    _r_080387F4 = _rn_080387F4 - 0x00000001u;
    g_cpu.R[9] = _r_080387F4;
    g_cpu.R[15] = 0x080387F8u;
    runtime_tick(_cyc_080387F4);
    /* 080387F8  080387f8 A add r7,r7,#0x1 */
    g_cpu.R[15] = 0x080387F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387F8 = 1u;
    _cyc_080387F8 = 1u;
    uint32_t _rn_080387F8 = g_cpu.R[7];
    uint32_t _r_080387F8;
    _r_080387F8 = _rn_080387F8 + 0x00000001u;
    g_cpu.R[7] = _r_080387F8;
    g_cpu.R[15] = 0x080387FCu;
    runtime_tick(_cyc_080387F8);
    /* 080387FC  080387fc A b 0x0803880c */
    g_cpu.R[15] = 0x080387FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080387FC = 1u;
    _cyc_080387FC = 3u;
    g_cpu.R[15] = 0x0803880Cu;
    runtime_tick(_cyc_080387FC);
    gf_hardware_and_video_access_at_0803880C();
    return;
    g_cpu.R[15] = 0x08038800u;
    runtime_tick(_cyc_080387FC);
    /* fall-through to 0x08038800 */
    g_cpu.R[15] = 0x08038800u;
    runtime_dispatch(0x08038800u);
    return;
}


/* 0x08038808  mode=arm  end=0x0803880C  branches=7  indirect */
void gf_indirect_control_flow_arm_at_08038808(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038808u);
    /* 08038808  08038808 A sub r7,r7,#0x1 */
    g_cpu.R[15] = 0x08038808u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038808 = 1u;
    _cyc_08038808 = 1u;
    uint32_t _rn_08038808 = g_cpu.R[7];
    uint32_t _r_08038808;
    _r_08038808 = _rn_08038808 - 0x00000001u;
    g_cpu.R[7] = _r_08038808;
    g_cpu.R[15] = 0x0803880Cu;
    runtime_tick(_cyc_08038808);
    /* fall-through to 0x0803880C */
    g_cpu.R[15] = 0x0803880Cu;
    runtime_dispatch(0x0803880Cu);
    return;
}


/* 0x0803883C  mode=arm  end=0x08038854  branches=6  indirect */
void gf_indirect_control_flow_arm_at_0803883C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803883Cu);
    /* 0803883C  0803883c A mov r14,#0x0 */
    g_cpu.R[15] = 0x0803883Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803883C = 1u;
    _cyc_0803883C = 1u;
    uint32_t _r_0803883C;
    _r_0803883C = 0x00000000u;
    g_cpu.R[14] = _r_0803883C;
    g_cpu.R[15] = 0x08038840u;
    runtime_tick(_cyc_0803883C);
    /* 08038840  08038840 A add r4,r1,#0x1 */
    g_cpu.R[15] = 0x08038840u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038840 = 1u;
    _cyc_08038840 = 1u;
    uint32_t _rn_08038840 = g_cpu.R[1];
    uint32_t _r_08038840;
    _r_08038840 = _rn_08038840 + 0x00000001u;
    g_cpu.R[4] = _r_08038840;
    g_cpu.R[15] = 0x08038844u;
    runtime_tick(_cyc_08038840);
    /* 08038844  08038844 A add r3,r7,r1 */
    g_cpu.R[15] = 0x08038844u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038844 = 1u;
    _cyc_08038844 = 1u;
    uint32_t _rm_08038844 = g_cpu.R[1];
    uint32_t _op2_08038844;
    uint32_t _co_08038844;
    _op2_08038844 = _rm_08038844;
    _co_08038844 = cpsr_c();
    uint32_t _rn_08038844 = g_cpu.R[7];
    uint32_t _r_08038844;
    _r_08038844 = _rn_08038844 + _op2_08038844;
    g_cpu.R[3] = _r_08038844;
    g_cpu.R[15] = 0x08038848u;
    runtime_tick(_cyc_08038844);
    /* 08038848  08038848 A mov r10,r3,lsr #3 */
    g_cpu.R[15] = 0x08038848u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038848 = 1u;
    _cyc_08038848 = 1u;
    uint32_t _rm_08038848 = g_cpu.R[3];
    uint32_t _op2_08038848;
    uint32_t _co_08038848;
    _op2_08038848 = _rm_08038848 >> 3;
    _co_08038848 = (_rm_08038848 >> 2) & 1u;
    uint32_t _r_08038848;
    _r_08038848 = _op2_08038848;
    g_cpu.R[10] = _r_08038848;
    g_cpu.R[15] = 0x0803884Cu;
    runtime_tick(_cyc_08038848);
    /* 0803884C  0803884c A and r3,r3,#0x7 */
    g_cpu.R[15] = 0x0803884Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803884C = 1u;
    _cyc_0803884C = 1u;
    uint32_t _rn_0803884C = g_cpu.R[3];
    uint32_t _r_0803884C;
    _r_0803884C = _rn_0803884C & 0x00000007u;
    g_cpu.R[3] = _r_0803884C;
    g_cpu.R[15] = 0x08038850u;
    runtime_tick(_cyc_0803884C);
    /* 08038850  08038850 A mov r8,r3,lsl #1 */
    g_cpu.R[15] = 0x08038850u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038850 = 1u;
    _cyc_08038850 = 1u;
    uint32_t _rm_08038850 = g_cpu.R[3];
    uint32_t _op2_08038850;
    uint32_t _co_08038850;
    _op2_08038850 = _rm_08038850 << 1;
    _co_08038850 = (_rm_08038850 >> 31) & 1u;
    uint32_t _r_08038850;
    _r_08038850 = _op2_08038850;
    g_cpu.R[8] = _r_08038850;
    g_cpu.R[15] = 0x08038854u;
    runtime_tick(_cyc_08038850);
    /* fall-through to 0x08038854 */
    g_cpu.R[15] = 0x08038854u;
    runtime_dispatch(0x08038854u);
    return;
}


/* 0x080388A4  mode=arm  end=0x080388B8  branches=5  indirect */
void gf_indirect_control_flow_arm_at_080388A4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080388A4u);
    /* 080388A4  080388a4 A movs r12,r12,lsl #1 */
    g_cpu.R[15] = 0x080388A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388A4 = 1u;
    _cyc_080388A4 = 1u;
    uint32_t _rm_080388A4 = g_cpu.R[12];
    uint32_t _op2_080388A4;
    uint32_t _co_080388A4;
    _op2_080388A4 = _rm_080388A4 << 1;
    _co_080388A4 = (_rm_080388A4 >> 31) & 1u;
    uint32_t _r_080388A4;
    _r_080388A4 = _op2_080388A4;
    arm_set_nzc_logic(_r_080388A4, _co_080388A4);
    g_cpu.R[12] = _r_080388A4;
    g_cpu.R[15] = 0x080388A8u;
    runtime_tick(_cyc_080388A4);
    /* 080388A8  080388a8 A beq 0x080388b8 */
    g_cpu.R[15] = 0x080388A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388A8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080388A8 = 3u;
        g_cpu.R[15] = 0x080388B8u;
        runtime_tick(_cyc_080388A8);
        gf_memory_transfer_arm_at_080388B8();
        return;
    }
    g_cpu.R[15] = 0x080388ACu;
    runtime_tick(_cyc_080388A8);
    /* 080388AC  080388ac A add r14,r14,#0x1 */
    g_cpu.R[15] = 0x080388ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388AC = 1u;
    _cyc_080388AC = 1u;
    uint32_t _rn_080388AC = g_cpu.R[14];
    uint32_t _r_080388AC;
    _r_080388AC = _rn_080388AC + 0x00000001u;
    g_cpu.R[14] = _r_080388AC;
    g_cpu.R[15] = 0x080388B0u;
    runtime_tick(_cyc_080388AC);
    /* 080388B0  080388b0 A cmps r14,#0xd */
    g_cpu.R[15] = 0x080388B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388B0 = 1u;
    _cyc_080388B0 = 1u;
    uint32_t _rn_080388B0 = g_cpu.R[14];
    uint32_t _r_080388B0;
    _r_080388B0 = _rn_080388B0 - 0x0000000Du;
    arm_set_nzcv_sub(_rn_080388B0, 0x0000000Du, _r_080388B0);
    g_cpu.R[15] = 0x080388B4u;
    runtime_tick(_cyc_080388B0);
    /* 080388B4  080388b4 A bls 0x08038854 */
    g_cpu.R[15] = 0x080388B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080388B4 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_080388B4 = 3u;
        g_cpu.R[15] = 0x08038854u;
        runtime_tick(_cyc_080388B4);
        gf_memory_transfer_arm_at_08038854();
        return;
    }
    g_cpu.R[15] = 0x080388B8u;
    runtime_tick(_cyc_080388B4);
    /* fall-through to 0x080388B8 */
    g_cpu.R[15] = 0x080388B8u;
    runtime_dispatch(0x080388B8u);
    return;
}


/* 0x0803890C  mode=arm  end=0x08038938  branches=3  indirect */
void gf_indirect_control_flow_arm_at_0803890C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803890Cu);
    /* 0803890C  0803890c A mov r7,#0x0 */
    g_cpu.R[15] = 0x0803890Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803890C = 1u;
    _cyc_0803890C = 1u;
    uint32_t _r_0803890C;
    _r_0803890C = 0x00000000u;
    g_cpu.R[7] = _r_0803890C;
    g_cpu.R[15] = 0x08038910u;
    runtime_tick(_cyc_0803890C);
    /* 08038910  08038910 A mov r14,r7 */
    g_cpu.R[15] = 0x08038910u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038910 = 1u;
    _cyc_08038910 = 1u;
    uint32_t _rm_08038910 = g_cpu.R[7];
    uint32_t _op2_08038910;
    uint32_t _co_08038910;
    _op2_08038910 = _rm_08038910;
    _co_08038910 = cpsr_c();
    uint32_t _r_08038910;
    _r_08038910 = _op2_08038910;
    g_cpu.R[14] = _r_08038910;
    g_cpu.R[15] = 0x08038914u;
    runtime_tick(_cyc_08038910);
    /* 08038914  08038914 A mov r8,r7 */
    g_cpu.R[15] = 0x08038914u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038914 = 1u;
    _cyc_08038914 = 1u;
    uint32_t _rm_08038914 = g_cpu.R[7];
    uint32_t _op2_08038914;
    uint32_t _co_08038914;
    _op2_08038914 = _rm_08038914;
    _co_08038914 = cpsr_c();
    uint32_t _r_08038914;
    _r_08038914 = _op2_08038914;
    g_cpu.R[8] = _r_08038914;
    g_cpu.R[15] = 0x08038918u;
    runtime_tick(_cyc_08038914);
    /* 08038918  08038918 A mov r2,r7 */
    g_cpu.R[15] = 0x08038918u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038918 = 1u;
    _cyc_08038918 = 1u;
    uint32_t _rm_08038918 = g_cpu.R[7];
    uint32_t _op2_08038918;
    uint32_t _co_08038918;
    _op2_08038918 = _rm_08038918;
    _co_08038918 = cpsr_c();
    uint32_t _r_08038918;
    _r_08038918 = _op2_08038918;
    g_cpu.R[2] = _r_08038918;
    g_cpu.R[15] = 0x0803891Cu;
    runtime_tick(_cyc_08038918);
    /* 0803891C  0803891c A mov r12,r2 */
    g_cpu.R[15] = 0x0803891Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803891C = 1u;
    _cyc_0803891C = 1u;
    uint32_t _rm_0803891C = g_cpu.R[2];
    uint32_t _op2_0803891C;
    uint32_t _co_0803891C;
    _op2_0803891C = _rm_0803891C;
    _co_0803891C = cpsr_c();
    uint32_t _r_0803891C;
    _r_0803891C = _op2_0803891C;
    g_cpu.R[12] = _r_0803891C;
    g_cpu.R[15] = 0x08038920u;
    runtime_tick(_cyc_0803891C);
    /* 08038920  08038920 A mov r4,r2 */
    g_cpu.R[15] = 0x08038920u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038920 = 1u;
    _cyc_08038920 = 1u;
    uint32_t _rm_08038920 = g_cpu.R[2];
    uint32_t _op2_08038920;
    uint32_t _co_08038920;
    _op2_08038920 = _rm_08038920;
    _co_08038920 = cpsr_c();
    uint32_t _r_08038920;
    _r_08038920 = _op2_08038920;
    g_cpu.R[4] = _r_08038920;
    g_cpu.R[15] = 0x08038924u;
    runtime_tick(_cyc_08038920);
    /* 08038924  08038924 A mov r5,r2 */
    g_cpu.R[15] = 0x08038924u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038924 = 1u;
    _cyc_08038924 = 1u;
    uint32_t _rm_08038924 = g_cpu.R[2];
    uint32_t _op2_08038924;
    uint32_t _co_08038924;
    _op2_08038924 = _rm_08038924;
    _co_08038924 = cpsr_c();
    uint32_t _r_08038924;
    _r_08038924 = _op2_08038924;
    g_cpu.R[5] = _r_08038924;
    g_cpu.R[15] = 0x08038928u;
    runtime_tick(_cyc_08038924);
    /* 08038928  08038928 A mov r6,r2 */
    g_cpu.R[15] = 0x08038928u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038928 = 1u;
    _cyc_08038928 = 1u;
    uint32_t _rm_08038928 = g_cpu.R[2];
    uint32_t _op2_08038928;
    uint32_t _co_08038928;
    _op2_08038928 = _rm_08038928;
    _co_08038928 = cpsr_c();
    uint32_t _r_08038928;
    _r_08038928 = _op2_08038928;
    g_cpu.R[6] = _r_08038928;
    g_cpu.R[15] = 0x0803892Cu;
    runtime_tick(_cyc_08038928);
    /* 0803892C  0803892c A add r0,r0,#0x2 */
    g_cpu.R[15] = 0x0803892Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803892C = 1u;
    _cyc_0803892C = 1u;
    uint32_t _rn_0803892C = g_cpu.R[0];
    uint32_t _r_0803892C;
    _r_0803892C = _rn_0803892C + 0x00000002u;
    g_cpu.R[0] = _r_0803892C;
    g_cpu.R[15] = 0x08038930u;
    runtime_tick(_cyc_0803892C);
    /* 08038930  08038930 A add r9,r1,#0x1 */
    g_cpu.R[15] = 0x08038930u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038930 = 1u;
    _cyc_08038930 = 1u;
    uint32_t _rn_08038930 = g_cpu.R[1];
    uint32_t _r_08038930;
    _r_08038930 = _rn_08038930 + 0x00000001u;
    g_cpu.R[9] = _r_08038930;
    g_cpu.R[15] = 0x08038934u;
    runtime_tick(_cyc_08038930);
    /* 08038934  08038934 A mov r1,r2 */
    g_cpu.R[15] = 0x08038934u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038934 = 1u;
    _cyc_08038934 = 1u;
    uint32_t _rm_08038934 = g_cpu.R[2];
    uint32_t _op2_08038934;
    uint32_t _co_08038934;
    _op2_08038934 = _rm_08038934;
    _co_08038934 = cpsr_c();
    uint32_t _r_08038934;
    _r_08038934 = _op2_08038934;
    g_cpu.R[1] = _r_08038934;
    g_cpu.R[15] = 0x08038938u;
    runtime_tick(_cyc_08038934);
    /* fall-through to 0x08038938 */
    g_cpu.R[15] = 0x08038938u;
    runtime_dispatch(0x08038938u);
    return;
}


/* 0x0803895C  mode=arm  end=0x08038960  branches=1 */
void gf_indirect_control_flow_arm_at_0803895C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803895Cu);
    /* 0803895C  0803895c A b 0x08038a0c */
    g_cpu.R[15] = 0x0803895Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803895C = 1u;
    _cyc_0803895C = 3u;
    g_cpu.R[15] = 0x08038A0Cu;
    runtime_tick(_cyc_0803895C);
    gf_indirect_control_flow_arm_at_08038A0C();
    return;
    g_cpu.R[15] = 0x08038960u;
    runtime_tick(_cyc_0803895C);
    /* fall-through to 0x08038960 */
    g_cpu.R[15] = 0x08038960u;
    runtime_dispatch(0x08038960u);
    return;
}


/* 0x08038A0C  mode=arm  end=0x08038A10  branches=1 */
void gf_indirect_control_flow_arm_at_08038A0C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038A0Cu);
    /* 08038A0C  08038a0c A b 0x08038aa4 */
    g_cpu.R[15] = 0x08038A0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038A0C = 1u;
    _cyc_08038A0C = 3u;
    g_cpu.R[15] = 0x08038AA4u;
    runtime_tick(_cyc_08038A0C);
    gf_memory_transfer_arm_at_08038AA4();
    return;
    g_cpu.R[15] = 0x08038A10u;
    runtime_tick(_cyc_08038A0C);
    /* fall-through to 0x08038A10 */
    g_cpu.R[15] = 0x08038A10u;
    runtime_dispatch(0x08038A10u);
    return;
}


/* 0x08038A20  mode=arm  end=0x08038A24  branches=1 */
void gf_indirect_control_flow_arm_at_08038A20(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038A20u);
    /* 08038A20  08038a20 A b 0x08038aa4 */
    g_cpu.R[15] = 0x08038A20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038A20 = 1u;
    _cyc_08038A20 = 3u;
    g_cpu.R[15] = 0x08038AA4u;
    runtime_tick(_cyc_08038A20);
    gf_memory_transfer_arm_at_08038AA4();
    return;
    g_cpu.R[15] = 0x08038A24u;
    runtime_tick(_cyc_08038A20);
    /* fall-through to 0x08038A24 */
    g_cpu.R[15] = 0x08038A24u;
    runtime_dispatch(0x08038A24u);
    return;
}


/* 0x081181A8  mode=arm  end=0x081181AC  branches=11  indirect */
void gf_indirect_control_flow_arm_at_081181A8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081181A8u);
    /* 081181A8  081181a8 A mov r8,#0x8 */
    g_cpu.R[15] = 0x081181A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181A8 = 1u;
    _cyc_081181A8 = 1u;
    uint32_t _r_081181A8;
    _r_081181A8 = 0x00000008u;
    g_cpu.R[8] = _r_081181A8;
    g_cpu.R[15] = 0x081181ACu;
    runtime_tick(_cyc_081181A8);
    /* fall-through to 0x081181AC */
    g_cpu.R[15] = 0x081181ACu;
    runtime_dispatch(0x081181ACu);
    return;
}


/* 0x081181AC  mode=arm  end=0x081181B0  branches=11  indirect */
void gf_indirect_control_flow_arm_at_081181AC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081181ACu);
    /* 081181AC  081181ac A mov r7,#0x20 */
    g_cpu.R[15] = 0x081181ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081181AC = 1u;
    _cyc_081181AC = 1u;
    uint32_t _r_081181AC;
    _r_081181AC = 0x00000020u;
    g_cpu.R[7] = _r_081181AC;
    g_cpu.R[15] = 0x081181B0u;
    runtime_tick(_cyc_081181AC);
    /* fall-through to 0x081181B0 */
    g_cpu.R[15] = 0x081181B0u;
    runtime_dispatch(0x081181B0u);
    return;
}


/* 0x08197308  mode=arm  end=0x08197344  branches=8  indirect */
void gf_indirect_control_flow_arm_at_08197308(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08197308u);
    /* 08197308  08197308 A rsbs r12,r2,#0x0 */
    g_cpu.R[15] = 0x08197308u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197308 = 1u;
    _cyc_08197308 = 1u;
    uint32_t _rn_08197308 = g_cpu.R[2];
    uint32_t _r_08197308;
    _r_08197308 = 0x00000000u - _rn_08197308;
    arm_set_nzcv_sub(0x00000000u, _rn_08197308, _r_08197308);
    g_cpu.R[12] = _r_08197308;
    g_cpu.R[15] = 0x0819730Cu;
    runtime_tick(_cyc_08197308);
    /* 0819730C  0819730c A addpl r4,r4,r2 */
    g_cpu.R[15] = 0x0819730Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819730C = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_0819730C = 1u;
        uint32_t _rm_0819730C = g_cpu.R[2];
        uint32_t _op2_0819730C;
        uint32_t _co_0819730C;
        _op2_0819730C = _rm_0819730C;
        _co_0819730C = cpsr_c();
        uint32_t _rn_0819730C = g_cpu.R[4];
        uint32_t _r_0819730C;
        _r_0819730C = _rn_0819730C + _op2_0819730C;
        g_cpu.R[4] = _r_0819730C;
    }
    g_cpu.R[15] = 0x08197310u;
    runtime_tick(_cyc_0819730C);
    /* 08197310  08197310 A addpl r6,r6,r2 */
    g_cpu.R[15] = 0x08197310u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197310 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08197310 = 1u;
        uint32_t _rm_08197310 = g_cpu.R[2];
        uint32_t _op2_08197310;
        uint32_t _co_08197310;
        _op2_08197310 = _rm_08197310;
        _co_08197310 = cpsr_c();
        uint32_t _rn_08197310 = g_cpu.R[6];
        uint32_t _r_08197310;
        _r_08197310 = _rn_08197310 + _op2_08197310;
        g_cpu.R[6] = _r_08197310;
    }
    g_cpu.R[15] = 0x08197314u;
    runtime_tick(_cyc_08197310);
    /* 08197314  08197314 A addpl r1,r1,r2 */
    g_cpu.R[15] = 0x08197314u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197314 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08197314 = 1u;
        uint32_t _rm_08197314 = g_cpu.R[2];
        uint32_t _op2_08197314;
        uint32_t _co_08197314;
        _op2_08197314 = _rm_08197314;
        _co_08197314 = cpsr_c();
        uint32_t _rn_08197314 = g_cpu.R[1];
        uint32_t _r_08197314;
        _r_08197314 = _rn_08197314 + _op2_08197314;
        g_cpu.R[1] = _r_08197314;
    }
    g_cpu.R[15] = 0x08197318u;
    runtime_tick(_cyc_08197314);
    /* 08197318  08197318 A subpl r6,r6,r2 */
    g_cpu.R[15] = 0x08197318u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197318 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08197318 = 1u;
        uint32_t _rm_08197318 = g_cpu.R[2];
        uint32_t _op2_08197318;
        uint32_t _co_08197318;
        _op2_08197318 = _rm_08197318;
        _co_08197318 = cpsr_c();
        uint32_t _rn_08197318 = g_cpu.R[6];
        uint32_t _r_08197318;
        _r_08197318 = _rn_08197318 - _op2_08197318;
        g_cpu.R[6] = _r_08197318;
    }
    g_cpu.R[15] = 0x0819731Cu;
    runtime_tick(_cyc_08197318);
    /* 0819731C  0819731c A subpl r1,r1,r2 */
    g_cpu.R[15] = 0x0819731Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819731C = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_0819731C = 1u;
        uint32_t _rm_0819731C = g_cpu.R[2];
        uint32_t _op2_0819731C;
        uint32_t _co_0819731C;
        _op2_0819731C = _rm_0819731C;
        _co_0819731C = cpsr_c();
        uint32_t _rn_0819731C = g_cpu.R[1];
        uint32_t _r_0819731C;
        _r_0819731C = _rn_0819731C - _op2_0819731C;
        g_cpu.R[1] = _r_0819731C;
    }
    g_cpu.R[15] = 0x08197320u;
    runtime_tick(_cyc_0819731C);
    /* 08197320  08197320 A movpl r2,#0x0 */
    g_cpu.R[15] = 0x08197320u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197320 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08197320 = 1u;
        uint32_t _r_08197320;
        _r_08197320 = 0x00000000u;
        g_cpu.R[2] = _r_08197320;
    }
    g_cpu.R[15] = 0x08197324u;
    runtime_tick(_cyc_08197320);
    /* 08197324  08197324 A add r12,r2,r4 */
    g_cpu.R[15] = 0x08197324u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197324 = 1u;
    _cyc_08197324 = 1u;
    uint32_t _rm_08197324 = g_cpu.R[4];
    uint32_t _op2_08197324;
    uint32_t _co_08197324;
    _op2_08197324 = _rm_08197324;
    _co_08197324 = cpsr_c();
    uint32_t _rn_08197324 = g_cpu.R[2];
    uint32_t _r_08197324;
    _r_08197324 = _rn_08197324 + _op2_08197324;
    g_cpu.R[12] = _r_08197324;
    g_cpu.R[15] = 0x08197328u;
    runtime_tick(_cyc_08197324);
    /* 08197328  08197328 A subs r12,r12,#0x0 */
    g_cpu.R[15] = 0x08197328u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197328 = 1u;
    _cyc_08197328 = 1u;
    uint32_t _rn_08197328 = g_cpu.R[12];
    uint32_t _r_08197328;
    _r_08197328 = _rn_08197328 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08197328, 0x00000000u, _r_08197328);
    g_cpu.R[12] = _r_08197328;
    g_cpu.R[15] = 0x0819732Cu;
    runtime_tick(_cyc_08197328);
    /* 0819732C  0819732c A subgt r6,r6,r12 */
    g_cpu.R[15] = 0x0819732Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819732C = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_0819732C = 1u;
        uint32_t _rm_0819732C = g_cpu.R[12];
        uint32_t _op2_0819732C;
        uint32_t _co_0819732C;
        _op2_0819732C = _rm_0819732C;
        _co_0819732C = cpsr_c();
        uint32_t _rn_0819732C = g_cpu.R[6];
        uint32_t _r_0819732C;
        _r_0819732C = _rn_0819732C - _op2_0819732C;
        g_cpu.R[6] = _r_0819732C;
    }
    g_cpu.R[15] = 0x08197330u;
    runtime_tick(_cyc_0819732C);
    /* 08197330  08197330 A addgt r6,r6,r12 */
    g_cpu.R[15] = 0x08197330u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197330 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_08197330 = 1u;
        uint32_t _rm_08197330 = g_cpu.R[12];
        uint32_t _op2_08197330;
        uint32_t _co_08197330;
        _op2_08197330 = _rm_08197330;
        _co_08197330 = cpsr_c();
        uint32_t _rn_08197330 = g_cpu.R[6];
        uint32_t _r_08197330;
        _r_08197330 = _rn_08197330 + _op2_08197330;
        g_cpu.R[6] = _r_08197330;
    }
    g_cpu.R[15] = 0x08197334u;
    runtime_tick(_cyc_08197330);
    /* 08197334  08197334 A rsbgt r4,r2,#0x0 */
    g_cpu.R[15] = 0x08197334u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197334 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_08197334 = 1u;
        uint32_t _rn_08197334 = g_cpu.R[2];
        uint32_t _r_08197334;
        _r_08197334 = 0x00000000u - _rn_08197334;
        g_cpu.R[4] = _r_08197334;
    }
    g_cpu.R[15] = 0x08197338u;
    runtime_tick(_cyc_08197334);
    /* 08197338  08197338 A cmps r4,#0x0 */
    g_cpu.R[15] = 0x08197338u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197338 = 1u;
    _cyc_08197338 = 1u;
    uint32_t _rn_08197338 = g_cpu.R[4];
    uint32_t _r_08197338;
    _r_08197338 = _rn_08197338 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08197338, 0x00000000u, _r_08197338);
    g_cpu.R[15] = 0x0819733Cu;
    runtime_tick(_cyc_08197338);
    /* 0819733C  0819733c A ble 0x08197344 */
    g_cpu.R[15] = 0x0819733Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819733C = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_0819733C = 3u;
        g_cpu.R[15] = 0x08197344u;
        runtime_tick(_cyc_0819733C);
        gf_indirect_control_flow_arm_at_08197344();
        return;
    }
    g_cpu.R[15] = 0x08197340u;
    runtime_tick(_cyc_0819733C);
    /* 08197340  08197340 A ands r7,r2,#0x7 */
    g_cpu.R[15] = 0x08197340u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197340 = 1u;
    _cyc_08197340 = 1u;
    uint32_t _rn_08197340 = g_cpu.R[2];
    uint32_t _r_08197340;
    _r_08197340 = _rn_08197340 & 0x00000007u;
    arm_set_nzc_logic(_r_08197340, cpsr_c());
    g_cpu.R[7] = _r_08197340;
    g_cpu.R[15] = 0x08197344u;
    runtime_tick(_cyc_08197340);
    /* fall-through to 0x08197344 */
    g_cpu.R[15] = 0x08197344u;
    runtime_dispatch(0x08197344u);
    return;
}


/* 0x08197344  mode=arm  end=0x08197358  branches=7  indirect */
void gf_indirect_control_flow_arm_at_08197344(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08197344u);
    /* 08197344  08197344 A beq 0x08197358 */
    g_cpu.R[15] = 0x08197344u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197344 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08197344 = 3u;
        g_cpu.R[15] = 0x08197358u;
        runtime_tick(_cyc_08197344);
        gf_indirect_control_flow_arm_at_08197358();
        return;
    }
    g_cpu.R[15] = 0x08197348u;
    runtime_tick(_cyc_08197344);
    /* 08197348  08197348 A rsb r7,r7,#0x8 */
    g_cpu.R[15] = 0x08197348u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197348 = 1u;
    _cyc_08197348 = 1u;
    uint32_t _rn_08197348 = g_cpu.R[7];
    uint32_t _r_08197348;
    _r_08197348 = 0x00000008u - _rn_08197348;
    g_cpu.R[7] = _r_08197348;
    g_cpu.R[15] = 0x0819734Cu;
    runtime_tick(_cyc_08197348);
    /* 0819734C  0819734c A subs r4,r4,r7 */
    g_cpu.R[15] = 0x0819734Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819734C = 1u;
    _cyc_0819734C = 1u;
    uint32_t _rm_0819734C = g_cpu.R[7];
    uint32_t _op2_0819734C;
    uint32_t _co_0819734C;
    _op2_0819734C = _rm_0819734C;
    _co_0819734C = cpsr_c();
    uint32_t _rn_0819734C = g_cpu.R[4];
    uint32_t _r_0819734C;
    _r_0819734C = _rn_0819734C - _op2_0819734C;
    arm_set_nzcv_sub(_rn_0819734C, _op2_0819734C, _r_0819734C);
    g_cpu.R[4] = _r_0819734C;
    g_cpu.R[15] = 0x08197350u;
    runtime_tick(_cyc_0819734C);
    /* 08197350  08197350 A addlt r7,r4,r7 */
    g_cpu.R[15] = 0x08197350u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197350 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08197350 = 1u;
        uint32_t _rm_08197350 = g_cpu.R[7];
        uint32_t _op2_08197350;
        uint32_t _co_08197350;
        _op2_08197350 = _rm_08197350;
        _co_08197350 = cpsr_c();
        uint32_t _rn_08197350 = g_cpu.R[4];
        uint32_t _r_08197350;
        _r_08197350 = _rn_08197350 + _op2_08197350;
        g_cpu.R[7] = _r_08197350;
    }
    g_cpu.R[15] = 0x08197354u;
    runtime_tick(_cyc_08197350);
    /* 08197354  08197354 A movlt r4,#0x0 */
    g_cpu.R[15] = 0x08197354u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197354 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08197354 = 1u;
        uint32_t _r_08197354;
        _r_08197354 = 0x00000000u;
        g_cpu.R[4] = _r_08197354;
    }
    g_cpu.R[15] = 0x08197358u;
    runtime_tick(_cyc_08197354);
    /* fall-through to 0x08197358 */
    g_cpu.R[15] = 0x08197358u;
    runtime_dispatch(0x08197358u);
    return;
}


/* 0x08197358  mode=arm  end=0x08197394  branches=6  indirect */
void gf_indirect_control_flow_arm_at_08197358(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08197358u);
    /* 08197358  08197358 A mov r12,r2,lsr #3 */
    g_cpu.R[15] = 0x08197358u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197358 = 1u;
    _cyc_08197358 = 1u;
    uint32_t _rm_08197358 = g_cpu.R[2];
    uint32_t _op2_08197358;
    uint32_t _co_08197358;
    _op2_08197358 = _rm_08197358 >> 3;
    _co_08197358 = (_rm_08197358 >> 2) & 1u;
    uint32_t _r_08197358;
    _r_08197358 = _op2_08197358;
    g_cpu.R[12] = _r_08197358;
    g_cpu.R[15] = 0x0819735Cu;
    runtime_tick(_cyc_08197358);
    /* 0819735C  0819735c A rsb r11,r12,#0x10 */
    g_cpu.R[15] = 0x0819735Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819735C = 1u;
    _cyc_0819735C = 1u;
    uint32_t _rn_0819735C = g_cpu.R[12];
    uint32_t _r_0819735C;
    _r_0819735C = 0x00000010u - _rn_0819735C;
    g_cpu.R[11] = _r_0819735C;
    g_cpu.R[15] = 0x08197360u;
    runtime_tick(_cyc_0819735C);
    /* 08197360  08197360 A and r2,r2,#0x7 */
    g_cpu.R[15] = 0x08197360u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197360 = 1u;
    _cyc_08197360 = 1u;
    uint32_t _rn_08197360 = g_cpu.R[2];
    uint32_t _r_08197360;
    _r_08197360 = _rn_08197360 & 0x00000007u;
    g_cpu.R[2] = _r_08197360;
    g_cpu.R[15] = 0x08197364u;
    runtime_tick(_cyc_08197360);
    /* 08197364  08197364 A add r2,r2,r12,lsl #6 */
    g_cpu.R[15] = 0x08197364u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197364 = 1u;
    _cyc_08197364 = 1u;
    uint32_t _rm_08197364 = g_cpu.R[12];
    uint32_t _op2_08197364;
    uint32_t _co_08197364;
    _op2_08197364 = _rm_08197364 << 6;
    _co_08197364 = (_rm_08197364 >> 26) & 1u;
    uint32_t _rn_08197364 = g_cpu.R[2];
    uint32_t _r_08197364;
    _r_08197364 = _rn_08197364 + _op2_08197364;
    g_cpu.R[2] = _r_08197364;
    g_cpu.R[15] = 0x08197368u;
    runtime_tick(_cyc_08197364);
    /* 08197368  08197368 A add r0,r0,r2 */
    g_cpu.R[15] = 0x08197368u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197368 = 1u;
    _cyc_08197368 = 1u;
    uint32_t _rm_08197368 = g_cpu.R[2];
    uint32_t _op2_08197368;
    uint32_t _co_08197368;
    _op2_08197368 = _rm_08197368;
    _co_08197368 = cpsr_c();
    uint32_t _rn_08197368 = g_cpu.R[0];
    uint32_t _r_08197368;
    _r_08197368 = _rn_08197368 + _op2_08197368;
    g_cpu.R[0] = _r_08197368;
    g_cpu.R[15] = 0x0819736Cu;
    runtime_tick(_cyc_08197368);
    /* 0819736C  0819736c A mov r3,r3,lsl #3 */
    g_cpu.R[15] = 0x0819736Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819736C = 1u;
    _cyc_0819736C = 1u;
    uint32_t _rm_0819736C = g_cpu.R[3];
    uint32_t _op2_0819736C;
    uint32_t _co_0819736C;
    _op2_0819736C = _rm_0819736C << 3;
    _co_0819736C = (_rm_0819736C >> 29) & 1u;
    uint32_t _r_0819736C;
    _r_0819736C = _op2_0819736C;
    g_cpu.R[3] = _r_0819736C;
    g_cpu.R[15] = 0x08197370u;
    runtime_tick(_cyc_0819736C);
    /* 08197370  08197370 A add r2,r3,r5,lsl #3 */
    g_cpu.R[15] = 0x08197370u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197370 = 1u;
    _cyc_08197370 = 1u;
    uint32_t _rm_08197370 = g_cpu.R[5];
    uint32_t _op2_08197370;
    uint32_t _co_08197370;
    _op2_08197370 = _rm_08197370 << 3;
    _co_08197370 = (_rm_08197370 >> 29) & 1u;
    uint32_t _rn_08197370 = g_cpu.R[3];
    uint32_t _r_08197370;
    _r_08197370 = _rn_08197370 + _op2_08197370;
    g_cpu.R[2] = _r_08197370;
    g_cpu.R[15] = 0x08197374u;
    runtime_tick(_cyc_08197370);
    /* 08197374  08197374 A and r12,r3,#0x38 */
    g_cpu.R[15] = 0x08197374u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197374 = 1u;
    _cyc_08197374 = 1u;
    uint32_t _rn_08197374 = g_cpu.R[3];
    uint32_t _r_08197374;
    _r_08197374 = _rn_08197374 & 0x00000038u;
    g_cpu.R[12] = _r_08197374;
    g_cpu.R[15] = 0x08197378u;
    runtime_tick(_cyc_08197374);
    /* 08197378  08197378 A and r14,r3,#0x0 */
    g_cpu.R[15] = 0x08197378u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197378 = 1u;
    _cyc_08197378 = 1u;
    uint32_t _rn_08197378 = g_cpu.R[3];
    uint32_t _r_08197378;
    _r_08197378 = _rn_08197378 & 0x00000000u;
    g_cpu.R[14] = _r_08197378;
    g_cpu.R[15] = 0x0819737Cu;
    runtime_tick(_cyc_08197378);
    /* 0819737C  0819737c A orr r12,r12,r14 */
    g_cpu.R[15] = 0x0819737Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819737C = 1u;
    _cyc_0819737C = 1u;
    uint32_t _rm_0819737C = g_cpu.R[14];
    uint32_t _op2_0819737C;
    uint32_t _co_0819737C;
    _op2_0819737C = _rm_0819737C;
    _co_0819737C = cpsr_c();
    uint32_t _rn_0819737C = g_cpu.R[12];
    uint32_t _r_0819737C;
    _r_0819737C = _rn_0819737C | _op2_0819737C;
    g_cpu.R[12] = _r_0819737C;
    g_cpu.R[15] = 0x08197380u;
    runtime_tick(_cyc_0819737C);
    /* 08197380  08197380 A add r9,r0,r12 */
    g_cpu.R[15] = 0x08197380u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197380 = 1u;
    _cyc_08197380 = 1u;
    uint32_t _rm_08197380 = g_cpu.R[12];
    uint32_t _op2_08197380;
    uint32_t _co_08197380;
    _op2_08197380 = _rm_08197380;
    _co_08197380 = cpsr_c();
    uint32_t _rn_08197380 = g_cpu.R[0];
    uint32_t _r_08197380;
    _r_08197380 = _rn_08197380 + _op2_08197380;
    g_cpu.R[9] = _r_08197380;
    g_cpu.R[15] = 0x08197384u;
    runtime_tick(_cyc_08197380);
    /* 08197384  08197384 A mov r14,r11 */
    g_cpu.R[15] = 0x08197384u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197384 = 1u;
    _cyc_08197384 = 1u;
    uint32_t _rm_08197384 = g_cpu.R[11];
    uint32_t _op2_08197384;
    uint32_t _co_08197384;
    _op2_08197384 = _rm_08197384;
    _co_08197384 = cpsr_c();
    uint32_t _r_08197384;
    _r_08197384 = _op2_08197384;
    g_cpu.R[14] = _r_08197384;
    g_cpu.R[15] = 0x08197388u;
    runtime_tick(_cyc_08197384);
    /* 08197388  08197388 A cmps r7,#0x0 */
    g_cpu.R[15] = 0x08197388u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197388 = 1u;
    _cyc_08197388 = 1u;
    uint32_t _rn_08197388 = g_cpu.R[7];
    uint32_t _r_08197388;
    _r_08197388 = _rn_08197388 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08197388, 0x00000000u, _r_08197388);
    g_cpu.R[15] = 0x0819738Cu;
    runtime_tick(_cyc_08197388);
    /* 0819738C  0819738c A beq 0x08197394 */
    g_cpu.R[15] = 0x0819738Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819738C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0819738C = 3u;
        g_cpu.R[15] = 0x08197394u;
        runtime_tick(_cyc_0819738C);
        gf_indirect_control_flow_arm_at_08197394();
        return;
    }
    g_cpu.R[15] = 0x08197390u;
    runtime_tick(_cyc_0819738C);
    /* 08197390  08197390 A sub r12,r1,r7 */
    g_cpu.R[15] = 0x08197390u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197390 = 1u;
    _cyc_08197390 = 1u;
    uint32_t _rm_08197390 = g_cpu.R[7];
    uint32_t _op2_08197390;
    uint32_t _co_08197390;
    _op2_08197390 = _rm_08197390;
    _co_08197390 = cpsr_c();
    uint32_t _rn_08197390 = g_cpu.R[1];
    uint32_t _r_08197390;
    _r_08197390 = _rn_08197390 - _op2_08197390;
    g_cpu.R[12] = _r_08197390;
    g_cpu.R[15] = 0x08197394u;
    runtime_tick(_cyc_08197390);
    /* fall-through to 0x08197394 */
    g_cpu.R[15] = 0x08197394u;
    runtime_dispatch(0x08197394u);
    return;
}


/* 0x08197394  mode=arm  end=0x081973A4  branches=5  indirect */
void gf_indirect_control_flow_arm_at_08197394(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08197394u);
    /* 08197394  08197394 A add r12,r1,r7 */
    g_cpu.R[15] = 0x08197394u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197394 = 1u;
    _cyc_08197394 = 1u;
    uint32_t _rm_08197394 = g_cpu.R[7];
    uint32_t _op2_08197394;
    uint32_t _co_08197394;
    _op2_08197394 = _rm_08197394;
    _co_08197394 = cpsr_c();
    uint32_t _rn_08197394 = g_cpu.R[1];
    uint32_t _r_08197394;
    _r_08197394 = _rn_08197394 + _op2_08197394;
    g_cpu.R[12] = _r_08197394;
    g_cpu.R[15] = 0x08197398u;
    runtime_tick(_cyc_08197394);
    /* 08197398  08197398 A cmps r1,r12 */
    g_cpu.R[15] = 0x08197398u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08197398 = 1u;
    _cyc_08197398 = 1u;
    uint32_t _rm_08197398 = g_cpu.R[12];
    uint32_t _op2_08197398;
    uint32_t _co_08197398;
    _op2_08197398 = _rm_08197398;
    _co_08197398 = cpsr_c();
    uint32_t _rn_08197398 = g_cpu.R[1];
    uint32_t _r_08197398;
    _r_08197398 = _rn_08197398 - _op2_08197398;
    arm_set_nzcv_sub(_rn_08197398, _op2_08197398, _r_08197398);
    g_cpu.R[15] = 0x0819739Cu;
    runtime_tick(_cyc_08197398);
    /* 0819739C  0819739c A bne 0x081973a4 */
    g_cpu.R[15] = 0x0819739Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0819739C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0819739C = 3u;
        g_cpu.R[15] = 0x081973A4u;
        runtime_tick(_cyc_0819739C);
        gf_indirect_control_flow_arm_at_081973A4();
        return;
    }
    g_cpu.R[15] = 0x081973A0u;
    runtime_tick(_cyc_0819739C);
    /* 081973A0  081973a0 A add r9,r9,#0x38 */
    g_cpu.R[15] = 0x081973A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973A0 = 1u;
    _cyc_081973A0 = 1u;
    uint32_t _rn_081973A0 = g_cpu.R[9];
    uint32_t _r_081973A0;
    _r_081973A0 = _rn_081973A0 + 0x00000038u;
    g_cpu.R[9] = _r_081973A0;
    g_cpu.R[15] = 0x081973A4u;
    runtime_tick(_cyc_081973A0);
    /* fall-through to 0x081973A4 */
    g_cpu.R[15] = 0x081973A4u;
    runtime_dispatch(0x081973A4u);
    return;
}


/* 0x081973A4  mode=arm  end=0x081973B8  branches=4  indirect */
void gf_indirect_control_flow_arm_at_081973A4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081973A4u);
    /* 081973A4  081973a4 A subs r14,r14,#0x1 */
    g_cpu.R[15] = 0x081973A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973A4 = 1u;
    _cyc_081973A4 = 1u;
    uint32_t _rn_081973A4 = g_cpu.R[14];
    uint32_t _r_081973A4;
    _r_081973A4 = _rn_081973A4 - 0x00000001u;
    arm_set_nzcv_sub(_rn_081973A4, 0x00000001u, _r_081973A4);
    g_cpu.R[14] = _r_081973A4;
    g_cpu.R[15] = 0x081973A8u;
    runtime_tick(_cyc_081973A4);
    /* 081973A8  081973a8 A subeq r9,r9,#0x400 */
    g_cpu.R[15] = 0x081973A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973A8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081973A8 = 1u;
        uint32_t _rn_081973A8 = g_cpu.R[9];
        uint32_t _r_081973A8;
        _r_081973A8 = _rn_081973A8 - 0x00000400u;
        g_cpu.R[9] = _r_081973A8;
    }
    g_cpu.R[15] = 0x081973ACu;
    runtime_tick(_cyc_081973A8);
    /* 081973AC  081973ac A movs r12,r4,lsr #3 */
    g_cpu.R[15] = 0x081973ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973AC = 1u;
    _cyc_081973AC = 1u;
    uint32_t _rm_081973AC = g_cpu.R[4];
    uint32_t _op2_081973AC;
    uint32_t _co_081973AC;
    _op2_081973AC = _rm_081973AC >> 3;
    _co_081973AC = (_rm_081973AC >> 2) & 1u;
    uint32_t _r_081973AC;
    _r_081973AC = _op2_081973AC;
    arm_set_nzc_logic(_r_081973AC, _co_081973AC);
    g_cpu.R[12] = _r_081973AC;
    g_cpu.R[15] = 0x081973B0u;
    runtime_tick(_cyc_081973AC);
    /* 081973B0  081973b0 A beq 0x081973b8 */
    g_cpu.R[15] = 0x081973B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973B0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081973B0 = 3u;
        g_cpu.R[15] = 0x081973B8u;
        runtime_tick(_cyc_081973B0);
        gf_indirect_control_flow_arm_at_081973B8();
        return;
    }
    g_cpu.R[15] = 0x081973B4u;
    runtime_tick(_cyc_081973B0);
    /* 081973B4  081973b4 A add r9,r9,#0x38 */
    g_cpu.R[15] = 0x081973B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973B4 = 1u;
    _cyc_081973B4 = 1u;
    uint32_t _rn_081973B4 = g_cpu.R[9];
    uint32_t _r_081973B4;
    _r_081973B4 = _rn_081973B4 + 0x00000038u;
    g_cpu.R[9] = _r_081973B4;
    g_cpu.R[15] = 0x081973B8u;
    runtime_tick(_cyc_081973B4);
    /* fall-through to 0x081973B8 */
    g_cpu.R[15] = 0x081973B8u;
    runtime_dispatch(0x081973B8u);
    return;
}


/* 0x081973B8  mode=arm  end=0x081973CC  branches=3  indirect */
void gf_indirect_control_flow_arm_at_081973B8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081973B8u);
    /* 081973B8  081973b8 A subs r14,r14,#0x1 */
    g_cpu.R[15] = 0x081973B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973B8 = 1u;
    _cyc_081973B8 = 1u;
    uint32_t _rn_081973B8 = g_cpu.R[14];
    uint32_t _r_081973B8;
    _r_081973B8 = _rn_081973B8 - 0x00000001u;
    arm_set_nzcv_sub(_rn_081973B8, 0x00000001u, _r_081973B8);
    g_cpu.R[14] = _r_081973B8;
    g_cpu.R[15] = 0x081973BCu;
    runtime_tick(_cyc_081973B8);
    /* 081973BC  081973bc A subeq r9,r9,#0x400 */
    g_cpu.R[15] = 0x081973BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973BC = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081973BC = 1u;
        uint32_t _rn_081973BC = g_cpu.R[9];
        uint32_t _r_081973BC;
        _r_081973BC = _rn_081973BC - 0x00000400u;
        g_cpu.R[9] = _r_081973BC;
    }
    g_cpu.R[15] = 0x081973C0u;
    runtime_tick(_cyc_081973BC);
    /* 081973C0  081973c0 A subs r12,r12,#0x1 */
    g_cpu.R[15] = 0x081973C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973C0 = 1u;
    _cyc_081973C0 = 1u;
    uint32_t _rn_081973C0 = g_cpu.R[12];
    uint32_t _r_081973C0;
    _r_081973C0 = _rn_081973C0 - 0x00000001u;
    arm_set_nzcv_sub(_rn_081973C0, 0x00000001u, _r_081973C0);
    g_cpu.R[12] = _r_081973C0;
    g_cpu.R[15] = 0x081973C4u;
    runtime_tick(_cyc_081973C0);
    /* 081973C4  081973c4 A bne 0x081973cc */
    g_cpu.R[15] = 0x081973C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973C4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081973C4 = 3u;
        g_cpu.R[15] = 0x081973CCu;
        runtime_tick(_cyc_081973C4);
        gf_indirect_control_flow_arm_at_081973CC();
        return;
    }
    g_cpu.R[15] = 0x081973C8u;
    runtime_tick(_cyc_081973C4);
    /* 081973C8  081973c8 A ands r12,r4,#0x7 */
    g_cpu.R[15] = 0x081973C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973C8 = 1u;
    _cyc_081973C8 = 1u;
    uint32_t _rn_081973C8 = g_cpu.R[4];
    uint32_t _r_081973C8;
    _r_081973C8 = _rn_081973C8 & 0x00000007u;
    arm_set_nzc_logic(_r_081973C8, cpsr_c());
    g_cpu.R[12] = _r_081973C8;
    g_cpu.R[15] = 0x081973CCu;
    runtime_tick(_cyc_081973C8);
    /* fall-through to 0x081973CC */
    g_cpu.R[15] = 0x081973CCu;
    runtime_dispatch(0x081973CCu);
    return;
}


/* 0x081973CC  mode=arm  end=0x081973D4  branches=2  indirect */
void gf_indirect_control_flow_arm_at_081973CC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081973CCu);
    /* 081973CC  081973cc A beq 0x081973d4 */
    g_cpu.R[15] = 0x081973CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973CC = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081973CC = 3u;
        g_cpu.R[15] = 0x081973D4u;
        runtime_tick(_cyc_081973CC);
        gf_memory_reads_arm_at_081973D4();
        return;
    }
    g_cpu.R[15] = 0x081973D0u;
    runtime_tick(_cyc_081973CC);
    /* 081973D0  081973d0 A sub r12,r1,r12 */
    g_cpu.R[15] = 0x081973D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973D0 = 1u;
    _cyc_081973D0 = 1u;
    uint32_t _rm_081973D0 = g_cpu.R[12];
    uint32_t _op2_081973D0;
    uint32_t _co_081973D0;
    _op2_081973D0 = _rm_081973D0;
    _co_081973D0 = cpsr_c();
    uint32_t _rn_081973D0 = g_cpu.R[1];
    uint32_t _r_081973D0;
    _r_081973D0 = _rn_081973D0 - _op2_081973D0;
    g_cpu.R[12] = _r_081973D0;
    g_cpu.R[15] = 0x081973D4u;
    runtime_tick(_cyc_081973D0);
    /* fall-through to 0x081973D4 */
    g_cpu.R[15] = 0x081973D4u;
    runtime_dispatch(0x081973D4u);
    return;
}


/* 0x081973EC  mode=arm  end=0x081973F0  branches=0  indirect */
void gf_indirect_control_flow_arm_at_081973EC(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081973ECu);
    /* 081973EC  081973ec A bx r14 */
    g_cpu.R[15] = 0x081973ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081973EC = 1u;
    _cyc_081973EC = 3u;
    uint32_t _bxt_081973EC = g_cpu.R[14];
    g_cpu.R[15] = _bxt_081973EC & ~1u;
    runtime_tick(_cyc_081973EC);
    if (_bxt_081973EC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_081973EC);
    return;
    g_cpu.R[15] = 0x081973F0u;
    runtime_tick(_cyc_081973EC);
    /* fall-through to 0x081973F0 */
    g_cpu.R[15] = 0x081973F0u;
    runtime_dispatch(0x081973F0u);
    return;
}


/* 0x081C0614  mode=arm  end=0x081C0624  branches=0  indirect */
void gf_indirect_control_flow_arm_at_081C0614(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C0614u);
    /* 081C0614  081c0614 A umlalne raw=0x10a14293 */
    g_cpu.R[15] = 0x081C0614u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C0614 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081C0614 = 1u;
        _cyc_081C0614 += runtime_mul_cycles(g_cpu.R[2], 0u, 2u);
        uint64_t _p_081C0614 = (uint64_t)g_cpu.R[3] * (uint64_t)g_cpu.R[2];
        uint64_t _acc_081C0614 = ((uint64_t)g_cpu.R[1] << 32) | g_cpu.R[4];
        uint64_t _sum_081C0614 = _acc_081C0614 + _p_081C0614;
        g_cpu.R[4] = (uint32_t)(_sum_081C0614 & 0xFFFFFFFFu);
        g_cpu.R[1] = (uint32_t)(_sum_081C0614 >> 32);
    }
    g_cpu.R[15] = 0x081C0618u;
    runtime_tick(_cyc_081C0614);
    /* 081C0618  081c0618 A umull raw=0xe0804091 */
    g_cpu.R[15] = 0x081C0618u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C0618 = 1u;
    _cyc_081C0618 = 1u;
    _cyc_081C0618 += runtime_mul_cycles(g_cpu.R[0], 0u, 1u);
    uint64_t _p_081C0618 = (uint64_t)g_cpu.R[1] * (uint64_t)g_cpu.R[0];
    g_cpu.R[4] = (uint32_t)(_p_081C0618 & 0xFFFFFFFFu);
    g_cpu.R[0] = (uint32_t)(_p_081C0618 >> 32);
    g_cpu.R[15] = 0x081C061Cu;
    runtime_tick(_cyc_081C0618);
    /* 081C061C  081c061c A mov r4,r12 */
    g_cpu.R[15] = 0x081C061Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C061C = 1u;
    _cyc_081C061C = 1u;
    uint32_t _rm_081C061C = g_cpu.R[12];
    uint32_t _op2_081C061C;
    uint32_t _co_081C061C;
    _op2_081C061C = _rm_081C061C;
    _co_081C061C = cpsr_c();
    uint32_t _r_081C061C;
    _r_081C061C = _op2_081C061C;
    g_cpu.R[4] = _r_081C061C;
    g_cpu.R[15] = 0x081C0620u;
    runtime_tick(_cyc_081C061C);
    /* 081C0620  081c0620 A bx r14 */
    g_cpu.R[15] = 0x081C0620u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C0620 = 1u;
    _cyc_081C0620 = 3u;
    uint32_t _bxt_081C0620 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_081C0620 & ~1u;
    runtime_tick(_cyc_081C0620);
    if (_bxt_081C0620 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_081C0620);
    return;
    g_cpu.R[15] = 0x081C0624u;
    runtime_tick(_cyc_081C0620);
    /* fall-through to 0x081C0624 */
    g_cpu.R[15] = 0x081C0624u;
    runtime_dispatch(0x081C0624u);
    return;
}


/* 0x081C131C  mode=arm  end=0x081C132C  branches=1  indirect */
void gf_indirect_control_flow_arm_at_081C131C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C131Cu);
    /* 081C131C  081c131c A cmps r4,#0x2 */
    g_cpu.R[15] = 0x081C131Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C131C = 1u;
    _cyc_081C131C = 1u;
    uint32_t _rn_081C131C = g_cpu.R[4];
    uint32_t _r_081C131C;
    _r_081C131C = _rn_081C131C - 0x00000002u;
    arm_set_nzcv_sub(_rn_081C131C, 0x00000002u, _r_081C131C);
    g_cpu.R[15] = 0x081C1320u;
    runtime_tick(_cyc_081C131C);
    /* 081C1320  081c1320 A addeq r7,r0,#0x350 */
    g_cpu.R[15] = 0x081C1320u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1320 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C1320 = 1u;
        uint32_t _rn_081C1320 = g_cpu.R[0];
        uint32_t _r_081C1320;
        _r_081C1320 = _rn_081C1320 + 0x00000350u;
        g_cpu.R[7] = _r_081C1320;
    }
    g_cpu.R[15] = 0x081C1324u;
    runtime_tick(_cyc_081C1320);
    /* 081C1324  081c1324 A addne r7,r5,r8 */
    g_cpu.R[15] = 0x081C1324u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1324 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081C1324 = 1u;
        uint32_t _rm_081C1324 = g_cpu.R[8];
        uint32_t _op2_081C1324;
        uint32_t _co_081C1324;
        _op2_081C1324 = _rm_081C1324;
        _co_081C1324 = cpsr_c();
        uint32_t _rn_081C1324 = g_cpu.R[5];
        uint32_t _r_081C1324;
        _r_081C1324 = _rn_081C1324 + _op2_081C1324;
        g_cpu.R[7] = _r_081C1324;
    }
    g_cpu.R[15] = 0x081C1328u;
    runtime_tick(_cyc_081C1324);
    /* 081C1328  081c1328 A mov r4,r8 */
    g_cpu.R[15] = 0x081C1328u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1328 = 1u;
    _cyc_081C1328 = 1u;
    uint32_t _rm_081C1328 = g_cpu.R[8];
    uint32_t _op2_081C1328;
    uint32_t _co_081C1328;
    _op2_081C1328 = _rm_081C1328;
    _co_081C1328 = cpsr_c();
    uint32_t _r_081C1328;
    _r_081C1328 = _op2_081C1328;
    g_cpu.R[4] = _r_081C1328;
    g_cpu.R[15] = 0x081C132Cu;
    runtime_tick(_cyc_081C1328);
    /* fall-through to 0x081C132C */
    g_cpu.R[15] = 0x081C132Cu;
    runtime_dispatch(0x081C132Cu);
    return;
}


/* 0x081C14C8  mode=arm  end=0x081C14F4  branches=9 */
void gf_indirect_control_flow_arm_at_081C14C8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C14C8u);
    /* 081C14C8  081c14c8 A cmps r2,#0x4 */
    g_cpu.R[15] = 0x081C14C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14C8 = 1u;
    _cyc_081C14C8 = 1u;
    uint32_t _rn_081C14C8 = g_cpu.R[2];
    uint32_t _r_081C14C8;
    _r_081C14C8 = _rn_081C14C8 - 0x00000004u;
    arm_set_nzcv_sub(_rn_081C14C8, 0x00000004u, _r_081C14C8);
    g_cpu.R[15] = 0x081C14CCu;
    runtime_tick(_cyc_081C14C8);
    /* 081C14CC  081c14cc A ble 0x081c1538 */
    g_cpu.R[15] = 0x081C14CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14CC = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_081C14CC = 3u;
        g_cpu.R[15] = 0x081C1538u;
        runtime_tick(_cyc_081C14CC);
        gf_memory_reads_arm_at_081C1538();
        return;
    }
    g_cpu.R[15] = 0x081C14D0u;
    runtime_tick(_cyc_081C14CC);
    /* 081C14D0  081c14d0 A subs r2,r2,r8 */
    g_cpu.R[15] = 0x081C14D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14D0 = 1u;
    _cyc_081C14D0 = 1u;
    uint32_t _rm_081C14D0 = g_cpu.R[8];
    uint32_t _op2_081C14D0;
    uint32_t _co_081C14D0;
    _op2_081C14D0 = _rm_081C14D0;
    _co_081C14D0 = cpsr_c();
    uint32_t _rn_081C14D0 = g_cpu.R[2];
    uint32_t _r_081C14D0;
    _r_081C14D0 = _rn_081C14D0 - _op2_081C14D0;
    arm_set_nzcv_sub(_rn_081C14D0, _op2_081C14D0, _r_081C14D0);
    g_cpu.R[2] = _r_081C14D0;
    g_cpu.R[15] = 0x081C14D4u;
    runtime_tick(_cyc_081C14D0);
    /* 081C14D4  081c14d4 A movgt r14,#0x0 */
    g_cpu.R[15] = 0x081C14D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14D4 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_081C14D4 = 1u;
        uint32_t _r_081C14D4;
        _r_081C14D4 = 0x00000000u;
        g_cpu.R[14] = _r_081C14D4;
    }
    g_cpu.R[15] = 0x081C14D8u;
    runtime_tick(_cyc_081C14D4);
    /* 081C14D8  081c14d8 A bgt 0x081c14f4 */
    g_cpu.R[15] = 0x081C14D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14D8 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_081C14D8 = 3u;
        g_cpu.R[15] = 0x081C14F4u;
        runtime_tick(_cyc_081C14D8);
        gf_memory_reads_arm_at_081C14F4();
        return;
    }
    g_cpu.R[15] = 0x081C14DCu;
    runtime_tick(_cyc_081C14D8);
    /* 081C14DC  081c14dc A mov r14,r8 */
    g_cpu.R[15] = 0x081C14DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14DC = 1u;
    _cyc_081C14DC = 1u;
    uint32_t _rm_081C14DC = g_cpu.R[8];
    uint32_t _op2_081C14DC;
    uint32_t _co_081C14DC;
    _op2_081C14DC = _rm_081C14DC;
    _co_081C14DC = cpsr_c();
    uint32_t _r_081C14DC;
    _r_081C14DC = _op2_081C14DC;
    g_cpu.R[14] = _r_081C14DC;
    g_cpu.R[15] = 0x081C14E0u;
    runtime_tick(_cyc_081C14DC);
    /* 081C14E0  081c14e0 A add r2,r2,r8 */
    g_cpu.R[15] = 0x081C14E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14E0 = 1u;
    _cyc_081C14E0 = 1u;
    uint32_t _rm_081C14E0 = g_cpu.R[8];
    uint32_t _op2_081C14E0;
    uint32_t _co_081C14E0;
    _op2_081C14E0 = _rm_081C14E0;
    _co_081C14E0 = cpsr_c();
    uint32_t _rn_081C14E0 = g_cpu.R[2];
    uint32_t _r_081C14E0;
    _r_081C14E0 = _rn_081C14E0 + _op2_081C14E0;
    g_cpu.R[2] = _r_081C14E0;
    g_cpu.R[15] = 0x081C14E4u;
    runtime_tick(_cyc_081C14E0);
    /* 081C14E4  081c14e4 A sub r8,r2,#0x4 */
    g_cpu.R[15] = 0x081C14E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14E4 = 1u;
    _cyc_081C14E4 = 1u;
    uint32_t _rn_081C14E4 = g_cpu.R[2];
    uint32_t _r_081C14E4;
    _r_081C14E4 = _rn_081C14E4 - 0x00000004u;
    g_cpu.R[8] = _r_081C14E4;
    g_cpu.R[15] = 0x081C14E8u;
    runtime_tick(_cyc_081C14E4);
    /* 081C14E8  081c14e8 A sub r14,r14,r8 */
    g_cpu.R[15] = 0x081C14E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14E8 = 1u;
    _cyc_081C14E8 = 1u;
    uint32_t _rm_081C14E8 = g_cpu.R[8];
    uint32_t _op2_081C14E8;
    uint32_t _co_081C14E8;
    _op2_081C14E8 = _rm_081C14E8;
    _co_081C14E8 = cpsr_c();
    uint32_t _rn_081C14E8 = g_cpu.R[14];
    uint32_t _r_081C14E8;
    _r_081C14E8 = _rn_081C14E8 - _op2_081C14E8;
    g_cpu.R[14] = _r_081C14E8;
    g_cpu.R[15] = 0x081C14ECu;
    runtime_tick(_cyc_081C14E8);
    /* 081C14EC  081c14ec A ands r2,r2,#0x3 */
    g_cpu.R[15] = 0x081C14ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14EC = 1u;
    _cyc_081C14EC = 1u;
    uint32_t _rn_081C14EC = g_cpu.R[2];
    uint32_t _r_081C14EC;
    _r_081C14EC = _rn_081C14EC & 0x00000003u;
    arm_set_nzc_logic(_r_081C14EC, cpsr_c());
    g_cpu.R[2] = _r_081C14EC;
    g_cpu.R[15] = 0x081C14F0u;
    runtime_tick(_cyc_081C14EC);
    /* 081C14F0  081c14f0 A moveq r2,#0x4 */
    g_cpu.R[15] = 0x081C14F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C14F0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C14F0 = 1u;
        uint32_t _r_081C14F0;
        _r_081C14F0 = 0x00000004u;
        g_cpu.R[2] = _r_081C14F0;
    }
    g_cpu.R[15] = 0x081C14F4u;
    runtime_tick(_cyc_081C14F0);
    /* fall-through to 0x081C14F4 */
    g_cpu.R[15] = 0x081C14F4u;
    runtime_dispatch(0x081C14F4u);
    return;
}


/* 0x081C1594  mode=arm  end=0x081C15A4  branches=2 */
void gf_indirect_control_flow_arm_at_081C1594(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C1594u);
L_081C1594:
    /* 081C1594  081c1594 A adds r2,r0,r2 */
    g_cpu.R[15] = 0x081C1594u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1594 = 1u;
    _cyc_081C1594 = 1u;
    uint32_t _rm_081C1594 = g_cpu.R[2];
    uint32_t _op2_081C1594;
    uint32_t _co_081C1594;
    _op2_081C1594 = _rm_081C1594;
    _co_081C1594 = cpsr_c();
    uint32_t _rn_081C1594 = g_cpu.R[0];
    uint32_t _r_081C1594;
    _r_081C1594 = _rn_081C1594 + _op2_081C1594;
    arm_set_nzcv_add(_rn_081C1594, _op2_081C1594, _r_081C1594);
    g_cpu.R[2] = _r_081C1594;
    g_cpu.R[15] = 0x081C1598u;
    runtime_tick(_cyc_081C1594);
    /* 081C1598  081c1598 A bgt 0x081c164c */
    g_cpu.R[15] = 0x081C1598u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1598 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_081C1598 = 3u;
        g_cpu.R[15] = 0x081C164Cu;
        runtime_tick(_cyc_081C1598);
        gf_memory_reads_arm_at_081C164C();
        return;
    }
    g_cpu.R[15] = 0x081C159Cu;
    runtime_tick(_cyc_081C1598);
    /* 081C159C  081c159c A sub r9,r9,r0 */
    g_cpu.R[15] = 0x081C159Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C159C = 1u;
    _cyc_081C159C = 1u;
    uint32_t _rm_081C159C = g_cpu.R[0];
    uint32_t _op2_081C159C;
    uint32_t _co_081C159C;
    _op2_081C159C = _rm_081C159C;
    _co_081C159C = cpsr_c();
    uint32_t _rn_081C159C = g_cpu.R[9];
    uint32_t _r_081C159C;
    _r_081C159C = _rn_081C159C - _op2_081C159C;
    g_cpu.R[9] = _r_081C159C;
    g_cpu.R[15] = 0x081C15A0u;
    runtime_tick(_cyc_081C159C);
    /* 081C15A0  081c15a0 A b 0x081c1594 */
    g_cpu.R[15] = 0x081C15A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C15A0 = 1u;
    _cyc_081C15A0 = 3u;
    g_cpu.R[15] = 0x081C1594u;
    runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x081C15A0u, 0x081C1594u, 0u, 0u);
    runtime_tick(_cyc_081C15A0);
    goto L_081C1594;
    g_cpu.R[15] = 0x081C15A4u;
    runtime_tick(_cyc_081C15A0);
    /* fall-through to 0x081C15A4 */
    g_cpu.R[15] = 0x081C15A4u;
    runtime_dispatch(0x081C15A4u);
    return;
}


/* 0x081C160C  mode=arm  end=0x081C164C  branches=4  indirect */
void gf_indirect_control_flow_arm_at_081C160C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C160Cu);
    /* 081C160C  081c160c A mul r9,r14,r1 */
    g_cpu.R[15] = 0x081C160Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C160C = 1u;
    _cyc_081C160C = 1u;
    _cyc_081C160C += runtime_mul_cycles(g_cpu.R[1], 1u, 0u);
    uint32_t _r_081C160C = g_cpu.R[14] * g_cpu.R[1];
    g_cpu.R[9] = _r_081C160C;
    g_cpu.R[15] = 0x081C1610u;
    runtime_tick(_cyc_081C160C);
    /* 081C1610  081c1610 A add r9,r0,r9,asr #23 */
    g_cpu.R[15] = 0x081C1610u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1610 = 1u;
    _cyc_081C1610 = 1u;
    uint32_t _rm_081C1610 = g_cpu.R[9];
    uint32_t _op2_081C1610;
    uint32_t _co_081C1610;
    _op2_081C1610 = (uint32_t)((int32_t)_rm_081C1610 >> 23);
    _co_081C1610 = (_rm_081C1610 >> 22) & 1u;
    uint32_t _rn_081C1610 = g_cpu.R[0];
    uint32_t _r_081C1610;
    _r_081C1610 = _rn_081C1610 + _op2_081C1610;
    g_cpu.R[9] = _r_081C1610;
    g_cpu.R[15] = 0x081C1614u;
    runtime_tick(_cyc_081C1610);
    /* 081C1614  081c1614 A mul r12,r10,r9 */
    g_cpu.R[15] = 0x081C1614u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1614 = 1u;
    _cyc_081C1614 = 1u;
    _cyc_081C1614 += runtime_mul_cycles(g_cpu.R[9], 1u, 0u);
    uint32_t _r_081C1614 = g_cpu.R[10] * g_cpu.R[9];
    g_cpu.R[12] = _r_081C1614;
    g_cpu.R[15] = 0x081C1618u;
    runtime_tick(_cyc_081C1614);
    /* 081C1618  081c1618 A bic r12,r12,#0xff0000 */
    g_cpu.R[15] = 0x081C1618u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1618 = 1u;
    _cyc_081C1618 = 1u;
    uint32_t _rn_081C1618 = g_cpu.R[12];
    uint32_t _r_081C1618;
    _r_081C1618 = _rn_081C1618 & ~(0x00FF0000u);
    g_cpu.R[12] = _r_081C1618;
    g_cpu.R[15] = 0x081C161Cu;
    runtime_tick(_cyc_081C1618);
    /* 081C161C  081c161c A add r6,r12,r6,ror #8 */
    g_cpu.R[15] = 0x081C161Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C161C = 1u;
    _cyc_081C161C = 1u;
    uint32_t _rm_081C161C = g_cpu.R[6];
    uint32_t _op2_081C161C;
    uint32_t _co_081C161C;
    _op2_081C161C = (_rm_081C161C >> 8) | (_rm_081C161C << 24);
    _co_081C161C = (_op2_081C161C >> 31) & 1u;
    uint32_t _rn_081C161C = g_cpu.R[12];
    uint32_t _r_081C161C;
    _r_081C161C = _rn_081C161C + _op2_081C161C;
    g_cpu.R[6] = _r_081C161C;
    g_cpu.R[15] = 0x081C1620u;
    runtime_tick(_cyc_081C161C);
    /* 081C1620  081c1620 A mul r12,r11,r9 */
    g_cpu.R[15] = 0x081C1620u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1620 = 1u;
    _cyc_081C1620 = 1u;
    _cyc_081C1620 += runtime_mul_cycles(g_cpu.R[9], 1u, 0u);
    uint32_t _r_081C1620 = g_cpu.R[11] * g_cpu.R[9];
    g_cpu.R[12] = _r_081C1620;
    g_cpu.R[15] = 0x081C1624u;
    runtime_tick(_cyc_081C1620);
    /* 081C1624  081c1624 A bic r12,r12,#0xff0000 */
    g_cpu.R[15] = 0x081C1624u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1624 = 1u;
    _cyc_081C1624 = 1u;
    uint32_t _rn_081C1624 = g_cpu.R[12];
    uint32_t _r_081C1624;
    _r_081C1624 = _rn_081C1624 & ~(0x00FF0000u);
    g_cpu.R[12] = _r_081C1624;
    g_cpu.R[15] = 0x081C1628u;
    runtime_tick(_cyc_081C1624);
    /* 081C1628  081c1628 A add r7,r12,r7,ror #8 */
    g_cpu.R[15] = 0x081C1628u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1628 = 1u;
    _cyc_081C1628 = 1u;
    uint32_t _rm_081C1628 = g_cpu.R[7];
    uint32_t _op2_081C1628;
    uint32_t _co_081C1628;
    _op2_081C1628 = (_rm_081C1628 >> 8) | (_rm_081C1628 << 24);
    _co_081C1628 = (_op2_081C1628 >> 31) & 1u;
    uint32_t _rn_081C1628 = g_cpu.R[12];
    uint32_t _r_081C1628;
    _r_081C1628 = _rn_081C1628 + _op2_081C1628;
    g_cpu.R[7] = _r_081C1628;
    g_cpu.R[15] = 0x081C162Cu;
    runtime_tick(_cyc_081C1628);
    /* 081C162C  081c162c A add r14,r14,r4 */
    g_cpu.R[15] = 0x081C162Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C162C = 1u;
    _cyc_081C162C = 1u;
    uint32_t _rm_081C162C = g_cpu.R[4];
    uint32_t _op2_081C162C;
    uint32_t _co_081C162C;
    _op2_081C162C = _rm_081C162C;
    _co_081C162C = cpsr_c();
    uint32_t _rn_081C162C = g_cpu.R[14];
    uint32_t _r_081C162C;
    _r_081C162C = _rn_081C162C + _op2_081C162C;
    g_cpu.R[14] = _r_081C162C;
    g_cpu.R[15] = 0x081C1630u;
    runtime_tick(_cyc_081C162C);
    /* 081C1630  081c1630 A movs r9,r14,lsr #23 */
    g_cpu.R[15] = 0x081C1630u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1630 = 1u;
    _cyc_081C1630 = 1u;
    uint32_t _rm_081C1630 = g_cpu.R[14];
    uint32_t _op2_081C1630;
    uint32_t _co_081C1630;
    _op2_081C1630 = _rm_081C1630 >> 23;
    _co_081C1630 = (_rm_081C1630 >> 22) & 1u;
    uint32_t _r_081C1630;
    _r_081C1630 = _op2_081C1630;
    arm_set_nzc_logic(_r_081C1630, _co_081C1630);
    g_cpu.R[9] = _r_081C1630;
    g_cpu.R[15] = 0x081C1634u;
    runtime_tick(_cyc_081C1630);
    /* 081C1634  081c1634 A beq 0x081c1658 */
    g_cpu.R[15] = 0x081C1634u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1634 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C1634 = 3u;
        g_cpu.R[15] = 0x081C1658u;
        runtime_tick(_cyc_081C1634);
        gf_memory_transfer_arm_at_081C1658();
        return;
    }
    g_cpu.R[15] = 0x081C1638u;
    runtime_tick(_cyc_081C1634);
    /* 081C1638  081c1638 A bic r14,r14,#0x3f800000 */
    g_cpu.R[15] = 0x081C1638u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1638 = 1u;
    _cyc_081C1638 = 1u;
    uint32_t _rn_081C1638 = g_cpu.R[14];
    uint32_t _r_081C1638;
    _r_081C1638 = _rn_081C1638 & ~(0x3F800000u);
    g_cpu.R[14] = _r_081C1638;
    g_cpu.R[15] = 0x081C163Cu;
    runtime_tick(_cyc_081C1638);
    /* 081C163C  081c163c A subs r2,r2,r9 */
    g_cpu.R[15] = 0x081C163Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C163C = 1u;
    _cyc_081C163C = 1u;
    uint32_t _rm_081C163C = g_cpu.R[9];
    uint32_t _op2_081C163C;
    uint32_t _co_081C163C;
    _op2_081C163C = _rm_081C163C;
    _co_081C163C = cpsr_c();
    uint32_t _rn_081C163C = g_cpu.R[2];
    uint32_t _r_081C163C;
    _r_081C163C = _rn_081C163C - _op2_081C163C;
    arm_set_nzcv_sub(_rn_081C163C, _op2_081C163C, _r_081C163C);
    g_cpu.R[2] = _r_081C163C;
    g_cpu.R[15] = 0x081C1640u;
    runtime_tick(_cyc_081C163C);
    /* 081C1640  081c1640 A ble 0x081c1580 */
    g_cpu.R[15] = 0x081C1640u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1640 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_081C1640 = 3u;
        g_cpu.R[15] = 0x081C1580u;
        runtime_tick(_cyc_081C1640);
        gf_memory_reads_arm_at_081C1580();
        return;
    }
    g_cpu.R[15] = 0x081C1644u;
    runtime_tick(_cyc_081C1640);
    /* 081C1644  081c1644 A subs r9,r9,#0x1 */
    g_cpu.R[15] = 0x081C1644u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1644 = 1u;
    _cyc_081C1644 = 1u;
    uint32_t _rn_081C1644 = g_cpu.R[9];
    uint32_t _r_081C1644;
    _r_081C1644 = _rn_081C1644 - 0x00000001u;
    arm_set_nzcv_sub(_rn_081C1644, 0x00000001u, _r_081C1644);
    g_cpu.R[9] = _r_081C1644;
    g_cpu.R[15] = 0x081C1648u;
    runtime_tick(_cyc_081C1644);
    /* 081C1648  081c1648 A addeq r0,r0,r1 */
    g_cpu.R[15] = 0x081C1648u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C1648 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C1648 = 1u;
        uint32_t _rm_081C1648 = g_cpu.R[1];
        uint32_t _op2_081C1648;
        uint32_t _co_081C1648;
        _op2_081C1648 = _rm_081C1648;
        _co_081C1648 = cpsr_c();
        uint32_t _rn_081C1648 = g_cpu.R[0];
        uint32_t _r_081C1648;
        _r_081C1648 = _rn_081C1648 + _op2_081C1648;
        g_cpu.R[0] = _r_081C1648;
    }
    g_cpu.R[15] = 0x081C164Cu;
    runtime_tick(_cyc_081C1648);
    /* fall-through to 0x081C164C */
    g_cpu.R[15] = 0x081C164Cu;
    runtime_dispatch(0x081C164Cu);
    return;
}
