#ifndef heat3d_H
#define heat3d_H

#include "w2c2_base.h"

typedef struct heat3dInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct heat3dInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct heat3dInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct heat3dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct heat3dInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct heat3dInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct heat3dInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} heat3dInstance;

void heat3d_f6(heat3dInstance*);

U32 heat3d_f7(heat3dInstance*,U32,U32);

U32 heat3d_f8(heat3dInstance*,U32,U32);

void heat3d_f9(heat3dInstance*);

void heat3d_f10(heat3dInstance*);

void heat3d_f11(heat3dInstance*);

U32 heat3d_f12(heat3dInstance*,U64,U32);

U32 heat3d_f13(heat3dInstance*);

U32 heat3d_f14(heat3dInstance*,U32,U32);

U32 heat3d_f15(heat3dInstance*,U32,U32,U32);

U32 heat3d_f16(heat3dInstance*,U32,U32,U32);

U32 heat3d_f17(heat3dInstance*,U32);

void heat3d_f18(heat3dInstance*,U32);

U32 heat3d_f19(heat3dInstance*,U32);

U32 heat3d_f20(heat3dInstance*,U32,U32);

U32 heat3d_f21(heat3dInstance*,U32,U32);

U32 heat3d_f22(heat3dInstance*,U32,U32);

U32 heat3d_f23(heat3dInstance*,U32,U32);

U32 heat3d_f24(heat3dInstance*,U32);

U32 heat3d_f25(heat3dInstance*,U32);

void heat3d_f26(heat3dInstance*,U32);

U32 heat3d_f27(heat3dInstance*,U32,U32,U32);

U32 heat3d_f28(heat3dInstance*,U32,U32,U32);

U32 heat3d_f29(heat3dInstance*,U32,U32,U32,U32);

U32 heat3d_f30(heat3dInstance*,U32,U32);

U32 heat3d_f31(heat3dInstance*,U32,U32);

U32 heat3d_f32(heat3dInstance*,U32,U32);

U32 heat3d_f33(heat3dInstance*,U32,U32,U32);

U32 heat3d_f34(heat3dInstance*);

U32 heat3d_f35(heat3dInstance*);

U32 heat3d_f36(heat3dInstance*);

void heat3d_f37(heat3dInstance*);

U32 heat3d_f38(heat3dInstance*,U32);

U32 heat3d_f39(heat3dInstance*,U32);

U32 heat3d_f40(heat3dInstance*,U32,U32,U32);

U64 heat3d_f41(heat3dInstance*,U32,U64,U32);

U64 heat3d_f42(heat3dInstance*,U32,U64,U32);

U32 heat3d_f43(heat3dInstance*,U32);

U64 heat3d_f44(heat3dInstance*,U32,U64,U32);

U32 heat3d_f45(heat3dInstance*,U32);

U32 heat3d_f46(heat3dInstance*,U32,U32,U32);

U32 heat3d_f47(heat3dInstance*,U32,U32);

F64 heat3d_f48(heat3dInstance*,F64,U32);

U32 heat3d_f49(heat3dInstance*,U32,U32,U32,U32,U32);

U32 heat3d_f50(heat3dInstance*,U32,U32,U32,U32,U32,U32,U32);

void heat3d_f51(heat3dInstance*,U32,U32,U32);

U32 heat3d_f52(heat3dInstance*,U32);

void heat3d_f53(heat3dInstance*,U32,U32,U32,U32);

U32 heat3d_f54(heat3dInstance*,U64,U32,U32);

U32 heat3d_f55(heat3dInstance*,U64,U32);

U32 heat3d_f56(heat3dInstance*,U64,U32);

void heat3d_f57(heat3dInstance*,U32,U32,U32,U32,U32);

U32 heat3d_f58(heat3dInstance*,U32,F64,U32,U32,U32,U32);

U64 heat3d_f59(heat3dInstance*,F64);

U32 heat3d_f60(heat3dInstance*,U32,U32,U32);

U32 heat3d_f61(heat3dInstance*,U32,U32,U32);

U32 heat3d_f62(heat3dInstance*,U32);

U32 heat3d_f63(heat3dInstance*,U32,U32,U32);

U32 heat3d_f64(heat3dInstance*,U32,U32);

U32 heat3d_f65(heat3dInstance*,U32);

void heat3d_f66(heat3dInstance*,U32);

U32 heat3d_f67(heat3dInstance*);

U32 heat3d_f68(heat3dInstance*,U32);

void heat3d_f69(heat3dInstance*,U32);

U32 heat3d_f70(heat3dInstance*);

U32 heat3d_f71(heat3dInstance*);

void heat3d_f72(heat3dInstance*,U32);

U32 heat3d_f73(heat3dInstance*,U32);

U64 heat3d_f74(heat3dInstance*,U32,U32,U64,U32);

U32 heat3d_f75(heat3dInstance*,U32,U32,U32,U32,U32);

U32 heat3d_f76(heat3dInstance*,U32,U64,U32,U32);

wasmMemory*heat3d_memory(heat3dInstance* i);

void heat3d_X5FX5FwasmX5FcallX5Fctors(heat3dInstance*i);

U32 heat3d_X5FX5FmainX5FargcX5Fargv(heat3dInstance*i,U32 l0,U32 l1);

U32 heat3d_X5FX5FerrnoX5Flocation(heat3dInstance*i);

U32 heat3d_stackSave(heat3dInstance*i);

void heat3d_stackRestore(heat3dInstance*i,U32 l0);

U32 heat3d_stackAlloc(heat3dInstance*i,U32 l0);

U32 heat3d_dynCallX5Fjiji(heat3dInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void heat3dInstantiate(heat3dInstance* instance, void* resolve(const char* module, const char* name));

void heat3dFreeInstance(heat3dInstance* instance);

#endif /* heat3d_H */

