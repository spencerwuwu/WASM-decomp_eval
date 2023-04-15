#ifndef deriche_H
#define deriche_H

#include "w2c2_base.h"

typedef struct dericheInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} dericheInstance;

F32 env__expf(struct dericheInstance*,F32);

F32 env__exp2f(struct dericheInstance*,F32);

U32 env__fwrite(struct dericheInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct dericheInstance*,U32,U32,U32);

U32 env__fputc(struct dericheInstance*,U32,U32);

U32 env_____small_fprintf(struct dericheInstance*,U32,U32,U32);

void env__free(struct dericheInstance*,U32);

U32 env__polybench_alloc_data(struct dericheInstance*,U32,U32,U32);

void f8(dericheInstance*);

void f9(dericheInstance*);

void f10(dericheInstance*,U32,U32,F32,U32,U32,U32,U32);

U32 f11(dericheInstance*,U32,U32);

U32 f12(dericheInstance*,U64,U32);

void deriche____wasm_call_ctors(dericheInstance*i);

void deriche____wasm_apply_data_relocs(dericheInstance*i);

void deriche_kernel_deriche(dericheInstance*i,U32 l0,U32 l1,F32 l2,U32 l3,U32 l4,U32 l5,U32 l6);

U32 deriche_submain(dericheInstance*i,U32 l0,U32 l1);

void dericheInstantiate(dericheInstance* instance, void* resolve(const char* module, const char* name));

void dericheFreeInstance(dericheInstance* instance);

#endif /* deriche_H */

