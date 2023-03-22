typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef ulong __darwin_size_t;

typedef __darwin_size_t size_t;

typedef long __darwin_time_t;

typedef int __int32_t;

typedef __int32_t __darwin_suseconds_t;

typedef long __darwin_ssize_t;

typedef __darwin_ssize_t ssize_t;

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




ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  int local_2c;
  undefined *local_28;
  undefined *local_20;
  
  local_20 = (undefined *)(ulong)(uint)param_1;
  local_2c = (int)param_3;
  local_28 = (undefined *)param_2;
  while (0 < local_2c) {
    *local_20 = *local_28;
    local_20 = local_20 + 1;
    local_28 = local_28 + 1;
    local_2c = local_2c + -1;
  }
  return param_3 & 0xffffffff;
}



void _Fill_Buffer(void)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  uint local_14;
  
  sVar2 = _read(0x8800,&_inRdbfr,0x800);
  local_14 = (uint)sVar2;
  _ld_Rdptr = &_ld_Rdbfr;
  if (_System_Stream_Flag != 0) {
    _ld_Rdmax = _ld_Rdmax + -0x800;
  }
  if ((int)local_14 < 0x800) {
    if ((int)local_14 < 0) {
      local_14 = 0;
    }
    while ((local_14 & 3) != 0) {
      lVar3 = (long)(int)local_14;
      local_14 = local_14 + 1;
      (&_ld_Rdbfr)[lVar3] = 0;
    }
    while ((int)local_14 < 0x800) {
      (&_ld_Rdbfr)[(int)local_14] = 0;
      (&_ld_Rdbfr)[(int)(local_14 + 1)] = 0;
      iVar1 = local_14 + 3;
      (&_ld_Rdbfr)[(int)(local_14 + 2)] = 1;
      local_14 = local_14 + 4;
      (&_ld_Rdbfr)[iVar1] = 0xb7;
    }
  }
  return;
}



uint _Show_Bits(int param_1)

{
  return _ld_Bfr >> (ulong)((0x20U - param_1) % 0x20);
}



void _Get_Bits1(void)

{
  _Get_Bits(1);
  return;
}



