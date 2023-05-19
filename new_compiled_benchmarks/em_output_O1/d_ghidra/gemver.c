#include "gemver.h"



void kernel_gemver(double param_1,double param_2,uint param_3,long param_4,long param_5,long param_6
                  ,long param_7_00,long param_8_00,long param_7,long param_8,long param_9,
                  long param_10)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  uVar1 = (ulong)param_3;
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      uVar4 = 0;
      do {
        lVar2 = uVar3 * 16000 + param_4;
        *(double *)(lVar2 + uVar4 * 8) =
             *(double *)(param_7_00 + uVar3 * 8) * *(double *)(param_8_00 + uVar4 * 8) +
             *(double *)(param_5 + uVar3 * 8) * *(double *)(param_6 + uVar4 * 8) +
             *(double *)(lVar2 + uVar4 * 8);
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      dVar5 = *(double *)(param_8 + uVar3 * 8);
      uVar4 = 0;
      do {
        dVar5 = dVar5 + *(double *)(uVar4 * 16000 + param_4 + uVar3 * 8) * param_2 *
                        *(double *)(param_9 + uVar4 * 8);
        *(double *)(param_8 + uVar3 * 8) = dVar5;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      *(double *)(param_8 + uVar3 * 8) =
           *(double *)(param_8 + uVar3 * 8) + *(double *)(param_10 + uVar3 * 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      dVar5 = *(double *)(param_7 + uVar3 * 8);
      uVar4 = 0;
      do {
        dVar5 = dVar5 + *(double *)(uVar3 * 16000 + param_4 + uVar4 * 8) * param_1 *
                        *(double *)(param_8 + uVar4 * 8);
        *(double *)(param_7 + uVar3 * 8) = dVar5;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  void *__ptr_05;
  void *__ptr_06;
  void *__ptr_07;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  __ptr_03 = (void *)polybench_alloc_data(2000,8);
  __ptr_04 = (void *)polybench_alloc_data(2000,8);
  __ptr_05 = (void *)polybench_alloc_data(2000,8);
  __ptr_06 = (void *)polybench_alloc_data(2000,8);
  __ptr_07 = (void *)polybench_alloc_data(2000);
  lVar4 = 0;
  lVar2 = 0;
  do {
    *(double *)((long)__ptr_00 + lVar2 * 8) = (double)(int)lVar2;
    lVar1 = lVar2 + 1;
    dVar5 = (double)(int)lVar1 / 2000.0;
    *(double *)((long)__ptr_02 + lVar2 * 8) = dVar5 * 0.5;
    *(double *)((long)__ptr_01 + lVar2 * 8) = dVar5 * 0.25;
    *(double *)((long)__ptr_03 + lVar2 * 8) = dVar5 / 6.0;
    *(double *)((long)__ptr_06 + lVar2 * 8) = dVar5 * 0.125;
    *(double *)((long)__ptr_07 + lVar2 * 8) = dVar5 / 9.0;
    *(undefined8 *)((long)__ptr_05 + lVar2 * 8) = 0;
    *(undefined8 *)((long)__ptr_04 + lVar2 * 8) = 0;
    lVar3 = 0;
    do {
      *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 16000) =
           (double)((uint)((int)lVar3 * (int)lVar2) % 2000) / 2000.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2000);
    lVar2 = lVar1;
  } while (lVar1 != 2000);
  lVar2 = 0;
  do {
    lVar1 = 0;
    do {
      *(double *)((long)__ptr + lVar1 * 8 + lVar4 * 16000) =
           *(double *)((long)__ptr_02 + lVar4 * 8) * *(double *)((long)__ptr_03 + lVar1 * 8) +
           *(double *)((long)__ptr_00 + lVar4 * 8) * *(double *)((long)__ptr_01 + lVar1 * 8) +
           *(double *)((long)__ptr + lVar1 * 8 + lVar4 * 16000);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 2000);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 2000);
  lVar4 = 0;
  do {
    dVar5 = *(double *)((long)__ptr_05 + lVar2 * 8);
    lVar1 = 0;
    do {
      dVar5 = dVar5 + *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 16000) * 1.2 *
                      *(double *)((long)__ptr_06 + lVar1 * 8);
      *(double *)((long)__ptr_05 + lVar2 * 8) = dVar5;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 2000);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 2000);
  lVar2 = 0;
  do {
    *(double *)((long)__ptr_05 + lVar4 * 8) =
         *(double *)((long)__ptr_05 + lVar4 * 8) + *(double *)((long)__ptr_07 + lVar4 * 8);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 2000);
  do {
    dVar5 = *(double *)((long)__ptr_04 + lVar2 * 8);
    lVar4 = 0;
    do {
      dVar5 = dVar5 + *(double *)((long)__ptr + lVar4 * 8 + lVar2 * 16000) * 1.5 *
                      *(double *)((long)__ptr_05 + lVar4 * 8);
      *(double *)((long)__ptr_04 + lVar2 * 8) = dVar5;
      __stream = _DAT_48240c8948088b48;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2000);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 2000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_48240c8948088b48);
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    lVar2 = 0;
    do {
      if (((uint)((int)lVar2 * -0x33333333) >> 2 | (int)lVar2 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_04 + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr_04);
  free(__ptr_05);
  free(__ptr_06);
  free(__ptr_07);
  return 0;
}


