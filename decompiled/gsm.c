typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned short    undefined2;
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




int _gsm_add(short param_1,short param_2)

{
  long local_20;
  short local_18;
  
  local_20 = (long)param_1 + (long)param_2;
  if (local_20 + 0x8000 < 0 == SCARRY8(local_20,0x8000)) {
    if (0x7fff < local_20) {
      local_20 = 0x7fff;
    }
    local_18 = (short)local_20;
  }
  else {
    local_18 = -0x8000;
  }
  return (int)local_18;
}



long _gsm_mult(short param_1,short param_2)

{
  short local_2;
  
  if ((param_1 == -0x8000) && (param_2 == -0x8000)) {
    local_2 = 0x7fff;
  }
  else {
    local_2 = (short)((long)param_1 * (long)param_2 >> 0xf);
  }
  return (long)local_2;
}



long _gsm_mult_r(short param_1,short param_2)

{
  short local_10;
  short local_2;
  
  if ((param_2 == -0x8000) && (param_1 == -0x8000)) {
    local_2 = 0x7fff;
  }
  else {
    local_10 = (short)((long)param_1 * (long)param_2 + 0x4000 >> 0xf);
    local_2 = local_10;
  }
  return (long)local_2;
}



int _gsm_abs(short param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x8000) {
      param_1 = 0x7fff;
    }
    else {
      param_1 = -param_1;
    }
  }
  return (int)param_1;
}



long _gsm_norm(ulong param_1)

{
  ulong local_10;
  short local_2;
  
  local_10 = param_1;
  if ((long)param_1 < 0) {
    if ((long)param_1 < -0x3fffffff) {
      local_2 = 0;
      goto LAB_100002518;
    }
    local_10 = ~param_1;
  }
  if ((local_10 & 0xffff0000) == 0) {
    if ((local_10 & 0xff00) == 0) {
      local_2 = (byte)(&_bitoff)[local_10 & 0xff] + 0x17;
    }
    else {
      local_2 = (byte)(&_bitoff)[(long)local_10 >> 8 & 0xff] + 0xf;
    }
  }
  else if ((local_10 & 0xff000000) == 0) {
    local_2 = (byte)(&_bitoff)[(long)local_10 >> 0x10 & 0xff] + 7;
  }
  else {
    local_2 = (byte)(&_bitoff)[(long)local_10 >> 0x18 & 0xff] - 1;
  }
LAB_100002518:
  return (long)local_2;
}



long _gsm_div(short param_1,short param_2)

{
  int iVar1;
  int local_20;
  short local_1a;
  long local_10;
  short local_2;
  
  local_10 = (long)param_1;
  local_1a = 0;
  local_20 = 0xf;
  if (param_1 == 0) {
    local_2 = 0;
  }
  else {
    while (iVar1 = local_20 + -1, local_20 != 0) {
      local_1a = (short)((int)local_1a << 1);
      local_10 = local_10 * 2;
      local_20 = iVar1;
      if (param_2 <= local_10) {
        local_10 = local_10 - param_2;
        local_1a = local_1a + 1;
      }
    }
    local_2 = local_1a;
  }
  return (long)local_2;
}



void _Autocorrelation(short *param_1,long *param_2)

