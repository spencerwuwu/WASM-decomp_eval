/* Automatically generated by wasm2c */
#ifndef DFSIN_H_GENERATED_
#define DFSIN_H_GENERATED_

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
extern u32* w2c_GOT0x2Emem_float_exception_flags(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_float_rounding_mode(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_startTimer(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_test_in(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_test_out(struct w2c_GOT0x2Emem*);
extern u32* w2c_env_0x5F_memory_base(struct w2c_env*);
extern u32* w2c_env_0x5F_stack_pointer(struct w2c_env*);
extern u32* w2c_env_0x5F_table_base(struct w2c_env*);
extern wasm_rt_memory_t* w2c_env_memory(struct w2c_env*);

typedef struct w2c_dfsin {
  struct w2c_env* w2c_env_instance;
  /* import: 'GOT.mem' 'endTimer' */
  u32 *w2c_GOT0x2Emem_endTimer;
  /* import: 'GOT.mem' 'float_exception_flags' */
  u32 *w2c_GOT0x2Emem_float_exception_flags;
  /* import: 'GOT.mem' 'float_rounding_mode' */
  u32 *w2c_GOT0x2Emem_float_rounding_mode;
  /* import: 'GOT.mem' 'startTimer' */
  u32 *w2c_GOT0x2Emem_startTimer;
  /* import: 'GOT.mem' 'test_in' */
  u32 *w2c_GOT0x2Emem_test_in;
  /* import: 'GOT.mem' 'test_out' */
  u32 *w2c_GOT0x2Emem_test_out;
  /* import: 'env' '__memory_base' */
  u32 *w2c_env_0x5F_memory_base;
  /* import: 'env' '__stack_pointer' */
  u32 *w2c_env_0x5F_stack_pointer;
  /* import: 'env' '__table_base' */
  u32 *w2c_env_0x5F_table_base;
  /* import: 'env' 'memory' */
  wasm_rt_memory_t *w2c_env_memory;
  u32 w2c_float_exception_flags_1;
  u32 w2c_float_rounding_mode_1;
  u32 w2c_startTimer_1;
  u32 w2c_test_in_1;
  u32 w2c_test_out_1;
  u32 w2c_endTimer_1;
} w2c_dfsin;

void wasm2c_dfsin_instantiate(w2c_dfsin*, struct w2c_GOT0x2Emem*, struct w2c_env*);
void wasm2c_dfsin_free(w2c_dfsin*);
wasm_rt_func_type_t wasm2c_dfsin_get_func_type(uint32_t param_count, uint32_t result_count, ...);

/* import: 'env' 'gettimeofday' */
u32 w2c_env_gettimeofday(struct w2c_env*, u32, u32);

/* import: 'env' 'printf' */
u32 w2c_env_printf(struct w2c_env*, u32, u32);

/* import: 'env' 'setTempRet0' */
void w2c_env_setTempRet0(struct w2c_env*, u32);

extern const u32 wasm2c_dfsin_min_env_memory;
extern const u32 wasm2c_dfsin_max_env_memory;

/* export: '__wasm_call_ctors' */
void w2c_dfsin_0x5F_wasm_call_ctors(w2c_dfsin*);

/* export: '__wasm_apply_data_relocs' */
void w2c_dfsin_0x5F_wasm_apply_data_relocs(w2c_dfsin*);

/* export: 'shift64RightJamming' */
void w2c_dfsin_shift64RightJamming(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'shift64ExtraRightJamming' */
void w2c_dfsin_shift64ExtraRightJamming(w2c_dfsin*, u32, u32, u32, u32, u32, u32, u32);

/* export: 'add128' */
void w2c_dfsin_add128(w2c_dfsin*, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);

/* export: 'sub128' */
void w2c_dfsin_sub128(w2c_dfsin*, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);

/* export: 'mul64To128' */
void w2c_dfsin_mul64To128(w2c_dfsin*, u32, u32, u32, u32, u32, u32);

/* export: 'float_raise' */
void w2c_dfsin_float_raise(w2c_dfsin*, u32);

/* export: 'float_exception_flags' */
u32* w2c_dfsin_float_exception_flags(w2c_dfsin* instance);

/* export: 'float64_is_nan' */
u32 w2c_dfsin_float64_is_nan(w2c_dfsin*, u32, u32);

/* export: 'float64_is_signaling_nan' */
u32 w2c_dfsin_float64_is_signaling_nan(w2c_dfsin*, u32, u32);

/* export: 'extractFloat64Frac' */
u32 w2c_dfsin_extractFloat64Frac(w2c_dfsin*, u32, u32);

/* export: 'extractFloat64Exp' */
u32 w2c_dfsin_extractFloat64Exp(w2c_dfsin*, u32, u32);

/* export: 'extractFloat64Sign' */
u32 w2c_dfsin_extractFloat64Sign(w2c_dfsin*, u32, u32);

/* export: 'normalizeFloat64Subnormal' */
void w2c_dfsin_normalizeFloat64Subnormal(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'packFloat64' */
u32 w2c_dfsin_packFloat64(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'roundAndPackFloat64' */
u32 w2c_dfsin_roundAndPackFloat64(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'float_rounding_mode' */
u32* w2c_dfsin_float_rounding_mode(w2c_dfsin* instance);

/* export: 'normalizeRoundAndPackFloat64' */
u32 w2c_dfsin_normalizeRoundAndPackFloat64(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'int32_to_float64' */
u32 w2c_dfsin_int32_to_float64(w2c_dfsin*, u32);

/* export: 'addFloat64Sigs' */
u32 w2c_dfsin_addFloat64Sigs(w2c_dfsin*, u32, u32, u32, u32, u32);

/* export: 'subFloat64Sigs' */
u32 w2c_dfsin_subFloat64Sigs(w2c_dfsin*, u32, u32, u32, u32, u32);

/* export: 'float64_add' */
u32 w2c_dfsin_float64_add(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'float64_mul' */
u32 w2c_dfsin_float64_mul(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'float64_div' */
u32 w2c_dfsin_float64_div(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'float64_le' */
u32 w2c_dfsin_float64_le(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'float64_ge' */
u32 w2c_dfsin_float64_ge(w2c_dfsin*, u32, u32, u32, u32);

/* export: 'float64_neg' */
u32 w2c_dfsin_float64_neg(w2c_dfsin*, u32, u32);

/* export: 'float64_abs' */
u32 w2c_dfsin_float64_abs(w2c_dfsin*, u32, u32);

/* export: 'local_sin' */
u32 w2c_dfsin_local_sin(w2c_dfsin*, u32, u32);

/* export: 'ullong_to_double' */
f64 w2c_dfsin_ullong_to_double(w2c_dfsin*, u32, u32);

/* export: 'submain' */
u32 w2c_dfsin_submain(w2c_dfsin*);

/* export: 'startTimer' */
u32* w2c_dfsin_startTimer(w2c_dfsin* instance);

/* export: 'test_in' */
u32* w2c_dfsin_test_in(w2c_dfsin* instance);

/* export: 'test_out' */
u32* w2c_dfsin_test_out(w2c_dfsin* instance);

/* export: 'endTimer' */
u32* w2c_dfsin_endTimer(w2c_dfsin* instance);

/* export: 'orig$shift64RightJamming' */
void w2c_dfsin_orig0x24shift64RightJamming(w2c_dfsin*, u64, u32, u32);

/* export: 'orig$shift64ExtraRightJamming' */
void w2c_dfsin_orig0x24shift64ExtraRightJamming(w2c_dfsin*, u64, u64, u32, u32, u32);

/* export: 'orig$add128' */
void w2c_dfsin_orig0x24add128(w2c_dfsin*, u64, u64, u64, u64, u32, u32);

/* export: 'orig$sub128' */
void w2c_dfsin_orig0x24sub128(w2c_dfsin*, u64, u64, u64, u64, u32, u32);

/* export: 'orig$mul64To128' */
void w2c_dfsin_orig0x24mul64To128(w2c_dfsin*, u64, u64, u32, u32);

/* export: 'orig$float64_is_nan' */
u32 w2c_dfsin_orig0x24float64_is_nan(w2c_dfsin*, u64);

/* export: 'orig$float64_is_signaling_nan' */
u32 w2c_dfsin_orig0x24float64_is_signaling_nan(w2c_dfsin*, u64);

/* export: 'orig$extractFloat64Frac' */
u64 w2c_dfsin_orig0x24extractFloat64Frac(w2c_dfsin*, u64);

/* export: 'orig$extractFloat64Exp' */
u32 w2c_dfsin_orig0x24extractFloat64Exp(w2c_dfsin*, u64);

/* export: 'orig$extractFloat64Sign' */
u32 w2c_dfsin_orig0x24extractFloat64Sign(w2c_dfsin*, u64);

/* export: 'orig$normalizeFloat64Subnormal' */
void w2c_dfsin_orig0x24normalizeFloat64Subnormal(w2c_dfsin*, u64, u32, u32);

/* export: 'orig$packFloat64' */
u64 w2c_dfsin_orig0x24packFloat64(w2c_dfsin*, u32, u32, u64);

/* export: 'orig$roundAndPackFloat64' */
u64 w2c_dfsin_orig0x24roundAndPackFloat64(w2c_dfsin*, u32, u32, u64);

/* export: 'orig$normalizeRoundAndPackFloat64' */
u64 w2c_dfsin_orig0x24normalizeRoundAndPackFloat64(w2c_dfsin*, u32, u32, u64);

/* export: 'orig$int32_to_float64' */
u64 w2c_dfsin_orig0x24int32_to_float64(w2c_dfsin*, u32);

/* export: 'orig$addFloat64Sigs' */
u64 w2c_dfsin_orig0x24addFloat64Sigs(w2c_dfsin*, u64, u64, u32);

/* export: 'orig$subFloat64Sigs' */
u64 w2c_dfsin_orig0x24subFloat64Sigs(w2c_dfsin*, u64, u64, u32);

/* export: 'orig$float64_add' */
u64 w2c_dfsin_orig0x24float64_add(w2c_dfsin*, u64, u64);

/* export: 'orig$float64_mul' */
u64 w2c_dfsin_orig0x24float64_mul(w2c_dfsin*, u64, u64);

/* export: 'orig$float64_div' */
u64 w2c_dfsin_orig0x24float64_div(w2c_dfsin*, u64, u64);

/* export: 'orig$float64_le' */
u32 w2c_dfsin_orig0x24float64_le(w2c_dfsin*, u64, u64);

/* export: 'orig$float64_ge' */
u32 w2c_dfsin_orig0x24float64_ge(w2c_dfsin*, u64, u64);

/* export: 'orig$float64_neg' */
u64 w2c_dfsin_orig0x24float64_neg(w2c_dfsin*, u64);

/* export: 'orig$float64_abs' */
u64 w2c_dfsin_orig0x24float64_abs(w2c_dfsin*, u64);

/* export: 'orig$local_sin' */
u64 w2c_dfsin_orig0x24local_sin(w2c_dfsin*, u64);

/* export: 'orig$ullong_to_double' */
f64 w2c_dfsin_orig0x24ullong_to_double(w2c_dfsin*, u64);

#ifdef __cplusplus
}
#endif

#endif  /* DFSIN_H_GENERATED_ */
