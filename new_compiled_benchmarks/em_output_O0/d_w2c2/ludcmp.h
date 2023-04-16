#ifndef ludcmp_H
#define ludcmp_H

#include "w2c2_base.h"

typedef struct ludcmpInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} ludcmpInstance;

U32 env__strcmp(struct ludcmpInstance*,U32,U32);

void env__free(struct ludcmpInstance*,U32);

U32 env__fprintf(struct ludcmpInstance*,U32,U32,U32);

U32 env__polybench_alloc_data(struct ludcmpInstance*,U32,U32,U32);

void f4(ludcmpInstance*);

void f5(ludcmpInstance*);

void f6(ludcmpInstance*,U32,U32,U32,U32,U32);

U32 f7(ludcmpInstance*,U32,U32);

void f8(ludcmpInstance*,U32,U32,U32,U32,U32);

void f9(ludcmpInstance*,U32,U32);

U32 f10(ludcmpInstance*,U64,U32);

void ludcmp____wasm_call_ctors(ludcmpInstance*i);

void ludcmp____wasm_apply_data_relocs(ludcmpInstance*i);

void ludcmp_kernel_ludcmp(ludcmpInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

U32 ludcmp_submain(ludcmpInstance*i,U32 l0,U32 l1);

void ludcmpInstantiate(ludcmpInstance* instance, void* resolve(const char* module, const char* name));

void ludcmpFreeInstance(ludcmpInstance* instance);

#endif /* ludcmp_H */

