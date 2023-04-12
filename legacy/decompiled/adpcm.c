typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef long __darwin_time_t;

typedef int __int32_t;

typedef __int32_t __darwin_suseconds_t;

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct build_tool_version build_tool_version, *Pbuild_tool_version;

struct build_tool_version {
    dword tool;
    dword version;
};

typedef struct build_version_command build_version_command, *Pbuild_version_command;

struct build_version_command {
    dword cmd;
    dword cmdsize;
    dword platform;
    dword minos;
    dword sdk;
    dword ntools;
    struct build_tool_version build_tool_version[][1];
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};

typedef struct entry_point_command entry_point_command, *Pentry_point_command;

struct entry_point_command {
    dword cmd;
    dword cmdsize;
    qword entryoff;
    qword stacksize;
};

typedef struct dyld_chained_fixups_command dyld_chained_fixups_command, *Pdyld_chained_fixups_command;

struct dyld_chained_fixups_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct source_version_command source_version_command, *Psource_version_command;

struct source_version_command {
    dword cmd;
    dword cmdsize;
    qword version;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    __darwin_time_t tv_sec;
    __darwin_suseconds_t tv_usec;
};




int _abs(int param_1)

{
  int local_8;
  
  local_8 = param_1;
  if (param_1 < 0) {
    local_8 = -param_1;
  }
  return local_8;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

uint _encode(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long local_58;
  long local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  int local_2c;
  
  local_50 = (long)_tqmf * 0xc;
  local_40 = &DAT_100008548;
  local_38 = &DAT_1000036b8;
  local_58 = (long)DAT_100008544 * -0x2c;
  for (local_2c = 0; local_2c < 10; local_2c = local_2c + 1) {
    piVar2 = local_40 + 1;
    piVar1 = local_38 + 1;
    local_50 = local_50 + (long)*local_40 * (long)*local_38;
    local_40 = local_40 + 2;
    local_38 = local_38 + 2;
    local_58 = local_58 + (long)*piVar2 * (long)*piVar1;
  }
  local_50 = local_50 + (long)*local_40 * (long)*local_38;
  local_58 = local_58 + (long)local_40[1] * (long)local_38[1];
  piVar2 = local_40 + 1;
  local_48 = local_40;
  for (local_2c = 0; local_40 = piVar2, local_48 = local_48 + -1, local_2c < 0x16;
      local_2c = local_2c + 1) {
    *local_40 = *local_48;
    piVar2 = local_40 + -1;
  }
  *local_40 = param_1;
  local_40[-1] = param_2;
  _xl = (int)(local_50 + local_58 >> 0xf);
  _xh = (int)(local_50 - local_58 >> 0xf);
  _szl = _filtez();
  _spl = _filtep(_rlt1,_al1,_rlt2,_al2);
  _sl = _szl + _spl;
  _el = _xl - _sl;
  _il = _quantl(_el,_detl);
  _dlt = (int)((long)_detl * (long)*(int *)(&_qq4_code4_table + (long)((int)_il >> 2) * 4) >> 0xf);
  _nbl = _logscl(_il,_nbl);
  _detl = _scalel(_nbl,8);
  _plt = _dlt + _szl;
  _upzero(_dlt,&_delay_dltx,&_delay_bpl);
  _al2 = _uppol2(_al1,_al2,_plt,_plt1,_plt2);
  _al1 = _uppol1(_al1,_al2,_plt,_plt1);
  _rlt = _sl + _dlt;
  _rlt2 = _rlt1;
  _plt2 = _plt1;
  _plt1 = _plt;
  _rlt1 = _rlt;
  _szh = _filtez(&_delay_bph,&_delay_dhx);
  _sph = _filtep(_rh1,_ah1,_rh2,_ah2);
  _sh = _sph + _szh;
  _eh = _xh - _sh;
  if (_eh < 0) {
    _ih = 1;
  }
  else {
    _ih = 3;
  }
  lVar4 = (long)_deth;
  iVar3 = _abs(_eh);
  if ((int)(lVar4 * 0x234 >> 0xc) < iVar3) {
    _ih = _ih + -1;
  }
  _dh = (int)((long)_deth * (long)*(int *)(&_qq2_code2_table + (long)_ih * 4) >> 0xf);
  _nbh = _logsch(_ih,_nbh);
  _deth = _scalel(_nbh,10);
  _ph = _dh + _szh;
  _upzero(_dh,&_delay_dhx,&_delay_bph);
  _ah2 = _uppol2(_ah1,_ah2,_ph,_ph1,_ph2);
  _ah1 = _uppol1(_ah1,_ah2,_ph,_ph1);
  _rh2 = _rh1;
  _rh1 = _sh + _dh;
  _ph2 = _ph1;
  _ph1 = _ph;
  _yh = _sh + _dh;
  return _il | _ih << 6;
}



long _filtez(int *param_1,int *param_2)

{
  long local_20;
  int local_14;
  int *local_10;
  int *local_8;
  
  local_20 = (long)*param_1 * (long)*param_2;
  local_10 = param_2 + 1;
  local_8 = param_1 + 1;
  for (local_14 = 1; local_14 < 6; local_14 = local_14 + 1) {
    local_20 = local_20 + (long)*local_8 * (long)*local_10;
    local_10 = local_10 + 1;
    local_8 = local_8 + 1;
  }
  return local_20 >> 0xe;
}



long _filtep(int param_1,int param_2,int param_3,int param_4)

{
  return (long)param_2 * (long)(param_1 * 2) + (long)param_4 * (long)(param_3 * 2) >> 0xf;
}



undefined4 _quantl(int param_1,int param_2)

{
  int iVar1;
  int local_20;
  undefined4 local_1c;
  
  iVar1 = _abs(param_1);
  local_20 = 0;
  while ((local_20 < 0x1e &&
         ((long)*(int *)(&_decis_levl + (long)local_20 * 4) * (long)param_2 >> 0xf < (long)iVar1)))
  {
    local_20 = local_20 + 1;
  }
  if (param_1 < 0) {
    local_1c = *(undefined4 *)(&_quant26bt_neg + (long)local_20 * 4);
  }
  else {
    local_1c = *(undefined4 *)(&_quant26bt_pos + (long)local_20 * 4);
  }
  return local_1c;
}



int _logscl(int param_1,int param_2)

{
  int local_8;
  
  local_8 = (int)((long)param_2 * 0x7f >> 7) + *(int *)(&_wl_code_table + (long)(param_1 >> 2) * 4);
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (0x4800 < local_8) {
    local_8 = 0x4800;
  }
  return local_8;
}



int _scalel(int param_1,int param_2)

{
  return (*(int *)(&_ilb_table + (long)(int)(param_1 >> 6 & 0x1f) * 4) >>
         ((param_2 + 1) - (param_1 >> 0xb) & 0x1fU)) << 3;
}



void _upzero(int param_1,int *param_2,long param_3)

{
  int local_20;
  int local_1c;
  
  if (param_1 == 0) {
    for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
      *(int *)(param_3 + (long)local_1c * 4) =
           (int)((ulong)((long)*(int *)(param_3 + (long)local_1c * 4) * 0xff) >> 8);
    }
  }
  else {
    for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
      if ((long)param_1 * (long)param_2[local_1c] < 0) {
        local_20 = -0x80;
      }
      else {
        local_20 = 0x80;
      }
      *(int *)(param_3 + (long)local_1c * 4) =
           local_20 + (int)((ulong)((long)*(int *)(param_3 + (long)local_1c * 4) * 0xff) >> 8);
    }
  }
  param_2[5] = param_2[4];
  param_2[4] = param_2[3];
  param_2[3] = param_2[2];
  param_2[2] = param_2[1];
  param_2[1] = *param_2;
  *param_2 = param_1;
  return;
}



