#ifndef dfsin_H
#define dfsin_H

#include "w2c2_base.h"

typedef struct dfsinInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__float_exception_flags;
U32*GOTX2Emem__float_rounding_mode;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__test_out;
U32*GOTX2Emem__test_in;
U32*GOTX2Emem__endTimer;
U32 g9;
U32 g10;
U32 g11;
U32 g12;
U32 g13;
U32 g14;
} dfsinInstance;

U32 env__gettimeofday(struct dfsinInstance*,U32,U32);

U32 env__iprintf(struct dfsinInstance*,U32,U32);

U32 env_____small_printf(struct dfsinInstance*,U32,U32);

void env__setTempRet0(struct dfsinInstance*,U32);

void f4(dfsinInstance*);

void f5(dfsinInstance*);

void f6(dfsinInstance*,U64,U32,U32);

void f7(dfsinInstance*,U64,U64,U32,U32,U32);

void f8(dfsinInstance*,U64,U64,U64,U64,U32,U32);

void f9(dfsinInstance*,U64,U64,U64,U64,U32,U32);

void f10(dfsinInstance*,U64,U64,U32,U32);

void f11(dfsinInstance*,U32);

U32 f12(dfsinInstance*,U64);

U32 f13(dfsinInstance*,U64);

U64 f14(dfsinInstance*,U64);

U32 f15(dfsinInstance*,U64);

U32 f16(dfsinInstance*,U64);

void f17(dfsinInstance*,U64,U32,U32);

U64 f18(dfsinInstance*,U32,U32,U64);

U64 f19(dfsinInstance*,U32,U32,U64);

U64 f20(dfsinInstance*,U32,U32,U64);

U64 f21(dfsinInstance*,U32);

U64 f22(dfsinInstance*,U64,U64,U32);

U64 f23(dfsinInstance*,U64,U64,U32);

U64 f24(dfsinInstance*,U64,U64);

U64 f25(dfsinInstance*,U64,U64);

U64 f26(dfsinInstance*,U64,U64);

U32 f27(dfsinInstance*,U64,U64);

U32 f28(dfsinInstance*,U64,U64);

U64 f29(dfsinInstance*,U64);

U64 f30(dfsinInstance*,U64);

U64 f31(dfsinInstance*,U64);

F64 f32(dfsinInstance*,U64);

U32 f33(dfsinInstance*);

void f34(dfsinInstance*,U32,U32,U32,U32);

void f35(dfsinInstance*,U32,U32,U32,U32,U32,U32,U32);

