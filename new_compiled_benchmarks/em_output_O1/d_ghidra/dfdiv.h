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

typedef pointer pointer __((offset(0xb0)));

typedef pointer pointer __((offset(0x3fa)));

typedef pointer pointer __((offset(0x423)));

typedef pointer pointer __((offset(0x2a2)));

typedef pointer pointer __((offset(0x311)));

typedef pointer pointer __((offset(0x4e3)));

typedef pointer pointer __((offset(0xc0)));

typedef pointer pointer __((offset(0x391)));

typedef pointer pointer __((offset(0x150)));

typedef pointer pointer __((offset(0x561)));

typedef pointer pointer __((offset(0x2fa)));

typedef pointer pointer __((offset(0x5ba)));

typedef pointer pointer __((offset(0x7)));

typedef pointer pointer __((offset(0x130)));

typedef pointer pointer __((offset(0x243)));

typedef pointer pointer __((offset(0xe0)));

typedef pointer pointer __((offset(0x140)));

typedef pointer pointer __((offset(0x40)));

typedef pointer pointer __((offset(0x6bc)));

typedef pointer pointer __((offset(0x16e)));

typedef pointer pointer __((offset(0x120)));

typedef pointer pointer __((offset(0x690)));

typedef pointer pointer __((offset(0x60)));

typedef pointer pointer __((offset(0x601)));

typedef pointer pointer __((offset(0x28b)));

typedef pointer pointer __((offset(0x752)));

typedef pointer pointer __((offset(0x110)));

typedef pointer pointer __((offset(0x200)));

typedef pointer pointer __((offset(0x6d0)));

typedef pointer pointer __((offset(0x185)));

typedef pointer pointer __((offset(0x1c0)));

typedef pointer pointer __((offset(0x50)));

typedef pointer pointer __((offset(0x78f)));

typedef pointer pointer __((offset(0x5c4)));

typedef pointer pointer __((offset(0x737)));

typedef pointer pointer __((offset(0x6a0)));

typedef pointer pointer __((offset(0x70c)));

typedef pointer pointer __((offset(0x627)));

typedef pointer pointer __((offset(0x6b5)));

typedef pointer pointer __((offset(0x188)));

typedef pointer pointer __((offset(0x552)));

typedef pointer pointer __((offset(0x71d)));

typedef pointer pointer __((offset(0x224)));

typedef pointer pointer __((offset(0x210)));

typedef pointer pointer __((offset(0x73e)));

typedef pointer pointer __((offset(0x25a)));

typedef pointer pointer __((offset(0x174)));

typedef pointer pointer __((offset(0x566)));

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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
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




void shift64RightJamming(ulong param_1,int param_2,ulong *param_3);
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
ulong float64_div(ulong param_1,ulong param_2);
void ullong_to_double(void);
int submain(void);
int gettimeofday(timeval * __tv, __timezone_ptr_t __tz);
int printf(char * __format, ...);