int _uppol2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int local_2c;
  int local_28;
  long local_20;
  
  local_20 = (long)param_1 * 4;
  if (-1 < (long)param_3 * (long)param_4) {
    local_20 = (long)param_1 * -4;
  }
  local_28 = (int)(local_20 >> 7);
  if ((long)param_3 * (long)param_5 < 0) {
    local_28 = local_28 + -0x80;
  }
  else {
    local_28 = local_28 + 0x80;
  }
  local_2c = local_28 + (int)((long)param_2 * 0x7f >> 7);
  if (0x3000 < local_2c) {
    local_2c = 0x3000;
  }
  if (local_2c + 0x3000 < 0 != SCARRY4(local_2c,0x3000)) {
    local_2c = -0x3000;
  }
  return local_2c;
}



int _uppol1(int param_1,int param_2,int param_3,int param_4)

{
  int local_20;
  
  local_20 = (int)((ulong)((long)param_1 * 0xff) >> 8);
  if ((long)param_3 * (long)param_4 < 0) {
    local_20 = local_20 + -0xc0;
  }
  else {
    local_20 = local_20 + 0xc0;
  }
  param_2 = 0x3c00 - param_2;
  if (param_2 < local_20) {
    local_20 = param_2;
  }
  if (local_20 + param_2 < 0 != SBORROW4(local_20,-param_2)) {
    local_20 = -param_2;
  }
  return local_20;
}



