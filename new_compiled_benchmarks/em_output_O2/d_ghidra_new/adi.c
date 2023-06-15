
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "adi.h"
void kernel_adi(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  uint uVar2;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int bVar13;
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
  ulong uVar3;
  
  if (0 < param_1) {
    dVar14 = 1.0 / (double)param_1;
    dVar16 = (1.0 / (double)param_2) * (1.0 / (double)param_2);
    dVar15 = (dVar14 + dVar14) / dVar16;
    dVar14 = dVar14 / dVar16;
    dVar17 = dVar15 * -0.5;
    dVar15 = dVar15 + 1.0;
    dVar16 = dVar14 * -0.5;
    dVar14 = dVar14 + 1.0;
    uVar2 = param_2 - 1;
    uVar3 = (ulong)uVar2;
    dVar19 = (double)((ulong)dVar17 ^ 0x8000000000000000);
    dVar18 = (double)((ulong)dVar16 ^ 0x8000000000000000);
    dVar20 = dVar16 + dVar16 + 1.0;
    dVar21 = dVar17 + dVar17 + 1.0;
    lVar1 = uVar3 * 8 + 8000;
    iVar4 = 1;
    do {
      if (2 < param_2) {
        lVar10 = 0;
        uVar11 = 1;
        do {
          lVar7 = lVar10 * 8000;
          lVar8 = lVar1 + lVar7;
          *(int8 *)(param_4 + uVar11 * 8) = 0x3ff0000000000000;
          lVar12 = uVar11 * 8000;
          *(int8 *)(param_5 + lVar12) = 0;
          *(int8 *)(param_6 + lVar12) = *(int8 *)(param_4 + uVar11 * 8);
          uVar6 = uVar11 + 1;
          if ((param_5 + lVar7 + 8000U < (ulong)(param_6 + lVar8)) &&
             (uVar5 = 1, param_6 + lVar7 + 8000U < (ulong)(lVar8 + param_5))) {
            do {
              dVar22 = *(double *)(param_5 + lVar12 + -8 + uVar5 * 8) * dVar17 + dVar15;
              *(double *)(param_5 + lVar12 + uVar5 * 8) = dVar19 / dVar22;
              lVar8 = uVar5 * 8000 + param_3;
              *(double *)(param_6 + lVar12 + uVar5 * 8) =
                   (*(double *)(param_6 + lVar12 + -8 + uVar5 * 8) * dVar19 +
                   *(double *)(lVar8 + uVar6 * 8) * dVar18 +
                   *(double *)(lVar8 + (uVar11 - 1) * 8) * dVar18 +
                   *(double *)(lVar8 + uVar11 * 8) * dVar20) / dVar22;
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          else {
            dVar22 = *(double *)(param_5 + 8000 + lVar7);
            dVar23 = *(double *)(param_6 + 8000 + lVar7);
            uVar5 = 1;
            do {
              dVar24 = dVar22 * dVar17 + dVar15;
              dVar22 = dVar19 / dVar24;
              *(double *)(param_5 + lVar12 + uVar5 * 8) = dVar22;
              lVar8 = uVar5 * 8000 + param_3;
              dVar23 = (dVar23 * dVar19 +
                       *(double *)(lVar8 + uVar6 * 8) * dVar18 +
                       *(double *)(lVar8 + (uVar11 - 1) * 8) * dVar18 +
                       *(double *)(lVar8 + uVar11 * 8) * dVar20) / dVar24;
              *(double *)(param_6 + lVar12 + uVar5 * 8) = dVar23;
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          *(int8 *)((long)(int)uVar2 * 8000 + param_4 + uVar11 * 8) = 0x3ff0000000000000;
          uVar5 = (ulong)(param_2 - 2);
          do {
            lVar8 = uVar5 * 8000 + param_4;
            *(double *)(lVar8 + uVar11 * 8) =
                 *(double *)(param_5 + lVar12 + uVar5 * 8) * *(double *)(lVar8 + 8000 + uVar11 * 8)
                 + *(double *)(param_6 + lVar12 + uVar5 * 8);
            bVar13 = 1 < (long)uVar5;
            uVar5 = uVar5 - 1;
          } while (bVar13);
          lVar10 = lVar10 + 1;
          uVar11 = uVar6;
        } while (uVar6 != uVar3);
        if (2 < param_2) {
          uVar11 = 1;
          lVar10 = 0;
          do {
            lVar12 = lVar10 * 8000;
            lVar9 = lVar1 + lVar12;
            lVar7 = uVar11 * 8000;
            *(int8 *)(param_3 + lVar7) = 0x3ff0000000000000;
            *(int8 *)(param_5 + lVar7) = 0;
            *(int8 *)(param_6 + lVar7) = *(int8 *)(param_3 + lVar7);
            lVar8 = uVar11 - 1;
            uVar11 = uVar11 + 1;
            if ((param_5 + lVar12 + 8000U < (ulong)(param_6 + lVar9)) &&
               (uVar6 = 1, param_6 + lVar12 + 8000U < (ulong)(lVar9 + param_5))) {
              do {
                dVar22 = *(double *)(param_5 + lVar7 + -8 + uVar6 * 8) * dVar16 + dVar14;
                *(double *)(param_5 + lVar7 + uVar6 * 8) = dVar18 / dVar22;
                *(double *)(param_6 + lVar7 + uVar6 * 8) =
                     (*(double *)(param_6 + lVar7 + -8 + uVar6 * 8) * dVar18 +
                     *(double *)(uVar11 * 8000 + param_4 + uVar6 * 8) * dVar19 +
                     *(double *)(lVar8 * 8000 + param_4 + uVar6 * 8) * dVar19 +
                     *(double *)(param_4 + lVar7 + uVar6 * 8) * dVar21) / dVar22;
                uVar6 = uVar6 + 1;
              } while (uVar6 != uVar3);
            }
            else {
              dVar22 = *(double *)(param_5 + 8000 + lVar12);
              dVar23 = *(double *)(param_6 + 8000 + lVar12);
              uVar6 = 1;
              do {
                dVar24 = dVar22 * dVar16 + dVar14;
                dVar22 = dVar18 / dVar24;
                *(double *)(param_5 + lVar7 + uVar6 * 8) = dVar22;
                dVar23 = (dVar23 * dVar18 +
                         *(double *)(uVar11 * 8000 + param_4 + uVar6 * 8) * dVar19 +
                         *(double *)(lVar8 * 8000 + param_4 + uVar6 * 8) * dVar19 +
                         *(double *)(param_4 + lVar7 + uVar6 * 8) * dVar21) / dVar24;
                *(double *)(param_6 + lVar7 + uVar6 * 8) = dVar23;
                uVar6 = uVar6 + 1;
              } while (uVar6 != uVar3);
            }
            lVar8 = param_3 + lVar7;
            *(int8 *)(lVar8 + (long)(int)uVar2 * 8) = 0x3ff0000000000000;
            uVar6 = (ulong)(param_2 - 2);
            do {
              *(double *)(lVar8 + uVar6 * 8) =
                   *(double *)(param_5 + lVar7 + uVar6 * 8) * *(double *)(lVar8 + 8 + uVar6 * 8) +
                   *(double *)(param_6 + lVar7 + uVar6 * 8);
              bVar13 = 1 < (long)uVar6;
              uVar6 = uVar6 - 1;
            } while (bVar13);
            lVar10 = lVar10 + 1;
          } while (uVar11 != uVar3);
        }
      }
      bVar13 = iVar4 != param_1;
      iVar4 = iVar4 + 1;
    } while (bVar13);
  }
  return;
}
