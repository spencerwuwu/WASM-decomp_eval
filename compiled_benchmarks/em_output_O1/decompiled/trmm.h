#ifndef trmm_H
#define trmm_H

#include "w2c2_base.h"

typedef struct trmmInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct trmmInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct trmmInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct trmmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct trmmInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct trmmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct trmmInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} trmmInstance;

void trmm_f6(trmmInstance*);

U32 trmm_f7(trmmInstance*,U32,U32);

U32 trmm_f8(trmmInstance*,U32,U32);

void trmm_f9(trmmInstance*);

void trmm_f10(trmmInstance*);

void trmm_f11(trmmInstance*);

U32 trmm_f12(trmmInstance*,U64,U32);

U32 trmm_f13(trmmInstance*);

U32 trmm_f14(trmmInstance*,U32,U32);

U32 trmm_f15(trmmInstance*,U32,U32,U32);

U32 trmm_f16(trmmInstance*,U32,U32,U32);

U32 trmm_f17(trmmInstance*,U32);

void trmm_f18(trmmInstance*,U32);

U32 trmm_f19(trmmInstance*,U32);

U32 trmm_f20(trmmInstance*,U32,U32);

U32 trmm_f21(trmmInstance*,U32,U32);

U32 trmm_f22(trmmInstance*,U32,U32);

U32 trmm_f23(trmmInstance*,U32,U32);

U32 trmm_f24(trmmInstance*,U32);

U32 trmm_f25(trmmInstance*,U32);

void trmm_f26(trmmInstance*,U32);

U32 trmm_f27(trmmInstance*,U32,U32,U32);

U32 trmm_f28(trmmInstance*,U32,U32,U32);

U32 trmm_f29(trmmInstance*,U32,U32,U32,U32);

U32 trmm_f30(trmmInstance*,U32,U32);

U32 trmm_f31(trmmInstance*,U32,U32);

U32 trmm_f32(trmmInstance*,U32,U32);

U32 trmm_f33(trmmInstance*,U32,U32,U32);

U32 trmm_f34(trmmInstance*);

U32 trmm_f35(trmmInstance*);

U32 trmm_f36(trmmInstance*);

void trmm_f37(trmmInstance*);

U32 trmm_f38(trmmInstance*,U32);

U32 trmm_f39(trmmInstance*,U32);

U32 trmm_f40(trmmInstance*,U32,U32,U32);

U64 trmm_f41(trmmInstance*,U32,U64,U32);

U64 trmm_f42(trmmInstance*,U32,U64,U32);

U32 trmm_f43(trmmInstance*,U32);

U64 trmm_f44(trmmInstance*,U32,U64,U32);

U32 trmm_f45(trmmInstance*,U32);

U32 trmm_f46(trmmInstance*,U32,U32,U32);

U32 trmm_f47(trmmInstance*,U32,U32);

F64 trmm_f48(trmmInstance*,F64,U32);

U32 trmm_f49(trmmInstance*,U32,U32,U32,U32,U32);

U32 trmm_f50(trmmInstance*,U32,U32,U32,U32,U32,U32,U32);

void trmm_f51(trmmInstance*,U32,U32,U32);

U32 trmm_f52(trmmInstance*,U32);

void trmm_f53(trmmInstance*,U32,U32,U32,U32);

U32 trmm_f54(trmmInstance*,U64,U32,U32);

U32 trmm_f55(trmmInstance*,U64,U32);

U32 trmm_f56(trmmInstance*,U64,U32);

void trmm_f57(trmmInstance*,U32,U32,U32,U32,U32);

U32 trmm_f58(trmmInstance*,U32,F64,U32,U32,U32,U32);

U64 trmm_f59(trmmInstance*,F64);

U32 trmm_f60(trmmInstance*,U32,U32,U32);

U32 trmm_f61(trmmInstance*,U32,U32,U32);

U32 trmm_f62(trmmInstance*,U32);

U32 trmm_f63(trmmInstance*,U32,U32,U32);

U32 trmm_f64(trmmInstance*,U32,U32);

U32 trmm_f65(trmmInstance*,U32);

void trmm_f66(trmmInstance*,U32);

U32 trmm_f67(trmmInstance*);

U32 trmm_f68(trmmInstance*,U32);

void trmm_f69(trmmInstance*,U32);

U32 trmm_f70(trmmInstance*);

U32 trmm_f71(trmmInstance*);

void trmm_f72(trmmInstance*,U32);

U32 trmm_f73(trmmInstance*,U32);

U64 trmm_f74(trmmInstance*,U32,U32,U64,U32);

U32 trmm_f75(trmmInstance*,U32,U32,U32,U32,U32);

U32 trmm_f76(trmmInstance*,U32,U64,U32,U32);

wasmMemory*trmm_memory(trmmInstance* i);

void trmm_X5FX5FwasmX5FcallX5Fctors(trmmInstance*i);

U32 trmm_X5FX5FmainX5FargcX5Fargv(trmmInstance*i,U32 l0,U32 l1);

U32 trmm_X5FX5FerrnoX5Flocation(trmmInstance*i);

U32 trmm_stackSave(trmmInstance*i);

void trmm_stackRestore(trmmInstance*i,U32 l0);

U32 trmm_stackAlloc(trmmInstance*i,U32 l0);

U32 trmm_dynCallX5Fjiji(trmmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void trmmInstantiate(trmmInstance* instance, void* resolve(const char* module, const char* name));

void trmmFreeInstance(trmmInstance* instance);

#endif /* trmm_H */

