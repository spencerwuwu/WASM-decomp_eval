import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global h:int;
export import global tqmf:int;
export import global xl:int;
export import global xh:int;
export import global delay_bpl:int;
export import global delay_dltx:int;
export import global szl:int;
export import global rlt1:int;
export import global al1:int;
export import global rlt2:int;
export import global al2:int;
export import global spl:int;
export import global sl:int;
export import global el:int;
export import global detl:int;
export import global decis_levl:int;
export import global quant26bt_neg:int;
export import global quant26bt_pos:int;
export import global il:int;
export import global qq4_code4_table:int;
export import global dlt:int;
export import global plt:int;
export import global wl_code_table:int;
export import global nbl:int;
export import global ilb_table:int;
export import global plt1:int;
export import global plt2:int;
export import global rlt:int;
export import global delay_bph:int;
export import global delay_dhx:int;
export import global szh:int;
export import global rh1:int;
export import global ah1:int;
export import global rh2:int;
export import global ah2:int;
export import global sph:int;
export import global sh:int;
export import global eh:int;
export import global ih:int;
export import global deth:int;
export import global qq2_code2_table:int;
export import global dh:int;
export import global ph:int;
export import global nbh:int;
export import global wh_code_table:int;
export import global ph1:int;
export import global ph2:int;
export import global yh:int;
export import global ilr:int;
export import global dec_del_bpl:int;
export import global dec_del_dltx:int;
export import global dec_szl:int;
export import global dec_rlt1:int;
export import global dec_al1:int;
export import global dec_rlt2:int;
export import global dec_al2:int;
export import global dec_spl:int;
export import global dec_detl:int;
export import global dec_dlt:int;
export import global dec_sl:int;
export import global qq6_code6_table:int;
export import global dl:int;
export import global dec_plt:int;
export import global rl:int;
export import global dec_nbl:int;
export import global dec_plt1:int;
export import global dec_plt2:int;
export import global dec_rlt:int;
export import global dec_del_bph:int;
export import global dec_del_dhx:int;
export import global dec_szh:int;
export import global dec_rh1:int;
export import global dec_ah1:int;
export import global dec_rh2:int;
export import global dec_ah2:int;
export import global dec_sph:int;
export import global dec_deth:int;
export import global dec_dh:int;
export import global dec_sh:int;
export import global dec_ph:int;
export import global dec_nbh:int;
export import global dec_ph1:int;
export import global dec_ph2:int;
export import global rh:int;
export import global xd:int;
export import global xs:int;
export import global accumc:int;
export import global accumd:int;
export import global xout1:int;
export import global xout2:int;
export import global compressed:int;
export import global test_data:int;
export import global result:int;
export import global startTimer:int;
export import global test_compressed:int;
export import global test_result:int;
export import global endTimer:int;
global h_1:int = 0;
global tqmf_1:int = 2272;
global xl_1:int = 2368;
global xh_1:int = 2372;
global delay_bpl_1:int = 2384;
global delay_dltx_1:int = 2416;
global szl_1:int = 2440;
global rlt1_1:int = 2444;
global al1_1:int = 2448;
global rlt2_1:int = 2452;
global al2_1:int = 2456;
global spl_1:int = 2460;
global sl_1:int = 2464;
global el_1:int = 2468;
global detl_1:int = 2472;
global decis_levl_1:int = 608;
global quant26bt_neg_1:int = 864;
global quant26bt_pos_1:int = 736;
global il_1:int = 2476;
global qq4_code4_table_1:int = 96;
global dlt_1:int = 2480;
global plt_1:int = 2488;
global wl_code_table_1:int = 416;
global nbl_1:int = 2484;
global ilb_table_1:int = 480;
global plt1_1:int = 2492;
global plt2_1:int = 2496;
global rlt_1:int = 2500;
global delay_bph_1:int = 2512;
global delay_dhx_1:int = 2544;
global szh_1:int = 2568;
global rh1_1:int = 2572;
global ah1_1:int = 2576;
global rh2_1:int = 2580;
global ah2_1:int = 2584;
global sph_1:int = 2588;
global sh_1:int = 2592;
global eh_1:int = 2596;
global ih_1:int = 2600;
global deth_1:int = 2604;
global qq2_code2_table_1:int = 992;
global dh_1:int = 2608;
global ph_1:int = 2616;
global nbh_1:int = 2612;
global wh_code_table_1:int = 1008;
global ph1_1:int = 2620;
global ph2_1:int = 2624;
global yh_1:int = 2628;
global ilr_1:int = 2632;
global dec_del_bpl_1:int = 2640;
global dec_del_dltx_1:int = 2672;
global dec_szl_1:int = 2696;
global dec_rlt1_1:int = 2700;
global dec_al1_1:int = 2704;
global dec_rlt2_1:int = 2708;
global dec_al2_1:int = 2712;
global dec_spl_1:int = 2716;
global dec_detl_1:int = 2724;
global dec_dlt_1:int = 2728;
global dec_sl_1:int = 2720;
global qq6_code6_table_1:int = 160;
global dl_1:int = 2732;
global dec_plt_1:int = 2744;
global rl_1:int = 2736;
global dec_nbl_1:int = 2740;
global dec_plt1_1:int = 2748;
global dec_plt2_1:int = 2752;
global dec_rlt_1:int = 2756;
global dec_del_bph_1:int = 2768;
global dec_del_dhx_1:int = 2800;
global dec_szh_1:int = 2824;
global dec_rh1_1:int = 2828;
global dec_ah1_1:int = 2832;
global dec_rh2_1:int = 2836;
global dec_ah2_1:int = 2840;
global dec_sph_1:int = 2844;
global dec_deth_1:int = 2852;
global dec_dh_1:int = 2856;
global dec_sh_1:int = 2848;
global dec_ph_1:int = 2864;
global dec_nbh_1:int = 2860;
global dec_ph1_1:int = 2868;
global dec_ph2_1:int = 2872;
global rh_1:int = 2876;
global xd_1:int = 2880;
global xs_1:int = 2884;
global accumc_1:int = 2896;
global accumd_1:int = 2944;
global xout1_1:int = 2988;
global xout2_1:int = 2992;
global compressed_1:int = 3008;
global test_data_1:int = 1024;
global result_1:int = 3408;
global startTimer_1:int = 3808;
global test_compressed_1:int = 1424;
global test_result_1:int = 1824;
global endTimer_1:int = 3816;

