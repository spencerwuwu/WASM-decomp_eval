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




void _encrypt(char *param_1,int param_2)

{
  int in_w2;
  int local_70;
  int aiStack_58 [16];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  __stubs::_memcpy(aiStack_58,&DAT_100007668,0x40);
  _KeySchedule(in_w2,param_2);
  if (in_w2 == 0x1f480) {
    _round_val = 0;
    _nb = 4;
    goto LAB_100003a04;
  }
  if (in_w2 == 0x1f4c0) {
LAB_1000039b0:
    _round_val = 2;
    _nb = 6;
  }
  else {
    if (in_w2 != 0x1f500) {
      if (in_w2 == 0x2ee80) {
        _round_val = 2;
        _nb = 4;
        goto LAB_100003a04;
      }
      if (in_w2 == 0x2eec0) goto LAB_1000039b0;
      if (in_w2 != 0x2ef00) {
        if (in_w2 == 0x3e880) {
          _round_val = 4;
          _nb = 4;
          goto LAB_100003a04;
        }
        if (in_w2 == 0x3e8c0) {
          _round_val = 4;
          _nb = 6;
          goto LAB_100003a04;
        }
        if (in_w2 != 0x3e900) goto LAB_100003a04;
      }
    }
    _round_val = 4;
    _nb = 8;
  }
LAB_100003a04:
  _AddRoundKey(param_1,in_w2,0);
  for (local_70 = 1; local_70 <= _round_val + 9; local_70 = local_70 + 1) {
    _ByteSub_ShiftRow(param_1,_nb);
    _MixColumn_AddRoundKey(param_1,_nb,local_70);
  }
  _ByteSub_ShiftRow(param_1,_nb);
  _AddRoundKey(param_1,in_w2,local_70);
  for (local_70 = 0; local_70 < 0x10; local_70 = local_70 + 1) {
    _main_result = _main_result +
                   (uint)(*(int *)(param_1 + (long)local_70 * 4) != aiStack_58[local_70]);
  }
  if (*(long *)__got::___stack_chk_guard == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stubs::___stack_chk_fail();
}



undefined4 _KeySchedule(int param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 local_2c;
  uint local_28 [4];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  if (param_1 == 0x1f480) {
    local_3c = 4;
    local_40 = 4;
    local_44 = 10;
  }
  else if (param_1 == 0x1f4c0) {
    local_3c = 4;
    local_40 = 6;
    local_44 = 0xc;
  }
  else if (param_1 == 0x1f500) {
    local_3c = 4;
    local_40 = 8;
    local_44 = 0xe;
  }
  else if (param_1 == 0x2ee80) {
    local_3c = 6;
    local_40 = 4;
    local_44 = 0xc;
  }
  else if (param_1 == 0x2eec0) {
    local_3c = 6;
    local_40 = 6;
    local_44 = 0xc;
  }
  else if (param_1 == 0x2ef00) {
    local_3c = 6;
    local_40 = 8;
    local_44 = 0xe;
  }
  else if (param_1 == 0x3e880) {
    local_3c = 8;
    local_40 = 4;
    local_44 = 0xe;
  }
  else if (param_1 == 0x3e8c0) {
    local_3c = 8;
    local_40 = 6;
    local_44 = 0xe;
  }
  else {
    if (param_1 != 0x3e900) {
      local_2c = 0xffffffff;
      goto LAB_100004024;
    }
    local_3c = 8;
    local_40 = 8;
    local_44 = 0xe;
  }
  for (local_4c = 0; (int)local_4c < (int)local_3c; local_4c = local_4c + 1) {
    for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
      *(undefined4 *)(&_word + (long)(int)local_4c * 4 + (long)local_48 * 0x1e0) =
           *(undefined4 *)(param_2 + (long)(int)(local_48 + local_4c * 4) * 4);
    }
  }
  for (local_4c = local_3c; (int)local_4c < local_40 * (local_44 + 1); local_4c = local_4c + 1) {
    iVar1 = 0;
    if (local_3c != 0) {
      iVar1 = (int)local_4c / (int)local_3c;
    }
    if (local_4c == iVar1 * local_3c) {
      local_28[0] = _SubByte(*(undefined4 *)(&DAT_10000c304 + (long)(int)(local_4c - 1) * 4));
      iVar1 = 0;
      if (local_3c != 0) {
        iVar1 = (int)local_4c / (int)local_3c;
      }
      local_28[0] = local_28[0] ^ (&_Rcon0)[iVar1 + -1];
      local_28[1] = _SubByte(*(undefined4 *)(&DAT_10000c4e4 + (long)(int)(local_4c - 1) * 4));
      local_28[2] = _SubByte(*(undefined4 *)(&DAT_10000c6c4 + (long)(int)(local_4c - 1) * 4));
      local_28[3] = _SubByte(*(undefined4 *)(&_word + (long)(int)(local_4c - 1) * 4));
    }
    iVar1 = 0;
    if (local_3c != 0) {
      iVar1 = (int)local_4c / (int)local_3c;
    }
    if (local_4c != iVar1 * local_3c) {
      local_28[0] = *(uint *)(&_word + (long)(int)(local_4c - 1) * 4);
      local_28[1] = *(undefined4 *)(&DAT_10000c304 + (long)(int)(local_4c - 1) * 4);
      local_28[2] = *(undefined4 *)(&DAT_10000c4e4 + (long)(int)(local_4c - 1) * 4);
      local_28[3] = *(undefined4 *)(&DAT_10000c6c4 + (long)(int)(local_4c - 1) * 4);
    }
    if (6 < local_3c) {
      iVar1 = 0;
      if (local_3c != 0) {
        iVar1 = (int)local_4c / (int)local_3c;
      }
      if (local_4c - iVar1 * local_3c == 4) {
        for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
          uVar2 = _SubByte(local_28[local_48]);
          local_28[local_48] = uVar2;
        }
      }
    }
    for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
      *(uint *)(&_word + (long)(int)local_4c * 4 + (long)local_48 * 0x1e0) =
           *(uint *)(&_word + (long)(int)(local_4c - local_3c) * 4 + (long)local_48 * 0x1e0) ^
           local_28[local_48];
    }
  }
  local_2c = 0;
