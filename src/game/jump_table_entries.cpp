// Generated from a user supplied Golden Sun: The Lost Age ROM.
// jump_table_entries: functions grouped by observable CPU/hardware operations.
#include "runtime_arm.h"
#include "recompiled.h"

/* 0x081C3230  mode=thumb  end=0x081C3234  branches=1 */
void gf_jump_table_entries_at_081C3230(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C3230u);
    /* 081C3230  081c3230 T strb r2,[r3] */
    g_cpu.R[15] = 0x081C3230u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3230 = 1u;
    _cyc_081C3230 = 1u;
    uint32_t _base_081C3230 = g_cpu.R[3];
    uint32_t _off_081C3230;
    _off_081C3230 = 0x00000000u;
    uint32_t _ea_081C3230 = _base_081C3230 + _off_081C3230;
    uint32_t _post_081C3230 = _base_081C3230 + _off_081C3230;
    _cyc_081C3230 += runtime_mem_cycles(_ea_081C3230, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C3230u, _ea_081C3230, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_081C3230, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x081C3232u;
    runtime_tick(_cyc_081C3230);
    /* 081C3232  081c3232 T b 0x081c3306 */
    g_cpu.R[15] = 0x081C3232u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3232 = 1u;
    _cyc_081C3232 = 3u;
    g_cpu.R[15] = 0x081C3306u;
    runtime_tick(_cyc_081C3232);
    gf_memory_reads_thumb_at_081C3306();
    return;
    g_cpu.R[15] = 0x081C3234u;
    runtime_tick(_cyc_081C3232);
    /* fall-through to 0x081C3234 */
    g_cpu.R[15] = 0x081C3234u;
    runtime_dispatch(0x081C3234u);
    return;
}


/* 0x081C3234  mode=thumb  end=0x081C323C  branches=1 */
void gf_jump_table_entries_at_081C3234(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C3234u);
    /* 081C3234  081c3234 T ldrb r1,[r3] */
    g_cpu.R[15] = 0x081C3234u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3234 = 1u;
    _cyc_081C3234 = 2u;
    uint32_t _base_081C3234 = g_cpu.R[3];
    uint32_t _off_081C3234;
    _off_081C3234 = 0x00000000u;
    uint32_t _ea_081C3234 = _base_081C3234 + _off_081C3234;
    uint32_t _post_081C3234 = _base_081C3234 + _off_081C3234;
    _cyc_081C3234 += runtime_mem_cycles(_ea_081C3234, 1u, 0u);
    uint32_t _v_081C3234;
    _v_081C3234 = bus_read_u8(_ea_081C3234);
    g_cpu.R[1] = _v_081C3234;
    g_cpu.R[15] = 0x081C3236u;
    runtime_tick(_cyc_081C3234);
    /* 081C3236  081c3236 T adds r0,r1,r2 */
    g_cpu.R[15] = 0x081C3236u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3236 = 1u;
    _cyc_081C3236 = 1u;
    uint32_t _rm_081C3236 = g_cpu.R[2];
    uint32_t _op2_081C3236;
    uint32_t _co_081C3236;
    _op2_081C3236 = _rm_081C3236;
    _co_081C3236 = cpsr_c();
    uint32_t _rn_081C3236 = g_cpu.R[1];
    uint32_t _r_081C3236;
    _r_081C3236 = _rn_081C3236 + _op2_081C3236;
    arm_set_nzcv_add(_rn_081C3236, _op2_081C3236, _r_081C3236);
    g_cpu.R[0] = _r_081C3236;
    g_cpu.R[15] = 0x081C3238u;
    runtime_tick(_cyc_081C3236);
    /* 081C3238  081c3238 T strb r0,[r3] */
    g_cpu.R[15] = 0x081C3238u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3238 = 1u;
    _cyc_081C3238 = 1u;
    uint32_t _base_081C3238 = g_cpu.R[3];
    uint32_t _off_081C3238;
    _off_081C3238 = 0x00000000u;
    uint32_t _ea_081C3238 = _base_081C3238 + _off_081C3238;
    uint32_t _post_081C3238 = _base_081C3238 + _off_081C3238;
    _cyc_081C3238 += runtime_mem_cycles(_ea_081C3238, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C3238u, _ea_081C3238, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_081C3238, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x081C323Au;
    runtime_tick(_cyc_081C3238);
    /* 081C323A  081c323a T b 0x081c3306 */
    g_cpu.R[15] = 0x081C323Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C323A = 1u;
    _cyc_081C323A = 3u;
    g_cpu.R[15] = 0x081C3306u;
    runtime_tick(_cyc_081C323A);
    gf_memory_reads_thumb_at_081C3306();
    return;
    g_cpu.R[15] = 0x081C323Cu;
    runtime_tick(_cyc_081C323A);
    /* fall-through to 0x081C323C */
    g_cpu.R[15] = 0x081C323Cu;
    runtime_dispatch(0x081C323Cu);
    return;
}


/* 0x081C323C  mode=thumb  end=0x081C3244  branches=1 */
void gf_jump_table_entries_at_081C323C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C323Cu);
    /* 081C323C  081c323c T ldrb r1,[r3] */
    g_cpu.R[15] = 0x081C323Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C323C = 1u;
    _cyc_081C323C = 2u;
    uint32_t _base_081C323C = g_cpu.R[3];
    uint32_t _off_081C323C;
    _off_081C323C = 0x00000000u;
    uint32_t _ea_081C323C = _base_081C323C + _off_081C323C;
    uint32_t _post_081C323C = _base_081C323C + _off_081C323C;
    _cyc_081C323C += runtime_mem_cycles(_ea_081C323C, 1u, 0u);
    uint32_t _v_081C323C;
    _v_081C323C = bus_read_u8(_ea_081C323C);
    g_cpu.R[1] = _v_081C323C;
    g_cpu.R[15] = 0x081C323Eu;
    runtime_tick(_cyc_081C323C);
    /* 081C323E  081c323e T subs r0,r1,r2 */
    g_cpu.R[15] = 0x081C323Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C323E = 1u;
    _cyc_081C323E = 1u;
    uint32_t _rm_081C323E = g_cpu.R[2];
    uint32_t _op2_081C323E;
    uint32_t _co_081C323E;
    _op2_081C323E = _rm_081C323E;
    _co_081C323E = cpsr_c();
    uint32_t _rn_081C323E = g_cpu.R[1];
    uint32_t _r_081C323E;
    _r_081C323E = _rn_081C323E - _op2_081C323E;
    arm_set_nzcv_sub(_rn_081C323E, _op2_081C323E, _r_081C323E);
    g_cpu.R[0] = _r_081C323E;
    g_cpu.R[15] = 0x081C3240u;
    runtime_tick(_cyc_081C323E);
    /* 081C3240  081c3240 T strb r0,[r3] */
    g_cpu.R[15] = 0x081C3240u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3240 = 1u;
    _cyc_081C3240 = 1u;
    uint32_t _base_081C3240 = g_cpu.R[3];
    uint32_t _off_081C3240;
    _off_081C3240 = 0x00000000u;
    uint32_t _ea_081C3240 = _base_081C3240 + _off_081C3240;
    uint32_t _post_081C3240 = _base_081C3240 + _off_081C3240;
    _cyc_081C3240 += runtime_mem_cycles(_ea_081C3240, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C3240u, _ea_081C3240, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_081C3240, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x081C3242u;
    runtime_tick(_cyc_081C3240);
    /* 081C3242  081c3242 T b 0x081c3306 */
    g_cpu.R[15] = 0x081C3242u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3242 = 1u;
    _cyc_081C3242 = 3u;
    g_cpu.R[15] = 0x081C3306u;
    runtime_tick(_cyc_081C3242);
    gf_memory_reads_thumb_at_081C3306();
    return;
    g_cpu.R[15] = 0x081C3244u;
    runtime_tick(_cyc_081C3242);
    /* fall-through to 0x081C3244 */
    g_cpu.R[15] = 0x081C3244u;
    runtime_dispatch(0x081C3244u);
    return;
}


