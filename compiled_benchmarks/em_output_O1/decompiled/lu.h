#ifndef lu_H
#define lu_H

#include "w2c2_base.h"

typedef struct luInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct luInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct luInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct luInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct luInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct luInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct luInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} luInstance;

void lu_f6(luInstance*);

U32 lu_f7(luInstance*,U32,U32);

U32 lu_f8(luInstance*,U32,U32);

void lu_f9(luInstance*);

void lu_f10(luInstance*);

void lu_f11(luInstance*);

U32 lu_f12(luInstance*,U64,U32);

U32 lu_f13(luInstance*,U32,U32,U32);

U32 lu_f14(luInstance*);

U32 lu_f15(luInstance*,U32,U32);

U32 lu_f16(luInstance*,U32,U32,U32);

U32 lu_f17(luInstance*,U32,U32,U32);

U32 lu_f18(luInstance*,U32);

void lu_f19(luInstance*,U32);

U32 lu_f20(luInstance*,U32);

U32 lu_f21(luInstance*,U32,U32);

U32 lu_f22(luInstance*,U32,U32);

U32 lu_f23(luInstance*,U32,U32);

U32 lu_f24(luInstance*,U32,U32);

U32 lu_f25(luInstance*,U32);

U32 lu_f26(luInstance*,U32);

void lu_f27(luInstance*,U32);

U32 lu_f28(luInstance*,U32,U32,U32);

U32 lu_f29(luInstance*,U32,U32,U32);

U32 lu_f30(luInstance*,U32,U32,U32,U32);

U32 lu_f31(luInstance*,U32,U32);

U32 lu_f32(luInstance*,U32,U32);

U32 lu_f33(luInstance*,U32,U32);

U32 lu_f34(luInstance*);

U32 lu_f35(luInstance*);

U32 lu_f36(luInstance*);

void lu_f37(luInstance*);

U32 lu_f38(luInstance*,U32);

U32 lu_f39(luInstance*,U32);

U32 lu_f40(luInstance*,U32,U32,U32);

U64 lu_f41(luInstance*,U32,U64,U32);

U64 lu_f42(luInstance*,U32,U64,U32);

U32 lu_f43(luInstance*,U32);

U64 lu_f44(luInstance*,U32,U64,U32);

U32 lu_f45(luInstance*,U32);

U32 lu_f46(luInstance*,U32,U32,U32);

U32 lu_f47(luInstance*,U32,U32);

F64 lu_f48(luInstance*,F64,U32);

U32 lu_f49(luInstance*,U32,U32,U32,U32,U32);

U32 lu_f50(luInstance*,U32,U32,U32,U32,U32,U32,U32);

void lu_f51(luInstance*,U32,U32,U32);

U32 lu_f52(luInstance*,U32);

void lu_f53(luInstance*,U32,U32,U32,U32);

U32 lu_f54(luInstance*,U64,U32,U32);

U32 lu_f55(luInstance*,U64,U32);

U32 lu_f56(luInstance*,U64,U32);

void lu_f57(luInstance*,U32,U32,U32,U32,U32);

U32 lu_f58(luInstance*,U32,F64,U32,U32,U32,U32);

U64 lu_f59(luInstance*,F64);

U32 lu_f60(luInstance*,U32,U32,U32);

U32 lu_f61(luInstance*,U32,U32,U32);

U32 lu_f62(luInstance*,U32);

U32 lu_f63(luInstance*,U32,U32,U32);

U32 lu_f64(luInstance*,U32,U32);

U32 lu_f65(luInstance*,U32);

void lu_f66(luInstance*,U32);

U32 lu_f67(luInstance*);

U32 lu_f68(luInstance*,U32);

void lu_f69(luInstance*,U32);

U32 lu_f70(luInstance*);

U32 lu_f71(luInstance*);

void lu_f72(luInstance*,U32);

U32 lu_f73(luInstance*,U32);

U64 lu_f74(luInstance*,U32,U32,U64,U32);

U32 lu_f75(luInstance*,U32,U32,U32,U32,U32);

U32 lu_f76(luInstance*,U32,U64,U32,U32);

wasmMemory*lu_memory(luInstance* i);

void lu_X5FX5FwasmX5FcallX5Fctors(luInstance*i);

U32 lu_X5FX5FmainX5FargcX5Fargv(luInstance*i,U32 l0,U32 l1);

U32 lu_X5FX5FerrnoX5Flocation(luInstance*i);

U32 lu_stackSave(luInstance*i);

void lu_stackRestore(luInstance*i,U32 l0);

U32 lu_stackAlloc(luInstance*i,U32 l0);

U32 lu_dynCallX5Fjiji(luInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void luInstantiate(luInstance* instance, void* resolve(const char* module, const char* name));

void luFreeInstance(luInstance* instance);

#endif /* lu_H */

