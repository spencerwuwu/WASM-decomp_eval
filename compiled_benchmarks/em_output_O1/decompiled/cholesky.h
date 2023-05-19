#ifndef cholesky_H
#define cholesky_H

#include "w2c2_base.h"

typedef struct choleskyInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct choleskyInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct choleskyInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct choleskyInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct choleskyInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct choleskyInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct choleskyInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} choleskyInstance;

void cholesky_f6(choleskyInstance*);

U32 cholesky_f7(choleskyInstance*,U32,U32);

U32 cholesky_f8(choleskyInstance*,U32,U32);

void cholesky_f9(choleskyInstance*);

void cholesky_f10(choleskyInstance*);

void cholesky_f11(choleskyInstance*);

U32 cholesky_f12(choleskyInstance*,U64,U32);

U32 cholesky_f13(choleskyInstance*,U32,U32,U32);

U32 cholesky_f14(choleskyInstance*);

U32 cholesky_f15(choleskyInstance*,U32,U32);

U32 cholesky_f16(choleskyInstance*,U32,U32,U32);

U32 cholesky_f17(choleskyInstance*,U32,U32,U32);

U32 cholesky_f18(choleskyInstance*,U32);

void cholesky_f19(choleskyInstance*,U32);

U32 cholesky_f20(choleskyInstance*,U32);

U32 cholesky_f21(choleskyInstance*,U32,U32);

U32 cholesky_f22(choleskyInstance*,U32,U32);

U32 cholesky_f23(choleskyInstance*,U32,U32);

U32 cholesky_f24(choleskyInstance*,U32,U32);

U32 cholesky_f25(choleskyInstance*,U32);

U32 cholesky_f26(choleskyInstance*,U32);

void cholesky_f27(choleskyInstance*,U32);

U32 cholesky_f28(choleskyInstance*,U32,U32,U32);

U32 cholesky_f29(choleskyInstance*,U32,U32,U32);

U32 cholesky_f30(choleskyInstance*,U32,U32,U32,U32);

U32 cholesky_f31(choleskyInstance*,U32,U32);

U32 cholesky_f32(choleskyInstance*,U32,U32);

U32 cholesky_f33(choleskyInstance*,U32,U32);

U32 cholesky_f34(choleskyInstance*);

U32 cholesky_f35(choleskyInstance*);

U32 cholesky_f36(choleskyInstance*);

void cholesky_f37(choleskyInstance*);

U32 cholesky_f38(choleskyInstance*,U32);

U32 cholesky_f39(choleskyInstance*,U32);

U32 cholesky_f40(choleskyInstance*,U32,U32,U32);

U64 cholesky_f41(choleskyInstance*,U32,U64,U32);

U64 cholesky_f42(choleskyInstance*,U32,U64,U32);

U32 cholesky_f43(choleskyInstance*,U32);

U64 cholesky_f44(choleskyInstance*,U32,U64,U32);

U32 cholesky_f45(choleskyInstance*,U32);

U32 cholesky_f46(choleskyInstance*,U32,U32,U32);

U32 cholesky_f47(choleskyInstance*,U32,U32);

F64 cholesky_f48(choleskyInstance*,F64,U32);

U32 cholesky_f49(choleskyInstance*,U32,U32,U32,U32,U32);

U32 cholesky_f50(choleskyInstance*,U32,U32,U32,U32,U32,U32,U32);

void cholesky_f51(choleskyInstance*,U32,U32,U32);

U32 cholesky_f52(choleskyInstance*,U32);

void cholesky_f53(choleskyInstance*,U32,U32,U32,U32);

U32 cholesky_f54(choleskyInstance*,U64,U32,U32);

U32 cholesky_f55(choleskyInstance*,U64,U32);

U32 cholesky_f56(choleskyInstance*,U64,U32);

void cholesky_f57(choleskyInstance*,U32,U32,U32,U32,U32);

U32 cholesky_f58(choleskyInstance*,U32,F64,U32,U32,U32,U32);

U64 cholesky_f59(choleskyInstance*,F64);

U32 cholesky_f60(choleskyInstance*,U32,U32,U32);

U32 cholesky_f61(choleskyInstance*,U32,U32,U32);

U32 cholesky_f62(choleskyInstance*,U32);

U32 cholesky_f63(choleskyInstance*,U32,U32,U32);

U32 cholesky_f64(choleskyInstance*,U32,U32);

U32 cholesky_f65(choleskyInstance*,U32);

void cholesky_f66(choleskyInstance*,U32);

U32 cholesky_f67(choleskyInstance*);

U32 cholesky_f68(choleskyInstance*,U32);

void cholesky_f69(choleskyInstance*,U32);

U32 cholesky_f70(choleskyInstance*);

U32 cholesky_f71(choleskyInstance*);

void cholesky_f72(choleskyInstance*,U32);

U32 cholesky_f73(choleskyInstance*,U32);

U64 cholesky_f74(choleskyInstance*,U32,U32,U64,U32);

U32 cholesky_f75(choleskyInstance*,U32,U32,U32,U32,U32);

U32 cholesky_f76(choleskyInstance*,U32,U64,U32,U32);

wasmMemory*cholesky_memory(choleskyInstance* i);

void cholesky_X5FX5FwasmX5FcallX5Fctors(choleskyInstance*i);

U32 cholesky_X5FX5FmainX5FargcX5Fargv(choleskyInstance*i,U32 l0,U32 l1);

U32 cholesky_X5FX5FerrnoX5Flocation(choleskyInstance*i);

U32 cholesky_stackSave(choleskyInstance*i);

void cholesky_stackRestore(choleskyInstance*i,U32 l0);

U32 cholesky_stackAlloc(choleskyInstance*i,U32 l0);

U32 cholesky_dynCallX5Fjiji(choleskyInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void choleskyInstantiate(choleskyInstance* instance, void* resolve(const char* module, const char* name));

void choleskyFreeInstance(choleskyInstance* instance);

#endif /* cholesky_H */

