#ifndef aes_H
#define aes_H

#include "w2c2_base.h"

typedef struct aesInstance {
U32(*env_printf)(struct aesInstance*,U32,U32);
U32(*env_gettimeofday)(struct aesInstance*,U32,U32);
wasmMemory*env_memory;
U32*env_X5FX5FstackX5Fpointer;
U32*env_X5FX5FmemoryX5Fbase;
U32*env_X5FX5FtableX5Fbase;
U32*GOTX2Emem_roundX5Fval;
U32*GOTX2Emem_nb;
U32*GOTX2Emem_mainX5Fresult;
U32*GOTX2Emem_word;
U32*GOTX2Emem_Rcon0;
U32*GOTX2Emem_Sbox;
U32*GOTX2Emem_invSbox;
U32*GOTX2Emem_statemt;
U32*GOTX2Emem_key;
U32*GOTX2Emem_startTimer;
U32*GOTX2Emem_endTimer;
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

void aes_f2(aesInstance*);

void aes_f3(aesInstance*);

U32 aes_f4(aesInstance*,U32,U32,U32);

U32 aes_f5(aesInstance*,U32,U32);

U32 aes_f6(aesInstance*,U32,U32,U32);

void aes_f7(aesInstance*,U32,U32);

U32 aes_f8(aesInstance*,U32,U32,U32);

U32 aes_f9(aesInstance*,U32);

U32 aes_f10(aesInstance*,U32,U32,U32);

void aes_f11(aesInstance*,U32,U32);

U32 aes_f12(aesInstance*,U32,U32,U32);

U32 aes_f13(aesInstance*);

U32 aes_f14(aesInstance*);

F64 aes_f15(aesInstance*);

void aes_X5FX5FwasmX5FcallX5Fctors(aesInstance*i);

void aes_X5FX5FwasmX5FapplyX5FdataX5Frelocs(aesInstance*i);

U32 aes_encrypt(aesInstance*i,U32 l0,U32 l1,U32 l2);

U32 aes_KeySchedule(aesInstance*i,U32 l0,U32 l1);

U32 aes_AddRoundKey(aesInstance*i,U32 l0,U32 l1,U32 l2);

void aes_ByteSubX5FShiftRow(aesInstance*i,U32 l0,U32 l1);

U32 aes_MixColumnX5FAddRoundKey(aesInstance*i,U32 l0,U32 l1,U32 l2);

U32 aes_SubByte(aesInstance*i,U32 l0);

U32 aes_decrypt(aesInstance*i,U32 l0,U32 l1,U32 l2);

void aes_InversShiftRowX5FByteSub(aesInstance*i,U32 l0,U32 l1);

U32 aes_AddRoundKeyX5FInversMixColumn(aesInstance*i,U32 l0,U32 l1,U32 l2);

U32 aes_aesX5Fmain(aesInstance*i);

U32 aes_submain(aesInstance*i);

void aesInstantiate(aesInstance* instance, void* resolve(const char* module, const char* name));

void aesFreeInstance(aesInstance* instance);

#endif /* aes_H */

