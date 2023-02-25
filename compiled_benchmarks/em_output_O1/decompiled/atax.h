#ifndef atax_H
#define atax_H

#include "w2c2_base.h"

typedef struct ataxInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct ataxInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct ataxInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct ataxInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct ataxInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct ataxInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct ataxInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} ataxInstance;

void atax_f6(ataxInstance*);

U32 atax_f7(ataxInstance*,U32,U32);

U32 atax_f8(ataxInstance*,U32,U32);

void atax_f9(ataxInstance*);

void atax_f10(ataxInstance*);

void atax_f11(ataxInstance*);

U32 atax_f12(ataxInstance*,U64,U32);

U32 atax_f13(ataxInstance*,U32,U32,U32);

U32 atax_f14(ataxInstance*);

U32 atax_f15(ataxInstance*,U32,U32);

U32 atax_f16(ataxInstance*,U32,U32,U32);

U32 atax_f17(ataxInstance*,U32,U32,U32);

U32 atax_f18(ataxInstance*,U32);

void atax_f19(ataxInstance*,U32);

U32 atax_f20(ataxInstance*,U32);

U32 atax_f21(ataxInstance*,U32,U32);

U32 atax_f22(ataxInstance*,U32,U32);

U32 atax_f23(ataxInstance*,U32,U32);

U32 atax_f24(ataxInstance*,U32,U32);

U32 atax_f25(ataxInstance*,U32);

U32 atax_f26(ataxInstance*,U32);

void atax_f27(ataxInstance*,U32);

U32 atax_f28(ataxInstance*,U32,U32,U32);

U32 atax_f29(ataxInstance*,U32,U32,U32);

U32 atax_f30(ataxInstance*,U32,U32,U32,U32);

U32 atax_f31(ataxInstance*,U32,U32);

U32 atax_f32(ataxInstance*,U32,U32);

U32 atax_f33(ataxInstance*,U32,U32);

U32 atax_f34(ataxInstance*);

U32 atax_f35(ataxInstance*);

U32 atax_f36(ataxInstance*);

void atax_f37(ataxInstance*);

U32 atax_f38(ataxInstance*,U32);

U32 atax_f39(ataxInstance*,U32);

U32 atax_f40(ataxInstance*,U32,U32,U32);

U64 atax_f41(ataxInstance*,U32,U64,U32);

U64 atax_f42(ataxInstance*,U32,U64,U32);

U32 atax_f43(ataxInstance*,U32);

U64 atax_f44(ataxInstance*,U32,U64,U32);

U32 atax_f45(ataxInstance*,U32);

U32 atax_f46(ataxInstance*,U32,U32,U32);

U32 atax_f47(ataxInstance*,U32,U32);

F64 atax_f48(ataxInstance*,F64,U32);

U32 atax_f49(ataxInstance*,U32,U32,U32,U32,U32);

U32 atax_f50(ataxInstance*,U32,U32,U32,U32,U32,U32,U32);

void atax_f51(ataxInstance*,U32,U32,U32);

U32 atax_f52(ataxInstance*,U32);

void atax_f53(ataxInstance*,U32,U32,U32,U32);

U32 atax_f54(ataxInstance*,U64,U32,U32);

U32 atax_f55(ataxInstance*,U64,U32);

U32 atax_f56(ataxInstance*,U64,U32);

void atax_f57(ataxInstance*,U32,U32,U32,U32,U32);

U32 atax_f58(ataxInstance*,U32,F64,U32,U32,U32,U32);

U64 atax_f59(ataxInstance*,F64);

U32 atax_f60(ataxInstance*,U32,U32,U32);

U32 atax_f61(ataxInstance*,U32,U32,U32);

U32 atax_f62(ataxInstance*,U32);

U32 atax_f63(ataxInstance*,U32,U32,U32);

U32 atax_f64(ataxInstance*,U32,U32);

U32 atax_f65(ataxInstance*,U32);

void atax_f66(ataxInstance*,U32);

U32 atax_f67(ataxInstance*);

U32 atax_f68(ataxInstance*,U32);

void atax_f69(ataxInstance*,U32);

U32 atax_f70(ataxInstance*);

U32 atax_f71(ataxInstance*);

void atax_f72(ataxInstance*,U32);

U32 atax_f73(ataxInstance*,U32);

U64 atax_f74(ataxInstance*,U32,U32,U64,U32);

U32 atax_f75(ataxInstance*,U32,U32,U32,U32,U32);

U32 atax_f76(ataxInstance*,U32,U64,U32,U32);

wasmMemory*atax_memory(ataxInstance* i);

void atax_X5FX5FwasmX5FcallX5Fctors(ataxInstance*i);

U32 atax_X5FX5FmainX5FargcX5Fargv(ataxInstance*i,U32 l0,U32 l1);

U32 atax_X5FX5FerrnoX5Flocation(ataxInstance*i);

U32 atax_stackSave(ataxInstance*i);

void atax_stackRestore(ataxInstance*i,U32 l0);

U32 atax_stackAlloc(ataxInstance*i,U32 l0);

U32 atax_dynCallX5Fjiji(ataxInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void ataxInstantiate(ataxInstance* instance, void* resolve(const char* module, const char* name));

void ataxFreeInstance(ataxInstance* instance);

#endif /* atax_H */

