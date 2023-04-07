/* Automatically generated by wasm2c */
#ifndef LUDCMP_H_GENERATED_
#define LUDCMP_H_GENERATED_

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
extern u32* w2c_GOT0x2Emem_stderr(struct w2c_GOT0x2Emem*);
extern u32* w2c_env_0x5F_memory_base(struct w2c_env*);
extern u32* w2c_env_0x5F_stack_pointer(struct w2c_env*);
extern u32* w2c_env_0x5F_table_base(struct w2c_env*);
extern wasm_rt_memory_t* w2c_env_memory(struct w2c_env*);

typedef struct w2c_ludcmp {
  struct w2c_env* w2c_env_instance;
  /* import: 'GOT.mem' 'stderr' */
  u32 *w2c_GOT0x2Emem_stderr;
  /* import: 'env' '__memory_base' */
  u32 *w2c_env_0x5F_memory_base;
  /* import: 'env' '__stack_pointer' */
  u32 *w2c_env_0x5F_stack_pointer;
  /* import: 'env' '__table_base' */
  u32 *w2c_env_0x5F_table_base;
  /* import: 'env' 'memory' */
  wasm_rt_memory_t *w2c_env_memory;
} w2c_ludcmp;

void wasm2c_ludcmp_instantiate(w2c_ludcmp*, struct w2c_GOT0x2Emem*, struct w2c_env*);
void wasm2c_ludcmp_free(w2c_ludcmp*);
wasm_rt_func_type_t wasm2c_ludcmp_get_func_type(uint32_t param_count, uint32_t result_count, ...);

/* import: 'env' '__small_fprintf' */
u32 w2c_env_0x5F_small_fprintf(struct w2c_env*, u32, u32, u32);

/* import: 'env' 'fiprintf' */
u32 w2c_env_fiprintf(struct w2c_env*, u32, u32, u32);

/* import: 'env' 'fputc' */
u32 w2c_env_fputc(struct w2c_env*, u32, u32);

/* import: 'env' 'free' */
void w2c_env_free(struct w2c_env*, u32);

/* import: 'env' 'fwrite' */
u32 w2c_env_fwrite(struct w2c_env*, u32, u32, u32, u32);

/* import: 'env' 'memset' */
u32 w2c_env_memset(struct w2c_env*, u32, u32, u32);

/* import: 'env' 'polybench_alloc_data' */
u32 w2c_env_polybench_alloc_data(struct w2c_env*, u32, u32, u32);

extern const u32 wasm2c_ludcmp_min_env_memory;
extern const u32 wasm2c_ludcmp_max_env_memory;

/* export: '__wasm_call_ctors' */
void w2c_ludcmp_0x5F_wasm_call_ctors(w2c_ludcmp*);

/* export: '__wasm_apply_data_relocs' */
void w2c_ludcmp_0x5F_wasm_apply_data_relocs(w2c_ludcmp*);

/* export: 'submain' */
u32 w2c_ludcmp_submain(w2c_ludcmp*, u32, u32);

#ifdef __cplusplus
}
#endif

#endif  /* LUDCMP_H_GENERATED_ */
