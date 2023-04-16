#ifndef durbin_H
#define durbin_H

#include "w2c2_base.h"

typedef struct durbinInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} durbinInstance;

U32 env__memcpy(struct durbinInstance*,U32,U32,U32);

U32 env__fwrite(struct durbinInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct durbinInstance*,U32,U32,U32);

U32 env__fputc(struct durbinInstance*,U32,U32);

U32 env_____small_fprintf(struct durbinInstance*,U32,U32,U32);

void env__free(struct durbinInstance*,U32);

U32 env__polybench_alloc_data(struct durbinInstance*,U32,U32,U32);

void f7(durbinInstance*);

void f8(durbinInstance*);

void f9(durbinInstance*,U32,U32,U32);

U32 f10(durbinInstance*,U32,U32);

U32 f11(durbinInstance*,U64,U32);

void durbin____wasm_call_ctors(durbinInstance*i);

void durbin____wasm_apply_data_relocs(durbinInstance*i);

void durbin_kernel_durbin(durbinInstance*i,U32 l0,U32 l1,U32 l2);

U32 durbin_submain(durbinInstance*i,U32 l0,U32 l1);

void durbinInstantiate(durbinInstance* instance, void* resolve(const char* module, const char* name));

void durbinFreeInstance(durbinInstance* instance);

#endif /* durbin_H */

