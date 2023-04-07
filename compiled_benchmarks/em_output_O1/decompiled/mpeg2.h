#ifndef mpeg2_H
#define mpeg2_H

#include "w2c2_base.h"

typedef struct mpeg2Instance {
void(*env_emscriptenX5FmemcpyX5Fbig)(struct mpeg2Instance*,U32,U32,U32);
F64(*env_emscriptenX5FdateX5Fnow)(struct mpeg2Instance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct mpeg2Instance*,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} mpeg2Instance;

void mpeg2_f3(mpeg2Instance*);

U32 mpeg2_f4(mpeg2Instance*);

U32 mpeg2_f5(mpeg2Instance*);

void mpeg2_f6(mpeg2Instance*,U32,U32,U32,U32,U32,U32,U32);

U32 mpeg2_f7(mpeg2Instance*);

U32 mpeg2_f8(mpeg2Instance*,U32,U32);

U32 mpeg2_f9(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f10(mpeg2Instance*);

U32 mpeg2_f11(mpeg2Instance*,U32,U32);

U32 mpeg2_f12(mpeg2Instance*,U32,U32);

U32 mpeg2_f13(mpeg2Instance*,U32,U32);

U32 mpeg2_f14(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f15(mpeg2Instance*,U32);

U64 mpeg2_f16(mpeg2Instance*,U32,U64,U32);

U32 mpeg2_f17(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f18(mpeg2Instance*,U32);

void mpeg2_f19(mpeg2Instance*,U32);

U32 mpeg2_f20(mpeg2Instance*,U32);

U32 mpeg2_f21(mpeg2Instance*,U32);

U32 mpeg2_f22(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f23(mpeg2Instance*,U32,U32);

F64 mpeg2_f24(mpeg2Instance*,F64,U32);

U32 mpeg2_f25(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f26(mpeg2Instance*,U32,U32,U32,U32,U32);

U32 mpeg2_f27(mpeg2Instance*,U32,U32,U32,U32,U32,U32,U32);

void mpeg2_f28(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f29(mpeg2Instance*,U32);

void mpeg2_f30(mpeg2Instance*,U32,U32,U32,U32);

U32 mpeg2_f31(mpeg2Instance*,U64,U32,U32);

U32 mpeg2_f32(mpeg2Instance*,U64,U32);

U32 mpeg2_f33(mpeg2Instance*,U64,U32);

void mpeg2_f34(mpeg2Instance*,U32,U32,U32,U32,U32);

U32 mpeg2_f35(mpeg2Instance*,U32,F64,U32,U32,U32,U32);

U64 mpeg2_f36(mpeg2Instance*,F64);

U32 mpeg2_f37(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f38(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f39(mpeg2Instance*,U32);

U32 mpeg2_f40(mpeg2Instance*);

U32 mpeg2_f41(mpeg2Instance*);

U32 mpeg2_f42(mpeg2Instance*);

void mpeg2_f43(mpeg2Instance*);

U32 mpeg2_f44(mpeg2Instance*,U32,U32,U32);

U32 mpeg2_f45(mpeg2Instance*,U32,U32);

void mpeg2_f46(mpeg2Instance*,U32);

U32 mpeg2_f47(mpeg2Instance*);

U32 mpeg2_f48(mpeg2Instance*);

void mpeg2_f49(mpeg2Instance*,U32);

U32 mpeg2_f50(mpeg2Instance*,U32);

U64 mpeg2_f51(mpeg2Instance*,U32,U32,U64,U32);

U32 mpeg2_f52(mpeg2Instance*,U32,U32,U32,U32,U32);

wasmMemory*mpeg2_memory(mpeg2Instance* i);

void mpeg2_X5FX5FwasmX5FcallX5Fctors(mpeg2Instance*i);

U32 mpeg2_X5FX5FmainX5FargcX5Fargv(mpeg2Instance*i,U32 l0,U32 l1);

U32 mpeg2_X5FX5FerrnoX5Flocation(mpeg2Instance*i);

U32 mpeg2_stackSave(mpeg2Instance*i);

void mpeg2_stackRestore(mpeg2Instance*i,U32 l0);

U32 mpeg2_stackAlloc(mpeg2Instance*i,U32 l0);

U32 mpeg2_dynCallX5Fjiji(mpeg2Instance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void mpeg2Instantiate(mpeg2Instance* instance, void* resolve(const char* module, const char* name));

void mpeg2FreeInstance(mpeg2Instance* instance);

#endif /* mpeg2_H */

