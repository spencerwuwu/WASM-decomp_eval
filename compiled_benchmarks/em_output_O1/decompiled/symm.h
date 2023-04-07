#ifndef symm_H
#define symm_H

#include "w2c2_base.h"

typedef struct symmInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct symmInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct symmInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct symmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct symmInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct symmInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct symmInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} symmInstance;

void symm_f6(symmInstance*);

U32 symm_f7(symmInstance*,U32,U32);

U32 symm_f8(symmInstance*,U32,U32);

void symm_f9(symmInstance*);

void symm_f10(symmInstance*);

void symm_f11(symmInstance*);

U32 symm_f12(symmInstance*,U64,U32);

U32 symm_f13(symmInstance*);

U32 symm_f14(symmInstance*,U32,U32);

U32 symm_f15(symmInstance*,U32,U32,U32);

U32 symm_f16(symmInstance*,U32,U32,U32);

U32 symm_f17(symmInstance*,U32);

void symm_f18(symmInstance*,U32);

U32 symm_f19(symmInstance*,U32);

U32 symm_f20(symmInstance*,U32,U32);

U32 symm_f21(symmInstance*,U32,U32);

U32 symm_f22(symmInstance*,U32,U32);

U32 symm_f23(symmInstance*,U32,U32);

U32 symm_f24(symmInstance*,U32);

U32 symm_f25(symmInstance*,U32);

void symm_f26(symmInstance*,U32);

U32 symm_f27(symmInstance*,U32,U32,U32);

U32 symm_f28(symmInstance*,U32,U32,U32);

U32 symm_f29(symmInstance*,U32,U32,U32,U32);

U32 symm_f30(symmInstance*,U32,U32);

U32 symm_f31(symmInstance*,U32,U32);

U32 symm_f32(symmInstance*,U32,U32);

U32 symm_f33(symmInstance*,U32,U32,U32);

U32 symm_f34(symmInstance*);

U32 symm_f35(symmInstance*);

U32 symm_f36(symmInstance*);

void symm_f37(symmInstance*);

U32 symm_f38(symmInstance*,U32);

U32 symm_f39(symmInstance*,U32);

U32 symm_f40(symmInstance*,U32,U32,U32);

U64 symm_f41(symmInstance*,U32,U64,U32);

U64 symm_f42(symmInstance*,U32,U64,U32);

U32 symm_f43(symmInstance*,U32);

U64 symm_f44(symmInstance*,U32,U64,U32);

U32 symm_f45(symmInstance*,U32);

U32 symm_f46(symmInstance*,U32,U32,U32);

U32 symm_f47(symmInstance*,U32,U32);

F64 symm_f48(symmInstance*,F64,U32);

U32 symm_f49(symmInstance*,U32,U32,U32,U32,U32);

U32 symm_f50(symmInstance*,U32,U32,U32,U32,U32,U32,U32);

void symm_f51(symmInstance*,U32,U32,U32);

U32 symm_f52(symmInstance*,U32);

void symm_f53(symmInstance*,U32,U32,U32,U32);

U32 symm_f54(symmInstance*,U64,U32,U32);

U32 symm_f55(symmInstance*,U64,U32);

U32 symm_f56(symmInstance*,U64,U32);

void symm_f57(symmInstance*,U32,U32,U32,U32,U32);

U32 symm_f58(symmInstance*,U32,F64,U32,U32,U32,U32);

U64 symm_f59(symmInstance*,F64);

U32 symm_f60(symmInstance*,U32,U32,U32);

U32 symm_f61(symmInstance*,U32,U32,U32);

U32 symm_f62(symmInstance*,U32);

U32 symm_f63(symmInstance*,U32,U32,U32);

U32 symm_f64(symmInstance*,U32,U32);

U32 symm_f65(symmInstance*,U32);

void symm_f66(symmInstance*,U32);

U32 symm_f67(symmInstance*);

U32 symm_f68(symmInstance*,U32);

void symm_f69(symmInstance*,U32);

U32 symm_f70(symmInstance*);

U32 symm_f71(symmInstance*);

void symm_f72(symmInstance*,U32);

U32 symm_f73(symmInstance*,U32);

U64 symm_f74(symmInstance*,U32,U32,U64,U32);

U32 symm_f75(symmInstance*,U32,U32,U32,U32,U32);

U32 symm_f76(symmInstance*,U32,U64,U32,U32);

wasmMemory*symm_memory(symmInstance* i);

void symm_X5FX5FwasmX5FcallX5Fctors(symmInstance*i);

U32 symm_X5FX5FmainX5FargcX5Fargv(symmInstance*i,U32 l0,U32 l1);

U32 symm_X5FX5FerrnoX5Flocation(symmInstance*i);

U32 symm_stackSave(symmInstance*i);

void symm_stackRestore(symmInstance*i,U32 l0);

U32 symm_stackAlloc(symmInstance*i,U32 l0);

U32 symm_dynCallX5Fjiji(symmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void symmInstantiate(symmInstance* instance, void* resolve(const char* module, const char* name));

void symmFreeInstance(symmInstance* instance);

#endif /* symm_H */

