#include "fdtd-2d.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  void *pvVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined auVar25 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar26;
  ulong uVar27;
  long lVar28;
  void *pvVar29;
  ulong uVar30;
  void *pvVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  void *pvVar37;
  int iVar38;
  int iVar39;
  double dVar40;
  int iVar41;
  undefined auVar42 [16];
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  __ptr_02 = (void *)polybench_alloc_data(500,8);
  iVar38 = 0;
  iVar39 = 1;
  lVar26 = 0;
  uVar27 = 0;
  while( true ) {
    pdVar1 = (double *)((long)__ptr_02 + uVar27 * 8);
    *pdVar1 = (double)iVar38;
    pdVar1[1] = (double)iVar39;
    pdVar1 = (double *)((long)__ptr_02 + uVar27 * 8 + 0x10);
    *pdVar1 = (double)(iVar38 + 2);
    pdVar1[1] = (double)(int)((ulong)(double)(iVar38 + 2) >> 0x20);
    auVar25 = __LCPI0_7;
    auVar10 = __LCPI0_6;
    uVar30 = uVar27 | 4;
    if (uVar30 == 500) break;
    pdVar1 = (double *)((long)__ptr_02 + uVar30 * 8);
    *pdVar1 = (double)(iVar38 + 4);
    pdVar1[1] = (double)(int)((ulong)(double)(iVar38 + 4) >> 0x20);
    pdVar1 = (double *)((long)__ptr_02 + uVar30 * 8 + 0x10);
    *pdVar1 = (double)(iVar38 + 6);
    pdVar1[1] = (double)(int)((ulong)(double)(iVar38 + 6) >> 0x20);
    uVar27 = uVar27 + 8;
    iVar38 = iVar38 + 8;
    iVar39 = iVar39 + 8;
  }
  do {
    dVar40 = (double)(int)lVar26;
    lVar28 = lVar26 * 0x2580;
    pvVar2 = (void *)(lVar28 + (long)__ptr);
    pvVar29 = (void *)(lVar28 + (long)__ptr_00);
    if (((ulong)((long)pvVar29 - (long)pvVar2) < 0x10) ||
       ((ulong)((long)__ptr_01 + (lVar28 - (long)pvVar2)) < 0x10)) {
      lVar32 = 0;
LAB_00100240:
      do {
        lVar36 = lVar32 + 1;
        *(double *)((long)pvVar2 + lVar32 * 8) = ((double)(int)lVar36 * dVar40) / 1000.0;
        *(double *)((long)pvVar29 + lVar32 * 8) = ((double)((int)lVar32 + 2) * dVar40) / 1200.0;
        *(double *)((long)__ptr_01 + lVar32 * 8 + lVar28) =
             ((double)((int)lVar32 + 3) * dVar40) / 1000.0;
        lVar32 = lVar36;
      } while (lVar36 != 0x4b0);
    }
    else {
      lVar32 = 0;
      if ((ulong)((long)__ptr_01 + (lVar28 - (long)pvVar29)) < 0x10) goto LAB_00100240;
      lVar32 = 0;
      iVar38 = 0;
      iVar39 = 1;
      iVar41 = 0;
      do {
        auVar42 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar41 + 1) >> 0x20) * dVar40,
                                 (double)(iVar41 + 1) * dVar40),auVar10);
        *(undefined (*) [16])((long)pvVar2 + lVar32 * 8) = auVar42;
        iVar39 = iVar39 + 2;
        auVar42 = divpd(CONCAT88((double)iVar39 * dVar40,(double)(iVar38 + 2) * dVar40),auVar25);
        *(undefined (*) [16])((long)pvVar29 + lVar32 * 8) = auVar42;
        auVar42 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar38 + 3) >> 0x20) * dVar40,
                                 (double)(iVar38 + 3) * dVar40),auVar10);
        *(undefined (*) [16])((long)__ptr_01 + lVar32 * 8 + lVar28) = auVar42;
        lVar32 = lVar32 + 2;
        iVar41 = iVar41 + 2;
        iVar38 = iVar38 + 2;
      } while (lVar32 != 0x4b0);
    }
    lVar26 = lVar26 + 1;
    if (lVar26 == 1000) {
      lVar26 = 0;
      do {
        if ((__ptr_00 < (void *)((long)__ptr_02 + lVar26 * 8 + 8)) &&
           ((void *)((long)__ptr_02 + lVar26 * 8) < (void *)((long)__ptr_00 + 0x2580U))) {
          lVar28 = 0;
          do {
            *(undefined8 *)((long)__ptr_00 + lVar28 * 8) =
                 *(undefined8 *)((long)__ptr_02 + lVar26 * 8);
            *(undefined8 *)((long)__ptr_00 + (lVar28 * 8 | 8U)) =
                 *(undefined8 *)((long)__ptr_02 + lVar26 * 8);
            *(undefined8 *)((long)__ptr_00 + lVar28 * 8 + 0x10) =
                 *(undefined8 *)((long)__ptr_02 + lVar26 * 8);
            *(undefined8 *)((long)__ptr_00 + lVar28 * 8 + 0x18) =
                 *(undefined8 *)((long)__ptr_02 + lVar26 * 8);
            *(undefined8 *)((long)__ptr_00 + lVar28 * 8 + 0x20) =
                 *(undefined8 *)((long)__ptr_02 + lVar26 * 8);
            *(undefined8 *)((long)__ptr_00 + lVar28 * 8 + 0x28) =
                 *(undefined8 *)((long)__ptr_02 + lVar26 * 8);
            lVar28 = lVar28 + 6;
          } while (lVar28 != 0x4b0);
        }
        else {
          uVar9 = *(undefined8 *)((long)__ptr_02 + lVar26 * 8);
          lVar28 = 0;
          do {
            uVar27 = lVar28 * 8;
            puVar3 = (undefined8 *)((long)__ptr_00 + lVar28 * 8);
            *puVar3 = uVar9;
            puVar3[1] = uVar9;
            puVar3 = (undefined8 *)((long)__ptr_00 + lVar28 * 8 + 0x10);
            *puVar3 = uVar9;
            puVar3[1] = uVar9;
            puVar3 = (undefined8 *)((long)__ptr_00 + (uVar27 | 0x20));
            *puVar3 = uVar9;
            puVar3[1] = uVar9;
            puVar3 = (undefined8 *)((long)__ptr_00 + (uVar27 | 0x20) + 0x10);
            *puVar3 = uVar9;
            puVar3[1] = uVar9;
            puVar3 = (undefined8 *)((long)__ptr_00 + (uVar27 | 0x40));
            *puVar3 = uVar9;
            puVar3[1] = uVar9;
            puVar3 = (undefined8 *)((long)__ptr_00 + (uVar27 | 0x40) + 0x10);
            *puVar3 = uVar9;
            puVar3[1] = uVar9;
            puVar3 = (undefined8 *)((long)__ptr_00 + (uVar27 | 0x60));
            *puVar3 = uVar9;
            puVar3[1] = uVar9;
            puVar3 = (undefined8 *)((long)__ptr_00 + (uVar27 | 0x60) + 0x10);
            *puVar3 = uVar9;
            puVar3[1] = uVar9;
            lVar28 = lVar28 + 0x10;
          } while (lVar28 != 0x4b0);
        }
        lVar28 = 1;
        lVar32 = 0;
        do {
          lVar36 = lVar28 + -1;
          lVar33 = lVar32 * 0x2580;
          if ((ulong)((long)__ptr_00 + lVar33 + 0x2580) < (ulong)((long)__ptr_01 + lVar33 + 0x4b00))
          {
            lVar34 = 0;
            lVar35 = 0;
            if ((void *)((long)__ptr_00 + lVar33 + 0x4b00) <= (void *)((long)__ptr_01 + lVar33))
            goto LAB_001004e0;
            do {
              lVar33 = lVar28 * 0x2580;
              *(double *)((long)__ptr_00 + lVar35 * 8 + lVar33) =
                   (*(double *)((long)__ptr_01 + lVar35 * 8 + lVar33) -
                   *(double *)((long)__ptr_01 + lVar35 * 8 + lVar36 * 0x2580)) * -0.5 +
                   *(double *)((long)__ptr_00 + lVar35 * 8 + lVar33);
              uVar27 = lVar35 * 8 | 8;
              *(double *)((long)__ptr_00 + uVar27 + lVar33) =
                   (*(double *)((long)__ptr_01 + uVar27 + lVar33) -
                   *(double *)((long)__ptr_01 + uVar27 + lVar36 * 0x2580)) * -0.5 +
                   *(double *)((long)__ptr_00 + uVar27 + lVar33);
              lVar35 = lVar35 + 2;
            } while (lVar35 != 0x4b0);
          }
          else {
            lVar34 = 0;
LAB_001004e0:
            do {
              lVar33 = lVar28 * 0x2580;
              pdVar1 = (double *)((long)__ptr_00 + lVar34 * 8 + lVar33);
              auVar10 = *(undefined (*) [16])((long)__ptr_00 + lVar34 * 8 + lVar33 + 0x10);
              pdVar5 = (double *)((long)__ptr_01 + lVar34 * 8 + lVar33);
              pdVar4 = (double *)((long)__ptr_01 + lVar34 * 8 + lVar33 + 0x10);
              dVar40 = *pdVar4;
              dVar11 = pdVar4[1];
              pdVar4 = (double *)((long)__ptr_01 + lVar34 * 8 + lVar36 * 0x2580);
              pdVar6 = (double *)((long)__ptr_01 + lVar34 * 8 + lVar36 * 0x2580 + 0x10);
              dVar12 = *pdVar6;
              dVar13 = pdVar6[1];
              *(undefined (*) [16])((long)__ptr_00 + lVar34 * 8 + lVar33) =
                   CONCAT88((pdVar5[1] - pdVar4[1]) * -0.5 + pdVar1[1],
                            (*pdVar5 - *pdVar4) * -0.5 + *pdVar1);
              *(undefined (*) [16])((long)__ptr_00 + lVar34 * 8 + lVar33 + 0x10) =
                   CONCAT88((dVar11 - dVar13) * -0.5 + SUB168(auVar10 >> 0x40,0),
                            (dVar40 - dVar12) * -0.5 + SUB168(auVar10,0));
              lVar34 = lVar34 + 4;
            } while (lVar34 != 0x4b0);
          }
          lVar28 = lVar28 + 1;
          lVar32 = lVar32 + 1;
        } while (lVar28 != 1000);
        lVar28 = 0;
        do {
          lVar32 = lVar28 * 0x2580;
          pvVar2 = (void *)((long)__ptr_01 + lVar32);
          if ((ulong)((long)__ptr + lVar32 + 8) < (ulong)((long)__ptr_01 + lVar32 + 0x2580)) {
            lVar33 = 1;
            lVar36 = 0;
            if ((void *)((long)__ptr + lVar32 + 0x2580) <= pvVar2) goto LAB_001005d0;
          }
          else {
            lVar36 = 0;
LAB_001005d0:
            do {
              uVar27 = lVar36 * 8 | 8;
              pdVar1 = (double *)((long)__ptr + uVar27 + lVar32);
              pdVar4 = (double *)((long)__ptr + uVar27 + 0x10 + lVar32);
              dVar40 = pdVar4[1];
              pdVar5 = (double *)(uVar27 + 0x10 + (long)pvVar2);
              dVar11 = *pdVar5;
              dVar12 = pdVar5[1];
              pdVar5 = (double *)((long)pvVar2 + lVar36 * 8);
              pdVar6 = (double *)((long)pvVar2 + lVar36 * 8 + 0x10);
              dVar13 = *pdVar6;
              dVar14 = pdVar6[1];
              *(undefined (*) [16])((long)__ptr + uVar27 + lVar32) =
                   CONCAT88((((double *)(uVar27 + (long)pvVar2))[1] - pdVar5[1]) * -0.5 + pdVar1[1],
                            (*(double *)(uVar27 + (long)pvVar2) - *pdVar5) * -0.5 + *pdVar1);
              *(undefined (*) [16])((long)__ptr + uVar27 + 0x10 + lVar32) =
                   CONCAT88((dVar12 - dVar14) * -0.5 + dVar40,(dVar11 - dVar13) * -0.5 + *pdVar4);
              lVar36 = lVar36 + 4;
            } while (lVar36 != 0x4ac);
            lVar33 = 0x4ad;
          }
          pdVar1 = (double *)((long)pvVar2 + lVar33 * 8 + -8);
          *(double *)((long)__ptr + lVar33 * 8 + lVar32) =
               (pdVar1[1] - *pdVar1) * -0.5 + *(double *)((long)__ptr + lVar33 * 8 + lVar32);
          lVar33 = lVar33 + 1;
          do {
            pdVar1 = (double *)((long)pvVar2 + lVar33 * 8 + -8);
            *(double *)((long)__ptr + lVar33 * 8 + lVar32) =
                 (pdVar1[1] - *pdVar1) * -0.5 + *(double *)((long)__ptr + lVar33 * 8 + lVar32);
            pdVar1 = (double *)((long)pvVar2 + lVar33 * 8);
            *(double *)((long)__ptr + lVar33 * 8 + lVar32 + 8) =
                 (pdVar1[1] - *pdVar1) * -0.5 + *(double *)((long)__ptr + lVar33 * 8 + lVar32 + 8);
            lVar33 = lVar33 + 2;
          } while (lVar33 != 0x4b0);
          lVar28 = lVar28 + 1;
        } while (lVar28 != 1000);
        lVar28 = 0;
        do {
          lVar32 = lVar28 * 0x2580;
          lVar28 = lVar28 + 1;
          pvVar2 = (void *)((long)__ptr_00 + lVar32);
          pvVar29 = (void *)((long)__ptr + lVar32);
          pvVar37 = (void *)((long)__ptr_01 + lVar32 + 0x2578);
          pvVar31 = (void *)(lVar32 + (long)__ptr_01);
          if (pvVar31 < (void *)((long)__ptr + lVar32 + 0x2580) && pvVar29 < pvVar37) {
            lVar36 = 0;
          }
          else {
            lVar33 = 0;
            lVar36 = 0;
            if ((void *)((long)__ptr_00 + lVar32 + 0x4af8) <= pvVar31 || pvVar37 <= pvVar2) {
              do {
                pdVar1 = (double *)((long)pvVar31 + lVar33 * 8);
                dVar40 = pdVar1[1];
                pdVar5 = (double *)((long)pvVar31 + lVar33 * 8 + 0x10);
                dVar11 = *pdVar5;
                dVar12 = pdVar5[1];
                uVar27 = lVar33 * 8 | 8;
                pdVar5 = (double *)(uVar27 + (long)pvVar29);
                dVar13 = pdVar5[1];
                pdVar4 = (double *)(uVar27 + 0x10 + (long)pvVar29);
                dVar14 = *pdVar4;
                dVar15 = pdVar4[1];
                pdVar4 = (double *)((long)pvVar29 + lVar33 * 8);
                dVar16 = pdVar4[1];
                pdVar6 = (double *)((long)pvVar29 + lVar33 * 8 + 0x10);
                dVar17 = *pdVar6;
                dVar18 = pdVar6[1];
                pdVar6 = (double *)((long)__ptr_00 + lVar33 * 8 + lVar28 * 0x2580);
                dVar19 = pdVar6[1];
                pdVar7 = (double *)((long)__ptr_00 + lVar33 * 8 + lVar28 * 0x2580 + 0x10);
                dVar20 = *pdVar7;
                dVar21 = pdVar7[1];
                pdVar7 = (double *)((long)pvVar2 + lVar33 * 8);
                dVar22 = pdVar7[1];
                pdVar8 = (double *)((long)pvVar2 + lVar33 * 8 + 0x10);
                dVar23 = *pdVar8;
                dVar24 = pdVar8[1];
                pdVar8 = (double *)((long)pvVar31 + lVar33 * 8);
                *pdVar8 = ((*pdVar6 + (*pdVar5 - *pdVar4)) - *pdVar7) * -0.7 + *pdVar1;
                pdVar8[1] = ((dVar19 + (dVar13 - dVar16)) - dVar22) * -0.7 + dVar40;
                *(undefined (*) [16])((long)pvVar31 + lVar33 * 8 + 0x10) =
                     CONCAT88(((dVar21 + (dVar15 - dVar18)) - dVar24) * -0.7 + dVar12,
                              ((dVar20 + (dVar14 - dVar17)) - dVar23) * -0.7 + dVar11);
                lVar33 = lVar33 + 4;
              } while (lVar33 != 0x4ac);
              lVar36 = 0x4ac;
            }
          }
          do {
            pdVar1 = (double *)((long)pvVar29 + lVar36 * 8);
            *(double *)((long)pvVar31 + lVar36 * 8) =
                 (((pdVar1[1] - *pdVar1) +
                  *(double *)((long)__ptr_00 + lVar36 * 8 + lVar28 * 0x2580)) -
                 *(double *)((long)pvVar2 + lVar36 * 8)) * -0.7 +
                 *(double *)((long)pvVar31 + lVar36 * 8);
            __stream = _DAT_3253d8d48288b4c;
            lVar36 = lVar36 + 1;
          } while (lVar36 != 0x4af);
        } while (lVar28 != 999);
        lVar26 = lVar26 + 1;
        if (lVar26 == 500) {
          if ((0x2a < param_1) && (**param_2 == '\0')) {
            fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_3253d8d48288b4c);
            lVar26 = 0;
            fprintf(__stream,"begin dump: %s",&_L_str_3);
            do {
              lVar28 = 0;
              do {
                if (((uint)(((int)lVar26 * 1000 + (int)lVar28) * -0x33333333) >> 2 |
                    (int)lVar28 * 0x40000000) < 0xccccccd) {
                  fputc(10,__stream);
                }
                fprintf(__stream,"%0.2lf ",
                        *(undefined8 *)((long)__ptr + lVar28 * 8 + lVar26 * 0x2580));
                lVar28 = lVar28 + 1;
              } while (lVar28 != 0x4b0);
              lVar26 = lVar26 + 1;
            } while (lVar26 != 1000);
            lVar26 = 0;
            fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
            fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
            fprintf(__stream,"begin dump: %s",&_L_str_8);
            do {
              lVar28 = 0;
              do {
                if (((uint)(((int)lVar26 * 1000 + (int)lVar28) * -0x33333333) >> 2 |
                    (int)lVar28 * 0x40000000) < 0xccccccd) {
                  fputc(10,__stream);
                }
                fprintf(__stream,"%0.2lf ",
                        *(undefined8 *)((long)__ptr_00 + lVar28 * 8 + lVar26 * 0x2580));
                lVar28 = lVar28 + 1;
              } while (lVar28 != 0x4b0);
              lVar26 = lVar26 + 1;
            } while (lVar26 != 1000);
            lVar26 = 0;
            fprintf(__stream,"\nend   dump: %s\n",&_L_str_8);
            fprintf(__stream,"begin dump: %s",&_L_str_9);
            do {
              lVar28 = 0;
              do {
                if (((uint)(((int)lVar26 * 1000 + (int)lVar28) * -0x33333333) >> 2 |
                    (int)lVar28 * 0x40000000) < 0xccccccd) {
                  fputc(10,__stream);
                }
                fprintf(__stream,"%0.2lf ",
                        *(undefined8 *)((long)__ptr_01 + lVar28 * 8 + lVar26 * 0x2580));
                lVar28 = lVar28 + 1;
              } while (lVar28 != 0x4b0);
              lVar26 = lVar26 + 1;
            } while (lVar26 != 1000);
            fprintf(__stream,"\nend   dump: %s\n",&_L_str_9);
          }
          free(__ptr);
          free(__ptr_00);
          free(__ptr_01);
          free(__ptr_02);
          return 0;
        }
      } while( true );
    }
  } while( true );
}


