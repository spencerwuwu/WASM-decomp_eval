#ifndef gramschmidt_H
#define gramschmidt_H

#include "w2c2_base.h"

typedef struct gramschmidtInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct gramschmidtInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct gramschmidtInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct gramschmidtInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct gramschmidtInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct gramschmidtInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct gramschmidtInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} gramschmidtInstance;

void gramschmidt_f6(gramschmidtInstance*);

U32 gramschmidt_f7(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f8(gramschmidtInstance*,U32,U32);

void gramschmidt_f9(gramschmidtInstance*);

void gramschmidt_f10(gramschmidtInstance*);

void gramschmidt_f11(gramschmidtInstance*);

U32 gramschmidt_f12(gramschmidtInstance*,U64,U32);

U32 gramschmidt_f13(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f14(gramschmidtInstance*);

U32 gramschmidt_f15(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f16(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f17(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f18(gramschmidtInstance*,U32);

void gramschmidt_f19(gramschmidtInstance*,U32);

U32 gramschmidt_f20(gramschmidtInstance*,U32);

U32 gramschmidt_f21(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f22(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f23(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f24(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f25(gramschmidtInstance*,U32);

U32 gramschmidt_f26(gramschmidtInstance*,U32);

void gramschmidt_f27(gramschmidtInstance*,U32);

U32 gramschmidt_f28(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f29(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f30(gramschmidtInstance*,U32,U32,U32,U32);

U32 gramschmidt_f31(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f32(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f33(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f34(gramschmidtInstance*);

U32 gramschmidt_f35(gramschmidtInstance*);

U32 gramschmidt_f36(gramschmidtInstance*);

void gramschmidt_f37(gramschmidtInstance*);

U32 gramschmidt_f38(gramschmidtInstance*,U32);

U32 gramschmidt_f39(gramschmidtInstance*,U32);

U32 gramschmidt_f40(gramschmidtInstance*,U32,U32,U32);

U64 gramschmidt_f41(gramschmidtInstance*,U32,U64,U32);

U64 gramschmidt_f42(gramschmidtInstance*,U32,U64,U32);

U32 gramschmidt_f43(gramschmidtInstance*,U32);

U64 gramschmidt_f44(gramschmidtInstance*,U32,U64,U32);

U32 gramschmidt_f45(gramschmidtInstance*,U32);

U32 gramschmidt_f46(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f47(gramschmidtInstance*,U32,U32);

F64 gramschmidt_f48(gramschmidtInstance*,F64,U32);

U32 gramschmidt_f49(gramschmidtInstance*,U32,U32,U32,U32,U32);

U32 gramschmidt_f50(gramschmidtInstance*,U32,U32,U32,U32,U32,U32,U32);

void gramschmidt_f51(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f52(gramschmidtInstance*,U32);

void gramschmidt_f53(gramschmidtInstance*,U32,U32,U32,U32);

U32 gramschmidt_f54(gramschmidtInstance*,U64,U32,U32);

U32 gramschmidt_f55(gramschmidtInstance*,U64,U32);

U32 gramschmidt_f56(gramschmidtInstance*,U64,U32);

void gramschmidt_f57(gramschmidtInstance*,U32,U32,U32,U32,U32);

U32 gramschmidt_f58(gramschmidtInstance*,U32,F64,U32,U32,U32,U32);

U64 gramschmidt_f59(gramschmidtInstance*,F64);

U32 gramschmidt_f60(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f61(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f62(gramschmidtInstance*,U32);

U32 gramschmidt_f63(gramschmidtInstance*,U32,U32,U32);

U32 gramschmidt_f64(gramschmidtInstance*,U32,U32);

U32 gramschmidt_f65(gramschmidtInstance*,U32);

void gramschmidt_f66(gramschmidtInstance*,U32);

U32 gramschmidt_f67(gramschmidtInstance*);

U32 gramschmidt_f68(gramschmidtInstance*,U32);

void gramschmidt_f69(gramschmidtInstance*,U32);

U32 gramschmidt_f70(gramschmidtInstance*);

U32 gramschmidt_f71(gramschmidtInstance*);

void gramschmidt_f72(gramschmidtInstance*,U32);

U32 gramschmidt_f73(gramschmidtInstance*,U32);

U64 gramschmidt_f74(gramschmidtInstance*,U32,U32,U64,U32);

U32 gramschmidt_f75(gramschmidtInstance*,U32,U32,U32,U32,U32);

U32 gramschmidt_f76(gramschmidtInstance*,U32,U64,U32,U32);

wasmMemory*gramschmidt_memory(gramschmidtInstance* i);

void gramschmidt_X5FX5FwasmX5FcallX5Fctors(gramschmidtInstance*i);

U32 gramschmidt_X5FX5FmainX5FargcX5Fargv(gramschmidtInstance*i,U32 l0,U32 l1);

U32 gramschmidt_X5FX5FerrnoX5Flocation(gramschmidtInstance*i);

U32 gramschmidt_stackSave(gramschmidtInstance*i);

void gramschmidt_stackRestore(gramschmidtInstance*i,U32 l0);

U32 gramschmidt_stackAlloc(gramschmidtInstance*i,U32 l0);

U32 gramschmidt_dynCallX5Fjiji(gramschmidtInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void gramschmidtInstantiate(gramschmidtInstance* instance, void* resolve(const char* module, const char* name));

void gramschmidtFreeInstance(gramschmidtInstance* instance);

#endif /* gramschmidt_H */

