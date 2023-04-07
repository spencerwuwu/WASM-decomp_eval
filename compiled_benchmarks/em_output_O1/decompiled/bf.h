#ifndef bf_H
#define bf_H

#include "w2c2_base.h"

typedef struct bfInstance {
void(*env_emscriptenX5FmemcpyX5Fbig)(struct bfInstance*,U32,U32,U32);
F64(*env_emscriptenX5FdateX5Fnow)(struct bfInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct bfInstance*,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} bfInstance;

void bf_f3(bfInstance*);

void bf_f4(bfInstance*,U32,U32);

void bf_f5(bfInstance*,U32,U32);

void bf_f6(bfInstance*,U32,U32,U32,U32,U32,U32);

U32 bf_f7(bfInstance*);

U32 bf_f8(bfInstance*);

U32 bf_f9(bfInstance*,U32,U32);

U32 bf_f10(bfInstance*,U32,U32,U32);

U32 bf_f11(bfInstance*);

U32 bf_f12(bfInstance*,U32,U32);

U32 bf_f13(bfInstance*,U32,U32);

U32 bf_f14(bfInstance*,U32,U32);

U32 bf_f15(bfInstance*,U32,U32,U32);

U32 bf_f16(bfInstance*,U32);

U64 bf_f17(bfInstance*,U32,U64,U32);

U32 bf_f18(bfInstance*,U32,U32,U32);

U32 bf_f19(bfInstance*,U32);

void bf_f20(bfInstance*,U32);

U32 bf_f21(bfInstance*,U32);

U32 bf_f22(bfInstance*,U32);

U32 bf_f23(bfInstance*,U32,U32,U32);

U32 bf_f24(bfInstance*,U32,U32);

F64 bf_f25(bfInstance*,F64,U32);

U32 bf_f26(bfInstance*,U32,U32,U32);

U32 bf_f27(bfInstance*,U32,U32,U32,U32,U32);

U32 bf_f28(bfInstance*,U32,U32,U32,U32,U32,U32,U32);

void bf_f29(bfInstance*,U32,U32,U32);

U32 bf_f30(bfInstance*,U32);

void bf_f31(bfInstance*,U32,U32,U32,U32);

U32 bf_f32(bfInstance*,U64,U32,U32);

U32 bf_f33(bfInstance*,U64,U32);

U32 bf_f34(bfInstance*,U64,U32);

void bf_f35(bfInstance*,U32,U32,U32,U32,U32);

U32 bf_f36(bfInstance*,U32,F64,U32,U32,U32,U32);

U64 bf_f37(bfInstance*,F64);

U32 bf_f38(bfInstance*,U32,U32,U32);

U32 bf_f39(bfInstance*,U32,U32,U32);

U32 bf_f40(bfInstance*,U32);

U32 bf_f41(bfInstance*);

U32 bf_f42(bfInstance*);

U32 bf_f43(bfInstance*);

void bf_f44(bfInstance*);

U32 bf_f45(bfInstance*,U32,U32,U32);

U32 bf_f46(bfInstance*,U32,U32);

void bf_f47(bfInstance*,U32);

U32 bf_f48(bfInstance*);

U32 bf_f49(bfInstance*);

void bf_f50(bfInstance*,U32);

U32 bf_f51(bfInstance*,U32);

U64 bf_f52(bfInstance*,U32,U32,U64,U32);

U32 bf_f53(bfInstance*,U32,U32,U32,U32,U32);

wasmMemory*bf_memory(bfInstance* i);

void bf_X5FX5FwasmX5FcallX5Fctors(bfInstance*i);

U32 bf_X5FX5FmainX5FargcX5Fargv(bfInstance*i,U32 l0,U32 l1);

U32 bf_X5FX5FerrnoX5Flocation(bfInstance*i);

U32 bf_stackSave(bfInstance*i);

void bf_stackRestore(bfInstance*i,U32 l0);

U32 bf_stackAlloc(bfInstance*i,U32 l0);

U32 bf_dynCallX5Fjiji(bfInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void bfInstantiate(bfInstance* instance, void* resolve(const char* module, const char* name));

void bfFreeInstance(bfInstance* instance);

#endif /* bf_H */

