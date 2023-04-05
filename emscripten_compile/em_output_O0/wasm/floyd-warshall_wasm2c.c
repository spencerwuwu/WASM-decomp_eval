#include <math.h>
#include <string.h>

#include "floyd-warshall_wasm2c.h"

WASM_RT_THREAD_LOCAL uint32_t wasm_rt_call_stack_depth = 0;

#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#define LIKELY(x) __builtin_expect(!!(x), 1)

#define TRAP(x) (wasm_rt_trap(WASM_RT_TRAP_##x), 0)

#define FUNC_PROLOGUE                                            \
  if (++wasm_rt_call_stack_depth > WASM_RT_MAX_CALL_STACK_DEPTH) \
    TRAP(EXHAUSTION)

#define FUNC_EPILOGUE --wasm_rt_call_stack_depth

#define UNREACHABLE TRAP(UNREACHABLE)

#define CALL_INDIRECT(table, t, ft, x, ...)          \
  (LIKELY((x) < table.size && table.data[x].func &&  \
          table.data[x].func_type == func_types[ft]) \
       ? ((t)table.data[x].func)(__VA_ARGS__)        \
       : TRAP(CALL_INDIRECT))

#define MEMCHECK(mem, a, t)  \
  if (UNLIKELY((a) + sizeof(t) > mem->size)) TRAP(OOB)

#define DEFINE_LOAD(name, t1, t2, t3)              \
  static inline t3 name(wasm_rt_memory_t* mem, u64 addr) {   \
    MEMCHECK(mem, addr, t1);                       \
    t1 result;                                     \
    memcpy(&result, &mem->data[addr], sizeof(t1)); \
    return (t3)(t2)result;                         \
  }

#define DEFINE_STORE(name, t1, t2)                           \
  static inline void name(wasm_rt_memory_t* mem, u64 addr, t2 value) { \
    MEMCHECK(mem, addr, t1);                                 \
    t1 wrapped = (t1)value;                                  \
    memcpy(&mem->data[addr], &wrapped, sizeof(t1));          \
  }

DEFINE_LOAD(i32_load, u32, u32, u32);
DEFINE_LOAD(i64_load, u64, u64, u64);
DEFINE_LOAD(f32_load, f32, f32, f32);
DEFINE_LOAD(f64_load, f64, f64, f64);
DEFINE_LOAD(i32_load8_s, s8, s32, u32);
DEFINE_LOAD(i64_load8_s, s8, s64, u64);
DEFINE_LOAD(i32_load8_u, u8, u32, u32);
DEFINE_LOAD(i64_load8_u, u8, u64, u64);
DEFINE_LOAD(i32_load16_s, s16, s32, u32);
DEFINE_LOAD(i64_load16_s, s16, s64, u64);
DEFINE_LOAD(i32_load16_u, u16, u32, u32);
DEFINE_LOAD(i64_load16_u, u16, u64, u64);
DEFINE_LOAD(i64_load32_s, s32, s64, u64);
DEFINE_LOAD(i64_load32_u, u32, u64, u64);
DEFINE_STORE(i32_store, u32, u32);
DEFINE_STORE(i64_store, u64, u64);
DEFINE_STORE(f32_store, f32, f32);
DEFINE_STORE(f64_store, f64, f64);
DEFINE_STORE(i32_store8, u8, u32);
DEFINE_STORE(i32_store16, u16, u32);
DEFINE_STORE(i64_store8, u8, u64);
DEFINE_STORE(i64_store16, u16, u64);
DEFINE_STORE(i64_store32, u32, u64);

#define I32_CLZ(x) ((x) ? __builtin_clz(x) : 32)
#define I64_CLZ(x) ((x) ? __builtin_clzll(x) : 64)
#define I32_CTZ(x) ((x) ? __builtin_ctz(x) : 32)
#define I64_CTZ(x) ((x) ? __builtin_ctzll(x) : 64)
#define I32_POPCNT(x) (__builtin_popcount(x))
#define I64_POPCNT(x) (__builtin_popcountll(x))

#define DIV_S(ut, min, x, y)                                 \
   ((UNLIKELY((y) == 0)) ?                TRAP(DIV_BY_ZERO)  \
  : (UNLIKELY((x) == min && (y) == -1)) ? TRAP(INT_OVERFLOW) \
  : (ut)((x) / (y)))

#define REM_S(ut, min, x, y)                                \
   ((UNLIKELY((y) == 0)) ?                TRAP(DIV_BY_ZERO) \
  : (UNLIKELY((x) == min && (y) == -1)) ? 0                 \
  : (ut)((x) % (y)))

#define I32_DIV_S(x, y) DIV_S(u32, INT32_MIN, (s32)x, (s32)y)
#define I64_DIV_S(x, y) DIV_S(u64, INT64_MIN, (s64)x, (s64)y)
#define I32_REM_S(x, y) REM_S(u32, INT32_MIN, (s32)x, (s32)y)
#define I64_REM_S(x, y) REM_S(u64, INT64_MIN, (s64)x, (s64)y)

#define DIVREM_U(op, x, y) \
  ((UNLIKELY((y) == 0)) ? TRAP(DIV_BY_ZERO) : ((x) op (y)))

#define DIV_U(x, y) DIVREM_U(/, x, y)
#define REM_U(x, y) DIVREM_U(%, x, y)

#define ROTL(x, y, mask) \
  (((x) << ((y) & (mask))) | ((x) >> (((mask) - (y) + 1) & (mask))))
#define ROTR(x, y, mask) \
  (((x) >> ((y) & (mask))) | ((x) << (((mask) - (y) + 1) & (mask))))

#define I32_ROTL(x, y) ROTL(x, y, 31)
#define I64_ROTL(x, y) ROTL(x, y, 63)
#define I32_ROTR(x, y) ROTR(x, y, 31)
#define I64_ROTR(x, y) ROTR(x, y, 63)

#define FMIN(x, y)                                          \
   ((UNLIKELY((x) != (x))) ? NAN                            \
  : (UNLIKELY((y) != (y))) ? NAN                            \
  : (UNLIKELY((x) == 0 && (y) == 0)) ? (signbit(x) ? x : y) \
  : (x < y) ? x : y)