LAB_100004024:
  if (*(long *)__got::___stack_chk_guard == local_18) {
    return local_2c;
  }
                    // WARNING: Subroutine does not return
  __stubs::___stack_chk_fail();
}



undefined8 _AddRoundKey(long param_1,int param_2,int param_3)

{
  uint *puVar1;
  int local_18;
  int local_14;
  
  if (param_2 == 0x1f480) {
LAB_10000416c:
    local_18 = 4;
  }
  else {
    if (param_2 == 0x1f4c0) {
LAB_100004178:
      local_18 = 6;
      goto LAB_100004190;
    }
    if (param_2 != 0x1f500) {
      if (param_2 == 0x2ee80) goto LAB_10000416c;
      if (param_2 == 0x2eec0) goto LAB_100004178;
      if (param_2 != 0x2ef00) {
        if (param_2 == 0x3e880) goto LAB_10000416c;
        if (param_2 == 0x3e8c0) goto LAB_100004178;
        if (param_2 != 0x3e900) goto LAB_100004190;
      }
    }
    local_18 = 8;
  }
LAB_100004190:
  for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
    puVar1 = (uint *)(param_1 + (long)(local_14 << 2) * 4);
    *puVar1 = *puVar1 ^ *(uint *)(&_word + (long)(local_14 + local_18 * param_3) * 4);
    puVar1 = (uint *)(param_1 + (long)(local_14 * 4 + 1) * 4);
    *puVar1 = *puVar1 ^ *(uint *)(&DAT_10000c304 + (long)(local_14 + local_18 * param_3) * 4);
    puVar1 = (uint *)(param_1 + (long)(local_14 * 4 + 2) * 4);
    *puVar1 = *puVar1 ^ *(uint *)(&DAT_10000c4e4 + (long)(local_14 + local_18 * param_3) * 4);
    puVar1 = (uint *)(param_1 + (long)(local_14 * 4 + 3) * 4);
    *puVar1 = *puVar1 ^ *(uint *)(&DAT_10000c6c4 + (long)(local_14 + local_18 * param_3) * 4);
  }
  return 0;
}



