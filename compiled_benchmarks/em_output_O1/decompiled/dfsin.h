#ifndef dfsin_H
#define dfsin_H

#include "w2c2_base.h"

typedef struct dfsinInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct dfsinInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct dfsinInstance*,U32,U32,U32,U32);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct dfsinInstance*,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} dfsinInstance;

void dfsin_f3(dfsinInstance*);

U64 dfsin_f4(dfsinInstance*,U64,U64);

U64 dfsin_f5(dfsinInstance*,U32,U32,U64);

U64 dfsin_f6(dfsinInstance*,U64,U64);

U64 dfsin_f7(dfsinInstance*,U64,U64);

U64 dfsin_f8(dfsinInstance*,U64);

U32 dfsin_f9(dfsinInstance*);

U32 dfsin_f10(dfsinInstance*,U32,U32);

U32 dfsin_f11(dfsinInstance*);

U32 dfsin_f12(dfsinInstance*,U32,U32);

U32 dfsin_f13(dfsinInstance*,U32,U32);

U32 dfsin_f14(dfsinInstance*,U32,U32);

U32 dfsin_f15(dfsinInstance*,U32,U32,U32);

U32 dfsin_f16(dfsinInstance*,U32);

U64 dfsin_f17(dfsinInstance*,U32,U64,U32);

U32 dfsin_f18(dfsinInstance*,U32,U32,U32);

U32 dfsin_f19(dfsinInstance*,U32);

void dfsin_f20(dfsinInstance*,U32);

U32 dfsin_f21(dfsinInstance*,U32);

U32 dfsin_f22(dfsinInstance*,U32);

U32 dfsin_f23(dfsinInstance*,U32,U32,U32);

U32 dfsin_f24(dfsinInstance*,U32,U32);

F64 dfsin_f25(dfsinInstance*,F64,U32);

U32 dfsin_f26(dfsinInstance*,U32,U32,U32);

U32 dfsin_f27(dfsinInstance*,U32,U32,U32);

U32 dfsin_f28(dfsinInstance*,U32,U32,U32,U32,U32);

U32 dfsin_f29(dfsinInstance*,U32,U32,U32,U32,U32,U32,U32);

void dfsin_f30(dfsinInstance*,U32,U32,U32);

U32 dfsin_f31(dfsinInstance*,U32);

void dfsin_f32(dfsinInstance*,U32,U32,U32,U32);

U32 dfsin_f33(dfsinInstance*,U64,U32,U32);

U32 dfsin_f34(dfsinInstance*,U64,U32);

U32 dfsin_f35(dfsinInstance*,U64,U32);

void dfsin_f36(dfsinInstance*,U32,U32,U32,U32,U32);

U32 dfsin_f37(dfsinInstance*,U32,F64,U32,U32,U32,U32);

U64 dfsin_f38(dfsinInstance*,F64);

U32 dfsin_f39(dfsinInstance*,U32,U32,U32);

U32 dfsin_f40(dfsinInstance*,U32,U32,U32);

U32 dfsin_f41(dfsinInstance*,U32);

U32 dfsin_f42(dfsinInstance*);

U32 dfsin_f43(dfsinInstance*);

U32 dfsin_f44(dfsinInstance*);

void dfsin_f45(dfsinInstance*);

U32 dfsin_f46(dfsinInstance*,U32,U32,U32);

U32 dfsin_f47(dfsinInstance*,U32,U32);

void dfsin_f48(dfsinInstance*,U32);

U32 dfsin_f49(dfsinInstance*);

U32 dfsin_f50(dfsinInstance*);

void dfsin_f51(dfsinInstance*,U32);

U32 dfsin_f52(dfsinInstance*,U32);

U64 dfsin_f53(dfsinInstance*,U32,U32,U64,U32);

U32 dfsin_f54(dfsinInstance*,U32,U32,U32,U32,U32);

wasmMemory*dfsin_memory(dfsinInstance* i);

void dfsin_X5FX5FwasmX5FcallX5Fctors(dfsinInstance*i);

U32 dfsin_X5FX5FmainX5FargcX5Fargv(dfsinInstance*i,U32 l0,U32 l1);

U32 dfsin_X5FX5FerrnoX5Flocation(dfsinInstance*i);

U32 dfsin_stackSave(dfsinInstance*i);

void dfsin_stackRestore(dfsinInstance*i,U32 l0);

U32 dfsin_stackAlloc(dfsinInstance*i,U32 l0);

U32 dfsin_dynCallX5Fjiji(dfsinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void dfsinInstantiate(dfsinInstance* instance, void* resolve(const char* module, const char* name));

void dfsinFreeInstance(dfsinInstance* instance);

#endif /* dfsin_H */

