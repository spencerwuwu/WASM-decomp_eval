#ifndef gesummv_H
#define gesummv_H

#include "w2c2_base.h"

typedef struct gesummvInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__stderr;
} gesummvInstance;

U32 env__fwrite(struct gesummvInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct gesummvInstance*,U32,U32,U32);

U32 env__fputc(struct gesummvInstance*,U32,U32);

U32 env_____small_fprintf(struct gesummvInstance*,U32,U32,U32);

void env__free(struct gesummvInstance*,U32);

U32 env__polybench_alloc_data(struct gesummvInstance*,U32,U32,U32);

void f6(gesummvInstance*);

void f7(gesummvInstance*);

void f8(gesummvInstance*,U32,F64,F64,U32,U32,U32,U32,U32);

U32 f9(gesummvInstance*,U32,U32);

U32 f10(gesummvInstance*,U64,U32);

void gesummv____wasm_call_ctors(gesummvInstance*i);

void gesummv____wasm_apply_data_relocs(gesummvInstance*i);

void gesummv_kernel_gesummv(gesummvInstance*i,U32 l0,F64 l1,F64 l2,U32 l3,U32 l4,U32 l5,U32 l6,U32 l7);

U32 gesummv_submain(gesummvInstance*i,U32 l0,U32 l1);

void gesummvInstantiate(gesummvInstance* instance, void* resolve(const char* module, const char* name));

void gesummvFreeInstance(gesummvInstance* instance);

#endif /* gesummv_H */

