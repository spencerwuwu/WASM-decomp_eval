#ifndef dfmul_H
#define dfmul_H

#include "w2c2_base.h"

typedef struct dfmulInstance {
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
} dfmulInstance;

U32 env__gettimeofday(struct dfmulInstance*,U32,U32);

U32 env__iprintf(struct dfmulInstance*,U32,U32);

U32 env_____small_printf(struct dfmulInstance*,U32,U32);

void env__setTempRet0(struct dfmulInstance*,U32);

void f4(dfmulInstance*);

void f5(dfmulInstance*);

void f6(dfmulInstance*,U64,U32,U32);

void f7(dfmulInstance*,U64,U64,U32,U32);

void f8(dfmulInstance*,U32);

U32 f9(dfmulInstance*,U64);

U32 f10(dfmulInstance*,U64);

U64 f11(dfmulInstance*,U64);

U32 f12(dfmulInstance*,U64);

U32 f13(dfmulInstance*,U64);

U64 f14(dfmulInstance*,U32,U32,U64);

U64 f15(dfmulInstance*,U64,U64);

F64 f16(dfmulInstance*,U64);

U32 f17(dfmulInstance*);

void f18(dfmulInstance*,U32,U32,U32,U32);

void f19(dfmulInstance*,U32,U32,U32,U32,U32,U32);

U32 f20(dfmulInstance*,U32,U32);

U32 f21(dfmulInstance*,U32,U32);

U32 f22(dfmulInstance*,U32,U32);

U32 f23(dfmulInstance*,U32,U32);

U32 f24(dfmulInstance*,U32,U32);

U32 f25(dfmulInstance*,U32,U32,U32,U32);

U32 f26(dfmulInstance*,U32,U32,U32,U32);

F64 f27(dfmulInstance*,U32,U32);

void dfmul____wasm_call_ctors(dfmulInstance*i);

void dfmul____wasm_apply_data_relocs(dfmulInstance*i);

void dfmul_shift64RightJamming(dfmulInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

void dfmul_mul64To128(dfmulInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5);

void dfmul_float_raise(dfmulInstance*i,U32 l0);

U32 dfmul_float64_is_nan(dfmulInstance*i,U32 l0,U32 l1);

U32 dfmul_float64_is_signaling_nan(dfmulInstance*i,U32 l0,U32 l1);

U32 dfmul_extractFloat64Frac(dfmulInstance*i,U32 l0,U32 l1);

U32 dfmul_extractFloat64Exp(dfmulInstance*i,U32 l0,U32 l1);

U32 dfmul_extractFloat64Sign(dfmulInstance*i,U32 l0,U32 l1);

U32 dfmul_packFloat64(dfmulInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfmul_float64_mul(dfmulInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

F64 dfmul_ullong_to_double(dfmulInstance*i,U32 l0,U32 l1);

U32 dfmul_submain(dfmulInstance*i);

void dfmul_origX24shift64RightJamming(dfmulInstance*i,U64 l0,U32 l1,U32 l2);

void dfmul_origX24mul64To128(dfmulInstance*i,U64 l0,U64 l1,U32 l2,U32 l3);

U32 dfmul_origX24float64_is_nan(dfmulInstance*i,U64 l0);

U32 dfmul_origX24float64_is_signaling_nan(dfmulInstance*i,U64 l0);

U64 dfmul_origX24extractFloat64Frac(dfmulInstance*i,U64 l0);

U32 dfmul_origX24extractFloat64Exp(dfmulInstance*i,U64 l0);

U32 dfmul_origX24extractFloat64Sign(dfmulInstance*i,U64 l0);

U64 dfmul_origX24packFloat64(dfmulInstance*i,U32 l0,U32 l1,U64 l2);

U64 dfmul_origX24float64_mul(dfmulInstance*i,U64 l0,U64 l1);

F64 dfmul_origX24ullong_to_double(dfmulInstance*i,U64 l0);

void dfmulInstantiate(dfmulInstance* instance, void* resolve(const char* module, const char* name));

void dfmulFreeInstance(dfmulInstance* instance);

#endif /* dfmul_H */

