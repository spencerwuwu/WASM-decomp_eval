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




void _shift64RightJamming(ulong param_1,uint param_2,ulong *param_3)

{
  ulong local_20;
  
  local_20 = param_1;
  if (param_2 != 0) {
    if ((int)param_2 < 0x40) {
      local_20 = param_1 >> ((ulong)param_2 & 0x3f) | (ulong)(param_1 << (-param_2 & 0x3f) != 0);
    }
    else {
      local_20 = (ulong)(param_1 != 0);
    }
  }
  *param_3 = local_20;
  return;
}



void _mul64To128(ulong param_1,ulong param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = (uint)(param_1 >> 0x20);
  uVar4 = (uint)(param_2 >> 0x20);
  uVar5 = (ulong)uVar3 * (param_2 & 0xffffffff);
  uVar1 = (param_1 & 0xffffffff) * (ulong)uVar4 + uVar5;
  uVar2 = (param_1 & 0xffffffff) * (param_2 & 0xffffffff) + (uVar1 << 0x20);
  *param_4 = uVar2;
  *param_3 = (ulong)uVar3 * (ulong)uVar4 + (uVar1 >> 0x20) + ((ulong)(uVar1 < uVar5) << 0x20) +
             (ulong)(uVar2 < uVar1 << 0x20);
  return;
}



void _float_raise(uint param_1)

{
  _float_exception_flags = _float_exception_flags | param_1;
  return;
}



bool _float64_is_nan(long param_1)

{
  return 0xffe0000000000000 < (ulong)(param_1 << 1);
}



bool _float64_is_signaling_nan(ulong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 >> 0x33 & 0xfff) == 0xffe) {
    bVar1 = (param_1 & 0x7ffffffffffff) != 0;
  }
  return bVar1;
}



ulong _extractFloat64Frac(ulong param_1)

{
  return param_1 & 0xfffffffffffff;
}



ulong _extractFloat64Exp(ulong param_1)

{
  return param_1 >> 0x34 & 0x7ff;
}



ulong _extractFloat64Sign(ulong param_1)

{
  return param_1 >> 0x3f;
}



long _packFloat64(int param_1,int param_2,long param_3)

{
  return ((long)param_2 << 0x34) + ((long)param_1 << 0x3f) + param_3;
}



undefined8 _float64_mul(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined local_60;
  undefined7 uStack_5f;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  local_48 = _extractFloat64Frac(param_1);
  local_38 = _extractFloat64Exp(local_20);
  local_2c = _extractFloat64Sign(local_20);
  local_50 = _extractFloat64Frac(local_28);
  local_3c = _extractFloat64Exp(local_28);
  local_30 = _extractFloat64Sign(local_28);
  local_34 = local_2c ^ local_30;
  if (local_38 == 0x7ff) {
    if ((local_48 == 0) && ((local_3c != 0x7ff || (local_50 == 0)))) {
      if (((long)local_3c | local_50) == 0) {
        _float_raise(0x10);
        local_18 = 0x7fffffffffffffff;
      }
      else {
        local_18 = _packFloat64(local_34,0x7ff,0);
      }
    }
    else {
      local_18 = _propagateFloat64NaN(local_20,local_28);
    }
  }
  else if (local_3c == 0x7ff) {
    if (local_50 == 0) {
      if (((long)local_38 | local_48) == 0) {
        _float_raise(0x10);
        local_18 = 0x7fffffffffffffff;
      }
      else {
        local_18 = _packFloat64(local_34,0x7ff,0);
      }
    }
    else {
      local_18 = _propagateFloat64NaN(local_20,local_28);
    }
  }
  else {
    if (local_38 == 0) {
      if (local_48 == 0) {
        uVar2 = _packFloat64(local_34,0,0);
        return uVar2;
      }
      _normalizeFloat64Subnormal(local_48,&local_38,&local_48);
    }
    if (local_3c == 0) {
      if (local_50 == 0) {
        uVar2 = _packFloat64(local_34,0,0);
        return uVar2;
      }
      _normalizeFloat64Subnormal(local_50,&local_3c,&local_50);
    }
    local_40 = local_38 + local_3c + -0x3ff;
    local_48 = (local_48 | 0x10000000000000) << 10;
    local_50 = (local_50 | 0x10000000000000) << 0xb;
    _mul64To128(local_48,local_50,&local_58,&local_60);
    uVar4 = (ulong)(CONCAT71(uStack_5f,local_60) != 0);
    uVar3 = local_58 | uVar4;
    uVar1 = local_58 & 0x7fffffffffffffff;
    local_58 = uVar3;
    if ((uVar1 | uVar4) == 0 || (long)(uVar3 * -2) < 0) {
      local_58 = uVar3 << 1;
      local_40 = local_40 + -1;
    }
    local_18 = _roundAndPackFloat64(local_34,local_40,local_58);
  }
  return local_18;
}



