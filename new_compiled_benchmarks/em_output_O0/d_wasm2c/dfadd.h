/* Automatically generated by wasm2c */
#ifndef DFADD_H_GENERATED_
#define DFADD_H_GENERATED_

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
extern u32* w2c_GOT0x2Emem_a_input(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_b_input(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_endTimer(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_float_exception_flags(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_float_rounding_mode(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_startTimer(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_z_output(struct w2c_GOT0x2Emem*);
extern u32* w2c_env_0x5F_memory_base(struct w2c_env*);
extern u32* w2c_env_0x5F_stack_pointer(struct w2c_env*);
extern u32* w2c_env_0x5F_table_base(struct w2c_env*);
extern wasm_rt_memory_t* w2c_env_memory(struct w2c_env*);

typedef struct w2c_dfadd {
  struct w2c_env* w2c_env_instance;
  /* import: 'GOT.mem' 'a_input' */
  u32 *w2c_GOT0x2Emem_a_input;
  /* import: 'GOT.mem' 'b_input' */
  u32 *w2c_GOT0x2Emem_b_input;
  /* import: 'GOT.mem' 'endTimer' */
  u32 *w2c_GOT0x2Emem_endTimer;
  /* import: 'GOT.mem' 'float_exception_flags' */
  u32 *w2c_GOT0x2Emem_float_exception_flags;
  /* import: 'GOT.mem' 'float_rounding_mode' */
  u32 *w2c_GOT0x2Emem_float_rounding_mode;
  /* import: 'GOT.mem' 'startTimer' */
  u32 *w2c_GOT0x2Emem_startTimer;
  /* import: 'GOT.mem' 'z_output' */
  u32 *w2c_GOT0x2Emem_z_output;
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
  u32 w2c_a_input_1;
  u32 w2c_b_input_1;
  u32 w2c_z_output_1;
  u32 w2c_endTimer_1;
} w2c_dfadd;

void wasm2c_dfadd_instantiate(w2c_dfadd*, struct w2c_GOT0x2Emem*, struct w2c_env*);
void wasm2c_dfadd_free(w2c_dfadd*);
wasm_rt_func_type_t wasm2c_dfadd_get_func_type(uint32_t param_count, uint32_t result_count, ...);

/* import: 'env' 'gettimeofday' */
u32 w2c_env_gettimeofday(struct w2c_env*, u32, u32);

/* import: 'env' 'printf' */
u32 w2c_env_printf(struct w2c_env*, u32, u32);

/* import: 'env' 'setTempRet0' */
void w2c_env_setTempRet0(struct w2c_env*, u32);

extern const u32 wasm2c_dfadd_min_env_memory;
extern const u32 wasm2c_dfadd_max_env_memory;

/* export: '__wasm_call_ctors' */
void w2c_dfadd_0x5F_wasm_call_ctors(w2c_dfadd*);

/* export: '__wasm_apply_data_relocs' */
void w2c_dfadd_0x5F_wasm_apply_data_relocs(w2c_dfadd*);

/* export: 'shift64RightJamming' */
void w2c_dfadd_shift64RightJamming(w2c_dfadd*, u32, u32, u32, u32);

/* export: 'float_raise' */
void w2c_dfadd_float_raise(w2c_dfadd*, u32);

/* export: 'float_exception_flags' */
u32* w2c_dfadd_float_exception_flags(w2c_dfadd* instance);

/* export: 'float64_is_nan' */
u32 w2c_dfadd_float64_is_nan(w2c_dfadd*, u32, u32);

/* export: 'float64_is_signaling_nan' */
u32 w2c_dfadd_float64_is_signaling_nan(w2c_dfadd*, u32, u32);

/* export: 'extractFloat64Frac' */
u32 w2c_dfadd_extractFloat64Frac(w2c_dfadd*, u32, u32);

/* export: 'extractFloat64Exp' */
u32 w2c_dfadd_extractFloat64Exp(w2c_dfadd*, u32, u32);

/* export: 'extractFloat64Sign' */
u32 w2c_dfadd_extractFloat64Sign(w2c_dfadd*, u32, u32);

/* export: 'packFloat64' */
u32 w2c_dfadd_packFloat64(w2c_dfadd*, u32, u32, u32, u32);

/* export: 'roundAndPackFloat64' */
u32 w2c_dfadd_roundAndPackFloat64(w2c_dfadd*, u32, u32, u32, u32);

/* export: 'float_rounding_mode' */
u32* w2c_dfadd_float_rounding_mode(w2c_dfadd* instance);

/* export: 'normalizeRoundAndPackFloat64' */
u32 w2c_dfadd_normalizeRoundAndPackFloat64(w2c_dfadd*, u32, u32, u32, u32);

/* export: 'addFloat64Sigs' */
u32 w2c_dfadd_addFloat64Sigs(w2c_dfadd*, u32, u32, u32, u32, u32);

/* export: 'subFloat64Sigs' */
u32 w2c_dfadd_subFloat64Sigs(w2c_dfadd*, u32, u32, u32, u32, u32);

/* export: 'float64_add' */
u32 w2c_dfadd_float64_add(w2c_dfadd*, u32, u32, u32, u32);

/* export: 'ullong_to_double' */
f64 w2c_dfadd_ullong_to_double(w2c_dfadd*, u32, u32);

/* export: 'submain' */
u32 w2c_dfadd_submain(w2c_dfadd*);

/* export: 'startTimer' */
u32* w2c_dfadd_startTimer(w2c_dfadd* instance);

/* export: 'a_input' */
u32* w2c_dfadd_a_input(w2c_dfadd* instance);

/* export: 'b_input' */
u32* w2c_dfadd_b_input(w2c_dfadd* instance);

/* export: 'z_output' */
u32* w2c_dfadd_z_output(w2c_dfadd* instance);

/* export: 'endTimer' */
u32* w2c_dfadd_endTimer(w2c_dfadd* instance);

/* export: 'orig$shift64RightJamming' */
void w2c_dfadd_orig0x24shift64RightJamming(w2c_dfadd*, u64, u32, u32);

/* export: 'orig$float64_is_nan' */
u32 w2c_dfadd_orig0x24float64_is_nan(w2c_dfadd*, u64);

/* export: 'orig$float64_is_signaling_nan' */
u32 w2c_dfadd_orig0x24float64_is_signaling_nan(w2c_dfadd*, u64);

/* export: 'orig$extractFloat64Frac' */
u64 w2c_dfadd_orig0x24extractFloat64Frac(w2c_dfadd*, u64);

/* export: 'orig$extractFloat64Exp' */
u32 w2c_dfadd_orig0x24extractFloat64Exp(w2c_dfadd*, u64);

/* export: 'orig$extractFloat64Sign' */
u32 w2c_dfadd_orig0x24extractFloat64Sign(w2c_dfadd*, u64);

/* export: 'orig$packFloat64' */
u64 w2c_dfadd_orig0x24packFloat64(w2c_dfadd*, u32, u32, u64);

/* export: 'orig$roundAndPackFloat64' */
u64 w2c_dfadd_orig0x24roundAndPackFloat64(w2c_dfadd*, u32, u32, u64);

/* export: 'orig$normalizeRoundAndPackFloat64' */
u64 w2c_dfadd_orig0x24normalizeRoundAndPackFloat64(w2c_dfadd*, u32, u32, u64);

/* export: 'orig$addFloat64Sigs' */
u64 w2c_dfadd_orig0x24addFloat64Sigs(w2c_dfadd*, u64, u64, u32);

/* export: 'orig$subFloat64Sigs' */
u64 w2c_dfadd_orig0x24subFloat64Sigs(w2c_dfadd*, u64, u64, u32);

/* export: 'orig$float64_add' */
u64 w2c_dfadd_orig0x24float64_add(w2c_dfadd*, u64, u64);

/* export: 'orig$ullong_to_double' */
f64 w2c_dfadd_orig0x24ullong_to_double(w2c_dfadd*, u64);

#ifdef __cplusplus
}
#endif

#endif  /* DFADD_H_GENERATED_ */