{
  short sVar1;
  short *local_38;
  short local_2e;
  short local_2c;
  int local_28;
  int local_24;
  short *local_18;
  
  local_2c = 0;
  for (local_24 = 0; local_24 < 0xa0; local_24 = local_24 + 1) {
    sVar1 = _gsm_abs((long)param_1[local_24]);
    if (local_2c < sVar1) {
      local_2c = sVar1;
    }
  }
  if (local_2c == 0) {
    local_2e = 0;
  }
  else {
    local_2e = _gsm_norm((long)local_2c << 0x10);
    local_2e = 4 - local_2e;
  }
  if ((0 < local_2e) && (local_2e < 5)) {
    for (local_24 = 0; local_24 < 0xa0; local_24 = local_24 + 1) {
      sVar1 = _gsm_mult_r((long)param_1[local_24],
                          (int)(short)(0x4000 >> ((int)local_2e - 1U & 0x1f)));
      param_1[local_24] = sVar1;
    }
  }
  sVar1 = *param_1;
  for (local_24 = 8; -1 < local_24; local_24 = local_24 + -1) {
    param_2[local_24] = 0;
  }
  *param_2 = *param_2 + (long)sVar1 * (long)*param_1;
  sVar1 = param_1[1];
  *param_2 = *param_2 + (long)sVar1 * (long)param_1[1];
  param_2[1] = param_2[1] + (long)sVar1 * (long)*param_1;
  sVar1 = param_1[2];
  *param_2 = *param_2 + (long)sVar1 * (long)param_1[2];
  param_2[1] = param_2[1] + (long)sVar1 * (long)param_1[1];
  param_2[2] = param_2[2] + (long)sVar1 * (long)*param_1;
  sVar1 = param_1[3];
  *param_2 = *param_2 + (long)sVar1 * (long)param_1[3];
  param_2[1] = param_2[1] + (long)sVar1 * (long)param_1[2];
  param_2[2] = param_2[2] + (long)sVar1 * (long)param_1[1];
  param_2[3] = param_2[3] + (long)sVar1 * (long)*param_1;
  sVar1 = param_1[4];
  *param_2 = *param_2 + (long)sVar1 * (long)param_1[4];
  param_2[1] = param_2[1] + (long)sVar1 * (long)param_1[3];
  param_2[2] = param_2[2] + (long)sVar1 * (long)param_1[2];
  param_2[3] = param_2[3] + (long)sVar1 * (long)param_1[1];
  param_2[4] = param_2[4] + (long)sVar1 * (long)*param_1;
  sVar1 = param_1[5];
  *param_2 = *param_2 + (long)sVar1 * (long)param_1[5];
  param_2[1] = param_2[1] + (long)sVar1 * (long)param_1[4];
  param_2[2] = param_2[2] + (long)sVar1 * (long)param_1[3];
  param_2[3] = param_2[3] + (long)sVar1 * (long)param_1[2];
  param_2[4] = param_2[4] + (long)sVar1 * (long)param_1[1];
  param_2[5] = param_2[5] + (long)sVar1 * (long)*param_1;
  sVar1 = param_1[6];
  *param_2 = *param_2 + (long)sVar1 * (long)param_1[6];
  param_2[1] = param_2[1] + (long)sVar1 * (long)param_1[5];
  param_2[2] = param_2[2] + (long)sVar1 * (long)param_1[4];
  param_2[3] = param_2[3] + (long)sVar1 * (long)param_1[3];
  param_2[4] = param_2[4] + (long)sVar1 * (long)param_1[2];
  param_2[5] = param_2[5] + (long)sVar1 * (long)param_1[1];
  param_2[6] = param_2[6] + (long)sVar1 * (long)*param_1;
  sVar1 = param_1[7];
  *param_2 = *param_2 + (long)sVar1 * (long)param_1[7];
  param_2[1] = param_2[1] + (long)sVar1 * (long)param_1[6];
  param_2[2] = param_2[2] + (long)sVar1 * (long)param_1[5];
  param_2[3] = param_2[3] + (long)sVar1 * (long)param_1[4];
  param_2[4] = param_2[4] + (long)sVar1 * (long)param_1[3];
  param_2[5] = param_2[5] + (long)sVar1 * (long)param_1[2];
  param_2[6] = param_2[6] + (long)sVar1 * (long)param_1[1];
  param_2[7] = param_2[7] + (long)sVar1 * (long)*param_1;
  local_38 = param_1 + 7;
  for (local_28 = 8; local_28 < 0xa0; local_28 = local_28 + 1) {
    sVar1 = local_38[1];
    *param_2 = *param_2 + (long)sVar1 * (long)local_38[1];
    param_2[1] = param_2[1] + (long)sVar1 * (long)*local_38;
    param_2[2] = param_2[2] + (long)sVar1 * (long)local_38[-1];
    param_2[3] = param_2[3] + (long)sVar1 * (long)local_38[-2];
    param_2[4] = param_2[4] + (long)sVar1 * (long)local_38[-3];
    param_2[5] = param_2[5] + (long)sVar1 * (long)local_38[-4];
    param_2[6] = param_2[6] + (long)sVar1 * (long)local_38[-5];
    param_2[7] = param_2[7] + (long)sVar1 * (long)local_38[-6];
    param_2[8] = param_2[8] + (long)sVar1 * (long)local_38[-7];
    local_38 = local_38 + 1;
  }
  for (local_24 = 8; -1 < local_24; local_24 = local_24 + -1) {
    param_2[local_24] = param_2[local_24] << 1;
  }
  if (0 < local_2e) {
    local_18 = param_1;
    for (local_24 = 0x9f; -1 < local_24; local_24 = local_24 + -1) {
      *local_18 = (short)((int)*local_18 << (ulong)((int)local_2e & 0x1f));
      local_18 = local_18 + 1;
    }
  }
  return;
}



void _Reflection_coefficients(long *param_1,short *param_2)

