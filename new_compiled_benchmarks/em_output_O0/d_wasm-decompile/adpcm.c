import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global h:int;
export import global tqmf:int;
export import global xl:int;
export import global xh:int;
export import global delay_dltx:int;
export import global delay_bpl:int;
export import global szl:int;
export import global rlt1:int;
export import global al1:int;
export import global rlt2:int;
export import global al2:int;
export import global spl:int;
export import global sl:int;
export import global el:int;
export import global detl:int;
export import global il:int;
export import global qq4_code4_table:int;
export import global dlt:int;
export import global nbl:int;
export import global plt:int;
export import global plt1:int;
export import global plt2:int;
export import global rlt:int;
export import global delay_dhx:int;
export import global delay_bph:int;
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
export import global nbh:int;
export import global ph:int;
export import global ph1:int;
export import global ph2:int;
export import global yh:int;
export import global decis_levl:int;
export import global quant26bt_pos:int;
export import global quant26bt_neg:int;
export import global wl_code_table:int;
export import global ilb_table:int;
export import global wh_code_table:int;
export import global ilr:int;
export import global dec_del_dltx:int;
export import global dec_del_bpl:int;
export import global dec_szl:int;
export import global dec_rlt1:int;
export import global dec_al1:int;
export import global dec_rlt2:int;
export import global dec_al2:int;
export import global dec_spl:int;
export import global dec_sl:int;
export import global dec_detl:int;
export import global dec_dlt:int;
export import global qq6_code6_table:int;
export import global dl:int;
export import global rl:int;
export import global dec_nbl:int;
export import global dec_plt:int;
export import global dec_plt1:int;
export import global dec_plt2:int;
export import global dec_rlt:int;
export import global dec_del_dhx:int;
export import global dec_del_bph:int;
export import global dec_szh:int;
export import global dec_rh1:int;
export import global dec_ah1:int;
export import global dec_rh2:int;
export import global dec_ah2:int;
export import global dec_sph:int;
export import global dec_sh:int;
export import global dec_deth:int;
export import global dec_dh:int;
export import global dec_nbh:int;
export import global dec_ph:int;
export import global dec_ph1:int;
export import global dec_ph2:int;
export import global rh:int;
export import global xd:int;
export import global xs:int;
export import global accumc:int;
export import global accumd:int;
export import global xout1:int;
export import global xout2:int;
export import global test_data:int;
export import global compressed:int;
export import global result:int;
export import global startTimer:int;
export import global test_compressed:int;
export import global test_result:int;
export import global endTimer:int;
global h_1:int = 0;
global tqmf_1:int = 2272;
global xl_1:int = 2368;
global xh_1:int = 2372;
global delay_dltx_1:int = 2416;
global delay_bpl_1:int = 2384;
global szl_1:int = 2440;
global rlt1_1:int = 2444;
global al1_1:int = 2448;
global rlt2_1:int = 2452;
global al2_1:int = 2456;
global spl_1:int = 2460;
global sl_1:int = 2464;
global el_1:int = 2468;
global detl_1:int = 2472;
global il_1:int = 2476;
global qq4_code4_table_1:int = 96;
global dlt_1:int = 2480;
global nbl_1:int = 2484;
global plt_1:int = 2488;
global plt1_1:int = 2492;
global plt2_1:int = 2496;
global rlt_1:int = 2500;
global delay_dhx_1:int = 2544;
global delay_bph_1:int = 2512;
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
global nbh_1:int = 2612;
global ph_1:int = 2616;
global ph1_1:int = 2620;
global ph2_1:int = 2624;
global yh_1:int = 2628;
global decis_levl_1:int = 608;
global quant26bt_pos_1:int = 736;
global quant26bt_neg_1:int = 864;
global wl_code_table_1:int = 416;
global ilb_table_1:int = 480;
global wh_code_table_1:int = 1008;
global ilr_1:int = 2632;
global dec_del_dltx_1:int = 2672;
global dec_del_bpl_1:int = 2640;
global dec_szl_1:int = 2696;
global dec_rlt1_1:int = 2700;
global dec_al1_1:int = 2704;
global dec_rlt2_1:int = 2708;
global dec_al2_1:int = 2712;
global dec_spl_1:int = 2716;
global dec_sl_1:int = 2720;
global dec_detl_1:int = 2724;
global dec_dlt_1:int = 2728;
global qq6_code6_table_1:int = 160;
global dl_1:int = 2732;
global rl_1:int = 2736;
global dec_nbl_1:int = 2740;
global dec_plt_1:int = 2744;
global dec_plt1_1:int = 2748;
global dec_plt2_1:int = 2752;
global dec_rlt_1:int = 2756;
global dec_del_dhx_1:int = 2800;
global dec_del_bph_1:int = 2768;
global dec_szh_1:int = 2824;
global dec_rh1_1:int = 2828;
global dec_ah1_1:int = 2832;
global dec_rh2_1:int = 2836;
global dec_ah2_1:int = 2840;
global dec_sph_1:int = 2844;
global dec_sh_1:int = 2848;
global dec_deth_1:int = 2852;
global dec_dh_1:int = 2856;
global dec_nbh_1:int = 2860;
global dec_ph_1:int = 2864;
global dec_ph1_1:int = 2868;
global dec_ph2_1:int = 2872;
global rh_1:int = 2876;
global xd_1:int = 2880;
global xs_1:int = 2884;
global accumc_1:int = 2896;
global accumd_1:int = 2944;
global xout1_1:int = 2988;
global xout2_1:int = 2992;
global test_data_1:int = 1024;
global compressed_1:int = 3008;
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

import function printf(a:int, b:int):int;

import function gettimeofday(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function abs(a:int):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int_ptr = b - c;
  d[3] = a;
  var e:int = d[3];
  var f:int = 0;
  var g:int = e;
  var h:int = f;
  var i:int = g >= h;
  var j:int = 1;
  var k:int = i & j;
  if (eqz(k)) goto B_b;
  var l:int = d[3];
  d[2] = l;
  goto B_a;
  label B_b:
  var m:int = d[3];
  var n:int = 0;
  var o:int = n - m;
  d[2] = o;
  label B_a:
  var p:int = d[2];
  return p;
}

