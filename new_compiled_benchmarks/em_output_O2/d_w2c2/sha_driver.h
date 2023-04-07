#ifndef shadriver_H
#define shadriver_H

#include "w2c2_base.h"

typedef struct shadriverInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*GOTX2Emem__sha_info_digest;
U32*GOTX2Emem__sha_info_count_lo;
U32*GOTX2Emem__sha_info_count_hi;
U32*GOTX2Emem__sha_info_data;
U32*GOTX2Emem__indata;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__endTimer;
U32 g9;
U32 g10;
U32 g11;
U32 g12;
U32 g13;
U32 g14;
U32 g15;
U32 g16;
U32 g17;
} shadriverInstance;

U32 env__memset(struct shadriverInstance*,U32,U32,U32);

U32 env__gettimeofday(struct shadriverInstance*,U32,U32);

U32 env__iprintf(struct shadriverInstance*,U32,U32);

U32 env_____small_printf(struct shadriverInstance*,U32,U32);

void f4(shadriverInstance*);

void f5(shadriverInstance*);

void f6(shadriverInstance*,U32,U32,U32,U32);

void f7(shadriverInstance*,U32,U32,U32);

void f8(shadriverInstance*);

void f9(shadriverInstance*,U32,U32);

void f10(shadriverInstance*);

void f11(shadriverInstance*);

void f12(shadriverInstance*);

U32 f13(shadriverInstance*);

void shadriver____wasm_call_ctors(shadriverInstance*i);

void shadriver____wasm_apply_data_relocs(shadriverInstance*i);

void shadriver_local_memset(shadriverInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

void shadriver_local_memcpy(shadriverInstance*i,U32 l0,U32 l1,U32 l2);

void shadriver_sha_init(shadriverInstance*i);

void shadriver_sha_update(shadriverInstance*i,U32 l0,U32 l1);

void shadriver_sha_final(shadriverInstance*i);

void shadriver_sha_stream(shadriverInstance*i);

U32 shadriver_submain(shadriverInstance*i);

void shadriverInstantiate(shadriverInstance* instance, void* resolve(const char* module, const char* name));

void shadriverFreeInstance(shadriverInstance* instance);

#endif /* shadriver_H */