/* 0x081C3244  mode=thumb  end=0x081C324E  branches=1 */
void gf_jump_table_entries_at_081C3244(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C3244u);
    /* 081C3244  081c3244 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C3244u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3244 = 1u;
    _cyc_081C3244 = 2u;
    uint32_t _base_081C3244 = g_cpu.R[4];
    uint32_t _off_081C3244;
    _off_081C3244 = 0x00000018u;
    uint32_t _ea_081C3244 = _base_081C3244 + _off_081C3244;
    uint32_t _post_081C3244 = _base_081C3244 + _off_081C3244;
    _cyc_081C3244 += runtime_mem_cycles(_ea_081C3244, 4u, 0u);
    uint32_t _v_081C3244;
    { uint32_t _w = bus_read_u32(_ea_081C3244 & ~3u); uint32_t _rot = (_ea_081C3244 & 3u) * 8u; _v_081C3244 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C3244;
    g_cpu.R[15] = 0x081C3246u;
    runtime_tick(_cyc_081C3244);
    /* 081C3246  081c3246 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C3246u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3246 = 1u;
    _cyc_081C3246 = 1u;
    uint32_t _rm_081C3246 = g_cpu.R[2];
    uint32_t _op2_081C3246;
    uint32_t _co_081C3246;
    _op2_081C3246 = _rm_081C3246;
    _co_081C3246 = cpsr_c();
    uint32_t _rn_081C3246 = g_cpu.R[0];
    uint32_t _r_081C3246;
    _r_081C3246 = _rn_081C3246 + _op2_081C3246;
    arm_set_nzcv_add(_rn_081C3246, _op2_081C3246, _r_081C3246);
    g_cpu.R[0] = _r_081C3246;
    g_cpu.R[15] = 0x081C3248u;
    runtime_tick(_cyc_081C3246);
    /* 081C3248  081c3248 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C3248u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3248 = 1u;
    _cyc_081C3248 = 2u;
    uint32_t _base_081C3248 = g_cpu.R[0];
    uint32_t _off_081C3248;
    _off_081C3248 = 0x00000000u;
    uint32_t _ea_081C3248 = _base_081C3248 + _off_081C3248;
    uint32_t _post_081C3248 = _base_081C3248 + _off_081C3248;
    _cyc_081C3248 += runtime_mem_cycles(_ea_081C3248, 1u, 0u);
    uint32_t _v_081C3248;
    _v_081C3248 = bus_read_u8(_ea_081C3248);
    g_cpu.R[0] = _v_081C3248;
    g_cpu.R[15] = 0x081C324Au;
    runtime_tick(_cyc_081C3248);
    /* 081C324A  081c324a T strb r0,[r3] */
    g_cpu.R[15] = 0x081C324Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C324A = 1u;
    _cyc_081C324A = 1u;
    uint32_t _base_081C324A = g_cpu.R[3];
    uint32_t _off_081C324A;
    _off_081C324A = 0x00000000u;
    uint32_t _ea_081C324A = _base_081C324A + _off_081C324A;
    uint32_t _post_081C324A = _base_081C324A + _off_081C324A;
    _cyc_081C324A += runtime_mem_cycles(_ea_081C324A, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C324Au, _ea_081C324A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_081C324A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x081C324Cu;
    runtime_tick(_cyc_081C324A);
    /* 081C324C  081c324c T b 0x081c3306 */
    g_cpu.R[15] = 0x081C324Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C324C = 1u;
    _cyc_081C324C = 3u;
    g_cpu.R[15] = 0x081C3306u;
    runtime_tick(_cyc_081C324C);
    gf_memory_reads_thumb_at_081C3306();
    return;
    g_cpu.R[15] = 0x081C324Eu;
    runtime_tick(_cyc_081C324C);
    /* fall-through to 0x081C324E */
    g_cpu.R[15] = 0x081C324Eu;
    runtime_dispatch(0x081C324Eu);
    return;
}


/* 0x081C324E  mode=thumb  end=0x081C325C  branches=1 */
void gf_jump_table_entries_at_081C324E(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C324Eu);
    /* 081C324E  081c324e T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C324Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C324E = 1u;
    _cyc_081C324E = 2u;
    uint32_t _base_081C324E = g_cpu.R[4];
    uint32_t _off_081C324E;
    _off_081C324E = 0x00000018u;
    uint32_t _ea_081C324E = _base_081C324E + _off_081C324E;
    uint32_t _post_081C324E = _base_081C324E + _off_081C324E;
    _cyc_081C324E += runtime_mem_cycles(_ea_081C324E, 4u, 0u);
    uint32_t _v_081C324E;
    { uint32_t _w = bus_read_u32(_ea_081C324E & ~3u); uint32_t _rot = (_ea_081C324E & 3u) * 8u; _v_081C324E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C324E;
    g_cpu.R[15] = 0x081C3250u;
    runtime_tick(_cyc_081C324E);
    /* 081C3250  081c3250 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C3250u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3250 = 1u;
    _cyc_081C3250 = 1u;
    uint32_t _rm_081C3250 = g_cpu.R[2];
    uint32_t _op2_081C3250;
    uint32_t _co_081C3250;
    _op2_081C3250 = _rm_081C3250;
    _co_081C3250 = cpsr_c();
    uint32_t _rn_081C3250 = g_cpu.R[0];
    uint32_t _r_081C3250;
    _r_081C3250 = _rn_081C3250 + _op2_081C3250;
    arm_set_nzcv_add(_rn_081C3250, _op2_081C3250, _r_081C3250);
    g_cpu.R[0] = _r_081C3250;
    g_cpu.R[15] = 0x081C3252u;
    runtime_tick(_cyc_081C3250);
    /* 081C3252  081c3252 T ldrb r1,[r3] */
    g_cpu.R[15] = 0x081C3252u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3252 = 1u;
    _cyc_081C3252 = 2u;
    uint32_t _base_081C3252 = g_cpu.R[3];
    uint32_t _off_081C3252;
    _off_081C3252 = 0x00000000u;
    uint32_t _ea_081C3252 = _base_081C3252 + _off_081C3252;
    uint32_t _post_081C3252 = _base_081C3252 + _off_081C3252;
    _cyc_081C3252 += runtime_mem_cycles(_ea_081C3252, 1u, 0u);
    uint32_t _v_081C3252;
    _v_081C3252 = bus_read_u8(_ea_081C3252);
    g_cpu.R[1] = _v_081C3252;
    g_cpu.R[15] = 0x081C3254u;
    runtime_tick(_cyc_081C3252);
    /* 081C3254  081c3254 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C3254u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3254 = 1u;
    _cyc_081C3254 = 2u;
    uint32_t _base_081C3254 = g_cpu.R[0];
    uint32_t _off_081C3254;
    _off_081C3254 = 0x00000000u;
    uint32_t _ea_081C3254 = _base_081C3254 + _off_081C3254;
    uint32_t _post_081C3254 = _base_081C3254 + _off_081C3254;
    _cyc_081C3254 += runtime_mem_cycles(_ea_081C3254, 1u, 0u);
    uint32_t _v_081C3254;
    _v_081C3254 = bus_read_u8(_ea_081C3254);
    g_cpu.R[0] = _v_081C3254;
    g_cpu.R[15] = 0x081C3256u;
    runtime_tick(_cyc_081C3254);
    /* 081C3256  081c3256 T adds r0,r1,r0 */
    g_cpu.R[15] = 0x081C3256u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3256 = 1u;
    _cyc_081C3256 = 1u;
    uint32_t _rm_081C3256 = g_cpu.R[0];
    uint32_t _op2_081C3256;
    uint32_t _co_081C3256;
    _op2_081C3256 = _rm_081C3256;
    _co_081C3256 = cpsr_c();
    uint32_t _rn_081C3256 = g_cpu.R[1];
    uint32_t _r_081C3256;
    _r_081C3256 = _rn_081C3256 + _op2_081C3256;
    arm_set_nzcv_add(_rn_081C3256, _op2_081C3256, _r_081C3256);
    g_cpu.R[0] = _r_081C3256;
    g_cpu.R[15] = 0x081C3258u;
    runtime_tick(_cyc_081C3256);
    /* 081C3258  081c3258 T strb r0,[r3] */
    g_cpu.R[15] = 0x081C3258u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3258 = 1u;
    _cyc_081C3258 = 1u;
    uint32_t _base_081C3258 = g_cpu.R[3];
    uint32_t _off_081C3258;
    _off_081C3258 = 0x00000000u;
    uint32_t _ea_081C3258 = _base_081C3258 + _off_081C3258;
    uint32_t _post_081C3258 = _base_081C3258 + _off_081C3258;
    _cyc_081C3258 += runtime_mem_cycles(_ea_081C3258, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C3258u, _ea_081C3258, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_081C3258, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x081C325Au;
    runtime_tick(_cyc_081C3258);
    /* 081C325A  081c325a T b 0x081c3306 */
    g_cpu.R[15] = 0x081C325Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C325A = 1u;
    _cyc_081C325A = 3u;
    g_cpu.R[15] = 0x081C3306u;
    runtime_tick(_cyc_081C325A);
    gf_memory_reads_thumb_at_081C3306();
    return;
    g_cpu.R[15] = 0x081C325Cu;
    runtime_tick(_cyc_081C325A);
    /* fall-through to 0x081C325C */
    g_cpu.R[15] = 0x081C325Cu;
    runtime_dispatch(0x081C325Cu);
    return;
}


