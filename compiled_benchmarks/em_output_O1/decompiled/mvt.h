#ifndef mvt_H
#define mvt_H

#include "w2c2_base.h"

typedef struct mvtInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct mvtInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct mvtInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct mvtInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct mvtInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct mvtInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct mvtInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} mvtInstance;

void mvt_f6(mvtInstance*);

U32 mvt_f7(mvtInstance*,U32,U32);

U32 mvt_f8(mvtInstance*,U32,U32);

void mvt_f9(mvtInstance*);

void mvt_f10(mvtInstance*);

void mvt_f11(mvtInstance*);

U32 mvt_f12(mvtInstance*,U64,U32);

U32 mvt_f13(mvtInstance*);

U32 mvt_f14(mvtInstance*,U32,U32);

U32 mvt_f15(mvtInstance*,U32,U32,U32);

U32 mvt_f16(mvtInstance*,U32,U32,U32);

U32 mvt_f17(mvtInstance*,U32);

void mvt_f18(mvtInstance*,U32);

U32 mvt_f19(mvtInstance*,U32);

U32 mvt_f20(mvtInstance*,U32,U32);

U32 mvt_f21(mvtInstance*,U32,U32);

U32 mvt_f22(mvtInstance*,U32,U32);

U32 mvt_f23(mvtInstance*,U32,U32);

U32 mvt_f24(mvtInstance*,U32);

U32 mvt_f25(mvtInstance*,U32);

void mvt_f26(mvtInstance*,U32);

U32 mvt_f27(mvtInstance*,U32,U32,U32);

U32 mvt_f28(mvtInstance*,U32,U32,U32);

U32 mvt_f29(mvtInstance*,U32,U32,U32,U32);

U32 mvt_f30(mvtInstance*,U32,U32);

U32 mvt_f31(mvtInstance*,U32,U32);

U32 mvt_f32(mvtInstance*,U32,U32);

U32 mvt_f33(mvtInstance*,U32,U32,U32);

U32 mvt_f34(mvtInstance*);

U32 mvt_f35(mvtInstance*);

U32 mvt_f36(mvtInstance*);

void mvt_f37(mvtInstance*);

U32 mvt_f38(mvtInstance*,U32);

U32 mvt_f39(mvtInstance*,U32);

U32 mvt_f40(mvtInstance*,U32,U32,U32);

U64 mvt_f41(mvtInstance*,U32,U64,U32);

U64 mvt_f42(mvtInstance*,U32,U64,U32);

U32 mvt_f43(mvtInstance*,U32);

U64 mvt_f44(mvtInstance*,U32,U64,U32);

U32 mvt_f45(mvtInstance*,U32);

U32 mvt_f46(mvtInstance*,U32,U32,U32);

U32 mvt_f47(mvtInstance*,U32,U32);

F64 mvt_f48(mvtInstance*,F64,U32);

U32 mvt_f49(mvtInstance*,U32,U32,U32,U32,U32);

U32 mvt_f50(mvtInstance*,U32,U32,U32,U32,U32,U32,U32);

void mvt_f51(mvtInstance*,U32,U32,U32);

U32 mvt_f52(mvtInstance*,U32);

void mvt_f53(mvtInstance*,U32,U32,U32,U32);

U32 mvt_f54(mvtInstance*,U64,U32,U32);

U32 mvt_f55(mvtInstance*,U64,U32);

U32 mvt_f56(mvtInstance*,U64,U32);

void mvt_f57(mvtInstance*,U32,U32,U32,U32,U32);

U32 mvt_f58(mvtInstance*,U32,F64,U32,U32,U32,U32);

U64 mvt_f59(mvtInstance*,F64);

U32 mvt_f60(mvtInstance*,U32,U32,U32);

U32 mvt_f61(mvtInstance*,U32,U32,U32);

U32 mvt_f62(mvtInstance*,U32);

U32 mvt_f63(mvtInstance*,U32,U32,U32);

U32 mvt_f64(mvtInstance*,U32,U32);

U32 mvt_f65(mvtInstance*,U32);

void mvt_f66(mvtInstance*,U32);

U32 mvt_f67(mvtInstance*);

U32 mvt_f68(mvtInstance*,U32);

void mvt_f69(mvtInstance*,U32);

U32 mvt_f70(mvtInstance*);

U32 mvt_f71(mvtInstance*);

void mvt_f72(mvtInstance*,U32);

U32 mvt_f73(mvtInstance*,U32);

U64 mvt_f74(mvtInstance*,U32,U32,U64,U32);

U32 mvt_f75(mvtInstance*,U32,U32,U32,U32,U32);

U32 mvt_f76(mvtInstance*,U32,U64,U32,U32);

wasmMemory*mvt_memory(mvtInstance* i);

void mvt_X5FX5FwasmX5FcallX5Fctors(mvtInstance*i);

U32 mvt_X5FX5FmainX5FargcX5Fargv(mvtInstance*i,U32 l0,U32 l1);

U32 mvt_X5FX5FerrnoX5Flocation(mvtInstance*i);

U32 mvt_stackSave(mvtInstance*i);

void mvt_stackRestore(mvtInstance*i,U32 l0);

U32 mvt_stackAlloc(mvtInstance*i,U32 l0);

U32 mvt_dynCallX5Fjiji(mvtInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void mvtInstantiate(mvtInstance* instance, void* resolve(const char* module, const char* name));

void mvtFreeInstance(mvtInstance* instance);

#endif /* mvt_H */

