#ifndef AES_WASM2C_H_GENERATED_
#define AES_WASM2C_H_GENERATED_
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "wasm-rt.h"

#ifndef WASM_RT_MODULE_PREFIX
#define WASM_RT_MODULE_PREFIX
#endif

#define WASM_RT_PASTE_(x, y) x ## y
#define WASM_RT_PASTE(x, y) WASM_RT_PASTE_(x, y)
#define WASM_RT_ADD_PREFIX(x) WASM_RT_PASTE(WASM_RT_MODULE_PREFIX, x)

/* TODO(binji): only use stdint.h types in header */
typedef uint8_t u8;
typedef int8_t s8;
typedef uint16_t u16;
typedef int16_t s16;
typedef uint32_t u32;
typedef int32_t s32;
typedef uint64_t u64;
typedef int64_t s64;
typedef float f32;
typedef double f64;

extern void WASM_RT_ADD_PREFIX(init)(void);

/* import: 'env' 'printf' */
extern u32 (*Z_envZ_printfZ_iii)(u32, u32);
/* import: 'env' 'gettimeofday' */
extern u32 (*Z_envZ_gettimeofdayZ_iii)(u32, u32);
/* import: 'env' '__stack_pointer' */
extern u32 (*Z_envZ___stack_pointerZ_i);
/* import: 'env' '__memory_base' */
extern u32 (*Z_envZ___memory_baseZ_i);
/* import: 'env' '__table_base' */
extern u32 (*Z_envZ___table_baseZ_i);
/* import: 'GOT.mem' 'round_val' */
extern u32 (*Z_GOTZ2EmemZ_round_valZ_i);
/* import: 'GOT.mem' 'nb' */
extern u32 (*Z_GOTZ2EmemZ_nbZ_i);
/* import: 'GOT.mem' 'main_result' */
extern u32 (*Z_GOTZ2EmemZ_main_resultZ_i);
/* import: 'GOT.mem' 'word' */
extern u32 (*Z_GOTZ2EmemZ_wordZ_i);
/* import: 'GOT.mem' 'Rcon0' */
extern u32 (*Z_GOTZ2EmemZ_Rcon0Z_i);
/* import: 'GOT.mem' 'Sbox' */
extern u32 (*Z_GOTZ2EmemZ_SboxZ_i);
/* import: 'GOT.mem' 'invSbox' */
extern u32 (*Z_GOTZ2EmemZ_invSboxZ_i);
/* import: 'GOT.mem' 'statemt' */
extern u32 (*Z_GOTZ2EmemZ_statemtZ_i);
/* import: 'GOT.mem' 'key' */
extern u32 (*Z_GOTZ2EmemZ_keyZ_i);
/* import: 'GOT.mem' 'startTimer' */
extern u32 (*Z_GOTZ2EmemZ_startTimerZ_i);
/* import: 'GOT.mem' 'endTimer' */
extern u32 (*Z_GOTZ2EmemZ_endTimerZ_i);
/* import: 'env' 'memory' */
extern wasm_rt_memory_t (*Z_envZ_memory);

/* export: '__wasm_call_ctors' */
extern void (*WASM_RT_ADD_PREFIX(Z___wasm_call_ctorsZ_vv))(void);
/* export: '__wasm_apply_data_relocs' */
extern void (*WASM_RT_ADD_PREFIX(Z___wasm_apply_data_relocsZ_vv))(void);
/* export: 'encrypt' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_encryptZ_iiii))(u32, u32, u32);
/* export: 'KeySchedule' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_KeyScheduleZ_iii))(u32, u32);
/* export: 'round_val' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_round_valZ_i));
/* export: 'nb' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_nbZ_i));
/* export: 'AddRoundKey' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_AddRoundKeyZ_iiii))(u32, u32, u32);
/* export: 'ByteSub_ShiftRow' */
extern void (*WASM_RT_ADD_PREFIX(Z_ByteSub_ShiftRowZ_vii))(u32, u32);
/* export: 'MixColumn_AddRoundKey' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_MixColumn_AddRoundKeyZ_iiii))(u32, u32, u32);
/* export: 'main_result' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_main_resultZ_i));
/* export: 'word' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_wordZ_i));
/* export: 'SubByte' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_SubByteZ_ii))(u32);
/* export: 'Rcon0' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_Rcon0Z_i));
/* export: 'Sbox' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_SboxZ_i));
/* export: 'decrypt' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_decryptZ_iiii))(u32, u32, u32);
/* export: 'InversShiftRow_ByteSub' */
extern void (*WASM_RT_ADD_PREFIX(Z_InversShiftRow_ByteSubZ_vii))(u32, u32);
/* export: 'AddRoundKey_InversMixColumn' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_AddRoundKey_InversMixColumnZ_iiii))(u32, u32, u32);
/* export: 'invSbox' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_invSboxZ_i));
/* export: 'aes_main' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_aes_mainZ_iv))(void);
/* export: 'statemt' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_statemtZ_i));
/* export: 'key' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_keyZ_i));
/* export: 'submain' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_submainZ_iv))(void);
/* export: 'startTimer' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_startTimerZ_i));
/* export: 'endTimer' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_endTimerZ_i));
/* export: 'type' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_typeZ_i));
#ifdef __cplusplus
}
#endif

#endif  /* AES_WASM2C_H_GENERATED_ */
