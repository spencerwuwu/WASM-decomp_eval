#ifndef floydwarshall_H
#define floydwarshall_H

#include "w2c2_base.h"

typedef struct floydwarshallInstance {
U32(*env_strcmp)(struct floydwarshallInstance*,U32,U32);
void(*env_free)(struct floydwarshallInstance*,U32);
U32(*env_fprintf)(struct floydwarshallInstance*,U32,U32,U32);
U32(*env_polybenchX5FallocX5Fdata)(struct floydwarshallInstance*,U32,U32,U32);
wasmMemory*env_memory;
U32*env_X5FX5FstackX5Fpointer;
U32*env_X5FX5FmemoryX5Fbase;
U32*env_X5FX5FtableX5Fbase;
U32*GOTX2Emem_stderr;
} floydwarshallInstance;

void floydwarshall_f4(floydwarshallInstance*);

void floydwarshall_f5(floydwarshallInstance*);

U32 floydwarshall_f6(floydwarshallInstance*,U32,U32);

void floydwarshall_f7(floydwarshallInstance*,U32,U32);

void floydwarshall_f8(floydwarshallInstance*,U32,U32);

void floydwarshall_f9(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f10(floydwarshallInstance*,U32,U32);

U32 floydwarshall_f11(floydwarshallInstance*,U64,U32);

void floydwarshall_X5FX5FwasmX5FcallX5Fctors(floydwarshallInstance*i);

void floydwarshall_X5FX5FwasmX5FapplyX5FdataX5Frelocs(floydwarshallInstance*i);

U32 floydwarshall_submain(floydwarshallInstance*i,U32 l0,U32 l1);

U32 floydwarshall_X5FX5FmainX5FargcX5Fargv(floydwarshallInstance*i,U32 l0,U32 l1);

void floydwarshallInstantiate(floydwarshallInstance* instance, void* resolve(const char* module, const char* name));

void floydwarshallFreeInstance(floydwarshallInstance* instance);

#endif /* floydwarshall_H */

