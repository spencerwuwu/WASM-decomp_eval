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

U32 env__strcmp(struct dericheInstance*,U32,U32);

void env__free(struct dericheInstance*,U32);

F32 env__expf(struct dericheInstance*,F32);

F32 env__powf(struct dericheInstance*,F32,F32);

U32 env__fprintf(struct dericheInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct dericheInstance*,U32,U32,U32);

void f6(dericheInstance*);

void f7(dericheInstance*);

U32 f8(dericheInstance*,U32,U32);

void f9(dericheInstance*,U32,U32,U32,U32,U32);

void f10(dericheInstance*,U32,U32,F32,U32,U32,U32,U32);

void f11(dericheInstance*,U32,U32,U32);

U32 f12(dericheInstance*,U64,U32);

void deriche____wasm_call_ctors(dericheInstance*i);

void deriche____wasm_apply_data_relocs(dericheInstance*i);

U32 deriche_submain(dericheInstance*i,U32 l0,U32 l1);

void dericheInstantiate(dericheInstance* instance, void* resolve(const char* module, const char* name));

void dericheFreeInstance(dericheInstance* instance);

#endif /* deriche_H */