#define FMAX(x, y)                                          \
   ((UNLIKELY((x) != (x))) ? NAN                            \
  : (UNLIKELY((y) != (y))) ? NAN                            \
  : (UNLIKELY((x) == 0 && (y) == 0)) ? (signbit(x) ? y : x) \
  : (x > y) ? x : y)

#define TRUNC_S(ut, st, ft, min, max, maxop, x)                             \
   ((UNLIKELY((x) != (x))) ? TRAP(INVALID_CONVERSION)                       \
  : (UNLIKELY((x) < (ft)(min) || (x) maxop (ft)(max))) ? TRAP(INT_OVERFLOW) \
  : (ut)(st)(x))

#define I32_TRUNC_S_F32(x) TRUNC_S(u32, s32, f32, INT32_MIN, INT32_MAX, >=, x)
#define I64_TRUNC_S_F32(x) TRUNC_S(u64, s64, f32, INT64_MIN, INT64_MAX, >=, x)
#define I32_TRUNC_S_F64(x) TRUNC_S(u32, s32, f64, INT32_MIN, INT32_MAX, >,  x)
#define I64_TRUNC_S_F64(x) TRUNC_S(u64, s64, f64, INT64_MIN, INT64_MAX, >=, x)

#define TRUNC_U(ut, ft, max, maxop, x)                                    \
   ((UNLIKELY((x) != (x))) ? TRAP(INVALID_CONVERSION)                     \
  : (UNLIKELY((x) <= (ft)-1 || (x) maxop (ft)(max))) ? TRAP(INT_OVERFLOW) \
  : (ut)(x))

#define I32_TRUNC_U_F32(x) TRUNC_U(u32, f32, UINT32_MAX, >=, x)
#define I64_TRUNC_U_F32(x) TRUNC_U(u64, f32, UINT64_MAX, >=, x)
#define I32_TRUNC_U_F64(x) TRUNC_U(u32, f64, UINT32_MAX, >,  x)
#define I64_TRUNC_U_F64(x) TRUNC_U(u64, f64, UINT64_MAX, >=, x)

#define DEFINE_REINTERPRET(name, t1, t2)  \
  static inline t2 name(t1 x) {           \
    t2 result;                            \
    memcpy(&result, &x, sizeof(result));  \
    return result;                        \
  }

DEFINE_REINTERPRET(f32_reinterpret_i32, u32, f32)
DEFINE_REINTERPRET(i32_reinterpret_f32, f32, u32)
DEFINE_REINTERPRET(f64_reinterpret_i64, u64, f64)
DEFINE_REINTERPRET(i64_reinterpret_f64, f64, u64)


static u32 func_types[6];

static void init_func_types(void) {
  func_types[0] = wasm_rt_register_func_type(2, 1, WASM_RT_I32, WASM_RT_I32, WASM_RT_I32);
  func_types[1] = wasm_rt_register_func_type(2, 0, WASM_RT_I32, WASM_RT_I32);
  func_types[2] = wasm_rt_register_func_type(3, 1, WASM_RT_I32, WASM_RT_I32, WASM_RT_I32, WASM_RT_I32);
  func_types[3] = wasm_rt_register_func_type(0, 0);
  func_types[4] = wasm_rt_register_func_type(1, 0, WASM_RT_I32);
  func_types[5] = wasm_rt_register_func_type(2, 1, WASM_RT_I64, WASM_RT_I32, WASM_RT_I32);
}

static void __wasm_call_ctors(void);
static void __wasm_apply_data_relocs(void);
static u32 submain(u32, u32);
static void init_array(u32, u32);
static void kernel_floyd_warshall(u32, u32);
static void print_array(u32, u32);
static u32 main(u32, u32);
static u32 legalfunc_polybench_alloc_data(u64, u32);

static void init_globals(void) {
}

static void __wasm_call_ctors(void) {
  FUNC_PROLOGUE;
  FUNC_EPILOGUE;
}

static void __wasm_apply_data_relocs(void) {
  FUNC_PROLOGUE;
  FUNC_EPILOGUE;
}

static u32 submain(u32 p0, u32 p1) {
  u32 l2 = 0, l3 = 0, l4 = 0, l5 = 0, l7 = 0, l8 = 0, l9 = 0, l10 = 0, 
      l11 = 0, l12 = 0, l13 = 0, l14 = 0, l15 = 0, l16 = 0, l17 = 0, l18 = 0, 
      l19 = 0, l20 = 0, l21 = 0, l22 = 0, l23 = 0, l24 = 0, l25 = 0, l26 = 0, 
      l27 = 0, l28 = 0, l29 = 0, l30 = 0, l31 = 0;
  u64 l6 = 0;
  FUNC_PROLOGUE;
  u32 i0, i1;
  u64 j0;
  i0 = (*Z_envZ___stack_pointerZ_i);
  l2 = i0;
  i0 = 16u;
  l3 = i0;
  i0 = l2;
  i1 = l3;
  i0 -= i1;
  l4 = i0;
  i0 = l4;
  (*Z_envZ___stack_pointerZ_i) = i0;
  i0 = l4;
  i1 = p0;
  i32_store(Z_envZ_memory, (u64)(i0 + 12), i1);
  i0 = l4;
  i1 = p1;
  i32_store(Z_envZ_memory, (u64)(i0 + 8), i1);
  i0 = 2800u;
  l5 = i0;
  i0 = l4;
  i1 = l5;
  i32_store(Z_envZ_memory, (u64)(i0 + 4), i1);
  j0 = 7840000ull;
  l6 = j0;
  i0 = 4u;
  l7 = i0;
  j0 = l6;
  i1 = l7;
  i0 = legalfunc_polybench_alloc_data(j0, i1);
  l8 = i0;
  i0 = l4;
  i1 = l8;
  i32_store(Z_envZ_memory, (u64)(i0), i1);
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
  l9 = i0;
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l10 = i0;
  i0 = l9;
  i1 = l10;
  init_array(i0, i1);
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
  l11 = i0;
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l12 = i0;
  i0 = l11;
  i1 = l12;
  kernel_floyd_warshall(i0, i1);
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
  l13 = i0;
  i0 = 42u;
  l14 = i0;
  i0 = l13;
  l15 = i0;
  i0 = l14;
  l16 = i0;
  i0 = l15;
  i1 = l16;
  i0 = (u32)((s32)i0 > (s32)i1);
  l17 = i0;
  i0 = 1u;
  l18 = i0;
  i0 = l17;
  i1 = l18;
  i0 &= i1;
  l19 = i0;
  i0 = l19;
  i0 = !(i0);
  if (i0) {goto B0;}
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0 + 8));
  l20 = i0;
  i0 = l20;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l21 = i0;
  i0 = 86u;
  l22 = i0;
  i0 = (*Z_envZ___memory_baseZ_i);
  l23 = i0;
  i0 = l23;
  i1 = l22;
  i0 += i1;
  l24 = i0;
  i0 = l21;
  i1 = l24;
  i0 = (*Z_envZ_strcmpZ_iii)(i0, i1);
  l25 = i0;
  i0 = l25;
  if (i0) {goto B0;}
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
  l26 = i0;
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l27 = i0;
  i0 = l26;
  i1 = l27;
  print_array(i0, i1);
  B0:;
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l28 = i0;
  i0 = l28;
  (*Z_envZ_freeZ_vi)(i0);
  i0 = 0u;
  l29 = i0;
  i0 = 16u;
  l30 = i0;
  i0 = l4;
  i1 = l30;
  i0 += i1;
  l31 = i0;
  i0 = l31;
  (*Z_envZ___stack_pointerZ_i) = i0;
  i0 = l29;
  goto Bfunc;
  Bfunc:;
  FUNC_EPILOGUE;
  return i0;
}

