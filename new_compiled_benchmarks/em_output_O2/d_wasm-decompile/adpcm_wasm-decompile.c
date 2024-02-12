import memory env_memory;

export import global decis_levl:int;
export import global deth:int;
export import global ah2:int;
export import global rh2:int;
export import global ah1:int;
export import global rh1:int;
export import global delay_dhx:int;
export import global delay_bph:int;
export import global ilb_table:int;
export import global detl:int;
export import global al2:int;
export import global rlt2:int;
export import global al1:int;
export import global rlt1:int;
export import global delay_dltx:int;
export import global delay_bpl:int;
import global memory_base:int;
export import global compressed:int;
export import global accumc:int;
export import global accumd:int;
export import global dec_ph1:int;
export import global dec_ph2:int;
export import global dec_nbh:int;
export import global dec_ah2:int;
export import global dec_rh2:int;
export import global dec_ah1:int;
export import global dec_rh1:int;
export import global dec_deth:int;
export import global dec_del_dhx:int;
export import global dec_del_bph:int;
export import global dec_plt1:int;
export import global dec_plt2:int;
export import global dec_nbl:int;
export import global dec_detl:int;
export import global dec_al2:int;
export import global dec_rlt2:int;
export import global dec_al1:int;
export import global dec_rlt1:int;
export import global dec_del_dltx:int;
export import global dec_del_bpl:int;
export import global ph1:int;
export import global ph2:int;
export import global wh_code_table:int;
export import global nbh:int;
export import global ih:int;
export import global plt1:int;
export import global plt2:int;
export import global nbl:int;
export import global wl_code_table:int;
export import global tqmf:int;
import global stack_pointer:int;
export import global startTimer:int;
export import global result:int;
export import global xout1:int;
export import global xout2:int;
export import global qq2_code2_table:int;
export import global qq4_code4_table:int;
export import global il:int;
export import global quant26bt_pos:int;
export import global quant26bt_neg:int;
export import global endTimer:int;
export import global test_result:int;
export import global test_compressed:int;
export import global test_data:int;
export import global xs:int;
export import global xd:int;
export import global rh:int;
export import global dec_sh:int;
export import global dec_sph:int;
export import global dec_ph:int;
export import global dec_dh:int;
export import global dec_szh:int;
export import global dec_rlt:int;
export import global rl:int;
export import global dl:int;
export import global qq6_code6_table:int;
export import global dec_plt:int;
export import global dec_dlt:int;
export import global dec_spl:int;
export import global dec_sl:int;
export import global dec_szl:int;
export import global ilr:int;
export import global yh:int;
export import global ph:int;
export import global dh:int;
export import global eh:int;
export import global sh:int;
export import global sph:int;
export import global szh:int;
export import global rlt:int;
export import global plt:int;
export import global dlt:int;
export import global el:int;
export import global sl:int;
export import global spl:int;
export import global xh:int;
export import global xl:int;
export import global szl:int;
export global h:int = 0;
global endTimer_1:int = 3816;
global test_result_1:int = 1824;
global test_compressed_1:int = 1424;
global startTimer_1:int = 3808;
global result_1:int = 3408;
global test_data_1:int = 1024;
global compressed_1:int = 3008;
global xout1_1:int = 2988;
global xout2_1:int = 2992;
global accumc_1:int = 2896;
global accumd_1:int = 2944;
global dec_ph1_1:int = 2868;
global dec_ph2_1:int = 2872;
global xs_1:int = 2884;
global xd_1:int = 2880;
global rh_1:int = 2876;
global dec_nbh_1:int = 2860;
global dec_sh_1:int = 2848;
global dec_sph_1:int = 2844;
global dec_ah2_1:int = 2840;
global dec_rh2_1:int = 2836;
global dec_ah1_1:int = 2832;
global dec_rh1_1:int = 2828;
global dec_ph_1:int = 2864;
global dec_dh_1:int = 2856;
global dec_deth_1:int = 2852;
global dec_szh_1:int = 2824;
global dec_del_dhx_1:int = 2800;
global dec_del_bph_1:int = 2768;
global dec_plt1_1:int = 2748;
global dec_plt2_1:int = 2752;
global dec_rlt_1:int = 2756;
global dec_nbl_1:int = 2740;
global rl_1:int = 2736;
global dl_1:int = 2732;
global qq6_code6_table_1:int = 160;
global dec_plt_1:int = 2744;
global dec_dlt_1:int = 2728;
global dec_detl_1:int = 2724;
global dec_spl_1:int = 2716;
global dec_sl_1:int = 2720;
global dec_al2_1:int = 2712;
global dec_rlt2_1:int = 2708;
global dec_al1_1:int = 2704;
global dec_rlt1_1:int = 2700;
global dec_szl_1:int = 2696;
global dec_del_dltx_1:int = 2672;
global dec_del_bpl_1:int = 2640;
global ilr_1:int = 2632;
global ph1_1:int = 2620;
global ph2_1:int = 2624;
global yh_1:int = 2628;
global wh_code_table_1:int = 1008;
global nbh_1:int = 2612;
global ph_1:int = 2616;
global dh_1:int = 2608;
global qq2_code2_table_1:int = 992;
global deth_1:int = 2604;
global ih_1:int = 2600;
global eh_1:int = 2596;
global sh_1:int = 2592;
global sph_1:int = 2588;
global ah2_1:int = 2584;
global rh2_1:int = 2580;
global ah1_1:int = 2576;
global rh1_1:int = 2572;
global szh_1:int = 2568;
global delay_dhx_1:int = 2544;
global delay_bph_1:int = 2512;
global plt1_1:int = 2492;
global plt2_1:int = 2496;
global rlt_1:int = 2500;
global ilb_table_1:int = 480;
global nbl_1:int = 2484;
global wl_code_table_1:int = 416;
global plt_1:int = 2488;
global dlt_1:int = 2480;
global qq4_code4_table_1:int = 96;
global il_1:int = 2476;
global quant26bt_pos_1:int = 736;
global quant26bt_neg_1:int = 864;
global decis_levl_1:int = 608;
global detl_1:int = 2472;
global el_1:int = 2468;
global sl_1:int = 2464;
global spl_1:int = 2460;
global al2_1:int = 2456;
global rlt2_1:int = 2452;
global al1_1:int = 2448;
global rlt1_1:int = 2444;
global xh_1:int = 2372;
global xl_1:int = 2368;
global szl_1:int = 2440;
global delay_dltx_1:int = 2416;
global delay_bpl_1:int = 2384;
global tqmf_1:int = 2272;

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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function abs(a:int):int {
  var b:int;
  return (a ^ (b = a >> 31)) - b;
}