/* 0x081C325C  mode=thumb  end=0x081C326A  branches=1 */
void gf_jump_table_entries_at_081C325C(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C325Cu);
    /* 081C325C  081c325c T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C325Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C325C = 1u;
    _cyc_081C325C = 2u;
    uint32_t _base_081C325C = g_cpu.R[4];
    uint32_t _off_081C325C;
    _off_081C325C = 0x00000018u;
    uint32_t _ea_081C325C = _base_081C325C + _off_081C325C;
    uint32_t _post_081C325C = _base_081C325C + _off_081C325C;
    _cyc_081C325C += runtime_mem_cycles(_ea_081C325C, 4u, 0u);
    uint32_t _v_081C325C;
    { uint32_t _w = bus_read_u32(_ea_081C325C & ~3u); uint32_t _rot = (_ea_081C325C & 3u) * 8u; _v_081C325C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C325C;
    g_cpu.R[15] = 0x081C325Eu;
    runtime_tick(_cyc_081C325C);
    /* 081C325E  081c325e T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C325Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C325E = 1u;
    _cyc_081C325E = 1u;
    uint32_t _rm_081C325E = g_cpu.R[2];
    uint32_t _op2_081C325E;
    uint32_t _co_081C325E;
    _op2_081C325E = _rm_081C325E;
    _co_081C325E = cpsr_c();
    uint32_t _rn_081C325E = g_cpu.R[0];
    uint32_t _r_081C325E;
    _r_081C325E = _rn_081C325E + _op2_081C325E;
    arm_set_nzcv_add(_rn_081C325E, _op2_081C325E, _r_081C325E);
    g_cpu.R[0] = _r_081C325E;
    g_cpu.R[15] = 0x081C3260u;
    runtime_tick(_cyc_081C325E);
    /* 081C3260  081c3260 T ldrb r1,[r3] */
    g_cpu.R[15] = 0x081C3260u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3260 = 1u;
    _cyc_081C3260 = 2u;
    uint32_t _base_081C3260 = g_cpu.R[3];
    uint32_t _off_081C3260;
    _off_081C3260 = 0x00000000u;
    uint32_t _ea_081C3260 = _base_081C3260 + _off_081C3260;
    uint32_t _post_081C3260 = _base_081C3260 + _off_081C3260;
    _cyc_081C3260 += runtime_mem_cycles(_ea_081C3260, 1u, 0u);
    uint32_t _v_081C3260;
    _v_081C3260 = bus_read_u8(_ea_081C3260);
    g_cpu.R[1] = _v_081C3260;
    g_cpu.R[15] = 0x081C3262u;
    runtime_tick(_cyc_081C3260);
    /* 081C3262  081c3262 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C3262u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3262 = 1u;
    _cyc_081C3262 = 2u;
    uint32_t _base_081C3262 = g_cpu.R[0];
    uint32_t _off_081C3262;
    _off_081C3262 = 0x00000000u;
    uint32_t _ea_081C3262 = _base_081C3262 + _off_081C3262;
    uint32_t _post_081C3262 = _base_081C3262 + _off_081C3262;
    _cyc_081C3262 += runtime_mem_cycles(_ea_081C3262, 1u, 0u);
    uint32_t _v_081C3262;
    _v_081C3262 = bus_read_u8(_ea_081C3262);
    g_cpu.R[0] = _v_081C3262;
    g_cpu.R[15] = 0x081C3264u;
    runtime_tick(_cyc_081C3262);
    /* 081C3264  081c3264 T subs r0,r1,r0 */
    g_cpu.R[15] = 0x081C3264u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3264 = 1u;
    _cyc_081C3264 = 1u;
    uint32_t _rm_081C3264 = g_cpu.R[0];
    uint32_t _op2_081C3264;
    uint32_t _co_081C3264;
    _op2_081C3264 = _rm_081C3264;
    _co_081C3264 = cpsr_c();
    uint32_t _rn_081C3264 = g_cpu.R[1];
    uint32_t _r_081C3264;
    _r_081C3264 = _rn_081C3264 - _op2_081C3264;
    arm_set_nzcv_sub(_rn_081C3264, _op2_081C3264, _r_081C3264);
    g_cpu.R[0] = _r_081C3264;
    g_cpu.R[15] = 0x081C3266u;
    runtime_tick(_cyc_081C3264);
    /* 081C3266  081c3266 T strb r0,[r3] */
    g_cpu.R[15] = 0x081C3266u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3266 = 1u;
    _cyc_081C3266 = 1u;
    uint32_t _base_081C3266 = g_cpu.R[3];
    uint32_t _off_081C3266;
    _off_081C3266 = 0x00000000u;
    uint32_t _ea_081C3266 = _base_081C3266 + _off_081C3266;
    uint32_t _post_081C3266 = _base_081C3266 + _off_081C3266;
    _cyc_081C3266 += runtime_mem_cycles(_ea_081C3266, 1u, 0u);
    runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x081C3266u, _ea_081C3266, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_081C3266, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x081C3268u;
    runtime_tick(_cyc_081C3266);
    /* 081C3268  081c3268 T b 0x081c3306 */
    g_cpu.R[15] = 0x081C3268u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3268 = 1u;
    _cyc_081C3268 = 3u;
    g_cpu.R[15] = 0x081C3306u;
    runtime_tick(_cyc_081C3268);
    gf_memory_reads_thumb_at_081C3306();
    return;
    g_cpu.R[15] = 0x081C326Au;
    runtime_tick(_cyc_081C3268);
    /* fall-through to 0x081C326A */
    g_cpu.R[15] = 0x081C326Au;
    runtime_dispatch(0x081C326Au);
    return;
}


/* 0x081C326A  mode=thumb  end=0x081C3272  branches=2 */
void gf_jump_table_entries_at_081C326A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C326Au);
    /* 081C326A  081c326a T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C326Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C326A = 1u;
    _cyc_081C326A = 2u;
    uint32_t _base_081C326A = g_cpu.R[3];
    uint32_t _off_081C326A;
    _off_081C326A = 0x00000000u;
    uint32_t _ea_081C326A = _base_081C326A + _off_081C326A;
    uint32_t _post_081C326A = _base_081C326A + _off_081C326A;
    _cyc_081C326A += runtime_mem_cycles(_ea_081C326A, 1u, 0u);
    uint32_t _v_081C326A;
    _v_081C326A = bus_read_u8(_ea_081C326A);
    g_cpu.R[3] = _v_081C326A;
    g_cpu.R[15] = 0x081C326Cu;
    runtime_tick(_cyc_081C326A);
    /* 081C326C  081c326c T cmps r3,r2 */
    g_cpu.R[15] = 0x081C326Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C326C = 1u;
    _cyc_081C326C = 1u;
    uint32_t _rm_081C326C = g_cpu.R[2];
    uint32_t _op2_081C326C;
    uint32_t _co_081C326C;
    _op2_081C326C = _rm_081C326C;
    _co_081C326C = cpsr_c();
    uint32_t _rn_081C326C = g_cpu.R[3];
    uint32_t _r_081C326C;
    _r_081C326C = _rn_081C326C - _op2_081C326C;
    arm_set_nzcv_sub(_rn_081C326C, _op2_081C326C, _r_081C326C);
    g_cpu.R[15] = 0x081C326Eu;
    runtime_tick(_cyc_081C326C);
    /* 081C326E  081c326e T beq 0x081c32ec */
    g_cpu.R[15] = 0x081C326Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C326E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C326E = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C326E);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C3270u;
    runtime_tick(_cyc_081C326E);
    /* 081C3270  081c3270 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C3270u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3270 = 1u;
    _cyc_081C3270 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C3270);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C3272u;
    runtime_tick(_cyc_081C3270);
    /* fall-through to 0x081C3272 */
    g_cpu.R[15] = 0x081C3272u;
    runtime_dispatch(0x081C3272u);
    return;
}