static void init_array(u32 p0, u32 p1) {
  u32 l2 = 0, l3 = 0, l4 = 0, l5 = 0, l6 = 0, l7 = 0, l8 = 0, l9 = 0, 
      l10 = 0, l11 = 0, l12 = 0, l13 = 0, l14 = 0, l15 = 0, l16 = 0, l17 = 0, 
      l18 = 0, l19 = 0, l20 = 0, l21 = 0, l22 = 0, l23 = 0, l24 = 0, l25 = 0, 
      l26 = 0, l27 = 0, l28 = 0, l29 = 0, l30 = 0, l31 = 0, l32 = 0, l33 = 0, 
      l34 = 0, l35 = 0, l36 = 0, l37 = 0, l38 = 0, l39 = 0, l40 = 0, l41 = 0, 
      l42 = 0, l43 = 0, l44 = 0, l45 = 0, l46 = 0, l47 = 0, l48 = 0, l49 = 0, 
      l50 = 0, l51 = 0, l52 = 0, l53 = 0, l54 = 0, l55 = 0, l56 = 0, l57 = 0, 
      l58 = 0, l59 = 0, l60 = 0, l61 = 0, l62 = 0, l63 = 0, l64 = 0, l65 = 0, 
      l66 = 0, l67 = 0;
  FUNC_PROLOGUE;
  u32 i0, i1;
  i0 = (*Z_envZ___stack_pointerZ_i);
  l2 = i0;
  i0 = 16u;
  l3 = i0;
  i0 = l2;
  i1 = l3;
  i0 -= i1;
  l4 = i0;
  i0 = l4;
  i1 = p0;
  i32_store(Z_envZ_memory, (u64)(i0 + 12), i1);
  i0 = l4;
  i1 = p1;
  i32_store(Z_envZ_memory, (u64)(i0 + 8), i1);
  i0 = 0u;
  l5 = i0;
  i0 = l4;
  i1 = l5;
  i32_store(Z_envZ_memory, (u64)(i0 + 4), i1);
  L1: 
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
    l6 = i0;
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
    l7 = i0;
    i0 = l6;
    l8 = i0;
    i0 = l7;
    l9 = i0;
    i0 = l8;
    i1 = l9;
    i0 = (u32)((s32)i0 < (s32)i1);
    l10 = i0;
    i0 = 1u;
    l11 = i0;
    i0 = l10;
    i1 = l11;
    i0 &= i1;
    l12 = i0;
    i0 = l12;
    i0 = !(i0);
    if (i0) {goto B0;}
    i0 = 0u;
    l13 = i0;
    i0 = l4;
    i1 = l13;
    i32_store(Z_envZ_memory, (u64)(i0), i1);
    L3: 
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l14 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
      l15 = i0;
      i0 = l14;
      l16 = i0;
      i0 = l15;
      l17 = i0;
      i0 = l16;
      i1 = l17;
      i0 = (u32)((s32)i0 < (s32)i1);
      l18 = i0;
      i0 = 1u;
      l19 = i0;
      i0 = l18;
      i1 = l19;
      i0 &= i1;
      l20 = i0;
      i0 = l20;
      i0 = !(i0);
      if (i0) {goto B2;}
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
      l21 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l22 = i0;
      i0 = l21;
      i1 = l22;
      i0 *= i1;
      l23 = i0;
      i0 = 7u;
      l24 = i0;
      i0 = l23;
      i1 = l24;
      i0 = I32_REM_S(i0, i1);
      l25 = i0;
      i0 = 1u;
      l26 = i0;
      i0 = l25;
      i1 = l26;
      i0 += i1;
      l27 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 8));
      l28 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
      l29 = i0;
      i0 = 11200u;
      l30 = i0;
      i0 = l29;
      i1 = l30;
      i0 *= i1;
      l31 = i0;
      i0 = l28;
      i1 = l31;
      i0 += i1;
      l32 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l33 = i0;
      i0 = 2u;
      l34 = i0;
      i0 = l33;
      i1 = l34;
      i0 <<= (i1 & 31);
      l35 = i0;
      i0 = l32;
      i1 = l35;
      i0 += i1;
      l36 = i0;
      i0 = l36;
      i1 = l27;
      i32_store(Z_envZ_memory, (u64)(i0), i1);
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
      l37 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l38 = i0;
      i0 = l37;
      i1 = l38;
      i0 += i1;
      l39 = i0;
      i0 = 13u;
      l40 = i0;
      i0 = l39;
      i1 = l40;
      i0 = I32_REM_S(i0, i1);
      l41 = i0;
      i0 = l41;
      i0 = !(i0);
      if (i0) {goto B5;}
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
      l42 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l43 = i0;
      i0 = l42;
      i1 = l43;
      i0 += i1;
      l44 = i0;
      i0 = 7u;
      l45 = i0;
      i0 = l44;
      i1 = l45;
      i0 = I32_REM_S(i0, i1);
      l46 = i0;
      i0 = l46;
      i0 = !(i0);
      if (i0) {goto B5;}
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
      l47 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l48 = i0;
      i0 = l47;
      i1 = l48;
      i0 += i1;
      l49 = i0;
      i0 = 11u;
      l50 = i0;
      i0 = l49;
      i1 = l50;
      i0 = I32_REM_S(i0, i1);
      l51 = i0;
      i0 = l51;
      if (i0) {goto B4;}
      B5:;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 8));
      l52 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
      l53 = i0;
      i0 = 11200u;
      l54 = i0;
      i0 = l53;
      i1 = l54;
      i0 *= i1;
      l55 = i0;
      i0 = l52;
      i1 = l55;
      i0 += i1;
      l56 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l57 = i0;
      i0 = 2u;
      l58 = i0;
      i0 = l57;
      i1 = l58;
      i0 <<= (i1 & 31);
      l59 = i0;
      i0 = l56;
      i1 = l59;
      i0 += i1;
      l60 = i0;
      i0 = 999u;
      l61 = i0;
      i0 = l60;
      i1 = l61;
      i32_store(Z_envZ_memory, (u64)(i0), i1);
      B4:;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l62 = i0;
      i0 = 1u;
      l63 = i0;
      i0 = l62;
      i1 = l63;
      i0 += i1;
      l64 = i0;
      i0 = l4;
      i1 = l64;
      i32_store(Z_envZ_memory, (u64)(i0), i1);
      goto L3;
    UNREACHABLE;
    B2:;
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
    l65 = i0;
    i0 = 1u;
    l66 = i0;
    i0 = l65;
    i1 = l66;
    i0 += i1;
    l67 = i0;
    i0 = l4;
    i1 = l67;
    i32_store(Z_envZ_memory, (u64)(i0 + 4), i1);
    goto L1;
  UNREACHABLE;
  B0:;
  goto Bfunc;
  Bfunc:;
  FUNC_EPILOGUE;
}

