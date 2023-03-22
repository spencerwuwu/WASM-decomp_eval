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




void _local_memset(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int local_24;
  undefined4 *local_20;
  int local_14;
  
  local_24 = param_3 / 4;
  local_20 = param_1;
  local_14 = param_4;
  while (0 < local_14) {
    local_20 = local_20 + 1;
    local_14 = local_14 + -1;
  }
  while (0 < local_24) {
    *local_20 = param_2;
    local_24 = local_24 + -1;
    local_20 = local_20 + 1;
  }
  return;
}



void _local_memcpy(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  
  local_30 = param_3 / 4;
  local_28 = param_2;
  local_20 = param_1;
  while (0 < local_30) {
    *local_20 = *local_28;
    local_20 = local_20 + 1;
    local_30 = local_30 + -1;
    local_28 = local_28 + 1;
  }
  return;
}



void _sha_init(void)

{
  _sha_info_digest = 0x67452301;
  DAT_10000c054 = 0xefcdab89;
  DAT_10000c058 = 0x98badcfe;
  DAT_10000c05c = 0x10325476;
  DAT_10000c060 = 0xc3d2e1f0;
  _sha_info_count_lo = 0;
  _sha_info_count_hi = 0;
  return;
}



void _sha_update(long param_1,uint param_2)

{
  uint local_1c;
  long local_18;
  
  if (_sha_info_count_lo + param_2 * 8 < _sha_info_count_lo) {
    _sha_info_count_hi = _sha_info_count_hi + 1;
  }
  _sha_info_count_lo = _sha_info_count_lo + param_2 * 8;
  _sha_info_count_hi = _sha_info_count_hi + (param_2 >> 0x1d);
  local_18 = param_1;
  for (local_1c = param_2; 0x3f < (int)local_1c; local_1c = local_1c - 0x40) {
    _local_memcpy(&_sha_info_data,local_18,0x40);
    _sha_transform();
    local_18 = local_18 + 0x40;
  }
  _local_memcpy(&_sha_info_data,local_18,local_1c);
  return;
}



void _sha_final(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = _sha_info_count_lo;
  uVar3 = _sha_info_count_hi;
  uVar2 = _sha_info_count_lo >> 3 & 0x3f;
  uVar1 = uVar2 + 1;
  *(undefined4 *)(&_sha_info_data + (long)(int)uVar2 * 4) = 0x80;
  if (uVar1 < 0x39) {
    _local_memset(&_sha_info_data,0,0x38 - uVar1,uVar1);
  }
  else {
    _local_memset(&_sha_info_data,0,0x40 - uVar1,uVar1);
    _sha_transform();
    _local_memset(&_sha_info_data,0,0x38);
  }
  DAT_10000c048 = uVar3;
  DAT_10000c04c = uVar4;
  _sha_transform();
  return;
}



void _sha_stream(void)

{
  int local_18;
  
  _sha_init();
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    _sha_update(">KurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastheresto..." /* TRUNCATED STRING LITERAL */
                + (long)local_18 * 0x2000 + 1,
                *(undefined4 *)
                 (
                 ">KurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastheresto..." /* TRUNCATED STRING LITERAL */
                 + (long)local_18 * 4 + 0x4001));
  }
  _sha_final();
  return;
}



int _submain(void)

{
  int local_18;
  int local_14;
  
  local_18 = 0;
  _startTimer = _rtclock();
  _sha_stream();
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    local_18 = local_18 +
               (uint)((&_sha_info_digest)[local_14] != *(int *)(&_outData + (long)local_14 * 4));
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



void _sha_transform(void)

{
  int iVar1;
  long lVar2;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  int local_16c;
  uint local_168 [80];
  long local_28;
  
  local_28 = *(long *)__got::___stack_chk_guard;
  for (local_16c = 0; local_16c < 0x10; local_16c = local_16c + 1) {
    local_168[local_16c] = *(uint *)(&_sha_info_data + (long)local_16c * 4);
  }
  for (local_16c = 0x10; local_16c < 0x50; local_16c = local_16c + 1) {
    local_168[local_16c] =
         local_168[local_16c + -3] ^ local_168[local_16c + -8] ^ local_168[local_16c + -0xe] ^
         local_168[local_16c + -0x10];
  }
  local_178 = DAT_10000c054;
  local_17c = DAT_10000c058;
  local_180 = DAT_10000c05c;
  local_184 = DAT_10000c060;
  local_174 = _sha_info_digest;
  for (local_16c = 0; local_16c < 0x14; local_16c = local_16c + 1) {
    iVar1 = (local_174 >> 0x1b | local_174 << 5) +
            (local_178 & local_17c | local_180 & (local_178 ^ 0xffffffff)) + local_184;
    lVar2 = (long)local_16c;
    local_184 = local_180;
    local_180 = local_17c;
    local_17c = local_178 >> 2 | local_178 << 0x1e;
    local_178 = local_174;
    local_174 = iVar1 + local_168[lVar2] + 0x5a827999;
  }
  for (local_16c = 0x14; local_16c < 0x28; local_16c = local_16c + 1) {
    iVar1 = (local_174 >> 0x1b | local_174 << 5) + (local_178 ^ local_17c ^ local_180) + local_184;
    lVar2 = (long)local_16c;
    local_184 = local_180;
    local_180 = local_17c;
    local_17c = local_178 >> 2 | local_178 << 0x1e;
    local_178 = local_174;
    local_174 = iVar1 + local_168[lVar2] + 0x6ed9eba1;
  }
  for (local_16c = 0x28; local_16c < 0x3c; local_16c = local_16c + 1) {
    iVar1 = (local_174 >> 0x1b | local_174 << 5) +
            (local_178 & (local_17c | local_180) | local_17c & local_180) + local_184;
    lVar2 = (long)local_16c;
    local_184 = local_180;
    local_180 = local_17c;
    local_17c = local_178 >> 2 | local_178 << 0x1e;
    local_178 = local_174;
    local_174 = iVar1 + local_168[lVar2] + 0x8f1bbcdc;
  }
  for (local_16c = 0x3c; local_16c < 0x50; local_16c = local_16c + 1) {
    iVar1 = (local_174 >> 0x1b | local_174 << 5) + (local_178 ^ local_17c ^ local_180) + local_184;
    lVar2 = (long)local_16c;
    local_184 = local_180;
    local_180 = local_17c;
    local_17c = local_178 >> 2 | local_178 << 0x1e;
    local_178 = local_174;
    local_174 = iVar1 + local_168[lVar2] + 0xca62c1d6;
  }
  _sha_info_digest = _sha_info_digest + local_174;
  DAT_10000c054 = DAT_10000c054 + local_178;
  DAT_10000c058 = DAT_10000c058 + local_17c;
  DAT_10000c05c = DAT_10000c05c + local_180;
  DAT_10000c060 = DAT_10000c060 + local_184;
  if (*(long *)__got::___stack_chk_guard != local_28) {
                    // WARNING: Subroutine does not return
    __stubs::___stack_chk_fail();
  }
  return;
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


