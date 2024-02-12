import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global inRdbfr:int;
export import global ld_Rdbfr:int;
export import global ld_Rdptr:int;
export import global System_Stream_Flag:int;
export import global ld_Rdmax:int;
export import global ld_Bfr:int;
export import global ld_Incnt:int;
export import global MVtab0:int;
export import global MVtab1:int;
export import global MVtab2:int;
export import global evalue:int;
export import global inPMV:int;
export import global startTimer:int;
export import global inmvfs:int;
export import global outmvfs:int;
export import global outPMV:int;
export import global endTimer:int;
global inRdbfr_1:int = 0;
global ld_Rdbfr_1:int = 4304;
global ld_Rdptr_1:int = 6352;
global System_Stream_Flag_1:int = 6356;
global ld_Rdmax_1:int = 6360;
global ld_Bfr_1:int = 6364;
global ld_Incnt_1:int = 6368;
global MVtab0_1:int = 4192;
global MVtab1_1:int = 4208;
global MVtab2_1:int = 4224;
global evalue_1:int = 6384;
global inPMV_1:int = 4096;
global startTimer_1:int = 6376;
global inmvfs_1:int = 4128;
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

import function memcpy(a:int, b:int, c:int):int;

import function gettimeofday(a:int, b:int):int;

import function iprintf(a:int, b:int):int;

