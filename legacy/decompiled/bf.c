typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef long __darwin_time_t;

typedef int __int32_t;

typedef __int32_t __darwin_suseconds_t;

typedef struct bf_key_st bf_key_st, *Pbf_key_st;

typedef struct bf_key_st BF_KEY;

struct bf_key_st {
    uint P[18];
    uint S[1024];
};

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




void _local_memcpy(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *local_28;
  undefined8 *local_20;
  int local_14;
  
  local_28 = param_2;
  local_20 = param_1;
  local_14 = param_3;
  while (0 < local_14) {
    *local_20 = *local_28;
    local_20 = local_20 + 1;
    local_28 = local_28 + 1;
    local_14 = local_14 + -1;
  }
  return;
}



void _BF_set_key(BF_KEY *key,int len,uchar *data)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined *puVar7;
  undefined *local_58;
  int local_3c;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  puVar7 = (undefined *)(ulong)(uint)len;
  local_18 = *(long *)__got::___stack_chk_guard;
  local_2c = (int)key;
  _local_memcpy(&_key_P,&_bf_init_P,0x12);
  _local_memcpy(&_key_S,&_bf_init_S,0x400);
  if (0x48 < local_2c) {
    local_2c = 0x48;
  }
  puVar2 = puVar7 + local_2c;
  local_58 = puVar7;
  for (local_3c = 0; local_3c < 0x12; local_3c = local_3c + 1) {
    puVar1 = local_58 + 1;
    uVar3 = *local_58;
    local_58 = puVar1;
    if (puVar2 <= puVar1) {
      local_58 = puVar7;
    }
    puVar1 = local_58 + 1;
    uVar4 = *local_58;
    local_58 = puVar1;
    if (puVar2 <= puVar1) {
      local_58 = puVar7;
    }
    puVar1 = local_58 + 1;
    uVar5 = *local_58;
    local_58 = puVar1;
    if (puVar2 <= puVar1) {
      local_58 = puVar7;
    }
    puVar1 = local_58 + 1;
    uVar6 = *local_58;
    local_58 = puVar1;
    if (puVar2 <= puVar1) {
      local_58 = puVar7;
    }
    (&_key_P)[local_3c] =
         (&_key_P)[local_3c] ^ (ulong)CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6);
  }
  local_28 = 0;
  local_20 = 0;
  for (local_3c = 0; local_3c < 0x12; local_3c = local_3c + 2) {
    _BF_encrypt((uint *)&local_28,(BF_KEY *)0x1);
    (&_key_P)[local_3c] = local_28;
    (&_key_P)[local_3c + 1] = local_20;
  }
  for (local_3c = 0; local_3c < 0x400; local_3c = local_3c + 2) {
    _BF_encrypt((uint *)&local_28,(BF_KEY *)0x1);
    *(undefined8 *)(&_key_S + (long)local_3c * 8) = local_28;
    *(undefined8 *)(&_key_S + (long)(local_3c + 1) * 8) = local_20;
  }
  if (*(long *)__got::___stack_chk_guard != local_18) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail();
  }
  return;
}