void _ByteSub_ShiftRow(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 4) {
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[1] & 0xf) * 4 +
                               (long)((int)param_1[1] >> 4) * 0x40);
    param_1[1] = *(uint *)(&_Sbox + (long)(int)(param_1[5] & 0xf) * 4 +
                                    (long)((int)param_1[5] >> 4) * 0x40);
    param_1[5] = *(uint *)(&_Sbox + (long)(int)(param_1[9] & 0xf) * 4 +
                                    (long)((int)param_1[9] >> 4) * 0x40);
    param_1[9] = *(uint *)(&_Sbox + (long)(int)(param_1[0xd] & 0xf) * 4 +
                                    (long)((int)param_1[0xd] >> 4) * 0x40);
    param_1[0xd] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[2] & 0xf) * 4 +
                               (long)((int)param_1[2] >> 4) * 0x40);
    param_1[2] = *(uint *)(&_Sbox + (long)(int)(param_1[10] & 0xf) * 4 +
                                    (long)((int)param_1[10] >> 4) * 0x40);
    param_1[10] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[6] & 0xf) * 4 +
                               (long)((int)param_1[6] >> 4) * 0x40);
    param_1[6] = *(uint *)(&_Sbox + (long)(int)(param_1[0xe] & 0xf) * 4 +
                                    (long)((int)param_1[0xe] >> 4) * 0x40);
    param_1[0xe] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[3] & 0xf) * 4 +
                               (long)((int)param_1[3] >> 4) * 0x40);
    param_1[3] = *(uint *)(&_Sbox + (long)(int)(param_1[0xf] & 0xf) * 4 +
                                    (long)((int)param_1[0xf] >> 4) * 0x40);
    param_1[0xf] = *(uint *)(&_Sbox + (long)(int)(param_1[0xb] & 0xf) * 4 +
                                      (long)((int)param_1[0xb] >> 4) * 0x40);
    param_1[0xb] = *(uint *)(&_Sbox + (long)(int)(param_1[7] & 0xf) * 4 +
                                      (long)((int)param_1[7] >> 4) * 0x40);
    param_1[7] = uVar1;
    *param_1 = *(uint *)(&_Sbox + (long)(int)(*param_1 & 0xf) * 4 +
                                  (long)((int)*param_1 >> 4) * 0x40);
    param_1[4] = *(uint *)(&_Sbox + (long)(int)(param_1[4] & 0xf) * 4 +
                                    (long)((int)param_1[4] >> 4) * 0x40);
    param_1[8] = *(uint *)(&_Sbox + (long)(int)(param_1[8] & 0xf) * 4 +
                                    (long)((int)param_1[8] >> 4) * 0x40);
    param_1[0xc] = *(uint *)(&_Sbox + (long)(int)(param_1[0xc] & 0xf) * 4 +
                                      (long)((int)param_1[0xc] >> 4) * 0x40);
  }
  else if (param_2 == 6) {
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[1] & 0xf) * 4 +
                               (long)((int)param_1[1] >> 4) * 0x40);
    param_1[1] = *(uint *)(&_Sbox + (long)(int)(param_1[5] & 0xf) * 4 +
                                    (long)((int)param_1[5] >> 4) * 0x40);
    param_1[5] = *(uint *)(&_Sbox + (long)(int)(param_1[9] & 0xf) * 4 +
                                    (long)((int)param_1[9] >> 4) * 0x40);
    param_1[9] = *(uint *)(&_Sbox + (long)(int)(param_1[0xd] & 0xf) * 4 +
                                    (long)((int)param_1[0xd] >> 4) * 0x40);
    param_1[0xd] = *(uint *)(&_Sbox + (long)(int)(param_1[0x11] & 0xf) * 4 +
                                      (long)((int)param_1[0x11] >> 4) * 0x40);
    param_1[0x11] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x15] & 0xf) * 4 +
                            (long)((int)param_1[0x15] >> 4) * 0x40);
    param_1[0x15] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[2] & 0xf) * 4 +
                               (long)((int)param_1[2] >> 4) * 0x40);
    param_1[2] = *(uint *)(&_Sbox + (long)(int)(param_1[10] & 0xf) * 4 +
                                    (long)((int)param_1[10] >> 4) * 0x40);
    param_1[10] = *(uint *)(&_Sbox + (long)(int)(param_1[0x12] & 0xf) * 4 +
                                     (long)((int)param_1[0x12] >> 4) * 0x40);
    param_1[0x12] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[6] & 0xf) * 4 +
                               (long)((int)param_1[6] >> 4) * 0x40);
    param_1[6] = *(uint *)(&_Sbox + (long)(int)(param_1[0xe] & 0xf) * 4 +
                                    (long)((int)param_1[0xe] >> 4) * 0x40);
    param_1[0xe] = *(uint *)(&_Sbox + (long)(int)(param_1[0x16] & 0xf) * 4 +
                                      (long)((int)param_1[0x16] >> 4) * 0x40);
    param_1[0x16] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[3] & 0xf) * 4 +
                               (long)((int)param_1[3] >> 4) * 0x40);
    param_1[3] = *(uint *)(&_Sbox + (long)(int)(param_1[0xf] & 0xf) * 4 +
                                    (long)((int)param_1[0xf] >> 4) * 0x40);
    param_1[0xf] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[7] & 0xf) * 4 +
                               (long)((int)param_1[7] >> 4) * 0x40);
    param_1[7] = *(uint *)(&_Sbox + (long)(int)(param_1[0x13] & 0xf) * 4 +
                                    (long)((int)param_1[0x13] >> 4) * 0x40);
    param_1[0x13] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[0xb] & 0xf) * 4 +
                               (long)((int)param_1[0xb] >> 4) * 0x40);
    param_1[0xb] = *(uint *)(&_Sbox + (long)(int)(param_1[0x17] & 0xf) * 4 +
                                      (long)((int)param_1[0x17] >> 4) * 0x40);
    param_1[0x17] = uVar1;
    *param_1 = *(uint *)(&_Sbox + (long)(int)(*param_1 & 0xf) * 4 +
                                  (long)((int)*param_1 >> 4) * 0x40);
    param_1[4] = *(uint *)(&_Sbox + (long)(int)(param_1[4] & 0xf) * 4 +
                                    (long)((int)param_1[4] >> 4) * 0x40);
    param_1[8] = *(uint *)(&_Sbox + (long)(int)(param_1[8] & 0xf) * 4 +
                                    (long)((int)param_1[8] >> 4) * 0x40);
    param_1[0xc] = *(uint *)(&_Sbox + (long)(int)(param_1[0xc] & 0xf) * 4 +
                                      (long)((int)param_1[0xc] >> 4) * 0x40);
    param_1[0x10] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x10] & 0xf) * 4 +
                            (long)((int)param_1[0x10] >> 4) * 0x40);
    param_1[0x14] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x14] & 0xf) * 4 +
                            (long)((int)param_1[0x14] >> 4) * 0x40);
  }
  else if (param_2 == 8) {
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[1] & 0xf) * 4 +
                               (long)((int)param_1[1] >> 4) * 0x40);
    param_1[1] = *(uint *)(&_Sbox + (long)(int)(param_1[5] & 0xf) * 4 +
                                    (long)((int)param_1[5] >> 4) * 0x40);
    param_1[5] = *(uint *)(&_Sbox + (long)(int)(param_1[9] & 0xf) * 4 +
                                    (long)((int)param_1[9] >> 4) * 0x40);
    param_1[9] = *(uint *)(&_Sbox + (long)(int)(param_1[0xd] & 0xf) * 4 +
                                    (long)((int)param_1[0xd] >> 4) * 0x40);
    param_1[0xd] = *(uint *)(&_Sbox + (long)(int)(param_1[0x11] & 0xf) * 4 +
                                      (long)((int)param_1[0x11] >> 4) * 0x40);
    param_1[0x11] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x15] & 0xf) * 4 +
                            (long)((int)param_1[0x15] >> 4) * 0x40);
    param_1[0x15] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x19] & 0xf) * 4 +
                            (long)((int)param_1[0x19] >> 4) * 0x40);
    param_1[0x19] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x1d] & 0xf) * 4 +
                            (long)((int)param_1[0x1d] >> 4) * 0x40);
    param_1[0x1d] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[2] & 0xf) * 4 +
                               (long)((int)param_1[2] >> 4) * 0x40);
    param_1[2] = *(uint *)(&_Sbox + (long)(int)(param_1[0xe] & 0xf) * 4 +
                                    (long)((int)param_1[0xe] >> 4) * 0x40);
    param_1[0xe] = *(uint *)(&_Sbox + (long)(int)(param_1[0x1a] & 0xf) * 4 +
                                      (long)((int)param_1[0x1a] >> 4) * 0x40);
    param_1[0x1a] =
         *(uint *)(&_Sbox + (long)(int)(param_1[6] & 0xf) * 4 + (long)((int)param_1[6] >> 4) * 0x40)
    ;
    param_1[6] = *(uint *)(&_Sbox + (long)(int)(param_1[0x12] & 0xf) * 4 +
                                    (long)((int)param_1[0x12] >> 4) * 0x40);
    param_1[0x12] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x1e] & 0xf) * 4 +
                            (long)((int)param_1[0x1e] >> 4) * 0x40);
    param_1[0x1e] =
         *(uint *)(&_Sbox + (long)(int)(param_1[10] & 0xf) * 4 +
                            (long)((int)param_1[10] >> 4) * 0x40);
    param_1[10] = *(uint *)(&_Sbox + (long)(int)(param_1[0x16] & 0xf) * 4 +
                                     (long)((int)param_1[0x16] >> 4) * 0x40);
    param_1[0x16] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[3] & 0xf) * 4 +
                               (long)((int)param_1[3] >> 4) * 0x40);
    param_1[3] = *(uint *)(&_Sbox + (long)(int)(param_1[0x13] & 0xf) * 4 +
                                    (long)((int)param_1[0x13] >> 4) * 0x40);
    param_1[0x13] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[7] & 0xf) * 4 +
                               (long)((int)param_1[7] >> 4) * 0x40);
    param_1[7] = *(uint *)(&_Sbox + (long)(int)(param_1[0x17] & 0xf) * 4 +
                                    (long)((int)param_1[0x17] >> 4) * 0x40);
    param_1[0x17] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[0xb] & 0xf) * 4 +
                               (long)((int)param_1[0xb] >> 4) * 0x40);
    param_1[0xb] = *(uint *)(&_Sbox + (long)(int)(param_1[0x1b] & 0xf) * 4 +
                                      (long)((int)param_1[0x1b] >> 4) * 0x40);
    param_1[0x1b] = uVar1;
    uVar1 = *(uint *)(&_Sbox + (long)(int)(param_1[0xf] & 0xf) * 4 +
                               (long)((int)param_1[0xf] >> 4) * 0x40);
    param_1[0xf] = *(uint *)(&_Sbox + (long)(int)(param_1[0x1f] & 0xf) * 4 +
                                      (long)((int)param_1[0x1f] >> 4) * 0x40);
    param_1[0x1f] = uVar1;
    *param_1 = *(uint *)(&_Sbox + (long)(int)(*param_1 & 0xf) * 4 +
                                  (long)((int)*param_1 >> 4) * 0x40);
    param_1[4] = *(uint *)(&_Sbox + (long)(int)(param_1[4] & 0xf) * 4 +
                                    (long)((int)param_1[4] >> 4) * 0x40);
    param_1[8] = *(uint *)(&_Sbox + (long)(int)(param_1[8] & 0xf) * 4 +
                                    (long)((int)param_1[8] >> 4) * 0x40);
    param_1[0xc] = *(uint *)(&_Sbox + (long)(int)(param_1[0xc] & 0xf) * 4 +
                                      (long)((int)param_1[0xc] >> 4) * 0x40);
    param_1[0x10] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x10] & 0xf) * 4 +
                            (long)((int)param_1[0x10] >> 4) * 0x40);
    param_1[0x14] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x14] & 0xf) * 4 +
                            (long)((int)param_1[0x14] >> 4) * 0x40);
    param_1[0x18] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x18] & 0xf) * 4 +
                            (long)((int)param_1[0x18] >> 4) * 0x40);
    param_1[0x1c] =
         *(uint *)(&_Sbox + (long)(int)(param_1[0x1c] & 0xf) * 4 +
                            (long)((int)param_1[0x1c] >> 4) * 0x40);
  }
  return;
}