{
  short sVar1;
  int local_6c;
  int local_68;
  int local_64;
  short *local_60;
  short asStack_4e [9];
  short local_3c [9];
  short asStack_2a [9];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  if (*param_1 == 0) {
    local_60 = param_2;
    for (local_64 = 8; 0 < local_64; local_64 = local_64 + -1) {
      *local_60 = 0;
      local_60 = local_60 + 1;
    }
  }
  else {
    sVar1 = _gsm_norm(*param_1);
    for (local_64 = 0; local_64 < 9; local_64 = local_64 + 1) {
      asStack_2a[local_64] = (short)((ulong)(param_1[local_64] << ((long)sVar1 & 0x3fU)) >> 0x10);
    }
    for (local_64 = 1; local_64 < 8; local_64 = local_64 + 1) {
      asStack_4e[local_64] = asStack_2a[local_64];
    }
    for (local_64 = 0; local_64 < 9; local_64 = local_64 + 1) {
      local_3c[local_64] = asStack_2a[local_64];
    }
    local_60 = param_2;
    for (local_6c = 1; local_6c < 9; local_6c = local_6c + 1) {
      sVar1 = _gsm_abs((long)local_3c[1]);
      if (local_3c[0] < sVar1) {
        for (local_64 = local_6c; local_64 < 9; local_64 = local_64 + 1) {
          *local_60 = 0;
          local_60 = local_60 + 1;
        }
        break;
      }
      sVar1 = _gsm_div((long)sVar1,(long)local_3c[0]);
      *local_60 = sVar1;
      if (0 < local_3c[1]) {
        *local_60 = -*local_60;
      }
      if (local_6c == 8) break;
      sVar1 = _gsm_mult_r((long)local_3c[1],(long)*local_60);
      local_3c[0] = _gsm_add((long)local_3c[0],(long)sVar1);
      for (local_68 = 1; local_68 <= 8 - local_6c; local_68 = local_68 + 1) {
        sVar1 = _gsm_mult_r((long)asStack_4e[local_68],(long)*local_60);
        sVar1 = _gsm_add((long)local_3c[local_68 + 1],(long)sVar1);
        local_3c[local_68] = sVar1;
        sVar1 = _gsm_mult_r((long)local_3c[local_68 + 1],(long)*local_60);
        sVar1 = _gsm_add((long)asStack_4e[local_68],(long)sVar1);
        asStack_4e[local_68] = sVar1;
      }
      local_60 = local_60 + 1;
    }
  }
  if (*(long *)__got::___stack_chk_guard == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stubs::___stack_chk_fail();
}



void _Transformation_to_Log_Area_Ratios(short *param_1)

{
  short local_24;
  int local_20;
  short local_1a;
  short *local_18;
  
  local_18 = param_1;
  for (local_20 = 1; local_20 < 9; local_20 = local_20 + 1) {
    local_1a = _gsm_abs((long)*local_18);
    if (local_1a < 0x5666) {
      local_1a = local_1a >> 1;
    }
    else if (local_1a < 0x799a) {
      local_1a = local_1a + -0x2b33;
    }
    else {
      local_1a = (short)((int)(short)(local_1a + -0x6600) << 2);
    }
    if (*local_18 < 0) {
      local_24 = -local_1a;
    }
    else {
      local_24 = local_1a;
    }
    *local_18 = local_24;
    local_18 = local_18 + 1;
  }
  return;
}



void _Quantization_and_coding(short *param_1)

{
  short sVar1;
  short local_50;
  short local_48;
  short local_40;
  short local_38;
  short local_30;
  short local_28;
  short local_20;
  
  sVar1 = _gsm_mult(0x5000,(long)*param_1);
  sVar1 = _gsm_add((long)sVar1,0);
  local_20 = _gsm_add((long)sVar1,0x100);
  local_20 = local_20 >> 9;
  if (local_20 < 0x20) {
    if (local_20 + 0x20 < 0 == SCARRY4((int)local_20,0x20)) {
      local_20 = local_20 + 0x20;
    }
    else {
      local_20 = 0;
    }
  }
  else {
    local_20 = 0x3f;
  }
  *param_1 = local_20;
  sVar1 = _gsm_mult(0x5000,(long)param_1[1]);
  sVar1 = _gsm_add((long)sVar1,0);
  local_28 = _gsm_add((long)sVar1,0x100);
  local_28 = local_28 >> 9;
  if (local_28 < 0x20) {
    if (local_28 + 0x20 < 0 == SCARRY4((int)local_28,0x20)) {
      local_28 = local_28 + 0x20;
    }
    else {
      local_28 = 0;
    }
  }
  else {
    local_28 = 0x3f;
  }
  param_1[1] = local_28;
  sVar1 = _gsm_mult(0x5000,(long)param_1[2]);
  sVar1 = _gsm_add((long)sVar1,0x800);
  local_30 = _gsm_add((long)sVar1,0x100);
  local_30 = local_30 >> 9;
  if (local_30 < 0x10) {
    if (local_30 + 0x10 < 0 == SCARRY4((int)local_30,0x10)) {
      local_30 = local_30 + 0x10;
    }
    else {
      local_30 = 0;
    }
  }
  else {
    local_30 = 0x1f;
  }
  param_1[2] = local_30;
  sVar1 = _gsm_mult(0x5000,(long)param_1[3]);
  sVar1 = _gsm_add((long)sVar1,0xfffff600);
  local_38 = _gsm_add((long)sVar1,0x100);
  local_38 = local_38 >> 9;
  if (local_38 < 0x10) {
    if (local_38 + 0x10 < 0 == SCARRY4((int)local_38,0x10)) {
      local_38 = local_38 + 0x10;
    }
    else {
      local_38 = 0;
    }
  }
  else {
    local_38 = 0x1f;
  }
  param_1[3] = local_38;
  sVar1 = _gsm_mult(0x368c,(long)param_1[4]);
  sVar1 = _gsm_add((long)sVar1,0x5e);
  local_40 = _gsm_add((long)sVar1,0x100);
  local_40 = local_40 >> 9;
  if (local_40 < 8) {
    if (local_40 + 8 < 0 == SCARRY4((int)local_40,8)) {
      local_40 = local_40 + 8;
    }
    else {
      local_40 = 0;
    }
  }
  else {
    local_40 = 0xf;
  }
  param_1[4] = local_40;
  sVar1 = _gsm_mult(0x3c00,(long)param_1[5]);
  sVar1 = _gsm_add((long)sVar1,0xfffff900);
  local_48 = _gsm_add((long)sVar1,0x100);
  local_48 = local_48 >> 9;
  if (local_48 < 8) {
    if (local_48 + 8 < 0 == SCARRY4((int)local_48,8)) {
      local_48 = local_48 + 8;
    }
    else {
      local_48 = 0;
    }
  }
  else {
    local_48 = 0xf;
  }
  param_1[5] = local_48;
  sVar1 = _gsm_mult(0x2156,(long)param_1[6]);
  sVar1 = _gsm_add((long)sVar1,0xfffffeab);
  local_50 = _gsm_add((long)sVar1,0x100);
  local_50 = local_50 >> 9;
  if (local_50 < 4) {
    if (local_50 + 4 < 0 == SCARRY4((int)local_50,4)) {
      local_50 = local_50 + 4;
    }
    else {
      local_50 = 0;
    }
  }
  else {
    local_50 = 7;
  }
  param_1[6] = local_50;
  sVar1 = _gsm_mult(0x234c,(long)param_1[7]);
  sVar1 = _gsm_add((long)sVar1,0xfffffb88);
  sVar1 = _gsm_add((long)sVar1,0x100);
  sVar1 = sVar1 >> 9;
  if (sVar1 < 4) {
    if (sVar1 + 4 < 0 == SCARRY4((int)sVar1,4)) {
      sVar1 = sVar1 + 4;
    }
    else {
      sVar1 = 0;
    }
  }
  else {
    sVar1 = 7;
  }
  param_1[7] = sVar1;
  return;
}



void _Gsm_LPC_Analysis(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_60 [72];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  _Autocorrelation(param_1);
  _Reflection_coefficients(auStack_60,param_2);
  _Transformation_to_Log_Area_Ratios(param_2);
  _Quantization_and_coding(param_2);
  if (*(long *)__got::___stack_chk_guard != local_18) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail();
  }
  return;
}



