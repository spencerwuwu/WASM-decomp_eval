#ifndef syrk_H
#define syrk_H

#include "w2c2_base.h"

typedef struct syrkInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct syrkInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct syrkInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct syrkInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct syrkInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct syrkInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct syrkInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} syrkInstance;

void syrk_f6(syrkInstance*);

U32 syrk_f7(syrkInstance*,U32,U32);

U32 syrk_f8(syrkInstance*,U32,U32);

void syrk_f9(syrkInstance*);

void syrk_f10(syrkInstance*);

void syrk_f11(syrkInstance*);

U32 syrk_f12(syrkInstance*,U64,U32);

U32 syrk_f13(syrkInstance*);

U32 syrk_f14(syrkInstance*,U32,U32);

U32 syrk_f15(syrkInstance*,U32,U32,U32);

U32 syrk_f16(syrkInstance*,U32,U32,U32);

U32 syrk_f17(syrkInstance*,U32);

void syrk_f18(syrkInstance*,U32);

U32 syrk_f19(syrkInstance*,U32);

U32 syrk_f20(syrkInstance*,U32,U32);

U32 syrk_f21(syrkInstance*,U32,U32);

U32 syrk_f22(syrkInstance*,U32,U32);

U32 syrk_f23(syrkInstance*,U32,U32);

U32 syrk_f24(syrkInstance*,U32);

U32 syrk_f25(syrkInstance*,U32);

void syrk_f26(syrkInstance*,U32);

U32 syrk_f27(syrkInstance*,U32,U32,U32);

U32 syrk_f28(syrkInstance*,U32,U32,U32);

U32 syrk_f29(syrkInstance*,U32,U32,U32,U32);

U32 syrk_f30(syrkInstance*,U32,U32);

U32 syrk_f31(syrkInstance*,U32,U32);

U32 syrk_f32(syrkInstance*,U32,U32);

U32 syrk_f33(syrkInstance*,U32,U32,U32);

U32 syrk_f34(syrkInstance*);

U32 syrk_f35(syrkInstance*);

U32 syrk_f36(syrkInstance*);

void syrk_f37(syrkInstance*);

U32 syrk_f38(syrkInstance*,U32);

U32 syrk_f39(syrkInstance*,U32);

U32 syrk_f40(syrkInstance*,U32,U32,U32);

U64 syrk_f41(syrkInstance*,U32,U64,U32);

U64 syrk_f42(syrkInstance*,U32,U64,U32);

U32 syrk_f43(syrkInstance*,U32);

U64 syrk_f44(syrkInstance*,U32,U64,U32);

U32 syrk_f45(syrkInstance*,U32);

U32 syrk_f46(syrkInstance*,U32,U32,U32);

U32 syrk_f47(syrkInstance*,U32,U32);

F64 syrk_f48(syrkInstance*,F64,U32);

U32 syrk_f49(syrkInstance*,U32,U32,U32,U32,U32);

U32 syrk_f50(syrkInstance*,U32,U32,U32,U32,U32,U32,U32);

void syrk_f51(syrkInstance*,U32,U32,U32);

U32 syrk_f52(syrkInstance*,U32);

void syrk_f53(syrkInstance*,U32,U32,U32,U32);

U32 syrk_f54(syrkInstance*,U64,U32,U32);

U32 syrk_f55(syrkInstance*,U64,U32);

U32 syrk_f56(syrkInstance*,U64,U32);

void syrk_f57(syrkInstance*,U32,U32,U32,U32,U32);

U32 syrk_f58(syrkInstance*,U32,F64,U32,U32,U32,U32);

U64 syrk_f59(syrkInstance*,F64);

U32 syrk_f60(syrkInstance*,U32,U32,U32);

U32 syrk_f61(syrkInstance*,U32,U32,U32);

U32 syrk_f62(syrkInstance*,U32);

U32 syrk_f63(syrkInstance*,U32,U32,U32);

U32 syrk_f64(syrkInstance*,U32,U32);

U32 syrk_f65(syrkInstance*,U32);

void syrk_f66(syrkInstance*,U32);

U32 syrk_f67(syrkInstance*);

U32 syrk_f68(syrkInstance*,U32);

void syrk_f69(syrkInstance*,U32);

U32 syrk_f70(syrkInstance*);

U32 syrk_f71(syrkInstance*);

void syrk_f72(syrkInstance*,U32);

U32 syrk_f73(syrkInstance*,U32);

U64 syrk_f74(syrkInstance*,U32,U32,U64,U32);

U32 syrk_f75(syrkInstance*,U32,U32,U32,U32,U32);

U32 syrk_f76(syrkInstance*,U32,U64,U32,U32);

wasmMemory*syrk_memory(syrkInstance* i);

void syrk_X5FX5FwasmX5FcallX5Fctors(syrkInstance*i);

U32 syrk_X5FX5FmainX5FargcX5Fargv(syrkInstance*i,U32 l0,U32 l1);

U32 syrk_X5FX5FerrnoX5Flocation(syrkInstance*i);

U32 syrk_stackSave(syrkInstance*i);

void syrk_stackRestore(syrkInstance*i,U32 l0);

U32 syrk_stackAlloc(syrkInstance*i,U32 l0);

U32 syrk_dynCallX5Fjiji(syrkInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void syrkInstantiate(syrkInstance* instance, void* resolve(const char* module, const char* name));

void syrkFreeInstance(syrkInstance* instance);

#endif /* syrk_H */

