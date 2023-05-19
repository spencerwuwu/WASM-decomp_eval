#ifndef dfadd_H
#define dfadd_H

#include "w2c2_base.h"

typedef struct dfaddInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct dfaddInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct dfaddInstance*,U32,U32,U32,U32);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct dfaddInstance*,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} dfaddInstance;

void dfadd_f3(dfaddInstance*);

U64 dfadd_f4(dfaddInstance*,U64,U64);

U64 dfadd_f5(dfaddInstance*,U32,U32,U64);

U32 dfadd_f6(dfaddInstance*);

U32 dfadd_f7(dfaddInstance*,U32,U32);

U32 dfadd_f8(dfaddInstance*);

U32 dfadd_f9(dfaddInstance*,U32,U32);

U32 dfadd_f10(dfaddInstance*,U32,U32);

U32 dfadd_f11(dfaddInstance*,U32,U32);

U32 dfadd_f12(dfaddInstance*,U32,U32,U32);

U32 dfadd_f13(dfaddInstance*,U32);

U64 dfadd_f14(dfaddInstance*,U32,U64,U32);

U32 dfadd_f15(dfaddInstance*,U32,U32,U32);

U32 dfadd_f16(dfaddInstance*,U32);

void dfadd_f17(dfaddInstance*,U32);

U32 dfadd_f18(dfaddInstance*,U32);

U32 dfadd_f19(dfaddInstance*,U32);

U32 dfadd_f20(dfaddInstance*,U32,U32,U32);

U32 dfadd_f21(dfaddInstance*,U32,U32);

F64 dfadd_f22(dfaddInstance*,F64,U32);

U32 dfadd_f23(dfaddInstance*,U32,U32,U32);

U32 dfadd_f24(dfaddInstance*,U32,U32,U32);

U32 dfadd_f25(dfaddInstance*,U32,U32,U32,U32,U32);

U32 dfadd_f26(dfaddInstance*,U32,U32,U32,U32,U32,U32,U32);

void dfadd_f27(dfaddInstance*,U32,U32,U32);

U32 dfadd_f28(dfaddInstance*,U32);

void dfadd_f29(dfaddInstance*,U32,U32,U32,U32);

U32 dfadd_f30(dfaddInstance*,U64,U32,U32);

U32 dfadd_f31(dfaddInstance*,U64,U32);

U32 dfadd_f32(dfaddInstance*,U64,U32);

void dfadd_f33(dfaddInstance*,U32,U32,U32,U32,U32);

U32 dfadd_f34(dfaddInstance*,U32,F64,U32,U32,U32,U32);

U64 dfadd_f35(dfaddInstance*,F64);

U32 dfadd_f36(dfaddInstance*,U32,U32,U32);

U32 dfadd_f37(dfaddInstance*,U32,U32,U32);

U32 dfadd_f38(dfaddInstance*,U32);

U32 dfadd_f39(dfaddInstance*);

U32 dfadd_f40(dfaddInstance*);

U32 dfadd_f41(dfaddInstance*);

void dfadd_f42(dfaddInstance*);

U32 dfadd_f43(dfaddInstance*,U32,U32,U32);

U32 dfadd_f44(dfaddInstance*,U32,U32);

void dfadd_f45(dfaddInstance*,U32);

U32 dfadd_f46(dfaddInstance*);

U32 dfadd_f47(dfaddInstance*);

void dfadd_f48(dfaddInstance*,U32);

U32 dfadd_f49(dfaddInstance*,U32);

U64 dfadd_f50(dfaddInstance*,U32,U32,U64,U32);

U32 dfadd_f51(dfaddInstance*,U32,U32,U32,U32,U32);

wasmMemory*dfadd_memory(dfaddInstance* i);

void dfadd_X5FX5FwasmX5FcallX5Fctors(dfaddInstance*i);

U32 dfadd_X5FX5FmainX5FargcX5Fargv(dfaddInstance*i,U32 l0,U32 l1);

U32 dfadd_X5FX5FerrnoX5Flocation(dfaddInstance*i);

U32 dfadd_stackSave(dfaddInstance*i);

void dfadd_stackRestore(dfaddInstance*i,U32 l0);

U32 dfadd_stackAlloc(dfaddInstance*i,U32 l0);

U32 dfadd_dynCallX5Fjiji(dfaddInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void dfaddInstantiate(dfaddInstance* instance, void* resolve(const char* module, const char* name));

void dfaddFreeInstance(dfaddInstance* instance);

#endif /* dfadd_H */