/* 0x081C3272  mode=thumb  end=0x081C327A  branches=2 */
void gf_jump_table_entries_at_081C3272(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C3272u);
    /* 081C3272  081c3272 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C3272u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3272 = 1u;
    _cyc_081C3272 = 2u;
    uint32_t _base_081C3272 = g_cpu.R[3];
    uint32_t _off_081C3272;
    _off_081C3272 = 0x00000000u;
    uint32_t _ea_081C3272 = _base_081C3272 + _off_081C3272;
    uint32_t _post_081C3272 = _base_081C3272 + _off_081C3272;
    _cyc_081C3272 += runtime_mem_cycles(_ea_081C3272, 1u, 0u);
    uint32_t _v_081C3272;
    _v_081C3272 = bus_read_u8(_ea_081C3272);
    g_cpu.R[3] = _v_081C3272;
    g_cpu.R[15] = 0x081C3274u;
    runtime_tick(_cyc_081C3272);
    /* 081C3274  081c3274 T cmps r3,r2 */
    g_cpu.R[15] = 0x081C3274u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3274 = 1u;
    _cyc_081C3274 = 1u;
    uint32_t _rm_081C3274 = g_cpu.R[2];
    uint32_t _op2_081C3274;
    uint32_t _co_081C3274;
    _op2_081C3274 = _rm_081C3274;
    _co_081C3274 = cpsr_c();
    uint32_t _rn_081C3274 = g_cpu.R[3];
    uint32_t _r_081C3274;
    _r_081C3274 = _rn_081C3274 - _op2_081C3274;
    arm_set_nzcv_sub(_rn_081C3274, _op2_081C3274, _r_081C3274);
    g_cpu.R[15] = 0x081C3276u;
    runtime_tick(_cyc_081C3274);
    /* 081C3276  081c3276 T bne 0x081c32ec */
    g_cpu.R[15] = 0x081C3276u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3276 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081C3276 = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C3276);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C3278u;
    runtime_tick(_cyc_081C3276);
    /* 081C3278  081c3278 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C3278u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3278 = 1u;
    _cyc_081C3278 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C3278);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C327Au;
    runtime_tick(_cyc_081C3278);
    /* fall-through to 0x081C327A */
    g_cpu.R[15] = 0x081C327Au;
    runtime_dispatch(0x081C327Au);
    return;
}


/* 0x081C327A  mode=thumb  end=0x081C3282  branches=2 */
void gf_jump_table_entries_at_081C327A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C327Au);
    /* 081C327A  081c327a T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C327Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C327A = 1u;
    _cyc_081C327A = 2u;
    uint32_t _base_081C327A = g_cpu.R[3];
    uint32_t _off_081C327A;
    _off_081C327A = 0x00000000u;
    uint32_t _ea_081C327A = _base_081C327A + _off_081C327A;
    uint32_t _post_081C327A = _base_081C327A + _off_081C327A;
    _cyc_081C327A += runtime_mem_cycles(_ea_081C327A, 1u, 0u);
    uint32_t _v_081C327A;
    _v_081C327A = bus_read_u8(_ea_081C327A);
    g_cpu.R[3] = _v_081C327A;
    g_cpu.R[15] = 0x081C327Cu;
    runtime_tick(_cyc_081C327A);
    /* 081C327C  081c327c T cmps r3,r2 */
    g_cpu.R[15] = 0x081C327Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C327C = 1u;
    _cyc_081C327C = 1u;
    uint32_t _rm_081C327C = g_cpu.R[2];
    uint32_t _op2_081C327C;
    uint32_t _co_081C327C;
    _op2_081C327C = _rm_081C327C;
    _co_081C327C = cpsr_c();
    uint32_t _rn_081C327C = g_cpu.R[3];
    uint32_t _r_081C327C;
    _r_081C327C = _rn_081C327C - _op2_081C327C;
    arm_set_nzcv_sub(_rn_081C327C, _op2_081C327C, _r_081C327C);
    g_cpu.R[15] = 0x081C327Eu;
    runtime_tick(_cyc_081C327C);
    /* 081C327E  081c327e T bhi 0x081c32ec */
    g_cpu.R[15] = 0x081C327Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C327E = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_081C327E = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C327E);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C3280u;
    runtime_tick(_cyc_081C327E);
    /* 081C3280  081c3280 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C3280u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3280 = 1u;
    _cyc_081C3280 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C3280);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C3282u;
    runtime_tick(_cyc_081C3280);
    /* fall-through to 0x081C3282 */
    g_cpu.R[15] = 0x081C3282u;
    runtime_dispatch(0x081C3282u);
    return;
}


/* 0x081C3282  mode=thumb  end=0x081C328A  branches=2 */
void gf_jump_table_entries_at_081C3282(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C3282u);
    /* 081C3282  081c3282 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C3282u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3282 = 1u;
    _cyc_081C3282 = 2u;
    uint32_t _base_081C3282 = g_cpu.R[3];
    uint32_t _off_081C3282;
    _off_081C3282 = 0x00000000u;
    uint32_t _ea_081C3282 = _base_081C3282 + _off_081C3282;
    uint32_t _post_081C3282 = _base_081C3282 + _off_081C3282;
    _cyc_081C3282 += runtime_mem_cycles(_ea_081C3282, 1u, 0u);
    uint32_t _v_081C3282;
    _v_081C3282 = bus_read_u8(_ea_081C3282);
    g_cpu.R[3] = _v_081C3282;
    g_cpu.R[15] = 0x081C3284u;
    runtime_tick(_cyc_081C3282);
    /* 081C3284  081c3284 T cmps r3,r2 */
    g_cpu.R[15] = 0x081C3284u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3284 = 1u;
    _cyc_081C3284 = 1u;
    uint32_t _rm_081C3284 = g_cpu.R[2];
    uint32_t _op2_081C3284;
    uint32_t _co_081C3284;
    _op2_081C3284 = _rm_081C3284;
    _co_081C3284 = cpsr_c();
    uint32_t _rn_081C3284 = g_cpu.R[3];
    uint32_t _r_081C3284;
    _r_081C3284 = _rn_081C3284 - _op2_081C3284;
    arm_set_nzcv_sub(_rn_081C3284, _op2_081C3284, _r_081C3284);
    g_cpu.R[15] = 0x081C3286u;
    runtime_tick(_cyc_081C3284);
    /* 081C3286  081c3286 T bcs 0x081c32ec */
    g_cpu.R[15] = 0x081C3286u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3286 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_081C3286 = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C3286);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C3288u;
    runtime_tick(_cyc_081C3286);
    /* 081C3288  081c3288 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C3288u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3288 = 1u;
    _cyc_081C3288 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C3288);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C328Au;
    runtime_tick(_cyc_081C3288);
    /* fall-through to 0x081C328A */
    g_cpu.R[15] = 0x081C328Au;
    runtime_dispatch(0x081C328Au);
    return;
}


/* 0x081C328A  mode=thumb  end=0x081C3292  branches=2 */
void gf_jump_table_entries_at_081C328A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C328Au);
    /* 081C328A  081c328a T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C328Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C328A = 1u;
    _cyc_081C328A = 2u;
    uint32_t _base_081C328A = g_cpu.R[3];
    uint32_t _off_081C328A;
    _off_081C328A = 0x00000000u;
    uint32_t _ea_081C328A = _base_081C328A + _off_081C328A;
    uint32_t _post_081C328A = _base_081C328A + _off_081C328A;
    _cyc_081C328A += runtime_mem_cycles(_ea_081C328A, 1u, 0u);
    uint32_t _v_081C328A;
    _v_081C328A = bus_read_u8(_ea_081C328A);
    g_cpu.R[3] = _v_081C328A;
    g_cpu.R[15] = 0x081C328Cu;
    runtime_tick(_cyc_081C328A);
    /* 081C328C  081c328c T cmps r3,r2 */
    g_cpu.R[15] = 0x081C328Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C328C = 1u;
    _cyc_081C328C = 1u;
    uint32_t _rm_081C328C = g_cpu.R[2];
    uint32_t _op2_081C328C;
    uint32_t _co_081C328C;
    _op2_081C328C = _rm_081C328C;
    _co_081C328C = cpsr_c();
    uint32_t _rn_081C328C = g_cpu.R[3];
    uint32_t _r_081C328C;
    _r_081C328C = _rn_081C328C - _op2_081C328C;
    arm_set_nzcv_sub(_rn_081C328C, _op2_081C328C, _r_081C328C);
    g_cpu.R[15] = 0x081C328Eu;
    runtime_tick(_cyc_081C328C);
    /* 081C328E  081c328e T bls 0x081c32ec */
    g_cpu.R[15] = 0x081C328Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C328E = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_081C328E = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C328E);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C3290u;
    runtime_tick(_cyc_081C328E);
    /* 081C3290  081c3290 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C3290u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3290 = 1u;
    _cyc_081C3290 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C3290);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C3292u;
    runtime_tick(_cyc_081C3290);
    /* fall-through to 0x081C3292 */
    g_cpu.R[15] = 0x081C3292u;
    runtime_dispatch(0x081C3292u);
    return;
}


