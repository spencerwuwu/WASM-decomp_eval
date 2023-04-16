#ifndef nussinov_H
#define nussinov_H

#include "w2c2_base.h"

typedef struct nussinovInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} nussinovInstance;

U32 env__strcmp(struct nussinovInstance*,U32,U32);

void env__free(struct nussinovInstance*,U32);

U32 env__fprintf(struct nussinovInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct nussinovInstance*,U32,U32,U32);

void f4(nussinovInstance*);

void f5(nussinovInstance*);

void f6(nussinovInstance*,U32,U32,U32);

U32 f7(nussinovInstance*,U32,U32);

void f8(nussinovInstance*,U32,U32,U32);

void f9(nussinovInstance*,U32,U32);

U32 f10(nussinovInstance*,U64,U32);

void nussinov____wasm_call_ctors(nussinovInstance*i);

void nussinov____wasm_apply_data_relocs(nussinovInstance*i);

void nussinov_kernel_nussinov(nussinovInstance*i,U32 l0,U32 l1,U32 l2);

U32 nussinov_submain(nussinovInstance*i,U32 l0,U32 l1);

void nussinovInstantiate(nussinovInstance* instance, void* resolve(const char* module, const char* name));

void nussinovFreeInstance(nussinovInstance* instance);

#endif /* nussinov_H */

