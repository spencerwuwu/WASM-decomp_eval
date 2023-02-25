#ifndef covariance_H
#define covariance_H

#include "w2c2_base.h"

typedef struct covarianceInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct covarianceInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct covarianceInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct covarianceInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct covarianceInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct covarianceInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct covarianceInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} covarianceInstance;

void covariance_f6(covarianceInstance*);

U32 covariance_f7(covarianceInstance*,U32,U32);

U32 covariance_f8(covarianceInstance*,U32,U32);

void covariance_f9(covarianceInstance*);

void covariance_f10(covarianceInstance*);

void covariance_f11(covarianceInstance*);

U32 covariance_f12(covarianceInstance*,U64,U32);

U32 covariance_f13(covarianceInstance*);

U32 covariance_f14(covarianceInstance*,U32,U32);

U32 covariance_f15(covarianceInstance*,U32,U32,U32);

U32 covariance_f16(covarianceInstance*,U32,U32,U32);

U32 covariance_f17(covarianceInstance*,U32);

void covariance_f18(covarianceInstance*,U32);

U32 covariance_f19(covarianceInstance*,U32);

U32 covariance_f20(covarianceInstance*,U32,U32);

U32 covariance_f21(covarianceInstance*,U32,U32);

U32 covariance_f22(covarianceInstance*,U32,U32);

U32 covariance_f23(covarianceInstance*,U32,U32);

U32 covariance_f24(covarianceInstance*,U32);

U32 covariance_f25(covarianceInstance*,U32);

void covariance_f26(covarianceInstance*,U32);

U32 covariance_f27(covarianceInstance*,U32,U32,U32);

U32 covariance_f28(covarianceInstance*,U32,U32,U32);

U32 covariance_f29(covarianceInstance*,U32,U32,U32,U32);

U32 covariance_f30(covarianceInstance*,U32,U32);

U32 covariance_f31(covarianceInstance*,U32,U32);

U32 covariance_f32(covarianceInstance*,U32,U32);

U32 covariance_f33(covarianceInstance*,U32,U32,U32);

U32 covariance_f34(covarianceInstance*);

U32 covariance_f35(covarianceInstance*);

U32 covariance_f36(covarianceInstance*);

void covariance_f37(covarianceInstance*);

U32 covariance_f38(covarianceInstance*,U32);

U32 covariance_f39(covarianceInstance*,U32);

U32 covariance_f40(covarianceInstance*,U32,U32,U32);

U64 covariance_f41(covarianceInstance*,U32,U64,U32);

U64 covariance_f42(covarianceInstance*,U32,U64,U32);

U32 covariance_f43(covarianceInstance*,U32);

U64 covariance_f44(covarianceInstance*,U32,U64,U32);

U32 covariance_f45(covarianceInstance*,U32);

U32 covariance_f46(covarianceInstance*,U32,U32,U32);

U32 covariance_f47(covarianceInstance*,U32,U32);

F64 covariance_f48(covarianceInstance*,F64,U32);

U32 covariance_f49(covarianceInstance*,U32,U32,U32,U32,U32);

U32 covariance_f50(covarianceInstance*,U32,U32,U32,U32,U32,U32,U32);

void covariance_f51(covarianceInstance*,U32,U32,U32);

U32 covariance_f52(covarianceInstance*,U32);

void covariance_f53(covarianceInstance*,U32,U32,U32,U32);

U32 covariance_f54(covarianceInstance*,U64,U32,U32);

U32 covariance_f55(covarianceInstance*,U64,U32);

U32 covariance_f56(covarianceInstance*,U64,U32);

void covariance_f57(covarianceInstance*,U32,U32,U32,U32,U32);

U32 covariance_f58(covarianceInstance*,U32,F64,U32,U32,U32,U32);

U64 covariance_f59(covarianceInstance*,F64);

U32 covariance_f60(covarianceInstance*,U32,U32,U32);

U32 covariance_f61(covarianceInstance*,U32,U32,U32);

U32 covariance_f62(covarianceInstance*,U32);

U32 covariance_f63(covarianceInstance*,U32,U32,U32);

U32 covariance_f64(covarianceInstance*,U32,U32);

U32 covariance_f65(covarianceInstance*,U32);

void covariance_f66(covarianceInstance*,U32);

U32 covariance_f67(covarianceInstance*);

U32 covariance_f68(covarianceInstance*,U32);

void covariance_f69(covarianceInstance*,U32);

U32 covariance_f70(covarianceInstance*);

U32 covariance_f71(covarianceInstance*);

void covariance_f72(covarianceInstance*,U32);

U32 covariance_f73(covarianceInstance*,U32);

U64 covariance_f74(covarianceInstance*,U32,U32,U64,U32);

U32 covariance_f75(covarianceInstance*,U32,U32,U32,U32,U32);

U32 covariance_f76(covarianceInstance*,U32,U64,U32,U32);

wasmMemory*covariance_memory(covarianceInstance* i);

void covariance_X5FX5FwasmX5FcallX5Fctors(covarianceInstance*i);

U32 covariance_X5FX5FmainX5FargcX5Fargv(covarianceInstance*i,U32 l0,U32 l1);

U32 covariance_X5FX5FerrnoX5Flocation(covarianceInstance*i);

U32 covariance_stackSave(covarianceInstance*i);

void covariance_stackRestore(covarianceInstance*i,U32 l0);

U32 covariance_stackAlloc(covarianceInstance*i,U32 l0);

U32 covariance_dynCallX5Fjiji(covarianceInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void covarianceInstantiate(covarianceInstance* instance, void* resolve(const char* module, const char* name));

void covarianceFreeInstance(covarianceInstance* instance);

#endif /* covariance_H */

