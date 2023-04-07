#ifndef gsm_H
#define gsm_H

#include "w2c2_base.h"

typedef struct gsmInstance {
void(*env_emscriptenX5FmemcpyX5Fbig)(struct gsmInstance*,U32,U32,U32);
F64(*env_emscriptenX5FdateX5Fnow)(struct gsmInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct gsmInstance*,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} gsmInstance;

void gsm_f3(gsmInstance*);

void gsm_f4(gsmInstance*,U32,U32);

void gsm_f5(gsmInstance*,U32,U32);

void gsm_f6(gsmInstance*,U32);

U32 gsm_f7(gsmInstance*);

U32 gsm_f8(gsmInstance*,U32,U32);

U32 gsm_f9(gsmInstance*,U32,U32,U32);

U32 gsm_f10(gsmInstance*,U32,U32,U32);

U32 gsm_f11(gsmInstance*);

U32 gsm_f12(gsmInstance*,U32,U32);

U32 gsm_f13(gsmInstance*,U32,U32);

U32 gsm_f14(gsmInstance*,U32,U32);

U32 gsm_f15(gsmInstance*,U32,U32,U32);

U32 gsm_f16(gsmInstance*,U32);

U64 gsm_f17(gsmInstance*,U32,U64,U32);

U32 gsm_f18(gsmInstance*,U32);

void gsm_f19(gsmInstance*,U32);

U32 gsm_f20(gsmInstance*,U32);

U32 gsm_f21(gsmInstance*,U32);

U32 gsm_f22(gsmInstance*,U32,U32,U32);

U32 gsm_f23(gsmInstance*,U32,U32);

F64 gsm_f24(gsmInstance*,F64,U32);

U32 gsm_f25(gsmInstance*,U32,U32,U32);

U32 gsm_f26(gsmInstance*,U32,U32,U32,U32,U32);

U32 gsm_f27(gsmInstance*,U32,U32,U32,U32,U32,U32,U32);

void gsm_f28(gsmInstance*,U32,U32,U32);

U32 gsm_f29(gsmInstance*,U32);

void gsm_f30(gsmInstance*,U32,U32,U32,U32);

U32 gsm_f31(gsmInstance*,U64,U32,U32);

U32 gsm_f32(gsmInstance*,U64,U32);

U32 gsm_f33(gsmInstance*,U64,U32);

void gsm_f34(gsmInstance*,U32,U32,U32,U32,U32);

U32 gsm_f35(gsmInstance*,U32,F64,U32,U32,U32,U32);

U64 gsm_f36(gsmInstance*,F64);

U32 gsm_f37(gsmInstance*,U32,U32,U32);

U32 gsm_f38(gsmInstance*,U32,U32,U32);

U32 gsm_f39(gsmInstance*,U32);

U32 gsm_f40(gsmInstance*);

U32 gsm_f41(gsmInstance*);

U32 gsm_f42(gsmInstance*);

void gsm_f43(gsmInstance*);

U32 gsm_f44(gsmInstance*,U32,U32,U32);

U32 gsm_f45(gsmInstance*,U32,U32);

void gsm_f46(gsmInstance*,U32);

U32 gsm_f47(gsmInstance*);

U32 gsm_f48(gsmInstance*);

void gsm_f49(gsmInstance*,U32);

U32 gsm_f50(gsmInstance*,U32);

U64 gsm_f51(gsmInstance*,U32,U32,U64,U32);

U32 gsm_f52(gsmInstance*,U32,U32,U32,U32,U32);

wasmMemory*gsm_memory(gsmInstance* i);

void gsm_X5FX5FwasmX5FcallX5Fctors(gsmInstance*i);

U32 gsm_X5FX5FmainX5FargcX5Fargv(gsmInstance*i,U32 l0,U32 l1);

U32 gsm_X5FX5FerrnoX5Flocation(gsmInstance*i);

U32 gsm_stackSave(gsmInstance*i);

void gsm_stackRestore(gsmInstance*i,U32 l0);

U32 gsm_stackAlloc(gsmInstance*i,U32 l0);

U32 gsm_dynCallX5Fjiji(gsmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void gsmInstantiate(gsmInstance* instance, void* resolve(const char* module, const char* name));

void gsmFreeInstance(gsmInstance* instance);

#endif /* gsm_H */