void _BF_encrypt(uint *data,BF_KEY *key)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  if ((int)key == 0) {
    uVar1 = *(ulong *)data ^ DAT_10000c090;
    uVar2 = *(ulong *)(data + 2) ^ DAT_10000c088 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c080 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c078 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c070 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c068 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c060 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c058 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c050 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c048 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c040 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c038 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c030 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c028 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c020 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    local_20 = uVar2 ^ DAT_10000c018 ^
               (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
                *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
               *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
               *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    local_18 = uVar1 ^ DAT_10000c010 ^
               (*(long *)(&_key_S + (local_20 >> 0x18) * 8) +
                *(long *)(&_key_S + ((local_20 >> 0x10 & 0xff) + 0x100) * 8) ^
               *(ulong *)(&_key_S + ((local_20 >> 8 & 0xff) + 0x200) * 8)) +
               *(long *)(&_key_S + ((local_20 & 0xff) + 0x300) * 8) & 0xffffffff;
    local_20 = local_20 ^ _key_P;
  }
  else {
    uVar1 = *(ulong *)data ^ _key_P;
    uVar2 = *(ulong *)(data + 2) ^ DAT_10000c010 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c018 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c020 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c028 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c030 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c038 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c040 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c048 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c050 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c058 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c060 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c068 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar2 = uVar2 ^ DAT_10000c070 ^
            (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    uVar1 = uVar1 ^ DAT_10000c078 ^
            (*(long *)(&_key_S + (uVar2 >> 0x18) * 8) +
             *(long *)(&_key_S + ((uVar2 >> 0x10 & 0xff) + 0x100) * 8) ^
            *(ulong *)(&_key_S + ((uVar2 >> 8 & 0xff) + 0x200) * 8)) +
            *(long *)(&_key_S + ((uVar2 & 0xff) + 0x300) * 8) & 0xffffffff;
    local_20 = uVar2 ^ DAT_10000c080 ^
               (*(long *)(&_key_S + (uVar1 >> 0x18) * 8) +
                *(long *)(&_key_S + ((uVar1 >> 0x10 & 0xff) + 0x100) * 8) ^
               *(ulong *)(&_key_S + ((uVar1 >> 8 & 0xff) + 0x200) * 8)) +
               *(long *)(&_key_S + ((uVar1 & 0xff) + 0x300) * 8) & 0xffffffff;
    local_18 = uVar1 ^ DAT_10000c088 ^
               (*(long *)(&_key_S + (local_20 >> 0x18) * 8) +
                *(long *)(&_key_S + ((local_20 >> 0x10 & 0xff) + 0x100) * 8) ^
               *(ulong *)(&_key_S + ((local_20 >> 8 & 0xff) + 0x200) * 8)) +
               *(long *)(&_key_S + ((local_20 & 0xff) + 0x300) * 8) & 0xffffffff;
    local_20 = local_20 ^ DAT_10000c090;
  }
  *(ulong *)(data + 2) = local_18 & 0xffffffff;
  *(ulong *)data = local_20 & 0xffffffff;
  return;
}



void _BF_cfb64_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int *num,
                      int enc)

