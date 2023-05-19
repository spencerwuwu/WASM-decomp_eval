#ifndef nussinov_H
#define nussinov_H

#include "w2c2_base.h"

typedef struct nussinovInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct nussinovInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct nussinovInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct nussinovInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct nussinovInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct nussinovInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct nussinovInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} nussinovInstance;

void nussinov_f6(nussinovInstance*);

U32 nussinov_f7(nussinovInstance*,U32,U32);

U32 nussinov_f8(nussinovInstance*,U32,U32);

void nussinov_f9(nussinovInstance*);

void nussinov_f10(nussinovInstance*);

void nussinov_f11(nussinovInstance*);

U32 nussinov_f12(nussinovInstance*,U64,U32);

U32 nussinov_f13(nussinovInstance*,U32,U32,U32);

U32 nussinov_f14(nussinovInstance*);

U32 nussinov_f15(nussinovInstance*,U32,U32);

U32 nussinov_f16(nussinovInstance*,U32,U32,U32);

U32 nussinov_f17(nussinovInstance*,U32);

void nussinov_f18(nussinovInstance*,U32);

U32 nussinov_f19(nussinovInstance*,U32);

U32 nussinov_f20(nussinovInstance*,U32,U32);

U32 nussinov_f21(nussinovInstance*,U32,U32);

U32 nussinov_f22(nussinovInstance*,U32,U32);

U32 nussinov_f23(nussinovInstance*,U32,U32);

U32 nussinov_f24(nussinovInstance*,U32);

U32 nussinov_f25(nussinovInstance*,U32);

void nussinov_f26(nussinovInstance*,U32);

U32 nussinov_f27(nussinovInstance*,U32,U32,U32);

U32 nussinov_f28(nussinovInstance*,U32,U32,U32);

U32 nussinov_f29(nussinovInstance*,U32,U32,U32,U32);

U32 nussinov_f30(nussinovInstance*,U32,U32);

U32 nussinov_f31(nussinovInstance*,U32,U32);

U32 nussinov_f32(nussinovInstance*,U32,U32);

U32 nussinov_f33(nussinovInstance*);

U32 nussinov_f34(nussinovInstance*);

U32 nussinov_f35(nussinovInstance*);

void nussinov_f36(nussinovInstance*);

U32 nussinov_f37(nussinovInstance*,U32);

U32 nussinov_f38(nussinovInstance*,U32);

U32 nussinov_f39(nussinovInstance*,U32,U32,U32);

U64 nussinov_f40(nussinovInstance*,U32,U64,U32);

U64 nussinov_f41(nussinovInstance*,U32,U64,U32);

U32 nussinov_f42(nussinovInstance*,U32);

U64 nussinov_f43(nussinovInstance*,U32,U64,U32);

U32 nussinov_f44(nussinovInstance*,U32);

U32 nussinov_f45(nussinovInstance*,U32,U32,U32);

U32 nussinov_f46(nussinovInstance*,U32,U32);

F64 nussinov_f47(nussinovInstance*,F64,U32);

U32 nussinov_f48(nussinovInstance*,U32,U32,U32,U32,U32);

U32 nussinov_f49(nussinovInstance*,U32,U32,U32,U32,U32,U32,U32);

void nussinov_f50(nussinovInstance*,U32,U32,U32);

U32 nussinov_f51(nussinovInstance*,U32);

void nussinov_f52(nussinovInstance*,U32,U32,U32,U32);

U32 nussinov_f53(nussinovInstance*,U64,U32,U32);

U32 nussinov_f54(nussinovInstance*,U64,U32);

U32 nussinov_f55(nussinovInstance*,U64,U32);

void nussinov_f56(nussinovInstance*,U32,U32,U32,U32,U32);

U32 nussinov_f57(nussinovInstance*,U32,F64,U32,U32,U32,U32);

U64 nussinov_f58(nussinovInstance*,F64);

U32 nussinov_f59(nussinovInstance*,U32,U32,U32);

U32 nussinov_f60(nussinovInstance*,U32,U32,U32);

U32 nussinov_f61(nussinovInstance*,U32);

U32 nussinov_f62(nussinovInstance*,U32,U32,U32);

U32 nussinov_f63(nussinovInstance*,U32,U32);

U32 nussinov_f64(nussinovInstance*,U32);

void nussinov_f65(nussinovInstance*,U32);

U32 nussinov_f66(nussinovInstance*);

U32 nussinov_f67(nussinovInstance*,U32);

void nussinov_f68(nussinovInstance*,U32);

U32 nussinov_f69(nussinovInstance*);

U32 nussinov_f70(nussinovInstance*);

void nussinov_f71(nussinovInstance*,U32);

U32 nussinov_f72(nussinovInstance*,U32);

U64 nussinov_f73(nussinovInstance*,U32,U32,U64,U32);

U32 nussinov_f74(nussinovInstance*,U32,U32,U32,U32,U32);

U32 nussinov_f75(nussinovInstance*,U32,U64,U32,U32);

wasmMemory*nussinov_memory(nussinovInstance* i);

void nussinov_X5FX5FwasmX5FcallX5Fctors(nussinovInstance*i);

U32 nussinov_X5FX5FmainX5FargcX5Fargv(nussinovInstance*i,U32 l0,U32 l1);

U32 nussinov_X5FX5FerrnoX5Flocation(nussinovInstance*i);

U32 nussinov_stackSave(nussinovInstance*i);

void nussinov_stackRestore(nussinovInstance*i,U32 l0);

U32 nussinov_stackAlloc(nussinovInstance*i,U32 l0);

U32 nussinov_dynCallX5Fjiji(nussinovInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void nussinovInstantiate(nussinovInstance* instance, void* resolve(const char* module, const char* name));

void nussinovFreeInstance(nussinovInstance* instance);

#endif /* nussinov_H */