static void kernel_floyd_warshall(u32 p0, u32 p1) {
  u32 l2 = 0, l3 = 0, l4 = 0, l5 = 0, l6 = 0, l7 = 0, l8 = 0, l9 = 0, 
      l10 = 0, l11 = 0, l12 = 0, l13 = 0, l14 = 0, l15 = 0, l16 = 0, l17 = 0, 
      l18 = 0, l19 = 0, l20 = 0, l21 = 0, l22 = 0, l23 = 0, l24 = 0, l25 = 0, 
      l26 = 0, l27 = 0, l28 = 0, l29 = 0, l30 = 0, l31 = 0, l32 = 0, l33 = 0, 
      l34 = 0, l35 = 0, l36 = 0, l37 = 0, l38 = 0, l39 = 0, l40 = 0, l41 = 0, 
      l42 = 0, l43 = 0, l44 = 0, l45 = 0, l46 = 0, l47 = 0, l48 = 0, l49 = 0, 
      l50 = 0, l51 = 0, l52 = 0, l53 = 0, l54 = 0, l55 = 0, l56 = 0, l57 = 0, 
      l58 = 0, l59 = 0, l60 = 0, l61 = 0, l62 = 0, l63 = 0, l64 = 0, l65 = 0, 
      l66 = 0, l67 = 0, l68 = 0, l69 = 0, l70 = 0, l71 = 0, l72 = 0, l73 = 0, 
      l74 = 0, l75 = 0, l76 = 0, l77 = 0, l78 = 0, l79 = 0, l80 = 0, l81 = 0, 
      l82 = 0, l83 = 0, l84 = 0, l85 = 0, l86 = 0, l87 = 0, l88 = 0, l89 = 0, 
      l90 = 0, l91 = 0, l92 = 0, l93 = 0, l94 = 0, l95 = 0, l96 = 0, l97 = 0, 
      l98 = 0, l99 = 0, l100 = 0, l101 = 0, l102 = 0, l103 = 0, l104 = 0, l105 = 0, 
      l106 = 0, l107 = 0, l108 = 0, l109 = 0, l110 = 0, l111 = 0, l112 = 0, l113 = 0, 
      l114 = 0, l115 = 0;
  FUNC_PROLOGUE;
  u32 i0, i1;
  i0 = (*Z_envZ___stack_pointerZ_i);
  l2 = i0;
  i0 = 32u;
  l3 = i0;
  i0 = l2;
  i1 = l3;
  i0 -= i1;
  l4 = i0;
  i0 = l4;
  i1 = p0;
  i32_store(Z_envZ_memory, (u64)(i0 + 28), i1);
  i0 = l4;
  i1 = p1;
  i32_store(Z_envZ_memory, (u64)(i0 + 24), i1);
  i0 = 0u;
  l5 = i0;
  i0 = l4;
  i1 = l5;
  i32_store(Z_envZ_memory, (u64)(i0 + 12), i1);
  L1: 
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
    l6 = i0;
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 28));
    l7 = i0;
    i0 = l6;
    l8 = i0;
    i0 = l7;
    l9 = i0;
    i0 = l8;
    i1 = l9;
    i0 = (u32)((s32)i0 < (s32)i1);
    l10 = i0;
    i0 = 1u;
    l11 = i0;
    i0 = l10;
    i1 = l11;
    i0 &= i1;
    l12 = i0;
    i0 = l12;
    i0 = !(i0);
    if (i0) {goto B0;}
    i0 = 0u;
    l13 = i0;
    i0 = l4;
    i1 = l13;
    i32_store(Z_envZ_memory, (u64)(i0 + 20), i1);
    L3: 
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 20));
      l14 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 28));
      l15 = i0;
      i0 = l14;
      l16 = i0;
      i0 = l15;
      l17 = i0;
      i0 = l16;
      i1 = l17;
      i0 = (u32)((s32)i0 < (s32)i1);
      l18 = i0;
      i0 = 1u;
      l19 = i0;
      i0 = l18;
      i1 = l19;
      i0 &= i1;
      l20 = i0;
      i0 = l20;
      i0 = !(i0);
      if (i0) {goto B2;}
      i0 = 0u;
      l21 = i0;
      i0 = l4;
      i1 = l21;
      i32_store(Z_envZ_memory, (u64)(i0 + 16), i1);
      L5: 
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 16));
        l22 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 28));
        l23 = i0;
        i0 = l22;
        l24 = i0;
        i0 = l23;
        l25 = i0;
        i0 = l24;
        i1 = l25;
        i0 = (u32)((s32)i0 < (s32)i1);
        l26 = i0;
        i0 = 1u;
        l27 = i0;
        i0 = l26;
        i1 = l27;
        i0 &= i1;
        l28 = i0;
        i0 = l28;
        i0 = !(i0);
        if (i0) {goto B4;}
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 24));
        l29 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 20));
        l30 = i0;
        i0 = 11200u;
        l31 = i0;
        i0 = l30;
        i1 = l31;
        i0 *= i1;
        l32 = i0;
        i0 = l29;
        i1 = l32;
        i0 += i1;
        l33 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 16));
        l34 = i0;
        i0 = 2u;
        l35 = i0;
        i0 = l34;
        i1 = l35;
        i0 <<= (i1 & 31);
        l36 = i0;
        i0 = l33;
        i1 = l36;
        i0 += i1;
        l37 = i0;
        i0 = l37;
        i0 = i32_load(Z_envZ_memory, (u64)(i0));
        l38 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 24));
        l39 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 20));
        l40 = i0;
        i0 = 11200u;
        l41 = i0;
        i0 = l40;
        i1 = l41;
        i0 *= i1;
        l42 = i0;
        i0 = l39;
        i1 = l42;
        i0 += i1;
        l43 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
        l44 = i0;
        i0 = 2u;
        l45 = i0;
        i0 = l44;
        i1 = l45;
        i0 <<= (i1 & 31);
        l46 = i0;
        i0 = l43;
        i1 = l46;
        i0 += i1;
        l47 = i0;
        i0 = l47;
        i0 = i32_load(Z_envZ_memory, (u64)(i0));
        l48 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 24));
        l49 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
        l50 = i0;
        i0 = 11200u;
        l51 = i0;
        i0 = l50;
        i1 = l51;
        i0 *= i1;
        l52 = i0;
        i0 = l49;
        i1 = l52;
        i0 += i1;
        l53 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 16));
        l54 = i0;
        i0 = 2u;
        l55 = i0;
        i0 = l54;
        i1 = l55;
        i0 <<= (i1 & 31);
        l56 = i0;
        i0 = l53;
        i1 = l56;
        i0 += i1;
        l57 = i0;
        i0 = l57;
        i0 = i32_load(Z_envZ_memory, (u64)(i0));
        l58 = i0;
        i0 = l48;
        i1 = l58;
        i0 += i1;
        l59 = i0;
        i0 = l38;
        l60 = i0;
        i0 = l59;
        l61 = i0;
        i0 = l60;
        i1 = l61;
        i0 = (u32)((s32)i0 < (s32)i1);
        l62 = i0;
        i0 = 1u;
        l63 = i0;
        i0 = l62;
        i1 = l63;
        i0 &= i1;
        l64 = i0;
        i0 = l64;
        i0 = !(i0);
        if (i0) {goto B7;}
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 24));
        l65 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 20));
        l66 = i0;
        i0 = 11200u;
        l67 = i0;
        i0 = l66;
        i1 = l67;
        i0 *= i1;
        l68 = i0;
        i0 = l65;
        i1 = l68;
        i0 += i1;
        l69 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 16));
        l70 = i0;
        i0 = 2u;
        l71 = i0;
        i0 = l70;
        i1 = l71;
        i0 <<= (i1 & 31);
        l72 = i0;
        i0 = l69;
        i1 = l72;
        i0 += i1;
        l73 = i0;
        i0 = l73;
        i0 = i32_load(Z_envZ_memory, (u64)(i0));
        l74 = i0;
        i0 = l74;
        l75 = i0;
        goto B6;
        B7:;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 24));
        l76 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 20));
        l77 = i0;
        i0 = 11200u;
        l78 = i0;
        i0 = l77;
        i1 = l78;
        i0 *= i1;
        l79 = i0;
        i0 = l76;
        i1 = l79;
        i0 += i1;
        l80 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
        l81 = i0;
        i0 = 2u;
        l82 = i0;
        i0 = l81;
        i1 = l82;
        i0 <<= (i1 & 31);
        l83 = i0;
        i0 = l80;
        i1 = l83;
        i0 += i1;
        l84 = i0;
        i0 = l84;
        i0 = i32_load(Z_envZ_memory, (u64)(i0));
        l85 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 24));
        l86 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
        l87 = i0;
        i0 = 11200u;
        l88 = i0;
        i0 = l87;
        i1 = l88;
        i0 *= i1;
        l89 = i0;
        i0 = l86;
        i1 = l89;
        i0 += i1;
        l90 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 16));
        l91 = i0;
        i0 = 2u;
        l92 = i0;
        i0 = l91;
        i1 = l92;
        i0 <<= (i1 & 31);
        l93 = i0;
        i0 = l90;
        i1 = l93;
        i0 += i1;
        l94 = i0;
        i0 = l94;
        i0 = i32_load(Z_envZ_memory, (u64)(i0));
        l95 = i0;
        i0 = l85;
        i1 = l95;
        i0 += i1;
        l96 = i0;
        i0 = l96;
        l75 = i0;
        B6:;
        i0 = l75;
        l97 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 24));
        l98 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 20));
        l99 = i0;
        i0 = 11200u;
        l100 = i0;
        i0 = l99;
        i1 = l100;
        i0 *= i1;
        l101 = i0;
        i0 = l98;
        i1 = l101;
        i0 += i1;
        l102 = i0;
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 16));
        l103 = i0;
        i0 = 2u;
        l104 = i0;
        i0 = l103;
        i1 = l104;
        i0 <<= (i1 & 31);
        l105 = i0;
        i0 = l102;
        i1 = l105;
        i0 += i1;
        l106 = i0;
        i0 = l106;
        i1 = l97;
        i32_store(Z_envZ_memory, (u64)(i0), i1);
        i0 = l4;
        i0 = i32_load(Z_envZ_memory, (u64)(i0 + 16));
        l107 = i0;
        i0 = 1u;
        l108 = i0;
        i0 = l107;
        i1 = l108;
        i0 += i1;
        l109 = i0;
        i0 = l4;
        i1 = l109;
        i32_store(Z_envZ_memory, (u64)(i0 + 16), i1);
        goto L5;
      UNREACHABLE;
      B4:;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 20));
      l110 = i0;
      i0 = 1u;
      l111 = i0;
      i0 = l110;
      i1 = l111;
      i0 += i1;
      l112 = i0;
      i0 = l4;
      i1 = l112;
      i32_store(Z_envZ_memory, (u64)(i0 + 20), i1);
      goto L3;
    UNREACHABLE;
    B2:;
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
    l113 = i0;
    i0 = 1u;
    l114 = i0;
    i0 = l113;
    i1 = l114;
    i0 += i1;
    l115 = i0;
    i0 = l4;
    i1 = l115;
    i32_store(Z_envZ_memory, (u64)(i0 + 12), i1);
    goto L1;
  UNREACHABLE;
  B0:;
  goto Bfunc;
  Bfunc:;
  FUNC_EPILOGUE;
}

