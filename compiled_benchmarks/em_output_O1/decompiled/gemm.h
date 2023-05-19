#ifndef gemm_H
#define gemm_H

#include "w2c2_base.h"

typedef struct gemmInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct gemmInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct gemmInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct gemmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct gemmInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct gemmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct gemmInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} gemmInstance;

void gemm_f6(gemmInstance*);

U32 gemm_f7(gemmInstance*,U32,U32);

U32 gemm_f8(gemmInstance*,U32,U32);

void gemm_f9(gemmInstance*);

void gemm_f10(gemmInstance*);

void gemm_f11(gemmInstance*);

U32 gemm_f12(gemmInstance*,U64,U32);

U32 gemm_f13(gemmInstance*);

U32 gemm_f14(gemmInstance*,U32,U32);

U32 gemm_f15(gemmInstance*,U32,U32,U32);

U32 gemm_f16(gemmInstance*,U32,U32,U32);

U32 gemm_f17(gemmInstance*,U32);

void gemm_f18(gemmInstance*,U32);

U32 gemm_f19(gemmInstance*,U32);

U32 gemm_f20(gemmInstance*,U32,U32);

U32 gemm_f21(gemmInstance*,U32,U32);

U32 gemm_f22(gemmInstance*,U32,U32);

U32 gemm_f23(gemmInstance*,U32,U32);

U32 gemm_f24(gemmInstance*,U32);

U32 gemm_f25(gemmInstance*,U32);

void gemm_f26(gemmInstance*,U32);

U32 gemm_f27(gemmInstance*,U32,U32,U32);

U32 gemm_f28(gemmInstance*,U32,U32,U32);

U32 gemm_f29(gemmInstance*,U32,U32,U32,U32);

U32 gemm_f30(gemmInstance*,U32,U32);

U32 gemm_f31(gemmInstance*,U32,U32);

U32 gemm_f32(gemmInstance*,U32,U32);

U32 gemm_f33(gemmInstance*,U32,U32,U32);

U32 gemm_f34(gemmInstance*);

U32 gemm_f35(gemmInstance*);

U32 gemm_f36(gemmInstance*);

void gemm_f37(gemmInstance*);

U32 gemm_f38(gemmInstance*,U32);

U32 gemm_f39(gemmInstance*,U32);

U32 gemm_f40(gemmInstance*,U32,U32,U32);

U64 gemm_f41(gemmInstance*,U32,U64,U32);

U64 gemm_f42(gemmInstance*,U32,U64,U32);

U32 gemm_f43(gemmInstance*,U32);

U64 gemm_f44(gemmInstance*,U32,U64,U32);

U32 gemm_f45(gemmInstance*,U32);

U32 gemm_f46(gemmInstance*,U32,U32,U32);

U32 gemm_f47(gemmInstance*,U32,U32);

F64 gemm_f48(gemmInstance*,F64,U32);

U32 gemm_f49(gemmInstance*,U32,U32,U32,U32,U32);

U32 gemm_f50(gemmInstance*,U32,U32,U32,U32,U32,U32,U32);

void gemm_f51(gemmInstance*,U32,U32,U32);

U32 gemm_f52(gemmInstance*,U32);

void gemm_f53(gemmInstance*,U32,U32,U32,U32);

U32 gemm_f54(gemmInstance*,U64,U32,U32);

U32 gemm_f55(gemmInstance*,U64,U32);

U32 gemm_f56(gemmInstance*,U64,U32);

void gemm_f57(gemmInstance*,U32,U32,U32,U32,U32);

U32 gemm_f58(gemmInstance*,U32,F64,U32,U32,U32,U32);

U64 gemm_f59(gemmInstance*,F64);

U32 gemm_f60(gemmInstance*,U32,U32,U32);

U32 gemm_f61(gemmInstance*,U32,U32,U32);

U32 gemm_f62(gemmInstance*,U32);

U32 gemm_f63(gemmInstance*,U32,U32,U32);

U32 gemm_f64(gemmInstance*,U32,U32);

U32 gemm_f65(gemmInstance*,U32);

void gemm_f66(gemmInstance*,U32);

U32 gemm_f67(gemmInstance*);

U32 gemm_f68(gemmInstance*,U32);

void gemm_f69(gemmInstance*,U32);

U32 gemm_f70(gemmInstance*);

U32 gemm_f71(gemmInstance*);

void gemm_f72(gemmInstance*,U32);

U32 gemm_f73(gemmInstance*,U32);

U64 gemm_f74(gemmInstance*,U32,U32,U64,U32);

U32 gemm_f75(gemmInstance*,U32,U32,U32,U32,U32);

U32 gemm_f76(gemmInstance*,U32,U64,U32,U32);

wasmMemory*gemm_memory(gemmInstance* i);

void gemm_X5FX5FwasmX5FcallX5Fctors(gemmInstance*i);

U32 gemm_X5FX5FmainX5FargcX5Fargv(gemmInstance*i,U32 l0,U32 l1);

U32 gemm_X5FX5FerrnoX5Flocation(gemmInstance*i);

U32 gemm_stackSave(gemmInstance*i);

void gemm_stackRestore(gemmInstance*i,U32 l0);

U32 gemm_stackAlloc(gemmInstance*i,U32 l0);

U32 gemm_dynCallX5Fjiji(gemmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void gemmInstantiate(gemmInstance* instance, void* resolve(const char* module, const char* name));

void gemmFreeInstance(gemmInstance* instance);

#endif /* gemm_H */

