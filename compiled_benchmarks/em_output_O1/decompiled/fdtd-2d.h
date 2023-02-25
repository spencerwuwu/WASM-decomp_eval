#ifndef fdtd2d_H
#define fdtd2d_H

#include "w2c2_base.h"

typedef struct fdtd2dInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct fdtd2dInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct fdtd2dInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct fdtd2dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct fdtd2dInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct fdtd2dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct fdtd2dInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} fdtd2dInstance;

void fdtd2d_f6(fdtd2dInstance*);

U32 fdtd2d_f7(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f8(fdtd2dInstance*,U32,U32);

void fdtd2d_f9(fdtd2dInstance*);

void fdtd2d_f10(fdtd2dInstance*);

void fdtd2d_f11(fdtd2dInstance*);

U32 fdtd2d_f12(fdtd2dInstance*,U64,U32);

U32 fdtd2d_f13(fdtd2dInstance*);

U32 fdtd2d_f14(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f15(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f16(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f17(fdtd2dInstance*,U32);

void fdtd2d_f18(fdtd2dInstance*,U32);

U32 fdtd2d_f19(fdtd2dInstance*,U32);

U32 fdtd2d_f20(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f21(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f22(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f23(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f24(fdtd2dInstance*,U32);

U32 fdtd2d_f25(fdtd2dInstance*,U32);

void fdtd2d_f26(fdtd2dInstance*,U32);

U32 fdtd2d_f27(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f28(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f29(fdtd2dInstance*,U32,U32,U32,U32);

U32 fdtd2d_f30(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f31(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f32(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f33(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f34(fdtd2dInstance*);

U32 fdtd2d_f35(fdtd2dInstance*);

U32 fdtd2d_f36(fdtd2dInstance*);

void fdtd2d_f37(fdtd2dInstance*);

U32 fdtd2d_f38(fdtd2dInstance*,U32);

U32 fdtd2d_f39(fdtd2dInstance*,U32);

U32 fdtd2d_f40(fdtd2dInstance*,U32,U32,U32);

U64 fdtd2d_f41(fdtd2dInstance*,U32,U64,U32);

U64 fdtd2d_f42(fdtd2dInstance*,U32,U64,U32);

U32 fdtd2d_f43(fdtd2dInstance*,U32);

U64 fdtd2d_f44(fdtd2dInstance*,U32,U64,U32);

U32 fdtd2d_f45(fdtd2dInstance*,U32);

U32 fdtd2d_f46(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f47(fdtd2dInstance*,U32,U32);

F64 fdtd2d_f48(fdtd2dInstance*,F64,U32);

U32 fdtd2d_f49(fdtd2dInstance*,U32,U32,U32,U32,U32);

U32 fdtd2d_f50(fdtd2dInstance*,U32,U32,U32,U32,U32,U32,U32);

void fdtd2d_f51(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f52(fdtd2dInstance*,U32);

void fdtd2d_f53(fdtd2dInstance*,U32,U32,U32,U32);

U32 fdtd2d_f54(fdtd2dInstance*,U64,U32,U32);

U32 fdtd2d_f55(fdtd2dInstance*,U64,U32);

U32 fdtd2d_f56(fdtd2dInstance*,U64,U32);

void fdtd2d_f57(fdtd2dInstance*,U32,U32,U32,U32,U32);

U32 fdtd2d_f58(fdtd2dInstance*,U32,F64,U32,U32,U32,U32);

U64 fdtd2d_f59(fdtd2dInstance*,F64);

U32 fdtd2d_f60(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f61(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f62(fdtd2dInstance*,U32);

U32 fdtd2d_f63(fdtd2dInstance*,U32,U32,U32);

U32 fdtd2d_f64(fdtd2dInstance*,U32,U32);

U32 fdtd2d_f65(fdtd2dInstance*,U32);

void fdtd2d_f66(fdtd2dInstance*,U32);

U32 fdtd2d_f67(fdtd2dInstance*);

U32 fdtd2d_f68(fdtd2dInstance*,U32);

void fdtd2d_f69(fdtd2dInstance*,U32);

U32 fdtd2d_f70(fdtd2dInstance*);

U32 fdtd2d_f71(fdtd2dInstance*);

void fdtd2d_f72(fdtd2dInstance*,U32);

U32 fdtd2d_f73(fdtd2dInstance*,U32);

U64 fdtd2d_f74(fdtd2dInstance*,U32,U32,U64,U32);

U32 fdtd2d_f75(fdtd2dInstance*,U32,U32,U32,U32,U32);

U32 fdtd2d_f76(fdtd2dInstance*,U32,U64,U32,U32);

wasmMemory*fdtd2d_memory(fdtd2dInstance* i);

void fdtd2d_X5FX5FwasmX5FcallX5Fctors(fdtd2dInstance*i);

U32 fdtd2d_X5FX5FmainX5FargcX5Fargv(fdtd2dInstance*i,U32 l0,U32 l1);

U32 fdtd2d_X5FX5FerrnoX5Flocation(fdtd2dInstance*i);

U32 fdtd2d_stackSave(fdtd2dInstance*i);

void fdtd2d_stackRestore(fdtd2dInstance*i,U32 l0);

U32 fdtd2d_stackAlloc(fdtd2dInstance*i,U32 l0);

U32 fdtd2d_dynCallX5Fjiji(fdtd2dInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void fdtd2dInstantiate(fdtd2dInstance* instance, void* resolve(const char* module, const char* name));

void fdtd2dFreeInstance(fdtd2dInstance* instance);

#endif /* fdtd2d_H */

