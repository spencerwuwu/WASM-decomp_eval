#include "floyd-warshall.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  __ptr = (void *)polybench_alloc_data(0x77a100);
  lVar1 = 0;
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      iVar4 = (uint)((int)lVar3 * (int)lVar2) % 7 + 1;
      iVar5 = (int)lVar3 + (int)lVar2;
      if ((uint)(iVar5 * -0x45d1745d) < 0x1745d175) {
        iVar4 = 999;
      }
      if ((uint)(iVar5 * -0x49249249) < 0x24924925) {
        iVar4 = 999;
      }
      if ((uint)(iVar5 * -0x3b13b13b) < 0x13b13b14) {
        iVar4 = 999;
      }
      *(int *)((long)__ptr + lVar3 * 4 + lVar2 * 0x2bc0) = iVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0xaf0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xaf0);
  do {
    lVar2 = 0;
    do {
      lVar3 = 0;
      do {
        iVar5 = *(int *)((long)__ptr + lVar3 * 4 + lVar1 * 0x2bc0) +
                *(int *)((long)__ptr + lVar1 * 4 + lVar2 * 0x2bc0);
        iVar4 = *(int *)((long)__ptr + lVar3 * 4 + lVar2 * 0x2bc0);
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        *(int *)((long)__ptr + lVar3 * 4 + lVar2 * 0x2bc0) = iVar5;
        __stream = _DAT_c93d8d48308b4c;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0xaf0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0xaf0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xaf0);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_c93d8d48308b4c);
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    lVar1 = 0;
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar2 + (int)lVar1 * 0xaf0) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,(char *)&_L_str_5,
                (ulong)*(uint *)((long)__ptr + lVar2 * 4 + lVar1 * 0x2bc0));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0xaf0);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0xaf0);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  return 0;
}


