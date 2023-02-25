#ifndef durbin_H
#define durbin_H

#include "w2c2_base.h"

typedef struct durbinInstance {
void(*env_emscriptenX5FmemcpyX5Fbig)(struct durbinInstance*,U32,U32,U32);
F64(*env_emscriptenX5FdateX5Fnow)(struct durbinInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct durbinInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct durbinInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct durbinInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct durbinInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} durbinInstance;

void durbin_f6(durbinInstance*);

U32 durbin_f7(durbinInstance*,U32,U32);

U32 durbin_f8(durbinInstance*,U32,U32);

void durbin_f9(durbinInstance*);

void durbin_f10(durbinInstance*);

void durbin_f11(durbinInstance*);

U32 durbin_f12(durbinInstance*,U64,U32);

U32 durbin_f13(durbinInstance*,U32,U32,U32);

U32 durbin_f14(durbinInstance*);

U32 durbin_f15(durbinInstance*,U32,U32);

U32 durbin_f16(durbinInstance*,U32,U32,U32);

U32 durbin_f17(durbinInstance*,U32,U32,U32);

U32 durbin_f18(durbinInstance*,U32);

void durbin_f19(durbinInstance*,U32);

U32 durbin_f20(durbinInstance*,U32);

U32 durbin_f21(durbinInstance*,U32,U32);

U32 durbin_f22(durbinInstance*,U32,U32);

U32 durbin_f23(durbinInstance*,U32,U32);

U32 durbin_f24(durbinInstance*,U32,U32);

U32 durbin_f25(durbinInstance*,U32);

U32 durbin_f26(durbinInstance*,U32);

void durbin_f27(durbinInstance*,U32);

U32 durbin_f28(durbinInstance*,U32,U32,U32);

U32 durbin_f29(durbinInstance*,U32,U32,U32,U32);

U32 durbin_f30(durbinInstance*,U32,U32);

U32 durbin_f31(durbinInstance*,U32,U32);

U32 durbin_f32(durbinInstance*,U32,U32);

U32 durbin_f33(durbinInstance*,U32,U32,U32);

U32 durbin_f34(durbinInstance*);

U32 durbin_f35(durbinInstance*);

U32 durbin_f36(durbinInstance*);

void durbin_f37(durbinInstance*);

U32 durbin_f38(durbinInstance*,U32);

U32 durbin_f39(durbinInstance*,U32);

U32 durbin_f40(durbinInstance*,U32,U32,U32);

U64 durbin_f41(durbinInstance*,U32,U64,U32);

U64 durbin_f42(durbinInstance*,U32,U64,U32);

U32 durbin_f43(durbinInstance*,U32);

U64 durbin_f44(durbinInstance*,U32,U64,U32);

U32 durbin_f45(durbinInstance*,U32);

U32 durbin_f46(durbinInstance*,U32,U32,U32);

U32 durbin_f47(durbinInstance*,U32,U32);

F64 durbin_f48(durbinInstance*,F64,U32);

U32 durbin_f49(durbinInstance*,U32,U32,U32,U32,U32);

U32 durbin_f50(durbinInstance*,U32,U32,U32,U32,U32,U32,U32);

void durbin_f51(durbinInstance*,U32,U32,U32);

U32 durbin_f52(durbinInstance*,U32);

void durbin_f53(durbinInstance*,U32,U32,U32,U32);

U32 durbin_f54(durbinInstance*,U64,U32,U32);

U32 durbin_f55(durbinInstance*,U64,U32);

U32 durbin_f56(durbinInstance*,U64,U32);

void durbin_f57(durbinInstance*,U32,U32,U32,U32,U32);

U32 durbin_f58(durbinInstance*,U32,F64,U32,U32,U32,U32);

U64 durbin_f59(durbinInstance*,F64);

U32 durbin_f60(durbinInstance*,U32,U32,U32);

U32 durbin_f61(durbinInstance*,U32,U32,U32);

U32 durbin_f62(durbinInstance*,U32);

U32 durbin_f63(durbinInstance*,U32,U32,U32);

U32 durbin_f64(durbinInstance*,U32,U32);

U32 durbin_f65(durbinInstance*,U32);

void durbin_f66(durbinInstance*,U32);

U32 durbin_f67(durbinInstance*);

U32 durbin_f68(durbinInstance*,U32);

void durbin_f69(durbinInstance*,U32);

U32 durbin_f70(durbinInstance*);

U32 durbin_f71(durbinInstance*);

void durbin_f72(durbinInstance*,U32);

U32 durbin_f73(durbinInstance*,U32);

U64 durbin_f74(durbinInstance*,U32,U32,U64,U32);

U32 durbin_f75(durbinInstance*,U32,U32,U32,U32,U32);

U32 durbin_f76(durbinInstance*,U32,U64,U32,U32);

wasmMemory*durbin_memory(durbinInstance* i);

void durbin_X5FX5FwasmX5FcallX5Fctors(durbinInstance*i);

U32 durbin_X5FX5FmainX5FargcX5Fargv(durbinInstance*i,U32 l0,U32 l1);

U32 durbin_X5FX5FerrnoX5Flocation(durbinInstance*i);

U32 durbin_stackSave(durbinInstance*i);

void durbin_stackRestore(durbinInstance*i,U32 l0);

U32 durbin_stackAlloc(durbinInstance*i,U32 l0);

U32 durbin_dynCallX5Fjiji(durbinInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void durbinInstantiate(durbinInstance* instance, void* resolve(const char* module, const char* name));

void durbinFreeInstance(durbinInstance* instance);

#endif /* durbin_H */