/* 0x081C3292  mode=thumb  end=0x081C329A  branches=2 */
void gf_jump_table_entries_at_081C3292(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C3292u);
    /* 081C3292  081c3292 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C3292u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3292 = 1u;
    _cyc_081C3292 = 2u;
    uint32_t _base_081C3292 = g_cpu.R[3];
    uint32_t _off_081C3292;
    _off_081C3292 = 0x00000000u;
    uint32_t _ea_081C3292 = _base_081C3292 + _off_081C3292;
    uint32_t _post_081C3292 = _base_081C3292 + _off_081C3292;
    _cyc_081C3292 += runtime_mem_cycles(_ea_081C3292, 1u, 0u);
    uint32_t _v_081C3292;
    _v_081C3292 = bus_read_u8(_ea_081C3292);
    g_cpu.R[3] = _v_081C3292;
    g_cpu.R[15] = 0x081C3294u;
    runtime_tick(_cyc_081C3292);
    /* 081C3294  081c3294 T cmps r3,r2 */
    g_cpu.R[15] = 0x081C3294u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3294 = 1u;
    _cyc_081C3294 = 1u;
    uint32_t _rm_081C3294 = g_cpu.R[2];
    uint32_t _op2_081C3294;
    uint32_t _co_081C3294;
    _op2_081C3294 = _rm_081C3294;
    _co_081C3294 = cpsr_c();
    uint32_t _rn_081C3294 = g_cpu.R[3];
    uint32_t _r_081C3294;
    _r_081C3294 = _rn_081C3294 - _op2_081C3294;
    arm_set_nzcv_sub(_rn_081C3294, _op2_081C3294, _r_081C3294);
    g_cpu.R[15] = 0x081C3296u;
    runtime_tick(_cyc_081C3294);
    /* 081C3296  081c3296 T bcc 0x081c32ec */
    g_cpu.R[15] = 0x081C3296u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3296 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_081C3296 = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C3296);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C3298u;
    runtime_tick(_cyc_081C3296);
    /* 081C3298  081c3298 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C3298u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C3298 = 1u;
    _cyc_081C3298 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C3298);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C329Au;
    runtime_tick(_cyc_081C3298);
    /* fall-through to 0x081C329A */
    g_cpu.R[15] = 0x081C329Au;
    runtime_dispatch(0x081C329Au);
    return;
}


/* 0x081C329A  mode=thumb  end=0x081C32A8  branches=2 */
void gf_jump_table_entries_at_081C329A(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C329Au);
    /* 081C329A  081c329a T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C329Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C329A = 1u;
    _cyc_081C329A = 2u;
    uint32_t _base_081C329A = g_cpu.R[4];
    uint32_t _off_081C329A;
    _off_081C329A = 0x00000018u;
    uint32_t _ea_081C329A = _base_081C329A + _off_081C329A;
    uint32_t _post_081C329A = _base_081C329A + _off_081C329A;
    _cyc_081C329A += runtime_mem_cycles(_ea_081C329A, 4u, 0u);
    uint32_t _v_081C329A;
    { uint32_t _w = bus_read_u32(_ea_081C329A & ~3u); uint32_t _rot = (_ea_081C329A & 3u) * 8u; _v_081C329A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C329A;
    g_cpu.R[15] = 0x081C329Cu;
    runtime_tick(_cyc_081C329A);
    /* 081C329C  081c329c T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C329Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C329C = 1u;
    _cyc_081C329C = 1u;
    uint32_t _rm_081C329C = g_cpu.R[2];
    uint32_t _op2_081C329C;
    uint32_t _co_081C329C;
    _op2_081C329C = _rm_081C329C;
    _co_081C329C = cpsr_c();
    uint32_t _rn_081C329C = g_cpu.R[0];
    uint32_t _r_081C329C;
    _r_081C329C = _rn_081C329C + _op2_081C329C;
    arm_set_nzcv_add(_rn_081C329C, _op2_081C329C, _r_081C329C);
    g_cpu.R[0] = _r_081C329C;
    g_cpu.R[15] = 0x081C329Eu;
    runtime_tick(_cyc_081C329C);
    /* 081C329E  081c329e T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C329Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C329E = 1u;
    _cyc_081C329E = 2u;
    uint32_t _base_081C329E = g_cpu.R[3];
    uint32_t _off_081C329E;
    _off_081C329E = 0x00000000u;
    uint32_t _ea_081C329E = _base_081C329E + _off_081C329E;
    uint32_t _post_081C329E = _base_081C329E + _off_081C329E;
    _cyc_081C329E += runtime_mem_cycles(_ea_081C329E, 1u, 0u);
    uint32_t _v_081C329E;
    _v_081C329E = bus_read_u8(_ea_081C329E);
    g_cpu.R[3] = _v_081C329E;
    g_cpu.R[15] = 0x081C32A0u;
    runtime_tick(_cyc_081C329E);
    /* 081C32A0  081c32a0 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C32A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32A0 = 1u;
    _cyc_081C32A0 = 2u;
    uint32_t _base_081C32A0 = g_cpu.R[0];
    uint32_t _off_081C32A0;
    _off_081C32A0 = 0x00000000u;
    uint32_t _ea_081C32A0 = _base_081C32A0 + _off_081C32A0;
    uint32_t _post_081C32A0 = _base_081C32A0 + _off_081C32A0;
    _cyc_081C32A0 += runtime_mem_cycles(_ea_081C32A0, 1u, 0u);
    uint32_t _v_081C32A0;
    _v_081C32A0 = bus_read_u8(_ea_081C32A0);
    g_cpu.R[0] = _v_081C32A0;
    g_cpu.R[15] = 0x081C32A2u;
    runtime_tick(_cyc_081C32A0);
    /* 081C32A2  081c32a2 T cmps r3,r0 */
    g_cpu.R[15] = 0x081C32A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32A2 = 1u;
    _cyc_081C32A2 = 1u;
    uint32_t _rm_081C32A2 = g_cpu.R[0];
    uint32_t _op2_081C32A2;
    uint32_t _co_081C32A2;
    _op2_081C32A2 = _rm_081C32A2;
    _co_081C32A2 = cpsr_c();
    uint32_t _rn_081C32A2 = g_cpu.R[3];
    uint32_t _r_081C32A2;
    _r_081C32A2 = _rn_081C32A2 - _op2_081C32A2;
    arm_set_nzcv_sub(_rn_081C32A2, _op2_081C32A2, _r_081C32A2);
    g_cpu.R[15] = 0x081C32A4u;
    runtime_tick(_cyc_081C32A2);
    /* 081C32A4  081c32a4 T beq 0x081c32ec */
    g_cpu.R[15] = 0x081C32A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32A4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_081C32A4 = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C32A4);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C32A6u;
    runtime_tick(_cyc_081C32A4);
    /* 081C32A6  081c32a6 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C32A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32A6 = 1u;
    _cyc_081C32A6 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C32A6);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C32A8u;
    runtime_tick(_cyc_081C32A6);
    /* fall-through to 0x081C32A8 */
    g_cpu.R[15] = 0x081C32A8u;
    runtime_dispatch(0x081C32A8u);
    return;
}


