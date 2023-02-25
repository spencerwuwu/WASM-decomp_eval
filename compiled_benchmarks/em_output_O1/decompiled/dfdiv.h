#ifndef dfdiv_H
#define dfdiv_H

#include "w2c2_base.h"

typedef struct dfdivInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct dfdivInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct dfdivInstance*,U32,U32,U32,U32);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct dfdivInstance*,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} dfdivInstance;

void dfdiv_f3(dfdivInstance*);

U64 dfdiv_f4(dfdivInstance*,U64,U64);

U32 dfdiv_f5(dfdivInstance*);

U32 dfdiv_f6(dfdivInstance*,U32,U32);

U32 dfdiv_f7(dfdivInstance*);

U32 dfdiv_f8(dfdivInstance*,U32,U32);

U32 dfdiv_f9(dfdivInstance*,U32,U32);

U32 dfdiv_f10(dfdivInstance*,U32,U32);

U32 dfdiv_f11(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f12(dfdivInstance*,U32);

U64 dfdiv_f13(dfdivInstance*,U32,U64,U32);

U32 dfdiv_f14(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f15(dfdivInstance*,U32);

void dfdiv_f16(dfdivInstance*,U32);

U32 dfdiv_f17(dfdivInstance*,U32);

U32 dfdiv_f18(dfdivInstance*,U32);

U32 dfdiv_f19(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f20(dfdivInstance*,U32,U32);

F64 dfdiv_f21(dfdivInstance*,F64,U32);

U32 dfdiv_f22(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f23(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f24(dfdivInstance*,U32,U32,U32,U32,U32);

U32 dfdiv_f25(dfdivInstance*,U32,U32,U32,U32,U32,U32,U32);

void dfdiv_f26(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f27(dfdivInstance*,U32);

void dfdiv_f28(dfdivInstance*,U32,U32,U32,U32);

U32 dfdiv_f29(dfdivInstance*,U64,U32,U32);

U32 dfdiv_f30(dfdivInstance*,U64,U32);

U32 dfdiv_f31(dfdivInstance*,U64,U32);

void dfdiv_f32(dfdivInstance*,U32,U32,U32,U32,U32);

U32 dfdiv_f33(dfdivInstance*,U32,F64,U32,U32,U32,U32);

U64 dfdiv_f34(dfdivInstance*,F64);

U32 dfdiv_f35(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f36(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f37(dfdivInstance*,U32);

U32 dfdiv_f38(dfdivInstance*);

U32 dfdiv_f39(dfdivInstance*);

U32 dfdiv_f40(dfdivInstance*);

void dfdiv_f41(dfdivInstance*);

U32 dfdiv_f42(dfdivInstance*,U32,U32,U32);

U32 dfdiv_f43(dfdivInstance*,U32,U32);

void dfdiv_f44(dfdivInstance*,U32);

U32 dfdiv_f45(dfdivInstance*);

U32 dfdiv_f46(dfdivInstance*);

void dfdiv_f47(dfdivInstance*,U32);

U32 dfdiv_f48(dfdivInstance*,U32);

U64 dfdiv_f49(dfdivInstance*,U32,U32,U64,U32);

U32 dfdiv_f50(dfdivInstance*,U32,U32,U32,U32,U32);

wasmMemory*dfdiv_memory(dfdivInstance* i);

void dfdiv_X5FX5FwasmX5FcallX5Fctors(dfdivInstance*i);

U32 dfdiv_X5FX5FmainX5FargcX5Fargv(dfdivInstance*i,U32 l0,U32 l1);

U32 dfdiv_X5FX5FerrnoX5Flocation(dfdivInstance*i);

U32 dfdiv_stackSave(dfdivInstance*i);

void dfdiv_stackRestore(dfdivInstance*i,U32 l0);

U32 dfdiv_stackAlloc(dfdivInstance*i,U32 l0);

U32 dfdiv_dynCallX5Fjiji(dfdivInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void dfdivInstantiate(dfdivInstance* instance, void* resolve(const char* module, const char* name));

void dfdivFreeInstance(dfdivInstance* instance);

#endif /* dfdiv_H */

