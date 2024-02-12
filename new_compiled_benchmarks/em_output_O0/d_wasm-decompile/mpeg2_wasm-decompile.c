import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global ld_Rdbfr:int;
export import global inRdbfr:int;
export import global ld_Rdptr:int;
export import global System_Stream_Flag:int;
export import global ld_Rdmax:int;
export import global ld_Bfr:int;
export import global ld_Incnt:int;
export import global MVtab0:int;
export import global MVtab1:int;
export import global MVtab2:int;
export import global startTimer:int;
export import global evalue:int;
export import global inmvfs:int;
export import global inPMV:int;
export import global outmvfs:int;
export import global outPMV:int;
export import global endTimer:int;
global ld_Rdbfr_1:int = 4304;
global inRdbfr_1:int = 0;
global ld_Rdptr_1:int = 6352;
global System_Stream_Flag_1:int = 6356;
global ld_Rdmax_1:int = 6360;
global ld_Bfr_1:int = 6364;
global ld_Incnt_1:int = 6368;
global MVtab0_1:int = 4192;
global MVtab1_1:int = 4208;
global MVtab2_1:int = 4224;
global startTimer_1:int = 6376;
global evalue_1:int = 6384;
global inmvfs_1:int = 4128;
global inPMV_1:int = 4096;
global outmvfs_1:int = 4176;
global outPMV_1:int = 4144;
global endTimer_1:int = 6392;
export global out_ld_Rdptr:int = 2048;

