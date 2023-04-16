#include "correlation.h"



void kernel_correlation(double param_1,uint param_2,uint param_3,long param_4,long param_5,
                       long param_6,long param_7)

{
  ulong uVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = (ulong)param_2;
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      *(undefined8 *)(param_6 + uVar3 * 8) = 0;
      dVar11 = 0.0;
      if (0 < (int)param_3) {
        uVar4 = 0;
        uVar5 = 0;
        if (3 < param_3) {
          do {
            dVar11 = dVar11 + *(double *)(uVar4 * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            dVar11 = dVar11 + *(double *)((uVar4 | 1) * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            dVar11 = dVar11 + *(double *)((uVar4 | 2) * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            dVar11 = dVar11 + *(double *)((uVar4 | 3) * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            uVar4 = uVar4 + 4;
            uVar5 = uVar5 + 4;
          } while (uVar5 != (param_3 & 0xfffffffc));
        }
        if ((ulong)(param_3 & 3) != 0) {
          uVar5 = 0;
          do {
            dVar11 = dVar11 + *(double *)(uVar4 * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar5 != (param_3 & 3));
        }
      }
      *(double *)(param_6 + uVar3 * 8) = dVar11 / param_1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
    if (0 < (int)param_2) {
      uVar3 = 0;
      do {
        *(undefined8 *)(param_7 + uVar3 * 8) = 0;
        dVar11 = 0.0;
        if (0 < (int)param_3) {
          uVar4 = 0;
          uVar5 = 0;
          if (param_3 != 1) {
            do {
              dVar12 = *(double *)(uVar4 * 0x2580 + param_4 + uVar3 * 8) -
                       *(double *)(param_6 + uVar3 * 8);
              dVar11 = dVar12 * dVar12 + dVar11;
              *(double *)(param_7 + uVar3 * 8) = dVar11;
              dVar12 = *(double *)((uVar4 | 1) * 0x2580 + param_4 + uVar3 * 8) -
                       *(double *)(param_6 + uVar3 * 8);
              dVar11 = dVar12 * dVar12 + dVar11;
              *(double *)(param_7 + uVar3 * 8) = dVar11;
              uVar4 = uVar4 + 2;
              uVar5 = uVar5 + 2;
            } while (uVar5 != (param_3 & 0xfffffffe));
          }
          if ((param_3 & 1) != 0) {
            dVar12 = *(double *)(uVar4 * 0x2580 + param_4 + uVar3 * 8) -
                     *(double *)(param_6 + uVar3 * 8);
            dVar11 = dVar11 + dVar12 * dVar12;
            *(double *)(param_7 + uVar3 * 8) = dVar11;
          }
        }
        dVar11 = dVar11 / param_1;
        if (dVar11 < 0.0) {
          dVar11 = sqrt(dVar11);
        }
        else {
          dVar11 = SQRT(dVar11);
        }
        *(ulong *)(param_7 + uVar3 * 8) =
             ~-(ulong)(0.1 < dVar11) | (ulong)dVar11 & -(ulong)(0.1 < dVar11);
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar1);
    }
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      if (0 < (int)param_2) {
        uVar4 = 0;
        do {
          lVar8 = uVar3 * 0x2580 + param_4;
          *(double *)(lVar8 + uVar4 * 8) =
               *(double *)(lVar8 + uVar4 * 8) - *(double *)(param_6 + uVar4 * 8);
          dVar11 = SQRT(param_1);
          if (param_1 < 0.0) {
            dVar11 = sqrt(param_1);
          }
          pdVar2 = (double *)(uVar4 * 8 + lVar8);
          *pdVar2 = *pdVar2 / (dVar11 * *(double *)(param_7 + uVar4 * 8));
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  if (1 < (int)param_2) {
    uVar4 = 1;
    uVar3 = 0;
    do {
      lVar8 = uVar3 * 0x2580 + param_5;
      *(undefined8 *)(lVar8 + uVar3 * 8) = 0x3ff0000000000000;
      uVar6 = uVar3 + 1;
      uVar5 = uVar4;
      if (uVar6 < uVar1) {
        do {
          *(undefined8 *)(lVar8 + uVar5 * 8) = 0;
          if ((int)param_3 < 1) {
            dVar11 = 0.0;
          }
          else {
            pdVar2 = (double *)(lVar8 + uVar5 * 8);
            dVar11 = 0.0;
            uVar10 = 0;
            uVar7 = 0;
            if (param_3 != 1) {
              do {
                lVar9 = uVar10 * 0x2580 + param_4;
                dVar11 = *(double *)(lVar9 + uVar3 * 8) * *(double *)(lVar9 + uVar5 * 8) + dVar11;
                *pdVar2 = dVar11;
                lVar9 = (uVar10 | 1) * 0x2580 + param_4;
                dVar11 = *(double *)(lVar9 + uVar3 * 8) * *(double *)(lVar9 + uVar5 * 8) + dVar11;
                *pdVar2 = dVar11;
                uVar10 = uVar10 + 2;
                uVar7 = uVar7 + 2;
              } while (uVar7 != (param_3 & 0xfffffffe));
            }
            if ((param_3 & 1) != 0) {
              lVar9 = uVar10 * 0x2580 + param_4;
              dVar11 = dVar11 + *(double *)(lVar9 + uVar3 * 8) * *(double *)(lVar9 + uVar5 * 8);
              *pdVar2 = dVar11;
            }
          }
          *(double *)(uVar5 * 0x2580 + param_5 + uVar3 * 8) = dVar11;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar1);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar6;
    } while (uVar6 != param_2 - 1);
  }
  *(undefined8 *)(param_5 + (long)(int)(param_2 - 1) * 0x2588) = 0x3ff0000000000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  undefined auVar2 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar3;
  long lVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  undefined auVar8 [16];
  
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  __ptr_02 = (void *)polybench_alloc_data(0x4b0,8);
  auVar2 = __LCPI1_1;
  lVar3 = 0;
  do {
    dVar5 = (double)(int)lVar3;
    lVar4 = 0;
    iVar6 = 0;
    do {
      dVar7 = (double)(iVar6 * (int)lVar3);
      auVar8 = divpd(CONCAT88((double)(int)((ulong)dVar7 >> 0x20),dVar7),auVar2);
      pdVar1 = (double *)((long)__ptr + lVar4 * 8 + lVar3 * 0x2580);
      *pdVar1 = SUB168(auVar8,0) + dVar5;
      pdVar1[1] = SUB168(auVar8 >> 0x40,0) + dVar5;
      lVar4 = lVar4 + 2;
      iVar6 = iVar6 + 2;
    } while (lVar4 != 0x4b0);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x578);
  kernel_correlation(0x4095e00000000000,0x4b0,0x578,__ptr,__ptr_00,__ptr_01,__ptr_02);
  __stream = _DAT_12d3d8d48288b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_12d3d8d48288b4c);
    lVar3 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar4 = 0;
      do {
        if (((uint)(((int)lVar4 + (int)lVar3 * 0x4b0) * -0x33333333) >> 2 | (int)lVar4 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar4 * 8 + lVar3 * 0x2580));
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x4b0);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