int _logsch(int param_1,int param_2)

{
  int local_8;
  
  local_8 = (int)((long)param_2 * 0x7f >> 7) + *(int *)(&_wh_code_table + (long)param_1 * 4);
  if (local_8 < 0) {
    local_8 = 0;
  }
  if (0x5800 < local_8) {
    local_8 = 0x5800;
  }
  return local_8;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

void _decode(uint param_1)

{
  int *piVar1;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  long local_38;
  long local_30;
  int local_28;
  
  _ilr = param_1 & 0x3f;
  _ih = (int)param_1 >> 6;
  _dec_szl = _filtez();
  _dec_spl = _filtep(_dec_rlt1,_dec_al1,_dec_rlt2,_dec_al2);
  _dec_sl = _dec_spl + _dec_szl;
  _dec_dlt = (int)((long)_dec_detl * (long)*(int *)(&_qq4_code4_table + (long)((int)_ilr >> 2) * 4)
                  >> 0xf);
  _dl = (int)((long)_dec_detl * (long)*(int *)(&_qq6_code6_table + (long)_il * 4) >> 0xf);
  _rl = _dl + _dec_sl;
  _dec_nbl = _logscl(_ilr,_dec_nbl);
  _dec_detl = _scalel(_dec_nbl,8);
  _dec_plt = _dec_dlt + _dec_szl;
  _upzero(_dec_dlt,&_dec_del_dltx,&_dec_del_bpl);
  _dec_al2 = _uppol2(_dec_al1,_dec_al2,_dec_plt,_dec_plt1,_dec_plt2);
  _dec_al1 = _uppol1(_dec_al1,_dec_al2,_dec_plt,_dec_plt1);
  _dec_rlt = _dec_sl + _dec_dlt;
  _dec_rlt2 = _dec_rlt1;
  _dec_plt2 = _dec_plt1;
  _dec_plt1 = _dec_plt;
  _dec_rlt1 = _dec_rlt;
  _dec_szh = _filtez();
  _dec_sph = _filtep(_dec_rh1,_dec_ah1,_dec_rh2,_dec_ah2);
  _dec_sh = _dec_sph + _dec_szh;
  _dec_dh = (int)((long)_dec_deth * (long)*(int *)(&_qq2_code2_table + (long)_ih * 4) >> 0xf);
  _dec_nbh = _logsch(_ih,_dec_nbh);
  _dec_deth = _scalel(_dec_nbh,10);
  _dec_ph = _dec_dh + _dec_szh;
  _upzero(_dec_dh,&_dec_del_dhx,&_dec_del_bph);
  _dec_ah2 = _uppol2(_dec_ah1,_dec_ah2,_dec_ph,_dec_ph1,_dec_ph2);
  _dec_ah1 = _uppol1(_dec_ah1,_dec_ah2,_dec_ph,_dec_ph1);
  _rh = _dec_sh + _dec_dh;
  _dec_rh2 = _dec_rh1;
  _dec_ph2 = _dec_ph1;
  _dec_ph1 = _dec_ph;
  _xd = _rl - _rh;
  _xs = _rl + _rh;
  local_48 = &_accumc;
  local_58 = &_accumd;
  local_30 = (long)_xd * 0xc;
  local_40 = &DAT_1000036b8;
  local_38 = (long)_xs * -0x2c;
  for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
    piVar1 = local_40 + 1;
    local_30 = local_30 + (long)*local_48 * (long)*local_40;
    local_40 = local_40 + 2;
    local_38 = local_38 + (long)*local_58 * (long)*piVar1;
    local_58 = local_58 + 1;
    local_48 = local_48 + 1;
  }
  _xout1 = (undefined4)(local_30 + (long)*local_48 * (long)*local_40 >> 0xe);
  _xout2 = (undefined4)(local_38 + (long)*local_58 * (long)local_40[1] >> 0xe);
  local_60 = local_58;
  local_50 = local_48;
  _dec_rh1 = _rh;
  for (local_28 = 0; local_50 = local_50 + -1, local_60 = local_60 + -1, local_28 < 10;
      local_28 = local_28 + 1) {
    *local_48 = *local_50;
    *local_58 = *local_60;
    local_58 = local_58 + -1;
    local_48 = local_48 + -1;
  }
  *local_48 = _xd;
  *local_58 = _xs;
  return;
}