export function encode(a:int, b:{ a:int, b:int, c:int, d:int, e:int, f:int }):int {
  var c:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int, r:int, s:int, t:int, u:int, v:int, w:int, x:int } = 
    tqmf;
  var d:int = c.x;
  var f:int = c.v;
  var g:int_ptr = c.t;
  var h:int_ptr = c.r;
  var e:int = c.p;
  var i:int_ptr = c.n;
  var k:int = c.l;
  var l:int = c.j;
  var m:int = c.h;
  var n:int = c.f;
  var o:int = c.d;
  var p:int = c.b;
  var q:int = c.w;
  var r:int = c.u;
  var s:int = c.s;
  var t:int = c.q;
  var u:int = c.o;
  var v:int = c.m;
  var w:int = c.k;
  var x:int = c.i;
  var y:int = c.g;
  var z:int = c.e;
  var aa:int = c.c;
  var ba:int = c.a;
  memmove(c + 8, c, 88);
  c.a = b;
  c.b = a;
  c = delay_bpl;
  a = c.a;
  b = delay_dltx;
  var j:int = b.a;
  szl[0]:int =
    (j = c.b * b.b + a * j + c.c * b.c + c.d * b.d + c.e * b.e +
         (b = b.f) * (c = c.f) >>
         14);
  xl[0]:int =
    (a = 
       (c = o * 212 + p * -44 + n * -624 + m * 1448 + l * -3220 + k * 15504 +
            i * 3804 +
            e * -840 +
            (h << 7) +
            g * 48 +
            f * -44 +
            d * 12) +
       (b = aa * -44 + ba * 12 + z * 48 + (y << 7) + x * -840 + w * 3804 +
            v * 15504 +
            u * -3220 +
            t * 1448 +
            s * -624 +
            r * 212 +
            q * -44) >>
       15);
  xh[0]:int = (k = b - c >> 15);
  spl[0]:int =
    (c = ((c = rlt2[0]:int) * (e = al2[0]:int) +
          (f = al1[0]:int) * (h = rlt1[0]:int) <<
          1) >>
         15);
  sl[0]:int = (i = c + j);
  el[0]:int = (g = a - i);
  a = (g ^ (c = g >> 31)) - c;
  b = detl[0]:int;
  c = 0;
  loop L_a {
    if (decis_levl[c]:int * b >> 15 >= a) {
      d = c;
      goto B_b;
    }
    if (a <= decis_levl[d = c + 1]:int * b >> 15) goto B_b;
    if (a <= decis_levl[d = c + 2]:int * b >> 15) goto B_b;
    d = 30;
    c = c + 3;
    if (c != 30) continue L_a;
    label B_b:
  }
  il[0]:int =
    (a = 
       ((d << 2) + select_if(quant26bt_pos, c = quant26bt_neg, g >= 0))[0]:int);
  dlt[0]:int =
    (c = (c = ((d = a & -4) + qq4_code4_table)[0]:int) * b >> 15);
  plt[0]:int = (b = c + j);
  g = nbl;
  g[0] =
    (d = 
       select_if(
         18432,
         d = 
           select_if(d = (d = (wl_code_table + d)[0]:int) + (g[0] * 127 >> 7),
                     0,
                     d > 0),
         d >= 18432));
  detl[0]:int =
    ((g = (ilb_table + (d >> 4 & 124))[0]:int) >> 9 - (d >> 11)) << 3;
  upzero(c, delay_dltx, d = delay_bpl);
  rlt[0]:int = (c = c + i);
  rlt2[0]:int = h;
  rlt1[0]:int = c;
  c = plt2;
  d = c.a;
  c.a = (j = (g = plt1)[0]);
  g[0] = b;
  al2[0]:int =
    (c = 
       select_if(
         -12288,
         c = select_if(12288,
                       c = (e * 127 >> 7) + select_if(-128, 128, b * d < 0) +
                           (select_if(c = f << 2, 0 - c, b = b * j < 0) >> 7),
                       c >= 12288),
         c <= -12288));
  al1[0]:int =
    select_if(b = select_if(b = (f * 255 >> 8) + select_if(-192, 192, b),
                            d = 15360 - c,
                            b < d),
              c = c - 15360,
              b > c);
  c = delay_bph;
  d = c.a;
  b = delay_dhx;
  f = b.a;
  szh[0]:int =
    (f = (g = c.b) * (j = b.b) + d * f + (h = c.c) * (e = b.c) +
         (i = c.d) * (l = b.d) +
         (m = c.e) * (n = b.e) +
         (b = b.f) * (c = c.f) >>
         14);
  sph[0]:int =
    (b = ((b = rh2[0]:int) * (j = ah2[0]:int) +
          (c = ah1[0]:int) * (g = rh1[0]:int) <<
          1) >>
         15);
  sh[0]:int = (h = b + f);
  eh[0]:int = (b = k - h);
  ih[0]:int = (d = select_if(3, 1, b >= 0));
  if ((b ^ (e = b >> 31)) - e > (b = deth[0]:int) * 564 >> 12) {
    ih[0]:int = (d = d - 1)
  }
  dh[0]:int =
    (b = (i = ((e = d << 2) + qq2_code2_table)[0]:int) * b >> 15);
  ph[0]:int = (f = b + f);
  i = nbh;
  i[0] =
    (e = 
       select_if(
         22528,
         e = 
           select_if(e = (wh_code_table + e)[0]:int + (i[0] * 127 >> 7), 0, e > 0),
         e >= 22528));
  deth[0]:int =
    ((i = (ilb_table + (e >> 4 & 124))[0]:int) >> 11 - (e >> 11)) << 3;
  upzero(b, delay_dhx, e = delay_bph);
  yh[0]:int = (b = b + h);
  rh2[0]:int = g;
  rh1[0]:int = b;
  b = ph2;
  g = b.a;
  b.a = (e = (h = ph1)[0]);
  h[0] = f;
  ah2[0]:int =
    (b = 
       select_if(
         -12288,
         b = select_if(12288,
                       b = (j * 127 >> 7) + select_if(-128, 128, f * g < 0) +
                           (select_if(b = c << 2, 0 - b, f = e * f < 0) >> 7),
                       b >= 12288),
         b <= -12288));
  ah1[0]:int =
    select_if(c = select_if(c = (c * 255 >> 8) + select_if(-192, 192, f),
                            f = 15360 - b,
                            c < f),
              b = b - 15360,
              b < c);
  return d << 6 | a;
}