data data(offset: memory_base) =
  "\0c\00\00\00\d4\ff\ff\ff\d4\ff\ff\ff\d4\00\00\000\00\00\00\90\fd\ff\ff"
  "\80\00\00\00\a8\05\00\00\b8\fc\ff\ffl\f3\ff\ff\dc\0e\00\00\90<\00\00\90"
  "<\00\00\dc\0e\00\00l\f3\ff\ff\b8\fc\ff\ff\a8\05\00\00\80\00\00\00\90\fd"
  "\ff\ff0\00\00\00\d4\00\00\00\d4\ff\ff\ff\d4\ff\ff\ff\0c\00\00\00\00\00"
  "\00\00\18\b0\ff\ff\a0\cd\ff\ff\f8\dc\ff\ffp\e7\ff\ffp\ef\ff\ff\e8\f5\ff"
  "\ffP\fb\ff\ff\e8O\00\00`2\00\00\08#\00\00\90\18\00\00\90\10\00\00\18\0a"
  "\00\00\b0\04\00\00\00\00\00\00x\ff\ff\ffx\ff\ff\ffx\ff\ff\ffx\ff\ff\ff"
  "\18\9f\ff\ffp\aa\ff\ff\c0\b5\ff\ff\c0\be\ff\ffx\c5\ff\ff8\cb\ff\ff\08\d0"
  "\ff\ffH\d4\ff\ff\08\d8\ff\ffp\db\ff\ff\80\de\ff\ffP\e1\ff\ff\e8\e3\ff\ff"
  "P\e6\ff\ff\90\e8\ff\ff\b0\ea\ff\ff\b0\ec\ff\ff\90\ee\ff\ffX\f0\ff\ff\08"
  "\f2\ff\ff\a0\f3\ff\ff(\f5\ff\ff\a0\f6\ff\ff\10\f8\ff\ffh\f9\ff\ff\b0\fa"
  "\ff\ff\f0\fb\ff\ff(\fd\ff\ff\e8`\00\00\90U\00\00@J\00\00@A\00\00\88:\00"
  "\00\c84\00\00\f8/\00\00\b8+\00\00\f8'\00\00\90$\00\00\80!\00\00\b0\1e\00"
  "\00\18\1c\00\00\b0\19\00\00p\17\00\00P\15\00\00P\13\00\00p\11\00\00\a8"
  "\0f\00\00\f8\0d\00\00`\0c\00\00\d8\0a\00\00`\09\00\00\f0\07\00\00\98\06"
  "\00\00P\05\00\00\10\04\00\00\d8\02\00\00\b0\01\00\00\88\00\00\00P\fe\ff"
  "\ffx\ff\ff\ff\c4\ff\ff\ff\e2\0b\00\00\ae\04\00\00\1a\02\00\00N\01\00\00"
  "\ac\00\00\00:\00\00\00\e2\ff\ff\ff\e2\0b\00\00\ae\04\00\00\1a\02\00\00"
  "N\01\00\00\ac\00\00\00:\00\00\00\e2\ff\ff\ff\c4\ff\ff\ff\00\08\00\00-\08"
  "\00\00[\08\00\00\8a\08\00\00\b9\08\00\00\ea\08\00\00\1c\09\00\00O\09\00"
  "\00\83\09\00\00\b9\09\00\00\ef\09\00\00'\0a\00\00`\0a\00\00\9a\0a\00\00"
  "\d6\0a\00\00\12\0b\00\00P\0b\00\00\90\0b\00\00\d1\0b\00\00\13\0c\00\00"
  "V\0c\00\00\9c\0c\00\00\e2\0c\00\00+\0d\00\00t\0d\00\00\c0\0d\00\00\0d\0e"
  "\00\00\\0e\00\00\ac\0e\00\00\fe\0e\00\00R\0f\00\00\a8\0f\00\00\18\01\00"
  "\00@\02\00\00p\03\00\00\b0\04\00\00\f0\05\00\00H\07\00\00\a0\08\00\00\18"
  "\0a\00\00\90\0b\00\000\0d\00\00\c8\0e\00\00\90\10\00\00X\12\00\00P\14\00"
  "\00P\16\00\00\90\18\00\00\d0\1a\00\00`\1d\00\00\f8\1f\00\00\08#\00\00\18"
  "&\00\00\d8)\00\00\90-\00\00`2\00\00(7\00\00\e0=\00\00\98D\00\00\e8O\00"
  "\008[\00\00\ff\7f\00\00\00\00\00\00\00\00\00\00=\00\00\00<\00\00\00;\00"
  "\00\00:\00\00\009\00\00\008\00\00\007\00\00\006\00\00\005\00\00\004\00"
  "\00\003\00\00\002\00\00\001\00\00\000\00\00\00/\00\00\00.\00\00\00-\00"
  "\00\00,\00\00\00+\00\00\00*\00\00\00)\00\00\00(\00\00\00'\00\00\00&\00"
  "\00\00%\00\00\00$\00\00\00#\00\00\00"\00\00\00!\00\00\00 \00\00\00 \00"
  "\00\00\00\00\00\00?\00\00\00>\00\00\00\1f\00\00\00\1e\00\00\00\1d\00\00"
  "\00\1c\00\00\00\1b\00\00\00\1a\00\00\00\19\00\00\00\18\00\00\00\17\00\00"
  "\00\16\00\00\00\15\00\00\00\14\00\00\00\13\00\00\00\12\00\00\00\11\00\00"
  "\00\10\00\00\00\0f\00\00\00\0e\00\00\00\0d\00\00\00\0c\00\00\00\0b\00\00"
  "\00\0a\00\00\00\09\00\00\00\08\00\00\00\07\00\00\00\06\00\00\00\05\00\00"
  "\00\04\00\00\00\04\00\00\00\00\00\00\00\10\e3\ff\ff\b0\f9\ff\ff\f0\1c\00"
  "\00P\06\00\00\1e\03\00\00*\ff\ff\ff\1e\03\00\00*\ff\ff\ffD\00\00\00D\00"
  "\00\00D\00\00\00D\00\00\00D\00\00\00D\00\00\00D\00\00\00D\00\00\00D\00"
  "\00\00D\00\00\00D\00\00\00D\00\00\00D\00\00\00D\00\00\00D\00\00\00D\00"
  "\00\00D\00\00\00C\00\00\00C\00\00\00C\00\00\00C\00\00\00C\00\00\00C\00"
  "\00\00C\00\00\00B\00\00\00B\00\00\00B\00\00\00B\00\00\00B\00\00\00B\00"
  "\00\00A\00\00\00A\00\00\00A\00\00\00A\00\00\00A\00\00\00@\00\00\00@\00"
  "\00\00@\00\00\00@\00\00\00@\00\00\00@\00\00\00@\00\00\00@\00\00\00?\00"
  "\00\00?\00\00\00?\00\00\00?\00\00\00?\00\00\00>\00\00\00>\00\00\00>\00"
  "\00\00>\00\00\00>\00\00\00>\00\00\00=\00\00\00=\00\00\00=\00\00\00=\00"
  "\00\00=\00\00\00=\00\00\00<\00\00\00<\00\00\00<\00\00\00<\00\00\00<\00"
  "\00\00<\00\00\00<\00\00\00<\00\00\00<\00\00\00;\00\00\00;\00\00\00;\00"
  "\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00;\00"
  "\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00;\00"
  "\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00;\00\00\00<\00"
  "\00\00<\00\00\00<\00\00\00<\00\00\00<\00\00\00<\00\00\00<\00\00\00<\00"
  "\00\00\fd\00\00\00\de\00\00\00w\00\00\00\ba\00\00\00\f2\00\00\00\90\00"
  "\00\00 \00\00\00\a0\00\00\00\ec\00\00\00\ed\00\00\00\ef\00\00\00\f1\00"
  "\00\00\f3\00\00\00\f4\00\00\00\f5\00\00\00\f5\00\00\00\f5\00\00\00\f5\00"
  "\00\00\f6\00\00\00\f6\00\00\00\f6\00\00\00\f7\00\00\00\f8\00\00\00\f7\00"
  "\00\00\f8\00\00\00\f7\00\00\00\f9\00\00\00\f8\00\00\00\f7\00\00\00\f9\00"
  "\00\00\f8\00\00\00\f8\00\00\00\f6\00\00\00\f8\00\00\00\f8\00\00\00\f7\00"
  "\00\00\f9\00\00\00\f9\00\00\00\f9\00\00\00\f8\00\00\00\f7\00\00\00\fa\00"
  "\00\00\f8\00\00\00\f8\00\00\00\f7\00\00\00\fb\00\00\00\fa\00\00\00\f9\00"
  "\00\00\f8\00\00\00\f8\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\ff\ff"
  "\ff\ff\ff\ff\ff\ff\00\00\00\00\00\00\00\00\ff\ff\ff\ff\00\00\00\00\00\00"
  "\00\00\ff\ff\ff\ff\ff\ff\ff\ff\00\00\00\00\00\00\00\00\01\00\00\00\01\00"
  "\00\00\00\00\00\00\fe\ff\ff\ff\ff\ff\ff\ff\fe\ff\ff\ff\00\00\00\00\fc\ff"
  "\ff\ff\01\00\00\00\01\00\00\00\01\00\00\00\fb\ff\ff\ff\02\00\00\00\02\00"
  "\00\00\03\00\00\00\0b\00\00\00\14\00\00\00\14\00\00\00\16\00\00\00\18\00"
  "\00\00 \00\00\00!\00\00\00&\00\00\00'\00\00\00.\00\00\00/\00\00\003\00"
  "\00\002\00\00\005\00\00\003\00\00\006\00\00\004\00\00\007\00\00\004\00"
  "\00\007\00\00\005\00\00\008\00\00\006\00\00\009\00\00\008\00\00\00;\00"
  "\00\00:\00\00\00?\00\00\00?\00\00\00@\00\00\00:\00\00\00=\00\00\00>\00"
  "\00\00A\00\00\00<\00\00\00>\00\00\00?\00\00\00B\00\00\00>\00\00\00;\00"
  "\00\007\00\00\00;\00\00\00>\00\00\00A\00\00\00;\00\00\00;\00\00\00:\00"
  "\00\00;\00\00\006\00\00\009\00\00\00;\00\00\00?\00\00\00<\00\00\00;\00"
  "\00\007\00\00\00;\00\00\00=\00\00\00A\00\00\00=\00\00\00>\00\00\00<\00"
  "\00\00>\00\00\00;\00\00\00:\00\00\007\00\00\00;\00\00\00>\00\00\00A\00"
  "\00\00<\00\00\00;\00\00\009\00\00\00:\00\00\006\00\00\00Error return f"
  "rom gettimeofday: %d\00%0.6f\0a\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00";

