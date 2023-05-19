#ifndef mips_H
#define mips_H

#include "w2c2_base.h"

typedef struct mipsInstance {
void(*env_emscriptenX5FmemcpyX5Fbig)(struct mipsInstance*,U32,U32,U32);
F64(*env_emscriptenX5FdateX5Fnow)(struct mipsInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct mipsInstance*,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} mipsInstance;

void mips_f3(mipsInstance*);

U32 mips_f4(mipsInstance*);

U32 mips_f5(mipsInstance*,U32,U32);

U32 mips_f6(mipsInstance*,U32,U32,U32);

U32 mips_f7(mipsInstance*,U32,U32,U32);

U32 mips_f8(mipsInstance*);

U32 mips_f9(mipsInstance*,U32,U32);

U32 mips_f10(mipsInstance*,U32,U32);

U32 mips_f11(mipsInstance*,U32,U32);

U32 mips_f12(mipsInstance*,U32,U32,U32);

U32 mips_f13(mipsInstance*,U32);

U64 mips_f14(mipsInstance*,U32,U64,U32);

U32 mips_f15(mipsInstance*,U32);

void mips_f16(mipsInstance*,U32);

U32 mips_f17(mipsInstance*,U32);

U32 mips_f18(mipsInstance*,U32);

U32 mips_f19(mipsInstance*,U32,U32,U32);

U32 mips_f20(mipsInstance*,U32,U32);

F64 mips_f21(mipsInstance*,F64,U32);

U32 mips_f22(mipsInstance*,U32,U32,U32);

U32 mips_f23(mipsInstance*,U32,U32,U32,U32,U32);

U32 mips_f24(mipsInstance*,U32,U32,U32,U32,U32,U32,U32);

void mips_f25(mipsInstance*,U32,U32,U32);

U32 mips_f26(mipsInstance*,U32);

void mips_f27(mipsInstance*,U32,U32,U32,U32);

U32 mips_f28(mipsInstance*,U64,U32,U32);

U32 mips_f29(mipsInstance*,U64,U32);

U32 mips_f30(mipsInstance*,U64,U32);

void mips_f31(mipsInstance*,U32,U32,U32,U32,U32);

U32 mips_f32(mipsInstance*,U32,F64,U32,U32,U32,U32);

U64 mips_f33(mipsInstance*,F64);

U32 mips_f34(mipsInstance*,U32,U32,U32);

U32 mips_f35(mipsInstance*,U32,U32,U32);

U32 mips_f36(mipsInstance*,U32);

U32 mips_f37(mipsInstance*);

U32 mips_f38(mipsInstance*);

U32 mips_f39(mipsInstance*);

void mips_f40(mipsInstance*);

U32 mips_f41(mipsInstance*,U32,U32,U32);

U32 mips_f42(mipsInstance*,U32,U32);

void mips_f43(mipsInstance*,U32);

U32 mips_f44(mipsInstance*);

U32 mips_f45(mipsInstance*);

void mips_f46(mipsInstance*,U32);

U32 mips_f47(mipsInstance*,U32);

U64 mips_f48(mipsInstance*,U32,U32,U64,U32);

U32 mips_f49(mipsInstance*,U32,U32,U32,U32,U32);

wasmMemory*mips_memory(mipsInstance* i);

void mips_X5FX5FwasmX5FcallX5Fctors(mipsInstance*i);

U32 mips_X5FX5FmainX5FargcX5Fargv(mipsInstance*i,U32 l0,U32 l1);

U32 mips_X5FX5FerrnoX5Flocation(mipsInstance*i);

U32 mips_stackSave(mipsInstance*i);

void mips_stackRestore(mipsInstance*i,U32 l0);

U32 mips_stackAlloc(mipsInstance*i,U32 l0);

U32 mips_dynCallX5Fjiji(mipsInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void mipsInstantiate(mipsInstance* instance, void* resolve(const char* module, const char* name));

void mipsFreeInstance(mipsInstance* instance);

#endif /* mips_H */

