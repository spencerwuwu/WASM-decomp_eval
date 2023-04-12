#include "cholesky.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  ulong uVar1;
  double dVar2;
  FILE *__stream;
  void *__ptr;
  long lVar3;
  void *__s;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  lVar8 = 1;
  uVar6 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr + lVar3 * 8 + uVar6 * 16000) = (double)-(int)lVar3 / 2000.0 + 1.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar8);
    uVar1 = uVar6 + 1;
    if (uVar6 < 1999) {
      memset((void *)(uVar6 * 0x3e88 + 8 + (long)__ptr),0,(uVar6 * -8 + 0x3e70 & 0x7fffffff8) + 8);
    }
    *(undefined8 *)((long)__ptr + uVar6 * 0x3e88) = 0x3ff0000000000000;
    lVar8 = lVar8 + 1;
    uVar6 = uVar1;
  } while (uVar1 != 2000);
  __s = (void *)polybench_alloc_data(4000000);
  lVar3 = 0;
  memset(__s,0,32000000);
  lVar8 = 0;
  do {
    lVar4 = 0;
    do {
      lVar5 = lVar4 * 16000;
      lVar7 = 0;
      do {
        *(double *)((long)__s + lVar7 * 8 + lVar5) =
             *(double *)((long)__ptr + lVar8 * 8 + lVar5) *
             *(double *)((long)__ptr + lVar8 * 8 + lVar7 * 16000) +
             *(double *)((long)__s + lVar7 * 8 + lVar5);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 2000);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2000);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 2000);
  do {
    lVar8 = 0;
    do {
      *(undefined8 *)((long)__ptr + lVar8 * 8 + lVar3 * 16000) =
           *(undefined8 *)((long)__s + lVar8 * 8 + lVar3 * 16000);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 2000);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 2000);
  free(__s);
  lVar8 = 0;
  do {
    if (lVar8 != 0) {
      lVar3 = 0;
      do {
        if (lVar3 != 0) {
          dVar9 = *(double *)((long)__ptr + lVar3 * 8 + lVar8 * 16000);
          lVar4 = 0;
          do {
            dVar9 = dVar9 - *(double *)((long)__ptr + lVar4 * 8 + lVar8 * 16000) *
                            *(double *)((long)__ptr + lVar4 * 8 + lVar3 * 16000);
            *(double *)((long)__ptr + lVar3 * 8 + lVar8 * 16000) = dVar9;
            lVar4 = lVar4 + 1;
          } while (lVar4 != lVar3);
        }
        *(double *)((long)__ptr + lVar3 * 8 + lVar8 * 16000) =
             *(double *)((long)__ptr + lVar3 * 8 + lVar8 * 16000) /
             *(double *)(lVar3 * 0x3e88 + (long)__ptr);
        lVar3 = lVar3 + 1;
      } while (lVar3 != lVar8);
      dVar9 = *(double *)((long)__ptr + lVar8 * 0x3e88);
      lVar3 = 0;
      do {
        dVar2 = *(double *)((long)__ptr + lVar3 * 8 + lVar8 * 16000);
        dVar9 = dVar9 - dVar2 * dVar2;
        *(double *)((long)__ptr + lVar8 * 0x3e88) = dVar9;
        lVar3 = lVar3 + 1;
      } while (lVar3 != lVar8);
    }
    dVar9 = *(double *)((long)__ptr + lVar8 * 0x3e88);
    if (dVar9 < 0.0) {
      dVar9 = sqrt(dVar9);
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    *(double *)((long)__ptr + lVar8 * 0x3e88) = dVar9;
    __stream = _DAT_e63d8d48308b4c;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 2000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    lVar8 = 1;
    fwrite(_L_str_1,0x16,1,_DAT_e63d8d48308b4c);
    lVar3 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar4 = 0;
      do {
        if (((uint)(((int)lVar4 + (int)lVar3 * 2000) * -0x33333333) >> 2 | (int)lVar4 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar4 * 8 + lVar3 * 16000));
        lVar4 = lVar4 + 1;
      } while (lVar4 != lVar8);
      lVar3 = lVar3 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar3 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  return 0;
}


