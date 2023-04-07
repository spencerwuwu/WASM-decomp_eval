#ifndef aes_H
#define aes_H

#include "w2c2_base.h"

typedef struct aesInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__nb;
U32*GOTX2Emem__round_val;
U32*GOTX2Emem__word;
U32*GOTX2Emem__main_result;
U32*GOTX2Emem__Sbox;
U32*GOTX2Emem__Rcon0;
U32*GOTX2Emem__invSbox;
U32*GOTX2Emem__statemt;
U32*GOTX2Emem__key;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__endTimer;
U32 g14;
U32 g15;
U32 g16;
U32 g17;
U32 g18;
U32 g19;
U32 g20;
U32 g21;
U32 g22;
U32 g23;
U32 g24;
U32 g25;
} aesInstance;

U32 env__gettimeofday(struct aesInstance*,U32,U32);

U32 env__iprintf(struct aesInstance*,U32,U32);

U32 env_____small_printf(struct aesInstance*,U32,U32);

void f3(aesInstance*);

void f4(aesInstance*);

U32 f5(aesInstance*,U32,U32,U32);

U32 f6(aesInstance*,U32,U32);

void f7(aesInstance*,U32,U32);

U32 f8(aesInstance*,U32,U32,U32);

U32 f9(aesInstance*,U32,U32,U32);

U32 f10(aesInstance*,U32,U32,U32);

void f11(aesInstance*,U32,U32);

U32 f12(aesInstance*,U32,U32,U32);

U32 f13(aesInstance*,U32);

U32 f14(aesInstance*);

U32 f15(aesInstance*);

void aes____wasm_call_ctors(aesInstance*i);

void aes____wasm_apply_data_relocs(aesInstance*i);

U32 aes_encrypt(aesInstance*i,U32 l0,U32 l1,U32 l2);

U32 aes_KeySchedule(aesInstance*i,U32 l0,U32 l1);

void aes_ByteSub_ShiftRow(aesInstance*i,U32 l0,U32 l1);

U32 aes_MixColumn_AddRoundKey(aesInstance*i,U32 l0,U32 l1,U32 l2);

U32 aes_AddRoundKey(aesInstance*i,U32 l0,U32 l1,U32 l2);

U32 aes_decrypt(aesInstance*i,U32 l0,U32 l1,U32 l2);

void aes_InversShiftRow_ByteSub(aesInstance*i,U32 l0,U32 l1);

U32 aes_AddRoundKey_InversMixColumn(aesInstance*i,U32 l0,U32 l1,U32 l2);

U32 aes_SubByte(aesInstance*i,U32 l0);

U32 aes_aes_main(aesInstance*i);

U32 aes_submain(aesInstance*i);

void aesInstantiate(aesInstance* instance, void* resolve(const char* module, const char* name));

void aesFreeInstance(aesInstance* instance);

#endif /* aes_H */

