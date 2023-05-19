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
  
  pvVar2 = (void *)_polybench_alloc_data(250000,4);
  _init_array(500,pvVar2);
  _polybench_timer_start();
  _kernel_floyd_warshall(500,pvVar2);
  _polybench_timer_stop();
  _polybench_timer_print();
  if ((0x2a < param_1) && (iVar1 = __stubs::_strcmp(*param_2,""), iVar1 == 0)) {
    _print_array(500,pvVar2);
  }
  __stubs::_free(pvVar2);
  return 0;
}



void _init_array(int param_1,long param_2)

{
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)(param_2 + (long)local_14 * 2000 + (long)local_18 * 4) = (local_14 * local_18) % 7 + 1
      ;
      if ((((local_14 + local_18) % 0xd == 0) || ((local_14 + local_18) % 7 == 0)) ||
         ((local_14 + local_18) % 0xb == 0)) {
        *(undefined4 *)(param_2 + (long)local_14 * 2000 + (long)local_18 * 4) = 999;
      }
    }
  }
  return;
}



void _kernel_floyd_warshall(int param_1,long param_2)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
        if (*(int *)(param_2 + (long)local_14 * 2000 + (long)local_18 * 4) <
            *(int *)(param_2 + (long)local_14 * 2000 + (long)local_1c * 4) +
            *(int *)(param_2 + (long)local_1c * 2000 + (long)local_18 * 4)) {
          local_20 = *(int *)(param_2 + (long)local_14 * 2000 + (long)local_18 * 4);
        }
        else {
          local_20 = *(int *)(param_2 + (long)local_14 * 2000 + (long)local_1c * 4) +
                     *(int *)(param_2 + (long)local_1c * 2000 + (long)local_18 * 4);
        }
        *(int *)(param_2 + (long)local_14 * 2000 + (long)local_18 * 4) = local_20;
      }
    }
  }
  return;
}



int _print_array(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int local_28;
  int local_24;
  
  puVar1 = __got::___stderrp;
  __stubs::_fprintf(*(FILE **)__got::___stderrp,"==BEGIN DUMP_ARRAYS==\n");
  __stubs::_fprintf(*(FILE **)puVar1,"begin dump: %s");
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      if ((local_24 * param_1 + local_28) % 0x14 == 0) {
        __stubs::_fprintf(*(FILE **)puVar1,"\n");
      }
      __stubs::_fprintf(*(FILE **)puVar1,"%d ");
    }
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
    __stubs::___assert_rtn("polybench_flush_cache","polybench_type1.c",0x8c,"tmp <= 10.0");
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


