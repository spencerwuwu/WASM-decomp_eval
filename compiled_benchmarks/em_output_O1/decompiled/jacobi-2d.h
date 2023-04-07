#ifndef jacobi2d_H
#define jacobi2d_H

#include "w2c2_base.h"

typedef struct jacobi2dInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct jacobi2dInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct jacobi2dInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct jacobi2dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct jacobi2dInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct jacobi2dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct jacobi2dInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} jacobi2dInstance;

void jacobi2d_f6(jacobi2dInstance*);

U32 jacobi2d_f7(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f8(jacobi2dInstance*,U32,U32);

void jacobi2d_f9(jacobi2dInstance*);

void jacobi2d_f10(jacobi2dInstance*);

void jacobi2d_f11(jacobi2dInstance*);

U32 jacobi2d_f12(jacobi2dInstance*,U64,U32);

U32 jacobi2d_f13(jacobi2dInstance*);

U32 jacobi2d_f14(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f15(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f16(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f17(jacobi2dInstance*,U32);

void jacobi2d_f18(jacobi2dInstance*,U32);

U32 jacobi2d_f19(jacobi2dInstance*,U32);

U32 jacobi2d_f20(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f21(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f22(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f23(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f24(jacobi2dInstance*,U32);

U32 jacobi2d_f25(jacobi2dInstance*,U32);

void jacobi2d_f26(jacobi2dInstance*,U32);

U32 jacobi2d_f27(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f28(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f29(jacobi2dInstance*,U32,U32,U32,U32);

U32 jacobi2d_f30(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f31(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f32(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f33(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f34(jacobi2dInstance*);

U32 jacobi2d_f35(jacobi2dInstance*);

U32 jacobi2d_f36(jacobi2dInstance*);

void jacobi2d_f37(jacobi2dInstance*);

U32 jacobi2d_f38(jacobi2dInstance*,U32);

U32 jacobi2d_f39(jacobi2dInstance*,U32);

U32 jacobi2d_f40(jacobi2dInstance*,U32,U32,U32);

U64 jacobi2d_f41(jacobi2dInstance*,U32,U64,U32);

U64 jacobi2d_f42(jacobi2dInstance*,U32,U64,U32);

U32 jacobi2d_f43(jacobi2dInstance*,U32);

U64 jacobi2d_f44(jacobi2dInstance*,U32,U64,U32);

U32 jacobi2d_f45(jacobi2dInstance*,U32);

U32 jacobi2d_f46(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f47(jacobi2dInstance*,U32,U32);

F64 jacobi2d_f48(jacobi2dInstance*,F64,U32);

U32 jacobi2d_f49(jacobi2dInstance*,U32,U32,U32,U32,U32);

U32 jacobi2d_f50(jacobi2dInstance*,U32,U32,U32,U32,U32,U32,U32);

void jacobi2d_f51(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f52(jacobi2dInstance*,U32);

void jacobi2d_f53(jacobi2dInstance*,U32,U32,U32,U32);

U32 jacobi2d_f54(jacobi2dInstance*,U64,U32,U32);

U32 jacobi2d_f55(jacobi2dInstance*,U64,U32);

U32 jacobi2d_f56(jacobi2dInstance*,U64,U32);

void jacobi2d_f57(jacobi2dInstance*,U32,U32,U32,U32,U32);

U32 jacobi2d_f58(jacobi2dInstance*,U32,F64,U32,U32,U32,U32);

U64 jacobi2d_f59(jacobi2dInstance*,F64);

U32 jacobi2d_f60(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f61(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f62(jacobi2dInstance*,U32);

U32 jacobi2d_f63(jacobi2dInstance*,U32,U32,U32);

U32 jacobi2d_f64(jacobi2dInstance*,U32,U32);

U32 jacobi2d_f65(jacobi2dInstance*,U32);

void jacobi2d_f66(jacobi2dInstance*,U32);

U32 jacobi2d_f67(jacobi2dInstance*);

U32 jacobi2d_f68(jacobi2dInstance*,U32);

void jacobi2d_f69(jacobi2dInstance*,U32);

U32 jacobi2d_f70(jacobi2dInstance*);

U32 jacobi2d_f71(jacobi2dInstance*);

void jacobi2d_f72(jacobi2dInstance*,U32);

U32 jacobi2d_f73(jacobi2dInstance*,U32);

U64 jacobi2d_f74(jacobi2dInstance*,U32,U32,U64,U32);

U32 jacobi2d_f75(jacobi2dInstance*,U32,U32,U32,U32,U32);

U32 jacobi2d_f76(jacobi2dInstance*,U32,U64,U32,U32);

wasmMemory*jacobi2d_memory(jacobi2dInstance* i);

void jacobi2d_X5FX5FwasmX5FcallX5Fctors(jacobi2dInstance*i);

U32 jacobi2d_X5FX5FmainX5FargcX5Fargv(jacobi2dInstance*i,U32 l0,U32 l1);

U32 jacobi2d_X5FX5FerrnoX5Flocation(jacobi2dInstance*i);

U32 jacobi2d_stackSave(jacobi2dInstance*i);

void jacobi2d_stackRestore(jacobi2dInstance*i,U32 l0);

U32 jacobi2d_stackAlloc(jacobi2dInstance*i,U32 l0);

U32 jacobi2d_dynCallX5Fjiji(jacobi2dInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void jacobi2dInstantiate(jacobi2dInstance* instance, void* resolve(const char* module, const char* name));

void jacobi2dFreeInstance(jacobi2dInstance* instance);

#endif /* jacobi2d_H */

