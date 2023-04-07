#ifndef covariance_H
#define covariance_H

#include "w2c2_base.h"

typedef struct covarianceInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} covarianceInstance;

U32 env__fwrite(struct covarianceInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct covarianceInstance*,U32,U32,U32);

U32 env__fputc(struct covarianceInstance*,U32,U32);

U32 env_____small_fprintf(struct covarianceInstance*,U32,U32,U32);

void env__free(struct covarianceInstance*,U32);

U32 env__polybench_alloc_data(struct covarianceInstance*,U32,U32,U32);

void f6(covarianceInstance*);

void f7(covarianceInstance*);

U32 f8(covarianceInstance*,U32,U32);

U32 f9(covarianceInstance*,U64,U32);

void covariance____wasm_call_ctors(covarianceInstance*i);

void covariance____wasm_apply_data_relocs(covarianceInstance*i);

U32 covariance_submain(covarianceInstance*i,U32 l0,U32 l1);

void covarianceInstantiate(covarianceInstance* instance, void* resolve(const char* module, const char* name));

void covarianceFreeInstance(covarianceInstance* instance);

#endif /* covariance_H */