export function upzero(a:int, b:int, c:{ a:int, b:int, c:int, d:int, e:int, f:int }) {
  if (a) {
    c.a = (c.a * 255 >> 8) + select_if(128, -128, b[0]:int * a >= 0);
    c.b = (c.b * 255 >> 8) + select_if(128, -128, b[1]:int * a >= 0);
    c.c = (c.c * 255 >> 8) + select_if(128, -128, b[2]:int * a >= 0);
    c.d = (c.d * 255 >> 8) + select_if(128, -128, b[3]:int * a >= 0);
    c.e = (c.e * 255 >> 8) + select_if(128, -128, b[4]:int * a >= 0);
    c.f = (c.f * 255 >> 8) + select_if(128, -128, b[5]:int * a >= 0);
    goto B_a;
  }
  c.a = c.a * 255 >> 8;
  c.b = c.b * 255 >> 8;
  c.c = c.c * 255 >> 8;
  c.d = c.d * 255 >> 8;
  c.e = c.e * 255 >> 8;
  c.f = c.f * 255 >> 8;
  label B_a:
  b[5]:int = b[4]:int;
  b[3]:long@4 = b[2]:long@4;
  b[1]:long@4 = b[0]:long@4;
  b[0]:int = a;
}

export function filtez(a:{ a:int, b:int, c:int, d:int, e:int, f:int }, b:{ a:int, b:int, c:int, d:int, e:int, f:int }):int {
  return 
    b.b * a.b + b.a * a.a + b.c * a.c + b.d * a.d + b.e * a.e + b.f * a.f >>
    14
}