undefined4 _Get_Bits(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Show_Bits(param_1);
  _Flush_Buffer(param_1);
  return uVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

void _Flush_Buffer(uint param_1)

{
  byte *pbVar1;
  int local_18;
  
  _ld_Bfr = _ld_Bfr << (ulong)(param_1 & 0x1f);
  _ld_Incnt = _ld_Incnt - param_1;
  if (_ld_Incnt < 0x19) {
    local_18 = _ld_Incnt;
    if (_ld_Rdptr < (byte *)0x100008ffc) {
      do {
        pbVar1 = _ld_Rdptr + 1;
        _ld_Bfr = _ld_Bfr | (uint)*_ld_Rdptr << (ulong)(0x18U - local_18 & 0x1f);
        local_18 = local_18 + 8;
        _ld_Rdptr = pbVar1;
      } while (local_18 < 0x19);
    }
    else {
      do {
        if ((byte *)0x100008fff < _ld_Rdptr) {
          _Fill_Buffer();
        }
        pbVar1 = _ld_Rdptr + 1;
        _ld_Bfr = _ld_Bfr | (uint)*_ld_Rdptr << (ulong)(0x18U - local_18 & 0x1f);
        local_18 = local_18 + 8;
        _ld_Rdptr = pbVar1;
      } while (local_18 < 0x19);
    }
    _ld_Incnt = local_18;
  }
  return;
}



int _Get_motion_code(void)

{
  int iVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  iVar1 = _Get_Bits1();
  if (iVar1 == 0) {
    iVar1 = _Show_Bits(9);
    if (iVar1 < 0x40) {
      if (iVar1 < 0x18) {
        iVar1 = iVar1 + -0xc;
        if (iVar1 < 0) {
          local_14 = 0;
        }
        else {
          _Flush_Buffer((long)(char)(&DAT_100003f59)[(long)iVar1 * 2]);
          iVar2 = _Get_Bits1();
          if (iVar2 == 0) {
            local_24 = (int)(char)(&_MVtab2)[(long)iVar1 * 2];
          }
          else {
            local_24 = -(int)(char)(&_MVtab2)[(long)iVar1 * 2];
          }
          local_14 = local_24;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        _Flush_Buffer((long)(char)(&DAT_100003f49)[(long)iVar1 * 2]);
        iVar2 = _Get_Bits1();
        if (iVar2 == 0) {
          local_20 = (int)(char)(&_MVtab1)[(long)iVar1 * 2];
        }
        else {
          local_20 = -(int)(char)(&_MVtab1)[(long)iVar1 * 2];
        }
        local_14 = local_20;
      }
    }
    else {
      iVar1 = iVar1 >> 6;
      _Flush_Buffer((long)(char)(&DAT_100003f39)[(long)iVar1 * 2]);
      iVar2 = _Get_Bits1();
      if (iVar2 == 0) {
        local_1c = (int)(char)(&_MVtab0)[(long)iVar1 * 2];
      }
      else {
        local_1c = -(int)(char)(&_MVtab0)[(long)iVar1 * 2];
      }
      local_14 = local_1c;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



undefined4 _Get_dmvector(void)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = _Get_Bits(1);
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    iVar1 = _Get_Bits();
    local_14 = 1;
    if (iVar1 != 0) {
      local_14 = 0xffffffff;
    }
  }
  return local_14;
}



void _motion_vectors(long param_1,undefined8 param_2,long param_3,int param_4,int param_5,
                    int param_6,undefined4 param_7,undefined4 param_8,int param_9,
                    undefined4 param_10)

{
  undefined4 uVar1;
  
  if (param_5 == 1) {
    if ((param_6 == 0) && (param_9 == 0)) {
      uVar1 = _Get_Bits(1);
      *(undefined4 *)(param_3 + (long)param_4 * 4) = uVar1;
      *(undefined4 *)(param_3 + 8 + (long)param_4 * 4) = uVar1;
    }
    _motion_vector(param_1 + (long)param_4 * 8,param_2,param_7,param_8,param_9,param_10,0);
    *(undefined4 *)(param_1 + 0x10 + (long)param_4 * 8) =
         *(undefined4 *)(param_1 + (long)param_4 * 8);
    *(undefined4 *)(param_1 + (long)param_4 * 8 + 0x14) =
         *(undefined4 *)(param_1 + (long)param_4 * 8 + 4);
  }
  else {
    uVar1 = _Get_Bits();
    *(undefined4 *)(param_3 + (long)param_4 * 4) = uVar1;
    _motion_vector(param_1 + (long)param_4 * 8,param_2,param_7,param_8,param_9,param_10);
    uVar1 = _Get_Bits(1);
    *(undefined4 *)(param_3 + 8 + (long)param_4 * 4) = uVar1;
    _motion_vector(param_1 + 0x10 + (long)param_4 * 8,param_2,param_7,param_8,param_9,param_10,0);
  }
  return;
}



void _motion_vector(long param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6
                   ,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_44;
  undefined4 local_40;
  
  iVar1 = _Get_motion_code();
  if ((param_3 == 0) || (iVar1 == 0)) {
    local_40 = 0;
  }
  else {
    local_40 = _Get_Bits(param_3);
  }
  _decode_motion_vector(param_1,param_3,iVar1,local_40,param_7);
  if (param_5 != 0) {
    uVar2 = _Get_dmvector();
    *param_2 = uVar2;
  }
  iVar1 = _Get_motion_code();
  if ((param_4 == 0) || (iVar1 == 0)) {
    local_44 = 0;
  }
  else {
    local_44 = _Get_Bits(param_4);
  }
  if (param_6 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) >> 1;
  }
  _decode_motion_vector(param_1 + 4,param_4,iVar1,local_44,param_7);
  if (param_6 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) << 1;
  }
  if (param_5 != 0) {
    uVar2 = _Get_dmvector();
    param_2[1] = uVar2;
  }
  return;
}



void _decode_motion_vector(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int local_28;
  int local_24;
  int local_20;
  
  uVar2 = param_2 % 0x20;
  iVar1 = 0x10 << (ulong)(uVar2 & 0x1f);
  if (param_5 == 0) {
    local_24 = *param_1;
  }
  else {
    local_24 = *param_1 >> 1;
  }
  local_20 = local_24;
  if (param_3 < 1) {
    if ((param_3 < 0) &&
       (local_20 = local_24 - ((-1 - param_3 << (ulong)(uVar2 & 0x1f)) + param_4 + 1),
       local_20 < -iVar1)) {
      local_20 = local_20 + iVar1 * 2;
    }
  }
  else {
    local_20 = local_24 + (param_3 + -1 << (ulong)(uVar2 & 0x1f)) + param_4 + 1;
    if (iVar1 <= local_20) {
      local_20 = local_20 + iVar1 * -2;
    }
  }
  if (param_5 == 0) {
    local_28 = local_20;
  }
  else {
    local_28 = local_20 << 1;
  }
  *param_1 = local_28;
  return;
}



void _Initialize_Buffer(void)

{
  _ld_Incnt = 0;
  _ld_Rdptr = &_ld_Rdmax;
  _ld_Rdmax = &_ld_Rdmax;
  _ld_Bfr = 0x4100000;
  _Flush_Buffer(0);
  return;
}



int _submain(void)

{
  int iVar1;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int aiStack_50 [4];
  int aiStack_40 [10];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  _startTimer = _rtclock();
  local_60 = 0;
  _evalue = 0;
  _System_Stream_Flag = 0;
  for (local_54 = 0; local_54 < 2; local_54 = local_54 + 1) {
    aiStack_40[local_54] = 0;
    for (local_58 = 0; local_58 < 2; local_58 = local_58 + 1) {
      aiStack_50[(long)local_54 * 2 + (long)local_58] =
           *(int *)(&_inmvfs + (long)local_58 * 4 + (long)local_54 * 8);
      for (local_5c = 0; local_5c < 2; local_5c = local_5c + 1) {
        aiStack_40[(long)local_54 * 4 + (long)local_58 * 2 + (long)local_5c + 2] =
             *(int *)(&_inPMV + (long)local_5c * 4 + (long)local_58 * 8 + (long)local_54 * 0x10);
      }
    }
  }
  _Initialize_Buffer();
  _motion_vectors(aiStack_40 + 2,aiStack_40,aiStack_50,0,1,0,200,200,0,1);
  for (local_54 = 0; local_54 < 2; local_54 = local_54 + 1) {
    for (local_58 = 0; local_58 < 2; local_58 = local_58 + 1) {
      local_60 = local_60 +
                 (uint)(aiStack_50[(long)local_54 * 2 + (long)local_58] !=
                       *(int *)(&_outmvfs + (long)local_58 * 4 + (long)local_54 * 8));
      for (local_5c = 0; local_5c < 2; local_5c = local_5c + 1) {
        local_60 = local_60 +
                   (uint)(aiStack_40[(long)local_54 * 4 + (long)local_58 * 2 + (long)local_5c + 2]
                         != *(int *)(&_outPMV +
                                    (long)local_5c * 4 + (long)local_58 * 8 + (long)local_54 * 0x10)
                         );
      }
    }
  }
  _endTimer = _rtclock();
  iVar1 = __stubs::_printf("%0.6f\n");
  if (*(long *)__got::___stack_chk_guard != local_18) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail(iVar1);
  }
  return local_60;
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


