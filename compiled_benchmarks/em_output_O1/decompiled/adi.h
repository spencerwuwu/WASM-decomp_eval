#ifndef adi_H
#define adi_H

#include "w2c2_base.h"

typedef struct adiInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct adiInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct adiInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct adiInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct adiInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct adiInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct adiInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} adiInstance;

void adi_f6(adiInstance*);

U32 adi_f7(adiInstance*,U32,U32);

U32 adi_f8(adiInstance*,U32,U32);

void adi_f9(adiInstance*);

void adi_f10(adiInstance*);

void adi_f11(adiInstance*);

U32 adi_f12(adiInstance*,U64,U32);

U32 adi_f13(adiInstance*);

U32 adi_f14(adiInstance*,U32,U32);

U32 adi_f15(adiInstance*,U32,U32,U32);

U32 adi_f16(adiInstance*,U32,U32,U32);

U32 adi_f17(adiInstance*,U32);

void adi_f18(adiInstance*,U32);

U32 adi_f19(adiInstance*,U32);

U32 adi_f20(adiInstance*,U32,U32);

U32 adi_f21(adiInstance*,U32,U32);

U32 adi_f22(adiInstance*,U32,U32);

U32 adi_f23(adiInstance*,U32,U32);

U32 adi_f24(adiInstance*,U32);

U32 adi_f25(adiInstance*,U32);

void adi_f26(adiInstance*,U32);

U32 adi_f27(adiInstance*,U32,U32,U32);

U32 adi_f28(adiInstance*,U32,U32,U32);

U32 adi_f29(adiInstance*,U32,U32,U32,U32);

U32 adi_f30(adiInstance*,U32,U32);

U32 adi_f31(adiInstance*,U32,U32);

U32 adi_f32(adiInstance*,U32,U32);

U32 adi_f33(adiInstance*,U32,U32,U32);

U32 adi_f34(adiInstance*);

U32 adi_f35(adiInstance*);

U32 adi_f36(adiInstance*);

void adi_f37(adiInstance*);

U32 adi_f38(adiInstance*,U32);

U32 adi_f39(adiInstance*,U32);

U32 adi_f40(adiInstance*,U32,U32,U32);

U64 adi_f41(adiInstance*,U32,U64,U32);

U64 adi_f42(adiInstance*,U32,U64,U32);

U32 adi_f43(adiInstance*,U32);

U64 adi_f44(adiInstance*,U32,U64,U32);

U32 adi_f45(adiInstance*,U32);

U32 adi_f46(adiInstance*,U32,U32,U32);

U32 adi_f47(adiInstance*,U32,U32);

F64 adi_f48(adiInstance*,F64,U32);

U32 adi_f49(adiInstance*,U32,U32,U32,U32,U32);

U32 adi_f50(adiInstance*,U32,U32,U32,U32,U32,U32,U32);

void adi_f51(adiInstance*,U32,U32,U32);

U32 adi_f52(adiInstance*,U32);

void adi_f53(adiInstance*,U32,U32,U32,U32);

U32 adi_f54(adiInstance*,U64,U32,U32);

U32 adi_f55(adiInstance*,U64,U32);

U32 adi_f56(adiInstance*,U64,U32);

void adi_f57(adiInstance*,U32,U32,U32,U32,U32);

U32 adi_f58(adiInstance*,U32,F64,U32,U32,U32,U32);

U64 adi_f59(adiInstance*,F64);

U32 adi_f60(adiInstance*,U32,U32,U32);

U32 adi_f61(adiInstance*,U32,U32,U32);

U32 adi_f62(adiInstance*,U32);

U32 adi_f63(adiInstance*,U32,U32,U32);

U32 adi_f64(adiInstance*,U32,U32);

U32 adi_f65(adiInstance*,U32);

void adi_f66(adiInstance*,U32);

U32 adi_f67(adiInstance*);

U32 adi_f68(adiInstance*,U32);

void adi_f69(adiInstance*,U32);

U32 adi_f70(adiInstance*);

U32 adi_f71(adiInstance*);

void adi_f72(adiInstance*,U32);

U32 adi_f73(adiInstance*,U32);

U64 adi_f74(adiInstance*,U32,U32,U64,U32);

U32 adi_f75(adiInstance*,U32,U32,U32,U32,U32);

U32 adi_f76(adiInstance*,U32,U64,U32,U32);

wasmMemory*adi_memory(adiInstance* i);

void adi_X5FX5FwasmX5FcallX5Fctors(adiInstance*i);

U32 adi_X5FX5FmainX5FargcX5Fargv(adiInstance*i,U32 l0,U32 l1);

U32 adi_X5FX5FerrnoX5Flocation(adiInstance*i);

U32 adi_stackSave(adiInstance*i);

void adi_stackRestore(adiInstance*i,U32 l0);

U32 adi_stackAlloc(adiInstance*i,U32 l0);

U32 adi_dynCallX5Fjiji(adiInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void adiInstantiate(adiInstance* instance, void* resolve(const char* module, const char* name));

void adiFreeInstance(adiInstance* instance);

#endif /* adi_H */

