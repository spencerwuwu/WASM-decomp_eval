#ifndef gemm_H
#define gemm_H

#include "w2c2_base.h"

typedef struct gemmInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} gemmInstance;

U32 env__strcmp(struct gemmInstance*,U32,U32);

void env__free(struct gemmInstance*,U32);

U32 env__fprintf(struct gemmInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct gemmInstance*,U32,U32,U32);

void f4(gemmInstance*);

void f5(gemmInstance*);

U32 f6(gemmInstance*,U32,U32);

void f7(gemmInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f8(gemmInstance*,U32,U32,U32,F64,F64,U32,U32,U32);

void f9(gemmInstance*,U32,U32,U32);

U32 f10(gemmInstance*,U64,U32);

void gemm____wasm_call_ctors(gemmInstance*i);

void gemm____wasm_apply_data_relocs(gemmInstance*i);

U32 gemm_submain(gemmInstance*i,U32 l0,U32 l1);

void gemmInstantiate(gemmInstance* instance, void* resolve(const char* module, const char* name));

void gemmFreeInstance(gemmInstance* instance);

#endif /* gemm_H */

