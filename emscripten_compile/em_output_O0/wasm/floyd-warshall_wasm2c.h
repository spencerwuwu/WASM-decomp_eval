#ifndef FLOYD_WARSHALL_WASM2C_H_GENERATED_
#define FLOYD_WARSHALL_WASM2C_H_GENERATED_
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

/* import: 'env' 'strcmp' */
extern u32 (*Z_envZ_strcmpZ_iii)(u32, u32);
/* import: 'env' 'free' */
extern void (*Z_envZ_freeZ_vi)(u32);
/* import: 'env' 'fprintf' */
extern u32 (*Z_envZ_fprintfZ_iiii)(u32, u32, u32);
/* import: 'env' 'polybench_alloc_data' */
extern u32 (*Z_envZ_polybench_alloc_dataZ_iiii)(u32, u32, u32);
/* import: 'env' '__stack_pointer' */
extern u32 (*Z_envZ___stack_pointerZ_i);
/* import: 'env' '__memory_base' */
extern u32 (*Z_envZ___memory_baseZ_i);
/* import: 'env' '__table_base' */
extern u32 (*Z_envZ___table_baseZ_i);
/* import: 'GOT.mem' 'stderr' */
extern u32 (*Z_GOTZ2EmemZ_stderrZ_i);
/* import: 'env' 'memory' */
extern wasm_rt_memory_t (*Z_envZ_memory);

/* export: '__wasm_call_ctors' */
extern void (*WASM_RT_ADD_PREFIX(Z___wasm_call_ctorsZ_vv))(void);
/* export: '__wasm_apply_data_relocs' */
extern void (*WASM_RT_ADD_PREFIX(Z___wasm_apply_data_relocsZ_vv))(void);
/* export: 'submain' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_submainZ_iii))(u32, u32);
/* export: '__main_argc_argv' */
extern u32 (*WASM_RT_ADD_PREFIX(Z___main_argc_argvZ_iii))(u32, u32);
#ifdef __cplusplus
}
#endif

#endif  /* FLOYD_WARSHALL_WASM2C_H_GENERATED_ */
