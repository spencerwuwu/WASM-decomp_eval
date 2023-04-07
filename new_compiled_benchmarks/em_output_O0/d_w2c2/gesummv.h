#ifndef gesummv_H
#define gesummv_H

#include "w2c2_base.h"

typedef struct gesummvInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} gesummvInstance;

U32 env__strcmp(struct gesummvInstance*,U32,U32);

void env__free(struct gesummvInstance*,U32);

U32 env__fprintf(struct gesummvInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct gesummvInstance*,U32,U32,U32);

void f4(gesummvInstance*);

void f5(gesummvInstance*);

U32 f6(gesummvInstance*,U32,U32);

void f7(gesummvInstance*,U32,U32,U32,U32,U32,U32);

void f8(gesummvInstance*,U32,F64,F64,U32,U32,U32,U32,U32);

void f9(gesummvInstance*,U32,U32);

U32 f10(gesummvInstance*,U64,U32);

void gesummv____wasm_call_ctors(gesummvInstance*i);

void gesummv____wasm_apply_data_relocs(gesummvInstance*i);

U32 gesummv_submain(gesummvInstance*i,U32 l0,U32 l1);

void gesummvInstantiate(gesummvInstance* instance, void* resolve(const char* module, const char* name));

void gesummvFreeInstance(gesummvInstance* instance);

#endif /* gesummv_H */