undefined8 _MixColumn_AddRoundKey(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int local_ac;
  uint auStack_98 [32];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  for (local_ac = 0; local_ac < param_2; local_ac = local_ac + 1) {
    auStack_98[local_ac << 2] = *(int *)(param_1 + (long)(local_ac << 2) * 4) << 1;
    if ((int)auStack_98[local_ac << 2] >> 8 == 1) {
      auStack_98[local_ac << 2] = auStack_98[local_ac << 2] ^ 0x11b;
    }
    uVar1 = *(uint *)(param_1 + (long)(local_ac * 4 + 1) * 4);
    uVar1 = uVar1 ^ uVar1 << 1;
    if ((int)uVar1 >> 8 == 1) {
      auStack_98[local_ac << 2] = auStack_98[local_ac << 2] ^ uVar1 ^ 0x11b;
    }
    else {
      auStack_98[local_ac << 2] = auStack_98[local_ac << 2] ^ uVar1;
    }
    auStack_98[local_ac << 2] =
         auStack_98[local_ac << 2] ^
         *(uint *)(param_1 + (long)(local_ac * 4 + 2) * 4) ^
         *(uint *)(param_1 + (long)(local_ac * 4 + 3) * 4) ^
         *(uint *)(&_word + (long)(local_ac + param_2 * param_3) * 4);
    auStack_98[local_ac * 4 + 1] = *(int *)(param_1 + (long)(local_ac * 4 + 1) * 4) << 1;
    if ((int)auStack_98[local_ac * 4 + 1] >> 8 == 1) {
      auStack_98[local_ac * 4 + 1] = auStack_98[local_ac * 4 + 1] ^ 0x11b;
    }
    uVar1 = *(uint *)(param_1 + (long)(local_ac * 4 + 2) * 4);
    uVar1 = uVar1 ^ uVar1 << 1;
    if ((int)uVar1 >> 8 == 1) {
      auStack_98[local_ac * 4 + 1] = auStack_98[local_ac * 4 + 1] ^ uVar1 ^ 0x11b;
    }
    else {
      auStack_98[local_ac * 4 + 1] = auStack_98[local_ac * 4 + 1] ^ uVar1;
    }
    auStack_98[local_ac * 4 + 1] =
         auStack_98[local_ac * 4 + 1] ^
         *(uint *)(param_1 + (long)(local_ac * 4 + 3) * 4) ^
         *(uint *)(param_1 + (long)(local_ac << 2) * 4) ^
         *(uint *)(&DAT_10000c304 + (long)(local_ac + param_2 * param_3) * 4);
    auStack_98[local_ac * 4 + 2] = *(int *)(param_1 + (long)(local_ac * 4 + 2) * 4) << 1;
    if ((int)auStack_98[local_ac * 4 + 2] >> 8 == 1) {
      auStack_98[local_ac * 4 + 2] = auStack_98[local_ac * 4 + 2] ^ 0x11b;
    }
    uVar1 = *(uint *)(param_1 + (long)(local_ac * 4 + 3) * 4);
    uVar1 = uVar1 ^ uVar1 << 1;
    if ((int)uVar1 >> 8 == 1) {
      auStack_98[local_ac * 4 + 2] = auStack_98[local_ac * 4 + 2] ^ uVar1 ^ 0x11b;
    }
    else {
      auStack_98[local_ac * 4 + 2] = auStack_98[local_ac * 4 + 2] ^ uVar1;
    }
    auStack_98[local_ac * 4 + 2] =
         auStack_98[local_ac * 4 + 2] ^
         *(uint *)(param_1 + (long)(local_ac << 2) * 4) ^
         *(uint *)(param_1 + (long)(local_ac * 4 + 1) * 4) ^
         *(uint *)(&DAT_10000c4e4 + (long)(local_ac + param_2 * param_3) * 4);
    auStack_98[local_ac * 4 + 3] = *(int *)(param_1 + (long)(local_ac * 4 + 3) * 4) << 1;
    if ((int)auStack_98[local_ac * 4 + 3] >> 8 == 1) {
      auStack_98[local_ac * 4 + 3] = auStack_98[local_ac * 4 + 3] ^ 0x11b;
    }
    uVar1 = *(uint *)(param_1 + (long)(local_ac << 2) * 4);
    uVar1 = uVar1 ^ uVar1 << 1;
    if ((int)uVar1 >> 8 == 1) {
      auStack_98[local_ac * 4 + 3] = auStack_98[local_ac * 4 + 3] ^ uVar1 ^ 0x11b;
    }
    else {
      auStack_98[local_ac * 4 + 3] = auStack_98[local_ac * 4 + 3] ^ uVar1;
    }
    auStack_98[local_ac * 4 + 3] =
         auStack_98[local_ac * 4 + 3] ^
         *(uint *)(param_1 + (long)(local_ac * 4 + 1) * 4) ^
         *(uint *)(param_1 + (long)(local_ac * 4 + 2) * 4) ^
         *(uint *)(&DAT_10000c6c4 + (long)(local_ac + param_2 * param_3) * 4);
  }
  for (local_ac = 0; local_ac < param_2; local_ac = local_ac + 1) {
    *(uint *)(param_1 + (long)(local_ac << 2) * 4) = auStack_98[local_ac << 2];
    *(uint *)(param_1 + (long)(local_ac * 4 + 1) * 4) = auStack_98[local_ac * 4 + 1];
    *(uint *)(param_1 + (long)(local_ac * 4 + 2) * 4) = auStack_98[local_ac * 4 + 2];
    *(uint *)(param_1 + (long)(local_ac * 4 + 3) * 4) = auStack_98[local_ac * 4 + 3];
  }
  if (*(long *)__got::___stack_chk_guard != local_18) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail();
  }
  return 0;
}



