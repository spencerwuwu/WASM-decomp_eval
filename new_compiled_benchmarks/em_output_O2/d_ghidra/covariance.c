#include "covariance.h"



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
  long lVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  undefined auVar19 [16];
  
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  auVar10 = __LCPI0_1;
  lVar11 = 0;
  lVar12 = 0;
  do {
    dVar16 = (double)(int)lVar12;
    lVar14 = 0;
    iVar17 = 0;
    iVar18 = 1;
    do {
      auVar19 = divpd(CONCAT88((double)iVar18 * dVar16,(double)iVar17 * dVar16),auVar10);
      *(undefined (*) [16])((long)__ptr + lVar14 * 8 + lVar12 * 0x2580) = auVar19;
      auVar19 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar17 + 2) >> 0x20) * dVar16,
                               (double)(iVar17 + 2) * dVar16),auVar10);
      *(undefined (*) [16])((long)__ptr + lVar14 * 8 + lVar12 * 0x2580 + 0x10) = auVar19;
      auVar19 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar17 + 4) >> 0x20) * dVar16,
                               (double)(iVar17 + 4) * dVar16),auVar10);
      *(undefined (*) [16])((long)__ptr + lVar14 * 8 + lVar12 * 0x2580 + 0x20) = auVar19;
      lVar14 = lVar14 + 6;
      iVar17 = iVar17 + 6;
      iVar18 = iVar18 + 6;
    } while (lVar14 != 0x4b0);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x578);
  do {
    *(undefined8 *)((long)__ptr_01 + lVar11 * 8) = 0;
    dVar16 = 0.0;
    uVar13 = 0;
    do {
      dVar16 = dVar16 + *(double *)((long)__ptr + lVar11 * 8 + uVar13 * 0x2580);
      *(double *)((long)__ptr_01 + lVar11 * 8) = dVar16;
      dVar16 = dVar16 + *(double *)((long)__ptr + lVar11 * 8 + (uVar13 | 1) * 0x2580);
      *(double *)((long)__ptr_01 + lVar11 * 8) = dVar16;
      dVar16 = dVar16 + *(double *)((long)__ptr + lVar11 * 8 + (uVar13 | 2) * 0x2580);
      *(double *)((long)__ptr_01 + lVar11 * 8) = dVar16;
      dVar16 = dVar16 + *(double *)((long)__ptr + lVar11 * 8 + (uVar13 | 3) * 0x2580);
      *(double *)((long)__ptr_01 + lVar11 * 8) = dVar16;
      uVar13 = uVar13 + 4;
    } while (uVar13 != 0x578);
    *(double *)((long)__ptr_01 + lVar11 * 8) = dVar16 / 1400.0;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x4b0);
  lVar11 = 0;
  lVar12 = 0;
  do {
    pvVar1 = (void *)((long)__ptr + lVar12 * 0x2580);
    if (pvVar1 < (void *)((long)__ptr_01 + 0x2580U)) {
      lVar14 = 0;
      lVar15 = 0;
      if ((void *)((long)__ptr + lVar12 * 0x2580 + 0x2580) <= __ptr_01) goto LAB_00100270;
      do {
        dVar16 = *(double *)((long)pvVar1 + lVar15 * 8 + 8);
        *(double *)((long)pvVar1 + lVar15 * 8) =
             *(double *)((long)pvVar1 + lVar15 * 8) - *(double *)((long)__ptr_01 + lVar15 * 8);
        *(double *)((long)pvVar1 + lVar15 * 8 + 8) =
             dVar16 - *(double *)((long)__ptr_01 + lVar15 * 8 + 8);
        *(double *)((long)pvVar1 + lVar15 * 8 + 0x10) =
             *(double *)((long)pvVar1 + lVar15 * 8 + 0x10) -
             *(double *)((long)__ptr_01 + lVar15 * 8 + 0x10);
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x4b0);
    }
    else {
      lVar14 = 0;
LAB_00100270:
      do {
        pdVar2 = (double *)((long)__ptr_01 + lVar14 * 8);
        dVar16 = pdVar2[1];
        pdVar3 = (double *)((long)__ptr_01 + lVar14 * 8 + 0x10);
        dVar5 = *pdVar3;
        dVar6 = pdVar3[1];
        pdVar3 = (double *)((long)pvVar1 + lVar14 * 8);
        dVar7 = pdVar3[1];
        pdVar4 = (double *)((long)pvVar1 + lVar14 * 8 + 0x10);
        dVar8 = *pdVar4;
        dVar9 = pdVar4[1];
        pdVar4 = (double *)((long)pvVar1 + lVar14 * 8);
        *pdVar4 = *pdVar3 - *pdVar2;
        pdVar4[1] = dVar7 - dVar16;
        pdVar2 = (double *)((long)pvVar1 + lVar14 * 8 + 0x10);
        *pdVar2 = dVar8 - dVar5;
        pdVar2[1] = dVar9 - dVar6;
        uVar13 = lVar14 * 8 | 0x20;
        dVar16 = ((double *)((long)__ptr_01 + uVar13))[1];
        pdVar2 = (double *)((long)__ptr_01 + uVar13 + 0x10);
        dVar5 = *pdVar2;
        dVar6 = pdVar2[1];
        dVar7 = ((double *)(uVar13 + (long)pvVar1))[1];
        pdVar2 = (double *)(uVar13 + 0x10 + (long)pvVar1);
        dVar8 = *pdVar2;
        dVar9 = pdVar2[1];
        *(double *)(uVar13 + (long)pvVar1) =
             *(double *)(uVar13 + (long)pvVar1) - *(double *)((long)__ptr_01 + uVar13);
        ((double *)(uVar13 + (long)pvVar1))[1] = dVar7 - dVar16;
        pdVar2 = (double *)(uVar13 + 0x10 + (long)pvVar1);
        *pdVar2 = dVar8 - dVar5;
        pdVar2[1] = dVar9 - dVar6;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0x4b0);
    }
    lVar12 = lVar12 + 1;
    lVar14 = lVar11;
    if (lVar12 == 0x578) {
      do {
        pdVar2 = (double *)((long)__ptr_00 + lVar11 * 8 + lVar14 * 0x2580);
        *(undefined8 *)((long)__ptr_00 + lVar11 * 8 + lVar14 * 0x2580) = 0;
        dVar16 = 0.0;
        uVar13 = 0;
        do {
          dVar16 = *(double *)((long)__ptr + lVar14 * 8 + uVar13 * 0x2580) *
                   *(double *)((long)__ptr + lVar11 * 8 + uVar13 * 0x2580) + dVar16;
          *pdVar2 = dVar16;
          dVar16 = *(double *)((long)__ptr + lVar14 * 8 + (uVar13 | 1) * 0x2580) *
                   *(double *)((long)__ptr + lVar11 * 8 + (uVar13 | 1) * 0x2580) + dVar16;
          *pdVar2 = dVar16;
          uVar13 = uVar13 + 2;
        } while (uVar13 != 0x578);
        *pdVar2 = dVar16 / 1399.0;
        *(double *)((long)__ptr_00 + lVar14 * 8 + lVar11 * 0x2580) = dVar16 / 1399.0;
        __stream = _DAT_1363d8d48208b4c;
        lVar11 = lVar11 + 1;
      } while ((lVar11 != 0x4b0) || (lVar11 = lVar14 + 1, lVar14 = lVar11, lVar11 != 0x4b0));
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_1363d8d48208b4c);
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