void f36(dfsinInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f37(dfsinInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f38(dfsinInstance*,U32,U32,U32,U32,U32,U32);

U32 f39(dfsinInstance*,U32,U32);

U32 f40(dfsinInstance*,U32,U32);

U32 f41(dfsinInstance*,U32,U32);

U32 f42(dfsinInstance*,U32,U32);

U32 f43(dfsinInstance*,U32,U32);

void f44(dfsinInstance*,U32,U32,U32,U32);

U32 f45(dfsinInstance*,U32,U32,U32,U32);

U32 f46(dfsinInstance*,U32,U32,U32,U32);

U32 f47(dfsinInstance*,U32,U32,U32,U32);

U32 f48(dfsinInstance*,U32);

U32 f49(dfsinInstance*,U32,U32,U32,U32,U32);

U32 f50(dfsinInstance*,U32,U32,U32,U32,U32);

U32 f51(dfsinInstance*,U32,U32,U32,U32);

U32 f52(dfsinInstance*,U32,U32,U32,U32);

U32 f53(dfsinInstance*,U32,U32,U32,U32);

U32 f54(dfsinInstance*,U32,U32,U32,U32);

U32 f55(dfsinInstance*,U32,U32,U32,U32);

U32 f56(dfsinInstance*,U32,U32);

U32 f57(dfsinInstance*,U32,U32);

U32 f58(dfsinInstance*,U32,U32);

F64 f59(dfsinInstance*,U32,U32);

void dfsin____wasm_call_ctors(dfsinInstance*i);

void dfsin____wasm_apply_data_relocs(dfsinInstance*i);

void dfsin_shift64RightJamming(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

void dfsin_shift64ExtraRightJamming(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6);

void dfsin_add128(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9);

void dfsin_sub128(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7,U32 l8,U32 l9);

void dfsin_mul64To128(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5);

void dfsin_float_raise(dfsinInstance*i,U32 l0);

U32 dfsin_float64_is_nan(dfsinInstance*i,U32 l0,U32 l1);

U32 dfsin_float64_is_signaling_nan(dfsinInstance*i,U32 l0,U32 l1);

U32 dfsin_extractFloat64Frac(dfsinInstance*i,U32 l0,U32 l1);

U32 dfsin_extractFloat64Exp(dfsinInstance*i,U32 l0,U32 l1);

U32 dfsin_extractFloat64Sign(dfsinInstance*i,U32 l0,U32 l1);

void dfsin_normalizeFloat64Subnormal(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_packFloat64(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_roundAndPackFloat64(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_normalizeRoundAndPackFloat64(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_int32_to_float64(dfsinInstance*i,U32 l0);

U32 dfsin_addFloat64Sigs(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

U32 dfsin_subFloat64Sigs(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

U32 dfsin_float64_add(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_float64_mul(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_float64_div(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_float64_le(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_float64_ge(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 dfsin_float64_neg(dfsinInstance*i,U32 l0,U32 l1);

U32 dfsin_float64_abs(dfsinInstance*i,U32 l0,U32 l1);

U32 dfsin_local_sin(dfsinInstance*i,U32 l0,U32 l1);

F64 dfsin_ullong_to_double(dfsinInstance*i,U32 l0,U32 l1);

U32 dfsin_submain(dfsinInstance*i);

void dfsin_origX24shift64RightJamming(dfsinInstance*i,U64 l0,U32 l1,U32 l2);

void dfsin_origX24shift64ExtraRightJamming(dfsinInstance*i,U64 l0,U64 l1,U32 l2,U32 l3,U32 l4);

void dfsin_origX24add128(dfsinInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5);

void dfsin_origX24sub128(dfsinInstance*i,U64 l0,U64 l1,U64 l2,U64 l3,U32 l4,U32 l5);

void dfsin_origX24mul64To128(dfsinInstance*i,U64 l0,U64 l1,U32 l2,U32 l3);

U32 dfsin_origX24float64_is_nan(dfsinInstance*i,U64 l0);

U32 dfsin_origX24float64_is_signaling_nan(dfsinInstance*i,U64 l0);

U64 dfsin_origX24extractFloat64Frac(dfsinInstance*i,U64 l0);

U32 dfsin_origX24extractFloat64Exp(dfsinInstance*i,U64 l0);

U32 dfsin_origX24extractFloat64Sign(dfsinInstance*i,U64 l0);

void dfsin_origX24normalizeFloat64Subnormal(dfsinInstance*i,U64 l0,U32 l1,U32 l2);

U64 dfsin_origX24packFloat64(dfsinInstance*i,U32 l0,U32 l1,U64 l2);

U64 dfsin_origX24roundAndPackFloat64(dfsinInstance*i,U32 l0,U32 l1,U64 l2);

U64 dfsin_origX24normalizeRoundAndPackFloat64(dfsinInstance*i,U32 l0,U32 l1,U64 l2);

U64 dfsin_origX24int32_to_float64(dfsinInstance*i,U32 l0);

U64 dfsin_origX24addFloat64Sigs(dfsinInstance*i,U64 l0,U64 l1,U32 l2);

U64 dfsin_origX24subFloat64Sigs(dfsinInstance*i,U64 l0,U64 l1,U32 l2);

U64 dfsin_origX24float64_add(dfsinInstance*i,U64 l0,U64 l1);

U64 dfsin_origX24float64_mul(dfsinInstance*i,U64 l0,U64 l1);

U64 dfsin_origX24float64_div(dfsinInstance*i,U64 l0,U64 l1);

U32 dfsin_origX24float64_le(dfsinInstance*i,U64 l0,U64 l1);

U32 dfsin_origX24float64_ge(dfsinInstance*i,U64 l0,U64 l1);

U64 dfsin_origX24float64_neg(dfsinInstance*i,U64 l0);

U64 dfsin_origX24float64_abs(dfsinInstance*i,U64 l0);

U64 dfsin_origX24local_sin(dfsinInstance*i,U64 l0);

F64 dfsin_origX24ullong_to_double(dfsinInstance*i,U64 l0);

void dfsinInstantiate(dfsinInstance* instance, void* resolve(const char* module, const char* name));

void dfsinFreeInstance(dfsinInstance* instance);

#endif /* dfsin_H */

