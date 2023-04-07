#ifndef adpcm_H
#define adpcm_H

#include "w2c2_base.h"

typedef struct adpcmInstance {
void(*env_emscriptenX5FmemcpyX5Fbig)(struct adpcmInstance*,U32,U32,U32);
F64(*env_emscriptenX5FdateX5Fnow)(struct adpcmInstance*);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct adpcmInstance*,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} adpcmInstance;

void adpcm_f3(adpcmInstance*);

U32 adpcm_f4(adpcmInstance*,U32,U32);

void adpcm_f5(adpcmInstance*,U32);

void adpcm_f6(adpcmInstance*);

U32 adpcm_f7(adpcmInstance*);

U32 adpcm_f8(adpcmInstance*,U32,U32);

U32 adpcm_f9(adpcmInstance*,U32,U32,U32);

U32 adpcm_f10(adpcmInstance*,U32,U32,U32);

U32 adpcm_f11(adpcmInstance*,U32,U32,U32);

U32 adpcm_f12(adpcmInstance*);

U32 adpcm_f13(adpcmInstance*,U32,U32);

U32 adpcm_f14(adpcmInstance*,U32,U32);

U32 adpcm_f15(adpcmInstance*,U32,U32);

U32 adpcm_f16(adpcmInstance*,U32,U32,U32);

U32 adpcm_f17(adpcmInstance*,U32);

U64 adpcm_f18(adpcmInstance*,U32,U64,U32);

U32 adpcm_f19(adpcmInstance*,U32);

void adpcm_f20(adpcmInstance*,U32);

U32 adpcm_f21(adpcmInstance*,U32);

U32 adpcm_f22(adpcmInstance*,U32);

U32 adpcm_f23(adpcmInstance*,U32,U32,U32);

U32 adpcm_f24(adpcmInstance*,U32,U32);

F64 adpcm_f25(adpcmInstance*,F64,U32);

U32 adpcm_f26(adpcmInstance*,U32,U32,U32);

U32 adpcm_f27(adpcmInstance*,U32,U32,U32,U32,U32);

U32 adpcm_f28(adpcmInstance*,U32,U32,U32,U32,U32,U32,U32);

void adpcm_f29(adpcmInstance*,U32,U32,U32);

U32 adpcm_f30(adpcmInstance*,U32);

void adpcm_f31(adpcmInstance*,U32,U32,U32,U32);

U32 adpcm_f32(adpcmInstance*,U64,U32,U32);

U32 adpcm_f33(adpcmInstance*,U64,U32);

U32 adpcm_f34(adpcmInstance*,U64,U32);

void adpcm_f35(adpcmInstance*,U32,U32,U32,U32,U32);

U32 adpcm_f36(adpcmInstance*,U32,F64,U32,U32,U32,U32);

U64 adpcm_f37(adpcmInstance*,F64);

U32 adpcm_f38(adpcmInstance*,U32,U32,U32);

U32 adpcm_f39(adpcmInstance*,U32,U32,U32);

U32 adpcm_f40(adpcmInstance*,U32);

U32 adpcm_f41(adpcmInstance*);

U32 adpcm_f42(adpcmInstance*);

U32 adpcm_f43(adpcmInstance*);

void adpcm_f44(adpcmInstance*);

U32 adpcm_f45(adpcmInstance*,U32,U32,U32);

U32 adpcm_f46(adpcmInstance*,U32,U32);

void adpcm_f47(adpcmInstance*,U32);

U32 adpcm_f48(adpcmInstance*);

U32 adpcm_f49(adpcmInstance*);

void adpcm_f50(adpcmInstance*,U32);

U32 adpcm_f51(adpcmInstance*,U32);

U64 adpcm_f52(adpcmInstance*,U32,U32,U64,U32);

U32 adpcm_f53(adpcmInstance*,U32,U32,U32,U32,U32);

wasmMemory*adpcm_memory(adpcmInstance* i);

void adpcm_X5FX5FwasmX5FcallX5Fctors(adpcmInstance*i);

U32 adpcm_X5FX5FmainX5FargcX5Fargv(adpcmInstance*i,U32 l0,U32 l1);

U32 adpcm_X5FX5FerrnoX5Flocation(adpcmInstance*i);

U32 adpcm_stackSave(adpcmInstance*i);

void adpcm_stackRestore(adpcmInstance*i,U32 l0);

U32 adpcm_stackAlloc(adpcmInstance*i,U32 l0);

U32 adpcm_dynCallX5Fjiji(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void adpcmInstantiate(adpcmInstance* instance, void* resolve(const char* module, const char* name));

void adpcmFreeInstance(adpcmInstance* instance);

#endif /* adpcm_H */