/* 0x081C32A8  mode=thumb  end=0x081C32B6  branches=2 */
void gf_jump_table_entries_at_081C32A8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C32A8u);
    /* 081C32A8  081c32a8 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C32A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32A8 = 1u;
    _cyc_081C32A8 = 2u;
    uint32_t _base_081C32A8 = g_cpu.R[4];
    uint32_t _off_081C32A8;
    _off_081C32A8 = 0x00000018u;
    uint32_t _ea_081C32A8 = _base_081C32A8 + _off_081C32A8;
    uint32_t _post_081C32A8 = _base_081C32A8 + _off_081C32A8;
    _cyc_081C32A8 += runtime_mem_cycles(_ea_081C32A8, 4u, 0u);
    uint32_t _v_081C32A8;
    { uint32_t _w = bus_read_u32(_ea_081C32A8 & ~3u); uint32_t _rot = (_ea_081C32A8 & 3u) * 8u; _v_081C32A8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C32A8;
    g_cpu.R[15] = 0x081C32AAu;
    runtime_tick(_cyc_081C32A8);
    /* 081C32AA  081c32aa T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C32AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32AA = 1u;
    _cyc_081C32AA = 1u;
    uint32_t _rm_081C32AA = g_cpu.R[2];
    uint32_t _op2_081C32AA;
    uint32_t _co_081C32AA;
    _op2_081C32AA = _rm_081C32AA;
    _co_081C32AA = cpsr_c();
    uint32_t _rn_081C32AA = g_cpu.R[0];
    uint32_t _r_081C32AA;
    _r_081C32AA = _rn_081C32AA + _op2_081C32AA;
    arm_set_nzcv_add(_rn_081C32AA, _op2_081C32AA, _r_081C32AA);
    g_cpu.R[0] = _r_081C32AA;
    g_cpu.R[15] = 0x081C32ACu;
    runtime_tick(_cyc_081C32AA);
    /* 081C32AC  081c32ac T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C32ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32AC = 1u;
    _cyc_081C32AC = 2u;
    uint32_t _base_081C32AC = g_cpu.R[3];
    uint32_t _off_081C32AC;
    _off_081C32AC = 0x00000000u;
    uint32_t _ea_081C32AC = _base_081C32AC + _off_081C32AC;
    uint32_t _post_081C32AC = _base_081C32AC + _off_081C32AC;
    _cyc_081C32AC += runtime_mem_cycles(_ea_081C32AC, 1u, 0u);
    uint32_t _v_081C32AC;
    _v_081C32AC = bus_read_u8(_ea_081C32AC);
    g_cpu.R[3] = _v_081C32AC;
    g_cpu.R[15] = 0x081C32AEu;
    runtime_tick(_cyc_081C32AC);
    /* 081C32AE  081c32ae T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C32AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32AE = 1u;
    _cyc_081C32AE = 2u;
    uint32_t _base_081C32AE = g_cpu.R[0];
    uint32_t _off_081C32AE;
    _off_081C32AE = 0x00000000u;
    uint32_t _ea_081C32AE = _base_081C32AE + _off_081C32AE;
    uint32_t _post_081C32AE = _base_081C32AE + _off_081C32AE;
    _cyc_081C32AE += runtime_mem_cycles(_ea_081C32AE, 1u, 0u);
    uint32_t _v_081C32AE;
    _v_081C32AE = bus_read_u8(_ea_081C32AE);
    g_cpu.R[0] = _v_081C32AE;
    g_cpu.R[15] = 0x081C32B0u;
    runtime_tick(_cyc_081C32AE);
    /* 081C32B0  081c32b0 T cmps r3,r0 */
    g_cpu.R[15] = 0x081C32B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32B0 = 1u;
    _cyc_081C32B0 = 1u;
    uint32_t _rm_081C32B0 = g_cpu.R[0];
    uint32_t _op2_081C32B0;
    uint32_t _co_081C32B0;
    _op2_081C32B0 = _rm_081C32B0;
    _co_081C32B0 = cpsr_c();
    uint32_t _rn_081C32B0 = g_cpu.R[3];
    uint32_t _r_081C32B0;
    _r_081C32B0 = _rn_081C32B0 - _op2_081C32B0;
    arm_set_nzcv_sub(_rn_081C32B0, _op2_081C32B0, _r_081C32B0);
    g_cpu.R[15] = 0x081C32B2u;
    runtime_tick(_cyc_081C32B0);
    /* 081C32B2  081c32b2 T bne 0x081c32ec */
    g_cpu.R[15] = 0x081C32B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32B2 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_081C32B2 = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C32B2);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C32B4u;
    runtime_tick(_cyc_081C32B2);
    /* 081C32B4  081c32b4 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C32B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32B4 = 1u;
    _cyc_081C32B4 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C32B4);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C32B6u;
    runtime_tick(_cyc_081C32B4);
    /* fall-through to 0x081C32B6 */
    g_cpu.R[15] = 0x081C32B6u;
    runtime_dispatch(0x081C32B6u);
    return;
}


/* 0x081C32B6  mode=thumb  end=0x081C32C4  branches=2 */
void gf_jump_table_entries_at_081C32B6(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C32B6u);
    /* 081C32B6  081c32b6 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C32B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32B6 = 1u;
    _cyc_081C32B6 = 2u;
    uint32_t _base_081C32B6 = g_cpu.R[4];
    uint32_t _off_081C32B6;
    _off_081C32B6 = 0x00000018u;
    uint32_t _ea_081C32B6 = _base_081C32B6 + _off_081C32B6;
    uint32_t _post_081C32B6 = _base_081C32B6 + _off_081C32B6;
    _cyc_081C32B6 += runtime_mem_cycles(_ea_081C32B6, 4u, 0u);
    uint32_t _v_081C32B6;
    { uint32_t _w = bus_read_u32(_ea_081C32B6 & ~3u); uint32_t _rot = (_ea_081C32B6 & 3u) * 8u; _v_081C32B6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C32B6;
    g_cpu.R[15] = 0x081C32B8u;
    runtime_tick(_cyc_081C32B6);
    /* 081C32B8  081c32b8 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C32B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32B8 = 1u;
    _cyc_081C32B8 = 1u;
    uint32_t _rm_081C32B8 = g_cpu.R[2];
    uint32_t _op2_081C32B8;
    uint32_t _co_081C32B8;
    _op2_081C32B8 = _rm_081C32B8;
    _co_081C32B8 = cpsr_c();
    uint32_t _rn_081C32B8 = g_cpu.R[0];
    uint32_t _r_081C32B8;
    _r_081C32B8 = _rn_081C32B8 + _op2_081C32B8;
    arm_set_nzcv_add(_rn_081C32B8, _op2_081C32B8, _r_081C32B8);
    g_cpu.R[0] = _r_081C32B8;
    g_cpu.R[15] = 0x081C32BAu;
    runtime_tick(_cyc_081C32B8);
    /* 081C32BA  081c32ba T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C32BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32BA = 1u;
    _cyc_081C32BA = 2u;
    uint32_t _base_081C32BA = g_cpu.R[3];
    uint32_t _off_081C32BA;
    _off_081C32BA = 0x00000000u;
    uint32_t _ea_081C32BA = _base_081C32BA + _off_081C32BA;
    uint32_t _post_081C32BA = _base_081C32BA + _off_081C32BA;
    _cyc_081C32BA += runtime_mem_cycles(_ea_081C32BA, 1u, 0u);
    uint32_t _v_081C32BA;
    _v_081C32BA = bus_read_u8(_ea_081C32BA);
    g_cpu.R[3] = _v_081C32BA;
    g_cpu.R[15] = 0x081C32BCu;
    runtime_tick(_cyc_081C32BA);
    /* 081C32BC  081c32bc T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C32BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32BC = 1u;
    _cyc_081C32BC = 2u;
    uint32_t _base_081C32BC = g_cpu.R[0];
    uint32_t _off_081C32BC;
    _off_081C32BC = 0x00000000u;
    uint32_t _ea_081C32BC = _base_081C32BC + _off_081C32BC;
    uint32_t _post_081C32BC = _base_081C32BC + _off_081C32BC;
    _cyc_081C32BC += runtime_mem_cycles(_ea_081C32BC, 1u, 0u);
    uint32_t _v_081C32BC;
    _v_081C32BC = bus_read_u8(_ea_081C32BC);
    g_cpu.R[0] = _v_081C32BC;
    g_cpu.R[15] = 0x081C32BEu;
    runtime_tick(_cyc_081C32BC);
    /* 081C32BE  081c32be T cmps r3,r0 */
    g_cpu.R[15] = 0x081C32BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32BE = 1u;
    _cyc_081C32BE = 1u;
    uint32_t _rm_081C32BE = g_cpu.R[0];
    uint32_t _op2_081C32BE;
    uint32_t _co_081C32BE;
    _op2_081C32BE = _rm_081C32BE;
    _co_081C32BE = cpsr_c();
    uint32_t _rn_081C32BE = g_cpu.R[3];
    uint32_t _r_081C32BE;
    _r_081C32BE = _rn_081C32BE - _op2_081C32BE;
    arm_set_nzcv_sub(_rn_081C32BE, _op2_081C32BE, _r_081C32BE);
    g_cpu.R[15] = 0x081C32C0u;
    runtime_tick(_cyc_081C32BE);
    /* 081C32C0  081c32c0 T bhi 0x081c32ec */
    g_cpu.R[15] = 0x081C32C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32C0 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_081C32C0 = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C32C0);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C32C2u;
    runtime_tick(_cyc_081C32C0);
    /* 081C32C2  081c32c2 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C32C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32C2 = 1u;
    _cyc_081C32C2 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C32C2);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C32C4u;
    runtime_tick(_cyc_081C32C2);
    /* fall-through to 0x081C32C4 */
    g_cpu.R[15] = 0x081C32C4u;
    runtime_dispatch(0x081C32C4u);
    return;
}


