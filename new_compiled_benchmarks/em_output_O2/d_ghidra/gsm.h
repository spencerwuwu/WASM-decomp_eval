typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined7;
typedef unsigned long    undefined8;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef pointer pointer __((offset(0x12d0)));

typedef pointer pointer __((offset(0x1446)));

typedef pointer pointer __((offset(0x130b)));

typedef pointer pointer __((offset(0x20)));

typedef pointer pointer __((offset(0x1220)));

typedef pointer pointer __((offset(0x1376)));

typedef pointer pointer __((offset(0x90)));

typedef pointer pointer __((offset(0x12f0)));

typedef pointer pointer __((offset(0x7)));

typedef pointer pointer __((offset(0x14e7)));

typedef pointer pointer __((offset(0x40)));

typedef pointer pointer __((offset(0xbf0)));

typedef pointer pointer __((offset(0x12c5)));

typedef pointer pointer __((offset(0xea6)));

typedef pointer pointer __((offset(0xf40)));

typedef pointer pointer __((offset(0x1304)));

typedef pointer pointer __((offset(0x11e4)));

typedef pointer pointer __((offset(0x11e0)));

typedef pointer pointer __((offset(0xec0)));

typedef pointer pointer __((offset(0x290)));

typedef pointer pointer __((offset(0x138e)));

typedef pointer pointer __((offset(0x136b)));

typedef pointer pointer __((offset(0xdcf)));

typedef pointer pointer __((offset(0x12e2)));

typedef pointer pointer __((offset(0x100)));

typedef pointer pointer __((offset(0x1386)));

typedef pointer pointer __((offset(0x12b0)));

typedef pointer pointer __((offset(0x1396)));

typedef pointer pointer __((offset(0xe11)));

typedef pointer pointer __((offset(0x1218)));

typedef pointer pointer __((offset(0x70)));

typedef pointer pointer __((offset(0x386)));

typedef pointer pointer __((offset(0x1432)));

typedef pointer pointer __((offset(0x131f)));

typedef pointer pointer __((offset(0x12d8)));

typedef struct timeval timeval, *Ptimeval;

typedef long __time_t;

typedef long __suseconds_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

typedef struct timezone timezone, *Ptimezone;

typedef struct timezone * __timezone_ptr_t;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef ulong size_t;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




uint gsm_add(short param_1,short param_2);
uint gsm_mult(int param_1,int param_2);
uint gsm_mult_r(int param_1,short param_2);
int gsm_abs(int param_1);
int gsm_norm(ulong param_1);
int gsm_div(short param_1,short param_2);
void Autocorrelation(undefined (*param_1) [16],undefined (*param_2) [16]);
void Reflection_coefficients(ulong *param_1,undefined (*param_2) [16]);
void Transformation_to_Log_Area_Ratios(ushort *param_1);
void Quantization_and_coding(undefined (*param_1) [16]);
void Gsm_LPC_Analysis(undefined8 param_1,undefined8 param_2);
int submain(void);
void * memset(void * __s, int __c, size_t __n);
int gettimeofday(timeval * __tv, __timezone_ptr_t __tz);
int printf(char * __format, ...);
void * memcpy(void * __dest, void * __src, size_t __n);

