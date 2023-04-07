#ifndef dfdiv_H
#define dfdiv_H

#include "w2c2_base.h"

typedef struct dfdivInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__float_exception_flags;
U32*GOTX2Emem__float_rounding_mode;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__z_output;
U32*GOTX2Emem__b_input;
U32*GOTX2Emem__a_input;
U32*GOTX2Emem__endTimer;
U32 g10;
U32 g11;
U32 g12;
U32 g13;
U32 g14;
U32 g15;
U32 g16;
} dfdivInstance;

U32 env__gettimeofday(struct dfdivInstance*,U32,U32);

U32 env__iprintf(struct dfdivInstance*,U32,U32);

U32 env_____small_printf(struct dfdivInstance*,U32,U32);

void env__setTempRet0(struct dfdivInstance*,U32);

void f4(dfdivInstance*);

void f5(dfdivInstance*);

void f6(dfdivInstance*,U64,U32,U32);

void f7(dfdivInstance*,U64,U64,U64,U64,U32,U32);

void f8(dfdivInstance*,U64,U64,U64,U64,U32,U32);

void f9(dfdivInstance*,U64,U64,U32,U32);

void f10(dfdivInstance*,U32);

U32 f11(dfdivInstance*,U64);

U32 f12(dfdivInstance*,U64);

U64 f13(dfdivInstance*,U64);

U32 f14(dfdivInstance*,U64);

U32 f15(dfdivInstance*,U64);

U64 f16(dfdivInstance*,U32,U32,U64);

U64 f17(dfdivInstance*,U64,U64);

F64 f18(dfdivInstance*,U64);

U32 f19(dfdivInstance*);

void f20(dfdivInstance*,U32,U32,U32,U32);

void f21(dfdivInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f22(dfdivInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f23(dfdivInstance*,U32,U32,U32,U32,U32,U32);

U32 f24(dfdivInstance*,U32,U32);

U32 f25(dfdivInstance*,U32,U32);

U32 f26(dfdivInstance*,U32,U32);

U32 f27(dfdivInstance*,U32,U32);

U32 f28(dfdivInstance*,U32,U32);

U32 f29(dfdivInstance*,U32,U32,U32,U32);

U32 f30(dfdivInstance*,U32,U32,U32,U32);

F64 f31(dfdivInstance*,U32,U32);

void dfdiv____wasm_call_ctors(dfdivInstance*i);

void dfdiv____wasm_apply_data_relocs(dfdivInstance*i);

void dfdiv_shift64RightJamming(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

void dfdiv_add128(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9);

void dfdiv_sub128(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9);

void dfdiv_mul64To128(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5);

void dfdiv_float_raise(dfdivInstance*i,U32 l0);

U32 dfdiv_float64_is_nan(dfdivInstance*i,U32 l0,U32 l1);

U32 dfdiv_float64_is_signaling_nan(dfdivInstance*i,U32 l0,U32 l1);

U32 dfdiv_extractFloat64Frac(dfdivInstance*i,U32 l0,U32 l1);

U32 dfdiv_extractFloat64Exp(dfdivInstance*i,U32 l0,U32 l1);

U32 dfdiv_extractFloat64Sign(dfdivInstance*i,U32 l0,U32 l1);

U32 dfdiv_packFloat64(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfdiv_float64_div(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

F64 dfdiv_ullong_to_double(dfdivInstance*i,U32 l0,U32 l1);

U32 dfdiv_submain(dfdivInstance*i);

void dfdiv_origX24shift64RightJamming(dfdivInstance*i,U64 l0,U32 l1,U32 l2);

void dfdiv_origX24add128(dfdivInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5);

void dfdiv_origX24sub128(dfdivInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5);

void dfdiv_origX24mul64To128(dfdivInstance*i,U64 l0,U64 l1,U32 l2,U32 l3);

U32 dfdiv_origX24float64_is_nan(dfdivInstance*i,U64 l0);

U32 dfdiv_origX24float64_is_signaling_nan(dfdivInstance*i,U64 l0);

U64 dfdiv_origX24extractFloat64Frac(dfdivInstance*i,U64 l0);

U32 dfdiv_origX24extractFloat64Exp(dfdivInstance*i,U64 l0);

U32 dfdiv_origX24extractFloat64Sign(dfdivInstance*i,U64 l0);

U64 dfdiv_origX24packFloat64(dfdivInstance*i,U32 l0,U32 l1,U64 l2);

U64 dfdiv_origX24float64_div(dfdivInstance*i,U64 l0,U64 l1);

F64 dfdiv_origX24ullong_to_double(dfdivInstance*i,U64 l0);

void dfdivInstantiate(dfdivInstance* instance, void* resolve(const char* module, const char* name));

void dfdivFreeInstance(dfdivInstance* instance);

#endif /* dfdiv_H */

