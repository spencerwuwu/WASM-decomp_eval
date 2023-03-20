typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned long    ulong;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef ulong __darwin_size_t;

typedef __darwin_size_t size_t;

typedef int __int32_t;

typedef __int32_t __darwin_suseconds_t;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef long __darwin_time_t;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar * _base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef __darwin_off_t fpos_t;

typedef struct __sFILE FILE;

struct __sFILE {
    uchar * _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void * _cookie;
    int (* _close)(void *);
    int (* _read)(void *, char *, int);
    fpos_t (* _seek)(void *, fpos_t, int);
    int (* _write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX * _extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
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




undefined8 _submain(int param_1,char **param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  char **local_20;
  int local_14;
  
  local_24 = 400;
  local_20 = param_2;
  local_14 = param_1;
  pvVar2 = (void *)_polybench_alloc_data(160000);
  pvVar3 = (void *)_polybench_alloc_data(400,8);
  pvVar4 = (void *)_polybench_alloc_data(400,8);
  pvVar5 = (void *)_polybench_alloc_data(400,8);
  pvVar6 = (void *)_polybench_alloc_data(400,8);
  pvVar7 = (void *)_polybench_alloc_data(400,8);
  pvVar8 = (void *)_polybench_alloc_data(400,8);
  pvVar9 = (void *)_polybench_alloc_data(400,8);
  pvVar10 = (void *)_polybench_alloc_data(400,8);
  _init_array(local_24,&local_30,&local_38,pvVar2,pvVar3,pvVar4,pvVar5,pvVar6,pvVar7,pvVar8,pvVar9,
              pvVar10);
  _polybench_timer_start();
  _kernel_gemver(local_30,local_38,local_24,pvVar2,pvVar3,pvVar4,pvVar5,pvVar6,pvVar7,pvVar8,pvVar9,
                 pvVar10);
  _polybench_timer_stop();
  _polybench_timer_print();
  if ((0x2a < local_14) && (iVar1 = __stubs::_strcmp(*local_20,""), iVar1 == 0)) {
    _print_array(local_24,pvVar7);
  }
  __stubs::_free(pvVar2);
  __stubs::_free(pvVar3);
  __stubs::_free(pvVar4);
  __stubs::_free(pvVar5);
  __stubs::_free(pvVar6);
  __stubs::_free(pvVar7);
  __stubs::_free(pvVar8);
  __stubs::_free(pvVar9);
  __stubs::_free(pvVar10);
  return 0;
}



void _init_array(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5,
                long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                long param_12)

{
  int iVar1;
  double dVar2;
  int local_68;
  int local_64;
  
  *param_2 = 0x3ff8000000000000;
  *param_3 = 0x3ff3333333333333;
  dVar2 = (double)(long)param_1;
  for (local_64 = 0; local_64 < param_1; local_64 = local_64 + 1) {
    *(double *)(param_5 + (long)local_64 * 8) = (double)(long)local_64;
    *(double *)(param_7 + (long)local_64 * 8) = ((double)(local_64 + 1) / dVar2) / 2.0;
    *(double *)(param_6 + (long)local_64 * 8) = ((double)(local_64 + 1) / dVar2) / 4.0;
    *(double *)(param_8 + (long)local_64 * 8) = ((double)(local_64 + 1) / dVar2) / 6.0;
    *(double *)(param_11 + (long)local_64 * 8) = ((double)(local_64 + 1) / dVar2) / 8.0;
    *(double *)(param_12 + (long)local_64 * 8) = ((double)(local_64 + 1) / dVar2) / 9.0;
    *(undefined8 *)(param_10 + (long)local_64 * 8) = 0;
    *(undefined8 *)(param_9 + (long)local_64 * 8) = 0;
    for (local_68 = 0; local_68 < param_1; local_68 = local_68 + 1) {
      iVar1 = 0;
      if (param_1 != 0) {
        iVar1 = (local_64 * local_68) / param_1;
      }
      *(double *)(param_4 + (long)local_64 * 0xc80 + (long)local_68 * 8) =
           (double)(local_64 * local_68 - iVar1 * param_1) / (double)(long)param_1;
    }
  }
  return;
}



void _kernel_gemver(double param_1,double param_2,int param_3,long param_4,long param_5,long param_6
                   ,long param_7,long param_8,long param_9_00,long param_10_00,long param_9,
                   long param_10)

{
  int local_68;
  int local_64;
  
  for (local_64 = 0; local_64 < param_3; local_64 = local_64 + 1) {
    for (local_68 = 0; local_68 < param_3; local_68 = local_68 + 1) {
      *(double *)(param_4 + (long)local_64 * 0xc80 + (long)local_68 * 8) =
           *(double *)(param_4 + (long)local_64 * 0xc80 + (long)local_68 * 8) +
           *(double *)(param_5 + (long)local_64 * 8) * *(double *)(param_6 + (long)local_68 * 8) +
           *(double *)(param_7 + (long)local_64 * 8) * *(double *)(param_8 + (long)local_68 * 8);
    }
  }
  for (local_64 = 0; local_64 < param_3; local_64 = local_64 + 1) {
    for (local_68 = 0; local_68 < param_3; local_68 = local_68 + 1) {
      *(double *)(param_10_00 + (long)local_64 * 8) =
           *(double *)(param_10_00 + (long)local_64 * 8) +
           param_2 * *(double *)(param_4 + (long)local_68 * 0xc80 + (long)local_64 * 8) *
           *(double *)(param_9 + (long)local_68 * 8);
    }
  }
  for (local_64 = 0; local_64 < param_3; local_64 = local_64 + 1) {
    *(double *)(param_10_00 + (long)local_64 * 8) =
         *(double *)(param_10_00 + (long)local_64 * 8) + *(double *)(param_10 + (long)local_64 * 8);
  }
  for (local_64 = 0; local_64 < param_3; local_64 = local_64 + 1) {
    for (local_68 = 0; local_68 < param_3; local_68 = local_68 + 1) {
      *(double *)(param_9_00 + (long)local_64 * 8) =
           *(double *)(param_9_00 + (long)local_64 * 8) +
           param_1 * *(double *)(param_4 + (long)local_64 * 0xc80 + (long)local_68 * 8) *
           *(double *)(param_10_00 + (long)local_68 * 8);
    }
  }
  return;
}



int _print_array(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int local_24;
  
  puVar1 = __got::___stderrp;
  __stubs::_fprintf(*(FILE **)__got::___stderrp,"==BEGIN DUMP_ARRAYS==\n");
  __stubs::_fprintf(*(FILE **)puVar1,"begin dump: %s");
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    if (local_24 % 0x14 == 0) {
      __stubs::_fprintf(*(FILE **)puVar1,"\n");
    }
    __stubs::_fprintf(*(FILE **)puVar1,"%0.2lf ");
  }
  __stubs::_fprintf(*(FILE **)puVar1,"\nend   dump: %s\n");
  iVar2 = __stubs::_fprintf(*(FILE **)puVar1,"==END   DUMP_ARRAYS==\n");
  return iVar2;
}



undefined4 entry(undefined4 param_1,undefined8 param_2)

{
  int local_24;
  
  for (local_24 = 0; local_24 < 1; local_24 = local_24 + 1) {
    _submain(param_1,param_2);
  }
  return 0;
}



void _polybench_flush_cache(void)

{
  void *pvVar1;
  double local_30;
  int local_24;
  
  pvVar1 = __stubs::_calloc(0x400100,8);
  local_30 = 0.0;
  for (local_24 = 0; local_24 < 0x400100; local_24 = local_24 + 1) {
    local_30 = local_30 + *(double *)((long)pvVar1 + (long)local_24 * 8);
  }
  if (10.0 < local_30) {
                    // WARNING: Subroutine does not return
    __stubs::___assert_rtn("polybench_flush_cache","polybench_type3.c",0x8c,"tmp <= 10.0");
  }
  __stubs::_free(pvVar1);
  return;
}



void _polybench_prepare_instruments(void)

{
  return;
}



void _polybench_timer_start(void)

{
  _polybench_prepare_instruments();
  _polybench_t_start = _rtclock();
  return;
}



void _polybench_timer_stop(void)

{
  _polybench_t_end = _rtclock();
  return;
}



int _polybench_timer_print(void)

{
  int iVar1;
  
  iVar1 = __stubs::_printf("%0.6f\n");
  return iVar1;
}



void _polybench_free_data(void *param_1)

{
  __stubs::_free(param_1);
  return;
}



void * _polybench_alloc_data(long param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = __stubs::_malloc(param_1 * param_2);
  return pvVar1;
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

void __stubs::___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
  (*(code *)__got::___assert_rtn)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * __stubs::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)__got::_calloc)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_fprintf)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __stubs::_free(void *param_1)

{
  (*(code *)__got::_free)();
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

void * __stubs::_malloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)__got::_malloc)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_printf(char *param_1,...)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_printf)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __stubs::_strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)__got::_strcmp)((int)param_1);
  return iVar1;
}


