typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined7;
typedef unsigned long    undefined8;
typedef unsigned short    word;

#define uint uint64_t
#define uchar unsigned char
#define int8 int8_t
#define ushort unsigned short
#define ulong unsigned long

#define INLINE 
typedef int flag;
typedef int int16;
typedef unsigned int uint32;
typedef signed int int32;

typedef unsigned short int bits16;
typedef unsigned int bits32;
typedef unsigned long long int bits64;
typedef signed long long int sbits64;

#define LIT64( a ) a##LL
#define countLeadingZeros32_countLeadingZerosHigh 0