data data(offset: memory_base) =
  "\00hx0H \a0\c0\c0@8\f8\f8X\88\e0\c8\d0\b0H`(\b8\a0  x\a8@ H\b8\d8\f0\00"
  "\d8\c0@p0\a0\98(\b0  \f8\c8h\18\d8\f0\80\b0H\e8\f0\b80x0\c0@\a8\a0\80\a0"
  "\a0\e8\d0hx\e8x\08\b8x\c8@\a0\c8\e0@\a8(xPh\10\00\08x\90\88P\90H\18\80"
  "\d8\d8\18P\10@ \c8p\80\90X\18px hH\b0\18\10\b88\18\c8\98\9800\88P\f0\08"
  "\d8\c8\f0 \a8p08(\c0\e8 0\e8\e8 \00X\d0\18\f0Hx`\f8\88\e0\d0\08\b8\c0\90"
  "X0\90\88p\c0`\f0\c8\a0\b8\a0\180\d0\98\80\b8\b8\90\90\a8\f0\90\a0\a800"
  "\18\c8\90x\d08`H0XP\c8\f8\d0\f8(\88p \08\08P\c0( \e08\c0\c888\e8\c8Px\08"
  "\b8\d8\e8P\a8\80 \d8\88h\f8\a8\f8\08\c0\a8\c08\f0\c0\d0\88x0\e0p\a8P\c0"
  "`Pxx\10x0\a8\a8\a0\e0\80\18H\18\f8\f0\98\a0\d08\c08X\80\c0\88\80\d0p(@"
  "\c0 \b0P8\a8\d0\18\a8\a8\f8\f0\88` 8\b8\08\88\10\00\b0(\00 h\a08X\e88\00"
  "\f0\b8\e8X \b0\00\d8\f8\b8(\10P\08\d0@\e0H(HH\90P\90x\88@\b8\a0\88\100"
  "h\e8hhH\d0H\c0\b8(8\e8H\a0P\98\e8\f8 \e0(\00\a8\18`p\a0\98\08 \a0h\d0 "
  "\18\f8\08\f8\90x\10\c0X\98\b0\c8\a0\98\a0`\a8\f0\10\f8\b0\18\d8\008P\f8"
  "`\08\80 \c0h0\d0\f0\b8\80P8\c0\00p\b00`8\188\18 \18`P\00@p0\18X8\98\e0"
  "\a0\c0\b8H\f8\80\08\08hh\c80\88\88\d0\90P(\88`\08\d0\a0h\a0P@`\b0\90\08"
  "8XX\d0x0\f0\f0`\f8\c0h\80\f8\18hH@x\f8\c00\c0 P\90\10P`p\b88P\f8\e8\00"
  "(\f88\c0 \c0`\f80\88\e0P\00\c0\80hx\d0\80\00\b0\d8\08\c0`\10(\b8` HP\c0"
  "hh\88\00\10\a0\18h0\08\18\98x\80H \b0phx\10 \90\a08\f0\00\e8\b8\18\10\d0"
  "\c8\f0\c8\c8hp\18\d0\80\a8\f8@\98x@\e0\80\d0x\d8\10\980\90\f0P\90\e00\a0"
  "\c0\f8\00\80x\80\a0\e8\a8\d0pph\b8\08\c08\b0(`@Hh\d8\98\d8P\98\b8\d8 8"
  " @\f0\98\f0\a8\88\08\e8\a8\80XH\80\08\c00xp \90\d0\c0\d8\10\b0\a8\a0\a8"
  "X\888\08@\00P\d8h@PX\d0@P\c8\18x\a0PH8\d8\188H(H\008\888\c8H\88XH\88\f0"
  "\00\b0\b0\98\c0\f8\e0\f0H\08p\e8\c8x\10\00(0@H \88h\98\10\f0\b8P\00\98"
  " \b0\80x\00\a0(@p(P0\90`\a8\00\98H\b8\88X\98\b80X\98`\d8\f0\b8\c8\88@h"
  "p\e8\00\d0\b0\80p\f8\90\f8xp\00x\f0XXX\08\f8P\08@\d8\f088\90p\d0\90H\10"
  "\a0\88\d8\b0p8\08\a8hH(\b0X(x\18(8h(\a0\e8\a0\18\90\90\e8x\90p`\88\b0\08"
  "\80p\b8`x@p\00\b8PH\b8P\90Hx\c8\a8 \18\00\90H\18\f8\18\98H\80\00\08\e0"
  " HH0p\e8\10\f0\18@ \e8x\a8\c8\98p\08\90\00xp\00p\90H\a0\18\d8p\80\e0\98"
  "h\88(\00\10\900\f8\880@X\98\d0\f8\10p\e0\b8\a8(\a8@\f8\90h\c8\90\98\10"
  "\a8\c0\f0`H\88\d8\88\00 \c0p\f0\a0\f8\b8\100\e8X\a0\10h\b0\90\88\18\f0"
  "\b8\a0\08\10 8\b0\90\a8\a88XXh\f8\b8` \80X\e0\f0 x\d8\88\08HPhx\98 `\e8"
  "P\e8\18P\c8\d0\d8\b8\108(\d8\d0\80x\10\10P\c8\90h\a0H\18\88\b0 \c0x\88"
  "P\10X\d0\a0\10\e8(\18\90\d0 \10X\c00\b0\98\18\a0 P\18\f0P\a0\98\a0\80P"
  "X(\b8\d0\900\c8\c80p\90h\e0\90\e0\c8\08\e0\f0 \98\e8\10\08P\b8(\b8\f8@"
  "\08\e8\10XX\08x\800\f0X@hh\f8`\f0\c0\98\d08\98\f0\88\08\d8\18p\a8X\88P"
  "\e0\88\98(\18\f8\d8\98\88`\e0@P88H\08\18@\90\18\d0\d8\80x`\a8x\98p\e8\88"
  "PH`\98\d0H\d8@xx0\e8H\b8\b00\e8\c8\b8xHp\80\f8\a0\a8\d8\98P\b0p0\98p@("
  "\c8\e8P\a08\d8\c0\a8H(@\d0 \e0\f0\18h\e8\f0\a8\18\f8 P\98\90\a0px`\f0@"
  "\a0\f8\f8\980pX\80\e8\f0\f0\e8\a8x \98\b0h\10P\98\f0\e0\80\100 \d8\08h"
  "\f8\b8\d0\d8xP\d0\808p(\b8\10\e0\a8\98\f88\90\a8\e0\08\a8P\88\980`\00\b8"
  "X\c0\18\10\80\00\b0\98(`H\c0\00 \80\18\f00\f8\b0x\10\a8\e0H\08\c80\b0p"
  "\e0\a0\08\98@\10\10\f0\e0@\90\80P\b8(\e8\c8p\f8\18p\b0\80\808(\98\18\b8"
  "xhH@\c80\e0\008\e8 \f0\b8hh \c0\c8\c8@\98H\d8\d8P\00P\00\00\a0x(\88\f0"
  " x\98\d88p\10\18\08xh\c0\90\b0\08\10`h\a8P\c0\e8pp8X\b0\f0 \b0\f8P\b0\18"
  "\e0\c0\08\b0\a8\10\e8\f8\10\10h\80\e8\00 \f0p \b8\b88\e8P\90\10H\f0\d0"
  "@\b0\f0\10\88\10P\c0\18H\d88P\d8 \90H\18@\f8\00\e0H \88\e8\f0H X\80h\10"
  "\08 \c0\e0\08\98\f8\e0\00\b00\10h\d8\b0\18\f0\c8P\f8\d0\80\c8H\08\98\80"
  "PxP\98\e8\c8\a8X\10\b0\e8(H\d0\e8p\f0pP\b0\b0\10Hx \b8\e0P\18\b0\00\d0"
  "\108p\10x\a0\18\d8\80\88\c0\98\f8x\a08\c0\e0\00\88pp\08\08\b8\a8X\a0x\a0"
  "\f0\a8 (\a8X\08\10\18hh0\f8\88H\90\80\a0\d8X\f0x\e8H\c0\c8\f8\c00\f0h\d0"
  "(h\10\80P\e0\e088x(\18\b0\10\b8\18\b0\e0\a8\10\b8h\88\c8\a8\d0x\c8\e0("
  "\d0\10p\a0\c0\e0@(\e8x\18\e8\a8PX\90hH\c0p\00ph\e0\e8\a0p\d0\b0\d88\e0"
  "\e0\a0h8\b0\d8\c0\18\d0\08(8\f8\08x\b8\80(\a88\b8\c0\88`H\d8\08@H8\10\b0"
  "\90\10\80\b0\88\d0x\10\b8\e0\a0\d8\90X\d0\c8\90`\98\c8\e0\d0\f0x\08h\b8"
  "p\a8\c8pH\00\c0\00(x\88p(\988\90 \e0\f0 \c08\c8\10\88h\c0\c0\00\00\00\08"
  "\e8h\f0X\c0\08\a8\d8\d0\b8\e0\f0H\98H\a8\b8\b0\d80\90P \b8\d0p\a0XX\08"
  "\90\90x\980\c8\a8p\08\a0\d8\f0\80h\80\90\f8@\a8\88\f0\a08\88\d8P8\c0 @"
  "\80P  `X\c8\98H\a0\10\80\c8\a0\90p\10p\988\888\d8\08\18\c0\90\b0\c80H("
  "H\f0xx\a0P\98\90\d8\e0\98(\90\a0X\b8\b8\c0\80\00\c8Hp\d0\f8\98\00\98\08"
  "(\10\a8\98@\b0X\18\e8\88 \98\e8\d0\c0\f0\88\00\e8\c8\08\d8h\b8@\c0\08`"
  "\b8x\d0P\10@\88\88H\08p\b8\f8x\88\088\e8\d0`\10@\a8p0 \b8\e0HX\80\b8H\a8"
  "\e0\d8\a0\e8@\a80\98@\98\10\c8\a88\90\c0@x\a8\08\80\d8\10\08h \80`\a0X"
  "\88`8\10\808X\10\d0\c8\18`\f0 \e8\c0h\a8(\00\c0(\c8`\b8\08H\d8h\e8p\f8"
  "\08\08\f8\c0\98 \00\a8\e8P\f8@\08\18P `\f0\e80P\10\90\c8\100X(p\e8X\a8"
  "8\a0\e8\10\80\f80P\c8\a8\98H\d8\e0H\d0\98\c0\00\e00\88\a8`\10\98H\b8\d8"
  "\f0\00\d8\c0@p0\a0\98(\b0  \f8\c8h\18\d8\f0\80\b0H\e8\f0\b80x0\c0@\a8\a0"
  "\80\a0\a0\e8\d0hx\e8x\08\b8x\c8@\a0\c8\e0@\a8(xPh\10\00\08x\90\88P\90H"
  "\18\80\d8\d8\18P\10@ \c8p\80\90X\18px hH\b0\18\10\b88\18\c8\98\9800\88"
  "P\f0\08\d8\c8\f0 \a8p08(\c0\e8 0\e8\e8 \00X\d0\18\f0Hx`\f8\88\e0\d0\08"
  "\b8\c0\90X0\90\88p\c0`\f0\c8\a0\b8\a0\180\d0\98\80\b8\b8\90\90\a8\f0\90"
  "\a0\a800\18\c8\90x\d08`H0XP\c8\f8\d0\f8(\88p \08\08P\c0( \e08\c0\c888\e8"
  "\c8Px\08\b8\d8\e8P\a8\80 \d8\88h\f8\a8\f8\08\c0\a8\c08\f0\c0\d0\88x0\e0"
  "p\a8P\c0`Pxx\10x0\a8\a8\a0\e0\80\18H\18\f8\f0\98\a0\d08\c08X\80\c0\88\80"
  "\d0p(@\c0 \b0P8\a8\d0\18\a8\a8\f8\f0\88` 8\b8\08\88\10\00\b0(\00 h\a08"
  "X\e88\00\f0\b8\e8X \b0\00\d8\f8\b8(\10P\08\d0@\e0H(HH\90P\90x\88@\b8\a0"
  "\88\100h\e8hhH\d0H\c0\b8(8\e8H\a0P\98\e8\f8 \e0(\00\a8\18`p\a0\98\08 \a0"
  "h\d0 \18\f8\08\f8\90x\10\c0X\98\b0\c8\a0\98\a0`\a8\f0\10\f8\b0\18\d8\00"
  "8P\f8`\08\80 \c0h0\d0\f0\b8\80P8\c0\00p\b00`8\188\18 \18`P\00@p0\18X8\98"
  "\e0\a0\c0\b8H\f8\80\08\08hh\c80\88\88\d0\90P(\88`\08\d0\a0h\a0P@`\b0\90"
  "\088XX\d0x0\f0\f0`\f8\c0h\80\f8\18hH@x\f8\c00\c0 P\90\10P`p\b88P\f8\e8"
  "\00(\f88\c0 \c0`\f80\88\e0P\00\c0\80hx\d0\80\00\b0\d8\08\c0`\10(\b8` H"
  "P\c0hh\88\00\10\a0\18h0\08\18\98x\80H \b0phx\10 \90\a08\f0\00\e8\b8\18"
  "\10\d0\c8\f0\c8\c8hp\18\d0\80\a8\f8@\98x@\e0\80\d0x\d8\10\980\90\f0P\90"
  "\e00\a0\c0\f8\00\80x\80\a0\e8\a8\d0pph\b8\08\c08\b0(`@Hh\d8\98\d8P\98\b8"
  "\d8 8 @\f0\98\f0\a8\88\08\e8\a8\80XH\80\08\c00xp \90\d0\c0\d8\10\b0\a8"
  "\a0\a8X\888\08@\00P\d8h@PX\d0@P\c8\18x\a0PH8\d8\188H(H\008\888\c8H\88X"
  "H\88\f0\00\b0\b0\98\c0\f8\e0\f0H\08p\e8\c8x\10\00(0@H \88h\98\10\f0\b8"
  "P\00\98 \b0\80x\00\a0(@p(P0\90`\a8\00\98H\b8\88X\98\b80X\98`\d8\f0\b8\c8"
  "\88@hp\e8\00\d0\b0\80p\f8\90\f8xp\00x\f0XXX\08\f8P\08@\d8\f088\90p\d0\90"
  "H\10\a0\88\d8\b0p8\08\a8hH(\b0X(x\18(8h(\a0\e8\a0\18\90\90\e8x\90p`\88"
  "\b0\08\80p\b8`x@p\00\b8PH\b8P\90Hx\c8\a8 \18\00\90H\18\f8\18\98H\80\00"
  "\08\e0 HH0p\e8\10\f0\18@ \e8x\a8\c8\98p\08\90\00xp\00p\90H\a0\18\d8p\80"
  "\e0\98h\88(\00\10\900\f8\880@X\98\d0\f8\10p\e0\b8\a8(\a8@\f8\90h\c8\90"
  "\98\10\a8\c0\f0`H\88\d8\88\00 \c0p\f0\a0\f8\b8\100\e8X\a0\10h\b0\90\88"
  "\18\f0\b8\a0\08\10 8\b0\90\a8\a88XXh\f8\b8` \80X\e0\f0 x\d8\88\08HPhx\98"
  " `\e8P\e8\18P\c8\d0\d8\b8\108(\d8\d0\80x\10\10P\c8\90h\a0H\18\88\b0 \c0"
  "x\88P\10X\d0\a0\10\e8(\18\90\d0 \10X\c00\b0\98\18\a0 P\18\f0P\a0\98\a0"
  "\80PX(\b8\d0\900\c8\c80p\90h\e0\90\e0\c8\08\e0\f0 \98\e8\10\08P\b8(\b8"
  "\f8@\08\e8\10XX\08x\800\f0X@hh\f8`\f0\c0\98\d08\98\f0\88\08\d8\18p\a8X"
  "\88P\e0\88\98(\18\f8\d8\98\88`\e0@P88H\08\18@\90\18\d0\d8\80x`\a8x\98p"
  "\e8\88PH`\98\d0H\d8@xx0\e8H\b8\b00\e8\c8\b8xHp\80\f8\a0\a8\d8\98P\b0p0"
  "\98p@(\c8\e8P\a08\d8\c0\a8H(@\d0 \e0\f0\18h\e8\f0\a8\18\f8 P\98\90\a0p"
  "x`\f0@\a0\f8\f8\980pX\80\e8\f0\f0\e8\a8x \98\b0h\10P\98\f0\e0\80\100 \d8"
  "\08h\f8\b8\d0\d8xP\d0\808p(\b8\10\e0\a8\98\f88\90\a8\e0\08\a8P\88\980`"
  "\00\b8X\c0\18\10\80\00\b0\98(`H\c0\00 \80\18\f00\f8\b0x\10\a8\e0H\08\c8"
  "0\b0p\e0\a0\08\98@\10\10\f0\e0@\90\80P\b8(\e8\c8p\f8\18p\b0\80\808(\98"
  "\18\b8xhH@\c80\e0\008\e8 \f0\b8hh \c0\c8\c8@\98H\d8\d8P\00P\00\00\a0x("
  "\88\f0 x\98\d88p\10\18\08xh\c0\90\b0\08\10`h\a8P\c0\e8pp8X\b0\f0 \b0\f8"
  "P\b0\18\e0\c0\08\b0\a8\10\e8\f8\10\10h\80\e8\00 \f0p \b8\b88\e8P\90\10"
  "H\f0\d0@\b0\f0\10\88\10P\c0\18H\d88P\d8 \90H\18@\f8\00\e0H \88\e8\f0H "
  "X\80h\10\08 \c0\e0\08\98\f8\e0\00\b00\10h\d8\b0\18\f0\c8P\f8\d0\80\c8H"
  "\08\98\80PxP\98\e8\c8\a8X\10\b0\e8(H\d0\e8p\f0pP\b0\b0\10Hx \b8\e0P\18"
  "\b0\00\d0\108p\10x\a0\18\d8\80\88\c0\98\f8x\a08\c0\e0\00\88pp\08\08\b8"
  "\a8X\a0x\a0\f0\a8 (\a8X\08\10\18hh0\f8\88H\90\80\a0\d8X\f0x\e8H\c0\c8\f8"
  "\c00\f0h\d0(h\10\80P\e0\e088x(\18\b0\10\b8\18\b0\e0\a8\10\b8h\88\c8\a8"
  "\d0x\c8\e0(\d0\10p\a0\c0\e0@(\e8x\18\e8\a8PX\90hH\c0p\00ph\e0\e8\a0p\d0"
  "\b0\d88\e0\e0\a0h8\b0\d8\c0\18\d0\08(8\f8\08x\b8\80(\a88\b8\c0\88`H\d8"
  "\08@H8\10\b0\90\10\80\b0\88\d0x\10\b8\e0\a0\d8\90X\d0\c8\90`\98\c8\e0\d0"
  "\f0x\08h\b8p\a8\c8pH\00\c0\00(x\88p(\988\90 \e0\f0 \c08\c8\10\88h\c0\c0"
  "\00\00\00\08\e8h\f0X\c0\08\a8\d8\d0\b8\e0\f0H\98H\a8\b8\b0\d80\90P \b8"
  "\d0p\a0XX\08\90\90x\980\c8\a8p\08\a0\d8\f0\80h\80\90\f8@\a8\88\f0\a08\88"
  "\d8P8\c0 @\80P  `X\c8\98H\a0\10\80\c8\a0\90p\10p\988\888\d8\08\18\c0\90"
  "\b0\c80H(H\f0xx\a0P\98\90\d8\e0\98(\90\a0X\b8\b8\c0\80\00\c8Hp\d0\f8\98"
  "\00\98\08(\10\a8\98@\b0X\18\e8\88 \98\e8\d0\c0\f0\88\00\e8\c8\08\d8h\b8"
  "@\c0\08`\b8x\d0P\10@\88\88H\08p\b8\f8x\88\088\e8\d0`\10@\a8p0 \b8\e0HX"
  "\80\b8H\a8\e0\d8\a0\e8@\a80\98@\98\10\c8\a88\90\c0@x\a8\08\80\d8\10\08"
  "h \80`\a0X\88`8\10\808X\10\d0\c8\18`\f0 \e8\c0h\a8(\00\c0(\c8`\b8\08H\d8"
  "h\e8p\f8\08\08\f8\c0\98 \00\a8\e8P\f8@\08\18P `\f0\e80P\10\90\c8\100X("
  "p\e8X\a88\a0\e8\10\80\f80P\c8\a8\98H\d8\e0H\d0\98\c0\00\e00\88\a8`\10\98"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\e0\e3\e3\e3\00\00\00\00"
  "\00\00\00\00\00\00-\00\00\00\cf\00\00\00F\00\00\00)\00\00\00\04\00\00\00"
  "\b4\00\00\00x\00\00\00\d8\00\00\00\e8\00\00\00\c8\00\00\00 \00\00\00\f0"
  "\00\00\00\1e\06\00\00\ce\00\00\00F\00\00\00)\00\00\00\1e\06\00\00\ce\00"
  "\00\00x\00\00\00\d8\00\00\00\00\00\00\00\c8\00\00\00\00\00\00\00\f0\00"
  "\00\00\ff\00\03\03\02\02\02\02\01\01\01\01\01\01\01\01\ff\00\ff\00\ff\00"
  "\07\06\06\06\05\06\04\05\04\05\10\09\0f\09\0e\09\0d\09\0c\09\0b\09\0a\08"
  "\0a\08\09\08\09\08\08\08\08\08Error return from gettimeofday: %d\00%0."
  "6f\0a\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
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
  "\00";

