/* Automatically generated by wasm2c */
#ifndef DURBIN_H_GENERATED_
#define DURBIN_H_GENERATED_

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

typedef struct Z_durbin_instance_t {
  struct Z_env_instance_t* Z_env_instance;
  struct Z_wasi_snapshot_preview1_instance_t* Z_wasi_snapshot_preview1_instance;
  u32 w2c_g0;
  u32 w2c_g1;
  u32 w2c_g2;
  u32 w2c_g3;
  wasm_rt_memory_t w2c_memory;
  wasm_rt_funcref_table_t w2c___indirect_function_table;
} Z_durbin_instance_t;

void Z_durbin_instantiate(Z_durbin_instance_t*, struct Z_env_instance_t*, struct Z_wasi_snapshot_preview1_instance_t*);
void Z_durbin_free(Z_durbin_instance_t*);
wasm_rt_func_type_t Z_durbin_get_func_type(uint32_t param_count, uint32_t result_count, ...);

/* import: 'env' 'emscripten_date_now' */
f64 Z_envZ_emscripten_date_now(struct Z_env_instance_t*);
/* import: 'env' 'emscripten_memcpy_big' */
void Z_envZ_emscripten_memcpy_big(struct Z_env_instance_t*, u32, u32, u32);
/* import: 'env' 'emscripten_resize_heap' */
u32 Z_envZ_emscripten_resize_heap(struct Z_env_instance_t*, u32);
/* import: 'wasi_snapshot_preview1' 'fd_close' */
u32 Z_wasi_snapshot_preview1Z_fd_close(struct Z_wasi_snapshot_preview1_instance_t*, u32);
/* import: 'wasi_snapshot_preview1' 'fd_seek' */
u32 Z_wasi_snapshot_preview1Z_fd_seek(struct Z_wasi_snapshot_preview1_instance_t*, u32, u32, u32, u32, u32);
/* import: 'wasi_snapshot_preview1' 'fd_write' */
u32 Z_wasi_snapshot_preview1Z_fd_write(struct Z_wasi_snapshot_preview1_instance_t*, u32, u32, u32, u32);

/* export: 'memory' */
wasm_rt_memory_t* Z_durbinZ_memory(Z_durbin_instance_t* instance);

/* export: '__wasm_call_ctors' */
void Z_durbinZ___wasm_call_ctors(Z_durbin_instance_t*);

/* export: '__main_argc_argv' */
u32 Z_durbinZ___main_argc_argv(Z_durbin_instance_t*, u32, u32);

/* export: '__errno_location' */
u32 Z_durbinZ___errno_location(Z_durbin_instance_t*);

/* export: '__indirect_function_table' */
wasm_rt_funcref_table_t* Z_durbinZ___indirect_function_table(Z_durbin_instance_t* instance);

/* export: 'fflush' */
u32 Z_durbinZ_fflush(Z_durbin_instance_t*, u32);

/* export: 'emscripten_stack_init' */
void Z_durbinZ_emscripten_stack_init(Z_durbin_instance_t*);

/* export: 'emscripten_stack_get_free' */
u32 Z_durbinZ_emscripten_stack_get_free(Z_durbin_instance_t*);

/* export: 'emscripten_stack_get_base' */
u32 Z_durbinZ_emscripten_stack_get_base(Z_durbin_instance_t*);

/* export: 'emscripten_stack_get_end' */
u32 Z_durbinZ_emscripten_stack_get_end(Z_durbin_instance_t*);

/* export: 'stackSave' */
u32 Z_durbinZ_stackSave(Z_durbin_instance_t*);

/* export: 'stackRestore' */
void Z_durbinZ_stackRestore(Z_durbin_instance_t*, u32);

/* export: 'stackAlloc' */
u32 Z_durbinZ_stackAlloc(Z_durbin_instance_t*, u32);

/* export: 'emscripten_stack_get_current' */
u32 Z_durbinZ_emscripten_stack_get_current(Z_durbin_instance_t*);

/* export: 'dynCall_jiji' */
u32 Z_durbinZ_dynCall_jiji(Z_durbin_instance_t*, u32, u32, u32, u32, u32);

#ifdef __cplusplus
}
#endif

#endif  /* DURBIN_H_GENERATED_ */