ulong _propagateFloat64NaN(ulong param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  _float64_is_nan(param_1);
  uVar1 = _float64_is_signaling_nan(param_1);
  iVar2 = _float64_is_nan(param_2);
  uVar3 = _float64_is_signaling_nan(param_2);
  local_48 = param_1 | 0x8000000000000;
  local_38 = param_2 | 0x8000000000000;
  if ((uVar1 | uVar3) != 0) {
    _float_raise(0x10);
  }
  if (uVar3 == 0) {
    local_40 = local_48;
    if (uVar1 == 0) {
      if (iVar2 != 0) {
        local_48 = local_38;
      }
      local_40 = local_48;
    }
    local_38 = local_40;
  }
  return local_38;
}



void _normalizeFloat64Subnormal(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  
  iVar1 = _countLeadingZeros64(param_1);
  *param_3 = param_1 << ((ulong)(iVar1 - 0xbU) & 0x3f);
  *param_2 = 1 - (iVar1 - 0xbU);
  return;
}



long _roundAndPackFloat64(int param_1,uint param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  uint local_3c;
  int local_38;
  ulong local_28;
  uint local_20;
  int local_1c;
  
  bVar1 = _float_rounding_mode == 0;
  local_38 = 0x200;
  if (!bVar1) {
    if (_float_rounding_mode == 1) {
      local_38 = 0;
    }
    else {
      local_38 = 0x3ff;
      if (param_1 == 0) {
        if (_float_rounding_mode == 3) {
          local_38 = 0;
        }
      }
      else if (_float_rounding_mode == 2) {
        local_38 = 0;
      }
    }
  }
  local_3c = (uint)param_3 & 0x3ff;
  local_28 = param_3;
  local_20 = param_2;
  local_1c = param_1;
  if (0x7fc < (param_2 & 0xffff)) {
    if ((0x7fd < (int)param_2) || ((param_2 == 0x7fd && ((long)(param_3 + (long)local_38) < 0)))) {
      _float_raise(9);
      lVar2 = _packFloat64(local_1c,0x7ff,0);
      return lVar2 - (ulong)(local_38 == 0);
    }
    if ((int)param_2 < 0) {
      _shift64RightJamming(param_3,-param_2,&local_28);
      local_20 = 0;
      local_3c = (uint)local_28 & 0x3ff;
      if ((local_28 & 0x3ff) != 0) {
        _float_raise(4);
      }
    }
  }
  if (local_3c != 0) {
    _float_exception_flags = _float_exception_flags | 1;
  }
  local_28 = local_28 + (long)local_38 >> 10 & (long)(int)~(uint)(local_3c == 0x200 && bVar1);
  if (local_28 == 0) {
    local_20 = 0;
  }
  lVar2 = _packFloat64(local_1c,local_20,local_28);
  return lVar2;
}



undefined8 _ullong_to_double(void)

{
  undefined8 local_18;
  
  return local_18;
}



int _submain(void)

{
  long lVar1;
  int local_18;
  int local_14;
  
  local_14 = 0;
  _startTimer = _rtclock();
  for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
    lVar1 = _float64_mul(*(undefined8 *)(&_a_input + (long)local_18 * 8),
                         *(undefined8 *)(&_b_input + (long)local_18 * 8));
    local_14 = local_14 + (uint)(lVar1 != *(long *)(&_z_output + (long)local_18 * 8));
  }
  _endTimer = _rtclock();
  __stubs::_printf("%0.6f\n");
  return local_14;
}



undefined4 entry(void)

{
  int local_24;
  
  for (local_24 = 0; local_24 < 1; local_24 = local_24 + 1) {
    _submain();
  }
  return 0;
}



int _countLeadingZeros64(ulong param_1)

{
  int iVar1;
  int local_1c;
  ulong local_18;
  
  local_1c = 0;
  if (param_1 < 0x100000000) {
    local_1c = 0x20;
    local_18 = param_1;
  }
  else {
    local_18 = param_1 >> 0x20;
  }
  iVar1 = _countLeadingZeros32(local_18);
  return local_1c + iVar1;
}



int _countLeadingZeros32(uint param_1)

{
  int local_8;
  uint local_4;
  
  local_8 = 0;
  local_4 = param_1;
  if (param_1 < 0x10000) {
    local_8 = 0x10;
    local_4 = param_1 << 0x10;
  }
  if (local_4 < 0x1000000) {
    local_8 = local_8 + 8;
    local_4 = local_4 << 8;
  }
  return local_8 + *(int *)(&_countLeadingZeros32_countLeadingZerosHigh +
                           (ulong)(local_4 >> 0x18) * 4);
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


