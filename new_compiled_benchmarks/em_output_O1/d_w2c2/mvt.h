#ifndef mvt_H
#define mvt_H

#include "w2c2_base.h"

typedef struct mvtInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} mvtInstance;

U32 env__fwrite(struct mvtInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct mvtInstance*,U32,U32,U32);

U32 env__fputc(struct mvtInstance*,U32,U32);

U32 env_____small_fprintf(struct mvtInstance*,U32,U32,U32);

void env__free(struct mvtInstance*,U32);

U32 env__polybench_alloc_data(struct mvtInstance*,U32,U32,U32);

void f6(mvtInstance*);

void f7(mvtInstance*);

U32 f8(mvtInstance*,U32,U32);

U32 f9(mvtInstance*,U64,U32);

void mvt____wasm_call_ctors(mvtInstance*i);

void mvt____wasm_apply_data_relocs(mvtInstance*i);

U32 mvt_submain(mvtInstance*i,U32 l0,U32 l1);

void mvtInstantiate(mvtInstance* instance, void* resolve(const char* module, const char* name));

void mvtFreeInstance(mvtInstance* instance);

#endif /* mvt_H */

