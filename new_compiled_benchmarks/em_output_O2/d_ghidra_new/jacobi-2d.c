
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "jacobi-2d.h"
void kernel_jacobi_2d(int param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
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
  long lVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  
  if (0 < param_1) {
    uVar20 = (ulong)(param_2 - 1);
    lVar3 = uVar20 * 8 + 0x28a0;
    lVar4 = uVar20 * 8 + 0x5140;
    uVar1 = uVar20 - 1;
    uVar27 = uVar1 & 0xfffffffffffffffc;
    iVar25 = 0;
    do {
      if (2 < param_2) {
        lVar28 = 0;
        uVar22 = 1;
        do {
          uVar2 = uVar22 + 1;
          uVar26 = 1;
          if (uVar1 < 4) {
LAB_001001f0:
            do {
              lVar23 = param_3 + uVar22 * 0x28a0;
              pdVar5 = (double *)(lVar23 + -8 + uVar26 * 8);
              *(double *)(uVar22 * 0x28a0 + param_4 + uVar26 * 8) =
                   (pdVar5[1] + *pdVar5 + *(double *)(lVar23 + 8 + uVar26 * 8) +
                    *(double *)(uVar2 * 0x28a0 + param_3 + uVar26 * 8) +
                   *(double *)((uVar22 - 1) * 0x28a0 + param_3 + uVar26 * 8)) * 0.2;
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar20);
          }
          else {
            lVar23 = lVar28 * 0x28a0;
            if (lVar23 + param_4 + 0x28a8U < (ulong)(param_3 + lVar4 + lVar23)) {
              uVar24 = 0;
              uVar26 = 1;
              if (param_3 + lVar23 + 8U < (ulong)(param_4 + lVar3 + lVar23)) goto LAB_001001f0;
            }
            else {
              uVar24 = 0;
            }
            do {
              lVar23 = param_3 + uVar22 * 0x28a0;
              uVar26 = uVar24 * 8 | 8;
              pdVar5 = (double *)(uVar26 + 0x10 + lVar23);
              dVar10 = *pdVar5;
              dVar11 = pdVar5[1];
              pdVar5 = (double *)(lVar23 + uVar24 * 8);
              pdVar6 = (double *)(lVar23 + 0x10 + uVar24 * 8);
              dVar12 = *pdVar6;
              dVar13 = pdVar6[1];
              uVar29 = uVar24 * 8 | 0x10;
              pdVar6 = (double *)(uVar29 + lVar23);
              pdVar7 = (double *)(uVar29 + 0x10 + lVar23);
              dVar14 = *pdVar7;
              dVar15 = pdVar7[1];
              lVar21 = uVar2 * 0x28a0 + param_3;
              pdVar7 = (double *)(uVar26 + lVar21);
              pdVar8 = (double *)(uVar26 + 0x10 + lVar21);
              dVar16 = *pdVar8;
              dVar17 = pdVar8[1];
              lVar21 = (uVar22 - 1) * 0x28a0 + param_3;
              pdVar8 = (double *)(uVar26 + lVar21);
              pdVar9 = (double *)(uVar26 + 0x10 + lVar21);
              dVar18 = *pdVar9;
              dVar19 = pdVar9[1];
              lVar21 = uVar22 * 0x28a0 + param_4;
              *(int (*) [16])(uVar26 + lVar21) =
                            pdVar7[1] + pdVar6[1] + pdVar5[1] + ((double *)(uVar26 + lVar23))[1]) *
                            0.2,(*pdVar8 +
                                *pdVar7 + *pdVar6 + *pdVar5 + *(double *)(uVar26 + lVar23)) * 0.2);
              *(int (*) [16])(uVar26 + 0x10 + lVar21) =
                            (dVar18 + dVar16 + dVar14 + dVar12 + dVar10) * 0.2);
              uVar24 = uVar24 + 4;
            } while (uVar24 != uVar27);
            uVar26 = uVar27 + 1;
            if (uVar1 != uVar27) goto LAB_001001f0;
          }
          lVar28 = lVar28 + 1;
          uVar22 = uVar2;
        } while (uVar2 != uVar20);
        if (2 < param_2) {
          lVar28 = 0;
          uVar22 = 1;
          do {
            uVar2 = uVar22 + 1;
            uVar26 = 1;
            if (uVar1 < 4) {
LAB_001003c0:
              do {
                lVar23 = param_4 + uVar22 * 0x28a0;
                pdVar5 = (double *)(lVar23 + -8 + uVar26 * 8);
                *(double *)(uVar22 * 0x28a0 + param_3 + uVar26 * 8) =
                     (pdVar5[1] + *pdVar5 + *(double *)(lVar23 + 8 + uVar26 * 8) +
                      *(double *)(uVar2 * 0x28a0 + param_4 + uVar26 * 8) +
                     *(double *)((uVar22 - 1) * 0x28a0 + param_4 + uVar26 * 8)) * 0.2;
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar20);
            }
            else {
              lVar23 = lVar28 * 0x28a0;
              if (lVar23 + param_3 + 0x28a8U < (ulong)(param_4 + lVar4 + lVar23)) {
                uVar24 = 0;
                uVar26 = 1;
                if (param_4 + lVar23 + 8U < (ulong)(lVar23 + lVar3 + param_3)) goto LAB_001003c0;
              }
              else {
                uVar24 = 0;
              }
              do {
                lVar23 = param_4 + uVar22 * 0x28a0;
                uVar26 = uVar24 * 8 | 8;
                pdVar5 = (double *)(uVar26 + 0x10 + lVar23);
                dVar10 = *pdVar5;
                dVar11 = pdVar5[1];
                pdVar5 = (double *)(lVar23 + uVar24 * 8);
                pdVar6 = (double *)(lVar23 + 0x10 + uVar24 * 8);
                dVar12 = *pdVar6;
                dVar13 = pdVar6[1];
                uVar29 = uVar24 * 8 | 0x10;
                pdVar6 = (double *)(uVar29 + lVar23);
                pdVar7 = (double *)(uVar29 + 0x10 + lVar23);
                dVar14 = *pdVar7;
                dVar15 = pdVar7[1];
                lVar21 = uVar2 * 0x28a0 + param_4;
                pdVar7 = (double *)(uVar26 + lVar21);
                pdVar8 = (double *)(uVar26 + 0x10 + lVar21);
                dVar16 = *pdVar8;
                dVar17 = pdVar8[1];
                lVar21 = (uVar22 - 1) * 0x28a0 + param_4;
                pdVar8 = (double *)(uVar26 + lVar21);
                pdVar9 = (double *)(uVar26 + 0x10 + lVar21);
                dVar18 = *pdVar9;
                dVar19 = pdVar9[1];
                lVar21 = uVar22 * 0x28a0 + param_3;
                *(int (*) [16])(uVar26 + lVar21) =
                              pdVar7[1] + pdVar6[1] + pdVar5[1] + ((double *)(uVar26 + lVar23))[1])
                              * 0.2,(*pdVar8 +
                                    *pdVar7 + *pdVar6 + *pdVar5 + *(double *)(uVar26 + lVar23)) *
                                    0.2);
                *(int (*) [16])(uVar26 + 0x10 + lVar21) =
                              (dVar18 + dVar16 + dVar14 + dVar12 + dVar10) * 0.2);
                uVar24 = uVar24 + 4;
              } while (uVar24 != uVar27);
              uVar26 = uVar27 + 1;
              if (uVar1 != uVar27) goto LAB_001003c0;
            }
            lVar28 = lVar28 + 1;
            uVar22 = uVar2;
          } while (uVar2 != uVar20);
        }
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 != param_1);
  }
  return;
}
