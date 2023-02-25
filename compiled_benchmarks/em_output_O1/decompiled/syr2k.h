#ifndef syr2k_H
#define syr2k_H

#include "w2c2_base.h"

typedef struct syr2kInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct syr2kInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct syr2kInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct syr2kInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct syr2kInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct syr2kInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct syr2kInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} syr2kInstance;

void syr2k_f6(syr2kInstance*);

U32 syr2k_f7(syr2kInstance*,U32,U32);

U32 syr2k_f8(syr2kInstance*,U32,U32);

void syr2k_f9(syr2kInstance*);

void syr2k_f10(syr2kInstance*);

void syr2k_f11(syr2kInstance*);

U32 syr2k_f12(syr2kInstance*,U64,U32);

U32 syr2k_f13(syr2kInstance*);

U32 syr2k_f14(syr2kInstance*,U32,U32);

U32 syr2k_f15(syr2kInstance*,U32,U32,U32);

U32 syr2k_f16(syr2kInstance*,U32,U32,U32);

U32 syr2k_f17(syr2kInstance*,U32);

void syr2k_f18(syr2kInstance*,U32);

U32 syr2k_f19(syr2kInstance*,U32);

U32 syr2k_f20(syr2kInstance*,U32,U32);

U32 syr2k_f21(syr2kInstance*,U32,U32);

U32 syr2k_f22(syr2kInstance*,U32,U32);

U32 syr2k_f23(syr2kInstance*,U32,U32);

U32 syr2k_f24(syr2kInstance*,U32);

U32 syr2k_f25(syr2kInstance*,U32);

void syr2k_f26(syr2kInstance*,U32);

U32 syr2k_f27(syr2kInstance*,U32,U32,U32);

U32 syr2k_f28(syr2kInstance*,U32,U32,U32);

U32 syr2k_f29(syr2kInstance*,U32,U32,U32,U32);

U32 syr2k_f30(syr2kInstance*,U32,U32);

U32 syr2k_f31(syr2kInstance*,U32,U32);

U32 syr2k_f32(syr2kInstance*,U32,U32);

U32 syr2k_f33(syr2kInstance*,U32,U32,U32);

U32 syr2k_f34(syr2kInstance*);

U32 syr2k_f35(syr2kInstance*);

U32 syr2k_f36(syr2kInstance*);

void syr2k_f37(syr2kInstance*);

U32 syr2k_f38(syr2kInstance*,U32);

U32 syr2k_f39(syr2kInstance*,U32);

U32 syr2k_f40(syr2kInstance*,U32,U32,U32);

U64 syr2k_f41(syr2kInstance*,U32,U64,U32);

U64 syr2k_f42(syr2kInstance*,U32,U64,U32);

U32 syr2k_f43(syr2kInstance*,U32);

U64 syr2k_f44(syr2kInstance*,U32,U64,U32);

U32 syr2k_f45(syr2kInstance*,U32);

U32 syr2k_f46(syr2kInstance*,U32,U32,U32);

U32 syr2k_f47(syr2kInstance*,U32,U32);

F64 syr2k_f48(syr2kInstance*,F64,U32);

U32 syr2k_f49(syr2kInstance*,U32,U32,U32,U32,U32);

U32 syr2k_f50(syr2kInstance*,U32,U32,U32,U32,U32,U32,U32);

void syr2k_f51(syr2kInstance*,U32,U32,U32);

U32 syr2k_f52(syr2kInstance*,U32);

void syr2k_f53(syr2kInstance*,U32,U32,U32,U32);

U32 syr2k_f54(syr2kInstance*,U64,U32,U32);

U32 syr2k_f55(syr2kInstance*,U64,U32);

U32 syr2k_f56(syr2kInstance*,U64,U32);

void syr2k_f57(syr2kInstance*,U32,U32,U32,U32,U32);

U32 syr2k_f58(syr2kInstance*,U32,F64,U32,U32,U32,U32);

U64 syr2k_f59(syr2kInstance*,F64);

U32 syr2k_f60(syr2kInstance*,U32,U32,U32);

U32 syr2k_f61(syr2kInstance*,U32,U32,U32);

U32 syr2k_f62(syr2kInstance*,U32);

U32 syr2k_f63(syr2kInstance*,U32,U32,U32);

U32 syr2k_f64(syr2kInstance*,U32,U32);

U32 syr2k_f65(syr2kInstance*,U32);

void syr2k_f66(syr2kInstance*,U32);

U32 syr2k_f67(syr2kInstance*);

U32 syr2k_f68(syr2kInstance*,U32);

void syr2k_f69(syr2kInstance*,U32);

U32 syr2k_f70(syr2kInstance*);

U32 syr2k_f71(syr2kInstance*);

void syr2k_f72(syr2kInstance*,U32);

U32 syr2k_f73(syr2kInstance*,U32);

U64 syr2k_f74(syr2kInstance*,U32,U32,U64,U32);

U32 syr2k_f75(syr2kInstance*,U32,U32,U32,U32,U32);

U32 syr2k_f76(syr2kInstance*,U32,U64,U32,U32);

wasmMemory*syr2k_memory(syr2kInstance* i);

void syr2k_X5FX5FwasmX5FcallX5Fctors(syr2kInstance*i);

U32 syr2k_X5FX5FmainX5FargcX5Fargv(syr2kInstance*i,U32 l0,U32 l1);

U32 syr2k_X5FX5FerrnoX5Flocation(syr2kInstance*i);

U32 syr2k_stackSave(syr2kInstance*i);

void syr2k_stackRestore(syr2kInstance*i,U32 l0);

U32 syr2k_stackAlloc(syr2kInstance*i,U32 l0);

U32 syr2k_dynCallX5Fjiji(syr2kInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void syr2kInstantiate(syr2kInstance* instance, void* resolve(const char* module, const char* name));

void syr2kFreeInstance(syr2kInstance* instance);

#endif /* syr2k_H */

