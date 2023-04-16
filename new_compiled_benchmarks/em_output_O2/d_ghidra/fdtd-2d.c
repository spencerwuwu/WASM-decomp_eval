#include "fdtd-2d.h"



void kernel_fdtd_2d(uint param_1,uint param_2,uint param_3,long param_4,ulong param_5,long param_6,
                   long param_7)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  
  if (0 < (int)param_1) {
    uVar23 = (ulong)param_3;
    uVar26 = (ulong)(param_3 - 1);
    uVar24 = (ulong)(param_3 & 0xfffffffc);
    uVar30 = uVar23 - 1 & 0xfffffffffffffffc;
    uVar27 = (ulong)(param_3 - 1 & 0xfffffffc);
    uVar28 = 0;
    do {
      if (0 < (int)param_3) {
        if ((param_3 < 8) ||
           ((param_5 < param_7 + uVar28 * 8 + 8 && (param_7 + uVar28 * 8 < param_5 + uVar23 * 8))))
        {
          uVar20 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(param_7 + uVar28 * 8);
          uVar20 = 0;
          do {
            *(undefined (*) [16])(param_5 + uVar20 * 8) = CONCAT88(uVar10,uVar10);
            *(undefined (*) [16])(param_5 + 0x10 + uVar20 * 8) = CONCAT88(uVar10,uVar10);
            uVar20 = uVar20 + 4;
          } while (uVar20 != uVar24);
          uVar20 = uVar24;
          if (uVar24 == uVar23) goto LAB_00100230;
        }
        uVar25 = ~uVar20;
        if ((ulong)(param_3 & 3) != 0) {
          uVar31 = 0;
          do {
            *(undefined8 *)(param_5 + uVar20 * 8) = *(undefined8 *)(param_7 + uVar28 * 8);
            uVar20 = uVar20 + 1;
            uVar31 = uVar31 + 1;
          } while (uVar31 != (param_3 & 3));
        }
        if (2 < uVar25 + uVar23) {
          do {
            *(undefined8 *)(param_5 + uVar20 * 8) = *(undefined8 *)(param_7 + uVar28 * 8);
            *(undefined8 *)(param_5 + 8 + uVar20 * 8) = *(undefined8 *)(param_7 + uVar28 * 8);
            *(undefined8 *)(param_5 + 0x10 + uVar20 * 8) = *(undefined8 *)(param_7 + uVar28 * 8);
            *(undefined8 *)(param_5 + 0x18 + uVar20 * 8) = *(undefined8 *)(param_7 + uVar28 * 8);
            uVar20 = uVar20 + 4;
          } while (uVar20 != uVar23);
        }
      }
LAB_00100230:
      if (1 < (int)param_2) {
        uVar20 = 1;
        lVar35 = 0;
        do {
          if (0 < (int)param_3) {
            lVar1 = uVar20 - 1;
            if (param_3 < 4) {
              uVar31 = 0;
            }
            else {
              lVar21 = lVar35 * 0x2580;
              lVar2 = uVar23 * 8 + 0x2580 + lVar21;
              if (param_5 + lVar21 + 0x2580 < (ulong)(param_6 + lVar2)) {
                uVar25 = 0;
                uVar31 = 0;
                if ((ulong)(lVar21 + param_6) < lVar2 + param_5) goto LAB_00100350;
              }
              else {
                uVar25 = 0;
              }
              do {
                lVar2 = param_5 + uVar20 * 0x2580;
                pdVar4 = (double *)(lVar2 + uVar25 * 8);
                pdVar7 = (double *)(lVar2 + 0x10 + uVar25 * 8);
                dVar11 = pdVar7[1];
                lVar21 = uVar20 * 0x2580 + param_6;
                pdVar3 = (double *)(lVar21 + uVar25 * 8);
                pdVar5 = (double *)(lVar21 + 0x10 + uVar25 * 8);
                dVar12 = *pdVar5;
                dVar13 = pdVar5[1];
                lVar21 = lVar1 * 0x2580 + param_6;
                pdVar5 = (double *)(lVar21 + uVar25 * 8);
                pdVar8 = (double *)(lVar21 + 0x10 + uVar25 * 8);
                dVar14 = *pdVar8;
                dVar15 = pdVar8[1];
                *(undefined (*) [16])(lVar2 + uVar25 * 8) =
                     CONCAT88((pdVar3[1] - pdVar5[1]) * -0.5 + pdVar4[1],
                              (*pdVar3 - *pdVar5) * -0.5 + *pdVar4);
                *(undefined (*) [16])(lVar2 + 0x10 + uVar25 * 8) =
                     CONCAT88((dVar13 - dVar15) * -0.5 + dVar11,(dVar12 - dVar14) * -0.5 + *pdVar7);
                uVar25 = uVar25 + 4;
              } while (uVar25 != uVar24);
              uVar31 = uVar24;
              if (uVar24 == uVar23) goto LAB_00100250;
            }
LAB_00100350:
            uVar25 = uVar31;
            if ((param_3 & 1) != 0) {
              lVar2 = param_5 + uVar20 * 0x2580;
              *(double *)(lVar2 + uVar31 * 8) =
                   (*(double *)(uVar20 * 0x2580 + param_6 + uVar31 * 8) -
                   *(double *)(lVar1 * 0x2580 + param_6 + uVar31 * 8)) * -0.5 +
                   *(double *)(lVar2 + uVar31 * 8);
              uVar25 = uVar31 | 1;
            }
            if (~uVar31 != -uVar23) {
              do {
                lVar2 = param_5 + uVar20 * 0x2580;
                lVar21 = uVar20 * 0x2580 + param_6;
                lVar32 = lVar1 * 0x2580 + param_6;
                *(double *)(lVar2 + uVar25 * 8) =
                     (*(double *)(lVar21 + uVar25 * 8) - *(double *)(lVar32 + uVar25 * 8)) * -0.5 +
                     *(double *)(lVar2 + uVar25 * 8);
                *(double *)(lVar2 + 8 + uVar25 * 8) =
                     (*(double *)(lVar21 + 8 + uVar25 * 8) - *(double *)(lVar32 + 8 + uVar25 * 8)) *
                     -0.5 + *(double *)(lVar2 + 8 + uVar25 * 8);
                uVar25 = uVar25 + 2;
              } while (uVar25 != uVar23);
            }
          }
LAB_00100250:
          uVar20 = uVar20 + 1;
          lVar35 = lVar35 + 1;
        } while (uVar20 != param_2);
      }
      if (0 < (int)param_2) {
        uVar20 = 0;
        do {
          if (1 < (int)param_3) {
            lVar35 = uVar20 * 0x2580;
            uVar25 = param_6 + lVar35;
            uVar31 = 1;
            if (4 < param_3) {
              lVar1 = uVar23 * 8 + lVar35;
              if (param_4 + lVar35 + 8U < (ulong)(param_6 + lVar1)) {
                uVar33 = 0;
                if (uVar25 < (ulong)(lVar1 + param_4)) goto LAB_00100520;
              }
              else {
                uVar33 = 0;
              }
              do {
                lVar1 = param_4 + lVar35;
                uVar31 = uVar33 * 8 | 8;
                pdVar3 = (double *)(uVar31 + 0x10 + lVar1);
                dVar11 = pdVar3[1];
                pdVar4 = (double *)(uVar31 + 0x10 + uVar25);
                dVar12 = *pdVar4;
                dVar13 = pdVar4[1];
                pdVar4 = (double *)(uVar25 + uVar33 * 8);
                pdVar5 = (double *)(uVar25 + 0x10 + uVar33 * 8);
                dVar14 = *pdVar5;
                dVar15 = pdVar5[1];
                *(undefined (*) [16])(uVar31 + lVar1) =
                     CONCAT88((((double *)(uVar31 + uVar25))[1] - pdVar4[1]) * -0.5 +
                              ((double *)(uVar31 + lVar1))[1],
                              (*(double *)(uVar31 + uVar25) - *pdVar4) * -0.5 +
                              *(double *)(uVar31 + lVar1));
                *(undefined (*) [16])(uVar31 + 0x10 + lVar1) =
                     CONCAT88((dVar13 - dVar15) * -0.5 + dVar11,(dVar12 - dVar14) * -0.5 + *pdVar3);
                uVar33 = uVar33 + 4;
              } while (uVar33 != uVar30);
              uVar31 = uVar30 + 1;
              if (uVar23 - 1 == uVar30) goto LAB_00100430;
            }
LAB_00100520:
            uVar33 = uVar31;
            if ((param_3 & 1) == 0) {
              pdVar4 = (double *)((uVar25 - 8) + uVar31 * 8);
              *(double *)(param_4 + lVar35 + uVar31 * 8) =
                   (pdVar4[1] - *pdVar4) * -0.5 + *(double *)(param_4 + lVar35 + uVar31 * 8);
              uVar33 = uVar31 + 1;
            }
            if (~uVar31 != -uVar23) {
              do {
                lVar1 = param_4 + lVar35;
                pdVar4 = (double *)((uVar25 - 8) + uVar33 * 8);
                *(double *)(lVar1 + uVar33 * 8) =
                     (pdVar4[1] - *pdVar4) * -0.5 + *(double *)(lVar1 + uVar33 * 8);
                pdVar4 = (double *)(uVar25 + uVar33 * 8);
                *(double *)(lVar1 + 8 + uVar33 * 8) =
                     (pdVar4[1] - *pdVar4) * -0.5 + *(double *)(lVar1 + 8 + uVar33 * 8);
                uVar33 = uVar33 + 2;
              } while (uVar33 != uVar23);
            }
          }
LAB_00100430:
          uVar20 = uVar20 + 1;
        } while (uVar20 != param_2);
        if (1 < (int)param_2) {
          uVar20 = 0;
          do {
            uVar25 = uVar20 + 1;
            if (1 < (int)param_3) {
              lVar35 = uVar20 * 0x2580;
              uVar20 = param_6 + lVar35;
              uVar31 = param_4 + lVar35;
              uVar33 = param_5 + lVar35;
              if (param_3 < 5) {
                uVar29 = 0;
              }
              else {
                uVar22 = uVar26 * 8 + param_6 + lVar35;
                if (uVar20 < uVar26 * 8 + 8 + param_4 + lVar35 && uVar31 < uVar22) {
                  uVar29 = 0;
                }
                else {
                  uVar34 = 0;
                  uVar29 = 0;
                  if (lVar35 + uVar26 * 8 + 0x2580 + param_5 <= uVar20 || uVar22 <= uVar33) {
                    do {
                      pdVar4 = (double *)(uVar20 + uVar34 * 8);
                      pdVar6 = (double *)(uVar20 + 0x10 + uVar34 * 8);
                      dVar11 = pdVar6[1];
                      uVar22 = uVar34 * 8 | 8;
                      pdVar3 = (double *)(uVar22 + uVar31);
                      pdVar5 = (double *)(uVar22 + 0x10 + uVar31);
                      dVar12 = *pdVar5;
                      dVar13 = pdVar5[1];
                      pdVar5 = (double *)(uVar31 + uVar34 * 8);
                      pdVar7 = (double *)(uVar31 + 0x10 + uVar34 * 8);
                      dVar14 = *pdVar7;
                      dVar15 = pdVar7[1];
                      lVar35 = uVar25 * 0x2580 + param_5;
                      pdVar7 = (double *)(lVar35 + uVar34 * 8);
                      pdVar8 = (double *)(lVar35 + 0x10 + uVar34 * 8);
                      dVar16 = *pdVar8;
                      dVar17 = pdVar8[1];
                      pdVar8 = (double *)(uVar33 + uVar34 * 8);
                      pdVar9 = (double *)(uVar33 + 0x10 + uVar34 * 8);
                      dVar18 = *pdVar9;
                      dVar19 = pdVar9[1];
                      *(undefined (*) [16])(uVar20 + uVar34 * 8) =
                           CONCAT88(((pdVar7[1] + (pdVar3[1] - pdVar5[1])) - pdVar8[1]) * -0.7 +
                                    pdVar4[1],
                                    ((*pdVar7 + (*pdVar3 - *pdVar5)) - *pdVar8) * -0.7 + *pdVar4);
                      *(undefined (*) [16])(uVar20 + 0x10 + uVar34 * 8) =
                           CONCAT88(((dVar17 + (dVar13 - dVar15)) - dVar19) * -0.7 + dVar11,
                                    ((dVar16 + (dVar12 - dVar14)) - dVar18) * -0.7 + *pdVar6);
                      uVar34 = uVar34 + 4;
                      uVar29 = uVar27;
                      if (uVar34 == uVar27) goto LAB_0010075c;
                    } while( true );
                  }
                }
              }
              do {
                pdVar4 = (double *)(uVar31 + uVar29 * 8);
                *(double *)(uVar20 + uVar29 * 8) =
                     (((pdVar4[1] - *pdVar4) + *(double *)(uVar25 * 0x2580 + param_5 + uVar29 * 8))
                     - *(double *)(uVar33 + uVar29 * 8)) * -0.7 + *(double *)(uVar20 + uVar29 * 8);
                uVar29 = uVar29 + 1;
LAB_0010075c:
              } while (uVar29 != uVar26);
            }
            uVar20 = uVar25;
          } while (uVar25 != param_2 - 1);
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  double *pdVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  int iVar17;
  int iVar19;
  double dVar20;
  undefined auVar21 [16];
  undefined auVar18 [16];
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  __ptr_02 = (void *)polybench_alloc_data(500,8);
  auVar4 = __LCPI1_1;
  iVar14 = 0;
  iVar15 = 1;
  lVar7 = 0;
  uVar8 = 0;
  while( true ) {
    dVar16 = (double)(iVar14 + SUB164(auVar4,0));
    pdVar2 = (double *)((long)__ptr_02 + uVar8 * 8);
    *pdVar2 = (double)iVar14;
    pdVar2[1] = (double)iVar15;
    pdVar2 = (double *)((long)__ptr_02 + uVar8 * 8 + 0x10);
    *pdVar2 = dVar16;
    pdVar2[1] = (double)(int)((ulong)dVar16 >> 0x20);
    auVar6 = __LCPI1_7;
    auVar5 = __LCPI1_6;
    auVar3 = __LCPI1_0;
    uVar11 = uVar8 | 4;
    if (uVar11 == 500) break;
    pdVar2 = (double *)((long)__ptr_02 + uVar11 * 8);
    *pdVar2 = (double)(iVar14 + 4);
    pdVar2[1] = (double)(int)((ulong)(double)(iVar14 + 4) >> 0x20);
    pdVar2 = (double *)((long)__ptr_02 + uVar11 * 8 + 0x10);
    *pdVar2 = (double)(iVar14 + 6);
    pdVar2[1] = (double)(int)((ulong)(double)(iVar14 + 6) >> 0x20);
    uVar8 = uVar8 + 8;
    iVar14 = iVar14 + 8;
    iVar15 = iVar15 + 8;
  }
  do {
    dVar16 = (double)(int)lVar7;
    lVar9 = lVar7 * 0x2580;
    pvVar12 = (void *)((long)__ptr + lVar9);
    pvVar10 = (void *)(lVar9 + (long)__ptr_00);
    if (((ulong)((long)pvVar10 - (long)pvVar12) < 0x10) ||
       ((ulong)((long)__ptr_01 + (lVar9 - (long)pvVar12)) < 0x10)) {
      lVar13 = 0;
LAB_001009c0:
      do {
        lVar1 = lVar13 + 1;
        *(double *)((long)pvVar12 + lVar13 * 8) = ((double)(int)lVar1 * dVar16) / 1000.0;
        *(double *)((long)pvVar10 + lVar13 * 8) = ((double)((int)lVar13 + 2) * dVar16) / 1200.0;
        *(double *)((long)__ptr_01 + lVar13 * 8 + lVar9) =
             ((double)((int)lVar13 + 3) * dVar16) / 1000.0;
        lVar13 = lVar1;
      } while (lVar1 != 0x4b0);
    }
    else {
      lVar13 = 0;
      if ((ulong)((long)__ptr_01 + (lVar9 - (long)pvVar10)) < 0x10) goto LAB_001009c0;
      lVar13 = 0;
      auVar18 = auVar3;
      iVar14 = 0;
      do {
        auVar21 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar14 + 1) >> 0x20) * dVar16,
                                 (double)(iVar14 + 1) * dVar16),auVar5);
        *(undefined (*) [16])((long)pvVar12 + lVar13 * 8) = auVar21;
        iVar17 = SUB164(auVar18,0);
        iVar15 = iVar17 + SUB164(auVar4,0);
        iVar19 = SUB164(auVar18 >> 0x20,0) + SUB164(auVar4 >> 0x20,0);
        auVar18 = CONCAT412(SUB164(auVar18 >> 0x60,0) + SUB164(auVar4 >> 0x60,0),
                            CONCAT48(SUB164(auVar18 >> 0x40,0) + SUB164(auVar4 >> 0x40,0),
                                     CONCAT44(iVar19,iVar15)));
        auVar21 = divpd(CONCAT88((double)iVar19 * dVar16,(double)iVar15 * dVar16),auVar6);
        dVar20 = (double)(iVar17 + 3);
        *(undefined (*) [16])((long)pvVar10 + lVar13 * 8) = auVar21;
        auVar21 = divpd(CONCAT88((double)(int)((ulong)dVar20 >> 0x20) * dVar16,dVar20 * dVar16),
                        auVar5);
        *(undefined (*) [16])((long)__ptr_01 + lVar13 * 8 + lVar9) = auVar21;
        lVar13 = lVar13 + 2;
        iVar14 = iVar14 + 2;
      } while (lVar13 != 0x4b0);
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 1000) {
      kernel_fdtd_2d(500,1000,0x4b0,__ptr,__ptr_00,__ptr_01,__ptr_02);
      __stream = _DAT_2fb3d8d48288b4c;
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_2fb3d8d48288b4c);
        lVar7 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar9 = 0;
          do {
            if (((uint)(((int)lVar9 + (int)lVar7 * 1000) * -0x33333333) >> 2 |
                (int)lVar9 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar9 * 8 + lVar7 * 0x2580));
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x4b0);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 1000);
        lVar7 = 0;
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
        fprintf(__stream,"begin dump: %s",&_L_str_8);
        do {
          lVar9 = 0;
          do {
            if (((uint)(((int)lVar9 + (int)lVar7 * 1000) * -0x33333333) >> 2 |
                (int)lVar9 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar9 * 8 + lVar7 * 0x2580))
            ;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x4b0);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 1000);
        lVar7 = 0;
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_8);
        fprintf(__stream,"begin dump: %s",&_L_str_9);
        do {
          lVar9 = 0;
          do {
            if (((uint)(((int)lVar9 + (int)lVar7 * 1000) * -0x33333333) >> 2 |
                (int)lVar9 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar9 * 8 + lVar7 * 0x2580))
            ;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x4b0);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 1000);
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


