#ifndef ludcmp_H
#define ludcmp_H

#include "w2c2_base.h"

typedef struct ludcmpInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct ludcmpInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct ludcmpInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct ludcmpInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct ludcmpInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct ludcmpInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct ludcmpInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} ludcmpInstance;

void ludcmp_f6(ludcmpInstance*);

U32 ludcmp_f7(ludcmpInstance*,U32,U32);

U32 ludcmp_f8(ludcmpInstance*,U32,U32);

void ludcmp_f9(ludcmpInstance*);

void ludcmp_f10(ludcmpInstance*);

void ludcmp_f11(ludcmpInstance*);

U32 ludcmp_f12(ludcmpInstance*,U64,U32);

U32 ludcmp_f13(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f14(ludcmpInstance*);

U32 ludcmp_f15(ludcmpInstance*,U32,U32);

U32 ludcmp_f16(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f17(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f18(ludcmpInstance*,U32);

void ludcmp_f19(ludcmpInstance*,U32);

U32 ludcmp_f20(ludcmpInstance*,U32);

U32 ludcmp_f21(ludcmpInstance*,U32,U32);

U32 ludcmp_f22(ludcmpInstance*,U32,U32);

U32 ludcmp_f23(ludcmpInstance*,U32,U32);

U32 ludcmp_f24(ludcmpInstance*,U32,U32);

U32 ludcmp_f25(ludcmpInstance*,U32);

U32 ludcmp_f26(ludcmpInstance*,U32);

void ludcmp_f27(ludcmpInstance*,U32);

U32 ludcmp_f28(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f29(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f30(ludcmpInstance*,U32,U32,U32,U32);

U32 ludcmp_f31(ludcmpInstance*,U32,U32);

U32 ludcmp_f32(ludcmpInstance*,U32,U32);

U32 ludcmp_f33(ludcmpInstance*,U32,U32);

U32 ludcmp_f34(ludcmpInstance*);

U32 ludcmp_f35(ludcmpInstance*);

U32 ludcmp_f36(ludcmpInstance*);

void ludcmp_f37(ludcmpInstance*);

U32 ludcmp_f38(ludcmpInstance*,U32);

U32 ludcmp_f39(ludcmpInstance*,U32);

U32 ludcmp_f40(ludcmpInstance*,U32,U32,U32);

U64 ludcmp_f41(ludcmpInstance*,U32,U64,U32);

U64 ludcmp_f42(ludcmpInstance*,U32,U64,U32);

U32 ludcmp_f43(ludcmpInstance*,U32);

U64 ludcmp_f44(ludcmpInstance*,U32,U64,U32);

U32 ludcmp_f45(ludcmpInstance*,U32);

U32 ludcmp_f46(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f47(ludcmpInstance*,U32,U32);

F64 ludcmp_f48(ludcmpInstance*,F64,U32);

U32 ludcmp_f49(ludcmpInstance*,U32,U32,U32,U32,U32);

U32 ludcmp_f50(ludcmpInstance*,U32,U32,U32,U32,U32,U32,U32);

void ludcmp_f51(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f52(ludcmpInstance*,U32);

void ludcmp_f53(ludcmpInstance*,U32,U32,U32,U32);

U32 ludcmp_f54(ludcmpInstance*,U64,U32,U32);

U32 ludcmp_f55(ludcmpInstance*,U64,U32);

U32 ludcmp_f56(ludcmpInstance*,U64,U32);

void ludcmp_f57(ludcmpInstance*,U32,U32,U32,U32,U32);

U32 ludcmp_f58(ludcmpInstance*,U32,F64,U32,U32,U32,U32);

U64 ludcmp_f59(ludcmpInstance*,F64);

U32 ludcmp_f60(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f61(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f62(ludcmpInstance*,U32);

U32 ludcmp_f63(ludcmpInstance*,U32,U32,U32);

U32 ludcmp_f64(ludcmpInstance*,U32,U32);

U32 ludcmp_f65(ludcmpInstance*,U32);

void ludcmp_f66(ludcmpInstance*,U32);

U32 ludcmp_f67(ludcmpInstance*);

U32 ludcmp_f68(ludcmpInstance*,U32);

void ludcmp_f69(ludcmpInstance*,U32);

U32 ludcmp_f70(ludcmpInstance*);

U32 ludcmp_f71(ludcmpInstance*);

void ludcmp_f72(ludcmpInstance*,U32);

U32 ludcmp_f73(ludcmpInstance*,U32);

U64 ludcmp_f74(ludcmpInstance*,U32,U32,U64,U32);

U32 ludcmp_f75(ludcmpInstance*,U32,U32,U32,U32,U32);

U32 ludcmp_f76(ludcmpInstance*,U32,U64,U32,U32);

wasmMemory*ludcmp_memory(ludcmpInstance* i);

void ludcmp_X5FX5FwasmX5FcallX5Fctors(ludcmpInstance*i);

U32 ludcmp_X5FX5FmainX5FargcX5Fargv(ludcmpInstance*i,U32 l0,U32 l1);

U32 ludcmp_X5FX5FerrnoX5Flocation(ludcmpInstance*i);

U32 ludcmp_stackSave(ludcmpInstance*i);

void ludcmp_stackRestore(ludcmpInstance*i,U32 l0);

U32 ludcmp_stackAlloc(ludcmpInstance*i,U32 l0);

U32 ludcmp_dynCallX5Fjiji(ludcmpInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void ludcmpInstantiate(ludcmpInstance* instance, void* resolve(const char* module, const char* name));

void ludcmpFreeInstance(ludcmpInstance* instance);

#endif /* ludcmp_H */

