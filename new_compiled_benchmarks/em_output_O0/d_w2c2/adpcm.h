#ifndef adpcm_H
#define adpcm_H

#include "w2c2_base.h"

typedef struct adpcmInstance {
wasmMemory*env__memory;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
U32*GOTX2Emem__h;
U32*GOTX2Emem__tqmf;
U32*GOTX2Emem__xl;
U32*GOTX2Emem__xh;
U32*GOTX2Emem__delay_dltx;
U32*GOTX2Emem__delay_bpl;
U32*GOTX2Emem__szl;
U32*GOTX2Emem__rlt1;
U32*GOTX2Emem__al1;
U32*GOTX2Emem__rlt2;
U32*GOTX2Emem__al2;
U32*GOTX2Emem__spl;
U32*GOTX2Emem__sl;
U32*GOTX2Emem__el;
U32*GOTX2Emem__detl;
U32*GOTX2Emem__il;
U32*GOTX2Emem__qq4_code4_table;
U32*GOTX2Emem__dlt;
U32*GOTX2Emem__nbl;
U32*GOTX2Emem__plt;
U32*GOTX2Emem__plt1;
U32*GOTX2Emem__plt2;
U32*GOTX2Emem__rlt;
U32*GOTX2Emem__delay_dhx;
U32*GOTX2Emem__delay_bph;
U32*GOTX2Emem__szh;
U32*GOTX2Emem__rh1;
U32*GOTX2Emem__ah1;
U32*GOTX2Emem__rh2;
U32*GOTX2Emem__ah2;
U32*GOTX2Emem__sph;
U32*GOTX2Emem__sh;
U32*GOTX2Emem__eh;
U32*GOTX2Emem__ih;
U32*GOTX2Emem__deth;
U32*GOTX2Emem__qq2_code2_table;
U32*GOTX2Emem__dh;
U32*GOTX2Emem__nbh;
U32*GOTX2Emem__ph;
U32*GOTX2Emem__ph1;
U32*GOTX2Emem__ph2;
U32*GOTX2Emem__yh;
U32*GOTX2Emem__decis_levl;
U32*GOTX2Emem__quant26bt_pos;
U32*GOTX2Emem__quant26bt_neg;
U32*GOTX2Emem__wl_code_table;
U32*GOTX2Emem__ilb_table;
U32*GOTX2Emem__wh_code_table;
U32*GOTX2Emem__ilr;
U32*GOTX2Emem__dec_del_dltx;
U32*GOTX2Emem__dec_del_bpl;
U32*GOTX2Emem__dec_szl;
U32*GOTX2Emem__dec_rlt1;
U32*GOTX2Emem__dec_al1;
U32*GOTX2Emem__dec_rlt2;
U32*GOTX2Emem__dec_al2;
U32*GOTX2Emem__dec_spl;
U32*GOTX2Emem__dec_sl;
U32*GOTX2Emem__dec_detl;
U32*GOTX2Emem__dec_dlt;
U32*GOTX2Emem__qq6_code6_table;
U32*GOTX2Emem__dl;
U32*GOTX2Emem__rl;
U32*GOTX2Emem__dec_nbl;
U32*GOTX2Emem__dec_plt;
U32*GOTX2Emem__dec_plt1;
U32*GOTX2Emem__dec_plt2;
U32*GOTX2Emem__dec_rlt;
U32*GOTX2Emem__dec_del_dhx;
U32*GOTX2Emem__dec_del_bph;
U32*GOTX2Emem__dec_szh;
U32*GOTX2Emem__dec_rh1;
U32*GOTX2Emem__dec_ah1;
U32*GOTX2Emem__dec_rh2;
U32*GOTX2Emem__dec_ah2;
U32*GOTX2Emem__dec_sph;
U32*GOTX2Emem__dec_sh;
U32*GOTX2Emem__dec_deth;
U32*GOTX2Emem__dec_dh;
U32*GOTX2Emem__dec_nbh;
U32*GOTX2Emem__dec_ph;
U32*GOTX2Emem__dec_ph1;
U32*GOTX2Emem__dec_ph2;
U32*GOTX2Emem__rh;
U32*GOTX2Emem__xd;
U32*GOTX2Emem__xs;
U32*GOTX2Emem__accumc;
U32*GOTX2Emem__accumd;
U32*GOTX2Emem__xout1;
U32*GOTX2Emem__xout2;
U32*GOTX2Emem__test_data;
U32*GOTX2Emem__compressed;
U32*GOTX2Emem__result;
U32*GOTX2Emem__startTimer;
U32*GOTX2Emem__test_compressed;
U32*GOTX2Emem__test_result;
U32*GOTX2Emem__endTimer;
U32 g100;
U32 g101;
U32 g102;
U32 g103;
U32 g104;
U32 g105;
U32 g106;
U32 g107;
U32 g108;
U32 g109;
U32 g110;
U32 g111;
U32 g112;
U32 g113;
U32 g114;
U32 g115;
U32 g116;
U32 g117;
U32 g118;
U32 g119;
U32 g120;
U32 g121;
U32 g122;
U32 g123;
U32 g124;
U32 g125;
U32 g126;
U32 g127;
U32 g128;
U32 g129;
U32 g130;
U32 g131;
U32 g132;
U32 g133;
U32 g134;
U32 g135;
U32 g136;
U32 g137;
U32 g138;
U32 g139;
U32 g140;
U32 g141;
U32 g142;
U32 g143;
U32 g144;
U32 g145;
U32 g146;
U32 g147;
U32 g148;
U32 g149;
U32 g150;
U32 g151;
U32 g152;
U32 g153;
U32 g154;
U32 g155;
U32 g156;
U32 g157;
U32 g158;
U32 g159;
U32 g160;
U32 g161;
U32 g162;
U32 g163;
U32 g164;
U32 g165;
U32 g166;
U32 g167;
U32 g168;
U32 g169;
U32 g170;
U32 g171;
U32 g172;
U32 g173;
U32 g174;
U32 g175;
U32 g176;
U32 g177;
U32 g178;
U32 g179;
U32 g180;
U32 g181;
U32 g182;
U32 g183;
U32 g184;
U32 g185;
U32 g186;
U32 g187;
U32 g188;
U32 g189;
U32 g190;
U32 g191;
U32 g192;
U32 g193;
U32 g194;
U32 g195;
U32 g196;
} adpcmInstance;

