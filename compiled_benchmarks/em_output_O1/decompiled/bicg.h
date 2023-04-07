#ifndef bicg_H
#define bicg_H

#include "w2c2_base.h"

typedef struct bicgInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct bicgInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct bicgInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct bicgInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct bicgInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct bicgInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct bicgInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} bicgInstance;

void bicg_f6(bicgInstance*);

U32 bicg_f7(bicgInstance*,U32,U32);

U32 bicg_f8(bicgInstance*,U32,U32);

void bicg_f9(bicgInstance*);

void bicg_f10(bicgInstance*);

void bicg_f11(bicgInstance*);

U32 bicg_f12(bicgInstance*,U64,U32);

U32 bicg_f13(bicgInstance*,U32,U32,U32);

U32 bicg_f14(bicgInstance*);

U32 bicg_f15(bicgInstance*,U32,U32);

U32 bicg_f16(bicgInstance*,U32,U32,U32);

U32 bicg_f17(bicgInstance*,U32,U32,U32);

U32 bicg_f18(bicgInstance*,U32);

void bicg_f19(bicgInstance*,U32);

U32 bicg_f20(bicgInstance*,U32);

U32 bicg_f21(bicgInstance*,U32,U32);

U32 bicg_f22(bicgInstance*,U32,U32);

U32 bicg_f23(bicgInstance*,U32,U32);

U32 bicg_f24(bicgInstance*,U32,U32);

U32 bicg_f25(bicgInstance*,U32);

U32 bicg_f26(bicgInstance*,U32);

void bicg_f27(bicgInstance*,U32);

U32 bicg_f28(bicgInstance*,U32,U32,U32);

U32 bicg_f29(bicgInstance*,U32,U32,U32);

U32 bicg_f30(bicgInstance*,U32,U32,U32,U32);

U32 bicg_f31(bicgInstance*,U32,U32);

U32 bicg_f32(bicgInstance*,U32,U32);

U32 bicg_f33(bicgInstance*,U32,U32);

U32 bicg_f34(bicgInstance*);

U32 bicg_f35(bicgInstance*);

U32 bicg_f36(bicgInstance*);

void bicg_f37(bicgInstance*);

U32 bicg_f38(bicgInstance*,U32);

U32 bicg_f39(bicgInstance*,U32);

U32 bicg_f40(bicgInstance*,U32,U32,U32);

U64 bicg_f41(bicgInstance*,U32,U64,U32);

U64 bicg_f42(bicgInstance*,U32,U64,U32);

U32 bicg_f43(bicgInstance*,U32);

U64 bicg_f44(bicgInstance*,U32,U64,U32);

U32 bicg_f45(bicgInstance*,U32);

U32 bicg_f46(bicgInstance*,U32,U32,U32);

U32 bicg_f47(bicgInstance*,U32,U32);

F64 bicg_f48(bicgInstance*,F64,U32);

U32 bicg_f49(bicgInstance*,U32,U32,U32,U32,U32);

U32 bicg_f50(bicgInstance*,U32,U32,U32,U32,U32,U32,U32);

void bicg_f51(bicgInstance*,U32,U32,U32);

U32 bicg_f52(bicgInstance*,U32);

void bicg_f53(bicgInstance*,U32,U32,U32,U32);

U32 bicg_f54(bicgInstance*,U64,U32,U32);

U32 bicg_f55(bicgInstance*,U64,U32);

U32 bicg_f56(bicgInstance*,U64,U32);

void bicg_f57(bicgInstance*,U32,U32,U32,U32,U32);

U32 bicg_f58(bicgInstance*,U32,F64,U32,U32,U32,U32);

U64 bicg_f59(bicgInstance*,F64);

U32 bicg_f60(bicgInstance*,U32,U32,U32);

U32 bicg_f61(bicgInstance*,U32,U32,U32);

U32 bicg_f62(bicgInstance*,U32);

U32 bicg_f63(bicgInstance*,U32,U32,U32);

U32 bicg_f64(bicgInstance*,U32,U32);

U32 bicg_f65(bicgInstance*,U32);

void bicg_f66(bicgInstance*,U32);

U32 bicg_f67(bicgInstance*);

U32 bicg_f68(bicgInstance*,U32);

void bicg_f69(bicgInstance*,U32);

U32 bicg_f70(bicgInstance*);

U32 bicg_f71(bicgInstance*);

void bicg_f72(bicgInstance*,U32);

U32 bicg_f73(bicgInstance*,U32);

U64 bicg_f74(bicgInstance*,U32,U32,U64,U32);

U32 bicg_f75(bicgInstance*,U32,U32,U32,U32,U32);

U32 bicg_f76(bicgInstance*,U32,U64,U32,U32);

wasmMemory*bicg_memory(bicgInstance* i);

void bicg_X5FX5FwasmX5FcallX5Fctors(bicgInstance*i);

U32 bicg_X5FX5FmainX5FargcX5Fargv(bicgInstance*i,U32 l0,U32 l1);

U32 bicg_X5FX5FerrnoX5Flocation(bicgInstance*i);

U32 bicg_stackSave(bicgInstance*i);

void bicg_stackRestore(bicgInstance*i,U32 l0);

U32 bicg_stackAlloc(bicgInstance*i,U32 l0);

U32 bicg_dynCallX5Fjiji(bicgInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void bicgInstantiate(bicgInstance* instance, void* resolve(const char* module, const char* name));

void bicgFreeInstance(bicgInstance* instance);

#endif /* bicg_H */

