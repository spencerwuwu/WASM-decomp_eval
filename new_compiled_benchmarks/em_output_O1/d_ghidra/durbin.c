#include "durbin.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  ulong *__ptr;
  ulong *__dest;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_3eb8 [2001];
  
  __ptr = (ulong *)polybench_alloc_data(2000,8);
  __dest = (ulong *)polybench_alloc_data(2000,8);
  lVar1 = 0;
  do {
    __ptr[lVar1] = (ulong)(double)(0x7d1 - (int)lVar1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2000);
  *__dest = *__ptr ^ 0x8000000000000000;
  dVar5 = (double)(*__ptr ^ 0x8000000000000000);
  dVar6 = 1.0;
  uVar3 = 1;
  lVar1 = 0;
  do {
    dVar4 = 0.0;
    uVar2 = 0;
    do {
      dVar4 = dVar4 + (double)__ptr[~uVar2 + uVar3] * (double)__dest[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
    dVar6 = dVar6 * ((double)((ulong)dVar5 ^ 0x8000000000000000) * dVar5 + 1.0);
    dVar5 = (double)((ulong)(dVar4 + (double)__ptr[uVar3]) ^ 0x8000000000000000) / dVar6;
    uVar2 = 0;
    do {
      local_3eb8[uVar2] = (double)__dest[~uVar2 + uVar3] * dVar5 + (double)__dest[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
    memcpy(__dest,local_3eb8,lVar1 * 8 + 8);
    __dest[uVar3] = (ulong)dVar5;
    __stream = _DAT_d93d8d48388b4c;
    uVar3 = uVar3 + 1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1999);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_d93d8d48388b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if (((uint)((int)lVar1 * -0x33333333) >> 2 | (int)lVar1 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",__dest[lVar1]);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__dest);
  return 0;
}


