#ifndef aes_H
#define aes_H

#include "w2c2_base.h"

typedef struct aesInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct aesInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct aesInstance*,U32,U32,U32,U32);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct aesInstance*,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} aesInstance;

void aes_f3(aesInstance*);

U32 aes_f4(aesInstance*,U32,U32,U32);

U32 aes_f5(aesInstance*,U32,U32);

void aes_f6(aesInstance*,U32,U32);

U32 aes_f7(aesInstance*,U32,U32,U32);

U32 aes_f8(aesInstance*,U32,U32,U32);

void aes_f9(aesInstance*,U32,U32);

U32 aes_f10(aesInstance*,U32,U32,U32);

U32 aes_f11(aesInstance*);

U32 aes_f12(aesInstance*,U32,U32);

U32 aes_f13(aesInstance*);

U32 aes_f14(aesInstance*,U32,U32);

U32 aes_f15(aesInstance*,U32,U32);

U32 aes_f16(aesInstance*,U32,U32);

U32 aes_f17(aesInstance*,U32,U32,U32);

U32 aes_f18(aesInstance*,U32);

U64 aes_f19(aesInstance*,U32,U64,U32);

U32 aes_f20(aesInstance*,U32,U32,U32);

U32 aes_f21(aesInstance*,U32);

void aes_f22(aesInstance*,U32);

U32 aes_f23(aesInstance*,U32);

U32 aes_f24(aesInstance*,U32);

U32 aes_f25(aesInstance*,U32,U32,U32);

U32 aes_f26(aesInstance*,U32,U32);

F64 aes_f27(aesInstance*,F64,U32);

U32 aes_f28(aesInstance*,U32,U32,U32);

U32 aes_f29(aesInstance*,U32,U32,U32);

U32 aes_f30(aesInstance*,U32,U32,U32,U32,U32);

U32 aes_f31(aesInstance*,U32,U32,U32,U32,U32,U32,U32);

void aes_f32(aesInstance*,U32,U32,U32);

U32 aes_f33(aesInstance*,U32);

void aes_f34(aesInstance*,U32,U32,U32,U32);

U32 aes_f35(aesInstance*,U64,U32,U32);

U32 aes_f36(aesInstance*,U64,U32);

U32 aes_f37(aesInstance*,U64,U32);

void aes_f38(aesInstance*,U32,U32,U32,U32,U32);

U32 aes_f39(aesInstance*,U32,F64,U32,U32,U32,U32);

U64 aes_f40(aesInstance*,F64);

U32 aes_f41(aesInstance*,U32,U32,U32);

U32 aes_f42(aesInstance*,U32,U32,U32);

U32 aes_f43(aesInstance*,U32);

U32 aes_f44(aesInstance*);

U32 aes_f45(aesInstance*);

U32 aes_f46(aesInstance*);

void aes_f47(aesInstance*);

U32 aes_f48(aesInstance*,U32,U32,U32);

U32 aes_f49(aesInstance*,U32,U32);

void aes_f50(aesInstance*,U32);

U32 aes_f51(aesInstance*);

U32 aes_f52(aesInstance*);

void aes_f53(aesInstance*,U32);

U32 aes_f54(aesInstance*,U32);

U64 aes_f55(aesInstance*,U32,U32,U64,U32);

U32 aes_f56(aesInstance*,U32,U32,U32,U32,U32);

wasmMemory*aes_memory(aesInstance* i);

void aes_X5FX5FwasmX5FcallX5Fctors(aesInstance*i);

U32 aes_X5FX5FmainX5FargcX5Fargv(aesInstance*i,U32 l0,U32 l1);

U32 aes_X5FX5FerrnoX5Flocation(aesInstance*i);

U32 aes_stackSave(aesInstance*i);

void aes_stackRestore(aesInstance*i,U32 l0);

U32 aes_stackAlloc(aesInstance*i,U32 l0);

U32 aes_dynCallX5Fjiji(aesInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void aesInstantiate(aesInstance* instance, void* resolve(const char* module, const char* name));

void aesFreeInstance(aesInstance* instance);

#endif /* aes_H */