undefined8 _decrypt(long param_1,undefined8 param_2,int param_3)

{
  int local_70;
  int aiStack_58 [16];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  __stubs::_memcpy(aiStack_58,&DAT_1000076a8,0x40);
  _KeySchedule(param_3,param_2);
  if (param_3 == 0x1f480) {
    _round_val = 10;
    _nb = 4;
    goto LAB_100005b48;
  }
  if (param_3 == 0x1f4c0) {
LAB_100005aa0:
    _round_val = 0xc;
    _nb = 6;
  }
  else {
    if (param_3 != 0x1f500) {
      if (param_3 == 0x2ee80) {
        _round_val = 0xc;
        _nb = 4;
        goto LAB_100005b48;
      }
      if (param_3 == 0x2eec0) goto LAB_100005aa0;
      if (param_3 != 0x2ef00) {
        if (param_3 == 0x3e880) {
          _round_val = 0xe;
          _nb = 4;
        }
        else if (param_3 == 0x3e8c0) {
          _round_val = 0xe;
          _nb = 6;
        }
        else if (param_3 == 0x3e900) {
          _round_val = 0xe;
          _nb = 8;
        }
        goto LAB_100005b48;
      }
    }
    _round_val = 0xe;
    _nb = 8;
  }
LAB_100005b48:
  _AddRoundKey(param_1,param_3,_round_val);
  _InversShiftRow_ByteSub(param_1,_nb);
  local_70 = _round_val;
  while (local_70 = local_70 + -1, 0 < local_70) {
    _AddRoundKey_InversMixColumn(param_1,_nb,local_70);
    _InversShiftRow_ByteSub(param_1,_nb);
  }
  _AddRoundKey(param_1,param_3,0);
  for (local_70 = 0; local_70 < 0x10; local_70 = local_70 + 1) {
    _main_result = _main_result +
                   (uint)(*(int *)(param_1 + (long)local_70 * 4) != aiStack_58[local_70]);
  }
  if (*(long *)__got::___stack_chk_guard == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stubs::___stack_chk_fail();
}



void _InversShiftRow_ByteSub(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 4) {
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0xd] & 0xf) * 4 + (long)((int)param_1[0xd] >> 4) * 0x40);
    param_1[0xd] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[9] & 0xf) * 4 + (long)((int)param_1[9] >> 4) * 0x40)
    ;
    param_1[9] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[5] & 0xf) * 4 + (long)((int)param_1[5] >> 4) * 0x40);
    param_1[5] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[1] & 0xf) * 4 + (long)((int)param_1[1] >> 4) * 0x40);
    param_1[1] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0xe] & 0xf) * 4 + (long)((int)param_1[0xe] >> 4) * 0x40);
    param_1[0xe] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[6] & 0xf) * 4 + (long)((int)param_1[6] >> 4) * 0x40)
    ;
    param_1[6] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[2] & 0xf) * 4 + (long)((int)param_1[2] >> 4) * 0x40);
    param_1[2] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[10] & 0xf) * 4 + (long)((int)param_1[10] >> 4) * 0x40)
    ;
    param_1[10] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0xf] & 0xf) * 4 + (long)((int)param_1[0xf] >> 4) * 0x40);
    param_1[0xf] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[3] & 0xf) * 4 + (long)((int)param_1[3] >> 4) * 0x40)
    ;
    param_1[3] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[7] & 0xf) * 4 + (long)((int)param_1[7] >> 4) * 0x40);
    param_1[7] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[0xb] & 0xf) * 4 +
                          (long)((int)param_1[0xb] >> 4) * 0x40);
    param_1[0xb] = uVar1;
    *param_1 = *(uint *)(&_invSbox +
                        (long)(int)(*param_1 & 0xf) * 4 + (long)((int)*param_1 >> 4) * 0x40);
    param_1[4] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[4] & 0xf) * 4 + (long)((int)param_1[4] >> 4) * 0x40);
    param_1[8] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[8] & 0xf) * 4 + (long)((int)param_1[8] >> 4) * 0x40);
    param_1[0xc] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[0xc] & 0xf) * 4 +
                            (long)((int)param_1[0xc] >> 4) * 0x40);
  }
  else if (param_2 == 6) {
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x15] & 0xf) * 4 + (long)((int)param_1[0x15] >> 4) * 0x40);
    param_1[0x15] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x11] & 0xf) * 4 + (long)((int)param_1[0x11] >> 4) * 0x40);
    param_1[0x11] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0xd] & 0xf) * 4 + (long)((int)param_1[0xd] >> 4) * 0x40);
    param_1[0xd] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[9] & 0xf) * 4 + (long)((int)param_1[9] >> 4) * 0x40)
    ;
    param_1[9] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[5] & 0xf) * 4 + (long)((int)param_1[5] >> 4) * 0x40);
    param_1[5] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[1] & 0xf) * 4 + (long)((int)param_1[1] >> 4) * 0x40);
    param_1[1] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x16] & 0xf) * 4 + (long)((int)param_1[0x16] >> 4) * 0x40);
    param_1[0x16] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0xe] & 0xf) * 4 + (long)((int)param_1[0xe] >> 4) * 0x40);
    param_1[0xe] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[6] & 0xf) * 4 + (long)((int)param_1[6] >> 4) * 0x40)
    ;
    param_1[6] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x12] & 0xf) * 4 + (long)((int)param_1[0x12] >> 4) * 0x40);
    param_1[0x12] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[10] & 0xf) * 4 + (long)((int)param_1[10] >> 4) * 0x40);
    param_1[10] = *(uint *)(&_invSbox +
                           (long)(int)(param_1[2] & 0xf) * 4 + (long)((int)param_1[2] >> 4) * 0x40);
    param_1[2] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0xf] & 0xf) * 4 + (long)((int)param_1[0xf] >> 4) * 0x40);
    param_1[0xf] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[3] & 0xf) * 4 + (long)((int)param_1[3] >> 4) * 0x40)
    ;
    param_1[3] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x13] & 0xf) * 4 + (long)((int)param_1[0x13] >> 4) * 0x40);
    param_1[0x13] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[7] & 0xf) * 4 + (long)((int)param_1[7] >> 4) * 0x40);
    param_1[7] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x17] & 0xf) * 4 + (long)((int)param_1[0x17] >> 4) * 0x40);
    param_1[0x17] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0xb] & 0xf) * 4 + (long)((int)param_1[0xb] >> 4) * 0x40);
    param_1[0xb] = uVar1;
    *param_1 = *(uint *)(&_invSbox +
                        (long)(int)(*param_1 & 0xf) * 4 + (long)((int)*param_1 >> 4) * 0x40);
    param_1[4] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[4] & 0xf) * 4 + (long)((int)param_1[4] >> 4) * 0x40);
    param_1[8] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[8] & 0xf) * 4 + (long)((int)param_1[8] >> 4) * 0x40);
    param_1[0xc] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[0xc] & 0xf) * 4 +
                            (long)((int)param_1[0xc] >> 4) * 0x40);
    param_1[0x10] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x10] & 0xf) * 4 + (long)((int)param_1[0x10] >> 4) * 0x40);
    param_1[0x14] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x14] & 0xf) * 4 + (long)((int)param_1[0x14] >> 4) * 0x40);
  }
  else if (param_2 == 8) {
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x1d] & 0xf) * 4 + (long)((int)param_1[0x1d] >> 4) * 0x40);
    param_1[0x1d] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x19] & 0xf) * 4 + (long)((int)param_1[0x19] >> 4) * 0x40);
    param_1[0x19] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x15] & 0xf) * 4 + (long)((int)param_1[0x15] >> 4) * 0x40);
    param_1[0x15] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x11] & 0xf) * 4 + (long)((int)param_1[0x11] >> 4) * 0x40);
    param_1[0x11] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0xd] & 0xf) * 4 + (long)((int)param_1[0xd] >> 4) * 0x40);
    param_1[0xd] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[9] & 0xf) * 4 + (long)((int)param_1[9] >> 4) * 0x40)
    ;
    param_1[9] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[5] & 0xf) * 4 + (long)((int)param_1[5] >> 4) * 0x40);
    param_1[5] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[1] & 0xf) * 4 + (long)((int)param_1[1] >> 4) * 0x40);
    param_1[1] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x1e] & 0xf) * 4 + (long)((int)param_1[0x1e] >> 4) * 0x40);
    param_1[0x1e] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x12] & 0xf) * 4 + (long)((int)param_1[0x12] >> 4) * 0x40);
    param_1[0x12] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[6] & 0xf) * 4 + (long)((int)param_1[6] >> 4) * 0x40);
    param_1[6] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[0x1a] & 0xf) * 4 +
                          (long)((int)param_1[0x1a] >> 4) * 0x40);
    param_1[0x1a] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0xe] & 0xf) * 4 + (long)((int)param_1[0xe] >> 4) * 0x40);
    param_1[0xe] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[2] & 0xf) * 4 + (long)((int)param_1[2] >> 4) * 0x40)
    ;
    param_1[2] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[0x16] & 0xf) * 4 +
                          (long)((int)param_1[0x16] >> 4) * 0x40);
    param_1[0x16] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[10] & 0xf) * 4 + (long)((int)param_1[10] >> 4) * 0x40);
    param_1[10] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x1f] & 0xf) * 4 + (long)((int)param_1[0x1f] >> 4) * 0x40);
    param_1[0x1f] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0xf] & 0xf) * 4 + (long)((int)param_1[0xf] >> 4) * 0x40);
    param_1[0xf] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x1b] & 0xf) * 4 + (long)((int)param_1[0x1b] >> 4) * 0x40);
    param_1[0x1b] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0xb] & 0xf) * 4 + (long)((int)param_1[0xb] >> 4) * 0x40);
    param_1[0xb] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x17] & 0xf) * 4 + (long)((int)param_1[0x17] >> 4) * 0x40);
    param_1[0x17] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[7] & 0xf) * 4 + (long)((int)param_1[7] >> 4) * 0x40);
    param_1[7] = uVar1;
    uVar1 = *(uint *)(&_invSbox +
                     (long)(int)(param_1[0x13] & 0xf) * 4 + (long)((int)param_1[0x13] >> 4) * 0x40);
    param_1[0x13] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[3] & 0xf) * 4 + (long)((int)param_1[3] >> 4) * 0x40);
    param_1[3] = uVar1;
    *param_1 = *(uint *)(&_invSbox +
                        (long)(int)(*param_1 & 0xf) * 4 + (long)((int)*param_1 >> 4) * 0x40);
    param_1[4] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[4] & 0xf) * 4 + (long)((int)param_1[4] >> 4) * 0x40);
    param_1[8] = *(uint *)(&_invSbox +
                          (long)(int)(param_1[8] & 0xf) * 4 + (long)((int)param_1[8] >> 4) * 0x40);
    param_1[0xc] = *(uint *)(&_invSbox +
                            (long)(int)(param_1[0xc] & 0xf) * 4 +
                            (long)((int)param_1[0xc] >> 4) * 0x40);
    param_1[0x10] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x10] & 0xf) * 4 + (long)((int)param_1[0x10] >> 4) * 0x40);
    param_1[0x14] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x14] & 0xf) * 4 + (long)((int)param_1[0x14] >> 4) * 0x40);
    param_1[0x18] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x18] & 0xf) * 4 + (long)((int)param_1[0x18] >> 4) * 0x40);
    param_1[0x1c] =
         *(uint *)(&_invSbox +
                  (long)(int)(param_1[0x1c] & 0xf) * 4 + (long)((int)param_1[0x1c] >> 4) * 0x40);
  }
  return;
}