static void print_array(u32 p0, u32 p1) {
  u32 l2 = 0, l3 = 0, l4 = 0, l5 = 0, l6 = 0, l7 = 0, l8 = 0, l9 = 0, 
      l10 = 0, l11 = 0, l12 = 0, l13 = 0, l14 = 0, l15 = 0, l16 = 0, l17 = 0, 
      l18 = 0, l19 = 0, l20 = 0, l21 = 0, l22 = 0, l23 = 0, l24 = 0, l25 = 0, 
      l26 = 0, l27 = 0, l28 = 0, l29 = 0, l30 = 0, l31 = 0, l32 = 0, l33 = 0, 
      l34 = 0, l35 = 0, l36 = 0, l37 = 0, l38 = 0, l39 = 0, l40 = 0, l41 = 0, 
      l42 = 0, l43 = 0, l44 = 0, l45 = 0, l46 = 0, l47 = 0, l48 = 0, l49 = 0, 
      l50 = 0, l51 = 0, l52 = 0, l53 = 0, l54 = 0, l55 = 0, l56 = 0, l57 = 0, 
      l58 = 0, l59 = 0, l60 = 0, l61 = 0, l62 = 0, l63 = 0, l64 = 0, l65 = 0, 
      l66 = 0, l67 = 0, l68 = 0, l69 = 0, l70 = 0, l71 = 0, l72 = 0, l73 = 0, 
      l74 = 0, l75 = 0, l76 = 0, l77 = 0, l78 = 0, l79 = 0, l80 = 0, l81 = 0, 
      l82 = 0, l83 = 0, l84 = 0;
  FUNC_PROLOGUE;
  u32 i0, i1, i2;
  i0 = (*Z_envZ___stack_pointerZ_i);
  l2 = i0;
  i0 = 64u;
  l3 = i0;
  i0 = l2;
  i1 = l3;
  i0 -= i1;
  l4 = i0;
  i0 = l4;
  (*Z_envZ___stack_pointerZ_i) = i0;
  i0 = l4;
  i1 = p0;
  i32_store(Z_envZ_memory, (u64)(i0 + 60), i1);
  i0 = l4;
  i1 = p1;
  i32_store(Z_envZ_memory, (u64)(i0 + 56), i1);
  i0 = (*Z_GOTZ2EmemZ_stderrZ_i);
  l5 = i0;
  i0 = l5;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l6 = i0;
  i0 = 41u;
  l7 = i0;
  i0 = (*Z_envZ___memory_baseZ_i);
  l8 = i0;
  i0 = l8;
  i1 = l7;
  i0 += i1;
  l9 = i0;
  i0 = 0u;
  l10 = i0;
  i0 = l6;
  i1 = l9;
  i2 = l10;
  i0 = (*Z_envZ_fprintfZ_iiii)(i0, i1, i2);
  i0 = l5;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l11 = i0;
  i0 = 15u;
  l12 = i0;
  i0 = (*Z_envZ___memory_baseZ_i);
  l13 = i0;
  i0 = l13;
  i1 = l12;
  i0 += i1;
  l14 = i0;
  i0 = l4;
  i1 = l14;
  i32_store(Z_envZ_memory, (u64)(i0 + 32), i1);
  i0 = 0u;
  l15 = i0;
  i0 = l13;
  i1 = l15;
  i0 += i1;
  l16 = i0;
  i0 = 32u;
  l17 = i0;
  i0 = l4;
  i1 = l17;
  i0 += i1;
  l18 = i0;
  i0 = l11;
  i1 = l16;
  i2 = l18;
  i0 = (*Z_envZ_fprintfZ_iiii)(i0, i1, i2);
  i0 = 0u;
  l19 = i0;
  i0 = l4;
  i1 = l19;
  i32_store(Z_envZ_memory, (u64)(i0 + 52), i1);
  L1: 
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 52));
    l20 = i0;
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 60));
    l21 = i0;
    i0 = l20;
    l22 = i0;
    i0 = l21;
    l23 = i0;
    i0 = l22;
    i1 = l23;
    i0 = (u32)((s32)i0 < (s32)i1);
    l24 = i0;
    i0 = 1u;
    l25 = i0;
    i0 = l24;
    i1 = l25;
    i0 &= i1;
    l26 = i0;
    i0 = l26;
    i0 = !(i0);
    if (i0) {goto B0;}
    i0 = 0u;
    l27 = i0;
    i0 = l4;
    i1 = l27;
    i32_store(Z_envZ_memory, (u64)(i0 + 48), i1);
    L3: 
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 48));
      l28 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 60));
      l29 = i0;
      i0 = l28;
      l30 = i0;
      i0 = l29;
      l31 = i0;
      i0 = l30;
      i1 = l31;
      i0 = (u32)((s32)i0 < (s32)i1);
      l32 = i0;
      i0 = 1u;
      l33 = i0;
      i0 = l32;
      i1 = l33;
      i0 &= i1;
      l34 = i0;
      i0 = l34;
      i0 = !(i0);
      if (i0) {goto B2;}
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 52));
      l35 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 60));
      l36 = i0;
      i0 = l35;
      i1 = l36;
      i0 *= i1;
      l37 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 48));
      l38 = i0;
      i0 = l37;
      i1 = l38;
      i0 += i1;
      l39 = i0;
      i0 = 20u;
      l40 = i0;
      i0 = l39;
      i1 = l40;
      i0 = I32_REM_S(i0, i1);
      l41 = i0;
      i0 = l41;
      if (i0) {goto B4;}
      i0 = (*Z_GOTZ2EmemZ_stderrZ_i);
      l42 = i0;
      i0 = l42;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l43 = i0;
      i0 = 85u;
      l44 = i0;
      i0 = (*Z_envZ___memory_baseZ_i);
      l45 = i0;
      i0 = l45;
      i1 = l44;
      i0 += i1;
      l46 = i0;
      i0 = 0u;
      l47 = i0;
      i0 = l43;
      i1 = l46;
      i2 = l47;
      i0 = (*Z_envZ_fprintfZ_iiii)(i0, i1, i2);
      B4:;
      i0 = (*Z_GOTZ2EmemZ_stderrZ_i);
      l48 = i0;
      i0 = l48;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l49 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 56));
      l50 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 52));
      l51 = i0;
      i0 = 11200u;
      l52 = i0;
      i0 = l51;
      i1 = l52;
      i0 *= i1;
      l53 = i0;
      i0 = l50;
      i1 = l53;
      i0 += i1;
      l54 = i0;
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 48));
      l55 = i0;
      i0 = 2u;
      l56 = i0;
      i0 = l55;
      i1 = l56;
      i0 <<= (i1 & 31);
      l57 = i0;
      i0 = l54;
      i1 = l57;
      i0 += i1;
      l58 = i0;
      i0 = l58;
      i0 = i32_load(Z_envZ_memory, (u64)(i0));
      l59 = i0;
      i0 = l4;
      i1 = l59;
      i32_store(Z_envZ_memory, (u64)(i0), i1);
      i0 = 20u;
      l60 = i0;
      i0 = (*Z_envZ___memory_baseZ_i);
      l61 = i0;
      i0 = l61;
      i1 = l60;
      i0 += i1;
      l62 = i0;
      i0 = l49;
      i1 = l62;
      i2 = l4;
      i0 = (*Z_envZ_fprintfZ_iiii)(i0, i1, i2);
      i0 = l4;
      i0 = i32_load(Z_envZ_memory, (u64)(i0 + 48));
      l63 = i0;
      i0 = 1u;
      l64 = i0;
      i0 = l63;
      i1 = l64;
      i0 += i1;
      l65 = i0;
      i0 = l4;
      i1 = l65;
      i32_store(Z_envZ_memory, (u64)(i0 + 48), i1);
      goto L3;
    UNREACHABLE;
    B2:;
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 52));
    l66 = i0;
    i0 = 1u;
    l67 = i0;
    i0 = l66;
    i1 = l67;
    i0 += i1;
    l68 = i0;
    i0 = l4;
    i1 = l68;
    i32_store(Z_envZ_memory, (u64)(i0 + 52), i1);
    goto L1;
  UNREACHABLE;
  B0:;
  i0 = (*Z_GOTZ2EmemZ_stderrZ_i);
  l69 = i0;
  i0 = l69;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l70 = i0;
  i0 = 15u;
  l71 = i0;
  i0 = (*Z_envZ___memory_baseZ_i);
  l72 = i0;
  i0 = l72;
  i1 = l71;
  i0 += i1;
  l73 = i0;
  i0 = l4;
  i1 = l73;
  i32_store(Z_envZ_memory, (u64)(i0 + 16), i1);
  i0 = 24u;
  l74 = i0;
  i0 = l72;
  i1 = l74;
  i0 += i1;
  l75 = i0;
  i0 = 16u;
  l76 = i0;
  i0 = l4;
  i1 = l76;
  i0 += i1;
  l77 = i0;
  i0 = l70;
  i1 = l75;
  i2 = l77;
  i0 = (*Z_envZ_fprintfZ_iiii)(i0, i1, i2);
  i0 = l69;
  i0 = i32_load(Z_envZ_memory, (u64)(i0));
  l78 = i0;
  i0 = 64u;
  l79 = i0;
  i0 = (*Z_envZ___memory_baseZ_i);
  l80 = i0;
  i0 = l80;
  i1 = l79;
  i0 += i1;
  l81 = i0;
  i0 = 0u;
  l82 = i0;
  i0 = l78;
  i1 = l81;
  i2 = l82;
  i0 = (*Z_envZ_fprintfZ_iiii)(i0, i1, i2);
  i0 = 64u;
  l83 = i0;
  i0 = l4;
  i1 = l83;
  i0 += i1;
  l84 = i0;
  i0 = l84;
  (*Z_envZ___stack_pointerZ_i) = i0;
  goto Bfunc;
  Bfunc:;
  FUNC_EPILOGUE;
}

