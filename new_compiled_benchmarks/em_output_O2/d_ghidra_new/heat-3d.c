
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "heat-3d.h"
void kernel_heat_3d(int8 param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double dVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  uVar13 = (ulong)(param_2 - 1);
  lVar5 = uVar13 * 8 + 0x1c5c0;
  lVar6 = uVar13 * 8 + 0x387c0;
  uVar1 = uVar13 - 1;
  uVar20 = uVar1 & 0xfffffffffffffffe;
  iVar15 = 1;
  do {
    if (2 < param_2) {
      lVar16 = 0;
      uVar25 = 1;
      do {
        lVar21 = lVar16 * 0x1c200;
        uVar2 = uVar25 + 1;
        lVar22 = 0;
        uVar23 = 1;
        do {
          uVar3 = uVar23 + 1;
          uVar14 = 1;
          if (uVar1 < 2) {
LAB_001002a0:
            do {
              lVar19 = uVar23 * 0x3c0;
              lVar17 = param_3 + uVar25 * 0x1c200;
              lVar24 = lVar17 + lVar19;
              dVar12 = *(double *)(lVar24 + uVar14 * 8);
              dVar26 = dVar12 * -2.0;
              *(double *)(uVar25 * 0x1c200 + param_4 + lVar19 + uVar14 * 8) =
                   (dVar26 + *(double *)(lVar24 + 8 + uVar14 * 8) +
                   *(double *)(lVar24 + -8 + uVar14 * 8)) * 0.125 +
                   (*(double *)(uVar2 * 0x1c200 + param_3 + lVar19 + uVar14 * 8) + dVar26 +
                   *(double *)((uVar25 - 1) * 0x1c200 + param_3 + lVar19 + uVar14 * 8)) * 0.125 +
                   (*(double *)(uVar3 * 0x3c0 + lVar17 + uVar14 * 8) + dVar26 +
                   *(double *)((uVar23 - 1) * 0x3c0 + lVar17 + uVar14 * 8)) * 0.125 + dVar12;
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar13);
          }
          else {
            lVar17 = lVar22 * 0x3c0;
            if ((ulong)(param_4 + lVar21 + 0x1c5c8 + lVar17) <
                (ulong)(param_3 + lVar6 + lVar21 + lVar17)) {
              uVar18 = 0;
              if ((ulong)(param_3 + lVar21 + 0x3c8 + lVar17) <
                  (ulong)(param_4 + lVar5 + lVar21 + lVar17)) goto LAB_001002a0;
            }
            else {
              uVar18 = 0;
            }
            do {
              lVar24 = uVar23 * 0x3c0;
              uVar14 = uVar18 * 8 | 8;
              pdVar8 = (double *)(uVar14 + uVar2 * 0x1c200 + param_3 + lVar24);
              lVar17 = param_3 + uVar25 * 0x1c200;
              pdVar9 = (double *)(uVar14 + (uVar25 - 1) * 0x1c200 + param_3 + lVar24);
              pdVar10 = (double *)(uVar14 + uVar3 * 0x3c0 + lVar17);
              pdVar11 = (double *)(uVar14 + (uVar23 - 1) * 0x3c0 + lVar17);
              lVar17 = lVar17 + lVar24;
              dVar12 = *(double *)(uVar14 + lVar17);
              dVar26 = ((double *)(uVar14 + lVar17))[1];
              pdVar4 = (double *)(lVar17 + uVar18 * 8);
              pdVar7 = (double *)(lVar17 + 0x10 + uVar18 * 8);
              dVar27 = dVar12 * -2.0;
              dVar28 = dVar26 * -2.0;
              *(int (*) [16])(uVar14 + uVar25 * 0x1c200 + param_4 + lVar24) =
                            (pdVar9[1] + pdVar8[1] + dVar28) * 0.125 +
                            (pdVar11[1] + pdVar10[1] + dVar28) * 0.125 + dVar26,
                            (*pdVar7 + dVar27 + *pdVar4) * 0.125 +
                            (*pdVar9 + *pdVar8 + dVar27) * 0.125 +
                            (*pdVar11 + *pdVar10 + dVar27) * 0.125 + dVar12);
              uVar18 = uVar18 + 2;
            } while (uVar18 != uVar20);
            uVar14 = uVar1 | 1;
            if (uVar1 != uVar20) goto LAB_001002a0;
          }
          lVar22 = lVar22 + 1;
          uVar23 = uVar3;
        } while (uVar3 != uVar13);
        lVar16 = lVar16 + 1;
        uVar25 = uVar2;
      } while (uVar2 != uVar13);
      if (2 < param_2) {
        lVar16 = 0;
        uVar25 = 1;
        do {
          lVar21 = lVar16 * 0x1c200;
          uVar2 = uVar25 + 1;
          lVar22 = 0;
          uVar23 = 1;
          do {
            uVar3 = uVar23 + 1;
            uVar14 = 1;
            if (uVar1 < 2) {
LAB_00100570:
              do {
                lVar19 = uVar23 * 0x3c0;
                lVar17 = param_4 + uVar25 * 0x1c200;
                lVar24 = lVar17 + lVar19;
                dVar12 = *(double *)(lVar24 + uVar14 * 8);
                dVar26 = dVar12 * -2.0;
                *(double *)(uVar25 * 0x1c200 + param_3 + lVar19 + uVar14 * 8) =
                     (dVar26 + *(double *)(lVar24 + 8 + uVar14 * 8) +
                     *(double *)(lVar24 + -8 + uVar14 * 8)) * 0.125 +
                     (*(double *)(uVar2 * 0x1c200 + param_4 + lVar19 + uVar14 * 8) + dVar26 +
                     *(double *)((uVar25 - 1) * 0x1c200 + param_4 + lVar19 + uVar14 * 8)) * 0.125 +
                     (*(double *)(uVar3 * 0x3c0 + lVar17 + uVar14 * 8) + dVar26 +
                     *(double *)((uVar23 - 1) * 0x3c0 + lVar17 + uVar14 * 8)) * 0.125 + dVar12;
                uVar14 = uVar14 + 1;
              } while (uVar14 != uVar13);
            }
            else {
              lVar17 = lVar22 * 0x3c0;
              if ((ulong)(param_3 + lVar21 + 0x1c5c8 + lVar17) <
                  (ulong)(param_4 + lVar6 + lVar21 + lVar17)) {
                uVar18 = 0;
                if ((ulong)(param_4 + lVar21 + 0x3c8 + lVar17) <
                    (ulong)(param_3 + lVar5 + lVar21 + lVar17)) goto LAB_00100570;
              }
              else {
                uVar18 = 0;
              }
              do {
                lVar24 = uVar23 * 0x3c0;
                uVar14 = uVar18 * 8 | 8;
                pdVar8 = (double *)(uVar14 + uVar2 * 0x1c200 + param_4 + lVar24);
                lVar17 = param_4 + uVar25 * 0x1c200;
                pdVar9 = (double *)(uVar14 + (uVar25 - 1) * 0x1c200 + param_4 + lVar24);
                pdVar10 = (double *)(uVar14 + uVar3 * 0x3c0 + lVar17);
                pdVar11 = (double *)(uVar14 + (uVar23 - 1) * 0x3c0 + lVar17);
                lVar17 = lVar17 + lVar24;
                dVar12 = *(double *)(uVar14 + lVar17);
                dVar26 = ((double *)(uVar14 + lVar17))[1];
                pdVar4 = (double *)(lVar17 + uVar18 * 8);
                pdVar7 = (double *)(lVar17 + 0x10 + uVar18 * 8);
                dVar27 = dVar12 * -2.0;
                dVar28 = dVar26 * -2.0;
                *(int (*) [16])(uVar14 + uVar25 * 0x1c200 + param_3 + lVar24) =
                              (pdVar9[1] + pdVar8[1] + dVar28) * 0.125 +
                              (pdVar11[1] + pdVar10[1] + dVar28) * 0.125 + dVar26,
                              (*pdVar7 + dVar27 + *pdVar4) * 0.125 +
                              (*pdVar9 + *pdVar8 + dVar27) * 0.125 +
                              (*pdVar11 + *pdVar10 + dVar27) * 0.125 + dVar12);
                uVar18 = uVar18 + 2;
              } while (uVar18 != uVar20);
              uVar14 = uVar1 | 1;
              if (uVar1 != uVar20) goto LAB_00100570;
            }
            lVar22 = lVar22 + 1;
            uVar23 = uVar3;
          } while (uVar3 != uVar13);
          lVar16 = lVar16 + 1;
          uVar25 = uVar2;
        } while (uVar2 != uVar13);
      }
    }
    iVar15 = iVar15 + 1;
    if (iVar15 == 0x1f5) {
      return;
    }
  } while( 1 );
}