import function memmove(a:int, b:int, c:int):int;

import function memset(a:int, b:int, c:int):int;

import function gettimeofday(a:int, b:int):int;

import function iprintf(a:int, b:int):int;

import function small_printf(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function abs(a:int):int {
  var b:int;
  return (a ^ (b = a >> 31)) - b;
}

export function encode(a:int, b:int):int {
  var i:int;
  var j:int;
  var k:int;
  var l:int;
  var m:int;
  var c:int = h;
  var d:{ a:int, b:int } = 0;
  var e:int = tqmf;
  var f:{ a:int, b:int } = e[1]:int * -44;
  var g:int = e[0]:int * 12;
  var h:{ a:int, b:int } = e + 8;
  e = c + 8;
  loop L_a {
    c = d + 1;
    d = c;
    e = e;
    i = e[1]:int * (h = h).b + f;
    f = i;
    j = e[0]:int * h.a + g;
    g = j;
    h = h + 8;
    e = e + 8;
    if (c != 10) continue L_a;
  }
  e = tqmf;
  h = e[23]:int;
  d = e[22]:int;
  memmove(e + 8, e, 88);
  e[0]:int = b;
  e[1]:int = a;
  xl[0]:int = (i = (e = h * 12 + i) + (h = d * -44 + j) >> 15);
  xh[0]:int = (k = h - e >> 15);
  f = delay_bpl;
  e = f.a * (l = (d = delay_dltx).a);
  h = 1;
  d = d;
  f = f;
  loop L_b {
    d = d;
    c = d.b * (f = f).b + e;
    e = c;
    g = h + 1;
    h = g;
    d = d + 4;
    f = f + 4;
    if (g != 6) continue L_b;
  }
  szl[0]:int = (j = c >> 14);
  b = rlt1[0]:int;
  c = al1[0]:int;
  e = rlt2[0]:int;
  a = al2[0]:int;
  spl[0]:int = (e = (a * e + c * b << 1) >> 15);
  sl[0]:int = (m = e + j);
  el[0]:int = (i = i - m);
  f = (i ^ (e = i >> 31)) - e;
  d = detl[0]:int;
  e = 0;
  loop L_d {
    if (f > decis_levl[e = e]:int * d >> 15) goto B_e;
    g = e;
    goto B_c;
    label B_e:
    h = e + 1;
    e = h;
    g = 30;
    if (h != 30) continue L_d;
  }
  label B_c:
  e = quant26bt_neg;
  i = select_if(quant26bt_pos, e, i > -1)[g]:int;
  il[0]:int = i;
  h = (qq4_code4_table + (e = i & -4))[0]:int;
  dlt[0]:int = (f = (h = h * d) >> 15);
  plt[0]:int = (g = f + j);
  e = (wl_code_table + e)[0]:int;
  d = nbl;
  d.a =
    (e = select_if(e = select_if(e = e + (d.a * 127 >> 7), 0, e > 0),
                   18432,
                   e < 18432));
  d = (ilb_table + (e >> 4 & 124))[0]:int;
  detl[0]:int = (d >> 9 - (e >> 11)) << 3;
  if (h > 32767) goto B_g;
  e = 0;
  loop L_h {
    h = delay_bpl + ((e = e) << 2);
    h.a = h.a * 255 >> 8;
    h = e + 1;
    e = h;
    if (h != 6) continue L_h;
    goto B_f;
  }
  unreachable;
  label B_g:
  e = 0;
  loop L_i {
    d = (delay_dltx + (h = (e = e) << 2))[0]:int;
    h = delay_bpl + h;
    h.a = select_if(128, -128, d * f > -1) + (h.a * 255 >> 8);
    h = e + 1;
    e = h;
    if (h != 6) continue L_i;
  }
  label B_f:
  e = delay_dltx;
  e[0]:int = f;
  rlt2[0]:int = b;
  e[2]:long = e[3]:long@4;
  e[1]:long = e[1]:long@4;
  e[1]:int = l;
  h = plt1;
  e = h.a;
  h.a = g;
  h = plt2;
  d = h.a;
  h.a = e;
  rlt[0]:int = (h = f + m);
  rlt1[0]:int = h;
  al2[0]:int =
    (e = 
       select_if(
         e = select_if(e = select_if(-128, 128, d * g < 0) + (a * 127 >> 7) +
                           (select_if(h = c << 2, 0 - h, h = e * g < 0) >> 7),
                       12288,
                       e < 12288),
         -12288,
         e > -12288));
  al1[0]:int =
    select_if(h = select_if(h = select_if(-192, 192, h) + (c * 255 >> 8),
                            d = 15360 - e,
                            h < d),
              e = e + -15360,
              h > e);
  f = delay_bph;
  e = f.a * (l = (d = delay_dhx).a);
  h = 1;
  d = d;
  f = f;
  loop L_j {
    d = d;
    c = d.b * (f = f).b + e;
    e = c;
    g = h + 1;
    h = g;
    d = d + 4;
    f = f + 4;
    if (g != 6) continue L_j;
  }
  szh[0]:int = (h = c >> 14);
  j = rh1[0]:int;
  g = ah1[0]:int;
  e = rh2[0]:int;
  b = ah2[0]:int;
  sph[0]:int = (e = (b * e + g * j << 1) >> 15);
  sh[0]:int = (a = e + h);
  eh[0]:int = (e = k - a);
  ih[0]:int = (f = select_if(3, 1, e > -1));
  if (
    (e ^ (d = e >> 31)) - d <= (e = deth[0]:int) * 564 >> 12) goto B_k;
  ih[0]:int = f + -1;
  label B_k:
  m = ih[0]:int;
  f = (qq2_code2_table + (d = m << 2))[0]:int;
  dh[0]:int = (f = (k = f * e) >> 15);
  ph[0]:int = (c = f + h);
  e = nbh;
  e[0]:int =
    (e = 
       select_if(
         e = select_if(e = (e[0]:int * 127 >> 7) + (wh_code_table + d)[0]:int,
                       0,
                       e > 0),
         22528,
         e < 22528));
  h = (ilb_table + (e >> 4 & 124))[0]:int;
  deth[0]:int = (h >> 11 - (e >> 11)) << 3;
  if (k > 32767) goto B_m;
  e = 0;
  loop L_n {
    h = delay_bph + ((e = e) << 2);
    h.a = h.a * 255 >> 8;
    h = e + 1;
    e = h;
    if (h != 6) continue L_n;
    goto B_l;
  }
  unreachable;
  label B_m:
  e = 0;
  loop L_o {
    d = (delay_dhx + (h = (e = e) << 2))[0]:int;
    h = delay_bph + h;
    h.a = select_if(128, -128, d * f > -1) + (h.a * 255 >> 8);
    h = e + 1;
    e = h;
    if (h != 6) continue L_o;
  }
  label B_l:
  e = delay_dhx;
  e[0]:int = f;
  rh2[0]:int = j;
  e[2]:long = e[3]:long@4;
  e[1]:long = e[1]:long@4;
  e[1]:int = l;
  h = ph1;
  e = h.a;
  h.a = c;
  h = ph2;
  d = h.a;
  h.a = e;
  yh[0]:int = (h = f + a);
  rh1[0]:int = h;
  ah2[0]:int =
    (e = 
       select_if(
         e = select_if(e = select_if(-128, 128, d * c < 0) + (b * 127 >> 7) +
                           (select_if(h = g << 2, 0 - h, h = e * c < 0) >> 7),
                       12288,
                       e < 12288),
         -12288,
         e > -12288));
  ah1[0]:int =
    select_if(h = select_if(h = select_if(-192, 192, h) + (g * 255 >> 8),
                            d = 15360 - e,
                            h < d),
              e = e + -15360,
              h > e);
  return m << 6 | i;
}

export function filtez(a:{ a:int, b:int }, b:{ a:int, b:int }):int {
  var e:int;
  var c:int = b.a * a.a;
  var d:int = 1;
  b = b;
  a = a;
  loop L_a {
    b = b;
    e = b.b * (a = a).b + c;
    c = e;
    var f:int = d + 1;
    d = f;
    b = b + 4;
    a = a + 4;
    if (f != 6) continue L_a;
  }
  return e >> 14;
}

export function filtep(a:int, b:int, c:int, d:int):int {
  return (d * c + b * a << 1) >> 15
}

export function quantl(a:int, b:int):int {
  var c:int;
  var e:int;
  var d:int = (a ^ (c = a >> 31)) - c;
  c = 0;
  loop L_b {
    if (d > decis_levl[c = c]:int * b >> 15) goto B_c;
    e = c;
    goto B_a;
    label B_c:
    var f:int = c + 1;
    c = f;
    e = 30;
    if (f != 30) continue L_b;
  }
  label B_a:
  c = quant26bt_neg;
  return select_if(quant26bt_pos, c, a > -1)[e]:int;
}

export function logscl(a:int, b:int):int {
  b = (wl_code_table + (a & -4))[0]:int + (b * 127 >> 7);
  b = select_if(b, 0, b > 0);
  return select_if(b, 18432, b < 18432);
}

export function scalel(a:int, b:int):int {
  return 
    ((ilb_table + (a >> 4 & 124))[0]:int >> b - (a >> 11) + 1) << 3
}

export function upzero(a:int, b:int, c:int) {
  var d:int;
  var e:int_ptr;
  if (a) goto B_b;
  d = 0;
  loop L_c {
    e = c + ((d = d) << 2);
    e[0] = e[0] * 255 >> 8;
    e = d + 1;
    d = e;
    if (e != 6) continue L_c;
    goto B_a;
  }
  unreachable;
  label B_b:
  d = 0;
  loop L_d {
    var f:int_ptr = c + (e = (d = d) << 2);
    f[0] =
      select_if(128, -128, (b + e)[0]:int * a > -1) + (f[0] * 255 >> 8);
    e = d + 1;
    d = e;
    if (e != 6) continue L_d;
  }
  label B_a:
  b[5]:int = b[4]:int;
  b[3]:long@4 = b[2]:long@4;
  b[1]:long@4 = b[0]:long@4;
  b[0]:int = a;
}

export function uppol2(a:int, b:int, c:int, d:int, e:int):int {
  c = select_if(-128, 128, e * c < 0) + (b * 127 >> 7) +
      (select_if(a = a << 2, 0 - a, d * c < 0) >> 7);
  c = select_if(c, 12288, c < 12288);
  return select_if(c, -12288, c > -12288);
}

export function uppol1(a:int, b:int, c:int, d:int):int {
  c = select_if(-192, 192, d * c < 0) + (a * 255 >> 8);
  c = select_if(c, d = 15360 - b, c < d);
  return select_if(c, b = b + -15360, c > b);
}

export function logsch(a:int, b:int):int {
  b = wh_code_table[a]:int + (b * 127 >> 7);
  b = select_if(b, 0, b > 0);
  return select_if(b, 22528, b < 22528);
}

export function decode(a:int) {
  var b:int_ptr;
  var c:int_ptr;
  var e:{ a:int, b:int }
  var f:int;
  var h:int;
  var i:int;
  var l:int;
  var n:int;
  var o:int;
  ih[0]:int = (b = a >> 6);
  ilr[0]:int = (c = a & 63);
  var d:{ a:int, b:int } = dec_del_bpl;
  a = d.a * (f = (e = dec_del_dltx).a);
  var g:int = 1;
  e = e;
  d = d;
  loop L_a {
    e = e;
    h = e.b * (d = d).b + a;
    a = h;
    i = g + 1;
    g = i;
    e = e + 4;
    d = d + 4;
    if (i != 6) continue L_a;
  }
  dec_szl[0]:int = (a = h >> 14);
  var j:int = dec_rlt1[0]:int;
  i = dec_al1[0]:int;
  g = dec_rlt2[0]:int;
  var k:int_ptr = dec_al2[0]:int;
  dec_spl[0]:int = (e = (k * g + i * j << 1) >> 15);
  d = (qq4_code4_table + (l = c & 60))[0]:int;
  var m:int_ptr = dec_detl;
  g = m[0];
  dec_dlt[0]:int = (d = (n = d * g) >> 15);
  dec_sl[0]:int = (c = e + a);
  e = il[0]:int;
  e = qq6_code6_table[e]:int;
  dl[0]:int = (g = e * g >> 15);
  dec_plt[0]:int = (h = d + a);
  rl[0]:int = (o = g + c);
  a = dec_nbl;
  a[0]:int =
    (a = 
       select_if(
         a = select_if(a = (a[0]:int * 127 >> 7) + (wl_code_table + l)[0]:int,
                       0,
                       a > 0),
         18432,
         a < 18432));
  m[0] = ((ilb_table + (a >> 4 & 124))[0]:int >> 9 - (a >> 11)) << 3;
  if (n > 32767) goto B_c;
  a = 0;
  loop L_d {
    g = dec_del_bpl + ((a = a) << 2);
    g[0]:int = g[0]:int * 255 >> 8;
    g = a + 1;
    a = g;
    if (g != 6) continue L_d;
    goto B_b;
  }
  unreachable;
  label B_c:
  a = 0;
  loop L_e {
    e = (dec_del_dltx + (g = (a = a) << 2))[0]:int;
    g = dec_del_bpl + g;
    g[0]:int = select_if(128, -128, e * d > -1) + (g[0]:int * 255 >> 8);
    g = a + 1;
    a = g;
    if (g != 6) continue L_e;
  }
  label B_b:
  a = dec_del_dltx;
  a[0]:int = d;
  dec_rlt2[0]:int = j;
  a[2]:long = a[3]:long@4;
  a[1]:long = a[1]:long@4;
  a[1]:int = f;
  g = dec_plt1;
  a = g[0]:int;
  g[0]:int = h;
  g = dec_plt2;
  e = g[0]:int;
  g[0]:int = a;
  dec_rlt[0]:int = (g = d + c);
  dec_rlt1[0]:int = g;
  dec_al2[0]:int =
    (a = 
       select_if(
         a = select_if(a = select_if(-128, 128, e * h < 0) + (k * 127 >> 7) +
                           (select_if(g = i << 2, 0 - g, g = a * h < 0) >> 7),
                       12288,
                       a < 12288),
         -12288,
         a > -12288));
  dec_al1[0]:int =
    select_if(g = select_if(g = select_if(-192, 192, g) + (i * 255 >> 8),
                            e = 15360 - a,
                            g < e),
              a = a + -15360,
              g > a);
  d = dec_del_bph;
  a = d.a * (c = (e = dec_del_dhx).a);
  g = 1;
  e = e;
  d = d;
  loop L_f {
    e = e;
    h = e.b * (d = d).b + a;
    a = h;
    i = g + 1;
    g = i;
    e = e + 4;
    d = d + 4;
    if (i != 6) continue L_f;
  }
  dec_szh[0]:int = (a = h >> 14);
  j = dec_rh1[0]:int;
  i = dec_ah1[0]:int;
  g = dec_rh2[0]:int;
  k = dec_ah2[0]:int;
  dec_sph[0]:int = (g = (k * g + i * j << 1) >> 15);
  d = (qq2_code2_table + (e = b << 2))[0]:int;
  b = dec_deth;
  h = b[0];
  dec_dh[0]:int = (d = (f = d * h) >> 15);
  dec_sh[0]:int = (l = g + a);
  dec_ph[0]:int = (h = d + a);
  a = dec_nbh;
  a[0]:int =
    (a = 
       select_if(
         a = select_if(a = (a[0]:int * 127 >> 7) + (wh_code_table + e)[0]:int,
                       0,
                       a > 0),
         22528,
         a < 22528));
  b[0] = ((ilb_table + (a >> 4 & 124))[0]:int >> 11 - (a >> 11)) << 3;
  if (f > 32767) goto B_h;
  a = 0;
  loop L_i {
    g = dec_del_bph + ((a = a) << 2);
    g[0]:int = g[0]:int * 255 >> 8;
    g = a + 1;
    a = g;
    if (g != 6) continue L_i;
    goto B_g;
  }
  unreachable;
  label B_h:
  a = 0;
  loop L_j {
    e = (dec_del_dhx + (g = (a = a) << 2))[0]:int;
    g = dec_del_bph + g;
    g[0]:int = select_if(128, -128, e * d > -1) + (g[0]:int * 255 >> 8);
    g = a + 1;
    a = g;
    if (g != 6) continue L_j;
  }
  label B_g:
  a = dec_del_dhx;
  a[0]:int = d;
  dec_rh2[0]:int = j;
  a[2]:long = a[3]:long@4;
  a[1]:long = a[1]:long@4;
  a[1]:int = c;
  a = dec_ph1;
  g = a[0]:int;
  a[0]:int = h;
  a = dec_ph2;
  e = a[0]:int;
  a[0]:int = g;
  rh[0]:int = (a = d + l);
  dec_rh1[0]:int = a;
  xd[0]:int = (b = o - a);
  xs[0]:int = (o = a + o);
  dec_ah2[0]:int =
    (a = 
       select_if(
         a = select_if(a = select_if(-128, 128, e * h < 0) + (k * 127 >> 7) +
                           (select_if(a = i << 2, 0 - a, g = g * h < 0) >> 7),
                       12288,
                       a < 12288),
         -12288,
         a > -12288));
  dec_ah1[0]:int =
    select_if(g = select_if(g = select_if(-192, 192, g) + (i * 255 >> 8),
                            e = 15360 - a,
                            g < e),
              a = a + -15360,
              g > a);
  a = h;
  e = accumc;
  g = accumd;
  e = e;
  d = a + 8;
  i = o * -44;
  h = b * 12;
  j = 0;
  loop L_k {
    k = g;
    g = k + 4;
    c = e;
    e = c + 4;
    a = d;
    d = a + 8;
    k = a[1]:int * k[0] + i;
    i = k;
    c = a[0]:int * c[0] + h;
    h = c;
    a = j + 1;
    j = a;
    if (a != 10) continue L_k;
  }
  a = accumc;
  var p:long = (a + 8)[0]:long;
  a[1]:long@4 = a[0]:long;
  var q:long = (a + 16)[0]:long;
  (a + 12)[0]:long@4 = p;
  p = (a + 24)[0]:long;
  (a + 20)[0]:long@4 = q;
  q = (a + 32)[0]:long;
  (a + 28)[0]:long@4 = p;
  g = a[10]:int;
  (a + 36)[0]:long@4 = q;
  xout1[0]:int = g * -44 + c >> 14;
  g = accumd;
  e = g[10]:int;
  xout2[0]:int = e * 12 + k >> 14;
  p = (g + 16)[0]:long;
  (g + 12)[0]:long@4 = (g + 8)[0]:long;
  q = (g + 24)[0]:long;
  (g + 20)[0]:long@4 = p;
  p = (g + 32)[0]:long;
  (g + 28)[0]:long@4 = q;
  (g + 36)[0]:long@4 = p;
  g[1]:long@4 = g[0]:long;
  a[0]:int = b;
  g[0]:int = o;
}

export function reset() {
  detl[0]:int = 32;
  dec_detl[0]:int = 32;
  dec_deth[0]:int = 8;
  deth[0]:int = 8;
  rlt2[0]:int = 0;
  rlt1[0]:int = 0;
  plt2[0]:int = 0;
  plt1[0]:int = 0;
  al2[0]:int = 0;
  al1[0]:int = 0;
  nbl[0]:int = 0;
  rh2[0]:int = 0;
  rh1[0]:int = 0;
  ph2[0]:int = 0;
  ph1[0]:int = 0;
  ah2[0]:int = 0;
  ah1[0]:int = 0;
  nbh[0]:int = 0;
  dec_rlt2[0]:int = 0;
  dec_rlt1[0]:int = 0;
  dec_plt2[0]:int = 0;
  dec_plt1[0]:int = 0;
  dec_al2[0]:int = 0;
  dec_al1[0]:int = 0;
  dec_nbl[0]:int = 0;
  dec_rh2[0]:int = 0;
  dec_rh1[0]:int = 0;
  dec_ph2[0]:int = 0;
  dec_ph1[0]:int = 0;
  dec_ah2[0]:int = 0;
  dec_ah1[0]:int = 0;
  dec_nbh[0]:int = 0;
  var a:long_ptr = delay_dltx;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = delay_dhx;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = dec_del_dltx;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = dec_del_dhx;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = delay_bpl;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = delay_bph;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = dec_del_bpl;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = dec_del_bph;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  memset(tqmf, 0, 96);
  a = accumc;
  (a + 40)[0]:int = 0;
  (a + 32)[0]:long = 0L;
  (a + 24)[0]:long = 0L;
  (a + 16)[0]:long = 0L;
  (a + 8)[0]:long = 0L;
  a[0] = 0L;
  a = accumd;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  (a + 16)[0]:long = 0L;
  (a + 24)[0]:long = 0L;
  (a + 32)[0]:long = 0L;
  (a + 40)[0]:int = 0;
}

export function adpcm_main() {
  var c:int;
  detl[0]:int = 32;
  dec_detl[0]:int = 32;
  dec_deth[0]:int = 8;
  deth[0]:int = 8;
  rlt2[0]:int = 0;
  rlt1[0]:int = 0;
  plt2[0]:int = 0;
  plt1[0]:int = 0;
  al2[0]:int = 0;
  al1[0]:int = 0;
  nbl[0]:int = 0;
  rh2[0]:int = 0;
  rh1[0]:int = 0;
  ph2[0]:int = 0;
  ph1[0]:int = 0;
  ah2[0]:int = 0;
  ah1[0]:int = 0;
  nbh[0]:int = 0;
  dec_rlt2[0]:int = 0;
  dec_rlt1[0]:int = 0;
  dec_plt2[0]:int = 0;
  dec_plt1[0]:int = 0;
  dec_al2[0]:int = 0;
  dec_al1[0]:int = 0;
  dec_nbl[0]:int = 0;
  dec_rh2[0]:int = 0;
  dec_rh1[0]:int = 0;
  dec_ph2[0]:int = 0;
  dec_ph1[0]:int = 0;
  dec_ah2[0]:int = 0;
  dec_ah1[0]:int = 0;
  dec_nbh[0]:int = 0;
  var a:long_ptr = delay_dltx;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = delay_dhx;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = dec_del_dltx;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = dec_del_dhx;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = delay_bpl;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = delay_bph;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = dec_del_bpl;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  a = dec_del_bph;
  (a + 16)[0]:long = 0L;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  memset(tqmf, 0, 96);
  a = accumc;
  (a + 40)[0]:int = 0;
  (a + 32)[0]:long = 0L;
  (a + 24)[0]:long = 0L;
  (a + 16)[0]:long = 0L;
  (a + 8)[0]:long = 0L;
  a[0] = 0L;
  a = accumd;
  a[0] = 0L;
  (a + 8)[0]:long = 0L;
  (a + 16)[0]:long = 0L;
  (a + 24)[0]:long = 0L;
  (a + 32)[0]:long = 0L;
  (a + 40)[0]:int = 0;
  var b:int = 0;
  loop L_a {
    (compressed + ((a = b) << 1))[0]:int =
      encode(((b = test_data) + (c = a << 2))[0]:int, (b + (c | 4))[0]:int);
    b = a + 2;
    if (a < 98) continue L_a;
  }
  b = 0;
  loop L_b {
    decode((compressed + ((a = b) << 1))[0]:int);
    b = result;
    (b + (c = a << 2))[0]:int = xout1[0]:int;
    (b + (c | 4))[0]:int = xout2[0]:int;
    b = a + 2;
    if (a < 98) continue L_b;
  }
}

export function submain():int {
  var b:int;
  var e:int;
  var f:int;
  var g:double;
  var a:int = stack_pointer - 64;
  stack_pointer = a;
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_a;
  a[8]:int = b;
  iprintf(memory_base + 2224, a + 32);
  label B_a:
  b = a[14]:int;
  var c:long = a[6]:long;
  startTimer[0]:double =
    f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
  adpcm_main();
  b = 0;
  var d:int = 0;
  loop L_b {
    e = b +
        ((test_compressed + (b = (d = d) << 2))[0]:int !=
         (compressed + b)[0]:int);
    b = e;
    f = d + 1;
    d = f;
    if (f != 50) continue L_b;
  }
  b = e;
  d = 0;
  loop L_c {
    e = 
      b +
      ((test_result + (b = (d = d) << 2))[0]:int != (result + b)[0]:int);
    b = e;
    f = d + 1;
    d = f;
    if (f != 100) continue L_c;
  }
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_d;
  a[4]:int = b;
  iprintf(memory_base + 2224, a + 16);
  label B_d:
  b = a[14]:int;
  c = a[6]:long;
  endTimer[0]:double =
    (g = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
  a[0]:double = g - startTimer[0]:double;
  small_printf(memory_base + 2259, a);
  stack_pointer = a + 64;
  return e;
}

