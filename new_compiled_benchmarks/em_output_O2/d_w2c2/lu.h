#ifndef lu_H
#define lu_H

#include "w2c2_base.h"

typedef struct luInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__stderr;
} luInstance;

U32 env__memset(struct luInstance*,U32,U32,U32);

void env__free(struct luInstance*,U32);

U32 env__fwrite(struct luInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct luInstance*,U32,U32,U32);

U32 env__fputc(struct luInstance*,U32,U32);

U32 env_____small_fprintf(struct luInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct luInstance*,U32,U32,U32);

void f7(luInstance*);

void f8(luInstance*);

void f9(luInstance*,U32,U32);

U32 f10(luInstance*,U32,U32);

U32 f11(luInstance*,U64,U32);

void lu____wasm_call_ctors(luInstance*i);

void lu____wasm_apply_data_relocs(luInstance*i);

void lu_kernel_lu(luInstance*i,U32 l0,U32 l1);

U32 lu_submain(luInstance*i,U32 l0,U32 l1);

void luInstantiate(luInstance* instance, void* resolve(const char* module, const char* name));

void luFreeInstance(luInstance* instance);

#endif /* lu_H */

