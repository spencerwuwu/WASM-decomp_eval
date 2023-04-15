#include "correlation.h"



void kernel_correlation(double param_1,uint param_2,uint param_3,long param_4,long param_5,
                       long param_6,long param_7)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  
  uVar2 = (ulong)param_2;
  uVar4 = (ulong)param_3;
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      *(undefined8 *)(param_6 + uVar3 * 8) = 0;
      if (0 < (int)param_3) {
        dVar11 = *(double *)(param_6 + uVar3 * 8);
        uVar5 = 0;
        do {
          dVar11 = dVar11 + *(double *)(uVar5 * 0x2580 + param_4 + uVar3 * 8);
          *(double *)(param_6 + uVar3 * 8) = dVar11;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
      *(double *)(param_6 + uVar3 * 8) = *(double *)(param_6 + uVar3 * 8) / param_1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      *(undefined8 *)(param_7 + uVar3 * 8) = 0;
      if (0 < (int)param_3) {
        uVar5 = 0;
        do {
          dVar11 = *(double *)(uVar5 * 0x2580 + param_4 + uVar3 * 8) -
                   *(double *)(param_6 + uVar3 * 8);
          *(double *)(param_7 + uVar3 * 8) = dVar11 * dVar11 + *(double *)(param_7 + uVar3 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
      dVar11 = *(double *)(param_7 + uVar3 * 8) / param_1;
      if (dVar11 < 0.0) {
        dVar11 = sqrt(dVar11);
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      *(ulong *)(param_7 + uVar3 * 8) =
           ~-(ulong)(0.1 < dVar11) | (ulong)dVar11 & -(ulong)(0.1 < dVar11);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      if (0 < (int)param_2) {
        uVar5 = 0;
        do {
          lVar8 = uVar3 * 0x2580 + param_4;
          *(double *)(lVar8 + uVar5 * 8) =
               *(double *)(lVar8 + uVar5 * 8) - *(double *)(param_6 + uVar5 * 8);
          dVar11 = SQRT(param_1);
          if (param_1 < 0.0) {
            dVar11 = sqrt(param_1);
          }
          pdVar1 = (double *)(lVar8 + uVar5 * 8);
          *pdVar1 = *pdVar1 / (dVar11 * *(double *)(param_7 + uVar5 * 8));
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  if (1 < (int)param_2) {
    uVar5 = 1;
    uVar3 = 0;
    do {
      lVar8 = uVar3 * 0x2580 + param_5;
      *(undefined8 *)(lVar8 + uVar3 * 8) = 0x3ff0000000000000;
      uVar6 = uVar3 + 1;
      uVar7 = uVar5;
      if ((long)uVar6 < (long)(int)param_2) {
        do {
          pdVar1 = (double *)(lVar8 + uVar7 * 8);
          *(undefined8 *)(lVar8 + uVar7 * 8) = 0;
          if (0 < (int)param_3) {
            dVar11 = *pdVar1;
            uVar9 = 0;
            do {
              lVar10 = uVar9 * 0x2580 + param_4;
              dVar11 = dVar11 + *(double *)(lVar10 + uVar3 * 8) * *(double *)(lVar10 + uVar7 * 8);
              *pdVar1 = dVar11;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar4);
          }
          *(double *)(uVar7 * 0x2580 + param_5 + uVar3 * 8) = *pdVar1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar2);
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar6;
    } while (uVar6 != param_2 - 1);
  }
  *(undefined8 *)(param_5 + (long)(int)(param_2 - 1) * 0x2588) = 0x3ff0000000000000;
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
  long lVar1;
  long lVar2;
  
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  __ptr_02 = (void *)polybench_alloc_data(0x4b0,8);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x2580) =
           (double)((int)lVar2 * (int)lVar1) / 1200.0 + (double)(int)lVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x578);
  kernel_correlation(0x4095e00000000000,0x4b0,0x578,__ptr,__ptr_00,__ptr_01,__ptr_02);
  __stream = _DAT_ff3d8d48288b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_ff3d8d48288b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar2 + (int)lVar1 * 0x4b0) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar2 * 8 + lVar1 * 0x2580));
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
  free(__ptr_02);
  return 0;
}


