
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
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
  int8 uVar10;
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
          uVar10 = *(int8 *)(param_7 + uVar28 * 8);
          uVar20 = 0;
          do {
            uVar20 = uVar20 + 4;
          } while (uVar20 != uVar24);
          uVar20 = uVar24;
          if (uVar24 == uVar23) goto LAB_00100230;
        }
        uVar25 = ~uVar20;
        if ((ulong)(param_3 & 3) != 0) {
          uVar31 = 0;
          do {
            *(int8 *)(param_5 + uVar20 * 8) = *(int8 *)(param_7 + uVar28 * 8);
            uVar20 = uVar20 + 1;
            uVar31 = uVar31 + 1;
          } while (uVar31 != (param_3 & 3));
        }
        if (2 < uVar25 + uVar23) {
          do {
            *(int8 *)(param_5 + uVar20 * 8) = *(int8 *)(param_7 + uVar28 * 8);
            *(int8 *)(param_5 + 8 + uVar20 * 8) = *(int8 *)(param_7 + uVar28 * 8);
            *(int8 *)(param_5 + 0x10 + uVar20 * 8) = *(int8 *)(param_7 + uVar28 * 8);
            *(int8 *)(param_5 + 0x18 + uVar20 * 8) = *(int8 *)(param_7 + uVar28 * 8);
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
                *(int (*) [16])(lVar2 + uVar25 * 8) =
                              (*pdVar3 - *pdVar5) * -0.5 + *pdVar4);
                *(int (*) [16])(lVar2 + 0x10 + uVar25 * 8) =
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
                *(int (*) [16])(uVar31 + lVar1) =
                              ((double *)(uVar31 + lVar1))[1],
                              (*(double *)(uVar31 + uVar25) - *pdVar4) * -0.5 +
                              *(double *)(uVar31 + lVar1));
                *(int (*) [16])(uVar31 + 0x10 + lVar1) =
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
                      *(int (*) [16])(uVar20 + uVar34 * 8) =
                                    pdVar4[1],
                                    ((*pdVar7 + (*pdVar3 - *pdVar5)) - *pdVar8) * -0.7 + *pdVar4);
                      *(int (*) [16])(uVar20 + 0x10 + uVar34 * 8) =
                                    ((dVar16 + (dVar12 - dVar14)) - dVar18) * -0.7 + *pdVar6);
                      uVar34 = uVar34 + 4;
                      uVar29 = uVar27;
                      if (uVar34 == uVar27) goto LAB_0010075c;
                    } while( 1 );
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