U32 env__printf(struct adpcmInstance*,U32,U32);

U32 env__gettimeofday(struct adpcmInstance*,U32,U32);

void f2(adpcmInstance*);

void f3(adpcmInstance*);

U32 f4(adpcmInstance*,U32);

U32 f5(adpcmInstance*,U32,U32);

U32 f6(adpcmInstance*,U32,U32);

U32 f7(adpcmInstance*,U32,U32,U32,U32);

U32 f8(adpcmInstance*,U32,U32);

U32 f9(adpcmInstance*,U32,U32);

U32 f10(adpcmInstance*,U32,U32);

void f11(adpcmInstance*,U32,U32,U32);

U32 f12(adpcmInstance*,U32,U32,U32,U32,U32);

U32 f13(adpcmInstance*,U32,U32,U32,U32);

U32 f14(adpcmInstance*,U32,U32);

void f15(adpcmInstance*,U32);

void f16(adpcmInstance*);

void f17(adpcmInstance*);

U32 f18(adpcmInstance*);

F64 f19(adpcmInstance*);

void adpcm____wasm_call_ctors(adpcmInstance*i);

void adpcm____wasm_apply_data_relocs(adpcmInstance*i);

U32 adpcm_abs(adpcmInstance*i,U32 l0);

U32 adpcm_encode(adpcmInstance*i,U32 l0,U32 l1);

U32 adpcm_filtez(adpcmInstance*i,U32 l0,U32 l1);

U32 adpcm_filtep(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 adpcm_quantl(adpcmInstance*i,U32 l0,U32 l1);

U32 adpcm_logscl(adpcmInstance*i,U32 l0,U32 l1);

U32 adpcm_scalel(adpcmInstance*i,U32 l0,U32 l1);

void adpcm_upzero(adpcmInstance*i,U32 l0,U32 l1,U32 l2);

U32 adpcm_uppol2(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4);

U32 adpcm_uppol1(adpcmInstance*i,U32 l0,U32 l1,U32 l2,U32 l3);

U32 adpcm_logsch(adpcmInstance*i,U32 l0,U32 l1);

void adpcm_decode(adpcmInstance*i,U32 l0);

void adpcm_reset(adpcmInstance*i);

void adpcm_adpcm_main(adpcmInstance*i);

U32 adpcm_submain(adpcmInstance*i);

void adpcmInstantiate(adpcmInstance* instance, void* resolve(const char* module, const char* name));

void adpcmFreeInstance(adpcmInstance* instance);

#endif /* adpcm_H */

