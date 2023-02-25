#ifndef seidel2d_H
#define seidel2d_H

#include "w2c2_base.h"

typedef struct seidel2dInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct seidel2dInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct seidel2dInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct seidel2dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct seidel2dInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct seidel2dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct seidel2dInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} seidel2dInstance;

void seidel2d_f6(seidel2dInstance*);

U32 seidel2d_f7(seidel2dInstance*,U32,U32);

U32 seidel2d_f8(seidel2dInstance*,U32,U32);

void seidel2d_f9(seidel2dInstance*);

void seidel2d_f10(seidel2dInstance*);

void seidel2d_f11(seidel2dInstance*);

U32 seidel2d_f12(seidel2dInstance*,U64,U32);

U32 seidel2d_f13(seidel2dInstance*);

U32 seidel2d_f14(seidel2dInstance*,U32,U32);

U32 seidel2d_f15(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f16(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f17(seidel2dInstance*,U32);

void seidel2d_f18(seidel2dInstance*,U32);

U32 seidel2d_f19(seidel2dInstance*,U32);

U32 seidel2d_f20(seidel2dInstance*,U32,U32);

U32 seidel2d_f21(seidel2dInstance*,U32,U32);

U32 seidel2d_f22(seidel2dInstance*,U32,U32);

U32 seidel2d_f23(seidel2dInstance*,U32,U32);

U32 seidel2d_f24(seidel2dInstance*,U32);

U32 seidel2d_f25(seidel2dInstance*,U32);

void seidel2d_f26(seidel2dInstance*,U32);

U32 seidel2d_f27(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f28(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f29(seidel2dInstance*,U32,U32,U32,U32);

U32 seidel2d_f30(seidel2dInstance*,U32,U32);

U32 seidel2d_f31(seidel2dInstance*,U32,U32);

U32 seidel2d_f32(seidel2dInstance*,U32,U32);

U32 seidel2d_f33(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f34(seidel2dInstance*);

U32 seidel2d_f35(seidel2dInstance*);

U32 seidel2d_f36(seidel2dInstance*);

void seidel2d_f37(seidel2dInstance*);

U32 seidel2d_f38(seidel2dInstance*,U32);

U32 seidel2d_f39(seidel2dInstance*,U32);

U32 seidel2d_f40(seidel2dInstance*,U32,U32,U32);

U64 seidel2d_f41(seidel2dInstance*,U32,U64,U32);

U64 seidel2d_f42(seidel2dInstance*,U32,U64,U32);

U32 seidel2d_f43(seidel2dInstance*,U32);

U64 seidel2d_f44(seidel2dInstance*,U32,U64,U32);

U32 seidel2d_f45(seidel2dInstance*,U32);

U32 seidel2d_f46(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f47(seidel2dInstance*,U32,U32);

F64 seidel2d_f48(seidel2dInstance*,F64,U32);

U32 seidel2d_f49(seidel2dInstance*,U32,U32,U32,U32,U32);

U32 seidel2d_f50(seidel2dInstance*,U32,U32,U32,U32,U32,U32,U32);

void seidel2d_f51(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f52(seidel2dInstance*,U32);

void seidel2d_f53(seidel2dInstance*,U32,U32,U32,U32);

U32 seidel2d_f54(seidel2dInstance*,U64,U32,U32);

U32 seidel2d_f55(seidel2dInstance*,U64,U32);

U32 seidel2d_f56(seidel2dInstance*,U64,U32);

void seidel2d_f57(seidel2dInstance*,U32,U32,U32,U32,U32);

U32 seidel2d_f58(seidel2dInstance*,U32,F64,U32,U32,U32,U32);

U64 seidel2d_f59(seidel2dInstance*,F64);

U32 seidel2d_f60(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f61(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f62(seidel2dInstance*,U32);

U32 seidel2d_f63(seidel2dInstance*,U32,U32,U32);

U32 seidel2d_f64(seidel2dInstance*,U32,U32);

U32 seidel2d_f65(seidel2dInstance*,U32);

void seidel2d_f66(seidel2dInstance*,U32);

U32 seidel2d_f67(seidel2dInstance*);

U32 seidel2d_f68(seidel2dInstance*,U32);

void seidel2d_f69(seidel2dInstance*,U32);

U32 seidel2d_f70(seidel2dInstance*);

U32 seidel2d_f71(seidel2dInstance*);

void seidel2d_f72(seidel2dInstance*,U32);

U32 seidel2d_f73(seidel2dInstance*,U32);

U64 seidel2d_f74(seidel2dInstance*,U32,U32,U64,U32);

U32 seidel2d_f75(seidel2dInstance*,U32,U32,U32,U32,U32);

U32 seidel2d_f76(seidel2dInstance*,U32,U64,U32,U32);

wasmMemory*seidel2d_memory(seidel2dInstance* i);

void seidel2d_X5FX5FwasmX5FcallX5Fctors(seidel2dInstance*i);

U32 seidel2d_X5FX5FmainX5FargcX5Fargv(seidel2dInstance*i,U32 l0,U32 l1);

U32 seidel2d_X5FX5FerrnoX5Flocation(seidel2dInstance*i);

U32 seidel2d_stackSave(seidel2dInstance*i);

void seidel2d_stackRestore(seidel2dInstance*i,U32 l0);

U32 seidel2d_stackAlloc(seidel2dInstance*i,U32 l0);

U32 seidel2d_dynCallX5Fjiji(seidel2dInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void seidel2dInstantiate(seidel2dInstance* instance, void* resolve(const char* module, const char* name));

void seidel2dFreeInstance(seidel2dInstance* instance);

#endif /* seidel2d_H */

