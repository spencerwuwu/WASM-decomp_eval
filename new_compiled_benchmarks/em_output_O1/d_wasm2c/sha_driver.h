/* Automatically generated by wasm2c */
#ifndef SHA_DRIVER_H_GENERATED_
#define SHA_DRIVER_H_GENERATED_

#include <stdint.h>

#include "wasm-rt.h"

#if defined(WASM_RT_ENABLE_SIMD)
#include "simde/wasm/simd128.h"
#endif

/* TODO(binji): only use stdint.h types in header */
#ifndef WASM_RT_CORE_TYPES_DEFINED
#define WASM_RT_CORE_TYPES_DEFINED
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

#if defined(WASM_RT_ENABLE_SIMD)
typedef simde_v128_t v128;
#endif

#endif

#ifdef __cplusplus
extern "C" {
#endif

struct w2c_GOT0x2Emem;
struct w2c_env;
extern u32* w2c_GOT0x2Emem_endTimer(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_in_i(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_indata(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_outData(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_sha_info_count_hi(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_sha_info_count_lo(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_sha_info_data(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_sha_info_digest(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_startTimer(struct w2c_GOT0x2Emem*);
extern u32* w2c_env_0x5F_memory_base(struct w2c_env*);
extern u32* w2c_env_0x5F_stack_pointer(struct w2c_env*);
extern u32* w2c_env_0x5F_table_base(struct w2c_env*);
extern wasm_rt_memory_t* w2c_env_memory(struct w2c_env*);

typedef struct w2c_sha__driver {
  struct w2c_env* w2c_env_instance;
  /* import: 'GOT.mem' 'endTimer' */
  u32 *w2c_GOT0x2Emem_endTimer;
  /* import: 'GOT.mem' 'in_i' */
  u32 *w2c_GOT0x2Emem_in_i;
  /* import: 'GOT.mem' 'indata' */
  u32 *w2c_GOT0x2Emem_indata;
  /* import: 'GOT.mem' 'outData' */
  u32 *w2c_GOT0x2Emem_outData;
  /* import: 'GOT.mem' 'sha_info_count_hi' */
  u32 *w2c_GOT0x2Emem_sha_info_count_hi;
  /* import: 'GOT.mem' 'sha_info_count_lo' */
  u32 *w2c_GOT0x2Emem_sha_info_count_lo;
  /* import: 'GOT.mem' 'sha_info_data' */
  u32 *w2c_GOT0x2Emem_sha_info_data;
  /* import: 'GOT.mem' 'sha_info_digest' */
  u32 *w2c_GOT0x2Emem_sha_info_digest;
  /* import: 'GOT.mem' 'startTimer' */
  u32 *w2c_GOT0x2Emem_startTimer;
  /* import: 'env' '__memory_base' */
  u32 *w2c_env_0x5F_memory_base;
  /* import: 'env' '__stack_pointer' */
  u32 *w2c_env_0x5F_stack_pointer;
  /* import: 'env' '__table_base' */
  u32 *w2c_env_0x5F_table_base;
  /* import: 'env' 'memory' */
  wasm_rt_memory_t *w2c_env_memory;
  u32 w2c_sha_info_digest_1;
  u32 w2c_sha_info_count_lo_1;
  u32 w2c_sha_info_count_hi_1;
  u32 w2c_sha_info_data_1;
  u32 w2c_indata_1;
  u32 w2c_in_i_1;
  u32 w2c_startTimer_1;
  u32 w2c_outData_1;
  u32 w2c_endTimer_1;
} w2c_sha__driver;

void wasm2c_sha__driver_instantiate(w2c_sha__driver*, struct w2c_GOT0x2Emem*, struct w2c_env*);
void wasm2c_sha__driver_free(w2c_sha__driver*);
wasm_rt_func_type_t wasm2c_sha__driver_get_func_type(uint32_t param_count, uint32_t result_count, ...);

/* import: 'env' '__small_printf' */
u32 w2c_env_0x5F_small_printf(struct w2c_env*, u32, u32);

/* import: 'env' 'gettimeofday' */
u32 w2c_env_gettimeofday(struct w2c_env*, u32, u32);

/* import: 'env' 'iprintf' */
u32 w2c_env_iprintf(struct w2c_env*, u32, u32);

/* import: 'env' 'memset' */
u32 w2c_env_memset(struct w2c_env*, u32, u32, u32);

extern const u32 wasm2c_sha__driver_min_env_memory;
extern const u32 wasm2c_sha__driver_max_env_memory;

/* export: '__wasm_call_ctors' */
void w2c_sha__driver_0x5F_wasm_call_ctors(w2c_sha__driver*);

/* export: '__wasm_apply_data_relocs' */
void w2c_sha__driver_0x5F_wasm_apply_data_relocs(w2c_sha__driver*);

/* export: 'local_memset' */
void w2c_sha__driver_local_memset(w2c_sha__driver*, u32, u32, u32, u32);

/* export: 'local_memcpy' */
void w2c_sha__driver_local_memcpy(w2c_sha__driver*, u32, u32, u32);

/* export: 'sha_init' */
void w2c_sha__driver_sha_init(w2c_sha__driver*);

/* export: 'sha_info_digest' */
u32* w2c_sha__driver_sha_info_digest(w2c_sha__driver* instance);

/* export: 'sha_info_count_lo' */
u32* w2c_sha__driver_sha_info_count_lo(w2c_sha__driver* instance);

/* export: 'sha_info_count_hi' */
u32* w2c_sha__driver_sha_info_count_hi(w2c_sha__driver* instance);

/* export: 'sha_update' */
void w2c_sha__driver_sha_update(w2c_sha__driver*, u32, u32);

/* export: 'sha_info_data' */
u32* w2c_sha__driver_sha_info_data(w2c_sha__driver* instance);

/* export: 'sha_final' */
void w2c_sha__driver_sha_final(w2c_sha__driver*);

/* export: 'sha_stream' */
void w2c_sha__driver_sha_stream(w2c_sha__driver*);

/* export: 'indata' */
u32* w2c_sha__driver_indata(w2c_sha__driver* instance);

/* export: 'in_i' */
u32* w2c_sha__driver_in_i(w2c_sha__driver* instance);

/* export: 'submain' */
u32 w2c_sha__driver_submain(w2c_sha__driver*);

/* export: 'startTimer' */
u32* w2c_sha__driver_startTimer(w2c_sha__driver* instance);

/* export: 'outData' */
u32* w2c_sha__driver_outData(w2c_sha__driver* instance);

/* export: 'endTimer' */
u32* w2c_sha__driver_endTimer(w2c_sha__driver* instance);

#ifdef __cplusplus
}
#endif

#endif  /* SHA_DRIVER_H_GENERATED_ */