static u32 main(u32 p0, u32 p1) {
  u32 l2 = 0, l3 = 0, l4 = 0, l5 = 0, l6 = 0, l7 = 0, l8 = 0, l9 = 0, 
      l10 = 0, l11 = 0, l12 = 0, l13 = 0, l14 = 0, l15 = 0, l16 = 0, l17 = 0, 
      l18 = 0, l19 = 0, l20 = 0, l21 = 0;
  FUNC_PROLOGUE;
  u32 i0, i1;
  i0 = (*Z_envZ___stack_pointerZ_i);
  l2 = i0;
  i0 = 16u;
  l3 = i0;
  i0 = l2;
  i1 = l3;
  i0 -= i1;
  l4 = i0;
  i0 = l4;
  (*Z_envZ___stack_pointerZ_i) = i0;
  i0 = 0u;
  l5 = i0;
  i0 = l4;
  i1 = l5;
  i32_store(Z_envZ_memory, (u64)(i0 + 12), i1);
  i0 = l4;
  i1 = p0;
  i32_store(Z_envZ_memory, (u64)(i0 + 8), i1);
  i0 = l4;
  i1 = p1;
  i32_store(Z_envZ_memory, (u64)(i0 + 4), i1);
  i0 = 0u;
  l6 = i0;
  i0 = l4;
  i1 = l6;
  i32_store(Z_envZ_memory, (u64)(i0), i1);
  L1: 
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0));
    l7 = i0;
    i0 = 1u;
    l8 = i0;
    i0 = l7;
    l9 = i0;
    i0 = l8;
    l10 = i0;
    i0 = l9;
    i1 = l10;
    i0 = (u32)((s32)i0 < (s32)i1);
    l11 = i0;
    i0 = 1u;
    l12 = i0;
    i0 = l11;
    i1 = l12;
    i0 &= i1;
    l13 = i0;
    i0 = l13;
    i0 = !(i0);
    if (i0) {goto B0;}
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 8));
    l14 = i0;
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0 + 4));
    l15 = i0;
    i0 = l14;
    i1 = l15;
    i0 = submain(i0, i1);
    i0 = l4;
    i0 = i32_load(Z_envZ_memory, (u64)(i0));
    l16 = i0;
    i0 = 1u;
    l17 = i0;
    i0 = l16;
    i1 = l17;
    i0 += i1;
    l18 = i0;
    i0 = l4;
    i1 = l18;
    i32_store(Z_envZ_memory, (u64)(i0), i1);
    goto L1;
  UNREACHABLE;
  B0:;
  i0 = l4;
  i0 = i32_load(Z_envZ_memory, (u64)(i0 + 12));
  l19 = i0;
  i0 = 16u;
  l20 = i0;
  i0 = l4;
  i1 = l20;
  i0 += i1;
  l21 = i0;
  i0 = l21;
  (*Z_envZ___stack_pointerZ_i) = i0;
  i0 = l19;
  goto Bfunc;
  Bfunc:;
  FUNC_EPILOGUE;
  return i0;
}

