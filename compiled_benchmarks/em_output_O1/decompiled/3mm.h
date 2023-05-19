#ifndef _3mm_H
#define _3mm_H

#include "w2c2_base.h"

typedef struct 3mmInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct 3mmInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct 3mmInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct 3mmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct 3mmInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct 3mmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct 3mmInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} 3mmInstance;

void 3mm_f6(3mmInstance*);

U32 3mm_f7(3mmInstance*,U32,U32);

U32 3mm_f8(3mmInstance*,U32,U32);

void 3mm_f9(3mmInstance*);

void 3mm_f10(3mmInstance*);

void 3mm_f11(3mmInstance*);

U32 3mm_f12(3mmInstance*,U64,U32);

U32 3mm_f13(3mmInstance*);

U32 3mm_f14(3mmInstance*,U32,U32);

U32 3mm_f15(3mmInstance*,U32,U32,U32);

U32 3mm_f16(3mmInstance*,U32,U32,U32);

U32 3mm_f17(3mmInstance*,U32);

void 3mm_f18(3mmInstance*,U32);

U32 3mm_f19(3mmInstance*,U32);

U32 3mm_f20(3mmInstance*,U32,U32);

U32 3mm_f21(3mmInstance*,U32,U32);

U32 3mm_f22(3mmInstance*,U32,U32);

U32 3mm_f23(3mmInstance*,U32,U32);

U32 3mm_f24(3mmInstance*,U32);

U32 3mm_f25(3mmInstance*,U32);

void 3mm_f26(3mmInstance*,U32);

U32 3mm_f27(3mmInstance*,U32,U32,U32);

U32 3mm_f28(3mmInstance*,U32,U32,U32);

U32 3mm_f29(3mmInstance*,U32,U32,U32,U32);

U32 3mm_f30(3mmInstance*,U32,U32);

U32 3mm_f31(3mmInstance*,U32,U32);

U32 3mm_f32(3mmInstance*,U32,U32);

U32 3mm_f33(3mmInstance*,U32,U32,U32);

U32 3mm_f34(3mmInstance*);

U32 3mm_f35(3mmInstance*);

U32 3mm_f36(3mmInstance*);

void 3mm_f37(3mmInstance*);

U32 3mm_f38(3mmInstance*,U32);

U32 3mm_f39(3mmInstance*,U32);

U32 3mm_f40(3mmInstance*,U32,U32,U32);

U64 3mm_f41(3mmInstance*,U32,U64,U32);

U64 3mm_f42(3mmInstance*,U32,U64,U32);

U32 3mm_f43(3mmInstance*,U32);

U64 3mm_f44(3mmInstance*,U32,U64,U32);

U32 3mm_f45(3mmInstance*,U32);

U32 3mm_f46(3mmInstance*,U32,U32,U32);

U32 3mm_f47(3mmInstance*,U32,U32);

F64 3mm_f48(3mmInstance*,F64,U32);

U32 3mm_f49(3mmInstance*,U32,U32,U32,U32,U32);

U32 3mm_f50(3mmInstance*,U32,U32,U32,U32,U32,U32,U32);

void 3mm_f51(3mmInstance*,U32,U32,U32);

U32 3mm_f52(3mmInstance*,U32);

void 3mm_f53(3mmInstance*,U32,U32,U32,U32);

U32 3mm_f54(3mmInstance*,U64,U32,U32);

U32 3mm_f55(3mmInstance*,U64,U32);

U32 3mm_f56(3mmInstance*,U64,U32);

void 3mm_f57(3mmInstance*,U32,U32,U32,U32,U32);

U32 3mm_f58(3mmInstance*,U32,F64,U32,U32,U32,U32);

U64 3mm_f59(3mmInstance*,F64);

U32 3mm_f60(3mmInstance*,U32,U32,U32);

U32 3mm_f61(3mmInstance*,U32,U32,U32);

U32 3mm_f62(3mmInstance*,U32);

U32 3mm_f63(3mmInstance*,U32,U32,U32);

U32 3mm_f64(3mmInstance*,U32,U32);

U32 3mm_f65(3mmInstance*,U32);

void 3mm_f66(3mmInstance*,U32);

U32 3mm_f67(3mmInstance*);

U32 3mm_f68(3mmInstance*,U32);

void 3mm_f69(3mmInstance*,U32);

U32 3mm_f70(3mmInstance*);

U32 3mm_f71(3mmInstance*);

void 3mm_f72(3mmInstance*,U32);

U32 3mm_f73(3mmInstance*,U32);

U64 3mm_f74(3mmInstance*,U32,U32,U64,U32);

U32 3mm_f75(3mmInstance*,U32,U32,U32,U32,U32);

U32 3mm_f76(3mmInstance*,U32,U64,U32,U32);

wasmMemory*3mm_memory(3mmInstance* i);

void 3mm_X5FX5FwasmX5FcallX5Fctors(3mmInstance*i);

U32 3mm_X5FX5FmainX5FargcX5Fargv(3mmInstance*i,U32 l0,U32 l1);

U32 3mm_X5FX5FerrnoX5Flocation(3mmInstance*i);

U32 3mm_stackSave(3mmInstance*i);

void 3mm_stackRestore(3mmInstance*i,U32 l0);

U32 3mm_stackAlloc(3mmInstance*i,U32 l0);

U32 3mm_dynCallX5Fjiji(3mmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void 3mmInstantiate(3mmInstance* instance, void* resolve(const char* module, const char* name));

void 3mmFreeInstance(3mmInstance* instance);

#endif /* 3mm_H */