export function filtep(a:int, b:int, c:int, d:int):int {
  return (c * d + a * b << 1) >> 15
}

export function quantl(a:int, b:int):int {
  var c:int;
  var d:int;
  var e:int = (a ^ (c = a >> 31)) - c;
  c = 0;
  loop L_a {
    if (decis_levl[c]:int * b >> 15 >= e) {
      d = c;
      goto B_b;
    }
    if (e <= decis_levl[d = c + 1]:int * b >> 15) goto B_b;
    if (e <= decis_levl[d = c + 2]:int * b >> 15) goto B_b;
    d = 30;
    c = c + 3;
    if (c != 30) continue L_a;
    label B_b:
  }
  return 
    ((d << 2) + select_if(quant26bt_pos, c = quant26bt_neg, a >= 0))[0]:int;
}

export function logscl(a:int, b:int):int {
  return 
    select_if(
      18432,
      b = select_if(b = (wl_code_table + (a & -4))[0]:int + (b * 127 >> 7),
                    0,
                    b > 0),
      b >= 18432)
}

export function scalel(a:int, b:int):int {
  return 
    ((ilb_table + (a >> 4 & 124))[0]:int >> b - (a >> 11) + 1) << 3
}

export function uppol2(a:int, b:int, c:int, d:int, e:int):int {
  return 
    select_if(
      -12288,
      c = select_if(12288,
                    c = (b * 127 >> 7) + select_if(-128, 128, c * e < 0) +
                        (select_if(a = a << 2, 0 - a, c * d < 0) >> 7),
                    c >= 12288),
      c <= -12288)
}

