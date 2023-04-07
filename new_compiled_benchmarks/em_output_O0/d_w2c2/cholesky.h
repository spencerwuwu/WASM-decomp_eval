#ifndef cholesky_H
#define cholesky_H

#include "w2c2_base.h"

typedef struct choleskyInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} choleskyInstance;

U32 env__strcmp(struct choleskyInstance*,U32,U32);

void env__free(struct choleskyInstance*,U32);

U32 env__fprintf(struct choleskyInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct choleskyInstance*,U32,U32,U32);

void f4(choleskyInstance*);

void f5(choleskyInstance*);

U32 f6(choleskyInstance*,U32,U32);

void f7(choleskyInstance*,U32,U32);

void f8(choleskyInstance*,U32,U32);

void f9(choleskyInstance*,U32,U32);

U32 f10(choleskyInstance*,U64,U32);

void cholesky____wasm_call_ctors(choleskyInstance*i);

void cholesky____wasm_apply_data_relocs(choleskyInstance*i);

U32 cholesky_submain(choleskyInstance*i,U32 l0,U32 l1);

void choleskyInstantiate(choleskyInstance* instance, void* resolve(const char* module, const char* name));

void choleskyFreeInstance(choleskyInstance* instance);

#endif /* cholesky_H */