export function encode(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[11] = a;
  e[10] = b;
  var f:int = h;
  e[8] = f;
  var g:int = tqmf;
  e[7] = g;
  var h:int_ptr = e[7];
  var i:int = 4;
  var j:int = h + i;
  e[7] = j;
  var k:int = h[0];
  var l:int_ptr = e[8];
  var m:int = 4;
  var n:int = l + m;
  e[8] = n;
  var o:int = l[0];
  var p:int = k * o;
  e[5] = p;
  var q:int_ptr = e[7];
  var r:int = 4;
  var s:int = q + r;
  e[7] = s;
  var t:int = q[0];
  var u:int_ptr = e[8];
  var v:int = 4;
  var w:int = u + v;
  e[8] = w;
  var x:int = u[0];
  var y:int = t * x;
  e[4] = y;
  var z:int = 0;
  e[9] = z;
  loop L_b {
    var aa:int = e[9];
    var ba:int = 10;
    var ca:int = aa;
    var da:int = ba;
    var ea:int = ca < da;
    var fa:int = 1;
    var ga:int = ea & fa;
    if (eqz(ga)) goto B_a;
    var ha:int_ptr = e[7];
    var ia:int = 4;
    var ja:int = ha + ia;
    e[7] = ja;
    var ka:int = ha[0];
    var la:int_ptr = e[8];
    var ma:int = 4;
    var na:int = la + ma;
    e[8] = na;
    var oa:int = la[0];
    var pa:int = ka * oa;
    var qa:int = e[5];
    var ra:int = qa + pa;
    e[5] = ra;
    var sa:int_ptr = e[7];
    var ta:int = 4;
    var ua:int = sa + ta;
    e[7] = ua;
    var va:int = sa[0];
    var wa:int_ptr = e[8];
    var xa:int = 4;
    var ya:int = wa + xa;
    e[8] = ya;
    var za:int = wa[0];
    var ab:int = va * za;
    var bb:int = e[4];
    var cb:int = bb + ab;
    e[4] = cb;
    var db:int = e[9];
    var eb:int = 1;
    var fb:int = db + eb;
    e[9] = fb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var gb:int_ptr = e[7];
  var hb:int = 4;
  var ib:int = gb + hb;
  e[7] = ib;
  var jb:int = gb[0];
  var kb:int_ptr = e[8];
  var lb:int = 4;
  var mb:int = kb + lb;
  e[8] = mb;
  var nb:int = kb[0];
  var ob:int = jb * nb;
  var pb:int = e[5];
  var qb:int = pb + ob;
  e[5] = qb;
  var rb:int_ptr = e[7];
  var sb:int = rb[0];
  var tb:int_ptr = e[8];
  var ub:int = 4;
  var vb:int = tb + ub;
  e[8] = vb;
  var wb:int = tb[0];
  var xb:int = sb * wb;
  var yb:int = e[4];
  var zb:int = yb + xb;
  e[4] = zb;
  var ac:int = e[7];
  var bc:int = -8;
  var cc:int = ac + bc;
  e[6] = cc;
  var dc:int = 0;
  e[9] = dc;
  loop L_d {
    var ec:int = e[9];
    var fc:int = 22;
    var gc:int = ec;
    var hc:int = fc;
    var ic:int = gc < hc;
    var jc:int = 1;
    var kc:int = ic & jc;
    if (eqz(kc)) goto B_c;
    var lc:int_ptr = e[6];
    var mc:int = -4;
    var nc:int = lc + mc;
    e[6] = nc;
    var oc:int = lc[0];
    var pc:int_ptr = e[7];
    var qc:int = -4;
    var rc:int = pc + qc;
    e[7] = rc;
    pc[0] = oc;
    var sc:int = e[9];
    var tc:int = 1;
    var uc:int = sc + tc;
    e[9] = uc;
    continue L_d;
  }
  unreachable;
  label B_c:
  var vc:int = e[11];
  var wc:int_ptr = e[7];
  var xc:int = -4;
  var yc:int = wc + xc;
  e[7] = yc;
  wc[0] = vc;
  var zc:int = e[10];
  var ad:int_ptr = e[7];
  ad[0] = zc;
  var bd:int = e[5];
  var cd:int = e[4];
  var dd:int = bd + cd;
  var ed:int = 15;
  var fd:int = dd >> ed;
  var gd:int_ptr = xl;
  gd[0] = fd;
  var hd:int = e[5];
  var id:int = e[4];
  var jd:int = hd - id;
  var kd:int = jd >> ed;
  var ld:int_ptr = xh;
  ld[0] = kd;
  var md:int = delay_dltx;
  var nd:int = delay_bpl;
  var od:int = filtez(nd, md);
  var pd:int_ptr = szl;
  pd[0] = od;
  var qd:int_ptr = rlt1;
  var rd:int = qd[0];
  var sd:int_ptr = al1;
  var td:int = sd[0];
  var ud:int_ptr = rlt2;
  var vd:int = ud[0];
  var wd:int_ptr = al2;
  var xd:int = wd[0];
  var yd:int = filtep(rd, td, vd, xd);
  var zd:int_ptr = spl;
  zd[0] = yd;
  var ae:int = pd[0];
  var be:int = zd[0];
  var ce:int = ae + be;
  var de:int_ptr = sl;
  de[0] = ce;
  var ee:int = gd[0];
  var fe:int = de[0];
  var ge:int = ee - fe;
  var he:int_ptr = el;
  he[0] = ge;
  var ie:int = he[0];
  var je:int_ptr = detl;
  var ke:int = je[0];
  var le:int = quantl(ie, ke);
  var me:int_ptr = il;
  me[0] = le;
  var ne:int = je[0];
  var oe:int = me[0];
  var pe:int = oe & xc;
  var qe:int = qq4_code4_table;
  var re:int_ptr = qe + pe;
  var se:int = re[0];
  var te:int = ne * se;
  var ue:int = te >> ed;
  var ve:int_ptr = dlt;
  ve[0] = ue;
  var we:int = me[0];
  var xe:int_ptr = nbl;
  var ye:int = xe[0];
  var ze:int = logscl(we, ye);
  xe[0] = ze;
  var af:int = xe[0];
  var bf:int = 8;
  var cf:int = scalel(af, bf);
  je[0] = cf;
  var df:int = ve[0];
  var ef:int = pd[0];
  var ff:int = df + ef;
  var gf:int_ptr = plt;
  gf[0] = ff;
  var hf:int = ve[0];
  upzero(hf, md, nd);
  var if:int = sd[0];
  var jf:int = wd[0];
  var kf:int = gf[0];
  var lf:int_ptr = plt1;
  var mf:int = lf[0];
  var nf:int_ptr = plt2;
  var of:int = nf[0];
  var pf:int = uppol2(if, jf, kf, mf, of);
  wd[0] = pf;
  var qf:int = sd[0];
  var rf:int = wd[0];
  var sf:int = gf[0];
  var tf:int = lf[0];
  var uf:int = uppol1(qf, rf, sf, tf);
  sd[0] = uf;
  var vf:int = de[0];
  var wf:int = ve[0];
  var xf:int = vf + wf;
  var yf:int_ptr = rlt;
  yf[0] = xf;
  var zf:int = qd[0];
  ud[0] = zf;
  var ag:int = yf[0];
  qd[0] = ag;
  var bg:int = lf[0];
  nf[0] = bg;
  var cg:int = gf[0];
  lf[0] = cg;
  var dg:int = delay_dhx;
  var eg:int = delay_bph;
  var fg:int = filtez(eg, dg);
  var gg:int_ptr = szh;
  gg[0] = fg;
  var hg:int_ptr = rh1;
  var ig:int = hg[0];
  var jg:int_ptr = ah1;
  var kg:int = jg[0];
  var lg:int_ptr = rh2;
  var mg:int = lg[0];
  var ng:int_ptr = ah2;
  var og:int = ng[0];
  var pg:int = filtep(ig, kg, mg, og);
  var qg:int_ptr = sph;
  qg[0] = pg;
  var rg:int = qg[0];
  var sg:int = gg[0];
  var tg:int = rg + sg;
  var ug:int_ptr = sh;
  ug[0] = tg;
  var vg:int = ld[0];
  var wg:int = ug[0];
  var xg:int = vg - wg;
  var yg:int_ptr = eh;
  yg[0] = xg;
  var zg:int = yg[0];
  var ah:int = 0;
  var bh:int = zg;
  var ch:int = ah;
  var dh:int = bh >= ch;
  var eh:int = 1;
  var fh:int = dh & eh;
  if (eqz(fh)) goto B_f;
  var gh:int_ptr = ih;
  var hh:int = 3;
  gh[0] = hh;
  goto B_e;
  label B_f:
  var ih:int_ptr = ih;
  var jh:int = 1;
  ih[0] = jh;
  label B_e:
  var kh:int_ptr = deth;
  var lh:int = kh[0];
  var mh:int = 564;
  var nh:int = lh * mh;
  var oh:int = 12;
  var ph:int = nh >> oh;
  e[3] = ph;
  var qh:int_ptr = eh;
  var rh:int = qh[0];
  var sh:int = abs(rh);
  var th:int = e[3];
  var uh:int = sh;
  var vh:int = th;
  var wh:int = uh > vh;
  var xh:int = 1;
  var yh:int = wh & xh;
  if (eqz(yh)) goto B_g;
  var zh:int_ptr = ih;
  var ai:int = zh[0];
  var bi:int = -1;
  var ci:int = ai + bi;
  zh[0] = ci;
  label B_g:
  var di:int_ptr = deth;
  var ei:int = di[0];
  var fi:int_ptr = ih;
  var gi:int = fi[0];
  var hi:int = 2;
  var ii:int = gi << hi;
  var ji:int = qq2_code2_table;
  var ki:int_ptr = ji + ii;
  var li:int = ki[0];
  var mi:int = ei * li;
  var ni:int = 15;
  var oi:int = mi >> ni;
  var pi:int_ptr = dh;
  pi[0] = oi;
  var qi:int = fi[0];
  var ri:int_ptr = nbh;
  var si:int = ri[0];
  var ti:int = logsch(qi, si);
  ri[0] = ti;
  var ui:int = ri[0];
  var vi:int = 10;
  var wi:int = scalel(ui, vi);
  di[0] = wi;
  var xi:int = pi[0];
  var yi:int_ptr = szh;
  var zi:int = yi[0];
  var aj:int = xi + zi;
  var bj:int_ptr = ph;
  bj[0] = aj;
  var cj:int = pi[0];
  var dj:int = delay_bph;
  var ej:int = delay_dhx;
  upzero(cj, ej, dj);
  var fj:int_ptr = ah1;
  var gj:int = fj[0];
  var hj:int_ptr = ah2;
  var ij:int = hj[0];
  var jj:int = bj[0];
  var kj:int_ptr = ph1;
  var lj:int = kj[0];
  var mj:int_ptr = ph2;
  var nj:int = mj[0];
  var oj:int = uppol2(gj, ij, jj, lj, nj);
  hj[0] = oj;
  var pj:int = fj[0];
  var qj:int = hj[0];
  var rj:int = bj[0];
  var sj:int = kj[0];
  var tj:int = uppol1(pj, qj, rj, sj);
  fj[0] = tj;
  var uj:int_ptr = sh;
  var vj:int = uj[0];
  var wj:int = pi[0];
  var xj:int = vj + wj;
  var yj:int_ptr = yh;
  yj[0] = xj;
  var zj:int_ptr = rh1;
  var ak:int = zj[0];
  var bk:int_ptr = rh2;
  bk[0] = ak;
  var ck:int = yj[0];
  zj[0] = ck;
  var dk:int = kj[0];
  mj[0] = dk;
  var ek:int = bj[0];
  kj[0] = ek;
  var fk:int_ptr = il;
  var gk:int = fk[0];
  var hk:int = fi[0];
  var ik:int = 6;
  var jk:int = hk << ik;
  var kk:int = gk | jk;
  var lk:int = 48;
  var mk:int = e + lk;
  stack_pointer = mk;
  return kk;
}

export function filtez(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:{ a:int, b:int, c:int, d:int } = c - d;
  e.d = a;
  e.c = b;
  var f:int_ptr = e.d;
  var g:int = 4;
  var h:int = f + g;
  e.d = h;
  var i:int = f[0];
  var j:int_ptr = e.c;
  var k:int = 4;
  var l:int = j + k;
  e.c = l;
  var m:int = j[0];
  var n:int = i * m;
  e.a = n;
  var o:int = 1;
  e.b = o;
  loop L_b {
    var p:int = e.b;
    var q:int = 6;
    var r:int = p;
    var s:int = q;
    var t:int = r < s;
    var u:int = 1;
    var v:int = t & u;
    if (eqz(v)) goto B_a;
    var w:int_ptr = e.d;
    var x:int = 4;
    var y:int = w + x;
    e.d = y;
    var z:int = w[0];
    var aa:int_ptr = e.c;
    var ba:int = 4;
    var ca:int = aa + ba;
    e.c = ca;
    var da:int = aa[0];
    var ea:int = z * da;
    var fa:int = e.a;
    var ga:int = fa + ea;
    e.a = ga;
    var ha:int = e.b;
    var ia:int = 1;
    var ja:int = ha + ia;
    e.b = ja;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ka:int = e.a;
  var la:int = 14;
  var ma:int = ka >> la;
  return ma;
}

export function filtep(a:int, b:int, c:int, d:int):int {
  var e:int = stack_pointer;
  var f:int = 32;
  var g:int_ptr = e - f;
  g[7] = a;
  g[6] = b;
  g[5] = c;
  g[4] = d;
  var h:int = g[7];
  var i:int = 1;
  var j:int = h << i;
  g[3] = j;
  var k:int = g[6];
  var l:int = g[3];
  var m:int = k * l;
  g[3] = m;
  var n:int = g[5];
  var o:int = 1;
  var p:int = n << o;
  g[2] = p;
  var q:int = g[4];
  var r:int = g[2];
  var s:int = q * r;
  var t:int = g[3];
  var u:int = t + s;
  g[3] = u;
  var v:int = g[3];
  var w:int = 15;
  var x:int = v >> w;
  return x;
}

export function quantl(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[7] = a;
  e[6] = b;
  var f:int = e[7];
  var g:int = abs(f);
  e[3] = g;
  var h:int = 0;
  e[4] = h;
  loop L_b {
    var i:int = e[4];
    var j:int = 30;
    var k:int = i;
    var l:int = j;
    var m:int = k < l;
    var n:int = 1;
    var o:int = m & n;
    if (eqz(o)) goto B_a;
    var p:int = e[4];
    var q:int = 2;
    var r:int = p << q;
    var s:int = decis_levl;
    var t:int_ptr = s + r;
    var u:int = t[0];
    var v:int = e[6];
    var w:int = u * v;
    var x:int = 15;
    var y:int = w >> x;
    e[2] = y;
    var z:int = e[3];
    var aa:int = e[2];
    var ba:int = z;
    var ca:int = aa;
    var da:int = ba <= ca;
    var ea:int = 1;
    var fa:int = da & ea;
    if (eqz(fa)) goto B_c;
    goto B_a;
    label B_c:
    var ga:int = e[4];
    var ha:int = 1;
    var ia:int = ga + ha;
    e[4] = ia;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ja:int = e[7];
  var ka:int = 0;
  var la:int = ja;
  var ma:int = ka;
  var na:int = la >= ma;
  var oa:int = 1;
  var pa:int = na & oa;
  if (eqz(pa)) goto B_e;
  var qa:int = e[4];
  var ra:int = 2;
  var sa:int = qa << ra;
  var ta:int = quant26bt_pos;
  var ua:int_ptr = ta + sa;
  var va:int = ua[0];
  e[5] = va;
  goto B_d;
  label B_e:
  var wa:int = e[4];
  var xa:int = 2;
  var ya:int = wa << xa;
  var za:int = quant26bt_neg;
  var ab:int_ptr = za + ya;
  var bb:int = ab[0];
  e[5] = bb;
  label B_d:
  var cb:int = e[5];
  var db:int = 32;
  var eb:int = e + db;
  stack_pointer = eb;
  return cb;
}

export function logscl(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:int_ptr = c - d;
  e[3] = a;
  e[2] = b;
  var f:int = e[2];
  var g:int = 127;
  var h:int = f * g;
  var i:int = 7;
  var j:int = h >> i;
  e[1] = j;
  var k:int = e[1];
  var l:int = e[3];
  var m:int = -4;
  var n:int = l & m;
  var o:int = wl_code_table;
  var p:int_ptr = o + n;
  var q:int = p[0];
  var r:int = k + q;
  e[2] = r;
  var s:int = e[2];
  var t:int = 0;
  var u:int = s;
  var v:int = t;
  var w:int = u < v;
  var x:int = 1;
  var y:int = w & x;
  if (eqz(y)) goto B_a;
  var z:int = 0;
  e[2] = z;
  label B_a:
  var aa:int = e[2];
  var ba:int = 18432;
  var ca:int = aa;
  var da:int = ba;
  var ea:int = ca > da;
  var fa:int = 1;
  var ga:int = ea & fa;
  if (eqz(ga)) goto B_b;
  var ha:int = 18432;
  e[2] = ha;
  label B_b:
  var ia:int = e[2];
  return ia;
}

export function scalel(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  e[7] = a;
  e[6] = b;
  var f:int = e[7];
  var g:int = 6;
  var h:int = f >> g;
  var i:int = 31;
  var j:int = h & i;
  e[5] = j;
  var k:int = e[7];
  var l:int = 11;
  var m:int = k >> l;
  e[4] = m;
  var n:int = e[5];
  var o:int = 2;
  var p:int = n << o;
  var q:int = ilb_table;
  var r:int_ptr = q + p;
  var s:int = r[0];
  var t:int = e[6];
  var u:int = 1;
  var v:int = t + u;
  var w:int = e[4];
  var x:int = v - w;
  var y:int = s >> x;
  e[3] = y;
  var z:int = e[3];
  var aa:int = 3;
  var ba:int = z << aa;
  return ba;
}

export function upzero(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int_ptr = d - e;
  f[7] = a;
  f[6] = b;
  f[5] = c;
  var g:int = f[7];
  if (g) goto B_b;
  var h:int = 0;
  f[4] = h;
  loop L_d {
    var i:int = f[4];
    var j:int = 6;
    var k:int = i;
    var l:int = j;
    var m:int = k < l;
    var n:int = 1;
    var o:int = m & n;
    if (eqz(o)) goto B_c;
    var p:int = f[5];
    var q:int = f[4];
    var r:int = 2;
    var s:int = q << r;
    var t:int_ptr = p + s;
    var u:int = t[0];
    var v:int = 255;
    var w:int = u * v;
    var x:int = 8;
    var y:int = w >> x;
    var z:int = f[5];
    var aa:int = f[4];
    var ba:int = 2;
    var ca:int = aa << ba;
    var da:int_ptr = z + ca;
    da[0] = y;
    var ea:int = f[4];
    var fa:int = 1;
    var ga:int = ea + fa;
    f[4] = ga;
    continue L_d;
  }
  unreachable;
  label B_c:
  goto B_a;
  label B_b:
  var ha:int = 0;
  f[4] = ha;
  loop L_f {
    var ia:int = f[4];
    var ja:int = 6;
    var ka:int = ia;
    var la:int = ja;
    var ma:int = ka < la;
    var na:int = 1;
    var oa:int = ma & na;
    if (eqz(oa)) goto B_e;
    var pa:int = f[7];
    var qa:int = f[6];
    var ra:int = f[4];
    var sa:int = 2;
    var ta:int = ra << sa;
    var ua:int_ptr = qa + ta;
    var va:int = ua[0];
    var wa:int = pa * va;
    var xa:int = 0;
    var ya:int = wa;
    var za:int = xa;
    var ab:int = ya >= za;
    var bb:int = 1;
    var cb:int = ab & bb;
    if (eqz(cb)) goto B_h;
    var db:int = 128;
    f[3] = db;
    goto B_g;
    label B_h:
    var eb:int = -128;
    f[3] = eb;
    label B_g:
    var fb:int = f[5];
    var gb:int = f[4];
    var hb:int = 2;
    var ib:int = gb << hb;
    var jb:int_ptr = fb + ib;
    var kb:int = jb[0];
    var lb:int = 255;
    var mb:int = kb * lb;
    var nb:int = 8;
    var ob:int = mb >> nb;
    f[2] = ob;
    var pb:int = f[3];
    var qb:int = f[2];
    var rb:int = pb + qb;
    var sb:int = f[5];
    var tb:int = f[4];
    var ub:int = 2;
    var vb:int = tb << ub;
    var wb:int_ptr = sb + vb;
    wb[0] = rb;
    var xb:int = f[4];
    var yb:int = 1;
    var zb:int = xb + yb;
    f[4] = zb;
    continue L_f;
  }
  unreachable;
  label B_e:
  label B_a:
  var ac:int_ptr = f[6];
  var bc:int = ac[4];
  var cc:int_ptr = f[6];
  cc[5] = bc;
  var dc:int_ptr = f[6];
  var ec:int = dc[3];
  var fc:int_ptr = f[6];
  fc[4] = ec;
  var gc:int_ptr = f[6];
  var hc:int = gc[2];
  var ic:int_ptr = f[6];
  ic[3] = hc;
  var jc:int_ptr = f[6];
  var kc:int = jc[1];
  var lc:int_ptr = f[6];
  lc[2] = kc;
  var mc:int_ptr = f[6];
  var nc:int = mc[0];
  var oc:int_ptr = f[6];
  oc[1] = nc;
  var pc:int = f[7];
  var qc:int_ptr = f[6];
  qc[0] = pc;
}

export function uppol2(a:int, b:int, c:int, d:int, e:int):int {
  var f:int = stack_pointer;
  var g:int = 32;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    f - g;
  h.h = a;
  h.g = b;
  h.f = c;
  h.e = d;
  h.d = e;
  var i:int = h.h;
  var j:int = 2;
  var k:int = i << j;
  h.c = k;
  var l:int = h.f;
  var m:int = h.e;
  var n:int = l * m;
  var o:int = 0;
  var p:int = n;
  var q:int = o;
  var r:int = p >= q;
  var s:int = 1;
  var t:int = r & s;
  if (eqz(t)) goto B_a;
  var u:int = h.c;
  var v:int = 0;
  var w:int = v - u;
  h.c = w;
  label B_a:
  var x:int = h.c;
  var y:int = 7;
  var z:int = x >> y;
  h.c = z;
  var aa:int = h.f;
  var ba:int = h.d;
  var ca:int = aa * ba;
  var da:int = 0;
  var ea:int = ca;
  var fa:int = da;
  var ga:int = ea >= fa;
  var ha:int = 1;
  var ia:int = ga & ha;
  if (eqz(ia)) goto B_c;
  var ja:int = h.c;
  var ka:int = 128;
  var la:int = ja + ka;
  h.b = la;
  goto B_b;
  label B_c:
  var ma:int = h.c;
  var na:int = 128;
  var oa:int = ma - na;
  h.b = oa;
  label B_b:
  var pa:int = h.b;
  var qa:int = h.g;
  var ra:int = 127;
  var sa:int = qa * ra;
  var ta:int = 7;
  var ua:int = sa >> ta;
  var va:int = pa + ua;
  h.a = va;
  var wa:int = h.a;
  var xa:int = 12288;
  var ya:int = wa;
  var za:int = xa;
  var ab:int = ya > za;
  var bb:int = 1;
  var cb:int = ab & bb;
  if (eqz(cb)) goto B_d;
  var db:int = 12288;
  h.a = db;
  label B_d:
  var eb:int = h.a;
  var fb:int = -12288;
  var gb:int = eb;
  var hb:int = fb;
  var ib:int = gb < hb;
  var jb:int = 1;
  var kb:int = ib & jb;
  if (eqz(kb)) goto B_e;
  var lb:int = -12288;
  h.a = lb;
  label B_e:
  var mb:int = h.a;
  return mb;
}

export function uppol1(a:int, b:int, c:int, d:int):int {
  var e:int = stack_pointer;
  var f:int = 32;
  var g:int_ptr = e - f;
  g[7] = a;
  g[6] = b;
  g[5] = c;
  g[4] = d;
  var h:int = g[7];
  var i:int = 255;
  var j:int = h * i;
  var k:int = 8;
  var l:int = j >> k;
  g[3] = l;
  var m:int = g[5];
  var n:int = g[4];
  var o:int = m * n;
  var p:int = 0;
  var q:int = o;
  var r:int = p;
  var s:int = q >= r;
  var t:int = 1;
  var u:int = s & t;
  if (eqz(u)) goto B_b;
  var v:int = g[3];
  var w:int = 192;
  var x:int = v + w;
  g[1] = x;
  goto B_a;
  label B_b:
  var y:int = g[3];
  var z:int = 192;
  var aa:int = y - z;
  g[1] = aa;
  label B_a:
  var ba:int = g[6];
  var ca:int = 15360;
  var da:int = ca - ba;
  g[2] = da;
  var ea:int = g[1];
  var fa:int = g[2];
  var ga:int = ea;
  var ha:int = fa;
  var ia:int = ga > ha;
  var ja:int = 1;
  var ka:int = ia & ja;
  if (eqz(ka)) goto B_c;
  var la:int = g[2];
  g[1] = la;
  label B_c:
  var ma:int = g[1];
  var na:int = g[2];
  var oa:int = 0;
  var pa:int = oa - na;
  var qa:int = ma;
  var ra:int = pa;
  var sa:int = qa < ra;
  var ta:int = 1;
  var ua:int = sa & ta;
  if (eqz(ua)) goto B_d;
  var va:int = g[2];
  var wa:int = 0;
  var xa:int = wa - va;
  g[1] = xa;
  label B_d:
  var ya:int = g[1];
  return ya;
}

export function logsch(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:int_ptr = c - d;
  e[3] = a;
  e[2] = b;
  var f:int = e[2];
  var g:int = 127;
  var h:int = f * g;
  var i:int = 7;
  var j:int = h >> i;
  e[1] = j;
  var k:int = e[1];
  var l:int = e[3];
  var m:int = 2;
  var n:int = l << m;
  var o:int = wh_code_table;
  var p:int_ptr = o + n;
  var q:int = p[0];
  var r:int = k + q;
  e[2] = r;
  var s:int = e[2];
  var t:int = 0;
  var u:int = s;
  var v:int = t;
  var w:int = u < v;
  var x:int = 1;
  var y:int = w & x;
  if (eqz(y)) goto B_a;
  var z:int = 0;
  e[2] = z;
  label B_a:
  var aa:int = e[2];
  var ba:int = 22528;
  var ca:int = aa;
  var da:int = ba;
  var ea:int = ca > da;
  var fa:int = 1;
  var ga:int = ea & fa;
  if (eqz(ga)) goto B_b;
  var ha:int = 22528;
  e[2] = ha;
  label B_b:
  var ia:int = e[2];
  return ia;
}

export function decode(a:int) {
  var b:int = stack_pointer;
  var c:int = 48;
  var d:int_ptr = b - c;
  stack_pointer = d;
  d[11] = a;
  var e:int = d[11];
  var f:int = 63;
  var g:int = e & f;
  var h:int_ptr = ilr;
  h[0] = g;
  var i:int = d[11];
  var j:int = 6;
  var k:int = i >> j;
  var l:int_ptr = ih;
  l[0] = k;
  var m:int = dec_del_dltx;
  var n:int = dec_del_bpl;
  var o:int = filtez(n, m);
  var p:int_ptr = dec_szl;
  p[0] = o;
  var q:int_ptr = dec_rlt1;
  var r:int = q[0];
  var s:int_ptr = dec_al1;
  var t:int = s[0];
  var u:int_ptr = dec_rlt2;
  var v:int = u[0];
  var w:int_ptr = dec_al2;
  var x:int = w[0];
  var y:int = filtep(r, t, v, x);
  var z:int_ptr = dec_spl;
  z[0] = y;
  var aa:int = z[0];
  var ba:int = p[0];
  var ca:int = aa + ba;
  var da:int_ptr = dec_sl;
  da[0] = ca;
  var ea:int_ptr = dec_detl;
  var fa:int = ea[0];
  var ga:int = h[0];
  var ha:int = -4;
  var ia:int = ga & ha;
  var ja:int = qq4_code4_table;
  var ka:int_ptr = ja + ia;
  var la:int = ka[0];
  var ma:int = fa * la;
  var na:int = 15;
  var oa:int = ma >> na;
  var pa:int_ptr = dec_dlt;
  pa[0] = oa;
  var qa:int = ea[0];
  var ra:int_ptr = il;
  var sa:int = ra[0];
  var ta:int = 2;
  var ua:int = sa << ta;
  var va:int = qq6_code6_table;
  var wa:int_ptr = va + ua;
  var xa:int = wa[0];
  var ya:int = qa * xa;
  var za:int = ya >> na;
  var ab:int_ptr = dl;
  ab[0] = za;
  var bb:int = ab[0];
  var cb:int = da[0];
  var db:int = bb + cb;
  var eb:int_ptr = rl;
  eb[0] = db;
  var fb:int = h[0];
  var gb:int_ptr = dec_nbl;
  var hb:int = gb[0];
  var ib:int = logscl(fb, hb);
  gb[0] = ib;
  var jb:int = gb[0];
  var kb:int = 8;
  var lb:int = scalel(jb, kb);
  ea[0] = lb;
  var mb:int = pa[0];
  var nb:int = p[0];
  var ob:int = mb + nb;
  var pb:int_ptr = dec_plt;
  pb[0] = ob;
  var qb:int = pa[0];
  upzero(qb, m, n);
  var rb:int = s[0];
  var sb:int = w[0];
  var tb:int = pb[0];
  var ub:int_ptr = dec_plt1;
  var vb:int = ub[0];
  var wb:int_ptr = dec_plt2;
  var xb:int = wb[0];
  var yb:int = uppol2(rb, sb, tb, vb, xb);
  w[0] = yb;
  var zb:int = s[0];
  var ac:int = w[0];
  var bc:int = pb[0];
  var cc:int = ub[0];
  var dc:int = uppol1(zb, ac, bc, cc);
  s[0] = dc;
  var ec:int = da[0];
  var fc:int = pa[0];
  var gc:int = ec + fc;
  var hc:int_ptr = dec_rlt;
  hc[0] = gc;
  var ic:int = q[0];
  u[0] = ic;
  var jc:int = hc[0];
  q[0] = jc;
  var kc:int = ub[0];
  wb[0] = kc;
  var lc:int = pb[0];
  ub[0] = lc;
  var mc:int = dec_del_dhx;
  var nc:int = dec_del_bph;
  var oc:int = filtez(nc, mc);
  var pc:int_ptr = dec_szh;
  pc[0] = oc;
  var qc:int_ptr = dec_rh1;
  var rc:int = qc[0];
  var sc:int_ptr = dec_ah1;
  var tc:int = sc[0];
  var uc:int_ptr = dec_rh2;
  var vc:int = uc[0];
  var wc:int_ptr = dec_ah2;
  var xc:int = wc[0];
  var yc:int = filtep(rc, tc, vc, xc);
  var zc:int_ptr = dec_sph;
  zc[0] = yc;
  var ad:int = zc[0];
  var bd:int = pc[0];
  var cd:int = ad + bd;
  var dd:int_ptr = dec_sh;
  dd[0] = cd;
  var ed:int_ptr = dec_deth;
  var fd:int = ed[0];
  var gd:int = l[0];
  var hd:int = gd << ta;
  var id:int = qq2_code2_table;
  var jd:int_ptr = id + hd;
  var kd:int = jd[0];
  var ld:int = fd * kd;
  var md:int = ld >> na;
  var nd:int_ptr = dec_dh;
  nd[0] = md;
  var od:int = l[0];
  var pd:int_ptr = dec_nbh;
  var qd:int = pd[0];
  var rd:int = logsch(od, qd);
  pd[0] = rd;
  var sd:int = pd[0];
  var td:int = 10;
  var ud:int = scalel(sd, td);
  ed[0] = ud;
  var vd:int = nd[0];
  var wd:int = pc[0];
  var xd:int = vd + wd;
  var yd:int_ptr = dec_ph;
  yd[0] = xd;
  var zd:int = nd[0];
  upzero(zd, mc, nc);
  var ae:int = sc[0];
  var be:int = wc[0];
  var ce:int = yd[0];
  var de:int_ptr = dec_ph1;
  var ee:int = de[0];
  var fe:int_ptr = dec_ph2;
  var ge:int = fe[0];
  var he:int = uppol2(ae, be, ce, ee, ge);
  wc[0] = he;
  var ie:int = sc[0];
  var je:int = wc[0];
  var ke:int = yd[0];
  var le:int = de[0];
  var me:int = uppol1(ie, je, ke, le);
  sc[0] = me;
  var ne:int = dd[0];
  var oe:int = nd[0];
  var pe:int = ne + oe;
  var qe:int_ptr = rh;
  qe[0] = pe;
  var re:int = qc[0];
  uc[0] = re;
  var se:int = qe[0];
  qc[0] = se;
  var te:int = de[0];
  fe[0] = te;
  var ue:int = yd[0];
  de[0] = ue;
  var ve:int = eb[0];
  var we:int = qe[0];
  var xe:int = ve - we;
  var ye:int_ptr = xd;
  ye[0] = xe;
  var ze:int = eb[0];
  var af:int = qe[0];
  var bf:int = ze + af;
  var cf:int_ptr = xs;
  cf[0] = bf;
  var df:int = h;
  d[7] = df;
  var ef:int = accumc;
  d[6] = ef;
  var ff:int = accumd;
  d[4] = ff;
  var gf:int = ye[0];
  var hf:int_ptr = d[7];
  var if:int = 4;
  var jf:int = hf + if;
  d[7] = jf;
  var kf:int = hf[0];
  var lf:int = gf * kf;
  d[9] = lf;
  var mf:int = cf[0];
  var nf:int_ptr = d[7];
  var of:int = 4;
  var pf:int = nf + of;
  d[7] = pf;
  var qf:int = nf[0];
  var rf:int = mf * qf;
  d[8] = rf;
  var sf:int = 0;
  d[10] = sf;
  loop L_b {
    var tf:int = d[10];
    var uf:int = 10;
    var vf:int = tf;
    var wf:int = uf;
    var xf:int = vf < wf;
    var yf:int = 1;
    var zf:int = xf & yf;
    if (eqz(zf)) goto B_a;
    var ag:int_ptr = d[6];
    var bg:int = 4;
    var cg:int = ag + bg;
    d[6] = cg;
    var dg:int = ag[0];
    var eg:int_ptr = d[7];
    var fg:int = 4;
    var gg:int = eg + fg;
    d[7] = gg;
    var hg:int = eg[0];
    var ig:int = dg * hg;
    var jg:int = d[9];
    var kg:int = jg + ig;
    d[9] = kg;
    var lg:int_ptr = d[4];
    var mg:int = 4;
    var ng:int = lg + mg;
    d[4] = ng;
    var og:int = lg[0];
    var pg:int_ptr = d[7];
    var qg:int = 4;
    var rg:int = pg + qg;
    d[7] = rg;
    var sg:int = pg[0];
    var tg:int = og * sg;
    var ug:int = d[8];
    var vg:int = ug + tg;
    d[8] = vg;
    var wg:int = d[10];
    var xg:int = 1;
    var yg:int = wg + xg;
    d[10] = yg;
    continue L_b;
  }
  unreachable;
  label B_a:
  var zg:int_ptr = d[6];
  var ah:int = zg[0];
  var bh:int_ptr = d[7];
  var ch:int = 4;
  var dh:int = bh + ch;
  d[7] = dh;
  var eh:int = bh[0];
  var fh:int = ah * eh;
  var gh:int = d[9];
  var hh:int = gh + fh;
  d[9] = hh;
  var ih:int_ptr = d[4];
  var jh:int = ih[0];
  var kh:int_ptr = d[7];
  var lh:int = kh + ch;
  d[7] = lh;
  var mh:int = kh[0];
  var nh:int = jh * mh;
  var oh:int = d[8];
  var ph:int = oh + nh;
  d[8] = ph;
  var qh:int = d[9];
  var rh:int = 14;
  var sh:int = qh >> rh;
  var th:int_ptr = xout1;
  th[0] = sh;
  var uh:int = d[8];
  var vh:int = uh >> rh;
  var wh:int_ptr = xout2;
  wh[0] = vh;
  var xh:int = d[6];
  var yh:int = -4;
  var zh:int = xh + yh;
  d[5] = zh;
  var ai:int = d[4];
  var bi:int = -4;
  var ci:int = ai + bi;
  d[3] = ci;
  var di:int = 0;
  d[10] = di;
  loop L_d {
    var ei:int = d[10];
    var fi:int = 10;
    var gi:int = ei;
    var hi:int = fi;
    var ii:int = gi < hi;
    var ji:int = 1;
    var ki:int = ii & ji;
    if (eqz(ki)) goto B_c;
    var li:int_ptr = d[5];
    var mi:int = -4;
    var ni:int = li + mi;
    d[5] = ni;
    var oi:int = li[0];
    var pi:int_ptr = d[6];
    var qi:int = -4;
    var ri:int = pi + qi;
    d[6] = ri;
    pi[0] = oi;
    var si:int_ptr = d[3];
    var ti:int = -4;
    var ui:int = si + ti;
    d[3] = ui;
    var vi:int = si[0];
    var wi:int_ptr = d[4];
    var xi:int = -4;
    var yi:int = wi + xi;
    d[4] = yi;
    wi[0] = vi;
    var zi:int = d[10];
    var aj:int = 1;
    var bj:int = zi + aj;
    d[10] = bj;
    continue L_d;
  }
  unreachable;
  label B_c:
  var cj:int_ptr = xd;
  var dj:int = cj[0];
  var ej:int_ptr = d[6];
  ej[0] = dj;
  var fj:int_ptr = xs;
  var gj:int = fj[0];
  var hj:int_ptr = d[4];
  hj[0] = gj;
  var ij:int = 48;
  var jj:int = d + ij;
  stack_pointer = jj;
}

export function reset() {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:int_ptr = a - b;
  var d:int_ptr = dec_detl;
  var e:int = 32;
  d[0] = e;
  var f:int_ptr = detl;
  f[0] = e;
  var g:int_ptr = dec_deth;
  var h:int = 8;
  g[0] = h;
  var i:int_ptr = deth;
  i[0] = h;
  var j:int_ptr = rlt2;
  var k:int = 0;
  j[0] = k;
  var l:int_ptr = rlt1;
  l[0] = k;
  var m:int_ptr = plt2;
  m[0] = k;
  var n:int_ptr = plt1;
  n[0] = k;
  var o:int_ptr = al2;
  o[0] = k;
  var p:int_ptr = al1;
  p[0] = k;
  var q:int_ptr = nbl;
  q[0] = k;
  var r:int_ptr = rh2;
  r[0] = k;
  var s:int_ptr = rh1;
  s[0] = k;
  var t:int_ptr = ph2;
  t[0] = k;
  var u:int_ptr = ph1;
  u[0] = k;
  var v:int_ptr = ah2;
  v[0] = k;
  var w:int_ptr = ah1;
  w[0] = k;
  var x:int_ptr = nbh;
  x[0] = k;
  var y:int_ptr = dec_rlt2;
  y[0] = k;
  var z:int_ptr = dec_rlt1;
  z[0] = k;
  var aa:int_ptr = dec_plt2;
  aa[0] = k;
  var ba:int_ptr = dec_plt1;
  ba[0] = k;
  var ca:int_ptr = dec_al2;
  ca[0] = k;
  var da:int_ptr = dec_al1;
  da[0] = k;
  var ea:int_ptr = dec_nbl;
  ea[0] = k;
  var fa:int_ptr = dec_rh2;
  fa[0] = k;
  var ga:int_ptr = dec_rh1;
  ga[0] = k;
  var ha:int_ptr = dec_ph2;
  ha[0] = k;
  var ia:int_ptr = dec_ph1;
  ia[0] = k;
  var ja:int_ptr = dec_ah2;
  ja[0] = k;
  var ka:int_ptr = dec_ah1;
  ka[0] = k;
  var la:int_ptr = dec_nbh;
  la[0] = k;
  var ma:int = 0;
  c[3] = ma;
  loop L_b {
    var na:int = c[3];
    var oa:int = 6;
    var pa:int = na;
    var qa:int = oa;
    var ra:int = pa < qa;
    var sa:int = 1;
    var ta:int = ra & sa;
    if (eqz(ta)) goto B_a;
    var ua:int = c[3];
    var va:int = 2;
    var wa:int = ua << va;
    var xa:int = delay_dltx;
    var ya:int_ptr = xa + wa;
    var za:int = 0;
    ya[0] = za;
    var ab:int = c[3];
    var bb:int = ab << va;
    var cb:int = delay_dhx;
    var db:int_ptr = cb + bb;
    db[0] = za;
    var eb:int = c[3];
    var fb:int = eb << va;
    var gb:int = dec_del_dltx;
    var hb:int_ptr = gb + fb;
    hb[0] = za;
    var ib:int = c[3];
    var jb:int = ib << va;
    var kb:int = dec_del_dhx;
    var lb:int_ptr = kb + jb;
    var mb:int = 0;
    lb[0] = mb;
    var nb:int = c[3];
    var ob:int = 1;
    var pb:int = nb + ob;
    c[3] = pb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var qb:int = 0;
  c[3] = qb;
  loop L_d {
    var rb:int = c[3];
    var sb:int = 6;
    var tb:int = rb;
    var ub:int = sb;
    var vb:int = tb < ub;
    var wb:int = 1;
    var xb:int = vb & wb;
    if (eqz(xb)) goto B_c;
    var yb:int = c[3];
    var zb:int = 2;
    var ac:int = yb << zb;
    var bc:int = delay_bpl;
    var cc:int_ptr = bc + ac;
    var dc:int = 0;
    cc[0] = dc;
    var ec:int = c[3];
    var fc:int = ec << zb;
    var gc:int = delay_bph;
    var hc:int_ptr = gc + fc;
    hc[0] = dc;
    var ic:int = c[3];
    var jc:int = ic << zb;
    var kc:int = dec_del_bpl;
    var lc:int_ptr = kc + jc;
    lc[0] = dc;
    var mc:int = c[3];
    var nc:int = mc << zb;
    var oc:int = dec_del_bph;
    var pc:int_ptr = oc + nc;
    var qc:int = 0;
    pc[0] = qc;
    var rc:int = c[3];
    var sc:int = 1;
    var tc:int = rc + sc;
    c[3] = tc;
    continue L_d;
  }
  unreachable;
  label B_c:
  var uc:int = 0;
  c[3] = uc;
  loop L_f {
    var vc:int = c[3];
    var wc:int = 24;
    var xc:int = vc;
    var yc:int = wc;
    var zc:int = xc < yc;
    var ad:int = 1;
    var bd:int = zc & ad;
    if (eqz(bd)) goto B_e;
    var cd:int = c[3];
    var dd:int = 2;
    var ed:int = cd << dd;
    var fd:int = tqmf;
    var gd:int_ptr = fd + ed;
    var hd:int = 0;
    gd[0] = hd;
    var id:int = c[3];
    var jd:int = 1;
    var kd:int = id + jd;
    c[3] = kd;
    continue L_f;
  }
  unreachable;
  label B_e:
  var ld:int = 0;
  c[3] = ld;
  loop L_h {
    var md:int = c[3];
    var nd:int = 11;
    var od:int = md;
    var pd:int = nd;
    var qd:int = od < pd;
    var rd:int = 1;
    var sd:int = qd & rd;
    if (eqz(sd)) goto B_g;
    var td:int = c[3];
    var ud:int = 2;
    var vd:int = td << ud;
    var wd:int = accumc;
    var xd:int_ptr = wd + vd;
    var yd:int = 0;
    xd[0] = yd;
    var zd:int = c[3];
    var ae:int = zd << ud;
    var be:int = accumd;
    var ce:int_ptr = be + ae;
    var de:int = 0;
    ce[0] = de;
    var ee:int = c[3];
    var fe:int = 1;
    var ge:int = ee + fe;
    c[3] = ge;
    continue L_h;
  }
  unreachable;
  label B_g:
}

export function adpcm_main() {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:int_ptr = a - b;
  stack_pointer = c;
  reset();
  var d:int = 10;
  c[2] = d;
  var e:int = 0;
  c[3] = e;
  loop L_b {
    var f:int = c[3];
    var g:int = 100;
    var h:int = f;
    var i:int = g;
    var j:int = h < i;
    var k:int = 1;
    var l:int = j & k;
    if (eqz(l)) goto B_a;
    var m:int = c[3];
    var n:int = 2;
    var o:int = m << n;
    var p:int = test_data;
    var q:int_ptr = p + o;
    var r:int = q[0];
    var s:int = 4;
    var t:int_ptr = q + s;
    var u:int = t[0];
    var v:int = encode(r, u);
    var w:int = c[3];
    var x:int = w / n;
    var y:int = x << n;
    var z:int = compressed;
    var aa:int_ptr = z + y;
    aa[0] = v;
    var ba:int = c[3];
    var ca:int = 2;
    var da:int = ba + ca;
    c[3] = da;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ea:int = 0;
  c[3] = ea;
  loop L_d {
    var fa:int = c[3];
    var ga:int = 100;
    var ha:int = fa;
    var ia:int = ga;
    var ja:int = ha < ia;
    var ka:int = 1;
    var la:int = ja & ka;
    if (eqz(la)) goto B_c;
    var ma:int = c[3];
    var na:int = 2;
    var oa:int = ma / na;
    var pa:int = oa << na;
    var qa:int = compressed;
    var ra:int_ptr = qa + pa;
    var sa:int = ra[0];
    decode(sa);
    var ta:int_ptr = xout1;
    var ua:int = ta[0];
    var va:int = c[3];
    var wa:int = va << na;
    var xa:int = result;
    var ya:int_ptr = xa + wa;
    ya[0] = ua;
    var za:int_ptr = xout2;
    var ab:int = za[0];
    var bb:int = c[3];
    var cb:int = bb << na;
    var db:int = cb + xa;
    var eb:int = 4;
    var fb:int_ptr = db + eb;
    fb[0] = ab;
    var gb:int = c[3];
    var hb:int = 2;
    var ib:int = gb + hb;
    c[3] = ib;
    continue L_d;
  }
  unreachable;
  label B_c:
  var jb:int = 16;
  var kb:int = c + jb;
  stack_pointer = kb;
}

export function submain():int {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:{ a:double, b:int, c:int } = a - b;
  stack_pointer = c;
  var d:int = 0;
  c.b = d;
  var e:double = rtclock();
  var f:double_ptr = startTimer;
  f[0] = e;
  adpcm_main();
  var g:int = 0;
  c.c = g;
  loop L_b {
    var h:int = c.c;
    var i:int = 50;
    var j:int = h;
    var k:int = i;
    var l:int = j < k;
    var m:int = 1;
    var n:int = l & m;
    if (eqz(n)) goto B_a;
    var o:int = c.c;
    var p:int = 2;
    var q:int = o << p;
    var r:int = compressed;
    var s:int_ptr = r + q;
    var t:int = s[0];
    var u:int = test_compressed;
    var v:int_ptr = u + q;
    var w:int = v[0];
    var x:int = t;
    var y:int = w;
    var z:int = x != y;
    var aa:int = 1;
    var ba:int = z & aa;
    if (eqz(ba)) goto B_c;
    var ca:int = c.b;
    var da:int = 1;
    var ea:int = ca + da;
    c.b = ea;
    label B_c:
    var fa:int = c.c;
    var ga:int = 1;
    var ha:int = fa + ga;
    c.c = ha;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ia:int = 0;
  c.c = ia;
  loop L_e {
    var ja:int = c.c;
    var ka:int = 100;
    var la:int = ja;
    var ma:int = ka;
    var na:int = la < ma;
    var oa:int = 1;
    var pa:int = na & oa;
    if (eqz(pa)) goto B_d;
    var qa:int = c.c;
    var ra:int = 2;
    var sa:int = qa << ra;
    var ta:int = result;
    var ua:int_ptr = ta + sa;
    var va:int = ua[0];
    var wa:int = test_result;
    var xa:int_ptr = wa + sa;
    var ya:int = xa[0];
    var za:int = va;
    var ab:int = ya;
    var bb:int = za != ab;
    var cb:int = 1;
    var db:int = bb & cb;
    if (eqz(db)) goto B_f;
    var eb:int = c.b;
    var fb:int = 1;
    var gb:int = eb + fb;
    c.b = gb;
    label B_f:
    var hb:int = c.c;
    var ib:int = 1;
    var jb:int = hb + ib;
    c.c = jb;
    continue L_e;
  }
  unreachable;
  label B_d:
  var kb:double = rtclock();
  var lb:double_ptr = endTimer;
  lb[0] = kb;
  var mb:double = lb[0];
  var nb:double_ptr = startTimer;
  var ob:double = nb[0];
  var pb:double = mb - ob;
  c.a = pb;
  var qb:int = 2259;
  var rb:int = memory_base;
  var sb:int = rb + qb;
  printf(sb, c);
  var tb:int = c.b;
  var ub:int = 16;
  var vb:int = c + ub;
  stack_pointer = vb;
  return tb;
}

function rtclock():double {
  var a:int = stack_pointer;
  var b:int = 32;
  var c:int = a - b;
  stack_pointer = c;
  var d:int = 16;
  var e:int = c + d;
  var f:int = e;
  var g:int = 0;
  var h:int = gettimeofday(f, g);
  c[3]:int = h;
  var i:int = c[3]:int;
  if (eqz(i)) goto B_a;
  var j:int = c[3]:int;
  c[0]:int = j;
  var k:int = 2224;
  var l:int = memory_base;
  var m:int = l + k;
  printf(m, c);
  label B_a:
  var n:long = c[2]:long;
  var o:double = f64_convert_i64_s(n);
  var p:int = c[6]:int;
  var q:double = f64_convert_i32_s(p);
  var r:double = 0.000001;
  var s:double = q * r;
  var t:double = s + o;
  var u:int = 32;
  var v:int = c + u;
  stack_pointer = v;
  return t;
}

