#ifndef correlation_H
#define correlation_H

#include "w2c2_base.h"

typedef struct correlationInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct correlationInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct correlationInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct correlationInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct correlationInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct correlationInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct correlationInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} correlationInstance;

void correlation_f6(correlationInstance*);

U32 correlation_f7(correlationInstance*,U32,U32);

U32 correlation_f8(correlationInstance*,U32,U32);

void correlation_f9(correlationInstance*);

void correlation_f10(correlationInstance*);

void correlation_f11(correlationInstance*);

U32 correlation_f12(correlationInstance*,U64,U32);

U32 correlation_f13(correlationInstance*);

U32 correlation_f14(correlationInstance*,U32,U32);

U32 correlation_f15(correlationInstance*,U32,U32,U32);

U32 correlation_f16(correlationInstance*,U32,U32,U32);

U32 correlation_f17(correlationInstance*,U32);

void correlation_f18(correlationInstance*,U32);

U32 correlation_f19(correlationInstance*,U32);

U32 correlation_f20(correlationInstance*,U32,U32);

U32 correlation_f21(correlationInstance*,U32,U32);

U32 correlation_f22(correlationInstance*,U32,U32);

U32 correlation_f23(correlationInstance*,U32,U32);

U32 correlation_f24(correlationInstance*,U32);

U32 correlation_f25(correlationInstance*,U32);

void correlation_f26(correlationInstance*,U32);

U32 correlation_f27(correlationInstance*,U32,U32,U32);

U32 correlation_f28(correlationInstance*,U32,U32,U32);

U32 correlation_f29(correlationInstance*,U32,U32,U32,U32);

U32 correlation_f30(correlationInstance*,U32,U32);

U32 correlation_f31(correlationInstance*,U32,U32);

U32 correlation_f32(correlationInstance*,U32,U32);

U32 correlation_f33(correlationInstance*,U32,U32,U32);

U32 correlation_f34(correlationInstance*);

U32 correlation_f35(correlationInstance*);

U32 correlation_f36(correlationInstance*);

void correlation_f37(correlationInstance*);

U32 correlation_f38(correlationInstance*,U32);

U32 correlation_f39(correlationInstance*,U32);

U32 correlation_f40(correlationInstance*,U32,U32,U32);

U64 correlation_f41(correlationInstance*,U32,U64,U32);

U64 correlation_f42(correlationInstance*,U32,U64,U32);

U32 correlation_f43(correlationInstance*,U32);

U64 correlation_f44(correlationInstance*,U32,U64,U32);

U32 correlation_f45(correlationInstance*,U32);

U32 correlation_f46(correlationInstance*,U32,U32,U32);

U32 correlation_f47(correlationInstance*,U32,U32);

F64 correlation_f48(correlationInstance*,F64,U32);

U32 correlation_f49(correlationInstance*,U32,U32,U32,U32,U32);

U32 correlation_f50(correlationInstance*,U32,U32,U32,U32,U32,U32,U32);

void correlation_f51(correlationInstance*,U32,U32,U32);

U32 correlation_f52(correlationInstance*,U32);

void correlation_f53(correlationInstance*,U32,U32,U32,U32);

U32 correlation_f54(correlationInstance*,U64,U32,U32);

U32 correlation_f55(correlationInstance*,U64,U32);

U32 correlation_f56(correlationInstance*,U64,U32);

void correlation_f57(correlationInstance*,U32,U32,U32,U32,U32);

U32 correlation_f58(correlationInstance*,U32,F64,U32,U32,U32,U32);

U64 correlation_f59(correlationInstance*,F64);

U32 correlation_f60(correlationInstance*,U32,U32,U32);

U32 correlation_f61(correlationInstance*,U32,U32,U32);

U32 correlation_f62(correlationInstance*,U32);

U32 correlation_f63(correlationInstance*,U32,U32,U32);

U32 correlation_f64(correlationInstance*,U32,U32);

U32 correlation_f65(correlationInstance*,U32);

void correlation_f66(correlationInstance*,U32);

U32 correlation_f67(correlationInstance*);

U32 correlation_f68(correlationInstance*,U32);

void correlation_f69(correlationInstance*,U32);

U32 correlation_f70(correlationInstance*);

U32 correlation_f71(correlationInstance*);

void correlation_f72(correlationInstance*,U32);

U32 correlation_f73(correlationInstance*,U32);

U64 correlation_f74(correlationInstance*,U32,U32,U64,U32);

U32 correlation_f75(correlationInstance*,U32,U32,U32,U32,U32);

U32 correlation_f76(correlationInstance*,U32,U64,U32,U32);

wasmMemory*correlation_memory(correlationInstance* i);

void correlation_X5FX5FwasmX5FcallX5Fctors(correlationInstance*i);

U32 correlation_X5FX5FmainX5FargcX5Fargv(correlationInstance*i,U32 l0,U32 l1);

U32 correlation_X5FX5FerrnoX5Flocation(correlationInstance*i);

U32 correlation_stackSave(correlationInstance*i);

void correlation_stackRestore(correlationInstance*i,U32 l0);

U32 correlation_stackAlloc(correlationInstance*i,U32 l0);

U32 correlation_dynCallX5Fjiji(correlationInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void correlationInstantiate(correlationInstance* instance, void* resolve(const char* module, const char* name));

void correlationFreeInstance(correlationInstance* instance);

#endif /* correlation_H */

