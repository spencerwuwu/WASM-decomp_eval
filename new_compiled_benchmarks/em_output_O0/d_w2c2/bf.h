#ifndef bf_H
#define bf_H

#include "w2c2_base.h"

typedef struct bfInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__bf_init_P;
U32*GOTX2Emem__key_P;
U32*GOTX2Emem__bf_init_S;
U32*GOTX2Emem__key_S;
U32*GOTX2Emem__in_key;
U32*GOTX2Emem__out_key;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__endTimer;
U32 g11;
U32 g12;
U32 g13;
U32 g14;
U32 g15;
U32 g16;
U32 g17;
U32 g18;
} bfInstance;

U32 env__printf(struct bfInstance*,U32,U32);

U32 env__gettimeofday(struct bfInstance*,U32,U32);

void f2(bfInstance*);

void f3(bfInstance*);

void f4(bfInstance*,U32,U32,U32);

void f5(bfInstance*,U32,U32);

void f6(bfInstance*,U32,U32);

void f7(bfInstance*,U32,U32,U32,U32,U32,U32);

U32 f8(bfInstance*);

U32 f9(bfInstance*);

F64 f10(bfInstance*);

void bf____wasm_call_ctors(bfInstance*i);

void bf____wasm_apply_data_relocs(bfInstance*i);

void bf_local_memcpy(bfInstance*i,U32 l0,U32 l1,U32 l2);

void bf_BF_set_key(bfInstance*i,U32 l0,U32 l1);

void bf_BF_encrypt(bfInstance*i,U32 l0,U32 l1);

void bf_BF_cfb64_encrypt(bfInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4,U32 l5);

U32 bf_blowfish_main(bfInstance*i);

U32 bf_submain(bfInstance*i);

void bfInstantiate(bfInstance* instance, void* resolve(const char* module, const char* name));

void bfFreeInstance(bfInstance* instance);

#endif /* bf_H */