undefined8 _AddRoundKey_InversMixColumn(long param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint local_b4;
  int local_b0;
  int local_ac;
  uint auStack_98 [32];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  for (local_b0 = 0; local_b0 < param_2; local_b0 = local_b0 + 1) {
    puVar1 = (uint *)(param_1 + (long)(local_b0 << 2) * 4);
    *puVar1 = *puVar1 ^ *(uint *)(&_word + (long)(local_b0 + param_2 * param_3) * 4);
    puVar1 = (uint *)(param_1 + (long)(local_b0 * 4 + 1) * 4);
    *puVar1 = *puVar1 ^ *(uint *)(&DAT_10000c304 + (long)(local_b0 + param_2 * param_3) * 4);
    puVar1 = (uint *)(param_1 + (long)(local_b0 * 4 + 2) * 4);
    *puVar1 = *puVar1 ^ *(uint *)(&DAT_10000c4e4 + (long)(local_b0 + param_2 * param_3) * 4);
    puVar1 = (uint *)(param_1 + (long)(local_b0 * 4 + 3) * 4);
    *puVar1 = *puVar1 ^ *(uint *)(&DAT_10000c6c4 + (long)(local_b0 + param_2 * param_3) * 4);
  }
  for (local_b0 = 0; local_b0 < param_2; local_b0 = local_b0 + 1) {
    for (local_ac = 0; local_ac < 4; local_ac = local_ac + 1) {
      local_b4 = *(int *)(param_1 + (long)(local_ac + local_b0 * 4) * 4) << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      local_b4 = (local_b4 ^ *(uint *)(param_1 + (long)(local_ac + local_b0 * 4) * 4)) << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      local_b4 = (local_b4 ^ *(uint *)(param_1 + (long)(local_ac + local_b0 * 4) * 4)) << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      auStack_98[local_ac + local_b0 * 4] = local_b4;
      local_b4 = *(int *)(param_1 + (long)((local_ac + 1) % 4 + local_b0 * 4) * 4) << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      local_b4 = local_b4 << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      local_b4 = (local_b4 ^ *(uint *)(param_1 + (long)((local_ac + 1) % 4 + local_b0 * 4) * 4)) <<
                 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      auStack_98[local_ac + local_b0 * 4] =
           auStack_98[local_ac + local_b0 * 4] ^
           local_b4 ^ *(uint *)(param_1 + (long)((local_ac + 1) % 4 + local_b0 * 4) * 4);
      local_b4 = *(int *)(param_1 + (long)((local_ac + 2) % 4 + local_b0 * 4) * 4) << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      local_b4 = (local_b4 ^ *(uint *)(param_1 + (long)((local_ac + 2) % 4 + local_b0 * 4) * 4)) <<
                 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      local_b4 = local_b4 << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      auStack_98[local_ac + local_b0 * 4] =
           auStack_98[local_ac + local_b0 * 4] ^
           local_b4 ^ *(uint *)(param_1 + (long)((local_ac + 2) % 4 + local_b0 * 4) * 4);
      local_b4 = *(int *)(param_1 + (long)((local_ac + 3) % 4 + local_b0 * 4) * 4) << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      local_b4 = local_b4 << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      local_b4 = local_b4 << 1;
      if ((int)local_b4 >> 8 == 1) {
        local_b4 = local_b4 ^ 0x11b;
      }
      auStack_98[local_ac + local_b0 * 4] =
           auStack_98[local_ac + local_b0 * 4] ^
           local_b4 ^ *(uint *)(param_1 + (long)((local_ac + 3) % 4 + local_b0 * 4) * 4);
    }
  }
  for (local_ac = 0; local_ac < param_2; local_ac = local_ac + 1) {
    *(uint *)(param_1 + (long)(local_ac << 2) * 4) = auStack_98[local_ac << 2];
    *(uint *)(param_1 + (long)(local_ac * 4 + 1) * 4) = auStack_98[local_ac * 4 + 1];
    *(uint *)(param_1 + (long)(local_ac * 4 + 2) * 4) = auStack_98[local_ac * 4 + 2];
    *(uint *)(param_1 + (long)(local_ac * 4 + 3) * 4) = auStack_98[local_ac * 4 + 3];
  }
  if (*(long *)__got::___stack_chk_guard != local_18) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail();
  }
  return 0;
}



