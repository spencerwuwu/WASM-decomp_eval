#include "syr2k.h"



void kernel_syr2k(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6,
                 long param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (0 < (int)param_3) {
    lVar3 = 1;
    uVar4 = 0;
    do {
      lVar1 = 0;
      do {
        lVar5 = uVar4 * 0x2580 + param_5;
        *(double *)(lVar5 + lVar1 * 8) = *(double *)(lVar5 + lVar1 * 8) * param_2;
        lVar1 = lVar1 + 1;
      } while (lVar1 != lVar3);
      if (0 < (int)param_4) {
        uVar2 = 0;
        do {
          lVar1 = 0;
          do {
            *(double *)(lVar5 + lVar1 * 8) =
                 *(double *)(param_6 + lVar1 * 8000 + uVar2 * 8) * param_1 *
                 *(double *)(param_7 + uVar4 * 8000 + uVar2 * 8) +
                 *(double *)(lVar1 * 8000 + param_7 + uVar2 * 8) * param_1 *
                 *(double *)(uVar4 * 8000 + param_6 + uVar2 * 8) + *(double *)(lVar5 + lVar1 * 8);
            lVar1 = lVar1 + 1;
          } while (lVar1 != lVar3);
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_4);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (uVar4 != param_3);
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
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  __ptr = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  lVar2 = 0;
  lVar1 = 0;
  do {
    lVar3 = 0;
    do {
      iVar4 = (int)lVar3 * (int)lVar1;
      *(double *)((long)__ptr_00 + lVar3 * 8 + lVar1 * 8000) =
           (double)(((iVar4 + 1U) / 0x4b0) * -0x4b0 + iVar4 + 1) / 1200.0;
      *(double *)((long)__ptr_01 + lVar3 * 8 + lVar1 * 8000) =
           (double)(iVar4 + ((iVar4 + 2U) / 1000) * -1000 + 2) / 1000.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 1000);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x4b0);
  lVar1 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 0x2580) =
           (double)(((int)lVar3 * (int)lVar2 + 3U) % 0x4b0) / 1000.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x4b0);
  lVar2 = 1;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 0x2580) =
           *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 0x2580) * 1.2;
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar2);
    lVar3 = 0;
    do {
      lVar5 = 0;
      do {
        *(double *)((long)__ptr + lVar5 * 8 + lVar1 * 0x2580) =
             *(double *)((long)__ptr_00 + lVar3 * 8 + lVar5 * 8000) * 1.5 *
             *(double *)((long)__ptr_01 + lVar3 * 8 + lVar1 * 8000) +
             *(double *)((long)__ptr_01 + lVar3 * 8 + lVar5 * 8000) * 1.5 *
             *(double *)((long)__ptr_00 + lVar3 * 8 + lVar1 * 8000) +
             *(double *)((long)__ptr + lVar5 * 8 + lVar1 * 0x2580);
        __stream = _DAT_f73d8d48208b4c;
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar2);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 1000);
    lVar1 = lVar1 + 1;
    lVar2 = lVar2 + 1;
  } while (lVar1 != 0x4b0);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_f73d8d48208b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar2 + (int)lVar1 * 0x4b0) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar2 * 8 + lVar1 * 0x2580));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x4b0);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x4b0);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


