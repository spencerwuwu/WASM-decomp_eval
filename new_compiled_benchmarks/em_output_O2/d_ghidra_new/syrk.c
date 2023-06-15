
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "syrk.h"
void kernel_syrk(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int bVar17;
  double dVar18;
  
  if (0 < (int)param_3) {
    uVar12 = 1;
    uVar13 = 0;
    do {
      uVar14 = uVar13 * 0x2580 + param_5;
      if (3 < uVar12) {
        uVar7 = uVar12 & 0x7ffffffffffffffc;
        uVar15 = 0;
        do {
          pdVar1 = (double *)(uVar14 + uVar15 * 8);
          pdVar2 = (double *)(uVar14 + 0x10 + uVar15 * 8);
          dVar18 = pdVar2[1];
          *(int (*) [16])(uVar14 + uVar15 * 8) =
          *(int (*) [16])(uVar14 + 0x10 + uVar15 * 8) =
          uVar15 = uVar15 + 4;
          if (uVar15 == uVar7) goto joined_r0x001000be;
        } while( 1 );
      }
      uVar7 = 0;
      do {
        *(double *)(uVar14 + uVar7 * 8) = *(double *)(uVar14 + uVar7 * 8) * param_2;
        uVar7 = uVar7 + 1;
joined_r0x001000be:
      } while (uVar12 != uVar7);
      if (0 < (int)param_4) {
        lVar11 = uVar13 * 8000;
        uVar16 = uVar13 * 0x2588 + param_5 + 8;
        uVar7 = uVar12 & 0x7ffffffffffffffc;
        uVar15 = 0;
        do {
          pdVar1 = (double *)(param_6 + lVar11 + uVar15 * 8);
          if (uVar12 < 6) {
LAB_00100250:
            uVar8 = 0;
LAB_00100253:
            uVar9 = uVar8;
            if ((uVar12 & 1) != 0) {
              *(double *)(uVar14 + uVar8 * 8) =
                   *pdVar1 * param_1 * *(double *)(uVar8 * 8000 + param_6 + uVar15 * 8) +
                   *(double *)(uVar14 + uVar8 * 8);
              uVar9 = uVar8 | 1;
            }
            if (uVar13 != uVar8) {
              do {
                lVar10 = uVar9 * 8000 + param_6;
                *(double *)(uVar14 + uVar9 * 8) =
                     *pdVar1 * param_1 * *(double *)(lVar10 + uVar15 * 8) +
                     *(double *)(uVar14 + uVar9 * 8);
                *(double *)(uVar14 + 8 + uVar9 * 8) =
                     *pdVar1 * param_1 * *(double *)(lVar10 + 8000 + uVar15 * 8) +
                     *(double *)(uVar14 + 8 + uVar9 * 8);
                uVar9 = uVar9 + 2;
              } while (uVar9 != uVar12);
            }
          }
          else {
            bVar17 = uVar14 < lVar11 + 8 + uVar15 * 8 + param_6;
            if (bVar17 && param_6 + uVar15 * 8 < uVar16) goto LAB_00100250;
            uVar8 = 0;
            if (bVar17 && lVar11 + uVar15 * 8 + param_6 < uVar16) goto LAB_00100253;
            dVar18 = *pdVar1 * param_1;
            uVar8 = 0;
            do {
              dVar4 = *(double *)((uVar8 | 2) * 8000 + param_6 + uVar15 * 8);
              dVar5 = *(double *)((uVar8 | 3) * 8000 + param_6 + uVar15 * 8);
              pdVar2 = (double *)(uVar14 + uVar8 * 8);
              pdVar3 = (double *)(uVar14 + 0x10 + uVar8 * 8);
              dVar6 = pdVar3[1];
              *(int (*) [16])(uVar14 + uVar8 * 8) =
                            pdVar2[1],
                            *(double *)(uVar8 * 8000 + param_6 + uVar15 * 8) * dVar18 + *pdVar2);
              *(int (*) [16])(uVar14 + 0x10 + uVar8 * 8) =
              uVar8 = uVar8 + 4;
            } while (uVar8 != uVar7);
            uVar8 = uVar7;
            if (uVar12 != uVar7) goto LAB_00100253;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != param_4);
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar13 != param_3);
  }
  return;
}
