typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
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




uint _submain(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int local_1ec;
  int local_1e8;
  short local_1c4;
  int local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint auStack_1a8 [64];
  uint local_a8 [32];
  long local_28;
  
  local_28 = *(long *)__got::___stack_chk_guard;
  lVar8 = 0;
  _startTimer = _rtclock();
  local_1ec = 0;
  for (local_1e8 = 0; local_1e8 < 0x20; local_1e8 = local_1e8 + 1) {
    local_a8[local_1e8] = 0;
  }
  local_a8[29] = 0x7fffeffc;
  for (local_1e8 = 0; local_1e8 < 0x40; local_1e8 = local_1e8 + 1) {
    auStack_1a8[local_1e8] = *(uint *)(&_A + (long)local_1e8 * 4);
  }
  local_1bc = 0x400000;
  do {
    local_1b4 = (uint)((ulong)lVar8 >> 0x20);
    local_1b8 = (uint)lVar8;
    uVar7 = (uint)*(undefined8 *)(&_imem + (long)((int)(local_1bc & 0xff) >> 2) * 8);
    uVar1 = local_1bc + 4;
    uVar5 = uVar7 >> 0x1a;
    if (uVar5 == 0) {
      uVar5 = uVar7 >> 6 & 0x1f;
      uVar3 = uVar7 >> 0xb & 0x1f;
      uVar4 = uVar7 >> 0x10 & 0x1f;
      uVar2 = uVar7 >> 0x15 & 0x1f;
      switch(uVar7 & 0x3f) {
      case 0:
        local_a8[(int)uVar3] = local_a8[(int)uVar4] << (ulong)uVar5;
        break;
      default:
        local_1bc = 0;
        uVar1 = local_1bc;
        break;
      case 2:
        local_a8[(int)uVar3] = (int)local_a8[(int)uVar4] >> uVar5;
        break;
      case 4:
        local_a8[(int)uVar3] = local_a8[(int)uVar4] << (ulong)(local_a8[(int)uVar2] & 0x1f);
        break;
      case 6:
        local_a8[(int)uVar3] = (int)local_a8[(int)uVar4] >> (local_a8[(int)uVar2] & 0x1f);
        break;
      case 8:
        uVar1 = local_a8[(int)uVar2];
        break;
      case 0x10:
        local_a8[(int)uVar3] = local_1b4;
        break;
      case 0x12:
        local_a8[(int)uVar3] = local_1b8;
        break;
      case 0x18:
        lVar8 = (long)(int)local_a8[(int)uVar2] * (long)(int)local_a8[(int)uVar4];
        break;
      case 0x19:
        lVar8 = (ulong)local_a8[(int)uVar2] * (ulong)local_a8[(int)uVar4];
        break;
      case 0x21:
        local_a8[(int)uVar3] = local_a8[(int)uVar2] + local_a8[(int)uVar4];
        break;
      case 0x23:
        local_a8[(int)uVar3] = local_a8[(int)uVar2] - local_a8[(int)uVar4];
        break;
      case 0x24:
        local_a8[(int)uVar3] = local_a8[(int)uVar2] & local_a8[(int)uVar4];
        break;
      case 0x25:
        local_a8[(int)uVar3] = local_a8[(int)uVar2] | local_a8[(int)uVar4];
        break;
      case 0x26:
        local_a8[(int)uVar3] = local_a8[(int)uVar2] ^ local_a8[(int)uVar4];
        break;
      case 0x2a:
        local_a8[(int)uVar3] = (uint)((int)local_a8[(int)uVar2] < (int)local_a8[(int)uVar4]);
        break;
      case 0x2b:
        local_a8[(int)uVar3] = (uint)(local_a8[(int)uVar2] < local_a8[(int)uVar4]);
      }
    }
    else if (uVar5 == 2) {
      uVar1 = (uVar7 & 0x3ffffff) << 2;
    }
    else if (uVar5 == 3) {
      local_a8[31] = uVar1;
      uVar1 = (uVar7 & 0x3ffffff) << 2;
    }
    else {
      local_1c4 = (short)*(undefined8 *)(&_imem + (long)((int)(local_1bc & 0xff) >> 2) * 8);
      uVar3 = uVar7 >> 0x10 & 0x1f;
      uVar4 = uVar7 >> 0x15 & 0x1f;
      switch(uVar5) {
      case 1:
        if (-1 < (int)local_a8[(int)uVar4]) {
          uVar1 = local_1bc + local_1c4 * 4;
        }
        break;
      default:
        local_1bc = 0;
        uVar1 = local_1bc;
        break;
      case 4:
        if (local_a8[(int)uVar4] == local_a8[(int)uVar3]) {
          uVar1 = local_1bc + local_1c4 * 4;
        }
        break;
      case 5:
        if (local_a8[(int)uVar4] != local_a8[(int)uVar3]) {
          uVar1 = local_1bc + local_1c4 * 4;
        }
        break;
      case 9:
        local_a8[(int)uVar3] = local_a8[(int)uVar4] + (int)local_1c4;
        break;
      case 10:
        local_a8[(int)uVar3] = (uint)((int)local_a8[(int)uVar4] < (int)local_1c4);
        break;
      case 0xb:
        local_a8[(int)uVar3] = (uint)(local_a8[(int)uVar4] < (uVar7 & 0xffff));
        break;
      case 0xc:
        local_a8[(int)uVar3] = local_a8[(int)uVar4] & uVar7 & 0xffff;
        break;
      case 0xd:
        local_a8[(int)uVar3] = local_a8[(int)uVar4] | uVar7 & 0xffff;
        break;
      case 0xe:
        local_a8[(int)uVar3] = local_a8[(int)uVar4] ^ uVar7 & 0xffff;
        break;
      case 0xf:
        local_a8[(int)uVar3] = (int)local_1c4 << 0x10;
        break;
      case 0x23:
        local_a8[(int)uVar3] = auStack_1a8[(int)(local_a8[(int)uVar4] + (int)local_1c4 & 0xff) >> 2]
        ;
        break;
      case 0x2b:
        auStack_1a8[(int)(local_a8[(int)uVar4] + (int)local_1c4 & 0xff) >> 2] = local_a8[(int)uVar3]
        ;
      }
    }
    local_1bc = uVar1;
    local_a8[0] = 0;
    local_1ec = local_1ec + 1;
  } while (local_1bc != 0);
  _main_result = (uint)(local_1ec != 0x263);
  for (local_1c0 = 0; local_1c0 < 8; local_1c0 = local_1c0 + 1) {
    _main_result = _main_result +
                   (auStack_1a8[local_1c0] != *(uint *)(&_outData + (long)local_1c0 * 4));
  }
  _endTimer = _rtclock();
  iVar6 = __stubs::_printf("%0.6f\n");
  if (*(long *)__got::___stack_chk_guard != local_28) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail(iVar6);
  }
  return _main_result;
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


