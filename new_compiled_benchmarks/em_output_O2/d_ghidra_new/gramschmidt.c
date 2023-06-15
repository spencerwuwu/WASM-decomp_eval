
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gramschmidt.h"
void kernel_gramschmidt(uint param_1,uint param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  int auVar23 [16];
  ulong local_88;
  
  if (0 < (int)param_2) {
    uVar8 = (ulong)param_2;
    uVar19 = (ulong)param_1;
    uVar20 = (ulong)(param_1 & 0xfffffffe);
    local_88 = 1;
    uVar21 = 0;
    do {
      lVar15 = uVar19 * 0x2580 + -0x2578 + uVar21 * 8;
      uVar1 = param_5 + lVar15;
      lVar9 = uVar21 * 0x2588;
      uVar2 = param_5 + uVar21 * 8;
      if ((int)param_1 < 1) {
        *(int8 *)(uVar21 * 0x2588 + param_4) = 0;
      }
      else {
        dVar22 = 0.0;
        uVar10 = 0;
        uVar14 = 0;
        if (3 < param_1) {
          do {
            dVar4 = *(double *)(uVar10 * 0x2580 + param_3 + uVar21 * 8);
            dVar5 = *(double *)((uVar10 | 1) * 0x2580 + param_3 + uVar21 * 8);
            dVar6 = *(double *)((uVar10 | 2) * 0x2580 + param_3 + uVar21 * 8);
            dVar7 = *(double *)((uVar10 | 3) * 0x2580 + param_3 + uVar21 * 8);
            dVar22 = dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4 + dVar22;
            uVar10 = uVar10 + 4;
            uVar14 = uVar14 + 4;
          } while (uVar14 != (param_1 & 0xfffffffc));
        }
        if ((ulong)(param_1 & 3) != 0) {
          uVar14 = 0;
          do {
            dVar4 = *(double *)(uVar10 * 0x2580 + param_3 + uVar21 * 8);
            dVar22 = dVar22 + dVar4 * dVar4;
            uVar10 = uVar10 + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != (param_1 & 3));
        }
        if (dVar22 < 0.0) {
          dVar22 = sqrt(dVar22);
        }
        else {
          dVar22 = SQRT(dVar22);
        }
        lVar11 = uVar21 * 0x2580 + param_4;
        *(double *)(lVar11 + uVar21 * 8) = dVar22;
        if (0 < (int)param_1) {
          pdVar3 = (double *)(lVar11 + uVar21 * 8);
          if (param_1 < 4) {
LAB_001002e0:
            uVar10 = 0;
          }
          else {
            if (uVar2 < (ulong)(lVar15 + param_3) && param_3 + uVar21 * 8 < uVar1)
            goto LAB_001002e0;
            uVar10 = 0;
            if (param_4 + lVar9 + 8U <= uVar2 || uVar1 <= (ulong)(param_4 + lVar9)) {
              dVar22 = *pdVar3;
              uVar10 = 0;
              do {
                lVar15 = (uVar10 | 1) * 0x2580;
                                         *(int8 *)(param_3 + uVar10 * 0x2580 + uVar21 * 8)),
                uVar10 = uVar10 + 2;
              } while (uVar10 != uVar20);
              uVar10 = uVar20;
              if (uVar20 == uVar19) goto LAB_00100370;
            }
          }
          uVar14 = uVar10;
          if ((param_1 & 1) != 0) {
            *(double *)(uVar10 * 0x2580 + param_5 + uVar21 * 8) =
                 *(double *)(param_3 + uVar10 * 0x2580 + uVar21 * 8) / *pdVar3;
            uVar14 = uVar10 | 1;
          }
          if (~uVar10 != -uVar19) {
            do {
              lVar15 = uVar14 * 0x2580;
              *(double *)(param_5 + lVar15 + uVar21 * 8) =
                   *(double *)(param_3 + lVar15 + uVar21 * 8) / *pdVar3;
              *(double *)(lVar15 + param_5 + 0x2580 + uVar21 * 8) =
                   *(double *)(param_3 + 0x2580 + lVar15 + uVar21 * 8) / *pdVar3;
              uVar14 = uVar14 + 2;
            } while (uVar14 != uVar19);
          }
        }
      }
LAB_00100370:
      uVar10 = uVar21 + 1;
      if (uVar10 < uVar8) {
        lVar15 = 0;
        uVar14 = local_88;
        do {
          lVar11 = uVar21 * 0x2580 + param_4;
          *(int8 *)(lVar11 + uVar14 * 8) = 0;
          if (0 < (int)param_1) {
            pdVar3 = (double *)(lVar11 + uVar14 * 8);
            dVar22 = 0.0;
            uVar16 = 0;
            uVar17 = 0;
            if (param_1 != 1) {
              do {
                dVar22 = *(double *)(param_5 + uVar16 * 0x2580 + uVar21 * 8) *
                         *(double *)(uVar16 * 0x2580 + param_3 + uVar14 * 8) + dVar22;
                *pdVar3 = dVar22;
                lVar11 = (uVar16 | 1) * 0x2580;
                dVar22 = *(double *)(param_5 + lVar11 + uVar21 * 8) *
                         *(double *)(lVar11 + param_3 + uVar14 * 8) + dVar22;
                *pdVar3 = dVar22;
                uVar16 = uVar16 + 2;
                uVar17 = uVar17 + 2;
              } while (uVar17 != uVar20);
            }
            if ((param_1 & 1) != 0) {
              *pdVar3 = *(double *)(param_5 + uVar16 * 0x2580 + uVar21 * 8) *
                        *(double *)(uVar16 * 0x2580 + param_3 + uVar14 * 8) + dVar22;
            }
            if (0 < (int)param_1) {
              if (param_1 < 0xe) {
                uVar18 = 0;
              }
              else {
                uVar16 = uVar21 * 8 + 8 + lVar15 * 8 + param_3;
                uVar17 = uVar19 * 0x2580 + -0x2570 + uVar21 * 8 + lVar15 * 8 + param_3;
                if (uVar16 < uVar1 && uVar2 < uVar17) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0;
                  if ((ulong)(lVar9 + 0x10 + lVar15 * 8 + param_4) <= uVar16 ||
                      uVar17 <= (ulong)(lVar9 + 8 + lVar15 * 8 + param_4)) {
                    dVar22 = *pdVar3;
                    uVar16 = 0;
                    do {
                      lVar11 = param_3 + uVar16 * 0x2580;
                      lVar12 = (uVar16 | 1) * 0x2580;
                      lVar13 = param_3 + lVar12;
                      dVar4 = *(double *)(lVar13 + uVar14 * 8);
                      dVar5 = *(double *)(lVar12 + param_5 + uVar21 * 8);
                      *(double *)(lVar11 + uVar14 * 8) =
                           *(double *)(lVar11 + uVar14 * 8) -
                           *(double *)(uVar16 * 0x2580 + param_5 + uVar21 * 8) * dVar22;
                      *(double *)(lVar13 + uVar14 * 8) = dVar4 - dVar5 * dVar22;
                      uVar16 = uVar16 + 2;
                    } while (uVar16 != uVar20);
                    uVar18 = uVar20;
                    if (uVar20 == uVar19) goto LAB_001003d0;
                  }
                }
              }
              uVar16 = uVar18;
              if ((param_1 & 1) != 0) {
                lVar11 = param_3 + uVar18 * 0x2580;
                *(double *)(lVar11 + uVar14 * 8) =
                     *(double *)(lVar11 + uVar14 * 8) -
                     *(double *)(uVar18 * 0x2580 + param_5 + uVar21 * 8) * *pdVar3;
                uVar16 = uVar18 | 1;
              }
              if (~uVar18 != -uVar19) {
                do {
                  lVar13 = uVar16 * 0x2580;
                  *(double *)(param_3 + lVar13 + uVar14 * 8) =
                       *(double *)(param_3 + lVar13 + uVar14 * 8) -
                       *(double *)(param_5 + lVar13 + uVar21 * 8) * *pdVar3;
                  lVar11 = param_3 + 0x2580 + lVar13;
                  *(double *)(lVar11 + uVar14 * 8) =
                       *(double *)(lVar11 + uVar14 * 8) -
                       *(double *)(param_5 + 0x2580 + lVar13 + uVar21 * 8) * *pdVar3;
                  uVar16 = uVar16 + 2;
                } while (uVar16 != uVar19);
              }
            }
          }
LAB_001003d0:
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 1;
        } while (uVar14 != uVar8);
      }
      local_88 = local_88 + 1;
      uVar21 = uVar10;
    } while (uVar10 != uVar8);
  }
  return;
}