static u32 legalfunc_polybench_alloc_data(u64 p0, u32 p1) {
  FUNC_PROLOGUE;
  u32 i0, i1, i2;
  u64 j0, j1, j2;
  j0 = p0;
  i0 = (u32)(j0);
  j1 = p0;
  j2 = 32ull;
  j1 >>= (j2 & 63);
  i1 = (u32)(j1);
  i2 = p1;
  i0 = (*Z_envZ_polybench_alloc_dataZ_iiii)(i0, i1, i2);
  FUNC_EPILOGUE;
  return i0;
}

static const u8 data_segment_data_0[] = {
  0x62, 0x65, 0x67, 0x69, 0x6e, 0x20, 0x64, 0x75, 0x6d, 0x70, 0x3a, 0x20, 
  0x25, 0x73, 0x00, 0x70, 0x61, 0x74, 0x68, 0x00, 0x25, 0x64, 0x20, 0x00, 
  0x0a, 0x65, 0x6e, 0x64, 0x20, 0x20, 0x20, 0x64, 0x75, 0x6d, 0x70, 0x3a, 
  0x20, 0x25, 0x73, 0x0a, 0x00, 0x3d, 0x3d, 0x42, 0x45, 0x47, 0x49, 0x4e, 
  0x20, 0x44, 0x55, 0x4d, 0x50, 0x5f, 0x41, 0x52, 0x52, 0x41, 0x59, 0x53, 
  0x3d, 0x3d, 0x0a, 0x00, 0x3d, 0x3d, 0x45, 0x4e, 0x44, 0x20, 0x20, 0x20, 
  0x44, 0x55, 0x4d, 0x50, 0x5f, 0x41, 0x52, 0x52, 0x41, 0x59, 0x53, 0x3d, 
  0x3d, 0x0a, 0x00, 
};

