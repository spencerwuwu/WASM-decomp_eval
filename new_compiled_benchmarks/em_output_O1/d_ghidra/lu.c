#include "lu.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  ulong uVar1;
  FILE *__stream;
  void *__ptr;
  long lVar2;
  void *__s;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  lVar7 = 1;
  uVar5 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr + lVar2 * 8 + uVar5 * 16000) = (double)-(int)lVar2 / 2000.0 + 1.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != lVar7);
    uVar1 = uVar5 + 1;
    if (uVar5 < 1999) {
      memset((void *)(uVar5 * 0x3e88 + 8 + (long)__ptr),0,(uVar5 * -8 + 0x3e70 & 0x7fffffff8) + 8);
    }
    *(undefined8 *)((long)__ptr + uVar5 * 0x3e88) = 0x3ff0000000000000;
    lVar7 = lVar7 + 1;
    uVar5 = uVar1;
  } while (uVar1 != 2000);
  __s = (void *)polybench_alloc_data(4000000);
  lVar2 = 0;
  memset(__s,0,32000000);
  lVar7 = 0;
  do {
    lVar3 = 0;
    do {
      lVar4 = lVar3 * 16000;
      lVar6 = 0;
      do {
        *(double *)((long)__s + lVar6 * 8 + lVar4) =
             *(double *)((long)__ptr + lVar7 * 8 + lVar4) *
             *(double *)((long)__ptr + lVar7 * 8 + lVar6 * 16000) +
             *(double *)((long)__s + lVar6 * 8 + lVar4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 2000);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2000);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 2000);
  do {
    lVar7 = 0;
    do {
      *(undefined8 *)((long)__ptr + lVar7 * 8 + lVar2 * 16000) =
           *(undefined8 *)((long)__s + lVar7 * 8 + lVar2 * 16000);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2000);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 2000);
  free(__s);
  lVar7 = 0;
  do {
    lVar2 = lVar7;
    if (lVar7 != 0) {
      lVar3 = 0;
      do {
        if (lVar3 != 0) {
          dVar8 = *(double *)((long)__ptr + lVar3 * 8 + lVar7 * 16000);
          lVar4 = 0;
          do {
            dVar8 = dVar8 - *(double *)((long)__ptr + lVar4 * 8 + lVar7 * 16000) *
                            *(double *)((long)__ptr + lVar3 * 8 + lVar4 * 16000);
            *(double *)((long)__ptr + lVar3 * 8 + lVar7 * 16000) = dVar8;
            lVar4 = lVar4 + 1;
          } while (lVar4 != lVar3);
        }
        *(double *)((long)__ptr + lVar3 * 8 + lVar7 * 16000) =
             *(double *)((long)__ptr + lVar3 * 8 + lVar7 * 16000) /
             *(double *)(lVar3 * 0x3e88 + (long)__ptr);
        lVar3 = lVar3 + 1;
      } while (lVar3 != lVar7);
    }
    do {
      if (lVar7 != 0) {
        dVar8 = *(double *)((long)__ptr + lVar2 * 8 + lVar7 * 16000);
        lVar3 = 0;
        do {
          dVar8 = dVar8 - *(double *)((long)__ptr + lVar3 * 8 + lVar7 * 16000) *
                          *(double *)((long)__ptr + lVar2 * 8 + lVar3 * 16000);
          *(double *)((long)__ptr + lVar2 * 8 + lVar7 * 16000) = dVar8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != lVar7);
      }
      __stream = _DAT_e33d8d48308b4c;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 2000);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 2000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_e33d8d48308b4c);
    lVar7 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar2 + (int)lVar7 * 2000) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar2 * 8 + lVar7 * 16000));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 2000);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  return 0;
}