undefined4 _SubByte(int param_1)

{
  return *(undefined4 *)(&_Sbox + (long)(param_1 % 0x10) * 4 + (long)(param_1 / 0x10) * 0x40);
}



undefined8 _aes_main(void)

{
  _statemt = 0x32;
  DAT_10000c0a4 = 0x43;
  DAT_10000c0a8 = 0xf6;
  DAT_10000c0ac = 0xa8;
  DAT_10000c0b0 = 0x88;
  DAT_10000c0b4 = 0x5a;
  DAT_10000c0b8 = 0x30;
  DAT_10000c0bc = 0x8d;
  DAT_10000c0c0 = 0x31;
  DAT_10000c0c4 = 0x31;
  DAT_10000c0c8 = 0x98;
  DAT_10000c0cc = 0xa2;
  DAT_10000c0d0 = 0xe0;
  DAT_10000c0d4 = 0x37;
  DAT_10000c0d8 = 7;
  DAT_10000c0dc = 0x34;
  _key = 0x2b;
  DAT_10000c00c = 0x7e;
  DAT_10000c010 = 0x15;
  DAT_10000c014 = 0x16;
  DAT_10000c018 = 0x28;
  DAT_10000c01c = 0xae;
  DAT_10000c020 = 0xd2;
  DAT_10000c024 = 0xa6;
  DAT_10000c028 = 0xab;
  DAT_10000c02c = 0xf7;
  DAT_10000c030 = 0x15;
  DAT_10000c034 = 0x88;
  DAT_10000c038 = 9;
  DAT_10000c03c = 0xcf;
  DAT_10000c040 = 0x4f;
  DAT_10000c044 = 0x3c;
  _encrypt((char *)&_statemt,0xc008);
  _decrypt(&_statemt,&_key,0x1f480);
  return 0;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

undefined4 _submain(void)

{
  _main_result = 0;
  _startTimer = _rtclock();
  _aes_main();
  _endTimer = _rtclock();
  __stubs::_printf("%0.6f\n");
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

void * __stubs::_memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)__got::_memcpy)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_printf(char *param_1,...)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_printf)((int)param_1);
  return iVar1;
}


