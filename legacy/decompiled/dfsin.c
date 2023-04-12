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



void _shift64ExtraRightJamming
               (ulong param_1,ulong param_2,uint param_3,ulong *param_4,ulong *param_5)

{
  ulong local_38;
  ulong local_30;
  
  local_38 = param_2;
  local_30 = param_1;
  if (param_3 != 0) {
    if ((int)param_3 < 0x40) {
      local_38 = param_1 << (-param_3 & 0x3f) | (ulong)(param_2 != 0);
      local_30 = param_1 >> ((ulong)param_3 & 0x3f);
    }
    else {
      if (param_3 == 0x40) {
        local_38 = param_1 | param_2 != 0;
      }
      else {
        local_38 = (ulong)((param_1 | param_2) != 0);
      }
      local_30 = 0;
    }
  }
  *param_5 = local_38;
  *param_4 = local_30;
  return;
}



void _add128(long param_1,ulong param_2,long param_3,long param_4,long *param_5,ulong *param_6)

{
  *param_6 = param_2 + param_4;
  *param_5 = param_1 + param_3 + (ulong)(param_2 + param_4 < param_2);
  return;
}



void _sub128(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,long *param_6)

{
  *param_6 = param_2 - param_4;
  *param_5 = (param_1 - param_3) - (ulong)(param_2 < param_4);
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



undefined8 _int32_to_float64(uint param_1)

{
  int iVar1;
  uint local_34;
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_34 = param_1;
    if ((int)param_1 < 0) {
      local_34 = -param_1;
    }
    iVar1 = _countLeadingZeros32(local_34);
    local_18 = _packFloat64((int)param_1 < 0,0x432 - (iVar1 + 0x15U),
                            (ulong)local_34 << ((ulong)(iVar1 + 0x15U) & 0x3f));
  }
  return local_18;
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



undefined8 _float64_add(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  
  iVar1 = _extractFloat64Sign(param_1);
  iVar2 = _extractFloat64Sign(param_2);
  if (iVar1 == iVar2) {
    local_18 = _addFloat64Sigs(param_1,param_2,iVar1);
  }
  else {
    local_18 = _subFloat64Sigs(param_1,param_2,iVar1);
  }
  return local_18;
}



undefined8 _addFloat64Sigs(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_54;
  long local_50;
  ulong local_48;
  ulong local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_2c = param_3;
  local_28 = param_2;
  local_20 = param_1;
  local_40 = _extractFloat64Frac(param_1);
  local_30 = _extractFloat64Exp(local_20);
  local_48 = _extractFloat64Frac(local_28);
  local_34 = _extractFloat64Exp(local_28);
  local_54 = local_30 - local_34;
  local_40 = local_40 * 0x200;
  local_48 = local_48 * 0x200;
  if (local_54 < 1) {
    if (-1 < local_54) {
      if (local_30 == 0x7ff) {
        if ((local_40 | local_48) != 0) {
          uVar2 = _propagateFloat64NaN(local_20,local_28);
          return uVar2;
        }
        return local_20;
      }
      if (local_30 == 0) {
        uVar2 = _packFloat64(local_2c,0,local_40 + local_48 >> 9);
        return uVar2;
      }
      local_50 = local_40 + 0x4000000000000000 + local_48;
      local_38 = local_30;
      iVar1 = local_38;
      goto LAB_100002598;
    }
    if (local_34 == 0x7ff) {
      if (local_48 != 0) {
        uVar2 = _propagateFloat64NaN(local_20,local_28);
        return uVar2;
      }
      uVar2 = _packFloat64(local_2c,0x7ff,0);
      return uVar2;
    }
    if (local_30 == 0) {
      local_54 = local_54 + 1;
    }
    else {
      local_40 = local_40 | 0x2000000000000000;
    }
    _shift64RightJamming(local_40,-local_54,&local_40);
    local_38 = local_34;
  }
  else {
    if (local_30 == 0x7ff) {
      if (local_40 != 0) {
        uVar2 = _propagateFloat64NaN(local_20,local_28);
        return uVar2;
      }
      return local_20;
    }
    if (local_34 == 0) {
      local_54 = local_54 + -1;
    }
    else {
      local_48 = local_48 | 0x2000000000000000;
    }
    _shift64RightJamming(local_48,local_54,&local_48);
    local_38 = local_30;
  }
  local_40 = local_40 | 0x2000000000000000;
  local_50 = (local_40 + local_48) * 2;
  iVar1 = local_38 + -1;
  if (local_50 < 0) {
    local_50 = local_40 + local_48;
    iVar1 = local_38;
  }
LAB_100002598:
  local_38 = iVar1;
  uVar2 = _roundAndPackFloat64(local_2c,local_38,local_50);
  return uVar2;
}



undefined8 _subFloat64Sigs(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  int local_54;
  long local_50;
  ulong local_48;
  ulong local_40;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_2c = param_3;
  local_28 = param_2;
  local_20 = param_1;
  local_40 = _extractFloat64Frac(param_1);
  local_30 = _extractFloat64Exp(local_20);
  local_48 = _extractFloat64Frac(local_28);
  local_34 = _extractFloat64Exp(local_28);
  local_54 = local_30 - local_34;
  uVar2 = local_40 << 10;
  uVar3 = local_48 << 10;
  if (local_54 < 1) {
    if (local_54 < 0) {
      if (local_34 == 0x7ff) {
        if (uVar3 != 0) {
          local_48 = uVar3;
          local_40 = uVar2;
          uVar1 = _propagateFloat64NaN(local_20,local_28);
          return uVar1;
        }
        local_48 = uVar3;
        local_40 = uVar2;
        uVar1 = _packFloat64(local_2c ^ 1,0x7ff,0);
        return uVar1;
      }
      if (local_30 == 0) {
        local_54 = local_54 + 1;
        local_40 = uVar2;
      }
      else {
        local_40 = uVar2 | 0x4000000000000000;
      }
      local_48 = uVar3;
      _shift64RightJamming(local_40,-local_54,&local_40);
      local_48 = local_48 | 0x4000000000000000;
    }
    else {
      if (local_30 == 0x7ff) {
        if (((local_40 | local_48) & 0x3fffffffffffff) != 0) {
          local_48 = uVar3;
          local_40 = uVar2;
          uVar1 = _propagateFloat64NaN(local_20,local_28);
          return uVar1;
        }
        local_48 = uVar3;
        local_40 = uVar2;
        _float_raise(0x10);
        return 0x7fffffffffffffff;
      }
      if (local_30 == 0) {
        local_30 = 1;
        local_34 = 1;
      }
      local_48 = uVar3;
      local_40 = uVar2;
      if (uVar3 < uVar2) goto LAB_10000286c;
      if (uVar3 <= uVar2) {
        uVar1 = _packFloat64(_float_rounding_mode == 3,0,0);
        return uVar1;
      }
    }
    local_50 = local_48 - local_40;
    local_38 = local_34;
    local_2c = local_2c ^ 1;
  }
  else {
    if (local_30 == 0x7ff) {
      if (uVar2 != 0) {
        local_48 = uVar3;
        local_40 = uVar2;
        uVar1 = _propagateFloat64NaN(local_20,local_28);
        return uVar1;
      }
      return local_20;
    }
    if (local_34 == 0) {
      local_54 = local_54 + -1;
      local_48 = uVar3;
    }
    else {
      local_48 = uVar3 | 0x4000000000000000;
    }
    local_40 = uVar2;
    _shift64RightJamming(local_48,local_54,&local_48);
    local_40 = local_40 | 0x4000000000000000;
LAB_10000286c:
    local_50 = local_40 - local_48;
    local_38 = local_30;
  }
  local_38 = local_38 + -1;
  uVar1 = _normalizeRoundAndPackFloat64(local_2c,local_38,local_50);
  return uVar1;
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



undefined8 _float64_div(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
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
    if (local_48 == 0) {
      if (local_3c == 0x7ff) {
        if (local_50 == 0) {
          _float_raise(0x10);
          local_18 = 0x7fffffffffffffff;
        }
        else {
          local_18 = _propagateFloat64NaN(local_20,local_28);
        }
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
      local_18 = _packFloat64(local_34,0,0);
    }
    else {
      local_18 = _propagateFloat64NaN(local_20,local_28);
    }
  }
  else {
    if (local_3c == 0) {
      if (local_50 == 0) {
        if (((long)local_38 | local_48) == 0) {
          _float_raise(0x10);
          return 0x7fffffffffffffff;
        }
        _float_raise(2);
        uVar1 = _packFloat64(local_34,0x7ff,0);
        return uVar1;
      }
      _normalizeFloat64Subnormal(local_50,&local_3c,&local_50);
    }
    if (local_38 == 0) {
      if (local_48 == 0) {
        uVar1 = _packFloat64(local_34,0,0);
        return uVar1;
      }
      _normalizeFloat64Subnormal(local_48,&local_38,&local_48);
    }
    local_40 = (local_38 - local_3c) + 0x3fd;
    uVar2 = local_48 | 0x10000000000000;
    local_48 = uVar2 * 0x400;
    local_50 = (local_50 | 0x10000000000000) << 0xb;
    if (local_50 <= uVar2 * 0x800) {
      local_48 = local_48 >> 1;
      local_40 = (local_38 - local_3c) + 0x3fe;
    }
    local_58 = _estimateDiv128To64(local_48,0,local_50);
    if ((local_58 & 0x1ff) < 3) {
      _mul64To128(local_50,local_58,&local_70,&local_78);
      _sub128(local_48,0,local_70,local_78,&local_60,&local_68);
      while (local_60 < 0) {
        local_58 = local_58 - 1;
        _add128(local_60,local_68,0,local_50,&local_60,&local_68);
      }
      local_58 = local_58 | local_68 != 0;
    }
    local_18 = _roundAndPackFloat64(local_34,local_40,local_58);
  }
  return local_18;
}



ulong _estimateDiv128To64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  long local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  if (param_1 < param_3) {
    local_38 = param_3 >> 0x20;
    if (param_1 < (param_3 & 0xffffffff00000000)) {
      local_70 = 0;
      if (local_38 != 0) {
        local_70 = param_1 / local_38;
      }
      local_70 = local_70 << 0x20;
    }
    else {
      local_70 = 0xffffffff00000000;
    }
    local_68 = local_70;
    local_30 = param_3;
    local_28 = param_2;
    local_20 = param_1;
    _mul64To128(param_3,local_70,&local_58,&local_60);
    _sub128(local_20,local_28,local_58,local_60,&local_48,&local_50);
    while (local_48 < 0) {
      local_68 = local_68 - 0x100000000;
      local_40 = local_30 << 0x20;
      _add128(local_48,local_50,local_38,local_40,&local_48,&local_50);
    }
    uVar1 = local_50 >> 0x20 | local_48 << 0x20;
    if (uVar1 < local_38 << 0x20) {
      local_78 = 0;
      if (local_38 != 0) {
        local_78 = uVar1 / local_38;
      }
    }
    else {
      local_78 = 0xffffffff;
    }
    local_18 = local_68 | local_78;
  }
  else {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}



bool _float64_le(ulong param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  iVar2 = _extractFloat64Exp(param_1);
  if (((iVar2 == 0x7ff) && (lVar5 = _extractFloat64Frac(param_1), lVar5 != 0)) ||
     ((iVar2 = _extractFloat64Exp(param_2), iVar2 == 0x7ff &&
      (lVar5 = _extractFloat64Frac(param_2), lVar5 != 0)))) {
    _float_raise(0x10);
    bVar1 = false;
  }
  else {
    uVar3 = _extractFloat64Sign(param_1);
    uVar4 = _extractFloat64Sign(param_2);
    if (uVar3 == uVar4) {
      bVar1 = true;
      if (param_1 != param_2) {
        bVar1 = uVar3 != param_1 < param_2;
      }
    }
    else {
      bVar1 = true;
      if (uVar3 == 0) {
        bVar1 = ((param_1 | param_2) & 0x7fffffffffffffff) == 0;
      }
    }
  }
  return bVar1;
}



void _float64_ge(undefined8 param_1,undefined8 param_2)

{
  _float64_le(param_2,param_1);
  return;
}



ulong _float64_neg(ulong param_1)

{
  return ~param_1 & 0x8000000000000000 | param_1 & 0x7fffffffffffffff;
}



ulong _float64_abs(ulong param_1)

{
  return param_1 & 0x7fffffffffffffff;
}



undefined8 _local_sin(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_34;
  undefined8 local_28;
  undefined8 local_20;
  
  local_34 = 1;
  _float64_mul(param_1,param_1);
  uVar2 = _float64_neg();
  local_28 = param_1;
  local_20 = param_1;
  do {
    uVar3 = _float64_mul(local_28,uVar2);
    uVar4 = _int32_to_float64(local_34 * 2 * (local_34 * 2 + 1));
    local_28 = _float64_div(uVar3,uVar4);
    local_20 = _float64_add(local_20,local_28);
    local_34 = local_34 + 1;
    uVar3 = _float64_abs(local_28);
    iVar1 = _float64_ge(uVar3,0x3ee4f8b588e368f1);
  } while (iVar1 != 0);
  return local_20;
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
  for (local_18 = 0; local_18 < 0x24; local_18 = local_18 + 1) {
    lVar1 = _local_sin(*(undefined8 *)(&_test_in + (long)local_18 * 8));
    local_14 = local_14 + (uint)(lVar1 != *(long *)(&_test_out + (long)local_18 * 8));
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



void _normalizeRoundAndPackFloat64(undefined4 param_1,int param_2,long param_3)

{
  int iVar1;
  
  iVar1 = _countLeadingZeros64(param_3);
  _roundAndPackFloat64(param_1,param_2 - (iVar1 - 1U),param_3 << ((ulong)(iVar1 - 1U) & 0x3f));
  return;
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


