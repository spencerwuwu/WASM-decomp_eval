#ifndef gemver_H
#define gemver_H

#include "w2c2_base.h"

typedef struct gemverInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct gemverInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct gemverInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct gemverInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct gemverInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct gemverInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct gemverInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} gemverInstance;

void gemver_f6(gemverInstance*);

U32 gemver_f7(gemverInstance*,U32,U32);

U32 gemver_f8(gemverInstance*,U32,U32);

void gemver_f9(gemverInstance*);

void gemver_f10(gemverInstance*);

void gemver_f11(gemverInstance*);

U32 gemver_f12(gemverInstance*,U64,U32);

U32 gemver_f13(gemverInstance*);

U32 gemver_f14(gemverInstance*,U32,U32);

U32 gemver_f15(gemverInstance*,U32,U32,U32);

U32 gemver_f16(gemverInstance*,U32,U32,U32);

U32 gemver_f17(gemverInstance*,U32);

void gemver_f18(gemverInstance*,U32);

U32 gemver_f19(gemverInstance*,U32);

U32 gemver_f20(gemverInstance*,U32,U32);

U32 gemver_f21(gemverInstance*,U32,U32);

U32 gemver_f22(gemverInstance*,U32,U32);

U32 gemver_f23(gemverInstance*,U32,U32);

U32 gemver_f24(gemverInstance*,U32);

U32 gemver_f25(gemverInstance*,U32);

void gemver_f26(gemverInstance*,U32);

U32 gemver_f27(gemverInstance*,U32,U32,U32);

U32 gemver_f28(gemverInstance*,U32,U32,U32);

U32 gemver_f29(gemverInstance*,U32,U32,U32,U32);

U32 gemver_f30(gemverInstance*,U32,U32);

U32 gemver_f31(gemverInstance*,U32,U32);

U32 gemver_f32(gemverInstance*,U32,U32);

U32 gemver_f33(gemverInstance*,U32,U32,U32);

U32 gemver_f34(gemverInstance*);

U32 gemver_f35(gemverInstance*);

U32 gemver_f36(gemverInstance*);

void gemver_f37(gemverInstance*);

U32 gemver_f38(gemverInstance*,U32);

U32 gemver_f39(gemverInstance*,U32);

U32 gemver_f40(gemverInstance*,U32,U32,U32);

U64 gemver_f41(gemverInstance*,U32,U64,U32);

U64 gemver_f42(gemverInstance*,U32,U64,U32);

U32 gemver_f43(gemverInstance*,U32);

U64 gemver_f44(gemverInstance*,U32,U64,U32);

U32 gemver_f45(gemverInstance*,U32);

U32 gemver_f46(gemverInstance*,U32,U32,U32);

U32 gemver_f47(gemverInstance*,U32,U32);

F64 gemver_f48(gemverInstance*,F64,U32);

U32 gemver_f49(gemverInstance*,U32,U32,U32,U32,U32);

U32 gemver_f50(gemverInstance*,U32,U32,U32,U32,U32,U32,U32);

void gemver_f51(gemverInstance*,U32,U32,U32);

U32 gemver_f52(gemverInstance*,U32);

void gemver_f53(gemverInstance*,U32,U32,U32,U32);

U32 gemver_f54(gemverInstance*,U64,U32,U32);

U32 gemver_f55(gemverInstance*,U64,U32);

U32 gemver_f56(gemverInstance*,U64,U32);

void gemver_f57(gemverInstance*,U32,U32,U32,U32,U32);

U32 gemver_f58(gemverInstance*,U32,F64,U32,U32,U32,U32);

U64 gemver_f59(gemverInstance*,F64);

U32 gemver_f60(gemverInstance*,U32,U32,U32);

U32 gemver_f61(gemverInstance*,U32,U32,U32);

U32 gemver_f62(gemverInstance*,U32);

U32 gemver_f63(gemverInstance*,U32,U32,U32);

U32 gemver_f64(gemverInstance*,U32,U32);

U32 gemver_f65(gemverInstance*,U32);

void gemver_f66(gemverInstance*,U32);

U32 gemver_f67(gemverInstance*);

U32 gemver_f68(gemverInstance*,U32);

void gemver_f69(gemverInstance*,U32);

U32 gemver_f70(gemverInstance*);

U32 gemver_f71(gemverInstance*);

void gemver_f72(gemverInstance*,U32);

U32 gemver_f73(gemverInstance*,U32);

U64 gemver_f74(gemverInstance*,U32,U32,U64,U32);

U32 gemver_f75(gemverInstance*,U32,U32,U32,U32,U32);

U32 gemver_f76(gemverInstance*,U32,U64,U32,U32);

wasmMemory*gemver_memory(gemverInstance* i);

void gemver_X5FX5FwasmX5FcallX5Fctors(gemverInstance*i);

U32 gemver_X5FX5FmainX5FargcX5Fargv(gemverInstance*i,U32 l0,U32 l1);

U32 gemver_X5FX5FerrnoX5Flocation(gemverInstance*i);

U32 gemver_stackSave(gemverInstance*i);

void gemver_stackRestore(gemverInstance*i,U32 l0);

U32 gemver_stackAlloc(gemverInstance*i,U32 l0);

U32 gemver_dynCallX5Fjiji(gemverInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void gemverInstantiate(gemverInstance* instance, void* resolve(const char* module, const char* name));

void gemverFreeInstance(gemverInstance* instance);

#endif /* gemver_H */