export function uppol1(a:int, b:int, c:int, d:int):int {
  c = (a * 255 >> 8) + select_if(-192, 192, c * d < 0);
  c = select_if(c, d = 15360 - b, c < d);
  return select_if(c, b = b - 15360, b < c);
}

export function logsch(a:int, b:int):int {
  return 
    select_if(
      22528,
      b = select_if(b = wh_code_table[a]:int + (b * 127 >> 7), 0, b > 0),
      b >= 22528)
}

export function decode(a:int_ptr) {
  var r:int;
  var d:int_ptr;
  var j:int;
  var k:int;
  var g:int;
  var h:int;
  var o:int_ptr;
  var l:int;
  var p:int_ptr;
  var i:int;
  var q:int_ptr;
  var m:int;
  var ma:int;
  var na:int;
  ih[0]:int = (r = a >> 6);
  ilr[0]:int = a & 63;
  var b:int = dec_del_bpl;
  var e:int = b[0]:int;
  var c:int = dec_del_dltx;
  var f:int = c[0]:int;
  dec_szl[0]:int =
    (f = (d = b[1]:int) * (j = c[1]:int) + e * f +
         (k = b[2]:int) * (g = c[2]:int) +
         (h = b[3]:int) * (o = c[3]:int) +
         (l = b[4]:int) * (p = c[4]:int) +
         (i = b[5]:int) * (q = c[5]:int) >>
         14);
  dec_sl[0]:int =
    (k = (g = ((j = (i = dec_al2)[0]:int) * (k = (p = dec_rlt2)[0]) +
               (e = (l = dec_al1)[0]:int) * (d = (o = dec_rlt1)[0]) <<
               1) >>
              15) +
         f);
  dec_spl[0]:int = g;
  dec_dlt[0]:int =
    (a = (a = ((h = a & 60) + qq4_code4_table)[0]:int) *
         (g = (q = dec_detl)[0]) >>
         15);
  dec_plt[0]:int = (f = a + f);
  dl[0]:int = (g = (m = qq6_code6_table[m = il[0]:int]:int) * g >> 15);
  rl[0]:int = (g = g + k);
  m = dec_nbl;
  m[0]:int =
    (h = 
       select_if(
         18432,
         h = select_if(h = (wl_code_table + h)[0]:int + (m[0]:int * 127 >> 7),
                       0,
                       h > 0),
         h >= 18432));
  q[0] =
    (((m = ilb_table) + (h >> 4 & 124))[0]:int >> 9 - (h >> 11)) << 3;
  upzero(a, c, b);
  dec_rlt[0]:int = (b = a + k);
  p[0] = d;
  o[0] = b;
  b = dec_plt2;
  c = b[0]:int;
  b[0]:int = (d = (a = dec_plt1)[0]);
  a[0] = f;
  i[0]:int =
    (b = 
       select_if(
         -12288,
         b = select_if(12288,
                       b = (j * 127 >> 7) + select_if(-128, 128, c * f < 0) +
                           (select_if(b = e << 2, 0 - b, c = d * f < 0) >> 7),
                       b >= 12288),
         b <= -12288));
  l[0]:int =
    select_if(c = select_if(c = (e * 255 >> 8) + select_if(-192, 192, c),
                            a = 15360 - b,
                            a > c),
              b = b - 15360,
              b < c);
  b = dec_del_bph;
  a = b[0]:int;
  c = dec_del_dhx;
  e = c[0]:int;
  dec_szh[0]:int =
    (d = (f = b[1]:int) * (d = c[1]:int) + a * e +
         (j = b[2]:int) * (k = c[2]:int) +
         (h = b[3]:int) * (o = c[3]:int) +
         (l = b[4]:int) * (p = c[4]:int) +
         (i = b[5]:int) * (q = c[5]:int) >>
         14);
  dec_dh[0]:int =
    (a = (a = ((h = r << 2) + qq2_code2_table)[0]:int) *
         (e = (r = dec_deth)[0]:int) >>
         15);
  dec_ph[0]:int = (e = a + d);
  dec_sph[0]:int =
    (i = ((k = (q = dec_ah2)[0]) * (i = (p = dec_rh2)[0]) +
          (f = (l = dec_ah1)[0]:int) * (j = (o = dec_rh1)[0]) <<
          1) >>
         15);
  dec_sh[0]:int = (i = d + i);
  d = dec_nbh;
  d[0] =
    (d = 
       select_if(
         22528,
         d = 
           select_if(d = (wh_code_table + h)[0]:int + (d[0] * 127 >> 7), 0, d > 0),
         d >= 22528));
  r[0]:int = ((m + (d >> 4 & 124))[0]:int >> 11 - (d >> 11)) << 3;
  upzero(a, c, b);
  rh[0]:int = (b = a + i);
  p[0] = j;
  o[0] = b;
  xd[0]:int = (a = g - b);
  xs[0]:int = (d = b + g);
  b = dec_ph2;
  c = b[0]:int;
  b[0]:int = (g = (j = dec_ph1)[0]:int);
  j[0]:int = e;
  q[0] =
    (b = 
       select_if(
         -12288,
         b = select_if(12288,
                       b = (k * 127 >> 7) + select_if(-128, 128, c * e < 0) +
                           (select_if(b = f << 2, 0 - b, c = e * g < 0) >> 7),
                       b >= 12288),
         b <= -12288));
  l[0]:int =
    select_if(c = select_if(c = (f * 255 >> 8) + select_if(-192, 192, c),
                            e = 15360 - b,
                            c < e),
              b = b - 15360,
              b < c);
  c = accumc;
  var t:int = c + 36;
  var u:int = t[0]:int;
  var v:int = c + 32;
  var w:int = v[0]:int;
  var x:int = c + 28;
  var y:int = x[0]:int;
  var z:int = c + 24;
  var aa:int = z[0]:int;
  var ba:int = c + 20;
  var ca:int = ba[0]:int;
  var da:int = c + 16;
  var ea:int = da[0]:int;
  var fa:int = c + 12;
  var ga:int = fa[0]:int;
  var ha:int = c + 8;
  var ia:int = ha[0]:int;
  var ja:int = c[10]:int;
  var ka:int = c[1]:int;
  var la:int = c[0]:int;
  xout2[0]:int =
    (e = (b = accumd)[0]:int) * 212 + d * -44 + (f = b[1]:int) * -624 +
    (k = (j = b + 8)[0]:int) * 1448 +
    (h = (g = b + 12)[0]:int) * -3220 +
    (o = (r = b + 16)[0]:int) * 15504 +
    (p = (l = b + 20)[0]:int) * 3804 +
    (q = (i = b + 24)[0]:int) * -840 +
    ((m = b + 28)[0]:int << 7) +
    (ma = b + 32)[0]:int * 48 +
    (na = b + 36)[0]:int * -44 +
    b[10]:int * 12 >>
    14;
  xout1[0]:int =
    la * -44 + a * 12 + ka * 48 + (ia << 7) + ga * -840 + ea * 3804 +
    ca * 15504 +
    aa * -3220 +
    y * 1448 +
    w * -624 +
    u * 212 +
    ja * -44 >>
    14;
  var n:long = j[0]:long;
  b[1]:long@4 = b[0]:long;
  var s:long = r[0]:long;
  g[0]:long@4 = n;
  n = i[0]:long;
  l[0]:long@4 = s;
  na[0]:long@4 = ma[0]:long;
  m[0]:long@4 = n;
  n = ha[0]:long;
  c[1]:long@4 = c[0]:long;
  s = da[0]:long;
  fa[0]:long@4 = n;
  n = z[0]:long;
  ba[0]:long@4 = s;
  s = v[0]:long;
  x[0]:long@4 = n;
  t[0]:long@4 = s;
  c[0]:int = a;
  b[0]:int = d;
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
  var a:{ a:long, b:long, c:long, d:long, e:long, f:int } = delay_dltx;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = delay_dhx;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = dec_del_dltx;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = dec_del_dhx;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = delay_bpl;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = delay_bph;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = dec_del_bpl;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = dec_del_bph;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  memset(tqmf, 0, 96);
  a = accumc;
  a.f = 0;
  a.e = 0L;
  a.d = 0L;
  a.c = 0L;
  a.b = 0L;
  a.a = 0L;
  a = accumd;
  a.a = 0L;
  a.b = 0L;
  a.c = 0L;
  a.d = 0L;
  a.e = 0L;
  a.f = 0;
}