/* 0x081C32C4  mode=thumb  end=0x081C32D2  branches=2 */
void gf_jump_table_entries_at_081C32C4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C32C4u);
    /* 081C32C4  081c32c4 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C32C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32C4 = 1u;
    _cyc_081C32C4 = 2u;
    uint32_t _base_081C32C4 = g_cpu.R[4];
    uint32_t _off_081C32C4;
    _off_081C32C4 = 0x00000018u;
    uint32_t _ea_081C32C4 = _base_081C32C4 + _off_081C32C4;
    uint32_t _post_081C32C4 = _base_081C32C4 + _off_081C32C4;
    _cyc_081C32C4 += runtime_mem_cycles(_ea_081C32C4, 4u, 0u);
    uint32_t _v_081C32C4;
    { uint32_t _w = bus_read_u32(_ea_081C32C4 & ~3u); uint32_t _rot = (_ea_081C32C4 & 3u) * 8u; _v_081C32C4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C32C4;
    g_cpu.R[15] = 0x081C32C6u;
    runtime_tick(_cyc_081C32C4);
    /* 081C32C6  081c32c6 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C32C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32C6 = 1u;
    _cyc_081C32C6 = 1u;
    uint32_t _rm_081C32C6 = g_cpu.R[2];
    uint32_t _op2_081C32C6;
    uint32_t _co_081C32C6;
    _op2_081C32C6 = _rm_081C32C6;
    _co_081C32C6 = cpsr_c();
    uint32_t _rn_081C32C6 = g_cpu.R[0];
    uint32_t _r_081C32C6;
    _r_081C32C6 = _rn_081C32C6 + _op2_081C32C6;
    arm_set_nzcv_add(_rn_081C32C6, _op2_081C32C6, _r_081C32C6);
    g_cpu.R[0] = _r_081C32C6;
    g_cpu.R[15] = 0x081C32C8u;
    runtime_tick(_cyc_081C32C6);
    /* 081C32C8  081c32c8 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C32C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32C8 = 1u;
    _cyc_081C32C8 = 2u;
    uint32_t _base_081C32C8 = g_cpu.R[3];
    uint32_t _off_081C32C8;
    _off_081C32C8 = 0x00000000u;
    uint32_t _ea_081C32C8 = _base_081C32C8 + _off_081C32C8;
    uint32_t _post_081C32C8 = _base_081C32C8 + _off_081C32C8;
    _cyc_081C32C8 += runtime_mem_cycles(_ea_081C32C8, 1u, 0u);
    uint32_t _v_081C32C8;
    _v_081C32C8 = bus_read_u8(_ea_081C32C8);
    g_cpu.R[3] = _v_081C32C8;
    g_cpu.R[15] = 0x081C32CAu;
    runtime_tick(_cyc_081C32C8);
    /* 081C32CA  081c32ca T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C32CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32CA = 1u;
    _cyc_081C32CA = 2u;
    uint32_t _base_081C32CA = g_cpu.R[0];
    uint32_t _off_081C32CA;
    _off_081C32CA = 0x00000000u;
    uint32_t _ea_081C32CA = _base_081C32CA + _off_081C32CA;
    uint32_t _post_081C32CA = _base_081C32CA + _off_081C32CA;
    _cyc_081C32CA += runtime_mem_cycles(_ea_081C32CA, 1u, 0u);
    uint32_t _v_081C32CA;
    _v_081C32CA = bus_read_u8(_ea_081C32CA);
    g_cpu.R[0] = _v_081C32CA;
    g_cpu.R[15] = 0x081C32CCu;
    runtime_tick(_cyc_081C32CA);
    /* 081C32CC  081c32cc T cmps r3,r0 */
    g_cpu.R[15] = 0x081C32CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32CC = 1u;
    _cyc_081C32CC = 1u;
    uint32_t _rm_081C32CC = g_cpu.R[0];
    uint32_t _op2_081C32CC;
    uint32_t _co_081C32CC;
    _op2_081C32CC = _rm_081C32CC;
    _co_081C32CC = cpsr_c();
    uint32_t _rn_081C32CC = g_cpu.R[3];
    uint32_t _r_081C32CC;
    _r_081C32CC = _rn_081C32CC - _op2_081C32CC;
    arm_set_nzcv_sub(_rn_081C32CC, _op2_081C32CC, _r_081C32CC);
    g_cpu.R[15] = 0x081C32CEu;
    runtime_tick(_cyc_081C32CC);
    /* 081C32CE  081c32ce T bcs 0x081c32ec */
    g_cpu.R[15] = 0x081C32CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32CE = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_081C32CE = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C32CE);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C32D0u;
    runtime_tick(_cyc_081C32CE);
    /* 081C32D0  081c32d0 T b 0x081c3300 */
    g_cpu.R[15] = 0x081C32D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32D0 = 1u;
    _cyc_081C32D0 = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C32D0);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C32D2u;
    runtime_tick(_cyc_081C32D0);
    /* fall-through to 0x081C32D2 */
    g_cpu.R[15] = 0x081C32D2u;
    runtime_dispatch(0x081C32D2u);
    return;
}


