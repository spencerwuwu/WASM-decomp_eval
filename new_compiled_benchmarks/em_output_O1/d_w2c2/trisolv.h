#ifndef trisolv_H
#define trisolv_H

#include "w2c2_base.h"

typedef struct trisolvInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__stderr;
} trisolvInstance;

U32 env__fwrite(struct trisolvInstance*,U32,U32,U32,U32);

U32 env__fiprintf(struct trisolvInstance*,U32,U32,U32);

U32 env_____small_fprintf(struct trisolvInstance*,U32,U32,U32);

U32 env__fputc(struct trisolvInstance*,U32,U32);

void env__free(struct trisolvInstance*,U32);

U32 env__polybench_alloc_data(struct trisolvInstance*,U32,U32,U32);

void f6(trisolvInstance*);

void f7(trisolvInstance*);

U32 f8(trisolvInstance*,U32,U32);

U32 f9(trisolvInstance*,U64,U32);

void trisolv____wasm_call_ctors(trisolvInstance*i);

void trisolv____wasm_apply_data_relocs(trisolvInstance*i);

U32 trisolv_submain(trisolvInstance*i,U32 l0,U32 l1);

void trisolvInstantiate(trisolvInstance* instance, void* resolve(const char* module, const char* name));

void trisolvFreeInstance(trisolvInstance* instance);

#endif /* trisolv_H */

