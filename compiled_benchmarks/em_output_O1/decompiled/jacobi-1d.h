#ifndef jacobi1d_H
#define jacobi1d_H

#include "w2c2_base.h"

typedef struct jacobi1dInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct jacobi1dInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct jacobi1dInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct jacobi1dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct jacobi1dInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct jacobi1dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct jacobi1dInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} jacobi1dInstance;

void jacobi1d_f6(jacobi1dInstance*);

U32 jacobi1d_f7(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f8(jacobi1dInstance*,U32,U32);

void jacobi1d_f9(jacobi1dInstance*);

void jacobi1d_f10(jacobi1dInstance*);

void jacobi1d_f11(jacobi1dInstance*);

U32 jacobi1d_f12(jacobi1dInstance*,U64,U32);

U32 jacobi1d_f13(jacobi1dInstance*);

U32 jacobi1d_f14(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f15(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f16(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f17(jacobi1dInstance*,U32);

void jacobi1d_f18(jacobi1dInstance*,U32);

U32 jacobi1d_f19(jacobi1dInstance*,U32);

U32 jacobi1d_f20(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f21(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f22(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f23(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f24(jacobi1dInstance*,U32);

U32 jacobi1d_f25(jacobi1dInstance*,U32);

void jacobi1d_f26(jacobi1dInstance*,U32);

U32 jacobi1d_f27(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f28(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f29(jacobi1dInstance*,U32,U32,U32,U32);

U32 jacobi1d_f30(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f31(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f32(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f33(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f34(jacobi1dInstance*);

U32 jacobi1d_f35(jacobi1dInstance*);

U32 jacobi1d_f36(jacobi1dInstance*);

void jacobi1d_f37(jacobi1dInstance*);

U32 jacobi1d_f38(jacobi1dInstance*,U32);

U32 jacobi1d_f39(jacobi1dInstance*,U32);

U32 jacobi1d_f40(jacobi1dInstance*,U32,U32,U32);

U64 jacobi1d_f41(jacobi1dInstance*,U32,U64,U32);

U64 jacobi1d_f42(jacobi1dInstance*,U32,U64,U32);

U32 jacobi1d_f43(jacobi1dInstance*,U32);

U64 jacobi1d_f44(jacobi1dInstance*,U32,U64,U32);

U32 jacobi1d_f45(jacobi1dInstance*,U32);

U32 jacobi1d_f46(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f47(jacobi1dInstance*,U32,U32);

F64 jacobi1d_f48(jacobi1dInstance*,F64,U32);

U32 jacobi1d_f49(jacobi1dInstance*,U32,U32,U32,U32,U32);

U32 jacobi1d_f50(jacobi1dInstance*,U32,U32,U32,U32,U32,U32,U32);

void jacobi1d_f51(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f52(jacobi1dInstance*,U32);

void jacobi1d_f53(jacobi1dInstance*,U32,U32,U32,U32);

U32 jacobi1d_f54(jacobi1dInstance*,U64,U32,U32);

U32 jacobi1d_f55(jacobi1dInstance*,U64,U32);

U32 jacobi1d_f56(jacobi1dInstance*,U64,U32);

void jacobi1d_f57(jacobi1dInstance*,U32,U32,U32,U32,U32);

U32 jacobi1d_f58(jacobi1dInstance*,U32,F64,U32,U32,U32,U32);

U64 jacobi1d_f59(jacobi1dInstance*,F64);

U32 jacobi1d_f60(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f61(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f62(jacobi1dInstance*,U32);

U32 jacobi1d_f63(jacobi1dInstance*,U32,U32,U32);

U32 jacobi1d_f64(jacobi1dInstance*,U32,U32);

U32 jacobi1d_f65(jacobi1dInstance*,U32);

void jacobi1d_f66(jacobi1dInstance*,U32);

U32 jacobi1d_f67(jacobi1dInstance*);

U32 jacobi1d_f68(jacobi1dInstance*,U32);

void jacobi1d_f69(jacobi1dInstance*,U32);

U32 jacobi1d_f70(jacobi1dInstance*);

U32 jacobi1d_f71(jacobi1dInstance*);

void jacobi1d_f72(jacobi1dInstance*,U32);

U32 jacobi1d_f73(jacobi1dInstance*,U32);

U64 jacobi1d_f74(jacobi1dInstance*,U32,U32,U64,U32);

U32 jacobi1d_f75(jacobi1dInstance*,U32,U32,U32,U32,U32);

U32 jacobi1d_f76(jacobi1dInstance*,U32,U64,U32,U32);

wasmMemory*jacobi1d_memory(jacobi1dInstance* i);

void jacobi1d_X5FX5FwasmX5FcallX5Fctors(jacobi1dInstance*i);

U32 jacobi1d_X5FX5FmainX5FargcX5Fargv(jacobi1dInstance*i,U32 l0,U32 l1);

U32 jacobi1d_X5FX5FerrnoX5Flocation(jacobi1dInstance*i);

U32 jacobi1d_stackSave(jacobi1dInstance*i);

void jacobi1d_stackRestore(jacobi1dInstance*i,U32 l0);

U32 jacobi1d_stackAlloc(jacobi1dInstance*i,U32 l0);

U32 jacobi1d_dynCallX5Fjiji(jacobi1dInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void jacobi1dInstantiate(jacobi1dInstance* instance, void* resolve(const char* module, const char* name));

void jacobi1dFreeInstance(jacobi1dInstance* instance);

#endif /* jacobi1d_H */

