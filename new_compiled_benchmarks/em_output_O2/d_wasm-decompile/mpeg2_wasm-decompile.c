import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
global endTimer_1:int = 6392;
export global out_ld_Rdptr:int = 2048;
export global inmvfs:int = 4128;
export global outPMV:int = 4144;
export global outmvfs:int = 4176;

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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function read(a:{ a:byte, b:byte, c:byte, d:byte, e:byte, f:byte, g:byte, h:byte }, b:{ a:ubyte, b:ubyte, c:ubyte, d:ubyte, e:ubyte, f:ubyte, g:ubyte, h:ubyte }, c:int):int {
  var d:int;
  var e:int;
  if (c <= 0) goto B_a;
  var f:int = c & 7;
  if (eqz(f)) {
    d = c;
    goto B_b;
  }
  d = c;
  loop L_d {
    a.a = b.a;
    b = b + 1;
    a = a + 1;
    d = d - 1;
    e = e + 1;
    if (e != f) continue L_d;
  }
  label B_b:
  if (c < 8) goto B_a;
  loop L_e {
    a.a = b.a;
    a.b = b.b;
    a.c = b.c;
    a.d = b.d;
    a.e = b.e;
    a.f = b.f;
    a.g = b.g;
    a.h = b.h;
    b = b + 8;
    a = a + 8;
    e = d - 9;
    d = d - 8;
    if (e < -2) continue L_e;
  }
  label B_a:
  return c;
}

export function Fill_Buffer() {
  var a:int_ptr;
  a = memcpy(ld_Rdbfr, a = inRdbfr, 2048);
  ld_Rdptr[0]:int = a;
  if (System_Stream_Flag[0]:int) {
    a = ld_Rdmax;
    a[0] = a[0] - 2048;
  }
}

export function Show_Bits(a:int):int {
  return ld_Bfr[0]:int >> 0 - a
}

