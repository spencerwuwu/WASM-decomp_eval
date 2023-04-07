#ifndef _2mm_H
#define _2mm_H

#include "w2c2_base.h"

typedef struct 2mmInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct 2mmInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct 2mmInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct 2mmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct 2mmInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct 2mmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct 2mmInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} 2mmInstance;

void 2mm_f6(2mmInstance*);

U32 2mm_f7(2mmInstance*,U32,U32);

U32 2mm_f8(2mmInstance*,U32,U32);

void 2mm_f9(2mmInstance*);

void 2mm_f10(2mmInstance*);

void 2mm_f11(2mmInstance*);

U32 2mm_f12(2mmInstance*,U64,U32);

U32 2mm_f13(2mmInstance*);

U32 2mm_f14(2mmInstance*,U32,U32);

U32 2mm_f15(2mmInstance*,U32,U32,U32);

U32 2mm_f16(2mmInstance*,U32,U32,U32);

U32 2mm_f17(2mmInstance*,U32);

void 2mm_f18(2mmInstance*,U32);

U32 2mm_f19(2mmInstance*,U32);

U32 2mm_f20(2mmInstance*,U32,U32);

U32 2mm_f21(2mmInstance*,U32,U32);

U32 2mm_f22(2mmInstance*,U32,U32);

U32 2mm_f23(2mmInstance*,U32,U32);

U32 2mm_f24(2mmInstance*,U32);

U32 2mm_f25(2mmInstance*,U32);

void 2mm_f26(2mmInstance*,U32);

U32 2mm_f27(2mmInstance*,U32,U32,U32);

U32 2mm_f28(2mmInstance*,U32,U32,U32);

U32 2mm_f29(2mmInstance*,U32,U32,U32,U32);

U32 2mm_f30(2mmInstance*,U32,U32);

U32 2mm_f31(2mmInstance*,U32,U32);

U32 2mm_f32(2mmInstance*,U32,U32);

U32 2mm_f33(2mmInstance*,U32,U32,U32);

U32 2mm_f34(2mmInstance*);

U32 2mm_f35(2mmInstance*);

U32 2mm_f36(2mmInstance*);

void 2mm_f37(2mmInstance*);

U32 2mm_f38(2mmInstance*,U32);

U32 2mm_f39(2mmInstance*,U32);

U32 2mm_f40(2mmInstance*,U32,U32,U32);

U64 2mm_f41(2mmInstance*,U32,U64,U32);

U64 2mm_f42(2mmInstance*,U32,U64,U32);

U32 2mm_f43(2mmInstance*,U32);

U64 2mm_f44(2mmInstance*,U32,U64,U32);

U32 2mm_f45(2mmInstance*,U32);

U32 2mm_f46(2mmInstance*,U32,U32,U32);

U32 2mm_f47(2mmInstance*,U32,U32);

F64 2mm_f48(2mmInstance*,F64,U32);

U32 2mm_f49(2mmInstance*,U32,U32,U32,U32,U32);

U32 2mm_f50(2mmInstance*,U32,U32,U32,U32,U32,U32,U32);

void 2mm_f51(2mmInstance*,U32,U32,U32);

U32 2mm_f52(2mmInstance*,U32);

void 2mm_f53(2mmInstance*,U32,U32,U32,U32);

U32 2mm_f54(2mmInstance*,U64,U32,U32);

U32 2mm_f55(2mmInstance*,U64,U32);

U32 2mm_f56(2mmInstance*,U64,U32);

void 2mm_f57(2mmInstance*,U32,U32,U32,U32,U32);

U32 2mm_f58(2mmInstance*,U32,F64,U32,U32,U32,U32);

U64 2mm_f59(2mmInstance*,F64);

U32 2mm_f60(2mmInstance*,U32,U32,U32);

U32 2mm_f61(2mmInstance*,U32,U32,U32);

U32 2mm_f62(2mmInstance*,U32);

U32 2mm_f63(2mmInstance*,U32,U32,U32);

U32 2mm_f64(2mmInstance*,U32,U32);

U32 2mm_f65(2mmInstance*,U32);

void 2mm_f66(2mmInstance*,U32);

U32 2mm_f67(2mmInstance*);

U32 2mm_f68(2mmInstance*,U32);

void 2mm_f69(2mmInstance*,U32);

U32 2mm_f70(2mmInstance*);

U32 2mm_f71(2mmInstance*);

void 2mm_f72(2mmInstance*,U32);

U32 2mm_f73(2mmInstance*,U32);

U64 2mm_f74(2mmInstance*,U32,U32,U64,U32);

U32 2mm_f75(2mmInstance*,U32,U32,U32,U32,U32);

U32 2mm_f76(2mmInstance*,U32,U64,U32,U32);

wasmMemory*2mm_memory(2mmInstance* i);

void 2mm_X5FX5FwasmX5FcallX5Fctors(2mmInstance*i);

U32 2mm_X5FX5FmainX5FargcX5Fargv(2mmInstance*i,U32 l0,U32 l1);

U32 2mm_X5FX5FerrnoX5Flocation(2mmInstance*i);

U32 2mm_stackSave(2mmInstance*i);

void 2mm_stackRestore(2mmInstance*i,U32 l0);

U32 2mm_stackAlloc(2mmInstance*i,U32 l0);

U32 2mm_dynCallX5Fjiji(2mmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void 2mmInstantiate(2mmInstance* instance, void* resolve(const char* module, const char* name));

void 2mmFreeInstance(2mmInstance* instance);

#endif /* 2mm_H */