void _reset(void)

{
  int local_4;
  
  _dec_detl = 0x20;
  _detl = 0x20;
  _dec_deth = 8;
  _deth = 8;
  _rlt2 = 0;
  _rlt1 = 0;
  _plt2 = 0;
  _plt1 = 0;
  _al2 = 0;
  _al1 = 0;
  _nbl = 0;
  _rh2 = 0;
  _rh1 = 0;
  _ph2 = 0;
  _ph1 = 0;
  _ah2 = 0;
  _ah1 = 0;
  _nbh = 0;
  _dec_rlt2 = 0;
  _dec_rlt1 = 0;
  _dec_plt2 = 0;
  _dec_plt1 = 0;
  _dec_al2 = 0;
  _dec_al1 = 0;
  _dec_nbl = 0;
  _dec_rh2 = 0;
  _dec_rh1 = 0;
  _dec_ph2 = 0;
  _dec_ph1 = 0;
  _dec_ah2 = 0;
  _dec_ah1 = 0;
  _dec_nbh = 0;
  for (local_4 = 0; local_4 < 6; local_4 = local_4 + 1) {
    *(undefined4 *)(&_delay_dltx + (long)local_4 * 4) = 0;
    *(undefined4 *)(&_delay_dhx + (long)local_4 * 4) = 0;
    *(undefined4 *)(&_dec_del_dltx + (long)local_4 * 4) = 0;
    *(undefined4 *)(&_dec_del_dhx + (long)local_4 * 4) = 0;
  }
  for (local_4 = 0; local_4 < 6; local_4 = local_4 + 1) {
    *(undefined4 *)(&_delay_bpl + (long)local_4 * 4) = 0;
    *(undefined4 *)(&_delay_bph + (long)local_4 * 4) = 0;
    *(undefined4 *)(&_dec_del_bpl + (long)local_4 * 4) = 0;
    *(undefined4 *)(&_dec_del_bph + (long)local_4 * 4) = 0;
  }
  for (local_4 = 0; local_4 < 0x18; local_4 = local_4 + 1) {
    (&_tqmf)[local_4] = 0;
  }
  for (local_4 = 0; local_4 < 0xb; local_4 = local_4 + 1) {
    (&_accumc)[local_4] = 0;
    (&_accumd)[local_4] = 0;
  }
  return;
}



void _adpcm_main(void)

{
  undefined4 uVar1;
  int local_14;
  
  _reset();
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 2) {
    uVar1 = _encode(*(undefined4 *)(&_test_data + (long)local_14 * 4),
                    *(undefined4 *)(&_test_data + (long)(local_14 + 1) * 4));
    *(undefined4 *)(&_compressed + (long)(local_14 / 2) * 4) = uVar1;
  }
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 2) {
    _decode(*(undefined4 *)(&_compressed + (long)(local_14 / 2) * 4));
    *(undefined4 *)(&_result + (long)local_14 * 4) = _xout1;
    *(undefined4 *)(&_result + (long)(local_14 + 1) * 4) = _xout2;
  }
  return;
}



int _submain(void)

{
  int local_18;
  int local_14;
  
  local_18 = 0;
  _startTimer = _rtclock();
  _adpcm_main();
  for (local_14 = 0; local_14 < 0x32; local_14 = local_14 + 1) {
    if (*(int *)(&_compressed + (long)local_14 * 4) !=
        *(int *)(&_test_compressed + (long)local_14 * 4)) {
      local_18 = local_18 + 1;
    }
  }
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
    if (*(int *)(&_result + (long)local_14 * 4) != *(int *)(&_test_result + (long)local_14 * 4)) {
      local_18 = local_18 + 1;
    }
  }
  _endTimer = _rtclock();
  __stubs::_printf("%0.6f\n");
  return local_18;
}



undefined4 entry(void)

{
  int local_24;
  
  for (local_24 = 0; local_24 < 1; local_24 = local_24 + 1) {
    _submain();
  }
  return 0;
}



int _rtclock(void)

{
  int iVar1;
  timeval local_20;
  
  iVar1 = __stubs::_gettimeofday(&local_20,(void *)0x0);
  if (iVar1 != 0) {
    iVar1 = __stubs::_printf("Error return from gettimeofday: %d");
  }
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_gettimeofday(timeval *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_gettimeofday)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_printf(char *param_1,...)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_printf)((int)param_1);
  return iVar1;
}


