#include "ludcmp.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar1;
  void *__s;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  double dVar9;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  lVar7 = 0;
  do {
    *(undefined8 *)((long)__ptr_01 + lVar7 * 8) = 0;
    *(undefined8 *)((long)__ptr_02 + lVar7 * 8) = 0;
    lVar1 = lVar7 + 1;
    *(double *)((long)__ptr_00 + lVar7 * 8) = ((double)(int)lVar1 / 2000.0) * 0.5 + 4.0;
    lVar7 = lVar1;
  } while (lVar1 != 2000);
  lVar7 = 1;
  uVar2 = 0;
  do {
    lVar1 = 0;
    do {
      *(double *)((long)__ptr + lVar1 * 8 + uVar2 * 16000) = (double)-(int)lVar1 / 2000.0 + 1.0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != lVar7);
    uVar4 = uVar2 + 1;
    if (uVar2 < 1999) {
      memset((void *)(uVar2 * 0x3e88 + 8 + (long)__ptr),0,(uVar2 * -8 + 0x3e70 & 0x7fffffff8) + 8);
    }
    *(undefined8 *)((long)__ptr + uVar2 * 0x3e88) = 0x3ff0000000000000;
    lVar7 = lVar7 + 1;
    uVar2 = uVar4;
  } while (uVar4 != 2000);
  __s = (void *)polybench_alloc_data(4000000);
  lVar1 = 0;
  memset(__s,0,32000000);
  lVar7 = 0;
  do {
    lVar3 = 0;
    do {
      lVar5 = lVar3 * 16000;
      lVar6 = 0;
      do {
        *(double *)((long)__s + lVar6 * 8 + lVar5) =
             *(double *)((long)__ptr + lVar7 * 8 + lVar5) *
             *(double *)((long)__ptr + lVar7 * 8 + lVar6 * 16000) +
             *(double *)((long)__s + lVar6 * 8 + lVar5);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 2000);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2000);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 2000);
  do {
    lVar7 = 0;
    do {
      *(undefined8 *)((long)__ptr + lVar7 * 8 + lVar1 * 16000) =
           *(undefined8 *)((long)__s + lVar7 * 8 + lVar1 * 16000);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2000);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2000);
  free(__s);
  lVar7 = 0;
  lVar1 = 0;
  do {
    lVar3 = lVar1;
    if (lVar1 != 0) {
      lVar5 = 0;
      do {
        dVar9 = *(double *)((long)__ptr + lVar5 * 8 + lVar1 * 16000);
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            dVar9 = dVar9 - *(double *)((long)__ptr + lVar6 * 8 + lVar1 * 16000) *
                            *(double *)((long)__ptr + lVar5 * 8 + lVar6 * 16000);
            lVar6 = lVar6 + 1;
          } while (lVar6 != lVar5);
        }
        *(double *)((long)__ptr + lVar5 * 8 + lVar1 * 16000) =
             dVar9 / *(double *)(lVar5 * 0x3e88 + (long)__ptr);
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar1);
    }
    do {
      dVar9 = *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 16000);
      if (lVar1 != 0) {
        lVar5 = 0;
        do {
          dVar9 = dVar9 - *(double *)((long)__ptr + lVar5 * 8 + lVar1 * 16000) *
                          *(double *)((long)__ptr + lVar3 * 8 + lVar5 * 16000);
          lVar5 = lVar5 + 1;
        } while (lVar5 != lVar1);
      }
      *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 16000) = dVar9;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2000);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2000);
  do {
    dVar9 = *(double *)((long)__ptr_00 + lVar7 * 8);
    if (lVar7 != 0) {
      lVar1 = 0;
      do {
        dVar9 = dVar9 - *(double *)((long)__ptr + lVar1 * 8 + lVar7 * 16000) *
                        *(double *)((long)__ptr_02 + lVar1 * 8);
        lVar1 = lVar1 + 1;
      } while (lVar1 != lVar7);
    }
    *(double *)((long)__ptr_02 + lVar7 * 8) = dVar9;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 2000);
  uVar2 = 1999;
  do {
    dVar9 = *(double *)((long)__ptr_02 + uVar2 * 8);
    uVar4 = uVar2;
    if (uVar2 < 1999) {
      do {
        lVar7 = uVar4 * 8;
        lVar1 = uVar4 * 8;
        uVar4 = uVar4 + 1;
        dVar9 = dVar9 - *(double *)((long)__ptr + lVar7 + uVar2 * 16000 + 8) *
                        *(double *)((long)__ptr_01 + lVar1 + 8);
      } while (uVar4 != 1999);
    }
    *(double *)((long)__ptr_01 + uVar2 * 8) = dVar9 / *(double *)(uVar2 * 0x3e88 + (long)__ptr);
    __stream = _DAT_dd3d8d48288b4c;
    bVar8 = uVar2 != 0;
    uVar2 = uVar2 - 1;
  } while (bVar8);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_dd3d8d48288b4c);
    lVar7 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if (((uint)((int)lVar7 * -0x33333333) >> 2 | (int)lVar7 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