int _submain(void)

{
  int iVar1;
  int local_180;
  int local_17c;
  short asStack_178 [8];
  short asStack_168 [160];
  long local_28;
  
  local_28 = *(long *)__got::___stack_chk_guard;
  local_180 = 0;
  _startTimer = _rtclock();
  for (local_17c = 0; local_17c < 0xa0; local_17c = local_17c + 1) {
    asStack_168[local_17c] = *(short *)(&_inData + (long)local_17c * 2);
  }
  _Gsm_LPC_Analysis(asStack_168,asStack_178);
  for (local_17c = 0; local_17c < 0xa0; local_17c = local_17c + 1) {
    local_180 = local_180 +
                (uint)(asStack_168[local_17c] != *(short *)(&_outData + (long)local_17c * 2));
  }
  for (local_17c = 0; local_17c < 8; local_17c = local_17c + 1) {
    local_180 = local_180 +
                (uint)(asStack_178[local_17c] != *(short *)(&_outLARc + (long)local_17c * 2));
  }
  _endTimer = _rtclock();
  iVar1 = __stubs::_printf("%0.6f\n");
  if (*(long *)__got::___stack_chk_guard != local_28) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail(iVar1);
  }
  return local_180;
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



void __stubs::___stack_chk_fail(void)

{
  (*(code *)__got::___stack_chk_fail)();
  return;
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


