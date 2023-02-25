#ifndef doitgen_H
#define doitgen_H

#include "w2c2_base.h"

typedef struct doitgenInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct doitgenInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct doitgenInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct doitgenInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct doitgenInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct doitgenInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct doitgenInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} doitgenInstance;

void doitgen_f6(doitgenInstance*);

U32 doitgen_f7(doitgenInstance*,U32,U32);

U32 doitgen_f8(doitgenInstance*,U32,U32);

void doitgen_f9(doitgenInstance*);

void doitgen_f10(doitgenInstance*);

void doitgen_f11(doitgenInstance*);

U32 doitgen_f12(doitgenInstance*,U64,U32);

U32 doitgen_f13(doitgenInstance*);

U32 doitgen_f14(doitgenInstance*,U32,U32);

U32 doitgen_f15(doitgenInstance*,U32,U32,U32);

U32 doitgen_f16(doitgenInstance*,U32,U32,U32);

U32 doitgen_f17(doitgenInstance*,U32);

void doitgen_f18(doitgenInstance*,U32);

U32 doitgen_f19(doitgenInstance*,U32);

U32 doitgen_f20(doitgenInstance*,U32,U32);

U32 doitgen_f21(doitgenInstance*,U32,U32);

U32 doitgen_f22(doitgenInstance*,U32,U32);

U32 doitgen_f23(doitgenInstance*,U32,U32);

U32 doitgen_f24(doitgenInstance*,U32);

U32 doitgen_f25(doitgenInstance*,U32);

void doitgen_f26(doitgenInstance*,U32);

U32 doitgen_f27(doitgenInstance*,U32,U32,U32);

U32 doitgen_f28(doitgenInstance*,U32,U32,U32);

U32 doitgen_f29(doitgenInstance*,U32,U32,U32,U32);

U32 doitgen_f30(doitgenInstance*,U32,U32);

U32 doitgen_f31(doitgenInstance*,U32,U32);

U32 doitgen_f32(doitgenInstance*,U32,U32);

U32 doitgen_f33(doitgenInstance*,U32,U32,U32);

U32 doitgen_f34(doitgenInstance*);

U32 doitgen_f35(doitgenInstance*);

U32 doitgen_f36(doitgenInstance*);

void doitgen_f37(doitgenInstance*);

U32 doitgen_f38(doitgenInstance*,U32);

U32 doitgen_f39(doitgenInstance*,U32);

U32 doitgen_f40(doitgenInstance*,U32,U32,U32);

U64 doitgen_f41(doitgenInstance*,U32,U64,U32);

U64 doitgen_f42(doitgenInstance*,U32,U64,U32);

U32 doitgen_f43(doitgenInstance*,U32);

U64 doitgen_f44(doitgenInstance*,U32,U64,U32);

U32 doitgen_f45(doitgenInstance*,U32);

U32 doitgen_f46(doitgenInstance*,U32,U32,U32);

U32 doitgen_f47(doitgenInstance*,U32,U32);

F64 doitgen_f48(doitgenInstance*,F64,U32);

U32 doitgen_f49(doitgenInstance*,U32,U32,U32,U32,U32);

U32 doitgen_f50(doitgenInstance*,U32,U32,U32,U32,U32,U32,U32);

void doitgen_f51(doitgenInstance*,U32,U32,U32);

U32 doitgen_f52(doitgenInstance*,U32);

void doitgen_f53(doitgenInstance*,U32,U32,U32,U32);

U32 doitgen_f54(doitgenInstance*,U64,U32,U32);

U32 doitgen_f55(doitgenInstance*,U64,U32);

U32 doitgen_f56(doitgenInstance*,U64,U32);

void doitgen_f57(doitgenInstance*,U32,U32,U32,U32,U32);

U32 doitgen_f58(doitgenInstance*,U32,F64,U32,U32,U32,U32);

U64 doitgen_f59(doitgenInstance*,F64);

U32 doitgen_f60(doitgenInstance*,U32,U32,U32);

U32 doitgen_f61(doitgenInstance*,U32,U32,U32);

U32 doitgen_f62(doitgenInstance*,U32);

U32 doitgen_f63(doitgenInstance*,U32,U32,U32);

U32 doitgen_f64(doitgenInstance*,U32,U32);

U32 doitgen_f65(doitgenInstance*,U32);

void doitgen_f66(doitgenInstance*,U32);

U32 doitgen_f67(doitgenInstance*);

U32 doitgen_f68(doitgenInstance*,U32);

void doitgen_f69(doitgenInstance*,U32);

U32 doitgen_f70(doitgenInstance*);

U32 doitgen_f71(doitgenInstance*);

void doitgen_f72(doitgenInstance*,U32);

U32 doitgen_f73(doitgenInstance*,U32);

U64 doitgen_f74(doitgenInstance*,U32,U32,U64,U32);

U32 doitgen_f75(doitgenInstance*,U32,U32,U32,U32,U32);

U32 doitgen_f76(doitgenInstance*,U32,U64,U32,U32);

wasmMemory*doitgen_memory(doitgenInstance* i);

void doitgen_X5FX5FwasmX5FcallX5Fctors(doitgenInstance*i);

U32 doitgen_X5FX5FmainX5FargcX5Fargv(doitgenInstance*i,U32 l0,U32 l1);

U32 doitgen_X5FX5FerrnoX5Flocation(doitgenInstance*i);

U32 doitgen_stackSave(doitgenInstance*i);

void doitgen_stackRestore(doitgenInstance*i,U32 l0);

U32 doitgen_stackAlloc(doitgenInstance*i,U32 l0);

U32 doitgen_dynCallX5Fjiji(doitgenInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void doitgenInstantiate(doitgenInstance* instance, void* resolve(const char* module, const char* name));

void doitgenFreeInstance(doitgenInstance* instance);

#endif /* doitgen_H */