{
  byte bVar1;
  byte bVar2;
  long local_80;
  uint local_74;
  undefined local_70;
  byte *local_38;
  byte *local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  local_74 = *(uint *)ivec;
  local_80 = length;
  local_38 = out;
  local_30 = in;
  if ((int)num == 0) {
    while (local_80 != 0) {
      if (local_74 == 0) {
        local_28 = (ulong)*(byte *)schedule->P << 0x18 |
                   (ulong)*(byte *)((long)schedule->P + 1) << 0x10 |
                   (ulong)*(byte *)((long)schedule->P + 2) << 8 |
                   (ulong)*(byte *)((long)schedule->P + 3);
        local_20 = (ulong)*(byte *)(schedule->P + 1) << 0x18 |
                   (ulong)*(byte *)((long)schedule->P + 5) << 0x10 |
                   (ulong)*(byte *)((long)schedule->P + 6) << 8 |
                   (ulong)*(byte *)((long)schedule->P + 7);
        _BF_encrypt((uint *)&local_28,(BF_KEY *)0x1);
        *(char *)schedule->P = (char)(local_28 >> 0x18);
        *(char *)((long)schedule->P + 1) = (char)(local_28 >> 0x10);
        *(char *)((long)schedule->P + 2) = (char)(local_28 >> 8);
        local_70 = (undefined)local_28;
        *(undefined *)((long)schedule->P + 3) = local_70;
        *(char *)(schedule->P + 1) = (char)(local_20 >> 0x18);
        *(char *)((long)schedule->P + 5) = (char)(local_20 >> 0x10);
        *(char *)((long)schedule->P + 6) = (char)(local_20 >> 8);
        local_70 = (undefined)local_20;
        *(undefined *)((long)schedule->P + 7) = local_70;
      }
      bVar1 = *local_30;
      bVar2 = *(byte *)((long)schedule->P + (long)(int)local_74);
      *(byte *)((long)schedule->P + (long)(int)local_74) = bVar1;
      *local_38 = bVar2 ^ bVar1;
      local_74 = local_74 + 1 & 7;
      local_80 = local_80 + -1;
      local_38 = local_38 + 1;
      local_30 = local_30 + 1;
    }
  }
  else {
    while (local_80 != 0) {
      if (local_74 == 0) {
        local_28 = (ulong)*(byte *)schedule->P << 0x18 |
                   (ulong)*(byte *)((long)schedule->P + 1) << 0x10 |
                   (ulong)*(byte *)((long)schedule->P + 2) << 8 |
                   (ulong)*(byte *)((long)schedule->P + 3);
        local_20 = (ulong)*(byte *)(schedule->P + 1) << 0x18 |
                   (ulong)*(byte *)((long)schedule->P + 5) << 0x10 |
                   (ulong)*(byte *)((long)schedule->P + 6) << 8 |
                   (ulong)*(byte *)((long)schedule->P + 7);
        _BF_encrypt((uint *)&local_28,(BF_KEY *)0x1);
        *(char *)schedule->P = (char)(local_28 >> 0x18);
        *(char *)((long)schedule->P + 1) = (char)(local_28 >> 0x10);
        *(char *)((long)schedule->P + 2) = (char)(local_28 >> 8);
        local_70 = (undefined)local_28;
        *(undefined *)((long)schedule->P + 3) = local_70;
        *(char *)(schedule->P + 1) = (char)(local_20 >> 0x18);
        *(char *)((long)schedule->P + 5) = (char)(local_20 >> 0x10);
        *(char *)((long)schedule->P + 6) = (char)(local_20 >> 8);
        local_70 = (undefined)local_20;
        *(undefined *)((long)schedule->P + 7) = local_70;
      }
      bVar1 = *local_30 ^ *(byte *)((long)schedule->P + (long)(int)local_74);
      *local_38 = bVar1;
      *(byte *)((long)schedule->P + (long)(int)local_74) = bVar1;
      local_74 = local_74 + 1 & 7;
      local_80 = local_80 + -1;
      local_38 = local_38 + 1;
      local_30 = local_30 + 1;
    }
  }
  local_20 = 0;
  local_28 = 0;
  *(uint *)ivec = local_74;
  if (*(long *)__got::___stack_chk_guard == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stubs::___stack_chk_fail();
}



int _blowfish_main(undefined8 param_1,undefined8 param_2,uchar *param_3)

{
  int in_w6;
  long lVar1;
  long lVar2;
  int local_94;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined auStack_78 [8];
  uchar auStack_70 [40];
  uchar auStack_48 [40];
  undefined auStack_20 [8];
  long local_18;
  
  local_18 = *(long *)__got::___stack_chk_guard;
  local_7c = 0;
  local_88 = 0;
  local_8c = 0;
  local_94 = 0;
  for (local_80 = 0; local_80 < 8; local_80 = local_80 + 1) {
    auStack_20[local_80] = 0;
    auStack_78[local_80] = 0;
  }
  _BF_set_key((BF_KEY *)0x8,(int)&stack0xfffffffffffffff0 + -0x10,param_3);
  while (local_80 = 0, local_88 < 0x1450) {
    while (local_88 < 0x1450 && local_80 < 0x28) {
      lVar1 = (long)local_88;
      local_88 = local_88 + 1;
      lVar2 = (long)local_80;
      local_80 = local_80 + 1;
      auStack_48[lVar2] = (&_in_key)[lVar1];
    }
    _BF_cfb64_encrypt(auStack_48,auStack_70,(long)local_80,(BF_KEY *)auStack_78,(uchar *)&local_7c,
                      (int *)0x1,in_w6);
    for (local_84 = 0; local_84 < local_80; local_84 = local_84 + 1) {
      lVar1 = (long)local_8c;
      local_8c = local_8c + 1;
      local_94 = local_94 + (uint)(auStack_70[local_84] != (&_out_key)[lVar1]);
    }
  }
  if (*(long *)__got::___stack_chk_guard != local_18) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail();
  }
  return local_94;
}



undefined4 _submain(void)

{
  undefined4 uVar1;
  
  _startTimer = _rtclock();
  uVar1 = _blowfish_main();
  _endTimer = _rtclock();
  __stubs::_printf("%0.6f\n");
  return uVar1;
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


