
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "syr2k.h"
void kernel_syr2k(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6,
                 long param_7)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int bVar16;
  int bVar17;
  
  if (0 < (int)param_3) {
    uVar12 = 1;
    uVar7 = 0;
    do {
      uVar10 = uVar7 * 0x2580 + param_5;
      if (3 < uVar12) {
        uVar8 = uVar12 & 0x7ffffffffffffffc;
        uVar11 = 0;
        do {
          pdVar1 = (double *)(uVar10 + uVar11 * 8);
          pdVar2 = (double *)(uVar10 + 0x10 + uVar11 * 8);
          dVar5 = pdVar2[1];
          *(int (*) [16])(uVar10 + uVar11 * 8) =
          *(int (*) [16])(uVar10 + 0x10 + uVar11 * 8) =
          uVar11 = uVar11 + 4;
          if (uVar11 == uVar8) goto joined_r0x001000da;
        } while( 1 );
      }
      uVar8 = 0;
      do {
        *(double *)(uVar10 + uVar8 * 8) = *(double *)(uVar10 + uVar8 * 8) * param_2;
        uVar8 = uVar8 + 1;
joined_r0x001000da:
      } while (uVar12 != uVar8);
      if (0 < (int)param_4) {
        lVar13 = uVar7 * 8000;
        uVar8 = uVar7 * 0x2588 + param_5 + 8;
        uVar11 = 0;
        do {
          pdVar1 = (double *)(param_7 + lVar13 + uVar11 * 8);
          pdVar2 = (double *)(param_6 + lVar13 + uVar11 * 8);
          if (uVar12 < 8) {
            uVar14 = 0;
          }
          else {
            lVar9 = lVar13 + uVar11 * 8;
            lVar3 = lVar13 + 8 + uVar11 * 8;
            bVar16 = uVar10 < (ulong)(lVar3 + param_6);
            bVar17 = uVar10 < (ulong)(param_7 + lVar3);
            if (((bVar16 && (ulong)(lVar9 + param_6) < uVar8) ||
                (bVar16 && param_6 + uVar11 * 8 < uVar8)) ||
               (param_7 + uVar11 * 8 < uVar8 && bVar17)) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              if (!bVar17 || uVar8 <= (ulong)(param_7 + lVar9)) {
                dVar5 = *pdVar1;
                dVar6 = *pdVar2;
                uVar15 = 0;
                do {
                  lVar9 = (uVar15 | 1) * 8000;
                  pdVar4 = (double *)(uVar10 + uVar15 * 8);
                  *(int (*) [16])(uVar10 + uVar15 * 8) =
                                *(double *)(lVar9 + param_7 + uVar11 * 8) * param_1 * dVar6 +
                                *(double *)(param_6 + lVar9 + uVar11 * 8) * param_1 * dVar5,
                                *pdVar4 + *(double *)(uVar15 * 8000 + param_7 + uVar11 * 8) *
                                          param_1 * dVar6 +
                                          *(double *)(param_6 + uVar15 * 8000 + uVar11 * 8) *
                                          param_1 * dVar5);
                  uVar15 = uVar15 + 2;
                  uVar14 = uVar12 & 0x7ffffffffffffffe;
                  if (uVar15 == (uVar12 & 0x7ffffffffffffffe)) goto joined_r0x0010028c;
                } while( 1 );
              }
            }
          }
          do {
            *(double *)(uVar10 + uVar14 * 8) =
                 *(double *)(param_6 + uVar14 * 8000 + uVar11 * 8) * param_1 * *pdVar1 +
                 *(double *)(uVar14 * 8000 + param_7 + uVar11 * 8) * param_1 * *pdVar2 +
                 *(double *)(uVar10 + uVar14 * 8);
            uVar14 = uVar14 + 1;
joined_r0x0010028c:
          } while (uVar12 != uVar14);
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_4);
      }
      uVar7 = uVar7 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar7 != param_3);
  }
  return;
}
