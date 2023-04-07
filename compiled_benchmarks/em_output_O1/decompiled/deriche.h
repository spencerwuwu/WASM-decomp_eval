#ifndef deriche_H
#define deriche_H

#include "w2c2_base.h"

typedef struct dericheInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct dericheInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct dericheInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct dericheInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct dericheInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct dericheInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct dericheInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} dericheInstance;

void deriche_f6(dericheInstance*);

U32 deriche_f7(dericheInstance*,U32,U32);

U32 deriche_f8(dericheInstance*,U32,U32);

void deriche_f9(dericheInstance*);

void deriche_f10(dericheInstance*);

void deriche_f11(dericheInstance*);

U32 deriche_f12(dericheInstance*,U64,U32);

U32 deriche_f13(dericheInstance*);

U32 deriche_f14(dericheInstance*,U32,U32);

U32 deriche_f15(dericheInstance*,U32,U32,U32);

U32 deriche_f16(dericheInstance*,U32,U32,U32);

U32 deriche_f17(dericheInstance*,U32);

void deriche_f18(dericheInstance*,U32);

U32 deriche_f19(dericheInstance*,U32);

U32 deriche_f20(dericheInstance*,U32,U32);

U32 deriche_f21(dericheInstance*,U32,U32);

U32 deriche_f22(dericheInstance*,U32,U32);

U32 deriche_f23(dericheInstance*,U32,U32);

U32 deriche_f24(dericheInstance*,U32);

U32 deriche_f25(dericheInstance*,U32);

void deriche_f26(dericheInstance*,U32);

U32 deriche_f27(dericheInstance*,U32,U32,U32);

U32 deriche_f28(dericheInstance*,U32,U32,U32);

U32 deriche_f29(dericheInstance*,U32,U32,U32,U32);

U32 deriche_f30(dericheInstance*,U32,U32);

U32 deriche_f31(dericheInstance*,U32,U32);

U32 deriche_f32(dericheInstance*,U32,U32);

U32 deriche_f33(dericheInstance*,U32,U32,U32);

U32 deriche_f34(dericheInstance*);

U32 deriche_f35(dericheInstance*);

U32 deriche_f36(dericheInstance*);

void deriche_f37(dericheInstance*);

U32 deriche_f38(dericheInstance*,U32);

U32 deriche_f39(dericheInstance*,U32);

U32 deriche_f40(dericheInstance*,U32,U32,U32);

U64 deriche_f41(dericheInstance*,U32,U64,U32);

U64 deriche_f42(dericheInstance*,U32,U64,U32);

U32 deriche_f43(dericheInstance*,U32);

U64 deriche_f44(dericheInstance*,U32,U64,U32);

U32 deriche_f45(dericheInstance*,U32);

U32 deriche_f46(dericheInstance*,U32,U32,U32);

U32 deriche_f47(dericheInstance*,U32,U32);

F64 deriche_f48(dericheInstance*,F64,U32);

U32 deriche_f49(dericheInstance*,U32,U32,U32,U32,U32);

U32 deriche_f50(dericheInstance*,U32,U32,U32,U32,U32,U32,U32);

void deriche_f51(dericheInstance*,U32,U32,U32);

U32 deriche_f52(dericheInstance*,U32);

void deriche_f53(dericheInstance*,U32,U32,U32,U32);

U32 deriche_f54(dericheInstance*,U64,U32,U32);

U32 deriche_f55(dericheInstance*,U64,U32);

U32 deriche_f56(dericheInstance*,U64,U32);

void deriche_f57(dericheInstance*,U32,U32,U32,U32,U32);

U32 deriche_f58(dericheInstance*,U32,F64,U32,U32,U32,U32);

U64 deriche_f59(dericheInstance*,F64);

U32 deriche_f60(dericheInstance*,U32,U32,U32);

U32 deriche_f61(dericheInstance*,U32,U32,U32);

U32 deriche_f62(dericheInstance*,U32);

U32 deriche_f63(dericheInstance*,U32,U32,U32);

U32 deriche_f64(dericheInstance*,U32,U32);

U32 deriche_f65(dericheInstance*,U32);

void deriche_f66(dericheInstance*,U32);

U32 deriche_f67(dericheInstance*);

U32 deriche_f68(dericheInstance*,U32);

void deriche_f69(dericheInstance*,U32);

U32 deriche_f70(dericheInstance*);

U32 deriche_f71(dericheInstance*);

void deriche_f72(dericheInstance*,U32);

U32 deriche_f73(dericheInstance*,U32);

U64 deriche_f74(dericheInstance*,U32,U32,U64,U32);

U32 deriche_f75(dericheInstance*,U32,U32,U32,U32,U32);

U32 deriche_f76(dericheInstance*,U32,U64,U32,U32);

wasmMemory*deriche_memory(dericheInstance* i);

void deriche_X5FX5FwasmX5FcallX5Fctors(dericheInstance*i);

U32 deriche_X5FX5FmainX5FargcX5Fargv(dericheInstance*i,U32 l0,U32 l1);

U32 deriche_X5FX5FerrnoX5Flocation(dericheInstance*i);

U32 deriche_stackSave(dericheInstance*i);

void deriche_stackRestore(dericheInstance*i,U32 l0);

U32 deriche_stackAlloc(dericheInstance*i,U32 l0);

U32 deriche_dynCallX5Fjiji(dericheInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void dericheInstantiate(dericheInstance* instance, void* resolve(const char* module, const char* name));

void dericheFreeInstance(dericheInstance* instance);

#endif /* deriche_H */

