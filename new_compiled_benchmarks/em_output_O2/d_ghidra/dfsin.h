typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
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

typedef pointer pointer __((offset(0xf77)));

typedef pointer pointer __((offset(0xb0)));

typedef pointer pointer __((offset(0x674)));

typedef pointer pointer __((offset(0xe1d)));

typedef pointer pointer __((offset(0x1192)));

typedef pointer pointer __((offset(0x72c)));

typedef pointer pointer __((offset(0x660)));

typedef pointer pointer __((offset(0xfe0)));

typedef pointer pointer __((offset(0x11db)));

typedef pointer pointer __((offset(0x53a)));

typedef pointer pointer __((offset(0xc59)));

typedef pointer pointer __((offset(0xb9b)));

typedef pointer pointer __((offset(0x900)));

typedef pointer pointer __((offset(0xf0e)));

typedef pointer pointer __((offset(0x1057)));

typedef pointer pointer __((offset(0x6d1)));

typedef pointer pointer __((offset(0x688)));

typedef pointer pointer __((offset(0xf40)));

typedef pointer pointer __((offset(0x209)));

typedef pointer pointer __((offset(0x49b)));

typedef pointer pointer __((offset(0x1120)));

typedef pointer pointer __((offset(0xec0)));

typedef pointer pointer __((offset(0x110)));

typedef pointer pointer __((offset(0x74d)));

typedef pointer pointer __((offset(0x10c0)));

typedef pointer pointer __((offset(0x115d)));

typedef pointer pointer __((offset(0x496)));

typedef pointer pointer __((offset(0x11c0)));

typedef pointer pointer __((offset(0x1217)));

typedef pointer pointer __((offset(0xabb)));

typedef pointer pointer __((offset(0xfd0)));

typedef pointer pointer __((offset(0xaad)));

typedef pointer pointer __((offset(0x650)));

typedef pointer pointer __((offset(0x81b)));

typedef pointer pointer __((offset(0x220)));

typedef pointer pointer __((offset(0xeb1)));

typedef pointer pointer __((offset(0x180)));

typedef pointer pointer __((offset(0x228)));

typedef pointer pointer __((offset(0xc42)));

typedef pointer pointer __((offset(0xa0)));

typedef pointer pointer __((offset(0xf87)));

typedef pointer pointer __((offset(0x1c5)));

typedef pointer pointer __((offset(0xa69)));

typedef pointer pointer __((offset(0xabe)));

typedef pointer pointer __((offset(0x1a0)));

typedef pointer pointer __((offset(0x950)));

typedef pointer pointer __((offset(0x7b4)));

typedef pointer pointer __((offset(0x240)));

typedef pointer pointer __((offset(0x517)));

typedef pointer pointer __((offset(0x9c4)));

typedef pointer pointer __((offset(0xe93)));

typedef pointer pointer __((offset(0x1070)));

typedef pointer pointer __((offset(0x11a9)));

typedef pointer pointer __((offset(0xc0)));

typedef pointer pointer __((offset(0xdca)));

typedef pointer pointer __((offset(0x2c8)));

typedef pointer pointer __((offset(0x5e9)));

typedef pointer pointer __((offset(0x764)));

typedef pointer pointer __((offset(0x3bb)));

typedef pointer pointer __((offset(0x603)));

typedef pointer pointer __((offset(0x938)));

typedef pointer pointer __((offset(0xb63)));

typedef pointer pointer __((offset(0x42f)));

typedef pointer pointer __((offset(0xa39)));

typedef pointer pointer __((offset(0x7)));

typedef pointer pointer __((offset(0xd5f)));

typedef pointer pointer __((offset(0x66e)));

typedef pointer pointer __((offset(0x1149)));

typedef pointer pointer __((offset(0x1130)));

typedef pointer pointer __((offset(0x140)));

typedef pointer pointer __((offset(0x1021)));

typedef pointer pointer __((offset(0x40)));

typedef pointer pointer __((offset(0x91c)));

typedef pointer pointer __((offset(0x1000)));

typedef pointer pointer __((offset(0xf8e)));

typedef pointer pointer __((offset(0x93d)));

typedef pointer pointer __((offset(0x120)));

typedef pointer pointer __((offset(0x11c7)));

typedef pointer pointer __((offset(0x417)));

typedef pointer pointer __((offset(0x1b0)));

typedef pointer pointer __((offset(0x708)));

typedef pointer pointer __((offset(0xa90)));

typedef pointer pointer __((offset(0x832)));

typedef pointer pointer __((offset(0xaa7)));

typedef pointer pointer __((offset(0xd6e)));

typedef pointer pointer __((offset(0xbcd)));

typedef pointer pointer __((offset(0x798)));

typedef pointer pointer __((offset(0x10ce)));

typedef pointer pointer __((offset(0x5ef)));

typedef pointer pointer __((offset(0x685)));

typedef pointer pointer __((offset(0xb84)));

typedef pointer pointer __((offset(0xef7)));

typedef pointer pointer __((offset(0x492)));

typedef pointer pointer __((offset(0x1142)));

typedef pointer pointer __((offset(0xdf3)));

typedef pointer pointer __((offset(0x10b1)));

typedef pointer pointer __((offset(0x190)));

typedef pointer pointer __((offset(0x1100)));

typedef pointer pointer __((offset(0xbe6)));

typedef pointer pointer __((offset(0xb3f)));

typedef pointer pointer __((offset(0x405)));

typedef pointer pointer __((offset(0xf07)));

typedef pointer pointer __((offset(0x442)));

typedef pointer pointer __((offset(0x4e9)));

typedef pointer pointer __((offset(0x9ba)));

typedef pointer pointer __((offset(0xaf0)));

typedef pointer pointer __((offset(0x170)));

typedef pointer pointer __((offset(0x224)));

typedef pointer pointer __((offset(0xfc0)));

typedef pointer pointer __((offset(0x897)));

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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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




void shift64RightJamming(ulong param_1,int param_2,ulong *param_3);
void shift64ExtraRightJamming(ulong param_1,ulong param_2,int param_3,ulong *param_4,ulong *param_5);
void add128(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,long *param_6);
void sub128(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,long *param_6);
void mul64To128(ulong param_1,ulong param_2,long *param_3,ulong *param_4);
void float_raise(uint param_1);
bool float64_is_nan(long param_1);
bool float64_is_signaling_nan(ulong param_1);
ulong extractFloat64Frac(ulong param_1);
uint extractFloat64Exp(undefined8 param_1);
ulong extractFloat64Sign(ulong param_1);
long packFloat64(long param_1,long param_2,long param_3);
long int32_to_float64(uint param_1);
ulong float64_add(ulong param_1,ulong param_2);
ulong float64_mul(ulong param_1,ulong param_2);
long roundAndPackFloat64(ulong param_1,long param_2,ulong param_3);
ulong float64_div(ulong param_1,ulong param_2);
byte float64_le(ulong param_1,ulong param_2);
byte float64_ge(ulong param_1,ulong param_2);
ulong float64_neg(ulong param_1);
ulong float64_abs(ulong param_1);
ulong local_sin(ulong param_1);
void ullong_to_double(void);
int submain(void);
int gettimeofday(timeval * __tv, __timezone_ptr_t __tz);
int printf(char * __format, ...);

