#include "covariance.h"



void kernel_covariance(double param_1,uint param_2,uint param_3,long param_4,long param_5,
                      long param_6)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  uVar2 = (ulong)param_2;
  uVar5 = (ulong)param_3;
  if (0 < (int)param_2) {
    uVar6 = 0;
    do {
      *(undefined8 *)(param_6 + uVar6 * 8) = 0;
      if (0 < (int)param_3) {
        dVar8 = *(double *)(param_6 + uVar6 * 8);
        uVar7 = 0;
        do {
          dVar8 = dVar8 + *(double *)(uVar7 * 0x2580 + param_4 + uVar6 * 8);
          *(double *)(param_6 + uVar6 * 8) = dVar8;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar5);
      }
      *(double *)(param_6 + uVar6 * 8) = *(double *)(param_6 + uVar6 * 8) / param_1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  if (0 < (int)param_3) {
    uVar6 = 0;
    do {
      if (0 < (int)param_2) {
        uVar7 = 0;
        do {
          lVar3 = uVar6 * 0x2580 + param_4;
          *(double *)(lVar3 + uVar7 * 8) =
               *(double *)(lVar3 + uVar7 * 8) - *(double *)(param_6 + uVar7 * 8);
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  if (0 < (int)param_2) {
    uVar7 = 0;
    uVar6 = uVar7;
    do {
      lVar3 = uVar6 * 0x2580 + param_5;
      pdVar1 = (double *)(lVar3 + uVar7 * 8);
      *(undefined8 *)(lVar3 + uVar7 * 8) = 0;
      if (0 < (int)param_3) {
        dVar8 = *pdVar1;
        uVar4 = 0;
        do {
          lVar3 = uVar4 * 0x2580 + param_4;
          dVar8 = dVar8 + *(double *)(lVar3 + uVar6 * 8) * *(double *)(lVar3 + uVar7 * 8);
          *pdVar1 = dVar8;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar5);
      }
      dVar8 = *pdVar1 / (param_1 + -1.0);
      *pdVar1 = dVar8;
      *(double *)(uVar7 * 0x2580 + param_5 + uVar6 * 8) = dVar8;
      uVar7 = uVar7 + 1;
    } while (((long)uVar7 < (long)(int)param_2) ||
            (uVar7 = uVar6 + 1, uVar6 = uVar7, uVar7 != uVar2));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  double dVar8;
  
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  lVar2 = 0;
  lVar5 = 0;
  do {
    lVar6 = 0;
    do {
      *(double *)((long)__ptr + lVar6 * 8 + lVar5 * 0x2580) =
           ((double)(int)lVar6 * (double)(int)lVar5) / 1200.0;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x4b0);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x578);
  lVar5 = 0;
  do {
    *(undefined8 *)((long)__ptr_01 + lVar2 * 8) = 0;
    dVar8 = 0.0;
    lVar6 = 0;
    do {
      dVar8 = dVar8 + *(double *)((long)__ptr + lVar2 * 8 + lVar6 * 0x2580);
      *(double *)((long)__ptr_01 + lVar2 * 8) = dVar8;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x578);
    *(double *)((long)__ptr_01 + lVar2 * 8) = dVar8 / 1400.0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x4b0);
  uVar4 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr + lVar2 * 8 + lVar5 * 0x2580) =
           *(double *)((long)__ptr + lVar2 * 8 + lVar5 * 0x2580) -
           *(double *)((long)__ptr_01 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    lVar5 = lVar5 + 1;
    uVar3 = uVar4;
  } while (lVar5 != 0x578);
  do {
    pdVar1 = (double *)((long)__ptr_00 + uVar4 * 8 + uVar3 * 0x2580);
    *(undefined8 *)((long)__ptr_00 + uVar4 * 8 + uVar3 * 0x2580) = 0;
    dVar8 = 0.0;
    lVar2 = 0;
    do {
      dVar8 = dVar8 + *(double *)((long)__ptr + uVar3 * 8 + lVar2 * 0x2580) *
                      *(double *)((long)__ptr + uVar4 * 8 + lVar2 * 0x2580);
      *pdVar1 = dVar8;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x578);
    *pdVar1 = dVar8 / 1399.0;
    *(double *)((long)__ptr_00 + uVar3 * 8 + uVar4 * 0x2580) = dVar8 / 1399.0;
    __stream = _DAT_fa3d8d48208b4c;
    bVar7 = uVar4 < 0x4af;
    uVar4 = uVar4 + 1;
  } while ((bVar7) || (uVar4 = uVar3 + 1, uVar3 = uVar4, uVar4 != 0x4b0));
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_fa3d8d48208b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar5 = 0;
      do {
        if (((uint)(((int)lVar5 + (int)lVar2 * 0x4b0) * -0x33333333) >> 2 | (int)lVar5 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar5 * 8 + lVar2 * 0x2580));
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


