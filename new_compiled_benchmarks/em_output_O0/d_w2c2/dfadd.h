#ifndef dfadd_H
#define dfadd_H

#include "w2c2_base.h"

typedef struct dfaddInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__float_exception_flags;
U32*GOTX2Emem__float_rounding_mode;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__a_input;
U32*GOTX2Emem__b_input;
U32*GOTX2Emem__z_output;
U32*GOTX2Emem__endTimer;
U32 g10;
U32 g11;
U32 g12;
U32 g13;
U32 g14;
U32 g15;
U32 g16;
} dfaddInstance;

U32 env__printf(struct dfaddInstance*,U32,U32);

U32 env__gettimeofday(struct dfaddInstance*,U32,U32);

void env__setTempRet0(struct dfaddInstance*,U32);

void f3(dfaddInstance*);

void f4(dfaddInstance*);

void f5(dfaddInstance*,U64,U32,U32);

void f6(dfaddInstance*,U32);

U32 f7(dfaddInstance*,U64);

U32 f8(dfaddInstance*,U64);

U64 f9(dfaddInstance*,U64);

U32 f10(dfaddInstance*,U64);

U32 f11(dfaddInstance*,U64);

U64 f12(dfaddInstance*,U32,U32,U64);

U64 f13(dfaddInstance*,U64,U64);

U64 f14(dfaddInstance*,U64,U64,U32);

U64 f15(dfaddInstance*,U64,U64,U32);

U64 f16(dfaddInstance*,U64,U64);

U64 f17(dfaddInstance*,U32,U32,U64);

U64 f18(dfaddInstance*,U32,U32,U64);

F64 f19(dfaddInstance*,U64);

U32 f20(dfaddInstance*);

F64 f21(dfaddInstance*);

U32 f22(dfaddInstance*,U64);

U32 f23(dfaddInstance*,U32);

void f24(dfaddInstance*,U32,U32,U32,U32);

U32 f25(dfaddInstance*,U32,U32);

U32 f26(dfaddInstance*,U32,U32);

U32 f27(dfaddInstance*,U32,U32);

U32 f28(dfaddInstance*,U32,U32);

U32 f29(dfaddInstance*,U32,U32);

U32 f30(dfaddInstance*,U32,U32,U32,U32);

U32 f31(dfaddInstance*,U32,U32,U32,U32);

F64 f32(dfaddInstance*,U32,U32);

void dfadd____wasm_call_ctors(dfaddInstance*i);

void dfadd____wasm_apply_data_relocs(dfaddInstance*i);

void dfadd_shift64RightJamming(dfaddInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

void dfadd_float_raise(dfaddInstance*i,U32 l0);

U32 dfadd_float64_is_nan(dfaddInstance*i,U32 l0,U32 l1);

U32 dfadd_float64_is_signaling_nan(dfaddInstance*i,U32 l0,U32 l1);

U32 dfadd_extractFloat64Frac(dfaddInstance*i,U32 l0,U32 l1);

U32 dfadd_extractFloat64Exp(dfaddInstance*i,U32 l0,U32 l1);

U32 dfadd_extractFloat64Sign(dfaddInstance*i,U32 l0,U32 l1);

U32 dfadd_packFloat64(dfaddInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfadd_float64_add(dfaddInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

F64 dfadd_ullong_to_double(dfaddInstance*i,U32 l0,U32 l1);

U32 dfadd_submain(dfaddInstance*i);

void dfadd_origX24shift64RightJamming(dfaddInstance*i,U64 l0,U32 l1,U32 l2);

U32 dfadd_origX24float64_is_nan(dfaddInstance*i,U64 l0);

U32 dfadd_origX24float64_is_signaling_nan(dfaddInstance*i,U64 l0);

U64 dfadd_origX24extractFloat64Frac(dfaddInstance*i,U64 l0);

U32 dfadd_origX24extractFloat64Exp(dfaddInstance*i,U64 l0);

U32 dfadd_origX24extractFloat64Sign(dfaddInstance*i,U64 l0);

U64 dfadd_origX24packFloat64(dfaddInstance*i,U32 l0,U32 l1,U64 l2);

U64 dfadd_origX24float64_add(dfaddInstance*i,U64 l0,U64 l1);

F64 dfadd_origX24ullong_to_double(dfaddInstance*i,U64 l0);

void dfaddInstantiate(dfaddInstance* instance, void* resolve(const char* module, const char* name));

void dfaddFreeInstance(dfaddInstance* instance);

#endif /* dfadd_H */

