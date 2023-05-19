#ifndef dfmul_H
#define dfmul_H

#include "w2c2_base.h"

typedef struct dfmulInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct dfmulInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct dfmulInstance*,U32,U32,U32,U32);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct dfmulInstance*,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} dfmulInstance;

void dfmul_f3(dfmulInstance*);

U64 dfmul_f4(dfmulInstance*,U64,U64);

U32 dfmul_f5(dfmulInstance*);

U32 dfmul_f6(dfmulInstance*,U32,U32);

U32 dfmul_f7(dfmulInstance*);

U32 dfmul_f8(dfmulInstance*,U32,U32);

U32 dfmul_f9(dfmulInstance*,U32,U32);

U32 dfmul_f10(dfmulInstance*,U32,U32);

U32 dfmul_f11(dfmulInstance*,U32,U32,U32);

U32 dfmul_f12(dfmulInstance*,U32);

U64 dfmul_f13(dfmulInstance*,U32,U64,U32);

U32 dfmul_f14(dfmulInstance*,U32,U32,U32);

U32 dfmul_f15(dfmulInstance*,U32);

void dfmul_f16(dfmulInstance*,U32);

U32 dfmul_f17(dfmulInstance*,U32);

U32 dfmul_f18(dfmulInstance*,U32);

U32 dfmul_f19(dfmulInstance*,U32,U32,U32);

U32 dfmul_f20(dfmulInstance*,U32,U32);

F64 dfmul_f21(dfmulInstance*,F64,U32);

U32 dfmul_f22(dfmulInstance*,U32,U32,U32);

U32 dfmul_f23(dfmulInstance*,U32,U32,U32);

U32 dfmul_f24(dfmulInstance*,U32,U32,U32,U32,U32);

U32 dfmul_f25(dfmulInstance*,U32,U32,U32,U32,U32,U32,U32);

void dfmul_f26(dfmulInstance*,U32,U32,U32);

U32 dfmul_f27(dfmulInstance*,U32);

void dfmul_f28(dfmulInstance*,U32,U32,U32,U32);

U32 dfmul_f29(dfmulInstance*,U64,U32,U32);

U32 dfmul_f30(dfmulInstance*,U64,U32);

U32 dfmul_f31(dfmulInstance*,U64,U32);

void dfmul_f32(dfmulInstance*,U32,U32,U32,U32,U32);

U32 dfmul_f33(dfmulInstance*,U32,F64,U32,U32,U32,U32);

U64 dfmul_f34(dfmulInstance*,F64);

U32 dfmul_f35(dfmulInstance*,U32,U32,U32);

U32 dfmul_f36(dfmulInstance*,U32,U32,U32);

U32 dfmul_f37(dfmulInstance*,U32);

U32 dfmul_f38(dfmulInstance*);

U32 dfmul_f39(dfmulInstance*);

U32 dfmul_f40(dfmulInstance*);

void dfmul_f41(dfmulInstance*);

U32 dfmul_f42(dfmulInstance*,U32,U32,U32);

U32 dfmul_f43(dfmulInstance*,U32,U32);

void dfmul_f44(dfmulInstance*,U32);

U32 dfmul_f45(dfmulInstance*);

U32 dfmul_f46(dfmulInstance*);

void dfmul_f47(dfmulInstance*,U32);

U32 dfmul_f48(dfmulInstance*,U32);

U64 dfmul_f49(dfmulInstance*,U32,U32,U64,U32);

U32 dfmul_f50(dfmulInstance*,U32,U32,U32,U32,U32);

wasmMemory*dfmul_memory(dfmulInstance* i);

void dfmul_X5FX5FwasmX5FcallX5Fctors(dfmulInstance*i);

U32 dfmul_X5FX5FmainX5FargcX5Fargv(dfmulInstance*i,U32 l0,U32 l1);

U32 dfmul_X5FX5FerrnoX5Flocation(dfmulInstance*i);

U32 dfmul_stackSave(dfmulInstance*i);

void dfmul_stackRestore(dfmulInstance*i,U32 l0);

U32 dfmul_stackAlloc(dfmulInstance*i,U32 l0);

U32 dfmul_dynCallX5Fjiji(dfmulInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void dfmulInstantiate(dfmulInstance* instance, void* resolve(const char* module, const char* name));

void dfmulFreeInstance(dfmulInstance* instance);

#endif /* dfmul_H */