export function Get_Bits1():int {
  var f:int;
  var d:int;
  var c:int;
  var b:ubyte_ptr;
  var e:int;
  var a:int = ld_Bfr;
  a[0]:int = (d = (f = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (c = (a = a[0]:int) - 1);
  if (a <= 25) {
    a = ld_Rdptr[0]:int;
    if (a < (b = ld_Rdbfr) + 2044) {
      loop L_d {
        ld_Rdptr[0]:int = (b = a + 1);
        ld_Bfr[0]:int = (d = (a = a[0]:ubyte) << 24 - c | d);
        e = c < 17;
        a = b;
        b = c + 8;
        c = b;
        if (e) continue L_d;
        goto B_b;
      }
      unreachable;
    }
    var g:int = System_Stream_Flag[0]:int;
    e = ld_Rdmax[0]:int;
    b = c;
    loop L_e {
      c = b;
      if (ld_Rdbfr + 2048 > a) {
        b = a;
        goto B_f;
      }
      b = ld_Rdbfr;
      memcpy(b, a = inRdbfr, 2048);
      if (eqz(g)) goto B_f;
      ld_Rdmax[0]:int = (e = e - 2048);
      b = ld_Rdbfr;
      label B_f:
      ld_Rdptr[0]:int = (a = b + 1);
      ld_Bfr[0]:int = (d = (b = b[0]) << 24 - c | d);
      b = c + 8;
      if (c < 17) continue L_e;
    }
    label B_b:
    ld_Incnt[0]:int = b;
  }
  return f >> 31;
}

export function Get_Bits(a:int):int {
  var g:int;
  var e:int;
  var d:int;
  var b:ubyte_ptr;
  var f:int;
  var c:int = ld_Bfr;
  c[0]:int = (e = (g = c[0]:int) << a);
  c = ld_Incnt;
  c[0]:int = (d = c[0]:int - a);
  if (d <= 24) {
    c = ld_Rdptr[0]:int;
    if (c < (b = ld_Rdbfr) + 2044) {
      loop L_d {
        ld_Rdptr[0]:int = (b = c + 1);
        ld_Bfr[0]:int = (e = (c = c[0]:ubyte) << 24 - d | e);
        f = d < 17;
        c = b;
        b = d + 8;
        d = b;
        if (f) continue L_d;
        goto B_b;
      }
      unreachable;
    }
    var h:int = System_Stream_Flag[0]:int;
    f = ld_Rdmax[0]:int;
    b = d;
    loop L_e {
      d = b;
      if (ld_Rdbfr + 2048 > c) {
        b = c;
        goto B_f;
      }
      b = ld_Rdbfr;
      memcpy(b, c = inRdbfr, 2048);
      if (eqz(h)) goto B_f;
      ld_Rdmax[0]:int = (f = f - 2048);
      b = ld_Rdbfr;
      label B_f:
      ld_Rdptr[0]:int = (c = b + 1);
      ld_Bfr[0]:int = (e = (b = b[0]) << 24 - d | e);
      b = d + 8;
      if (d < 17) continue L_e;
    }
    label B_b:
    ld_Incnt[0]:int = b;
  }
  return g >> 0 - a;
}

export function Flush_Buffer(a:ubyte_ptr) {
  var d:int;
  var c:ubyte_ptr;
  var e:int;
  var b:int_ptr = ld_Bfr;
  b[0] = (d = b[0] << a);
  b = ld_Incnt;
  b[0] = (b = b[0] - a);
  if (b <= 24) {
    a = ld_Rdptr[0]:int;
    if (a < (c = ld_Rdbfr) + 2044) {
      loop L_d {
        ld_Rdptr[0]:int = (c = a + 1);
        ld_Bfr[0]:int = (d = (a = a[0]) << 24 - b | d);
        e = b < 17;
        a = c;
        c = b + 8;
        b = c;
        if (e) continue L_d;
        goto B_b;
      }
      unreachable;
    }
    var f:int = System_Stream_Flag[0]:int;
    e = ld_Rdmax[0]:int;
    c = b;
    loop L_e {
      b = c;
      if (ld_Rdbfr + 2048 > a) {
        c = a;
        goto B_f;
      }
      c = ld_Rdbfr;
      memcpy(c, a = inRdbfr, 2048);
      if (eqz(f)) goto B_f;
      ld_Rdmax[0]:int = (e = e - 2048);
      c = ld_Rdbfr;
      label B_f:
      ld_Rdptr[0]:int = (a = c + 1);
      ld_Bfr[0]:int = (d = (c = c[0]) << 24 - b | d);
      c = b + 8;
      if (b < 17) continue L_e;
    }
    label B_b:
    ld_Incnt[0]:int = c;
  }
}

export function Get_motion_code():int {
  var g:{ a:byte, b:byte }
  var d:int;
  var c:int;
  var b:ubyte_ptr;
  var e:int_ptr;
  var f:int;
  var a:int = ld_Bfr;
  a[0]:int = (d = (g = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (c = (a = a[0]:int) - 1);
  if (a > 25) {
    b = c;
    goto B_a;
  }
  a = ld_Rdptr[0]:int;
  if (a < (b = ld_Rdbfr) + 2044) {
    loop L_e {
      ld_Rdptr[0]:int = (b = a + 1);
      ld_Bfr[0]:int = (d = (a = a[0]:ubyte) << 24 - c | d);
      e = c < 17;
      a = b;
      b = c + 8;
      c = b;
      if (e) continue L_e;
      goto B_c;
    }
    unreachable;
  }
  f = System_Stream_Flag[0]:int;
  e = ld_Rdmax[0]:int;
  b = c;
  loop L_f {
    c = b;
    if (ld_Rdbfr + 2048 > a) {
      b = a;
      goto B_g;
    }
    b = ld_Rdbfr;
    memcpy(b, a = inRdbfr, 2048);
    if (eqz(f)) goto B_g;
    ld_Rdmax[0]:int = (e = e - 2048);
    b = ld_Rdbfr;
    label B_g:
    ld_Rdptr[0]:int = (a = b + 1);
    ld_Bfr[0]:int = (d = (b = b[0]) << 24 - c | d);
    b = c + 8;
    if (c < 17) continue L_f;
  }
  label B_c:
  ld_Incnt[0]:int = b;
  label B_a:
  a = 0;
  if (g < 0) goto B_i;
  if (d >= 536870912) {
    ld_Incnt[0]:int = (c = b - (a = (g = MVtab0 + (d >> 28 & 14)).b));
    ld_Bfr[0]:int = (d = d << a);
    if (c > 24) {
      b = c;
      goto B_k;
    }
    a = ld_Rdptr[0]:int;
    if (a < (b = ld_Rdbfr) + 2044) {
      loop L_n {
        ld_Rdptr[0]:int = (b = a + 1);
        ld_Bfr[0]:int = (d = (a = a[0]:ubyte) << 24 - c | d);
        e = c < 17;
        a = b;
        b = c + 8;
        c = b;
        if (e) continue L_n;
        goto B_k;
      }
      unreachable;
    }
    f = System_Stream_Flag[0]:int;
    e = ld_Rdmax[0]:int;
    b = c;
    loop L_o {
      c = b;
      if (ld_Rdbfr + 2048 > a) {
        b = a;
        goto B_p;
      }
      b = ld_Rdbfr;
      memcpy(b, a = inRdbfr, 2048);
      if (eqz(f)) goto B_p;
      ld_Rdmax[0]:int = (e = e - 2048);
      b = ld_Rdbfr;
      label B_p:
      ld_Rdptr[0]:int = (a = b + 1);
      ld_Bfr[0]:int = (d = (b = b[0]) << 24 - c | d);
      b = c + 8;
      if (c < 17) continue L_o;
    }
    label B_k:
    ld_Incnt[0]:int = b - 1;
    ld_Bfr[0]:int = (c = d << 1);
    if (b <= 25) {
      a = ld_Rdptr[0]:int;
      if (a < (b = ld_Rdbfr) + 2044) goto B_s;
      e = ld_Rdmax;
      if (a < (b = ld_Rdbfr) + 2048) goto B_s;
      f = e[0];
      b = System_Stream_Flag[0]:int;
      a = ld_Rdbfr;
      memcpy(a, e = inRdbfr, 2048);
      if (eqz(b)) goto B_s;
      ld_Rdmax[0]:int = f - 2048;
      a = ld_Rdbfr;
      label B_s:
      ld_Rdptr[0]:int = a + 1;
      a = a[0]:ubyte;
      ld_Incnt[0]:int = 32;
      ld_Bfr[0]:int = a | c;
    }
    return select_if(0 - (a = g.a), a, d < 0);
  }
  if (d >= 201326592) {
    ld_Incnt[0]:int = (c = b - (a = (g = MVtab1 + (d >> 25 & 126)).b));
    ld_Bfr[0]:int = (d = d << a);
    if (c > 24) {
      b = c;
      goto B_u;
    }
    a = ld_Rdptr[0]:int;
    if (a < (b = ld_Rdbfr) + 2044) {
      loop L_x {
        ld_Rdptr[0]:int = (b = a + 1);
        ld_Bfr[0]:int = (d = (a = a[0]:ubyte) << 24 - c | d);
        e = c < 17;
        a = b;
        b = c + 8;
        c = b;
        if (e) continue L_x;
        goto B_u;
      }
      unreachable;
    }
    f = System_Stream_Flag[0]:int;
    e = ld_Rdmax[0]:int;
    b = c;
    loop L_y {
      c = b;
      if (ld_Rdbfr + 2048 > a) {
        b = a;
        goto B_z;
      }
      b = ld_Rdbfr;
      memcpy(b, a = inRdbfr, 2048);
      if (eqz(f)) goto B_z;
      ld_Rdmax[0]:int = (e = e - 2048);
      b = ld_Rdbfr;
      label B_z:
      ld_Rdptr[0]:int = (a = b + 1);
      ld_Bfr[0]:int = (d = (b = b[0]) << 24 - c | d);
      b = c + 8;
      if (c < 17) continue L_y;
    }
    label B_u:
    ld_Incnt[0]:int = b - 1;
    ld_Bfr[0]:int = (c = d << 1);
    if (b <= 25) {
      a = ld_Rdptr[0]:int;
      if (a < (b = ld_Rdbfr) + 2044) goto B_ca;
      e = ld_Rdmax;
      if (a < (b = ld_Rdbfr) + 2048) goto B_ca;
      f = e[0];
      b = System_Stream_Flag[0]:int;
      a = ld_Rdbfr;
      memcpy(a, e = inRdbfr, 2048);
      if (eqz(b)) goto B_ca;
      ld_Rdmax[0]:int = f - 2048;
      a = ld_Rdbfr;
      label B_ca:
      ld_Rdptr[0]:int = a + 1;
      a = a[0]:ubyte;
      ld_Incnt[0]:int = 32;
      ld_Bfr[0]:int = a | c;
    }
    return select_if(0 - (a = g.a), a, d < 0);
  }
  if (d < 100663296) goto B_i;
  ld_Incnt[0]:int =
    (c = b - (a = (g = MVtab2 + ((d >> 23) << 1) - 24).b));
  ld_Bfr[0]:int = (d = d << a);
  if (c > 24) {
    b = c;
    goto B_da;
  }
  a = ld_Rdptr[0]:int;
  if (a < (b = ld_Rdbfr) + 2044) {
    loop L_ga {
      ld_Rdptr[0]:int = (b = a + 1);
      ld_Bfr[0]:int = (d = (a = a[0]:ubyte) << 24 - c | d);
      e = c < 17;
      a = b;
      b = c + 8;
      c = b;
      if (e) continue L_ga;
      goto B_da;
    }
    unreachable;
  }
  f = System_Stream_Flag[0]:int;
  e = ld_Rdmax[0]:int;
  b = c;
  loop L_ha {
    c = b;
    if (ld_Rdbfr + 2048 > a) {
      b = a;
      goto B_ia;
    }
    b = ld_Rdbfr;
    memcpy(b, a = inRdbfr, 2048);
    if (eqz(f)) goto B_ia;
    ld_Rdmax[0]:int = (e = e - 2048);
    b = ld_Rdbfr;
    label B_ia:
    ld_Rdptr[0]:int = (a = b + 1);
    ld_Bfr[0]:int = (d = (b = b[0]) << 24 - c | d);
    b = c + 8;
    if (c < 17) continue L_ha;
  }
  label B_da:
  ld_Incnt[0]:int = b - 1;
  ld_Bfr[0]:int = (c = d << 1);
  if (b <= 25) {
    a = ld_Rdptr[0]:int;
    if (a < (b = ld_Rdbfr) + 2044) goto B_la;
    e = ld_Rdmax;
    if (a < (b = ld_Rdbfr) + 2048) goto B_la;
    f = e[0];
    b = System_Stream_Flag[0]:int;
    a = ld_Rdbfr;
    memcpy(a, e = inRdbfr, 2048);
    if (eqz(b)) goto B_la;
    ld_Rdmax[0]:int = f - 2048;
    a = ld_Rdbfr;
    label B_la:
    ld_Rdptr[0]:int = a + 1;
    a = a[0]:ubyte;
    ld_Incnt[0]:int = 32;
    ld_Bfr[0]:int = a | c;
  }
  a = select_if(0 - (a = g.a), a, d < 0);
  label B_i:
  return a;
}

export function Get_dmvector():int {
  var g:int;
  var e:int;
  var c:int;
  var b:ubyte_ptr;
  var d:int_ptr;
  var f:int;
  var a:int = ld_Bfr;
  a[0]:int = (e = (g = a[0]:int) << 1);
  a = ld_Incnt;
  a[0]:int = (c = (a = a[0]:int) - 1);
  if (a > 25) {
    b = c;
    goto B_a;
  }
  a = ld_Rdptr[0]:int;
  if (a < (b = ld_Rdbfr) + 2044) {
    loop L_e {
      ld_Rdptr[0]:int = (b = a + 1);
      ld_Bfr[0]:int = (e = (a = a[0]:ubyte) << 24 - c | e);
      d = c < 17;
      a = b;
      b = c + 8;
      c = b;
      if (d) continue L_e;
      goto B_c;
    }
    unreachable;
  }
  f = System_Stream_Flag[0]:int;
  d = ld_Rdmax[0]:int;
  b = c;
  loop L_f {
    c = b;
    if (ld_Rdbfr + 2048 > a) {
      b = a;
      goto B_g;
    }
    b = ld_Rdbfr;
    memcpy(b, a = inRdbfr, 2048);
    if (eqz(f)) goto B_g;
    ld_Rdmax[0]:int = (d = d - 2048);
    b = ld_Rdbfr;
    label B_g:
    ld_Rdptr[0]:int = (a = b + 1);
    ld_Bfr[0]:int = (e = (b = b[0]) << 24 - c | e);
    b = c + 8;
    if (c < 17) continue L_f;
  }
  label B_c:
  ld_Incnt[0]:int = b;
  label B_a:
  a = 0;
  if (g < 0) {
    ld_Incnt[0]:int = b - 1;
    ld_Bfr[0]:int = (c = e << 1);
    if (b <= 25) {
      a = ld_Rdptr[0]:int;
      if (a < (b = ld_Rdbfr) + 2044) goto B_k;
      d = ld_Rdmax;
      if (a < (b = ld_Rdbfr) + 2048) goto B_k;
      f = d[0];
      b = System_Stream_Flag[0]:int;
      a = ld_Rdbfr;
      memcpy(a, d = inRdbfr, 2048);
      if (eqz(b)) goto B_k;
      ld_Rdmax[0]:int = f - 2048;
      a = ld_Rdbfr;
      label B_k:
      ld_Rdptr[0]:int = a + 1;
      a = a[0]:ubyte;
      ld_Incnt[0]:int = 32;
      ld_Bfr[0]:int = a | c;
    }
    a = e >> 31 | 1;
  }
  return a;
}

export function motion_vectors(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int) {
  var o:int;
  var l:int;
  var k:ubyte_ptr;
  var m:int;
  var n:int_ptr;
  if (e == 1) {
    if (eqz(f | i)) {
      e = ld_Bfr;
      e[0]:int = (l = (o = e[0]:int) << 1);
      e = ld_Incnt;
      e[0]:int = (f = (e = e[0]:int) - 1);
      if (e <= 25) {
        e = ld_Rdptr[0]:int;
        if (e < (k = ld_Rdbfr) + 2044) {
          loop L_f {
            ld_Rdptr[0]:int = (k = e + 1);
            ld_Bfr[0]:int = (l = (e = e[0]:ubyte) << 24 - f | l);
            m = f < 17;
            e = k;
            k = f + 8;
            f = k;
            if (m) continue L_f;
            goto B_d;
          }
          unreachable;
        }
        n = System_Stream_Flag[0]:int;
        m = ld_Rdmax[0]:int;
        k = f;
        loop L_g {
          f = k;
          if (ld_Rdbfr + 2048 > e) {
            k = e;
            goto B_h;
          }
          k = ld_Rdbfr;
          memcpy(k, e = inRdbfr, 2048);
          if (eqz(n)) goto B_h;
          ld_Rdmax[0]:int = (m = m - 2048);
          k = ld_Rdbfr;
          label B_h:
          ld_Rdptr[0]:int = (e = k + 1);
          ld_Bfr[0]:int = (l = (k = k[0]) << 24 - f | l);
          k = f + 8;
          if (f < 17) continue L_g;
        }
        label B_d:
        ld_Incnt[0]:int = k;
      }
      e = c + (d << 2);
      e[0]:int = (f = o >> 31);
      e[2]:int = f;
    }
    e = a + (d << 3);
    motion_vector(e, b, g, h, i, j, 0);
    e[4]:long@4 = e[0]:long@4;
    return ;
  }
  e = ld_Bfr;
  e[0]:int = (l = (o = e[0]:int) << 1);
  e = ld_Incnt;
  e[0]:int = (f = (e = e[0]:int) - 1);
  if (e <= 25) {
    e = ld_Rdptr[0]:int;
    if (e < (k = ld_Rdbfr) + 2044) {
      loop L_m {
        ld_Rdptr[0]:int = (k = e + 1);
        ld_Bfr[0]:int = (l = (e = e[0]:ubyte) << 24 - f | l);
        m = f < 17;
        e = k;
        k = f + 8;
        f = k;
        if (m) continue L_m;
        goto B_k;
      }
      unreachable;
    }
    n = System_Stream_Flag[0]:int;
    m = ld_Rdmax[0]:int;
    k = f;
    loop L_n {
      f = k;
      if (ld_Rdbfr + 2048 > e) {
        k = e;
        goto B_o;
      }
      k = ld_Rdbfr;
      memcpy(k, e = inRdbfr, 2048);
      if (eqz(n)) goto B_o;
      ld_Rdmax[0]:int = (m = m - 2048);
      k = ld_Rdbfr;
      label B_o:
      ld_Rdptr[0]:int = (e = k + 1);
      ld_Bfr[0]:int = (l = (k = k[0]) << 24 - f | l);
      k = f + 8;
      if (f < 17) continue L_n;
    }
    label B_k:
    ld_Incnt[0]:int = k;
  }
  n = c + (d << 2);
  n[0] = o >> 31;
  a = a + (d << 3);
  motion_vector(a, b, g, h, i, j, 0);
  e = ld_Bfr;
  e[0]:int = (l = (c = e[0]:int) << 1);
  e = ld_Incnt;
  e[0]:int = (f = (e = e[0]:int) - 1);
  if (e <= 25) {
    e = ld_Rdptr[0]:int;
    if (e < (k = ld_Rdbfr) + 2044) {
      loop L_t {
        ld_Rdptr[0]:int = (k = e + 1);
        ld_Bfr[0]:int = (l = (e = e[0]:ubyte) << 24 - f | l);
        m = f < 17;
        e = k;
        k = f + 8;
        f = k;
        if (m) continue L_t;
        goto B_r;
      }
      unreachable;
    }
    d = System_Stream_Flag[0]:int;
    m = ld_Rdmax[0]:int;
    k = f;
    loop L_u {
      f = k;
      if (ld_Rdbfr + 2048 > e) {
        k = e;
        goto B_v;
      }
      k = ld_Rdbfr;
      memcpy(k, e = inRdbfr, 2048);
      if (eqz(d)) goto B_v;
      ld_Rdmax[0]:int = (m = m - 2048);
      k = ld_Rdbfr;
      label B_v:
      ld_Rdptr[0]:int = (e = k + 1);
      ld_Bfr[0]:int = (l = (k = k[0]) << 24 - f | l);
      k = f + 8;
      if (f < 17) continue L_u;
    }
    label B_r:
    ld_Incnt[0]:int = k;
  }
  n[2] = c >> 31;
  motion_vector(a + 16, b, g, h, i, j, 0);
}

export function motion_vector(a:{ a:int, b:int }, b:{ a:int, b:int }, c:int, d:int, e:int, f:int, g:int) {
  var o:int;
  var k:int;
  var j:int;
  var i:ubyte_ptr;
  var l:int;
  var h:int;
  var n:int;
  var m:int = Get_motion_code();
  j = {
        0;
        if (eqz(c)) goto B_a;
        0;
        if (eqz(m)) goto B_a;
        h = ld_Bfr;
        h[0]:int = (k = (o = h[0]:int) << c);
        h = ld_Incnt;
        h[0]:int = (j = h[0]:int - c);
        if (j <= 24) {
          h = ld_Rdptr[0]:int;
          if (h < (i = ld_Rdbfr) + 2044) {
            loop L_e {
              ld_Rdptr[0]:int = (i = h + 1);
              ld_Bfr[0]:int = (k = (h = h[0]:ubyte) << 24 - j | k);
              l = j < 17;
              h = i;
              i = j + 8;
              j = i;
              if (l) continue L_e;
              goto B_c;
            }
            unreachable;
          }
          n = System_Stream_Flag[0]:int;
          l = ld_Rdmax[0]:int;
          i = j;
          loop L_f {
            j = i;
            if (ld_Rdbfr + 2048 > h) {
              i = h;
              goto B_g;
            }
            i = ld_Rdbfr;
            memcpy(i, h = inRdbfr, 2048);
            if (eqz(n)) goto B_g;
            ld_Rdmax[0]:int = (l = l - 2048);
            i = ld_Rdbfr;
            label B_g:
            ld_Rdptr[0]:int = (h = i + 1);
            ld_Bfr[0]:int = (k = (i = i[0]) << 24 - j | k);
            i = j + 8;
            if (j < 17) continue L_f;
          }
          label B_c:
          ld_Incnt[0]:int = i;
        }
        o >> 0 - c;
        label B_a:
      }
  h = a.a >> (n = g != 0);
  i = 16 << (k = c % 32);
  if (m > 0) {
    h = (m - 1 << k) + j + h + 1;
    if (h < i) goto B_i;
    h = h + (-32 << k);
    goto B_i;
  }
  if (m >= 0) goto B_i;
  h = h + (j + ((m ^ -1) << k) ^ -1);
  if (h >= 0 - i) goto B_i;
  h = h + (32 << k);
  label B_i:
  a.a = h << n;
  if (e) { b.a = Get_dmvector() }
  c = Get_motion_code();
  j = {
        j = 0;
        j;
        if (eqz(d)) goto B_l;
        0;
        if (eqz(c)) goto B_l;
        h = ld_Bfr;
        h[0]:int = (k = (g = h[0]:int) << d);
        h = ld_Incnt;
        h[0]:int = (j = h[0]:int - d);
        if (j <= 24) {
          h = ld_Rdptr[0]:int;
          if (h < (i = ld_Rdbfr) + 2044) {
            loop L_p {
              ld_Rdptr[0]:int = (i = h + 1);
              ld_Bfr[0]:int = (k = (h = h[0]:ubyte) << 24 - j | k);
              l = j < 17;
              h = i;
              i = j + 8;
              j = i;
              if (l) continue L_p;
              goto B_n;
            }
            unreachable;
          }
          m = System_Stream_Flag[0]:int;
          l = ld_Rdmax[0]:int;
          i = j;
          loop L_q {
            j = i;
            if (ld_Rdbfr + 2048 > h) {
              i = h;
              goto B_r;
            }
            i = ld_Rdbfr;
            memcpy(i, h = inRdbfr, 2048);
            if (eqz(m)) goto B_r;
            ld_Rdmax[0]:int = (l = l - 2048);
            i = ld_Rdbfr;
            label B_r:
            ld_Rdptr[0]:int = (h = i + 1);
            ld_Bfr[0]:int = (k = (i = i[0]) << 24 - j | k);
            i = j + 8;
            if (j < 17) continue L_q;
          }
          label B_n:
          ld_Incnt[0]:int = i;
        }
        g >> 0 - d;
        label B_l:
      }
  i = 16 << (k = d % 32);
  h = (a.b >> (f != 0)) >> n;
  if (c > 0) {
    h = (c - 1 << k) + j + h + 1;
    if (h < i) goto B_t;
    h = h + (-32 << k);
    goto B_t;
  }
  if (c >= 0) goto B_t;
  h = h + (j + ((c ^ -1) << k) ^ -1);
  if (h >= 0 - i) goto B_t;
  h = h + (32 << k);
  label B_t:
  a.b = (h << n) << (f != 0);
  if (e) { b.b = Get_dmvector() }
}

export function Initialize_Buffer() {
  var a:ubyte_ptr;
  ld_Rdmax[0]:int = (a = ld_Rdbfr) + 2048;
  var b:int = System_Stream_Flag[0]:int;
  memcpy(a, inRdbfr, 2048);
  if (b) { ld_Rdmax[0]:int = (a = ld_Rdbfr) }
  ld_Incnt[0]:int = 32;
  ld_Rdptr[0]:int = (a = ld_Rdbfr) + 4;
  ld_Bfr[0]:int =
    ((a[1] << 16 | (b = a[2]) << 8) | (a = a[3])) | 68157440;
}

export function submain():int {
  var c:int;
  var e:int;
  var i:double;
  var a:int = stack_pointer - 96;
  stack_pointer = a;
  var b:{ a:long, b:long, c:long, d:long } = gettimeofday(a + 80, 0);
  if (b) {
    a[8]:int = b;
    iprintf(memory_base + 4248, a + 32);
  }
  evalue[0]:int = 0;
  System_Stream_Flag[0]:int = 0;
  ld_Rdmax[0]:int = (c = ld_Rdbfr) + 2048;
  (a - -64)[0]:long = (b = inPMV).c;
  var d:int = a + 72;
  d[0]:long = b.d;
  startTimer[0]:double =
    f64_convert_i32_s(e = a[22]:int) * 0.000001 +
    f64_convert_i64_s(a[10]:long);
  a[6]:long = b.a;
  a[7]:long = b.b;
  b = memcpy(c, inRdbfr, 2048);
  ld_Bfr[0]:int = 150007904;
  ld_Rdptr[0]:int = b + 4;
  ld_Incnt[0]:int = 31;
  motion_vector(a + 48, a + 40, 200, 200, 0, 1, 0);
  b = a[19]:int;
  c = d[0]:int;
  d = a[15]:int;
  e = a[14]:int;
  var g:int = a[13]:int;
  var h:int = a[12]:int;
  var f:int = gettimeofday(a + 80, 0);
  if (f) {
    a[4]:int = f;
    iprintf(memory_base + 4248, a + 16);
  }
  endTimer[0]:double =
    (i = f64_convert_i32_s(f = a[22]:int) * 0.000001 +
         f64_convert_i64_s(a[10]:long));
  a[0]:double = i - startTimer[0]:double;
  small_printf(memory_base + 4283, a);
  stack_pointer = a + 96;
  return 
    (((h != 1566) << 1) + ((g != 206) << 1) | e != 70) + (d != 41) +
    (c != 120) +
    (b != 216);
}

