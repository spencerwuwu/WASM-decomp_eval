#include "covariance.h"



void kernel_covariance(double param_1,uint param_2,uint param_3,long param_4,long param_5,
                      ulong param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  
  uVar6 = (ulong)param_2;
  if (0 < (int)param_2) {
    uVar7 = 0;
    do {
      *(undefined8 *)(param_6 + uVar7 * 8) = 0;
      dVar13 = 0.0;
      if (0 < (int)param_3) {
        uVar11 = 0;
        uVar12 = 0;
        if (3 < param_3) {
          do {
            dVar13 = dVar13 + *(double *)(uVar11 * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            dVar13 = dVar13 + *(double *)((uVar11 | 1) * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            dVar13 = dVar13 + *(double *)((uVar11 | 2) * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            dVar13 = dVar13 + *(double *)((uVar11 | 3) * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            uVar11 = uVar11 + 4;
            uVar12 = uVar12 + 4;
          } while (uVar12 != (param_3 & 0xfffffffc));
        }
        if ((ulong)(param_3 & 3) != 0) {
          uVar12 = 0;
          do {
            dVar13 = dVar13 + *(double *)(uVar11 * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            uVar11 = uVar11 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar12 != (param_3 & 3));
        }
      }
      *(double *)(param_6 + uVar7 * 8) = dVar13 / param_1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  if (0 < (int)param_3) {
    uVar7 = (ulong)(param_2 & 0xfffffffc);
    uVar11 = 0;
    do {
      if (0 < (int)param_2) {
        uVar12 = param_4 + uVar11 * 0x2580;
        if (param_2 < 6) {
          uVar9 = 0;
        }
        else {
          if (uVar12 < param_6 + uVar6 * 8) {
            uVar10 = 0;
            uVar9 = 0;
            if (param_6 < uVar11 * 0x2580 + uVar6 * 8 + param_4) goto LAB_00100200;
          }
          else {
            uVar10 = 0;
          }
          do {
            pdVar1 = (double *)(param_6 + uVar10 * 8);
            pdVar2 = (double *)(param_6 + 0x10 + uVar10 * 8);
            dVar13 = *pdVar2;
            dVar4 = pdVar2[1];
            pdVar2 = (double *)(uVar12 + uVar10 * 8);
            pdVar3 = (double *)(uVar12 + 0x10 + uVar10 * 8);
            dVar5 = pdVar3[1];
            *(undefined (*) [16])(uVar12 + uVar10 * 8) =
                 CONCAT88(pdVar2[1] - pdVar1[1],*pdVar2 - *pdVar1);
            *(undefined (*) [16])(uVar12 + 0x10 + uVar10 * 8) =
                 CONCAT88(dVar5 - dVar4,*pdVar3 - dVar13);
            uVar10 = uVar10 + 4;
          } while (uVar10 != uVar7);
          uVar9 = uVar7;
          if (uVar7 == uVar6) goto LAB_00100160;
        }
LAB_00100200:
        uVar10 = uVar9;
        if ((param_2 & 1) != 0) {
          *(double *)(uVar12 + uVar9 * 8) =
               *(double *)(uVar12 + uVar9 * 8) - *(double *)(param_6 + uVar9 * 8);
          uVar10 = uVar9 | 1;
        }
        if (~uVar9 != -uVar6) {
          do {
            *(double *)(uVar12 + uVar10 * 8) =
                 *(double *)(uVar12 + uVar10 * 8) - *(double *)(param_6 + uVar10 * 8);
            *(double *)(uVar12 + 8 + uVar10 * 8) =
                 *(double *)(uVar12 + 8 + uVar10 * 8) - *(double *)(param_6 + 8 + uVar10 * 8);
            uVar10 = uVar10 + 2;
          } while (uVar10 != uVar6);
        }
      }
LAB_00100160:
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_3);
  }
  if (0 < (int)param_2) {
    uVar11 = 0;
    uVar7 = uVar11;
    do {
      lVar8 = uVar7 * 0x2580 + param_5;
      pdVar1 = (double *)(lVar8 + uVar11 * 8);
      *(undefined8 *)(lVar8 + uVar11 * 8) = 0;
      dVar13 = 0.0;
      if (0 < (int)param_3) {
        uVar12 = 0;
        uVar10 = 0;
        if (param_3 != 1) {
          do {
            lVar8 = uVar12 * 0x2580 + param_4;
            dVar13 = *(double *)(lVar8 + uVar7 * 8) * *(double *)(lVar8 + uVar11 * 8) + dVar13;
            *pdVar1 = dVar13;
            lVar8 = (uVar12 | 1) * 0x2580 + param_4;
            dVar13 = *(double *)(lVar8 + uVar7 * 8) * *(double *)(lVar8 + uVar11 * 8) + dVar13;
            *pdVar1 = dVar13;
            uVar12 = uVar12 + 2;
            uVar10 = uVar10 + 2;
          } while (uVar10 != (param_3 & 0xfffffffe));
        }
        if ((param_3 & 1) != 0) {
          lVar8 = uVar12 * 0x2580 + param_4;
          dVar13 = dVar13 + *(double *)(lVar8 + uVar7 * 8) * *(double *)(lVar8 + uVar11 * 8);
          *pdVar1 = dVar13;
        }
      }
      dVar13 = dVar13 / (param_1 + -1.0);
      *pdVar1 = dVar13;
      *(double *)(uVar11 * 0x2580 + param_5 + uVar7 * 8) = dVar13;
      uVar11 = uVar11 + 1;
    } while ((uVar11 < uVar6) || (uVar11 = uVar7 + 1, uVar7 = uVar11, uVar11 != uVar6));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  void *pvVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined auVar10 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  double dVar18;
  int iVar19;
  int iVar20;
  undefined auVar21 [16];
  
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  auVar10 = __LCPI1_1;
  lVar11 = 0;
  lVar12 = 0;
  do {
    dVar18 = (double)(int)lVar12;
    lVar14 = 0;
    iVar19 = 0;
    iVar20 = 1;
    do {
      auVar21 = divpd(CONCAT88((double)iVar20 * dVar18,(double)iVar19 * dVar18),auVar10);
      *(undefined (*) [16])((long)__ptr + lVar14 * 8 + lVar12 * 0x2580) = auVar21;
      auVar21 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar19 + 2) >> 0x20) * dVar18,
                               (double)(iVar19 + 2) * dVar18),auVar10);
      *(undefined (*) [16])((long)__ptr + lVar14 * 8 + lVar12 * 0x2580 + 0x10) = auVar21;
      auVar21 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar19 + 4) >> 0x20) * dVar18,
                               (double)(iVar19 + 4) * dVar18),auVar10);
      *(undefined (*) [16])((long)__ptr + lVar14 * 8 + lVar12 * 0x2580 + 0x20) = auVar21;
      lVar14 = lVar14 + 6;
      iVar19 = iVar19 + 6;
      iVar20 = iVar20 + 6;
    } while (lVar14 != 0x4b0);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x578);
  do {
    *(undefined8 *)((long)__ptr_01 + lVar11 * 8) = 0;
    dVar18 = 0.0;
    uVar13 = 0;
    do {
      dVar18 = dVar18 + *(double *)((long)__ptr + lVar11 * 8 + uVar13 * 0x2580);
      *(double *)((long)__ptr_01 + lVar11 * 8) = dVar18;
      dVar18 = dVar18 + *(double *)((long)__ptr + lVar11 * 8 + (uVar13 | 1) * 0x2580);
      *(double *)((long)__ptr_01 + lVar11 * 8) = dVar18;
      dVar18 = dVar18 + *(double *)((long)__ptr + lVar11 * 8 + (uVar13 | 2) * 0x2580);
      *(double *)((long)__ptr_01 + lVar11 * 8) = dVar18;
      dVar18 = dVar18 + *(double *)((long)__ptr + lVar11 * 8 + (uVar13 | 3) * 0x2580);
      *(double *)((long)__ptr_01 + lVar11 * 8) = dVar18;
      uVar13 = uVar13 + 4;
    } while (uVar13 != 0x578);
    *(double *)((long)__ptr_01 + lVar11 * 8) = dVar18 / 1400.0;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x4b0);
  uVar13 = 0;
  lVar11 = 0;
  do {
    pvVar1 = (void *)((long)__ptr + lVar11 * 0x2580);
    if (pvVar1 < (void *)((long)__ptr_01 + 0x2580U)) {
      lVar12 = 0;
      lVar14 = 0;
      if ((void *)((long)__ptr + lVar11 * 0x2580 + 0x2580) <= __ptr_01) goto LAB_001005f0;
      do {
        dVar18 = *(double *)((long)pvVar1 + lVar14 * 8 + 8);
        *(double *)((long)pvVar1 + lVar14 * 8) =
             *(double *)((long)pvVar1 + lVar14 * 8) - *(double *)((long)__ptr_01 + lVar14 * 8);
        *(double *)((long)pvVar1 + lVar14 * 8 + 8) =
             dVar18 - *(double *)((long)__ptr_01 + lVar14 * 8 + 8);
        *(double *)((long)pvVar1 + lVar14 * 8 + 0x10) =
             *(double *)((long)pvVar1 + lVar14 * 8 + 0x10) -
             *(double *)((long)__ptr_01 + lVar14 * 8 + 0x10);
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x4b0);
    }
    else {
      lVar12 = 0;
LAB_001005f0:
      do {
        pdVar2 = (double *)((long)__ptr_01 + lVar12 * 8);
        dVar18 = pdVar2[1];
        pdVar3 = (double *)((long)__ptr_01 + lVar12 * 8 + 0x10);
        dVar5 = *pdVar3;
        dVar6 = pdVar3[1];
        pdVar3 = (double *)((long)pvVar1 + lVar12 * 8);
        dVar7 = pdVar3[1];
        pdVar4 = (double *)((long)pvVar1 + lVar12 * 8 + 0x10);
        dVar8 = *pdVar4;
        dVar9 = pdVar4[1];
        pdVar4 = (double *)((long)pvVar1 + lVar12 * 8);
        *pdVar4 = *pdVar3 - *pdVar2;
        pdVar4[1] = dVar7 - dVar18;
        pdVar2 = (double *)((long)pvVar1 + lVar12 * 8 + 0x10);
        *pdVar2 = dVar8 - dVar5;
        pdVar2[1] = dVar9 - dVar6;
        uVar16 = lVar12 * 8 | 0x20;
        dVar18 = ((double *)((long)__ptr_01 + uVar16))[1];
        pdVar2 = (double *)((long)__ptr_01 + uVar16 + 0x10);
        dVar5 = *pdVar2;
        dVar6 = pdVar2[1];
        dVar7 = ((double *)(uVar16 + (long)pvVar1))[1];
        pdVar2 = (double *)(uVar16 + 0x10 + (long)pvVar1);
        dVar8 = *pdVar2;
        dVar9 = pdVar2[1];
        *(double *)(uVar16 + (long)pvVar1) =
             *(double *)(uVar16 + (long)pvVar1) - *(double *)((long)__ptr_01 + uVar16);
        ((double *)(uVar16 + (long)pvVar1))[1] = dVar7 - dVar18;
        pdVar2 = (double *)(uVar16 + 0x10 + (long)pvVar1);
        *pdVar2 = dVar8 - dVar5;
        pdVar2[1] = dVar9 - dVar6;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x4b0);
    }
    lVar11 = lVar11 + 1;
    uVar16 = uVar13;
    if (lVar11 == 0x578) {
      do {
        pdVar2 = (double *)((long)__ptr_00 + uVar13 * 8 + uVar16 * 0x2580);
        *(undefined8 *)((long)__ptr_00 + uVar13 * 8 + uVar16 * 0x2580) = 0;
        dVar18 = 0.0;
        uVar15 = 0;
        do {
          dVar18 = *(double *)((long)__ptr + uVar16 * 8 + uVar15 * 0x2580) *
                   *(double *)((long)__ptr + uVar13 * 8 + uVar15 * 0x2580) + dVar18;
          *pdVar2 = dVar18;
          dVar18 = *(double *)((long)__ptr + uVar16 * 8 + (uVar15 | 1) * 0x2580) *
                   *(double *)((long)__ptr + uVar13 * 8 + (uVar15 | 1) * 0x2580) + dVar18;
          *pdVar2 = dVar18;
          uVar15 = uVar15 + 2;
        } while (uVar15 != 0x578);
        *pdVar2 = dVar18 / 1399.0;
        *(double *)((long)__ptr_00 + uVar16 * 8 + uVar13 * 0x2580) = dVar18 / 1399.0;
        __stream = _DAT_1423d8d48208b4c;
        bVar17 = uVar13 < 0x4af;
        uVar13 = uVar13 + 1;
      } while ((bVar17) || (uVar13 = uVar16 + 1, uVar16 = uVar13, uVar13 != 0x4b0));
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_1423d8d48208b4c);
        lVar11 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar12 = 0;
          do {
            if (((uint)(((int)lVar12 + (int)lVar11 * 0x4b0) * -0x33333333) >> 2 |
                (int)lVar12 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",
                    *(undefined8 *)((long)__ptr_00 + lVar12 * 8 + lVar11 * 0x2580));
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0x4b0);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x4b0);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      return 0;
    }
  } while( true );
}