export function adpcm_main() {
  var c:int;
  var d:int;
  var b:int;
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
  var a:{ a:long, b:long, c:long, d:long, e:long, f:int } = delay_dltx;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = delay_dhx;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = dec_del_dltx;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = dec_del_dhx;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = delay_bpl;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = delay_bph;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = dec_del_bpl;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  a = dec_del_bph;
  a.c = 0L;
  a.a = 0L;
  a.b = 0L;
  memset(tqmf, 0, 96);
  a = accumc;
  a.f = 0;
  a.e = 0L;
  a.d = 0L;
  a.c = 0L;
  a.b = 0L;
  a.a = 0L;
  a = accumd;
  a.a = 0L;
  a.b = 0L;
  a.c = 0L;
  a.d = 0L;
  a.e = 0L;
  a.f = 0;
  a = 0;
  loop L_a {
    (compressed + (a << 1))[0]:int =
      encode(((c = test_data) + (d = a << 2))[0]:int, (c + (d | 4))[0]:int);
    c = a < 98;
    a = a + 2;
    if (c) continue L_a;
  }
  loop L_b {
    decode((compressed + (b << 1))[0]:int);
    a = result;
    (a + (c = b << 2))[0]:int = xout1[0]:int;
    (a + (c | 4))[0]:int = xout2[0]:int;
    a = b < 98;
    b = b + 2;
    if (a) continue L_b;
  }
}

