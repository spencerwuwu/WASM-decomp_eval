#ifndef floydwarshall_H
#define floydwarshall_H

#include "w2c2_base.h"

typedef struct floydwarshallInstance {
F64(*env_emscriptenX5FdateX5Fnow)(struct floydwarshallInstance*);
void(*env_emscriptenX5FmemcpyX5Fbig)(struct floydwarshallInstance*,U32,U32,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fclose)(struct floydwarshallInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fwrite)(struct floydwarshallInstance*,U32,U32,U32,U32);
U32(*env_emscriptenX5FresizeX5Fheap)(struct floydwarshallInstance*,U32);
U32(*wasiX5FsnapshotX5Fpreview1_fdX5Fseek)(struct floydwarshallInstance*,U32,U32,U32,U32,U32);
wasmMemory m0;
wasmTable t0;
U32 g0;
U32 g1;
} floydwarshallInstance;

void floydwarshall_f6(floydwarshallInstance*);

U32 floydwarshall_f7(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f8(floydwarshallInstance*,U32,U32);

void floydwarshall_f9(floydwarshallInstance*);

void floydwarshall_f10(floydwarshallInstance*);

void floydwarshall_f11(floydwarshallInstance*);

U32 floydwarshall_f12(floydwarshallInstance*,U64,U32);

U32 floydwarshall_f13(floydwarshallInstance*);

U32 floydwarshall_f14(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f15(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f16(floydwarshallInstance*,U32);

void floydwarshall_f17(floydwarshallInstance*,U32);

U32 floydwarshall_f18(floydwarshallInstance*,U32);

U32 floydwarshall_f19(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f20(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f21(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f22(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f23(floydwarshallInstance*,U32);

U32 floydwarshall_f24(floydwarshallInstance*,U32);

void floydwarshall_f25(floydwarshallInstance*,U32);

U32 floydwarshall_f26(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f27(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f28(floydwarshallInstance*,U32,U32,U32,U32);

U32 floydwarshall_f29(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f30(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f31(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f32(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f33(floydwarshallInstance*);

U32 floydwarshall_f34(floydwarshallInstance*);

U32 floydwarshall_f35(floydwarshallInstance*);

void floydwarshall_f36(floydwarshallInstance*);

U32 floydwarshall_f37(floydwarshallInstance*,U32);

U32 floydwarshall_f38(floydwarshallInstance*,U32);

U32 floydwarshall_f39(floydwarshallInstance*,U32,U32,U32);

U64 floydwarshall_f40(floydwarshallInstance*,U32,U64,U32);

U64 floydwarshall_f41(floydwarshallInstance*,U32,U64,U32);

U32 floydwarshall_f42(floydwarshallInstance*,U32);

U64 floydwarshall_f43(floydwarshallInstance*,U32,U64,U32);

U32 floydwarshall_f44(floydwarshallInstance*,U32);

U32 floydwarshall_f45(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f46(floydwarshallInstance*,U32,U32);

F64 floydwarshall_f47(floydwarshallInstance*,F64,U32);

U32 floydwarshall_f48(floydwarshallInstance*,U32,U32,U32,U32,U32);

U32 floydwarshall_f49(floydwarshallInstance*,U32,U32,U32,U32,U32,U32,U32);

void floydwarshall_f50(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f51(floydwarshallInstance*,U32);

void floydwarshall_f52(floydwarshallInstance*,U32,U32,U32,U32);

U32 floydwarshall_f53(floydwarshallInstance*,U64,U32,U32);

U32 floydwarshall_f54(floydwarshallInstance*,U64,U32);

U32 floydwarshall_f55(floydwarshallInstance*,U64,U32);

void floydwarshall_f56(floydwarshallInstance*,U32,U32,U32,U32,U32);

U32 floydwarshall_f57(floydwarshallInstance*,U32,F64,U32,U32,U32,U32);

U64 floydwarshall_f58(floydwarshallInstance*,F64);

U32 floydwarshall_f59(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f60(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f61(floydwarshallInstance*,U32);

U32 floydwarshall_f62(floydwarshallInstance*,U32,U32,U32);

U32 floydwarshall_f63(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f64(floydwarshallInstance*,U32);

void floydwarshall_f65(floydwarshallInstance*,U32);

U32 floydwarshall_f66(floydwarshallInstance*);

U32 floydwarshall_f67(floydwarshallInstance*,U32);

void floydwarshall_f68(floydwarshallInstance*,U32);

U32 floydwarshall_f69(floydwarshallInstance*);

U32 floydwarshall_f70(floydwarshallInstance*);

void floydwarshall_f71(floydwarshallInstance*,U32);

U32 floydwarshall_f72(floydwarshallInstance*,U32);

U64 floydwarshall_f73(floydwarshallInstance*,U32,U32,U64,U32);

U32 floydwarshall_f74(floydwarshallInstance*,U32,U32,U32,U32,U32);

U32 floydwarshall_f75(floydwarshallInstance*,U32,U64,U32,U32);

wasmMemory*floydwarshall_memory(floydwarshallInstance* i);

void floydwarshall_X5FX5FwasmX5FcallX5Fctors(floydwarshallInstance*i);

U32 floydwarshall_X5FX5FmainX5FargcX5Fargv(floydwarshallInstance*i,U32 l0,U32 l1);

U32 floydwarshall_X5FX5FerrnoX5Flocation(floydwarshallInstance*i);

U32 floydwarshall_stackSave(floydwarshallInstance*i);

void floydwarshall_stackRestore(floydwarshallInstance*i,U32 l0);

U32 floydwarshall_stackAlloc(floydwarshallInstance*i,U32 l0);

U32 floydwarshall_dynCallX5Fjiji(floydwarshallInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

void floydwarshallInstantiate(floydwarshallInstance* instance, void* resolve(const char* module, const char* name));

void floydwarshallFreeInstance(floydwarshallInstance* instance);

#endif /* floydwarshall_H */