import function printf(a:int, b:int):int;

import function gettimeofday(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function read(a:int, b:int, c:int):int {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int_ptr = d - e;
  f[7] = a;
  f[6] = b;
  f[5] = c;
  var g:int = f[7];
  f[4] = g;
  var h:int = f[6];
  f[3] = h;
  var i:int = f[5];
  f[2] = i;
  loop L_b {
    var j:int = f[2];
    var k:int = -1;
    var l:int = j + k;
    f[2] = l;
    var m:int = 0;
    var n:int = j;
    var o:int = m;
    var p:int = n > o;
    var q:int = 1;
    var r:int = p & q;
    if (eqz(r)) goto B_a;
    var s:ubyte_ptr = f[3];
    var t:int = s[0];
    var u:byte_ptr = f[4];
    u[0] = t;
    var v:int = f[4];
    var w:int = 1;
    var x:int = v + w;
    f[4] = x;
    var y:int = f[3];
    var z:int = 1;
    var aa:int = y + z;
    f[3] = aa;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ba:int = f[5];
  return ba;
}

export function Fill_Buffer() {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:int_ptr = a - b;
  stack_pointer = c;
  var d:int = ld_Rdbfr;
  c[2] = d;
  var e:int = inRdbfr;
  var f:int = 2048;
  var g:int = read(d, e, f);
  c[3] = g;
  var h:int_ptr = ld_Rdptr;
  h[0] = d;
  var i:int_ptr = System_Stream_Flag;
  var j:int = i[0];
  if (eqz(j)) goto B_a;
  var k:int_ptr = ld_Rdmax;
  var l:int = k[0];
  var m:int = -2048;
  var n:int = l + m;
  k[0] = n;
  label B_a:
  var o:int = c[3];
  var p:int = 2048;
  var q:int = o;
  var r:int = p;
  var s:int = q < r;
  var t:int = 1;
  var u:int = s & t;
  if (eqz(u)) goto B_b;
  var v:int = c[3];
  var w:int = 0;
  var x:int = v;
  var y:int = w;
  var z:int = x < y;
  var aa:int = 1;
  var ba:int = z & aa;
  if (eqz(ba)) goto B_c;
  var ca:int = 0;
  c[3] = ca;
  label B_c:
  loop L_e {
    var da:int = c[3];
    var ea:int = 3;
    var fa:int = da & ea;
    if (eqz(fa)) goto B_d;
    var ga:int = c[3];
    var ha:int = 1;
    var ia:int = ga + ha;
    c[3] = ia;
    var ja:int = ld_Rdbfr;
    var ka:byte_ptr = ja + ga;
    var la:int = 0;
    ka[0] = la;
    continue L_e;
  }
  unreachable;
  label B_d:
  loop L_g {
    var ma:int = c[3];
    var na:int = 2048;
    var oa:int = ma;
    var pa:int = na;
    var qa:int = oa < pa;
    var ra:int = 1;
    var sa:int = qa & ra;
    if (eqz(sa)) goto B_f;
    var ta:int = c[3];
    var ua:int = 1;
    var va:int = ta + ua;
    c[3] = va;
    var wa:int = ld_Rdbfr;
    var xa:byte_ptr = wa + ta;
    var ya:int = 0;
    xa[0] = ya;
    var za:int = c[3];
    var ab:int = za + ua;
    c[3] = ab;
    var bb:byte_ptr = wa + za;
    bb[0] = ya;
    var cb:int = c[3];
    var db:int = cb + ua;
    c[3] = db;
    var eb:byte_ptr = wa + cb;
    eb[0] = ua;
    var fb:int = c[3];
    var gb:int = fb + ua;
    c[3] = gb;
    var hb:byte_ptr = wa + fb;
    var ib:int = 183;
    hb[0] = ib;
    continue L_g;
  }
  unreachable;
  label B_f:
  label B_b:
  var jb:int = 16;
  var kb:int = c + jb;
  stack_pointer = kb;
}

export function Show_Bits(a:int):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int_ptr = b - c;
  d[3] = a;
  var e:int_ptr = ld_Bfr;
  var f:int = e[0];
  var g:int = d[3];
  var h:int = 32;
  var i:int = h - g;
  var j:int = 31;
  var k:int = i & j;
  var l:int = f >> k;
  return l;
}

export function Get_Bits1():int {
  var a:int = 1;
  var b:int = Get_Bits(a);
  return b;
}

export function Get_Bits(a:int):int {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int_ptr = b - c;
  stack_pointer = d;
  d[3] = a;
  var e:int = d[3];
  var f:int = Show_Bits(e);
  d[2] = f;
  var g:int = d[3];
  Flush_Buffer(g);
  var h:int = d[2];
  var i:int = 16;
  var j:int = d + i;
  stack_pointer = j;
  return h;
}

export function Flush_Buffer(a:int) {
  var b:int = stack_pointer;
  var c:int = 16;
  var d:int_ptr = b - c;
  stack_pointer = d;
  d[3] = a;
  var e:int = d[3];
  var f:int_ptr = ld_Bfr;
  var g:int = f[0];
  var h:int = g << e;
  f[0] = h;
  var i:int = d[3];
  var j:int_ptr = ld_Incnt;
  var k:int = j[0];
  var l:int = k - i;
  j[0] = l;
  d[2] = l;
  var m:int = d[2];
  var n:int = 24;
  var o:int = m;
  var p:int = n;
  var q:int = o <= p;
  var r:int = 1;
  var s:int = q & r;
  if (eqz(s)) goto B_a;
  var t:int_ptr = ld_Rdptr;
  var u:int = t[0];
  var v:int = ld_Rdbfr;
  var w:int = 2044;
  var x:int = v + w;
  var y:int = u < x;
  var z:int = 1;
  var aa:int = y & z;
  if (eqz(aa)) goto B_c;
  loop L_d {
    var ba:int_ptr = ld_Rdptr;
    var ca:ubyte_ptr = ba[0];
    var da:int = 1;
    var ea:int = ca + da;
    ba[0] = ea;
    var fa:int = ca[0];
    var ga:int = d[2];
    var ha:int = 24;
    var ia:int = ha - ga;
    var ja:int = fa << ia;
    var ka:int_ptr = ld_Bfr;
    var la:int = ka[0];
    var ma:int = la | ja;
    ka[0] = ma;
    var na:int = d[2];
    var oa:int = 8;
    var pa:int = na + oa;
    d[2] = pa;
    var qa:int = d[2];
    var ra:int = 24;
    var sa:int = qa;
    var ta:int = ra;
    var ua:int = sa <= ta;
    var va:int = 1;
    var wa:int = ua & va;
    if (wa) continue L_d;
  }
  goto B_b;
  label B_c:
  loop L_e {
    var xa:int_ptr = ld_Rdptr;
    var ya:int = xa[0];
    var za:int = ld_Rdbfr;
    var ab:int = 2048;
    var bb:int = za + ab;
    var cb:int = ya >= bb;
    var db:int = 1;
    var eb:int = cb & db;
    if (eqz(eb)) goto B_f;
    Fill_Buffer();
    label B_f:
    var fb:int_ptr = ld_Rdptr;
    var gb:ubyte_ptr = fb[0];
    var hb:int = 1;
    var ib:int = gb + hb;
    fb[0] = ib;
    var jb:int = gb[0];
    var kb:int = d[2];
    var lb:int = 24;
    var mb:int = lb - kb;
    var nb:int = jb << mb;
    var ob:int_ptr = ld_Bfr;
    var pb:int = ob[0];
    var qb:int = pb | nb;
    ob[0] = qb;
    var rb:int = d[2];
    var sb:int = 8;
    var tb:int = rb + sb;
    d[2] = tb;
    var ub:int = d[2];
    var vb:int = 24;
    var wb:int = ub;
    var xb:int = vb;
    var yb:int = wb <= xb;
    var zb:int = 1;
    var ac:int = yb & zb;
    if (ac) continue L_e;
  }
  label B_b:
  var bc:int = d[2];
  var cc:int_ptr = ld_Incnt;
  cc[0] = bc;
  label B_a:
  var dc:int = 16;
  var ec:int = d + dc;
  stack_pointer = ec;
}

export function Get_motion_code():int {
  var la:int;
  var bc:int;
  var rd:int;
  var a:int = stack_pointer;
  var b:int = 16;
  var c:int_ptr = a - b;
  stack_pointer = c;
  var d:int = Get_Bits1();
  if (eqz(d)) goto B_b;
  var e:int = 0;
  c[3] = e;
  goto B_a;
  label B_b:
  var f:int = 9;
  var g:int = Show_Bits(f);
  c[2] = g;
  var h:int = 64;
  var i:int = g;
  var j:int = h;
  var k:int = i >= j;
  var l:int = 1;
  var m:int = k & l;
  if (eqz(m)) goto B_c;
  var n:int = c[2];
  var o:int = 6;
  var p:int = n >> o;
  c[2] = p;
  var q:int = c[2];
  var r:int = 1;
  var s:int = q << r;
  var t:int = MVtab0;
  var u:ubyte_ptr = t + s;
  var v:int = u[1];
  var w:int = 24;
  var x:int = v << w;
  var y:int = x >> w;
  Flush_Buffer(y);
  var z:int = Get_Bits1();
  if (eqz(z)) goto B_e;
  var aa:int = c[2];
  var ba:int = 1;
  var ca:int = aa << ba;
  var da:int = MVtab0;
  var ea:ubyte_ptr = da + ca;
  var fa:int = ea[0];
  var ga:int = 24;
  var ha:int = fa << ga;
  var ia:int = ha >> ga;
  var ja:int = 0;
  var ka:int = ja - ia;
  la = ka;
  goto B_d;
  label B_e:
  var ma:int = c[2];
  var na:int = 1;
  var oa:int = ma << na;
  var pa:int = MVtab0;
  var qa:ubyte_ptr = pa + oa;
  var ra:int = qa[0];
  var sa:int = 24;
  var ta:int = ra << sa;
  var ua:int = ta >> sa;
  la = ua;
  label B_d:
  var va:int = la;
  c[3] = va;
  goto B_a;
  label B_c:
  var wa:int = c[2];
  var xa:int = 24;
  var ya:int = wa;
  var za:int = xa;
  var ab:int = ya >= za;
  var bb:int = 1;
  var cb:int = ab & bb;
  if (eqz(cb)) goto B_f;
  var db:int = c[2];
  var eb:int = 3;
  var fb:int = db >> eb;
  c[2] = fb;
  var gb:int = c[2];
  var hb:int = 1;
  var ib:int = gb << hb;
  var jb:int = MVtab1;
  var kb:ubyte_ptr = jb + ib;
  var lb:int = kb[1];
  var mb:int = 24;
  var nb:int = lb << mb;
  var ob:int = nb >> mb;
  Flush_Buffer(ob);
  var pb:int = Get_Bits1();
  if (eqz(pb)) goto B_h;
  var qb:int = c[2];
  var rb:int = 1;
  var sb:int = qb << rb;
  var tb:int = MVtab1;
  var ub:ubyte_ptr = tb + sb;
  var vb:int = ub[0];
  var wb:int = 24;
  var xb:int = vb << wb;
  var yb:int = xb >> wb;
  var zb:int = 0;
  var ac:int = zb - yb;
  bc = ac;
  goto B_g;
  label B_h:
  var cc:int = c[2];
  var dc:int = 1;
  var ec:int = cc << dc;
  var fc:int = MVtab1;
  var gc:ubyte_ptr = fc + ec;
  var hc:int = gc[0];
  var ic:int = 24;
  var jc:int = hc << ic;
  var kc:int = jc >> ic;
  bc = kc;
  label B_g:
  var lc:int = bc;
  c[3] = lc;
  goto B_a;
  label B_f:
  var mc:int = c[2];
  var nc:int = 12;
  var oc:int = mc - nc;
  c[2] = oc;
  var pc:int = 0;
  var qc:int = oc;
  var rc:int = pc;
  var sc:int = qc < rc;
  var tc:int = 1;
  var uc:int = sc & tc;
  if (eqz(uc)) goto B_i;
  var vc:int = 0;
  c[3] = vc;
  goto B_a;
  label B_i:
  var wc:int = c[2];
  var xc:int = 1;
  var yc:int = wc << xc;
  var zc:int = MVtab2;
  var ad:ubyte_ptr = zc + yc;
  var bd:int = ad[1];
  var cd:int = 24;
  var dd:int = bd << cd;
  var ed:int = dd >> cd;
  Flush_Buffer(ed);
  var fd:int = Get_Bits1();
  if (eqz(fd)) goto B_k;
  var gd:int = c[2];
  var hd:int = 1;
  var id:int = gd << hd;
  var jd:int = MVtab2;
  var kd:ubyte_ptr = jd + id;
  var ld:int = kd[0];
  var md:int = 24;
  var nd:int = ld << md;
  var od:int = nd >> md;
  var pd:int = 0;
  var qd:int = pd - od;
  rd = qd;
  goto B_j;
  label B_k:
  var sd:int = c[2];
  var td:int = 1;
  var ud:int = sd << td;
  var vd:int = MVtab2;
  var wd:ubyte_ptr = vd + ud;
  var xd:int = wd[0];
  var yd:int = 24;
  var zd:int = xd << yd;
  var ae:int = zd >> yd;
  rd = ae;
  label B_j:
  var be:int = rd;
  c[3] = be;
  label B_a:
  var ce:int = c[3];
  var de:int = 16;
  var ee:int = c + de;
  stack_pointer = ee;
  return ce;
}

export function Get_dmvector():int {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:int_ptr = a - b;
  stack_pointer = c;
  var d:int = 1;
  var e:int = Get_Bits(d);
  if (eqz(e)) goto B_b;
  var f:int = 1;
  var g:int = Get_Bits(f);
  var h:int = -1;
  var i:int = 1;
  var j:int = select_if(h, i, g);
  c[3] = j;
  goto B_a;
  label B_b:
  var k:int = 0;
  c[3] = k;
  label B_a:
  var l:int = c[3];
  var m:int = 16;
  var n:int = c + m;
  stack_pointer = n;
  return l;
}

export function motion_vectors(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int) {
  var k:int = stack_pointer;
  var l:int = 48;
  var m:int_ptr = k - l;
  stack_pointer = m;
  m[11] = a;
  m[10] = b;
  m[9] = c;
  m[8] = d;
  m[7] = e;
  m[6] = f;
  m[5] = g;
  m[4] = h;
  m[3] = i;
  m[2] = j;
  var n:int = m[7];
  var o:int = 1;
  var p:int = n;
  var q:int = o;
  var r:int = p == q;
  var s:int = 1;
  var t:int = r & s;
  if (eqz(t)) goto B_b;
  var u:int = m[6];
  if (u) goto B_c;
  var v:int = m[3];
  if (v) goto B_c;
  var w:int = 1;
  var x:int = Get_Bits(w);
  var y:int = m[9];
  var z:int = m[8];
  var aa:int = 2;
  var ba:int = z << aa;
  var ca:int_ptr = y + ba;
  ca[0] = x;
  var da:int = m[9];
  var ea:int = 8;
  var fa:int = da + ea;
  var ga:int = m[8];
  var ha:int = 2;
  var ia:int = ga << ha;
  var ja:int_ptr = fa + ia;
  ja[0] = x;
  label B_c:
  var ka:int = m[11];
  var la:int = m[8];
  var ma:int = 3;
  var na:int = la << ma;
  var oa:int = ka + na;
  var pa:int = m[10];
  var qa:int = m[5];
  var ra:int = m[4];
  var sa:int = m[3];
  var ta:int = m[2];
  var ua:int = 0;
  motion_vector(oa, pa, qa, ra, sa, ta, ua);
  var va:int = m[11];
  var wa:int = m[8];
  var xa:int = 3;
  var ya:int = wa << xa;
  var za:int_ptr = va + ya;
  var ab:int = za[0];
  var bb:int = m[11];
  var cb:int = 16;
  var db:int = bb + cb;
  var eb:int = m[8];
  var fb:int = 3;
  var gb:int = eb << fb;
  var hb:int_ptr = db + gb;
  hb[0] = ab;
  var ib:int = m[11];
  var jb:int = m[8];
  var kb:int = 3;
  var lb:int = jb << kb;
  var mb:int_ptr = ib + lb;
  var nb:int = mb[1];
  var ob:int = m[11];
  var pb:int = 16;
  var qb:int = ob + pb;
  var rb:int = m[8];
  var sb:int = 3;
  var tb:int = rb << sb;
  var ub:int_ptr = qb + tb;
  ub[1] = nb;
  goto B_a;
  label B_b:
  var vb:int = 1;
  var wb:int = Get_Bits(vb);
  var xb:int = m[9];
  var yb:int = m[8];
  var zb:int = 2;
  var ac:int = yb << zb;
  var bc:int_ptr = xb + ac;
  bc[0] = wb;
  var cc:int = m[11];
  var dc:int = m[8];
  var ec:int = 3;
  var fc:int = dc << ec;
  var gc:int = cc + fc;
  var hc:int = m[10];
  var ic:int = m[5];
  var jc:int = m[4];
  var kc:int = m[3];
  var lc:int = m[2];
  var mc:int = 0;
  motion_vector(gc, hc, ic, jc, kc, lc, mc);
  var nc:int = 1;
  var oc:int = Get_Bits(nc);
  var pc:int = m[9];
  var qc:int = 8;
  var rc:int = pc + qc;
  var sc:int = m[8];
  var tc:int = 2;
  var uc:int = sc << tc;
  var vc:int_ptr = rc + uc;
  vc[0] = oc;
  var wc:int = m[11];
  var xc:int = 16;
  var yc:int = wc + xc;
  var zc:int = m[8];
  var ad:int = 3;
  var bd:int = zc << ad;
  var cd:int = yc + bd;
  var dd:int = m[10];
  var ed:int = m[5];
  var fd:int = m[4];
  var gd:int = m[3];
  var hd:int = m[2];
  var id:int = 0;
  motion_vector(cd, dd, ed, fd, gd, hd, id);
  label B_a:
  var jd:int = 48;
  var kd:int = m + jd;
  stack_pointer = kd;
}

export function motion_vector(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  var p:int;
  var fa:int;
  var h:int = stack_pointer;
  var i:int = 48;
  var j:int_ptr = h - i;
  stack_pointer = j;
  j[11] = a;
  j[10] = b;
  j[9] = c;
  j[8] = d;
  j[7] = e;
  j[6] = f;
  j[5] = g;
  var k:int = Get_motion_code();
  j[4] = k;
  var l:int = j[9];
  if (eqz(l)) goto B_b;
  var m:int = j[4];
  if (eqz(m)) goto B_b;
  var n:int = j[9];
  var o:int = Get_Bits(n);
  p = o;
  goto B_a;
  label B_b:
  var q:int = 0;
  p = q;
  label B_a:
  var r:int = p;
  j[3] = r;
  var s:int = j[11];
  var t:int = j[9];
  var u:int = j[4];
  var v:int = j[3];
  var w:int = j[5];
  decode_motion_vector(s, t, u, v, w);
  var x:int = j[7];
  if (eqz(x)) goto B_c;
  var y:int = Get_dmvector();
  var z:int_ptr = j[10];
  z[0] = y;
  label B_c:
  var aa:int = Get_motion_code();
  j[4] = aa;
  var ba:int = j[8];
  if (eqz(ba)) goto B_e;
  var ca:int = j[4];
  if (eqz(ca)) goto B_e;
  var da:int = j[8];
  var ea:int = Get_Bits(da);
  fa = ea;
  goto B_d;
  label B_e:
  var ga:int = 0;
  fa = ga;
  label B_d:
  var ha:int = fa;
  j[3] = ha;
  var ia:int = j[6];
  if (eqz(ia)) goto B_f;
  var ja:int_ptr = j[11];
  var ka:int = ja[1];
  var la:int = 1;
  var ma:int = ka >> la;
  ja[1] = ma;
  label B_f:
  var na:int = j[11];
  var oa:int = 4;
  var pa:int = na + oa;
  var qa:int = j[8];
  var ra:int = j[4];
  var sa:int = j[3];
  var ta:int = j[5];
  decode_motion_vector(pa, qa, ra, sa, ta);
  var ua:int = j[6];
  if (eqz(ua)) goto B_g;
  var va:int_ptr = j[11];
  var wa:int = va[1];
  var xa:int = 1;
  var ya:int = wa << xa;
  va[1] = ya;
  label B_g:
  var za:int = j[7];
  if (eqz(za)) goto B_h;
  var ab:int = Get_dmvector();
  var bb:int_ptr = j[10];
  bb[1] = ab;
  label B_h:
  var cb:int = 48;
  var db:int = j + cb;
  stack_pointer = db;
}

function decode_motion_vector(a:int, b:int, c:int, d:int, e:int) {
  var t:int;
  var nc:int;
  var f:int = stack_pointer;
  var g:int = 32;
  var h:int_ptr = f - g;
  h[7] = a;
  h[6] = b;
  h[5] = c;
  h[4] = d;
  h[3] = e;
  var i:int = h[6];
  var j:int = 32;
  var k:int = i % j;
  h[6] = k;
  var l:int = h[6];
  var m:int = 16;
  var n:int = m << l;
  h[2] = n;
  var o:int = h[3];
  if (eqz(o)) goto B_b;
  var p:int_ptr = h[7];
  var q:int = p[0];
  var r:int = 1;
  var s:int = q >> r;
  t = s;
  goto B_a;
  label B_b:
  var u:int_ptr = h[7];
  var v:int = u[0];
  t = v;
  label B_a:
  var w:int = t;
  h[1] = w;
  var x:int = h[5];
  var y:int = 0;
  var z:int = x;
  var aa:int = y;
  var ba:int = z > aa;
  var ca:int = 1;
  var da:int = ba & ca;
  if (eqz(da)) goto B_d;
  var ea:int = h[5];
  var fa:int = 1;
  var ga:int = ea - fa;
  var ha:int = h[6];
  var ia:int = ga << ha;
  var ja:int = h[4];
  var ka:int = ia + ja;
  var la:int = 1;
  var ma:int = ka + la;
  var na:int = h[1];
  var oa:int = na + ma;
  h[1] = oa;
  var pa:int = h[1];
  var qa:int = h[2];
  var ra:int = pa;
  var sa:int = qa;
  var ta:int = ra >= sa;
  var ua:int = 1;
  var va:int = ta & ua;
  if (eqz(va)) goto B_e;
  var wa:int = h[2];
  var xa:int = h[2];
  var ya:int = wa + xa;
  var za:int = h[1];
  var ab:int = za - ya;
  h[1] = ab;
  label B_e:
  goto B_c;
  label B_d:
  var bb:int = h[5];
  var cb:int = 0;
  var db:int = bb;
  var eb:int = cb;
  var fb:int = db < eb;
  var gb:int = 1;
  var hb:int = fb & gb;
  if (eqz(hb)) goto B_f;
  var ib:int = h[5];
  var jb:int = 0;
  var kb:int = jb - ib;
  var lb:int = 1;
  var mb:int = kb - lb;
  var nb:int = h[6];
  var ob:int = mb << nb;
  var pb:int = h[4];
  var qb:int = ob + pb;
  var rb:int = 1;
  var sb:int = qb + rb;
  var tb:int = h[1];
  var ub:int = tb - sb;
  h[1] = ub;
  var vb:int = h[1];
  var wb:int = h[2];
  var xb:int = 0;
  var yb:int = xb - wb;
  var zb:int = vb;
  var ac:int = yb;
  var bc:int = zb < ac;
  var cc:int = 1;
  var dc:int = bc & cc;
  if (eqz(dc)) goto B_g;
  var ec:int = h[2];
  var fc:int = h[2];
  var gc:int = ec + fc;
  var hc:int = h[1];
  var ic:int = hc + gc;
  h[1] = ic;
  label B_g:
  label B_f:
  label B_c:
  var jc:int = h[3];
  if (eqz(jc)) goto B_i;
  var kc:int = h[1];
  var lc:int = 1;
  var mc:int = kc << lc;
  nc = mc;
  goto B_h;
  label B_i:
  var oc:int = h[1];
  nc = oc;
  label B_h:
  var pc:int = nc;
  var qc:int_ptr = h[7];
  qc[0] = pc;
}

export function Initialize_Buffer() {
  var a:int_ptr = ld_Incnt;
  var b:int = 0;
  a[0] = b;
  var c:int = ld_Rdbfr;
  var d:int = 2048;
  var e:int = c + d;
  var f:int_ptr = ld_Rdptr;
  f[0] = e;
  var g:int = f[0];
  var h:int_ptr = ld_Rdmax;
  h[0] = g;
  var i:int_ptr = ld_Bfr;
  var j:int = 68157440;
  i[0] = j;
  var k:int = 0;
  Flush_Buffer(k);
}

export function submain():int {
  var a:int = stack_pointer;
  var b:int = 128;
  var c:int = a - b;
  stack_pointer = c;
  var d:double = rtclock();
  var e:double_ptr = startTimer;
  e[0] = d;
  var f:int = 0;
  c[28]:int = f;
  var g:int_ptr = evalue;
  g[0] = f;
  var h:int_ptr = System_Stream_Flag;
  h[0] = f;
  var i:int = 0;
  c[11]:int = i;
  var j:int = 1;
  c[10]:int = j;
  var k:int = 0;
  c[9]:int = k;
  var l:int = 200;
  c[8]:int = l;
  var m:int = 200;
  c[7]:int = m;
  var n:int = 0;
  c[6]:int = n;
  var o:int = 1;
  c[5]:int = o;
  var p:int = 0;
  c[31]:int = p;
  loop L_b {
    var q:int = c[31]:int;
    var r:int = 2;
    var s:int = q;
    var t:int = r;
    var u:int = s < t;
    var v:int = 1;
    var w:int = u & v;
    if (eqz(w)) goto B_a;
    var x:int = c[31]:int;
    var y:int = 72;
    var z:int = c + y;
    var aa:int = z;
    var ba:int = 2;
    var ca:int = x << ba;
    var da:int_ptr = aa + ca;
    var ea:int = 0;
    da[0] = ea;
    var fa:int = 0;
    c[30]:int = fa;
    loop L_d {
      var ga:int = c[30]:int;
      var ha:int = 2;
      var ia:int = ga;
      var ja:int = ha;
      var ka:int = ia < ja;
      var la:int = 1;
      var ma:int = ka & la;
      if (eqz(ma)) goto B_c;
      var na:int = c[31]:int;
      var oa:int = 3;
      var pa:int = na << oa;
      var qa:int = inmvfs;
      var ra:int = qa + pa;
      var sa:int = c[30]:int;
      var ta:int = 2;
      var ua:int = sa << ta;
      var va:int_ptr = ra + ua;
      var wa:int = va[0];
      var xa:int = c[31]:int;
      var ya:int = 48;
      var za:int = c + ya;
      var ab:int = za;
      var bb:int = 3;
      var cb:int = xa << bb;
      var db:int = ab + cb;
      var eb:int = c[30]:int;
      var fb:int = 2;
      var gb:int = eb << fb;
      var hb:int_ptr = db + gb;
      hb[0] = wa;
      var ib:int = 0;
      c[29]:int = ib;
      loop L_f {
        var jb:int = c[29]:int;
        var kb:int = 2;
        var lb:int = jb;
        var mb:int = kb;
        var nb:int = lb < mb;
        var ob:int = 1;
        var pb:int = nb & ob;
        if (eqz(pb)) goto B_e;
        var qb:int = c[31]:int;
        var rb:int = 4;
        var sb:int = qb << rb;
        var tb:int = inPMV;
        var ub:int = tb + sb;
        var vb:int = c[30]:int;
        var wb:int = 3;
        var xb:int = vb << wb;
        var yb:int = ub + xb;
        var zb:int = c[29]:int;
        var ac:int = 2;
        var bc:int = zb << ac;
        var cc:int_ptr = yb + bc;
        var dc:int = cc[0];
        var ec:int = c[31]:int;
        var fc:int = 80;
        var gc:int = c + fc;
        var hc:int = gc;
        var ic:int = 4;
        var jc:int = ec << ic;
        var kc:int = hc + jc;
        var lc:int = c[30]:int;
        var mc:int = 3;
        var nc:int = lc << mc;
        var oc:int = kc + nc;
        var pc:int = c[29]:int;
        var qc:int = 2;
        var rc:int = pc << qc;
        var sc:int_ptr = oc + rc;
        sc[0] = dc;
        var tc:int = c[29]:int;
        var uc:int = 1;
        var vc:int = tc + uc;
        c[29]:int = vc;
        continue L_f;
      }
      unreachable;
      label B_e:
      var wc:int = c[30]:int;
      var xc:int = 1;
      var yc:int = wc + xc;
      c[30]:int = yc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var zc:int = c[31]:int;
    var ad:int = 1;
    var bd:int = zc + ad;
    c[31]:int = bd;
    continue L_b;
  }
  unreachable;
  label B_a:
  Initialize_Buffer();
  var cd:int = 80;
  var dd:int = c + cd;
  var ed:int = dd;
  var fd:int = 72;
  var gd:int = c + fd;
  var hd:int = gd;
  var id:int = 48;
  var jd:int = c + id;
  var kd:int = jd;
  var ld:int = c[11]:int;
  var md:int = c[10]:int;
  var nd:int = c[9]:int;
  var od:int = c[8]:int;
  var pd:int = c[7]:int;
  var qd:int = c[6]:int;
  var rd:int = c[5]:int;
  motion_vectors(ed, hd, kd, ld, md, nd, od, pd, qd, rd);
  var sd:int = 0;
  c[31]:int = sd;
  loop L_h {
    var td:int = c[31]:int;
    var ud:int = 2;
    var vd:int = td;
    var wd:int = ud;
    var xd:int = vd < wd;
    var yd:int = 1;
    var zd:int = xd & yd;
    if (eqz(zd)) goto B_g;
    var ae:int = 0;
    c[30]:int = ae;
    loop L_j {
      var be:int = c[30]:int;
      var ce:int = 2;
      var de:int = be;
      var ee:int = ce;
      var fe:int = de < ee;
      var ge:int = 1;
      var he:int = fe & ge;
      if (eqz(he)) goto B_i;
      var ie:int = c[31]:int;
      var je:int = 3;
      var ke:int = ie << je;
      var le:int = 48;
      var me:int = c + le;
      var ne:int = me + ke;
      var oe:int = c[30]:int;
      var pe:int = 2;
      var qe:int = oe << pe;
      var re:int_ptr = ne + qe;
      var se:int = re[0];
      var te:int = outmvfs;
      var ue:int = te + ke;
      var ve:int = c[30]:int;
      var we:int = 2;
      var xe:int = ve << we;
      var ye:int_ptr = ue + xe;
      var ze:int = ye[0];
      var af:int = se;
      var bf:int = ze;
      var cf:int = af != bf;
      var df:int = 1;
      var ef:int = cf & df;
      var ff:int = c[28]:int;
      var gf:int = ff + ef;
      c[28]:int = gf;
      var hf:int = 0;
      c[29]:int = hf;
      loop L_l {
        var if:int = c[29]:int;
        var jf:int = 2;
        var kf:int = if;
        var lf:int = jf;
        var mf:int = kf < lf;
        var nf:int = 1;
        var of:int = mf & nf;
        if (eqz(of)) goto B_k;
        var pf:int = c[31]:int;
        var qf:int = 4;
        var rf:int = pf << qf;
        var sf:int = 80;
        var tf:int = c + sf;
        var uf:int = tf + rf;
        var vf:int = c[30]:int;
        var wf:int = 3;
        var xf:int = vf << wf;
        var yf:int = uf + xf;
        var zf:int = c[29]:int;
        var ag:int = 2;
        var bg:int = zf << ag;
        var cg:int_ptr = yf + bg;
        var dg:int = cg[0];
        var eg:int = outPMV;
        var fg:int = eg + rf;
        var gg:int = c[30]:int;
        var hg:int = 3;
        var ig:int = gg << hg;
        var jg:int = fg + ig;
        var kg:int = c[29]:int;
        var lg:int = 2;
        var mg:int = kg << lg;
        var ng:int_ptr = jg + mg;
        var og:int = ng[0];
        var pg:int = dg;
        var qg:int = og;
        var rg:int = pg != qg;
        var sg:int = 1;
        var tg:int = rg & sg;
        var ug:int = c[28]:int;
        var vg:int = ug + tg;
        c[28]:int = vg;
        var wg:int = c[29]:int;
        var xg:int = 1;
        var yg:int = wg + xg;
        c[29]:int = yg;
        continue L_l;
      }
      unreachable;
      label B_k:
      var zg:int = c[30]:int;
      var ah:int = 1;
      var bh:int = zg + ah;
      c[30]:int = bh;
      continue L_j;
    }
    unreachable;
    label B_i:
    var ch:int = c[31]:int;
    var dh:int = 1;
    var eh:int = ch + dh;
    c[31]:int = eh;
    continue L_h;
  }
  unreachable;
  label B_g:
  var fh:double = rtclock();
  var gh:double_ptr = endTimer;
  gh[0] = fh;
  var hh:double = gh[0];
  var ih:double_ptr = startTimer;
  var jh:double = ih[0];
  var kh:double = hh - jh;
  c[0]:double = kh;
  var lh:int = 4283;
  var mh:int = memory_base;
  var nh:int = mh + lh;
  printf(nh, c);
  var oh:int = c[28]:int;
  var ph:int = 128;
  var qh:int = c + ph;
  stack_pointer = qh;
  return oh;
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
  var k:int = 4248;
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

