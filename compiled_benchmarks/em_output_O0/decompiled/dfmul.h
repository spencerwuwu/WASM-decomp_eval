/* Automatically generated by wasm2c */
#ifndef DFMUL_H_GENERATED_
#define DFMUL_H_GENERATED_

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

struct Z_env_instance_t;
struct Z_wasi_snapshot_preview1_instance_t;

typedef struct Z_dfmul_instance_t {
  struct Z_env_instance_t* Z_env_instance;
  struct Z_wasi_snapshot_preview1_instance_t* Z_wasi_snapshot_preview1_instance;
  u32 w2c_g0;
  u32 w2c_g1;
  u32 w2c_g2;
  u32 w2c_g3;
  wasm_rt_memory_t w2c_memory;
  wasm_rt_funcref_table_t w2c___indirect_function_table;
} Z_dfmul_instance_t;

void Z_dfmul_instantiate(Z_dfmul_instance_t*, struct Z_env_instance_t*, struct Z_wasi_snapshot_preview1_instance_t*);
void Z_dfmul_free(Z_dfmul_instance_t*);
wasm_rt_func_type_t Z_dfmul_get_func_type(uint32_t param_count, uint32_t result_count, ...);

/* import: 'env' 'emscripten_date_now' */
f64 Z_envZ_emscripten_date_now(struct Z_env_instance_t*);
/* import: 'env' 'emscripten_memcpy_big' */
void Z_envZ_emscripten_memcpy_big(struct Z_env_instance_t*, u32, u32, u32);
/* import: 'wasi_snapshot_preview1' 'fd_write' */
u32 Z_wasi_snapshot_preview1Z_fd_write(struct Z_wasi_snapshot_preview1_instance_t*, u32, u32, u32, u32);

/* export: 'memory' */
wasm_rt_memory_t* Z_dfmulZ_memory(Z_dfmul_instance_t* instance);

/* export: '__wasm_call_ctors' */
void Z_dfmulZ___wasm_call_ctors(Z_dfmul_instance_t*);

/* export: '__main_argc_argv' */
u32 Z_dfmulZ___main_argc_argv(Z_dfmul_instance_t*, u32, u32);

/* export: '__errno_location' */
u32 Z_dfmulZ___errno_location(Z_dfmul_instance_t*);

/* export: '__indirect_function_table' */
wasm_rt_funcref_table_t* Z_dfmulZ___indirect_function_table(Z_dfmul_instance_t* instance);

/* export: 'fflush' */
u32 Z_dfmulZ_fflush(Z_dfmul_instance_t*, u32);

/* export: 'emscripten_stack_init' */
void Z_dfmulZ_emscripten_stack_init(Z_dfmul_instance_t*);

/* export: 'emscripten_stack_get_free' */
u32 Z_dfmulZ_emscripten_stack_get_free(Z_dfmul_instance_t*);

/* export: 'emscripten_stack_get_base' */
u32 Z_dfmulZ_emscripten_stack_get_base(Z_dfmul_instance_t*);

/* export: 'emscripten_stack_get_end' */
u32 Z_dfmulZ_emscripten_stack_get_end(Z_dfmul_instance_t*);

/* export: 'stackSave' */
u32 Z_dfmulZ_stackSave(Z_dfmul_instance_t*);

/* export: 'stackRestore' */
void Z_dfmulZ_stackRestore(Z_dfmul_instance_t*, u32);

/* export: 'stackAlloc' */
u32 Z_dfmulZ_stackAlloc(Z_dfmul_instance_t*, u32);

/* export: 'emscripten_stack_get_current' */
u32 Z_dfmulZ_emscripten_stack_get_current(Z_dfmul_instance_t*);

/* export: 'dynCall_jiji' */
u32 Z_dfmulZ_dynCall_jiji(Z_dfmul_instance_t*, u32, u32, u32, u32, u32);

#ifdef __cplusplus
}
#endif

#endif  /* DFMUL_H_GENERATED_ */
