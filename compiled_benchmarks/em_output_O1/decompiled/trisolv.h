#ifndef trisolv_H
#define trisolv_H

#include "w2c2_base.h"

typedef struct trisolvInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct trisolvInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct trisolvInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct trisolvInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct trisolvInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct trisolvInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct trisolvInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} trisolvInstance;

void trisolv_f6(trisolvInstance*);

U32 trisolv_f7(trisolvInstance*,U32,U32);

U32 trisolv_f8(trisolvInstance*,U32,U32);

void trisolv_f9(trisolvInstance*);

void trisolv_f10(trisolvInstance*);

void trisolv_f11(trisolvInstance*);

U32 trisolv_f12(trisolvInstance*,U64,U32);

U32 trisolv_f13(trisolvInstance*);

U32 trisolv_f14(trisolvInstance*,U32,U32);

U32 trisolv_f15(trisolvInstance*,U32,U32,U32);

U32 trisolv_f16(trisolvInstance*,U32,U32,U32);

U32 trisolv_f17(trisolvInstance*,U32);

void trisolv_f18(trisolvInstance*,U32);

U32 trisolv_f19(trisolvInstance*,U32);

U32 trisolv_f20(trisolvInstance*,U32,U32);

U32 trisolv_f21(trisolvInstance*,U32,U32);

U32 trisolv_f22(trisolvInstance*,U32,U32);

U32 trisolv_f23(trisolvInstance*,U32,U32);

U32 trisolv_f24(trisolvInstance*,U32);

U32 trisolv_f25(trisolvInstance*,U32);

void trisolv_f26(trisolvInstance*,U32);

U32 trisolv_f27(trisolvInstance*,U32,U32,U32);

U32 trisolv_f28(trisolvInstance*,U32,U32,U32);

U32 trisolv_f29(trisolvInstance*,U32,U32,U32,U32);

U32 trisolv_f30(trisolvInstance*,U32,U32);

U32 trisolv_f31(trisolvInstance*,U32,U32);

U32 trisolv_f32(trisolvInstance*,U32,U32);

U32 trisolv_f33(trisolvInstance*,U32,U32,U32);

U32 trisolv_f34(trisolvInstance*);

U32 trisolv_f35(trisolvInstance*);

U32 trisolv_f36(trisolvInstance*);

void trisolv_f37(trisolvInstance*);

U32 trisolv_f38(trisolvInstance*,U32);

U32 trisolv_f39(trisolvInstance*,U32);

U32 trisolv_f40(trisolvInstance*,U32,U32,U32);

U64 trisolv_f41(trisolvInstance*,U32,U64,U32);

U64 trisolv_f42(trisolvInstance*,U32,U64,U32);

U32 trisolv_f43(trisolvInstance*,U32);

U64 trisolv_f44(trisolvInstance*,U32,U64,U32);

U32 trisolv_f45(trisolvInstance*,U32);

U32 trisolv_f46(trisolvInstance*,U32,U32,U32);

U32 trisolv_f47(trisolvInstance*,U32,U32);

F64 trisolv_f48(trisolvInstance*,F64,U32);

U32 trisolv_f49(trisolvInstance*,U32,U32,U32,U32,U32);

U32 trisolv_f50(trisolvInstance*,U32,U32,U32,U32,U32,U32,U32);

void trisolv_f51(trisolvInstance*,U32,U32,U32);

U32 trisolv_f52(trisolvInstance*,U32);

void trisolv_f53(trisolvInstance*,U32,U32,U32,U32);

U32 trisolv_f54(trisolvInstance*,U64,U32,U32);

U32 trisolv_f55(trisolvInstance*,U64,U32);

U32 trisolv_f56(trisolvInstance*,U64,U32);

void trisolv_f57(trisolvInstance*,U32,U32,U32,U32,U32);

U32 trisolv_f58(trisolvInstance*,U32,F64,U32,U32,U32,U32);

U64 trisolv_f59(trisolvInstance*,F64);

U32 trisolv_f60(trisolvInstance*,U32,U32,U32);

U32 trisolv_f61(trisolvInstance*,U32,U32,U32);

U32 trisolv_f62(trisolvInstance*,U32);

U32 trisolv_f63(trisolvInstance*,U32,U32,U32);

U32 trisolv_f64(trisolvInstance*,U32,U32);

U32 trisolv_f65(trisolvInstance*,U32);

void trisolv_f66(trisolvInstance*,U32);

U32 trisolv_f67(trisolvInstance*);

U32 trisolv_f68(trisolvInstance*,U32);

void trisolv_f69(trisolvInstance*,U32);

U32 trisolv_f70(trisolvInstance*);

U32 trisolv_f71(trisolvInstance*);

void trisolv_f72(trisolvInstance*,U32);

U32 trisolv_f73(trisolvInstance*,U32);

U64 trisolv_f74(trisolvInstance*,U32,U32,U64,U32);

U32 trisolv_f75(trisolvInstance*,U32,U32,U32,U32,U32);

U32 trisolv_f76(trisolvInstance*,U32,U64,U32,U32);

wasmMemory*trisolv_memory(trisolvInstance* i);

void trisolv_X5FX5FwasmX5FcallX5Fctors(trisolvInstance*i);

U32 trisolv_X5FX5FmainX5FargcX5Fargv(trisolvInstance*i,U32 l0,U32 l1);

U32 trisolv_X5FX5FerrnoX5Flocation(trisolvInstance*i);

U32 trisolv_stackSave(trisolvInstance*i);

void trisolv_stackRestore(trisolvInstance*i,U32 l0);

U32 trisolv_stackAlloc(trisolvInstance*i,U32 l0);

U32 trisolv_dynCallX5Fjiji(trisolvInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void trisolvInstantiate(trisolvInstance* instance, void* resolve(const char* module, const char* name));

void trisolvFreeInstance(trisolvInstance* instance);

#endif /* trisolv_H */

