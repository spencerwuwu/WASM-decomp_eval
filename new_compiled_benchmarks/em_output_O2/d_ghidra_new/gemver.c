
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gemver.h"
void kernel_gemver(double param_1,double param_2,uint param_3,long param_4,long param_5,
                  ulong param_6,long param_7_00,ulong param_8_00,long param_7,ulong param_8,
                  long param_9,ulong param_10)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  double dVar20;
  
  if ((int)param_3 < 1) {
    return;
  }
  uVar12 = (ulong)param_3;
  uVar14 = (ulong)(param_3 & 0xfffffffc);
  uVar19 = 0;
  do {
    if (param_3 < 10) {
      uVar17 = 0;
LAB_00100078:
      uVar13 = uVar17;
      if ((param_3 & 1) != 0) {
        lVar16 = uVar19 * 16000 + param_4;
        *(double *)(lVar16 + uVar17 * 8) =
             *(double *)(param_7_00 + uVar19 * 8) * *(double *)(param_8_00 + uVar17 * 8) +
             *(double *)(param_5 + uVar19 * 8) * *(double *)(param_6 + uVar17 * 8) +
             *(double *)(lVar16 + uVar17 * 8);
        uVar13 = uVar17 | 1;
      }
      if (uVar12 - 1 != uVar17) {
        do {
          lVar16 = uVar19 * 16000 + param_4;
          *(double *)(lVar16 + uVar13 * 8) =
               *(double *)(param_7_00 + uVar19 * 8) * *(double *)(param_8_00 + uVar13 * 8) +
               *(double *)(param_5 + uVar19 * 8) * *(double *)(param_6 + uVar13 * 8) +
               *(double *)(lVar16 + uVar13 * 8);
          *(double *)(lVar16 + 8 + uVar13 * 8) =
               *(double *)(param_7_00 + uVar19 * 8) * *(double *)(param_8_00 + 8 + uVar13 * 8) +
               *(double *)(param_5 + uVar19 * 8) * *(double *)(param_6 + 8 + uVar13 * 8) +
               *(double *)(lVar16 + 8 + uVar13 * 8);
          uVar13 = uVar13 + 2;
        } while (uVar13 != uVar12);
      }
    }
    else {
      uVar18 = uVar12 * 8 + param_4 + uVar19 * 16000;
      uVar13 = uVar19 * 16000 + param_4;
      if (((uVar13 < param_5 + uVar19 * 8 + 8 && param_5 + uVar19 * 8 < uVar18) ||
          (uVar13 < param_6 + uVar12 * 8 && param_6 < uVar18)) ||
         (uVar13 < param_7_00 + uVar19 * 8 + 8 && param_7_00 + uVar19 * 8 < uVar18)) {
        uVar17 = 0;
        goto LAB_00100078;
      }
      uVar17 = 0;
      if (uVar13 < param_8_00 + uVar12 * 8 && param_8_00 < uVar18) goto LAB_00100078;
      dVar20 = *(double *)(param_5 + uVar19 * 8);
      dVar6 = *(double *)(param_7_00 + uVar19 * 8);
      uVar18 = 0;
      do {
        pdVar5 = (double *)(uVar13 + uVar18 * 8);
        pdVar3 = (double *)(uVar13 + 0x10 + uVar18 * 8);
        dVar7 = pdVar3[1];
        pdVar1 = (double *)(param_6 + uVar18 * 8);
        pdVar2 = (double *)(param_6 + 0x10 + uVar18 * 8);
        dVar8 = *pdVar2;
        dVar9 = pdVar2[1];
        pdVar2 = (double *)(param_8_00 + uVar18 * 8);
        pdVar4 = (double *)(param_8_00 + 0x10 + uVar18 * 8);
        dVar10 = *pdVar4;
        dVar11 = pdVar4[1];
        *(int (*) [16])(uVar13 + uVar18 * 8) =
                      *pdVar2 * dVar6 + *pdVar1 * dVar20 + *pdVar5);
        *(int (*) [16])(uVar13 + 0x10 + uVar18 * 8) =
                      dVar10 * dVar6 + dVar8 * dVar20 + *pdVar3);
        uVar18 = uVar18 + 4;
      } while (uVar18 != uVar14);
      uVar17 = uVar14;
      if (uVar14 != uVar12) goto LAB_00100078;
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar12);
  if ((int)param_3 < 1) {
    return;
  }
  uVar19 = 0;
  do {
    dVar20 = *(double *)(param_8 + uVar19 * 8);
    uVar14 = 0;
    uVar13 = 0;
    if (uVar12 != 1) {
      do {
        dVar20 = *(double *)(uVar14 * 16000 + param_4 + uVar19 * 8) * param_2 *
                 *(double *)(param_9 + uVar14 * 8) + dVar20;
        *(double *)(param_8 + uVar19 * 8) = dVar20;
        dVar20 = *(double *)((uVar14 | 1) * 16000 + param_4 + uVar19 * 8) * param_2 *
                 *(double *)(param_9 + (uVar14 | 1) * 8) + dVar20;
        *(double *)(param_8 + uVar19 * 8) = dVar20;
        uVar14 = uVar14 + 2;
        uVar13 = uVar13 + 2;
      } while (uVar13 != (param_3 & 0xfffffffe));
    }
    if ((param_3 & 1) != 0) {
      *(double *)(param_8 + uVar19 * 8) =
           *(double *)(uVar14 * 16000 + param_4 + uVar19 * 8) * param_2 *
           *(double *)(param_9 + uVar14 * 8) + dVar20;
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar12);
  if ((int)param_3 < 1) {
    return;
  }
  if (param_3 < 6) {
    uVar19 = 0;
  }
  else if ((param_8 < param_10 + uVar12 * 8) && (param_10 < param_8 + uVar12 * 8)) {
    uVar19 = 0;
  }
  else {
    uVar19 = (ulong)(param_3 & 0xfffffffc);
    uVar14 = 0;
    do {
      pdVar1 = (double *)(param_8 + uVar14 * 8);
      pdVar3 = (double *)(param_8 + 0x10 + uVar14 * 8);
      dVar20 = pdVar3[1];
      pdVar2 = (double *)(param_10 + uVar14 * 8);
      pdVar4 = (double *)(param_10 + 0x10 + uVar14 * 8);
      dVar6 = *pdVar4;
      dVar7 = pdVar4[1];
      *(int (*) [16])(param_8 + uVar14 * 8) =
      uVar14 = uVar14 + 4;
    } while (uVar14 != uVar19);
    if (uVar19 == uVar12) goto LAB_00100482;
  }
  uVar14 = ~uVar19;
  if ((param_3 & 3) != 0) {
    uVar13 = 0;
    do {
      *(double *)(param_8 + uVar19 * 8) =
           *(double *)(param_8 + uVar19 * 8) + *(double *)(param_10 + uVar19 * 8);
      uVar19 = uVar19 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != (uVar12 & 3));
  }
  if (2 < uVar14 + uVar12) {
    do {
      *(double *)(param_8 + uVar19 * 8) =
           *(double *)(param_8 + uVar19 * 8) + *(double *)(param_10 + uVar19 * 8);
      *(double *)(param_8 + 8 + uVar19 * 8) =
           *(double *)(param_8 + 8 + uVar19 * 8) + *(double *)(param_10 + 8 + uVar19 * 8);
      *(double *)(param_8 + 0x10 + uVar19 * 8) =
           *(double *)(param_8 + 0x10 + uVar19 * 8) + *(double *)(param_10 + 0x10 + uVar19 * 8);
      *(double *)(param_8 + 0x18 + uVar19 * 8) =
           *(double *)(param_8 + 0x18 + uVar19 * 8) + *(double *)(param_10 + 0x18 + uVar19 * 8);
      uVar19 = uVar19 + 4;
    } while (uVar19 != uVar12);
  }
LAB_00100482:
  if (0 < (int)param_3) {
    uVar19 = 0;
    do {
      dVar20 = *(double *)(param_7 + uVar19 * 8);
      lVar16 = 0;
      uVar14 = 0;
      if (uVar12 != 1) {
        do {
          lVar15 = uVar19 * 16000 + param_4;
          dVar20 = *(double *)(lVar15 + lVar16 * 8) * param_1 * *(double *)(param_8 + lVar16 * 8) +
                   dVar20;
          *(double *)(param_7 + uVar19 * 8) = dVar20;
          uVar13 = lVar16 * 8 | 8;
          dVar20 = *(double *)(uVar13 + lVar15) * param_1 * *(double *)(param_8 + uVar13) + dVar20;
          *(double *)(param_7 + uVar19 * 8) = dVar20;
          lVar16 = lVar16 + 2;
          uVar14 = uVar14 + 2;
        } while (uVar14 != (param_3 & 0xfffffffe));
      }
      if ((param_3 & 1) != 0) {
        *(double *)(param_7 + uVar19 * 8) =
             *(double *)(uVar19 * 16000 + param_4 + lVar16 * 8) * param_1 *
             *(double *)(param_8 + lVar16 * 8) + dVar20;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar12);
  }
  return;
}