static void init_memory(void) {
  memcpy(&((*Z_envZ_memory).data[(*Z_envZ___memory_baseZ_i)]), data_segment_data_0, 87);
}

static void init_table(void) {
  uint32_t offset;
}

/* export: '__wasm_call_ctors' */
void (*WASM_RT_ADD_PREFIX(Z___wasm_call_ctorsZ_vv))(void);
/* export: '__wasm_apply_data_relocs' */
void (*WASM_RT_ADD_PREFIX(Z___wasm_apply_data_relocsZ_vv))(void);
/* export: 'submain' */
u32 (*WASM_RT_ADD_PREFIX(Z_submainZ_iii))(u32, u32);
/* export: '__main_argc_argv' */
u32 (*WASM_RT_ADD_PREFIX(Z___main_argc_argvZ_iii))(u32, u32);

static void init_exports(void) {
  /* export: '__wasm_call_ctors' */
  WASM_RT_ADD_PREFIX(Z___wasm_call_ctorsZ_vv) = (&__wasm_call_ctors);
  /* export: '__wasm_apply_data_relocs' */
  WASM_RT_ADD_PREFIX(Z___wasm_apply_data_relocsZ_vv) = (&__wasm_apply_data_relocs);
  /* export: 'submain' */
  WASM_RT_ADD_PREFIX(Z_submainZ_iii) = (&submain);
  /* export: '__main_argc_argv' */
  WASM_RT_ADD_PREFIX(Z___main_argc_argvZ_iii) = (&main);
}

void WASM_RT_ADD_PREFIX(init)(void) {
  init_func_types();
  init_globals();
  init_memory();
  init_table();
  init_exports();
}