/* 0x081C32D2  mode=thumb  end=0x081C32E0  branches=2 */
void gf_jump_table_entries_at_081C32D2(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C32D2u);
    /* 081C32D2  081c32d2 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C32D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32D2 = 1u;
    _cyc_081C32D2 = 2u;
    uint32_t _base_081C32D2 = g_cpu.R[4];
    uint32_t _off_081C32D2;
    _off_081C32D2 = 0x00000018u;
    uint32_t _ea_081C32D2 = _base_081C32D2 + _off_081C32D2;
    uint32_t _post_081C32D2 = _base_081C32D2 + _off_081C32D2;
    _cyc_081C32D2 += runtime_mem_cycles(_ea_081C32D2, 4u, 0u);
    uint32_t _v_081C32D2;
    { uint32_t _w = bus_read_u32(_ea_081C32D2 & ~3u); uint32_t _rot = (_ea_081C32D2 & 3u) * 8u; _v_081C32D2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C32D2;
    g_cpu.R[15] = 0x081C32D4u;
    runtime_tick(_cyc_081C32D2);
    /* 081C32D4  081c32d4 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C32D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32D4 = 1u;
    _cyc_081C32D4 = 1u;
    uint32_t _rm_081C32D4 = g_cpu.R[2];
    uint32_t _op2_081C32D4;
    uint32_t _co_081C32D4;
    _op2_081C32D4 = _rm_081C32D4;
    _co_081C32D4 = cpsr_c();
    uint32_t _rn_081C32D4 = g_cpu.R[0];
    uint32_t _r_081C32D4;
    _r_081C32D4 = _rn_081C32D4 + _op2_081C32D4;
    arm_set_nzcv_add(_rn_081C32D4, _op2_081C32D4, _r_081C32D4);
    g_cpu.R[0] = _r_081C32D4;
    g_cpu.R[15] = 0x081C32D6u;
    runtime_tick(_cyc_081C32D4);
    /* 081C32D6  081c32d6 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C32D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32D6 = 1u;
    _cyc_081C32D6 = 2u;
    uint32_t _base_081C32D6 = g_cpu.R[3];
    uint32_t _off_081C32D6;
    _off_081C32D6 = 0x00000000u;
    uint32_t _ea_081C32D6 = _base_081C32D6 + _off_081C32D6;
    uint32_t _post_081C32D6 = _base_081C32D6 + _off_081C32D6;
    _cyc_081C32D6 += runtime_mem_cycles(_ea_081C32D6, 1u, 0u);
    uint32_t _v_081C32D6;
    _v_081C32D6 = bus_read_u8(_ea_081C32D6);
    g_cpu.R[3] = _v_081C32D6;
    g_cpu.R[15] = 0x081C32D8u;
    runtime_tick(_cyc_081C32D6);
    /* 081C32D8  081c32d8 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C32D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32D8 = 1u;
    _cyc_081C32D8 = 2u;
    uint32_t _base_081C32D8 = g_cpu.R[0];
    uint32_t _off_081C32D8;
    _off_081C32D8 = 0x00000000u;
    uint32_t _ea_081C32D8 = _base_081C32D8 + _off_081C32D8;
    uint32_t _post_081C32D8 = _base_081C32D8 + _off_081C32D8;
    _cyc_081C32D8 += runtime_mem_cycles(_ea_081C32D8, 1u, 0u);
    uint32_t _v_081C32D8;
    _v_081C32D8 = bus_read_u8(_ea_081C32D8);
    g_cpu.R[0] = _v_081C32D8;
    g_cpu.R[15] = 0x081C32DAu;
    runtime_tick(_cyc_081C32D8);
    /* 081C32DA  081c32da T cmps r3,r0 */
    g_cpu.R[15] = 0x081C32DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32DA = 1u;
    _cyc_081C32DA = 1u;
    uint32_t _rm_081C32DA = g_cpu.R[0];
    uint32_t _op2_081C32DA;
    uint32_t _co_081C32DA;
    _op2_081C32DA = _rm_081C32DA;
    _co_081C32DA = cpsr_c();
    uint32_t _rn_081C32DA = g_cpu.R[3];
    uint32_t _r_081C32DA;
    _r_081C32DA = _rn_081C32DA - _op2_081C32DA;
    arm_set_nzcv_sub(_rn_081C32DA, _op2_081C32DA, _r_081C32DA);
    g_cpu.R[15] = 0x081C32DCu;
    runtime_tick(_cyc_081C32DA);
    /* 081C32DC  081c32dc T bls 0x081c32ec */
    g_cpu.R[15] = 0x081C32DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32DC = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_081C32DC = 3u;
        g_cpu.R[15] = 0x081C32ECu;
        runtime_tick(_cyc_081C32DC);
        gf_memory_reads_thumb_at_081C32EC();
        return;
    }
    g_cpu.R[15] = 0x081C32DEu;
    runtime_tick(_cyc_081C32DC);
    /* 081C32DE  081c32de T b 0x081c3300 */
    g_cpu.R[15] = 0x081C32DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32DE = 1u;
    _cyc_081C32DE = 3u;
    g_cpu.R[15] = 0x081C3300u;
    runtime_tick(_cyc_081C32DE);
    gf_memory_transfer_thumb_at_081C3300();
    return;
    g_cpu.R[15] = 0x081C32E0u;
    runtime_tick(_cyc_081C32DE);
    /* fall-through to 0x081C32E0 */
    g_cpu.R[15] = 0x081C32E0u;
    runtime_dispatch(0x081C32E0u);
    return;
}


/* 0x081C32E0  mode=thumb  end=0x081C32EC  branches=4 */
void gf_jump_table_entries_at_081C32E0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x081C32E0u);
    /* 081C32E0  081c32e0 T ldr r0,[r4,#0x18] */
    g_cpu.R[15] = 0x081C32E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32E0 = 1u;
    _cyc_081C32E0 = 2u;
    uint32_t _base_081C32E0 = g_cpu.R[4];
    uint32_t _off_081C32E0;
    _off_081C32E0 = 0x00000018u;
    uint32_t _ea_081C32E0 = _base_081C32E0 + _off_081C32E0;
    uint32_t _post_081C32E0 = _base_081C32E0 + _off_081C32E0;
    _cyc_081C32E0 += runtime_mem_cycles(_ea_081C32E0, 4u, 0u);
    uint32_t _v_081C32E0;
    { uint32_t _w = bus_read_u32(_ea_081C32E0 & ~3u); uint32_t _rot = (_ea_081C32E0 & 3u) * 8u; _v_081C32E0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_081C32E0;
    g_cpu.R[15] = 0x081C32E2u;
    runtime_tick(_cyc_081C32E0);
    /* 081C32E2  081c32e2 T adds r0,r0,r2 */
    g_cpu.R[15] = 0x081C32E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32E2 = 1u;
    _cyc_081C32E2 = 1u;
    uint32_t _rm_081C32E2 = g_cpu.R[2];
    uint32_t _op2_081C32E2;
    uint32_t _co_081C32E2;
    _op2_081C32E2 = _rm_081C32E2;
    _co_081C32E2 = cpsr_c();
    uint32_t _rn_081C32E2 = g_cpu.R[0];
    uint32_t _r_081C32E2;
    _r_081C32E2 = _rn_081C32E2 + _op2_081C32E2;
    arm_set_nzcv_add(_rn_081C32E2, _op2_081C32E2, _r_081C32E2);
    g_cpu.R[0] = _r_081C32E2;
    g_cpu.R[15] = 0x081C32E4u;
    runtime_tick(_cyc_081C32E2);
    /* 081C32E4  081c32e4 T ldrb r3,[r3] */
    g_cpu.R[15] = 0x081C32E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32E4 = 1u;
    _cyc_081C32E4 = 2u;
    uint32_t _base_081C32E4 = g_cpu.R[3];
    uint32_t _off_081C32E4;
    _off_081C32E4 = 0x00000000u;
    uint32_t _ea_081C32E4 = _base_081C32E4 + _off_081C32E4;
    uint32_t _post_081C32E4 = _base_081C32E4 + _off_081C32E4;
    _cyc_081C32E4 += runtime_mem_cycles(_ea_081C32E4, 1u, 0u);
    uint32_t _v_081C32E4;
    _v_081C32E4 = bus_read_u8(_ea_081C32E4);
    g_cpu.R[3] = _v_081C32E4;
    g_cpu.R[15] = 0x081C32E6u;
    runtime_tick(_cyc_081C32E4);
    /* 081C32E6  081c32e6 T ldrb r0,[r0] */
    g_cpu.R[15] = 0x081C32E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32E6 = 1u;
    _cyc_081C32E6 = 2u;
    uint32_t _base_081C32E6 = g_cpu.R[0];
    uint32_t _off_081C32E6;
    _off_081C32E6 = 0x00000000u;
    uint32_t _ea_081C32E6 = _base_081C32E6 + _off_081C32E6;
    uint32_t _post_081C32E6 = _base_081C32E6 + _off_081C32E6;
    _cyc_081C32E6 += runtime_mem_cycles(_ea_081C32E6, 1u, 0u);
    uint32_t _v_081C32E6;
    _v_081C32E6 = bus_read_u8(_ea_081C32E6);
    g_cpu.R[0] = _v_081C32E6;
    g_cpu.R[15] = 0x081C32E8u;
    runtime_tick(_cyc_081C32E6);
    /* 081C32E8  081c32e8 T cmps r3,r0 */
    g_cpu.R[15] = 0x081C32E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32E8 = 1u;
    _cyc_081C32E8 = 1u;
    uint32_t _rm_081C32E8 = g_cpu.R[0];
    uint32_t _op2_081C32E8;
    uint32_t _co_081C32E8;
    _op2_081C32E8 = _rm_081C32E8;
    _co_081C32E8 = cpsr_c();
    uint32_t _rn_081C32E8 = g_cpu.R[3];
    uint32_t _r_081C32E8;
    _r_081C32E8 = _rn_081C32E8 - _op2_081C32E8;
    arm_set_nzcv_sub(_rn_081C32E8, _op2_081C32E8, _r_081C32E8);
    g_cpu.R[15] = 0x081C32EAu;
    runtime_tick(_cyc_081C32E8);
    /* 081C32EA  081c32ea T bcs 0x081c3300 */
    g_cpu.R[15] = 0x081C32EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_081C32EA = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_081C32EA = 3u;
        g_cpu.R[15] = 0x081C3300u;
        runtime_tick(_cyc_081C32EA);
        gf_memory_transfer_thumb_at_081C3300();
        return;
    }
    g_cpu.R[15] = 0x081C32ECu;
    runtime_tick(_cyc_081C32EA);
    /* fall-through to 0x081C32EC */
    g_cpu.R[15] = 0x081C32ECu;
    runtime_dispatch(0x081C32ECu);
    return;
}
