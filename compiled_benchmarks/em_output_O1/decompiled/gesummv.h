#ifndef gesummv_H
#define gesummv_H

#include "w2c2_base.h"

typedef struct gesummvInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct gesummvInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct gesummvInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct gesummvInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct gesummvInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct gesummvInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct gesummvInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} gesummvInstance;

void gesummv_f6(gesummvInstance*);

U32 gesummv_f7(gesummvInstance*,U32,U32);

U32 gesummv_f8(gesummvInstance*,U32,U32);

void gesummv_f9(gesummvInstance*);

void gesummv_f10(gesummvInstance*);

void gesummv_f11(gesummvInstance*);

U32 gesummv_f12(gesummvInstance*,U64,U32);

U32 gesummv_f13(gesummvInstance*);

U32 gesummv_f14(gesummvInstance*,U32,U32);

U32 gesummv_f15(gesummvInstance*,U32,U32,U32);

U32 gesummv_f16(gesummvInstance*,U32,U32,U32);

U32 gesummv_f17(gesummvInstance*,U32);

void gesummv_f18(gesummvInstance*,U32);

U32 gesummv_f19(gesummvInstance*,U32);

U32 gesummv_f20(gesummvInstance*,U32,U32);

U32 gesummv_f21(gesummvInstance*,U32,U32);

U32 gesummv_f22(gesummvInstance*,U32,U32);

U32 gesummv_f23(gesummvInstance*,U32,U32);

U32 gesummv_f24(gesummvInstance*,U32);

U32 gesummv_f25(gesummvInstance*,U32);

void gesummv_f26(gesummvInstance*,U32);

U32 gesummv_f27(gesummvInstance*,U32,U32,U32);

U32 gesummv_f28(gesummvInstance*,U32,U32,U32);

U32 gesummv_f29(gesummvInstance*,U32,U32,U32,U32);

U32 gesummv_f30(gesummvInstance*,U32,U32);

U32 gesummv_f31(gesummvInstance*,U32,U32);

U32 gesummv_f32(gesummvInstance*,U32,U32);

U32 gesummv_f33(gesummvInstance*,U32,U32,U32);

U32 gesummv_f34(gesummvInstance*);

U32 gesummv_f35(gesummvInstance*);

U32 gesummv_f36(gesummvInstance*);

void gesummv_f37(gesummvInstance*);

U32 gesummv_f38(gesummvInstance*,U32);

U32 gesummv_f39(gesummvInstance*,U32);

U32 gesummv_f40(gesummvInstance*,U32,U32,U32);

U64 gesummv_f41(gesummvInstance*,U32,U64,U32);

U64 gesummv_f42(gesummvInstance*,U32,U64,U32);

U32 gesummv_f43(gesummvInstance*,U32);

U64 gesummv_f44(gesummvInstance*,U32,U64,U32);

U32 gesummv_f45(gesummvInstance*,U32);

U32 gesummv_f46(gesummvInstance*,U32,U32,U32);

U32 gesummv_f47(gesummvInstance*,U32,U32);

F64 gesummv_f48(gesummvInstance*,F64,U32);

U32 gesummv_f49(gesummvInstance*,U32,U32,U32,U32,U32);

U32 gesummv_f50(gesummvInstance*,U32,U32,U32,U32,U32,U32,U32);

void gesummv_f51(gesummvInstance*,U32,U32,U32);

U32 gesummv_f52(gesummvInstance*,U32);

void gesummv_f53(gesummvInstance*,U32,U32,U32,U32);

U32 gesummv_f54(gesummvInstance*,U64,U32,U32);

U32 gesummv_f55(gesummvInstance*,U64,U32);

U32 gesummv_f56(gesummvInstance*,U64,U32);

void gesummv_f57(gesummvInstance*,U32,U32,U32,U32,U32);

U32 gesummv_f58(gesummvInstance*,U32,F64,U32,U32,U32,U32);

U64 gesummv_f59(gesummvInstance*,F64);

U32 gesummv_f60(gesummvInstance*,U32,U32,U32);

U32 gesummv_f61(gesummvInstance*,U32,U32,U32);

U32 gesummv_f62(gesummvInstance*,U32);

U32 gesummv_f63(gesummvInstance*,U32,U32,U32);

U32 gesummv_f64(gesummvInstance*,U32,U32);

U32 gesummv_f65(gesummvInstance*,U32);

void gesummv_f66(gesummvInstance*,U32);

U32 gesummv_f67(gesummvInstance*);

U32 gesummv_f68(gesummvInstance*,U32);

void gesummv_f69(gesummvInstance*,U32);

U32 gesummv_f70(gesummvInstance*);

U32 gesummv_f71(gesummvInstance*);

void gesummv_f72(gesummvInstance*,U32);

U32 gesummv_f73(gesummvInstance*,U32);

U64 gesummv_f74(gesummvInstance*,U32,U32,U64,U32);

U32 gesummv_f75(gesummvInstance*,U32,U32,U32,U32,U32);

U32 gesummv_f76(gesummvInstance*,U32,U64,U32,U32);

wasmMemory*gesummv_memory(gesummvInstance* i);

void gesummv_X5FX5FwasmX5FcallX5Fctors(gesummvInstance*i);

U32 gesummv_X5FX5FmainX5FargcX5Fargv(gesummvInstance*i,U32 l0,U32 l1);

U32 gesummv_X5FX5FerrnoX5Flocation(gesummvInstance*i);

U32 gesummv_stackSave(gesummvInstance*i);

void gesummv_stackRestore(gesummvInstance*i,U32 l0);

U32 gesummv_stackAlloc(gesummvInstance*i,U32 l0);

U32 gesummv_dynCallX5Fjiji(gesummvInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void gesummvInstantiate(gesummvInstance* instance, void* resolve(const char* module, const char* name));

void gesummvFreeInstance(gesummvInstance* instance);

#endif /* gesummv_H */

