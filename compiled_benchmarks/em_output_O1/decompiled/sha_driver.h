#ifndef shadriver_H
#define shadriver_H

#include "w2c2_base.h"

typedef struct shadriverInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct shadriverInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct shadriverInstance*,U32,U32,U32,U32);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct shadriverInstance*,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} shadriverInstance;

void shadriver_f3(shadriverInstance*);

void shadriver_f4(shadriverInstance*,U32,U32);

void shadriver_f5(shadriverInstance*);

void shadriver_f6(shadriverInstance*);

U32 shadriver_f7(shadriverInstance*);

U32 shadriver_f8(shadriverInstance*,U32,U32);

U32 shadriver_f9(shadriverInstance*,U32,U32,U32);

U32 shadriver_f10(shadriverInstance*);

U32 shadriver_f11(shadriverInstance*,U32,U32);

U32 shadriver_f12(shadriverInstance*,U32,U32);

U32 shadriver_f13(shadriverInstance*,U32,U32);

U32 shadriver_f14(shadriverInstance*,U32,U32,U32);

U32 shadriver_f15(shadriverInstance*,U32);

U64 shadriver_f16(shadriverInstance*,U32,U64,U32);

U32 shadriver_f17(shadriverInstance*,U32);

void shadriver_f18(shadriverInstance*,U32);

U32 shadriver_f19(shadriverInstance*,U32);

U32 shadriver_f20(shadriverInstance*,U32);

U32 shadriver_f21(shadriverInstance*,U32,U32,U32);

U32 shadriver_f22(shadriverInstance*,U32,U32);

F64 shadriver_f23(shadriverInstance*,F64,U32);

U32 shadriver_f24(shadriverInstance*,U32,U32,U32);

U32 shadriver_f25(shadriverInstance*,U32,U32,U32);

U32 shadriver_f26(shadriverInstance*,U32,U32,U32,U32,U32);

U32 shadriver_f27(shadriverInstance*,U32,U32,U32,U32,U32,U32,U32);

void shadriver_f28(shadriverInstance*,U32,U32,U32);

U32 shadriver_f29(shadriverInstance*,U32);

void shadriver_f30(shadriverInstance*,U32,U32,U32,U32);

U32 shadriver_f31(shadriverInstance*,U64,U32,U32);

U32 shadriver_f32(shadriverInstance*,U64,U32);

U32 shadriver_f33(shadriverInstance*,U64,U32);

void shadriver_f34(shadriverInstance*,U32,U32,U32,U32,U32);

U32 shadriver_f35(shadriverInstance*,U32,F64,U32,U32,U32,U32);

U64 shadriver_f36(shadriverInstance*,F64);

U32 shadriver_f37(shadriverInstance*,U32,U32,U32);

U32 shadriver_f38(shadriverInstance*,U32,U32,U32);

U32 shadriver_f39(shadriverInstance*,U32);

U32 shadriver_f40(shadriverInstance*);

U32 shadriver_f41(shadriverInstance*);

U32 shadriver_f42(shadriverInstance*);

void shadriver_f43(shadriverInstance*);

U32 shadriver_f44(shadriverInstance*,U32,U32,U32);

U32 shadriver_f45(shadriverInstance*,U32,U32);

void shadriver_f46(shadriverInstance*,U32);

U32 shadriver_f47(shadriverInstance*);

U32 shadriver_f48(shadriverInstance*);

void shadriver_f49(shadriverInstance*,U32);

U32 shadriver_f50(shadriverInstance*,U32);

U64 shadriver_f51(shadriverInstance*,U32,U32,U64,U32);

U32 shadriver_f52(shadriverInstance*,U32,U32,U32,U32,U32);

wasmMemory*shadriver_memory(shadriverInstance* i);

void shadriver_X5FX5FwasmX5FcallX5Fctors(shadriverInstance*i);

U32 shadriver_X5FX5FmainX5FargcX5Fargv(shadriverInstance*i,U32 l0,U32 l1);

U32 shadriver_X5FX5FerrnoX5Flocation(shadriverInstance*i);

U32 shadriver_stackSave(shadriverInstance*i);

void shadriver_stackRestore(shadriverInstance*i,U32 l0);

U32 shadriver_stackAlloc(shadriverInstance*i,U32 l0);

U32 shadriver_dynCallX5Fjiji(shadriverInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void shadriverInstantiate(shadriverInstance* instance, void* resolve(const char* module, const char* name));

void shadriverFreeInstance(shadriverInstance* instance);

#endif /* shadriver_H */