import function small_printf(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function read(a:byte_ptr, b:ubyte_ptr, c:int):int {
  if (c < 1) goto B_a;
  var d:int = c;
  b = b;
  a = a;
  loop L_b {
    a = a;
    a[0] = (b = b)[0];
    var e:int = d;
    d = e + -1;
    b = b + 1;
    a = a + 1;
    if (e > 1) continue L_b;
  }
  label B_a:
  return c;
}

export function Fill_Buffer() {
  var a:int_ptr = inRdbfr;
  a = memcpy(ld_Rdbfr, a, 2048);
  ld_Rdptr[0]:int = a;
  if (eqz(System_Stream_Flag[0]:int)) goto B_a;
  a = ld_Rdmax;
  a[0] = a[0] + -2048;
  label B_a:
}

export function Show_Bits(a:int):int {
  return ld_Bfr[0]:int >> 0 - a
}

export function Get_Bits1():int {
  var b:int;
  var c:int;
  var d:int;
  var e:int;
  var g:int;
  var f:ubyte_ptr;
  var a:int = ld_Bfr;
  a[0]:int = (c = (b = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (d = (a = a[0]:int) + -1);
  if (a > 25) goto B_a;
  a = ld_Rdbfr;
  e = ld_Rdptr[0]:int;
  if (e >= a + 2044) goto B_c;
  f = c;
  g = e;
  e = d;
  loop L_d {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_d;
    goto B_b;
  }
  unreachable;
  label B_c:
  var h:int = System_Stream_Flag[0]:int;
  f = c;
  g = ld_Rdmax[0]:int;
  e = e;
  d = d;
  loop L_e {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_g;
    g = g;
    f = f;
    goto B_f;
    label B_g:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_h;
    g = g;
    f = f;
    goto B_f;
    label B_h:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_f:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_e;
  }
  label B_b:
  ld_Incnt[0]:int = c;
  label B_a:
  return b >> 31;
}

export function Get_Bits(a:int):int {
  var c:int;
  var d:int;
  var f:int;
  var g:int;
  var b:int = ld_Bfr;
  b[0]:int = (d = (c = b[0]:int) << a);
  b = ld_Incnt;
  b[0]:int = (b = b[0]:int - a);
  if (b > 24) goto B_a;
  var e:ubyte_ptr = ld_Rdbfr;
  f = ld_Rdptr[0]:int;
  if (f >= e + 2044) goto B_c;
  e = d;
  g = f;
  f = b;
  loop L_d {
    ld_Rdptr[0]:int = (d = (b = g) + 1);
    g = b[0]:ubyte;
    ld_Bfr[0]:int = (e = g << 24 - (b = f) | e);
    e = e;
    g = d;
    d = b + 8;
    f = d;
    d = d;
    if (b < 17) continue L_d;
    goto B_b;
  }
  unreachable;
  label B_c:
  var h:int = System_Stream_Flag[0]:int;
  e = d;
  g = ld_Rdmax[0]:int;
  f = f;
  var i:int = b;
  loop L_e {
    b = i;
    g = g;
    d = e;
    e = f;
    if (e >= ld_Rdbfr + 2048) goto B_g;
    g = g;
    e = e;
    goto B_f;
    label B_g:
    e = inRdbfr;
    e = memcpy(ld_Rdbfr, e, 2048);
    ld_Rdptr[0]:int = e;
    if (h) goto B_h;
    g = g;
    e = e;
    goto B_f;
    label B_h:
    ld_Rdmax[0]:int = (e = g + -2048);
    g = e;
    e = ld_Rdbfr;
    label B_f:
    ld_Rdptr[0]:int = (f = (e = e) + 1);
    e = e[0];
    ld_Bfr[0]:int = (d = e << 24 - b | d);
    e = d;
    g = g;
    f = f;
    d = b + 8;
    i = d;
    d = d;
    if (b < 17) continue L_e;
  }
  label B_b:
  ld_Incnt[0]:int = d;
  label B_a:
  return c >> 0 - a;
}

export function Flush_Buffer(a:ubyte_ptr) {
  var c:int;
  var f:int;
  var e:ubyte_ptr;
  var b:int_ptr = ld_Bfr;
  b[0] = b[0] << a;
  b = ld_Incnt;
  b[0] = (a = b[0] - a);
  if (a > 24) goto B_a;
  b = ld_Rdbfr;
  c = ld_Rdptr[0]:int;
  if (c < b + 2044) goto B_c;
  var d:int = System_Stream_Flag[0]:int;
  e = ld_Bfr[0]:int;
  f = ld_Rdmax[0]:int;
  c = c;
  var g:int = a;
  loop L_d {
    a = g;
    f = f;
    b = e;
    e = c;
    if (e >= ld_Rdbfr + 2048) goto B_f;
    f = f;
    e = e;
    goto B_e;
    label B_f:
    e = inRdbfr;
    e = memcpy(ld_Rdbfr, e, 2048);
    ld_Rdptr[0]:int = e;
    if (d) goto B_g;
    f = f;
    e = e;
    goto B_e;
    label B_g:
    ld_Rdmax[0]:int = (e = f + -2048);
    f = e;
    e = ld_Rdbfr;
    label B_e:
    ld_Rdptr[0]:int = (c = (e = e) + 1);
    e = e[0];
    ld_Bfr[0]:int = (b = e << 24 - a | b);
    e = b;
    f = f;
    c = c;
    b = a + 8;
    g = b;
    b = b;
    if (a < 17) continue L_d;
    goto B_b;
  }
  unreachable;
  label B_c:
  e = ld_Bfr[0]:int;
  f = c;
  c = a;
  loop L_h {
    ld_Rdptr[0]:int = (b = (a = f) + 1);
    f = a[0];
    ld_Bfr[0]:int = (e = f << 24 - (a = c) | e);
    e = e;
    f = b;
    b = a + 8;
    c = b;
    b = b;
    if (a < 17) continue L_h;
  }
  label B_b:
  ld_Incnt[0]:int = b;
  label B_a:
}

export function Get_motion_code():int {
  var b:{ a:byte, b:byte }
  var c:int;
  var d:int;
  var e:int;
  var g:int;
  var f:ubyte_ptr;
  var h:int;
  var i:int;
  var a:int = ld_Bfr;
  a[0]:int = (c = (b = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (d = (a = a[0]:int) + -1);
  if (a > 25) goto B_a;
  a = ld_Rdbfr;
  e = ld_Rdptr[0]:int;
  if (e >= a + 2044) goto B_c;
  f = c;
  g = e;
  e = d;
  loop L_d {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_d;
    goto B_b;
  }
  unreachable;
  label B_c:
  h = System_Stream_Flag[0]:int;
  f = c;
  g = ld_Rdmax[0]:int;
  e = e;
  d = d;
  loop L_e {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_g;
    g = g;
    f = f;
    goto B_f;
    label B_g:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_h;
    g = g;
    f = f;
    goto B_f;
    label B_h:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_f:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_e;
  }
  label B_b:
  ld_Incnt[0]:int = c;
  label B_a:
  if (b >= 0) goto B_i;
  return 0;
  label B_i:
  a = ld_Bfr[0]:int;
  if (a < 536870912) goto B_j;
  b = MVtab0 + (a >> 28 & 14);
  c = b.b;
  ld_Bfr[0]:int = (f = a << c);
  a = ld_Incnt;
  a[0]:int = (a = a[0]:int - c);
  if (a > 24) goto B_k;
  c = ld_Rdbfr;
  e = ld_Rdptr[0]:int;
  if (e >= c + 2044) goto B_m;
  f = f;
  g = e;
  e = a;
  loop L_n {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_n;
    goto B_l;
  }
  unreachable;
  label B_m:
  h = System_Stream_Flag[0]:int;
  f = f;
  g = ld_Rdmax[0]:int;
  e = e;
  d = a;
  loop L_o {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_q;
    g = g;
    f = f;
    goto B_p;
    label B_q:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_r;
    g = g;
    f = f;
    goto B_p;
    label B_r:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_p:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_o;
  }
  label B_l:
  ld_Incnt[0]:int = c;
  label B_k:
  a = ld_Bfr;
  a[0]:int = (c = (i = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (d = (a = a[0]:int) + -1);
  if (a > 25) goto B_s;
  a = ld_Rdbfr;
  e = ld_Rdptr[0]:int;
  if (e >= a + 2044) goto B_u;
  f = c;
  g = e;
  e = d;
  loop L_v {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_v;
    goto B_t;
  }
  unreachable;
  label B_u:
  h = System_Stream_Flag[0]:int;
  f = c;
  g = ld_Rdmax[0]:int;
  e = e;
  d = d;
  loop L_w {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_y;
    g = g;
    f = f;
    goto B_x;
    label B_y:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_z;
    g = g;
    f = f;
    goto B_x;
    label B_z:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_x:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_w;
  }
  label B_t:
  ld_Incnt[0]:int = c;
  label B_s:
  return select_if(0 - (a = b.a), a, i < 0);
  label B_j:
  if (a < 201326592) goto B_aa;
  b = MVtab1 + (a >> 25 & 126);
  c = b.b;
  ld_Bfr[0]:int = (f = a << c);
  a = ld_Incnt;
  a[0]:int = (a = a[0]:int - c);
  if (a > 24) goto B_ba;
  c = ld_Rdbfr;
  e = ld_Rdptr[0]:int;
  if (e >= c + 2044) goto B_da;
  f = f;
  g = e;
  e = a;
  loop L_ea {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_ea;
    goto B_ca;
  }
  unreachable;
  label B_da:
  h = System_Stream_Flag[0]:int;
  f = f;
  g = ld_Rdmax[0]:int;
  e = e;
  d = a;
  loop L_fa {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_ha;
    g = g;
    f = f;
    goto B_ga;
    label B_ha:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_ia;
    g = g;
    f = f;
    goto B_ga;
    label B_ia:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_ga:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_fa;
  }
  label B_ca:
  ld_Incnt[0]:int = c;
  label B_ba:
  a = ld_Bfr;
  a[0]:int = (c = (i = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (d = (a = a[0]:int) + -1);
  if (a > 25) goto B_ja;
  a = ld_Rdbfr;
  e = ld_Rdptr[0]:int;
  if (e >= a + 2044) goto B_la;
  f = c;
  g = e;
  e = d;
  loop L_ma {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_ma;
    goto B_ka;
  }
  unreachable;
  label B_la:
  h = System_Stream_Flag[0]:int;
  f = c;
  g = ld_Rdmax[0]:int;
  e = e;
  d = d;
  loop L_na {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_pa;
    g = g;
    f = f;
    goto B_oa;
    label B_pa:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_qa;
    g = g;
    f = f;
    goto B_oa;
    label B_qa:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_oa:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_na;
  }
  label B_ka:
  ld_Incnt[0]:int = c;
  label B_ja:
  return select_if(0 - (a = b.a), a, i < 0);
  label B_aa:
  c = 0;
  if (a < 100663296) goto B_ra;
  b = ((a >> 23) << 1) + MVtab2 + -24;
  c = b.b;
  ld_Bfr[0]:int = (f = a << c);
  a = ld_Incnt;
  a[0]:int = (a = a[0]:int - c);
  if (a > 24) goto B_sa;
  g = ld_Rdbfr;
  c = ld_Rdptr[0]:int;
  if (c >= g + 2044) goto B_ua;
  f = f;
  g = c;
  e = a;
  loop L_va {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_va;
    goto B_ta;
  }
  unreachable;
  label B_ua:
  h = System_Stream_Flag[0]:int;
  f = f;
  g = ld_Rdmax[0]:int;
  e = c;
  d = a;
  loop L_wa {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_ya;
    g = g;
    f = f;
    goto B_xa;
    label B_ya:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_za;
    g = g;
    f = f;
    goto B_xa;
    label B_za:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_xa:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_wa;
  }
  label B_ta:
  ld_Incnt[0]:int = c;
  label B_sa:
  a = ld_Bfr;
  a[0]:int = (c = (i = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (d = (a = a[0]:int) + -1);
  if (a > 25) goto B_ab;
  f = ld_Rdbfr;
  a = ld_Rdptr[0]:int;
  if (a >= f + 2044) goto B_cb;
  f = c;
  g = a;
  e = d;
  loop L_db {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_db;
    goto B_bb;
  }
  unreachable;
  label B_cb:
  h = System_Stream_Flag[0]:int;
  f = c;
  g = ld_Rdmax[0]:int;
  e = a;
  d = d;
  loop L_eb {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_gb;
    g = g;
    f = f;
    goto B_fb;
    label B_gb:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_hb;
    g = g;
    f = f;
    goto B_fb;
    label B_hb:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_fb:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_eb;
  }
  label B_bb:
  ld_Incnt[0]:int = c;
  label B_ab:
  c = select_if(0 - (a = b.a), a, i < 0);
  label B_ra:
  return c;
}

export function Get_dmvector():int {
  var b:int;
  var c:int;
  var d:int;
  var e:int;
  var g:int;
  var f:ubyte_ptr;
  var h:int;
  var a:int = ld_Bfr;
  a[0]:int = (c = (b = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (d = (a = a[0]:int) + -1);
  if (a > 25) goto B_a;
  a = ld_Rdbfr;
  e = ld_Rdptr[0]:int;
  if (e >= a + 2044) goto B_c;
  f = c;
  g = e;
  e = d;
  loop L_d {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_d;
    goto B_b;
  }
  unreachable;
  label B_c:
  h = System_Stream_Flag[0]:int;
  f = c;
  g = ld_Rdmax[0]:int;
  e = e;
  d = d;
  loop L_e {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_g;
    g = g;
    f = f;
    goto B_f;
    label B_g:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_h;
    g = g;
    f = f;
    goto B_f;
    label B_h:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_f:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_e;
  }
  label B_b:
  ld_Incnt[0]:int = c;
  label B_a:
  a = 0;
  if (b > -1) goto B_i;
  a = ld_Bfr;
  a[0]:int = (c = (b = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (d = (a = a[0]:int) + -1);
  if (a > 25) goto B_j;
  a = ld_Rdbfr;
  e = ld_Rdptr[0]:int;
  if (e >= a + 2044) goto B_l;
  f = c;
  g = e;
  e = d;
  loop L_m {
    ld_Rdptr[0]:int = (c = (a = g) + 1);
    g = a[0]:ubyte;
    ld_Bfr[0]:int = (f = g << 24 - (a = e) | f);
    f = f;
    g = c;
    c = a + 8;
    e = c;
    c = c;
    if (a < 17) continue L_m;
    goto B_k;
  }
  unreachable;
  label B_l:
  h = System_Stream_Flag[0]:int;
  f = c;
  g = ld_Rdmax[0]:int;
  e = e;
  d = d;
  loop L_n {
    a = d;
    g = g;
    c = f;
    f = e;
    if (f >= ld_Rdbfr + 2048) goto B_p;
    g = g;
    f = f;
    goto B_o;
    label B_p:
    f = inRdbfr;
    f = memcpy(ld_Rdbfr, f, 2048);
    ld_Rdptr[0]:int = f;
    if (h) goto B_q;
    g = g;
    f = f;
    goto B_o;
    label B_q:
    ld_Rdmax[0]:int = (f = g + -2048);
    g = f;
    f = ld_Rdbfr;
    label B_o:
    ld_Rdptr[0]:int = (e = (f = f) + 1);
    f = f[0];
    ld_Bfr[0]:int = (c = f << 24 - a | c);
    f = c;
    g = g;
    e = e;
    c = a + 8;
    d = c;
    c = c;
    if (a < 17) continue L_n;
  }
  label B_k:
  ld_Incnt[0]:int = c;
  label B_j:
  a = select_if(1, -1, b > -1);
  label B_i:
  return a;
}

export function motion_vectors(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int) {
  var k:int;
  var l:int;
  var m:int;
  var o:int;
  var n:ubyte_ptr;
  var p:int_ptr;
  if (e != 1) goto B_a;
  if (i | f) goto B_b;
  e = ld_Bfr;
  e[0]:int = (f = (k = e[0]:int) << 1);
  e = ld_Incnt;
  e[0]:int = (l = (e = e[0]:int) + -1);
  if (e > 25) goto B_c;
  e = ld_Rdbfr;
  m = ld_Rdptr[0]:int;
  if (m >= e + 2044) goto B_e;
  n = f;
  o = m;
  m = l;
  loop L_f {
    ld_Rdptr[0]:int = (f = (e = o) + 1);
    o = e[0]:ubyte;
    ld_Bfr[0]:int = (n = o << 24 - (e = m) | n);
    n = n;
    o = f;
    f = e + 8;
    m = f;
    f = f;
    if (e < 17) continue L_f;
    goto B_d;
  }
  unreachable;
  label B_e:
  p = System_Stream_Flag[0]:int;
  n = f;
  o = ld_Rdmax[0]:int;
  m = m;
  l = l;
  loop L_g {
    e = l;
    o = o;
    f = n;
    n = m;
    if (n >= ld_Rdbfr + 2048) goto B_i;
    o = o;
    n = n;
    goto B_h;
    label B_i:
    n = inRdbfr;
    n = memcpy(ld_Rdbfr, n, 2048);
    ld_Rdptr[0]:int = n;
    if (p) goto B_j;
    o = o;
    n = n;
    goto B_h;
    label B_j:
    ld_Rdmax[0]:int = (n = o + -2048);
    o = n;
    n = ld_Rdbfr;
    label B_h:
    ld_Rdptr[0]:int = (m = (n = n) + 1);
    n = n[0];
    ld_Bfr[0]:int = (f = n << 24 - e | f);
    n = f;
    o = o;
    m = m;
    f = e + 8;
    l = f;
    f = f;
    if (e < 17) continue L_g;
  }
  label B_d:
  ld_Incnt[0]:int = f;
  label B_c:
  e = c + (d << 2);
  e[0]:int = (f = k >> 31);
  (e + 8)[0]:int = f;
  label B_b:
  e = a + (d << 3);
  motion_vector(e, b, g, h, i, j, 0);
  (e + 16)[0]:long@4 = e[0]:long@4;
  return ;
  label B_a:
  e = ld_Bfr;
  e[0]:int = (f = (k = e[0]:int) << 1);
  e = ld_Incnt;
  e[0]:int = (l = (e = e[0]:int) + -1);
  if (e > 25) goto B_k;
  e = ld_Rdbfr;
  m = ld_Rdptr[0]:int;
  if (m >= e + 2044) goto B_m;
  n = f;
  o = m;
  m = l;
  loop L_n {
    ld_Rdptr[0]:int = (f = (e = o) + 1);
    o = e[0]:ubyte;
    ld_Bfr[0]:int = (n = o << 24 - (e = m) | n);
    n = n;
    o = f;
    f = e + 8;
    m = f;
    f = f;
    if (e < 17) continue L_n;
    goto B_l;
  }
  unreachable;
  label B_m:
  p = System_Stream_Flag[0]:int;
  n = f;
  o = ld_Rdmax[0]:int;
  m = m;
  l = l;
  loop L_o {
    e = l;
    o = o;
    f = n;
    n = m;
    if (n >= ld_Rdbfr + 2048) goto B_q;
    o = o;
    n = n;
    goto B_p;
    label B_q:
    n = inRdbfr;
    n = memcpy(ld_Rdbfr, n, 2048);
    ld_Rdptr[0]:int = n;
    if (p) goto B_r;
    o = o;
    n = n;
    goto B_p;
    label B_r:
    ld_Rdmax[0]:int = (n = o + -2048);
    o = n;
    n = ld_Rdbfr;
    label B_p:
    ld_Rdptr[0]:int = (m = (n = n) + 1);
    n = n[0];
    ld_Bfr[0]:int = (f = n << 24 - e | f);
    n = f;
    o = o;
    m = m;
    f = e + 8;
    l = f;
    f = f;
    if (e < 17) continue L_o;
  }
  label B_l:
  ld_Incnt[0]:int = f;
  label B_k:
  p = c + (d << 2);
  p[0] = k >> 31;
  a = a + (d << 3);
  motion_vector(a, b, g, h, i, j, 0);
  e = ld_Bfr;
  e[0]:int = (f = (c = e[0]:int) << 1);
  e = ld_Incnt;
  e[0]:int = (l = (e = e[0]:int) + -1);
  if (e > 25) goto B_s;
  e = ld_Rdbfr;
  m = ld_Rdptr[0]:int;
  if (m >= e + 2044) goto B_u;
  n = f;
  o = m;
  m = l;
  loop L_v {
    ld_Rdptr[0]:int = (f = (e = o) + 1);
    o = e[0]:ubyte;
    ld_Bfr[0]:int = (n = o << 24 - (e = m) | n);
    n = n;
    o = f;
    f = e + 8;
    m = f;
    f = f;
    if (e < 17) continue L_v;
    goto B_t;
  }
  unreachable;
  label B_u:
  d = System_Stream_Flag[0]:int;
  n = f;
  o = ld_Rdmax[0]:int;
  m = m;
  l = l;
  loop L_w {
    e = l;
    o = o;
    f = n;
    n = m;
    if (n >= ld_Rdbfr + 2048) goto B_y;
    o = o;
    n = n;
    goto B_x;
    label B_y:
    n = inRdbfr;
    n = memcpy(ld_Rdbfr, n, 2048);
    ld_Rdptr[0]:int = n;
    if (d) goto B_z;
    o = o;
    n = n;
    goto B_x;
    label B_z:
    ld_Rdmax[0]:int = (n = o + -2048);
    o = n;
    n = ld_Rdbfr;
    label B_x:
    ld_Rdptr[0]:int = (m = (n = n) + 1);
    n = n[0];
    ld_Bfr[0]:int = (f = n << 24 - e | f);
    n = f;
    o = o;
    m = m;
    f = e + 8;
    l = f;
    f = f;
    if (e < 17) continue L_w;
  }
  label B_t:
  ld_Incnt[0]:int = f;
  label B_s:
  (p + 8)[0]:int = c >> 31;
  motion_vector(a + 16, b, g, h, i, j, 0);
}

export function motion_vector(a:{ a:int, b:int }, b:{ a:int, b:int }, c:int, d:int, e:int, f:int, g:int) {
  var j:int;
  var k:int;
  var m:int;
  var n:int;
  var l:ubyte_ptr;
  var p:int;
  var o:int;
  var h:int = Get_motion_code();
  var i:int = 0;
  if (eqz(c)) goto B_a;
  i = 0;
  if (eqz(h)) goto B_a;
  i = ld_Bfr;
  i[0]:int = (k = (j = i[0]:int) << c);
  i = ld_Incnt;
  i[0]:int = (i = i[0]:int - c);
  if (i > 24) goto B_b;
  l = ld_Rdbfr;
  m = ld_Rdptr[0]:int;
  if (m >= l + 2044) goto B_d;
  l = k;
  n = m;
  m = i;
  loop L_e {
    ld_Rdptr[0]:int = (k = (i = n) + 1);
    n = i[0]:ubyte;
    ld_Bfr[0]:int = (l = n << 24 - (i = m) | l);
    l = l;
    n = k;
    k = i + 8;
    m = k;
    k = k;
    if (i < 17) continue L_e;
    goto B_c;
  }
  unreachable;
  label B_d:
  o = System_Stream_Flag[0]:int;
  l = k;
  n = ld_Rdmax[0]:int;
  m = m;
  p = i;
  loop L_f {
    i = p;
    n = n;
    k = l;
    l = m;
    if (l >= ld_Rdbfr + 2048) goto B_h;
    n = n;
    l = l;
    goto B_g;
    label B_h:
    l = inRdbfr;
    l = memcpy(ld_Rdbfr, l, 2048);
    ld_Rdptr[0]:int = l;
    if (o) goto B_i;
    n = n;
    l = l;
    goto B_g;
    label B_i:
    ld_Rdmax[0]:int = (l = n + -2048);
    n = l;
    l = ld_Rdbfr;
    label B_g:
    ld_Rdptr[0]:int = (m = (l = l) + 1);
    l = l[0];
    ld_Bfr[0]:int = (k = l << 24 - i | k);
    l = k;
    n = n;
    m = m;
    k = i + 8;
    p = k;
    k = k;
    if (i < 17) continue L_f;
  }
  label B_c:
  ld_Incnt[0]:int = k;
  label B_b:
  i = j >> 0 - c;
  label B_a:
  l = i;
  k = a.a >> (g != 0);
  n = 16 << (i = c % 32);
  if (h < 1) goto B_k;
  k = (h + -1 << i) + l + k + 1;
  if (k >= n) goto B_l;
  i = k;
  goto B_j;
  label B_l:
  i = k + (-32 << i);
  goto B_j;
  label B_k:
  if (h <= -1) goto B_m;
  i = k;
  goto B_j;
  label B_m:
  k = k + (l + ((h ^ -1) << i) ^ -1);
  if (k < 0 - n) goto B_n;
  i = k;
  goto B_j;
  label B_n:
  i = k + (32 << i);
  label B_j:
  a.a = i << (o = g != 0);
  if (eqz(e)) goto B_o;
  b.a = Get_dmvector();
  label B_o:
  c = Get_motion_code();
  if (d) goto B_q;
  i = 0;
  goto B_p;
  label B_q:
  i = 0;
  if (eqz(c)) goto B_p;
  i = ld_Bfr;
  i[0]:int = (k = (j = i[0]:int) << d);
  i = ld_Incnt;
  i[0]:int = (i = i[0]:int - d);
  if (i > 24) goto B_r;
  l = ld_Rdbfr;
  m = ld_Rdptr[0]:int;
  if (m >= l + 2044) goto B_t;
  l = k;
  n = m;
  m = i;
  loop L_u {
    ld_Rdptr[0]:int = (k = (i = n) + 1);
    n = i[0]:ubyte;
    ld_Bfr[0]:int = (l = n << 24 - (i = m) | l);
    l = l;
    n = k;
    k = i + 8;
    m = k;
    k = k;
    if (i < 17) continue L_u;
    goto B_s;
  }
  unreachable;
  label B_t:
  h = System_Stream_Flag[0]:int;
  l = k;
  n = ld_Rdmax[0]:int;
  m = m;
  p = i;
  loop L_v {
    i = p;
    n = n;
    k = l;
    l = m;
    if (l >= ld_Rdbfr + 2048) goto B_x;
    n = n;
    l = l;
    goto B_w;
    label B_x:
    l = inRdbfr;
    l = memcpy(ld_Rdbfr, l, 2048);
    ld_Rdptr[0]:int = l;
    if (h) goto B_y;
    n = n;
    l = l;
    goto B_w;
    label B_y:
    ld_Rdmax[0]:int = (l = n + -2048);
    n = l;
    l = ld_Rdbfr;
    label B_w:
    ld_Rdptr[0]:int = (m = (l = l) + 1);
    l = l[0];
    ld_Bfr[0]:int = (k = l << 24 - i | k);
    l = k;
    n = n;
    m = m;
    k = i + 8;
    p = k;
    k = k;
    if (i < 17) continue L_v;
  }
  label B_s:
  ld_Incnt[0]:int = k;
  label B_r:
  i = j >> 0 - d;
  label B_p:
  l = i;
  if (eqz(f)) goto B_z;
  a.b = a.b >> 1;
  label B_z:
  k = a.b >> (g != 0);
  n = 16 << (i = d % 32);
  if (c < 1) goto B_ba;
  k = (c + -1 << i) + l + k + 1;
  if (k >= n) goto B_ca;
  i = k;
  goto B_aa;
  label B_ca:
  i = k + (-32 << i);
  goto B_aa;
  label B_ba:
  if (c <= -1) goto B_da;
  i = k;
  goto B_aa;
  label B_da:
  k = k + (l + ((c ^ -1) << i) ^ -1);
  if (k < 0 - n) goto B_ea;
  i = k;
  goto B_aa;
  label B_ea:
  i = k + (32 << i);
  label B_aa:
  a.b = (i << o) << (f != 0);
  if (eqz(e)) goto B_fa;
  b.b = Get_dmvector();
  label B_fa:
}

export function Initialize_Buffer() {
  ld_Incnt[0]:int = 0;
  ld_Bfr[0]:int = 68157440;
  var a:int = ld_Rdbfr;
  ld_Rdptr[0]:int = (a = a + 2048);
  ld_Rdmax[0]:int = a;
  var b:int = System_Stream_Flag[0]:int;
  var c:int = 68157440;
  var d:ubyte_ptr = a;
  var e:int = a;
  var f:int = 0;
  loop L_a {
    a = f;
    d = d;
    c = c;
    e = e;
    if (e >= ld_Rdbfr + 2048) goto B_c;
    f = d;
    d = e;
    goto B_b;
    label B_c:
    e = inRdbfr;
    e = memcpy(ld_Rdbfr, e, 2048);
    ld_Rdptr[0]:int = e;
    if (b) goto B_d;
    f = d;
    d = e;
    goto B_b;
    label B_d:
    ld_Rdmax[0]:int = (d = d + -2048);
    f = d;
    d = ld_Rdbfr;
    label B_b:
    ld_Rdptr[0]:int = (e = (d = d) + 1);
    d = d[0];
    ld_Bfr[0]:int = (c = d << 24 - a | c);
    c = c;
    d = f;
    e = e;
    f = a + 8;
    if (a < 17) continue L_a;
  }
  ld_Incnt[0]:int = 32;
}

export function submain():int {
  var b:long_ptr;
  var i:int;
  var j:int;
  var k:double;
  var a:int = stack_pointer - 128;
  stack_pointer = a;
  b = gettimeofday(a + 112, 0);
  if (eqz(b)) goto B_a;
  a[8]:int = b;
  iprintf(memory_base + 4248, a + 32);
  label B_a:
  evalue[0]:int = 0;
  System_Stream_Flag[0]:int = 0;
  (a + 80 + 16)[0]:long = ((b = inPMV) + 16)[0]:long;
  (a + 80 + 24)[0]:long = (b + 24)[0]:long;
  var c:int = a[30]:int;
  var d:long = a[14]:long;
  startTimer[0]:double =
    f64_convert_i32_s(c) * 0.000001 + f64_convert_i64_s(d);
  a[9]:long = 0L;
  a[6]:long = (c = inmvfs)[0]:long;
  a[10]:long = b[0];
  a[7]:long = (c + 8)[0]:long;
  a[11]:long = (b + 8)[0]:long;
  ld_Incnt[0]:int = 0;
  b = ld_Rdbfr;
  ld_Rdptr[0]:int = (b = b + 2048);
  ld_Rdmax[0]:int = b;
  ld_Bfr[0]:int = 68157440;
  var e:int = 68157440;
  var f:int = b;
  var g:int = 0;
  loop L_b {
    b = g;
    e = e;
    f = f;
    c = f;
    if (f < ld_Rdbfr + 2048) goto B_c;
    c = inRdbfr;
    c = memcpy(ld_Rdbfr, c, 2048);
    ld_Rdptr[0]:int = c;
    c = c;
    label B_c:
    ld_Rdptr[0]:int = (f = (c = c) + 1);
    c = c[0]:ubyte;
    ld_Bfr[0]:int = (c = c << 24 - b | e);
    e = c;
    f = f;
    g = b + 8;
    if (b < 17) continue L_b;
  }
  ld_Incnt[0]:int = 31;
  ld_Bfr[0]:int = c << 1;
  a[14]:int = (b = c >> 31);
  a[12]:int = b;
  motion_vector(a + 80, a + 72, 200, 200, 0, 1, 0);
  a[12]:long = a[10]:long;
  b = 0;
  c = 0;
  loop L_d {
    var h:int = b;
    b = 0;
    e = c;
    loop L_e {
      f = outmvfs;
      c = 0;
      e = e +
          ((a + 48 + (e = h << 3) + (b = (i = b) << 2))[0]:int !=
           (f + e + b)[0]:int);
      loop L_f {
        f = outPMV;
        b = c;
        c = b + 1;
        f = e +
            ((a + 80 + (e = h << 4) + (g = i << 3) + (j = b << 2))[0]:int !=
             (f + e + g + j)[0]:int);
        e = f;
        if (eqz(b)) continue L_f;
      }
      b = i + 1;
      e = f;
      if (eqz(i)) continue L_e;
    }
    b = h + 1;
    c = f;
    if (eqz(h)) continue L_d;
  }
  b = gettimeofday(a + 112, 0);
  if (eqz(b)) goto B_g;
  a[4]:int = b;
  iprintf(memory_base + 4248, a + 16);
  label B_g:
  b = a[30]:int;
  d = a[14]:long;
  endTimer[0]:double =
    (k = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(d));
  a[0]:double = k - startTimer[0]:double;
  small_printf(memory_base + 4283, a);
  stack_pointer = a + 128;
  return f;
}

