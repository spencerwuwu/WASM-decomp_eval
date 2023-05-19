/* Automatically generated by wasm2c */
#ifndef ADPCM_H_GENERATED_
#define ADPCM_H_GENERATED_

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
extern u32* w2c_GOT0x2Emem_accumc(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_accumd(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_ah1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_ah2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_al1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_al2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_compressed(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_ah1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_ah2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_al1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_al2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_del_bph(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_del_bpl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_del_dhx(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_del_dltx(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_deth(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_detl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_dh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_dlt(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_nbh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_nbl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_ph(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_ph1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_ph2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_plt(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_plt1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_plt2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_rh1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_rh2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_rlt(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_rlt1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_rlt2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_sh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_sl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_sph(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_spl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_szh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dec_szl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_decis_levl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_delay_bph(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_delay_bpl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_delay_dhx(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_delay_dltx(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_deth(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_detl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_dlt(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_eh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_el(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_endTimer(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_h(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_ih(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_il(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_ilb_table(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_ilr(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_nbh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_nbl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_ph(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_ph1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_ph2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_plt(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_plt1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_plt2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_qq2_code2_table(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_qq4_code4_table(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_qq6_code6_table(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_quant26bt_neg(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_quant26bt_pos(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_result(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_rh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_rh1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_rh2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_rl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_rlt(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_rlt1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_rlt2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_sh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_sl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_sph(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_spl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_startTimer(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_szh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_szl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_test_compressed(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_test_data(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_test_result(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_tqmf(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_wh_code_table(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_wl_code_table(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_xd(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_xh(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_xl(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_xout1(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_xout2(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_xs(struct w2c_GOT0x2Emem*);
extern u32* w2c_GOT0x2Emem_yh(struct w2c_GOT0x2Emem*);
extern u32* w2c_env_0x5F_memory_base(struct w2c_env*);
extern u32* w2c_env_0x5F_stack_pointer(struct w2c_env*);
extern u32* w2c_env_0x5F_table_base(struct w2c_env*);
extern wasm_rt_memory_t* w2c_env_memory(struct w2c_env*);

typedef struct w2c_adpcm {
  struct w2c_env* w2c_env_instance;
  /* import: 'GOT.mem' 'accumc' */
  u32 *w2c_GOT0x2Emem_accumc;
  /* import: 'GOT.mem' 'accumd' */
  u32 *w2c_GOT0x2Emem_accumd;
  /* import: 'GOT.mem' 'ah1' */
  u32 *w2c_GOT0x2Emem_ah1;
  /* import: 'GOT.mem' 'ah2' */
  u32 *w2c_GOT0x2Emem_ah2;
  /* import: 'GOT.mem' 'al1' */
  u32 *w2c_GOT0x2Emem_al1;
  /* import: 'GOT.mem' 'al2' */
  u32 *w2c_GOT0x2Emem_al2;
  /* import: 'GOT.mem' 'compressed' */
  u32 *w2c_GOT0x2Emem_compressed;
  /* import: 'GOT.mem' 'dec_ah1' */
  u32 *w2c_GOT0x2Emem_dec_ah1;
  /* import: 'GOT.mem' 'dec_ah2' */
  u32 *w2c_GOT0x2Emem_dec_ah2;
  /* import: 'GOT.mem' 'dec_al1' */
  u32 *w2c_GOT0x2Emem_dec_al1;
  /* import: 'GOT.mem' 'dec_al2' */
  u32 *w2c_GOT0x2Emem_dec_al2;
  /* import: 'GOT.mem' 'dec_del_bph' */
  u32 *w2c_GOT0x2Emem_dec_del_bph;
  /* import: 'GOT.mem' 'dec_del_bpl' */
  u32 *w2c_GOT0x2Emem_dec_del_bpl;
  /* import: 'GOT.mem' 'dec_del_dhx' */
  u32 *w2c_GOT0x2Emem_dec_del_dhx;
  /* import: 'GOT.mem' 'dec_del_dltx' */
  u32 *w2c_GOT0x2Emem_dec_del_dltx;
  /* import: 'GOT.mem' 'dec_deth' */
  u32 *w2c_GOT0x2Emem_dec_deth;
  /* import: 'GOT.mem' 'dec_detl' */
  u32 *w2c_GOT0x2Emem_dec_detl;
  /* import: 'GOT.mem' 'dec_dh' */
  u32 *w2c_GOT0x2Emem_dec_dh;
  /* import: 'GOT.mem' 'dec_dlt' */
  u32 *w2c_GOT0x2Emem_dec_dlt;
  /* import: 'GOT.mem' 'dec_nbh' */
  u32 *w2c_GOT0x2Emem_dec_nbh;
  /* import: 'GOT.mem' 'dec_nbl' */
  u32 *w2c_GOT0x2Emem_dec_nbl;
  /* import: 'GOT.mem' 'dec_ph' */
  u32 *w2c_GOT0x2Emem_dec_ph;
  /* import: 'GOT.mem' 'dec_ph1' */
  u32 *w2c_GOT0x2Emem_dec_ph1;
  /* import: 'GOT.mem' 'dec_ph2' */
  u32 *w2c_GOT0x2Emem_dec_ph2;
  /* import: 'GOT.mem' 'dec_plt' */
  u32 *w2c_GOT0x2Emem_dec_plt;
  /* import: 'GOT.mem' 'dec_plt1' */
  u32 *w2c_GOT0x2Emem_dec_plt1;
  /* import: 'GOT.mem' 'dec_plt2' */
  u32 *w2c_GOT0x2Emem_dec_plt2;
  /* import: 'GOT.mem' 'dec_rh1' */
  u32 *w2c_GOT0x2Emem_dec_rh1;
  /* import: 'GOT.mem' 'dec_rh2' */
  u32 *w2c_GOT0x2Emem_dec_rh2;
  /* import: 'GOT.mem' 'dec_rlt' */
  u32 *w2c_GOT0x2Emem_dec_rlt;
  /* import: 'GOT.mem' 'dec_rlt1' */
  u32 *w2c_GOT0x2Emem_dec_rlt1;
  /* import: 'GOT.mem' 'dec_rlt2' */
  u32 *w2c_GOT0x2Emem_dec_rlt2;
  /* import: 'GOT.mem' 'dec_sh' */
  u32 *w2c_GOT0x2Emem_dec_sh;
  /* import: 'GOT.mem' 'dec_sl' */
  u32 *w2c_GOT0x2Emem_dec_sl;
  /* import: 'GOT.mem' 'dec_sph' */
  u32 *w2c_GOT0x2Emem_dec_sph;
  /* import: 'GOT.mem' 'dec_spl' */
  u32 *w2c_GOT0x2Emem_dec_spl;
  /* import: 'GOT.mem' 'dec_szh' */
  u32 *w2c_GOT0x2Emem_dec_szh;
  /* import: 'GOT.mem' 'dec_szl' */
  u32 *w2c_GOT0x2Emem_dec_szl;
  /* import: 'GOT.mem' 'decis_levl' */
  u32 *w2c_GOT0x2Emem_decis_levl;
  /* import: 'GOT.mem' 'delay_bph' */
  u32 *w2c_GOT0x2Emem_delay_bph;
  /* import: 'GOT.mem' 'delay_bpl' */
  u32 *w2c_GOT0x2Emem_delay_bpl;
  /* import: 'GOT.mem' 'delay_dhx' */
  u32 *w2c_GOT0x2Emem_delay_dhx;
  /* import: 'GOT.mem' 'delay_dltx' */
  u32 *w2c_GOT0x2Emem_delay_dltx;
  /* import: 'GOT.mem' 'deth' */
  u32 *w2c_GOT0x2Emem_deth;
  /* import: 'GOT.mem' 'detl' */
  u32 *w2c_GOT0x2Emem_detl;
  /* import: 'GOT.mem' 'dh' */
  u32 *w2c_GOT0x2Emem_dh;
  /* import: 'GOT.mem' 'dl' */
  u32 *w2c_GOT0x2Emem_dl;
  /* import: 'GOT.mem' 'dlt' */
  u32 *w2c_GOT0x2Emem_dlt;
  /* import: 'GOT.mem' 'eh' */
  u32 *w2c_GOT0x2Emem_eh;
  /* import: 'GOT.mem' 'el' */
  u32 *w2c_GOT0x2Emem_el;
  /* import: 'GOT.mem' 'endTimer' */
  u32 *w2c_GOT0x2Emem_endTimer;
  /* import: 'GOT.mem' 'h' */
  u32 *w2c_GOT0x2Emem_h;
  /* import: 'GOT.mem' 'ih' */
  u32 *w2c_GOT0x2Emem_ih;
  /* import: 'GOT.mem' 'il' */
  u32 *w2c_GOT0x2Emem_il;
  /* import: 'GOT.mem' 'ilb_table' */
  u32 *w2c_GOT0x2Emem_ilb_table;
  /* import: 'GOT.mem' 'ilr' */
  u32 *w2c_GOT0x2Emem_ilr;
  /* import: 'GOT.mem' 'nbh' */
  u32 *w2c_GOT0x2Emem_nbh;
  /* import: 'GOT.mem' 'nbl' */
  u32 *w2c_GOT0x2Emem_nbl;
  /* import: 'GOT.mem' 'ph' */
  u32 *w2c_GOT0x2Emem_ph;
  /* import: 'GOT.mem' 'ph1' */
  u32 *w2c_GOT0x2Emem_ph1;
  /* import: 'GOT.mem' 'ph2' */
  u32 *w2c_GOT0x2Emem_ph2;
  /* import: 'GOT.mem' 'plt' */
  u32 *w2c_GOT0x2Emem_plt;
  /* import: 'GOT.mem' 'plt1' */
  u32 *w2c_GOT0x2Emem_plt1;
  /* import: 'GOT.mem' 'plt2' */
  u32 *w2c_GOT0x2Emem_plt2;
  /* import: 'GOT.mem' 'qq2_code2_table' */
  u32 *w2c_GOT0x2Emem_qq2_code2_table;
  /* import: 'GOT.mem' 'qq4_code4_table' */
  u32 *w2c_GOT0x2Emem_qq4_code4_table;
  /* import: 'GOT.mem' 'qq6_code6_table' */
  u32 *w2c_GOT0x2Emem_qq6_code6_table;
  /* import: 'GOT.mem' 'quant26bt_neg' */
  u32 *w2c_GOT0x2Emem_quant26bt_neg;
  /* import: 'GOT.mem' 'quant26bt_pos' */
  u32 *w2c_GOT0x2Emem_quant26bt_pos;
  /* import: 'GOT.mem' 'result' */
  u32 *w2c_GOT0x2Emem_result;
  /* import: 'GOT.mem' 'rh' */
  u32 *w2c_GOT0x2Emem_rh;
  /* import: 'GOT.mem' 'rh1' */
  u32 *w2c_GOT0x2Emem_rh1;
  /* import: 'GOT.mem' 'rh2' */
  u32 *w2c_GOT0x2Emem_rh2;
  /* import: 'GOT.mem' 'rl' */
  u32 *w2c_GOT0x2Emem_rl;
  /* import: 'GOT.mem' 'rlt' */
  u32 *w2c_GOT0x2Emem_rlt;
  /* import: 'GOT.mem' 'rlt1' */
  u32 *w2c_GOT0x2Emem_rlt1;
  /* import: 'GOT.mem' 'rlt2' */
  u32 *w2c_GOT0x2Emem_rlt2;
  /* import: 'GOT.mem' 'sh' */
  u32 *w2c_GOT0x2Emem_sh;
  /* import: 'GOT.mem' 'sl' */
  u32 *w2c_GOT0x2Emem_sl;
  /* import: 'GOT.mem' 'sph' */
  u32 *w2c_GOT0x2Emem_sph;
  /* import: 'GOT.mem' 'spl' */
  u32 *w2c_GOT0x2Emem_spl;
  /* import: 'GOT.mem' 'startTimer' */
  u32 *w2c_GOT0x2Emem_startTimer;
  /* import: 'GOT.mem' 'szh' */
  u32 *w2c_GOT0x2Emem_szh;
  /* import: 'GOT.mem' 'szl' */
  u32 *w2c_GOT0x2Emem_szl;
  /* import: 'GOT.mem' 'test_compressed' */
  u32 *w2c_GOT0x2Emem_test_compressed;
  /* import: 'GOT.mem' 'test_data' */
  u32 *w2c_GOT0x2Emem_test_data;
  /* import: 'GOT.mem' 'test_result' */
  u32 *w2c_GOT0x2Emem_test_result;
  /* import: 'GOT.mem' 'tqmf' */
  u32 *w2c_GOT0x2Emem_tqmf;
  /* import: 'GOT.mem' 'wh_code_table' */
  u32 *w2c_GOT0x2Emem_wh_code_table;
  /* import: 'GOT.mem' 'wl_code_table' */
  u32 *w2c_GOT0x2Emem_wl_code_table;
  /* import: 'GOT.mem' 'xd' */
  u32 *w2c_GOT0x2Emem_xd;
  /* import: 'GOT.mem' 'xh' */
  u32 *w2c_GOT0x2Emem_xh;
  /* import: 'GOT.mem' 'xl' */
  u32 *w2c_GOT0x2Emem_xl;
  /* import: 'GOT.mem' 'xout1' */
  u32 *w2c_GOT0x2Emem_xout1;
  /* import: 'GOT.mem' 'xout2' */
  u32 *w2c_GOT0x2Emem_xout2;
  /* import: 'GOT.mem' 'xs' */
  u32 *w2c_GOT0x2Emem_xs;
  /* import: 'GOT.mem' 'yh' */
  u32 *w2c_GOT0x2Emem_yh;
  /* import: 'env' '__memory_base' */
  u32 *w2c_env_0x5F_memory_base;
  /* import: 'env' '__stack_pointer' */
  u32 *w2c_env_0x5F_stack_pointer;
  /* import: 'env' '__table_base' */
  u32 *w2c_env_0x5F_table_base;
  /* import: 'env' 'memory' */
  wasm_rt_memory_t *w2c_env_memory;
  u32 w2c_h_1;
  u32 w2c_tqmf_1;
  u32 w2c_xl_1;
  u32 w2c_xh_1;
  u32 w2c_delay_dltx_1;
  u32 w2c_delay_bpl_1;
  u32 w2c_szl_1;
  u32 w2c_rlt1_1;
  u32 w2c_al1_1;
  u32 w2c_rlt2_1;
  u32 w2c_al2_1;
  u32 w2c_spl_1;
  u32 w2c_sl_1;
  u32 w2c_el_1;
  u32 w2c_detl_1;
  u32 w2c_il_1;
  u32 w2c_qq4_code4_table_1;
  u32 w2c_dlt_1;
  u32 w2c_nbl_1;
  u32 w2c_plt_1;
  u32 w2c_plt1_1;
  u32 w2c_plt2_1;
  u32 w2c_rlt_1;
  u32 w2c_delay_dhx_1;
  u32 w2c_delay_bph_1;
  u32 w2c_szh_1;
  u32 w2c_rh1_1;
  u32 w2c_ah1_1;
  u32 w2c_rh2_1;
  u32 w2c_ah2_1;
  u32 w2c_sph_1;
  u32 w2c_sh_1;
  u32 w2c_eh_1;
  u32 w2c_ih_1;
  u32 w2c_deth_1;
  u32 w2c_qq2_code2_table_1;
  u32 w2c_dh_1;
  u32 w2c_nbh_1;
  u32 w2c_ph_1;
  u32 w2c_ph1_1;
  u32 w2c_ph2_1;
  u32 w2c_yh_1;
  u32 w2c_decis_levl_1;
  u32 w2c_quant26bt_pos_1;
  u32 w2c_quant26bt_neg_1;
  u32 w2c_wl_code_table_1;
  u32 w2c_ilb_table_1;
  u32 w2c_wh_code_table_1;
  u32 w2c_ilr_1;
  u32 w2c_dec_del_dltx_1;
  u32 w2c_dec_del_bpl_1;
  u32 w2c_dec_szl_1;
  u32 w2c_dec_rlt1_1;
  u32 w2c_dec_al1_1;
  u32 w2c_dec_rlt2_1;
  u32 w2c_dec_al2_1;
  u32 w2c_dec_spl_1;
  u32 w2c_dec_sl_1;
  u32 w2c_dec_detl_1;
  u32 w2c_dec_dlt_1;
  u32 w2c_qq6_code6_table_1;
  u32 w2c_dl_1;
  u32 w2c_rl_1;
  u32 w2c_dec_nbl_1;
  u32 w2c_dec_plt_1;
  u32 w2c_dec_plt1_1;
  u32 w2c_dec_plt2_1;
  u32 w2c_dec_rlt_1;
  u32 w2c_dec_del_dhx_1;
  u32 w2c_dec_del_bph_1;
  u32 w2c_dec_szh_1;
  u32 w2c_dec_rh1_1;
  u32 w2c_dec_ah1_1;
  u32 w2c_dec_rh2_1;
  u32 w2c_dec_ah2_1;
  u32 w2c_dec_sph_1;
  u32 w2c_dec_sh_1;
  u32 w2c_dec_deth_1;
  u32 w2c_dec_dh_1;
  u32 w2c_dec_nbh_1;
  u32 w2c_dec_ph_1;
  u32 w2c_dec_ph1_1;
  u32 w2c_dec_ph2_1;
  u32 w2c_rh_1;
  u32 w2c_xd_1;
  u32 w2c_xs_1;
  u32 w2c_accumc_1;
  u32 w2c_accumd_1;
  u32 w2c_xout1_1;
  u32 w2c_xout2_1;
  u32 w2c_test_data_1;
  u32 w2c_compressed_1;
  u32 w2c_result_1;
  u32 w2c_startTimer_1;
  u32 w2c_test_compressed_1;
  u32 w2c_test_result_1;
  u32 w2c_endTimer_1;
} w2c_adpcm;

void wasm2c_adpcm_instantiate(w2c_adpcm*, struct w2c_GOT0x2Emem*, struct w2c_env*);
void wasm2c_adpcm_free(w2c_adpcm*);
wasm_rt_func_type_t wasm2c_adpcm_get_func_type(uint32_t param_count, uint32_t result_count, ...);

/* import: 'env' 'gettimeofday' */
u32 w2c_env_gettimeofday(struct w2c_env*, u32, u32);

/* import: 'env' 'printf' */
u32 w2c_env_printf(struct w2c_env*, u32, u32);

extern const u32 wasm2c_adpcm_min_env_memory;
extern const u32 wasm2c_adpcm_max_env_memory;

/* export: '__wasm_call_ctors' */
void w2c_adpcm_0x5F_wasm_call_ctors(w2c_adpcm*);

/* export: '__wasm_apply_data_relocs' */
void w2c_adpcm_0x5F_wasm_apply_data_relocs(w2c_adpcm*);

/* export: 'abs' */
u32 w2c_adpcm_abs(w2c_adpcm*, u32);

/* export: 'encode' */
u32 w2c_adpcm_encode(w2c_adpcm*, u32, u32);

/* export: 'h' */
u32* w2c_adpcm_h(w2c_adpcm* instance);

/* export: 'tqmf' */
u32* w2c_adpcm_tqmf(w2c_adpcm* instance);

/* export: 'xl' */
u32* w2c_adpcm_xl(w2c_adpcm* instance);

/* export: 'xh' */
u32* w2c_adpcm_xh(w2c_adpcm* instance);

/* export: 'delay_dltx' */
u32* w2c_adpcm_delay_dltx(w2c_adpcm* instance);

/* export: 'delay_bpl' */
u32* w2c_adpcm_delay_bpl(w2c_adpcm* instance);

/* export: 'filtez' */
u32 w2c_adpcm_filtez(w2c_adpcm*, u32, u32);

/* export: 'szl' */
u32* w2c_adpcm_szl(w2c_adpcm* instance);

/* export: 'rlt1' */
u32* w2c_adpcm_rlt1(w2c_adpcm* instance);

/* export: 'al1' */
u32* w2c_adpcm_al1(w2c_adpcm* instance);

/* export: 'rlt2' */
u32* w2c_adpcm_rlt2(w2c_adpcm* instance);

/* export: 'al2' */
u32* w2c_adpcm_al2(w2c_adpcm* instance);

/* export: 'filtep' */
u32 w2c_adpcm_filtep(w2c_adpcm*, u32, u32, u32, u32);

/* export: 'spl' */
u32* w2c_adpcm_spl(w2c_adpcm* instance);

/* export: 'sl' */
u32* w2c_adpcm_sl(w2c_adpcm* instance);

/* export: 'el' */
u32* w2c_adpcm_el(w2c_adpcm* instance);

/* export: 'detl' */
u32* w2c_adpcm_detl(w2c_adpcm* instance);

/* export: 'quantl' */
u32 w2c_adpcm_quantl(w2c_adpcm*, u32, u32);

/* export: 'il' */
u32* w2c_adpcm_il(w2c_adpcm* instance);

/* export: 'qq4_code4_table' */
u32* w2c_adpcm_qq4_code4_table(w2c_adpcm* instance);

/* export: 'dlt' */
u32* w2c_adpcm_dlt(w2c_adpcm* instance);

/* export: 'nbl' */
u32* w2c_adpcm_nbl(w2c_adpcm* instance);

/* export: 'logscl' */
u32 w2c_adpcm_logscl(w2c_adpcm*, u32, u32);

/* export: 'scalel' */
u32 w2c_adpcm_scalel(w2c_adpcm*, u32, u32);

/* export: 'plt' */
u32* w2c_adpcm_plt(w2c_adpcm* instance);

/* export: 'upzero' */
void w2c_adpcm_upzero(w2c_adpcm*, u32, u32, u32);

/* export: 'plt1' */
u32* w2c_adpcm_plt1(w2c_adpcm* instance);

/* export: 'plt2' */
u32* w2c_adpcm_plt2(w2c_adpcm* instance);

/* export: 'uppol2' */
u32 w2c_adpcm_uppol2(w2c_adpcm*, u32, u32, u32, u32, u32);

/* export: 'uppol1' */
u32 w2c_adpcm_uppol1(w2c_adpcm*, u32, u32, u32, u32);

/* export: 'rlt' */
u32* w2c_adpcm_rlt(w2c_adpcm* instance);

/* export: 'delay_dhx' */
u32* w2c_adpcm_delay_dhx(w2c_adpcm* instance);

/* export: 'delay_bph' */
u32* w2c_adpcm_delay_bph(w2c_adpcm* instance);

/* export: 'szh' */
u32* w2c_adpcm_szh(w2c_adpcm* instance);

/* export: 'rh1' */
u32* w2c_adpcm_rh1(w2c_adpcm* instance);

/* export: 'ah1' */
u32* w2c_adpcm_ah1(w2c_adpcm* instance);

/* export: 'rh2' */
u32* w2c_adpcm_rh2(w2c_adpcm* instance);

/* export: 'ah2' */
u32* w2c_adpcm_ah2(w2c_adpcm* instance);

/* export: 'sph' */
u32* w2c_adpcm_sph(w2c_adpcm* instance);

/* export: 'sh' */
u32* w2c_adpcm_sh(w2c_adpcm* instance);

/* export: 'eh' */
u32* w2c_adpcm_eh(w2c_adpcm* instance);

/* export: 'ih' */
u32* w2c_adpcm_ih(w2c_adpcm* instance);

/* export: 'deth' */
u32* w2c_adpcm_deth(w2c_adpcm* instance);

/* export: 'qq2_code2_table' */
u32* w2c_adpcm_qq2_code2_table(w2c_adpcm* instance);

/* export: 'dh' */
u32* w2c_adpcm_dh(w2c_adpcm* instance);

/* export: 'nbh' */
u32* w2c_adpcm_nbh(w2c_adpcm* instance);

/* export: 'logsch' */
u32 w2c_adpcm_logsch(w2c_adpcm*, u32, u32);

/* export: 'ph' */
u32* w2c_adpcm_ph(w2c_adpcm* instance);

/* export: 'ph1' */
u32* w2c_adpcm_ph1(w2c_adpcm* instance);

/* export: 'ph2' */
u32* w2c_adpcm_ph2(w2c_adpcm* instance);

/* export: 'yh' */
u32* w2c_adpcm_yh(w2c_adpcm* instance);

/* export: 'decis_levl' */
u32* w2c_adpcm_decis_levl(w2c_adpcm* instance);

/* export: 'quant26bt_pos' */
u32* w2c_adpcm_quant26bt_pos(w2c_adpcm* instance);

/* export: 'quant26bt_neg' */
u32* w2c_adpcm_quant26bt_neg(w2c_adpcm* instance);

/* export: 'wl_code_table' */
u32* w2c_adpcm_wl_code_table(w2c_adpcm* instance);

/* export: 'ilb_table' */
u32* w2c_adpcm_ilb_table(w2c_adpcm* instance);

/* export: 'wh_code_table' */
u32* w2c_adpcm_wh_code_table(w2c_adpcm* instance);

/* export: 'decode' */
void w2c_adpcm_decode(w2c_adpcm*, u32);

/* export: 'ilr' */
u32* w2c_adpcm_ilr(w2c_adpcm* instance);

/* export: 'dec_del_dltx' */
u32* w2c_adpcm_dec_del_dltx(w2c_adpcm* instance);

/* export: 'dec_del_bpl' */
u32* w2c_adpcm_dec_del_bpl(w2c_adpcm* instance);

/* export: 'dec_szl' */
u32* w2c_adpcm_dec_szl(w2c_adpcm* instance);

/* export: 'dec_rlt1' */
u32* w2c_adpcm_dec_rlt1(w2c_adpcm* instance);

/* export: 'dec_al1' */
u32* w2c_adpcm_dec_al1(w2c_adpcm* instance);

/* export: 'dec_rlt2' */
u32* w2c_adpcm_dec_rlt2(w2c_adpcm* instance);

/* export: 'dec_al2' */
u32* w2c_adpcm_dec_al2(w2c_adpcm* instance);

/* export: 'dec_spl' */
u32* w2c_adpcm_dec_spl(w2c_adpcm* instance);

/* export: 'dec_sl' */
u32* w2c_adpcm_dec_sl(w2c_adpcm* instance);

/* export: 'dec_detl' */
u32* w2c_adpcm_dec_detl(w2c_adpcm* instance);

/* export: 'dec_dlt' */
u32* w2c_adpcm_dec_dlt(w2c_adpcm* instance);

/* export: 'qq6_code6_table' */
u32* w2c_adpcm_qq6_code6_table(w2c_adpcm* instance);

/* export: 'dl' */
u32* w2c_adpcm_dl(w2c_adpcm* instance);

/* export: 'rl' */
u32* w2c_adpcm_rl(w2c_adpcm* instance);

/* export: 'dec_nbl' */
u32* w2c_adpcm_dec_nbl(w2c_adpcm* instance);

/* export: 'dec_plt' */
u32* w2c_adpcm_dec_plt(w2c_adpcm* instance);

/* export: 'dec_plt1' */
u32* w2c_adpcm_dec_plt1(w2c_adpcm* instance);

/* export: 'dec_plt2' */
u32* w2c_adpcm_dec_plt2(w2c_adpcm* instance);

/* export: 'dec_rlt' */
u32* w2c_adpcm_dec_rlt(w2c_adpcm* instance);

/* export: 'dec_del_dhx' */
u32* w2c_adpcm_dec_del_dhx(w2c_adpcm* instance);

/* export: 'dec_del_bph' */
u32* w2c_adpcm_dec_del_bph(w2c_adpcm* instance);

/* export: 'dec_szh' */
u32* w2c_adpcm_dec_szh(w2c_adpcm* instance);

/* export: 'dec_rh1' */
u32* w2c_adpcm_dec_rh1(w2c_adpcm* instance);

/* export: 'dec_ah1' */
u32* w2c_adpcm_dec_ah1(w2c_adpcm* instance);

/* export: 'dec_rh2' */
u32* w2c_adpcm_dec_rh2(w2c_adpcm* instance);

/* export: 'dec_ah2' */
u32* w2c_adpcm_dec_ah2(w2c_adpcm* instance);

/* export: 'dec_sph' */
u32* w2c_adpcm_dec_sph(w2c_adpcm* instance);

/* export: 'dec_sh' */
u32* w2c_adpcm_dec_sh(w2c_adpcm* instance);

/* export: 'dec_deth' */
u32* w2c_adpcm_dec_deth(w2c_adpcm* instance);

/* export: 'dec_dh' */
u32* w2c_adpcm_dec_dh(w2c_adpcm* instance);

/* export: 'dec_nbh' */
u32* w2c_adpcm_dec_nbh(w2c_adpcm* instance);

/* export: 'dec_ph' */
u32* w2c_adpcm_dec_ph(w2c_adpcm* instance);

/* export: 'dec_ph1' */
u32* w2c_adpcm_dec_ph1(w2c_adpcm* instance);

/* export: 'dec_ph2' */
u32* w2c_adpcm_dec_ph2(w2c_adpcm* instance);

/* export: 'rh' */
u32* w2c_adpcm_rh(w2c_adpcm* instance);

/* export: 'xd' */
u32* w2c_adpcm_xd(w2c_adpcm* instance);

/* export: 'xs' */
u32* w2c_adpcm_xs(w2c_adpcm* instance);

/* export: 'accumc' */
u32* w2c_adpcm_accumc(w2c_adpcm* instance);

/* export: 'accumd' */
u32* w2c_adpcm_accumd(w2c_adpcm* instance);

/* export: 'xout1' */
u32* w2c_adpcm_xout1(w2c_adpcm* instance);

/* export: 'xout2' */
u32* w2c_adpcm_xout2(w2c_adpcm* instance);

/* export: 'reset' */
void w2c_adpcm_reset(w2c_adpcm*);

/* export: 'adpcm_main' */
void w2c_adpcm_adpcm_main(w2c_adpcm*);

/* export: 'test_data' */
u32* w2c_adpcm_test_data(w2c_adpcm* instance);

/* export: 'compressed' */
u32* w2c_adpcm_compressed(w2c_adpcm* instance);

/* export: 'result' */
u32* w2c_adpcm_result(w2c_adpcm* instance);

/* export: 'submain' */
u32 w2c_adpcm_submain(w2c_adpcm*);

/* export: 'startTimer' */
u32* w2c_adpcm_startTimer(w2c_adpcm* instance);

/* export: 'test_compressed' */
u32* w2c_adpcm_test_compressed(w2c_adpcm* instance);

/* export: 'test_result' */
u32* w2c_adpcm_test_result(w2c_adpcm* instance);

/* export: 'endTimer' */
u32* w2c_adpcm_endTimer(w2c_adpcm* instance);

#ifdef __cplusplus
}
#endif

#endif  /* ADPCM_H_GENERATED_ */