export function submain():int {
  var d:int;
  var f:int;
  var c:int;
  var h:int;
  var e:int;
  var g:int;
  var i:double;
  var a:int = stack_pointer + -64;
  stack_pointer = a;
  var b:int = gettimeofday(a + 48, 0);
  if (b) {
    a[8]:int = b;
    iprintf(memory_base + 2224, a + 32);
  }
  startTimer[0]:double =
    f64_convert_i32_s(b = a[14]:int) * 0.000001 +
    f64_convert_i64_s(a[6]:long);
  adpcm_main();
  b = 0;
  loop L_b {
    e = test_compressed;
    g = (e + (f = (d = b << 2) | 4))[0]:int;
    c = c + (((h = compressed) + d)[0]:int != (d + e)[0]:int) +
        (g != (f + h)[0]:int);
    b = b + 2;
    if (b != 50) continue L_b;
  }
  b = 0;
  loop L_c {
    e = test_result;
    g = (e + (f = (d = b << 2) | 4))[0]:int;
    c = c + (((h = result) + d)[0]:int != (d + e)[0]:int) +
        (g != (f + h)[0]:int);
    b = b + 2;
    if (b != 100) continue L_c;
  }
  b = gettimeofday(a + 48, 0);
  if (b) {
    a[4]:int = b;
    iprintf(memory_base + 2224, a + 16);
  }
  endTimer[0]:double =
    (i = f64_convert_i32_s(b = a[14]:int) * 0.000001 +
         f64_convert_i64_s(a[6]:long));
  a[0]:double = i - startTimer[0]:double;
  small_printf(memory_base + 2259, a);
  stack_pointer = a - -64;
  return c;
}

