#ifndef floydwarshall_H
#define floydwarshall_H

#include "w2c2_base.h"

typedef struct floydwarshallInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} floydwarshallInstance;

U32 env__strcmp(struct floydwarshallInstance*,U32,U32);

void env__free(struct floydwarshallInstance*,U32);

U32 env__fprintf(struct floydwarshallInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct floydwarshallInstance*,U32,U32,U32);

void f4(floydwarshallInstance*);

void f5(floydwarshallInstance*);

void f6(floydwarshallInstance*,U32,U32);

U32 f7(floydwarshallInstance*,U32,U32);

void f8(floydwarshallInstance*,U32,U32);

void f9(floydwarshallInstance*,U32,U32);

U32 f10(floydwarshallInstance*,U64,U32);

void floydwarshall____wasm_call_ctors(floydwarshallInstance*i);

void floydwarshall____wasm_apply_data_relocs(floydwarshallInstance*i);

void floydwarshall_kernel_floyd_warshall(floydwarshallInstance*i,U32 l0,U32 l1);

U32 floydwarshall_submain(floydwarshallInstance*i,U32 l0,U32 l1);

void floydwarshallInstantiate(floydwarshallInstance* instance, void* resolve(const char* module, const char* name));

void floydwarshallFreeInstance(floydwarshallInstance* instance);

#endif /* floydwarshall_H */

