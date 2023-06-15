
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gemm.h"
void kernel_gemm(double param_1,double param_2,uint param_3,uint param_4,uint param_5,long param_6,
                long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  double dVar18;
  
  if (0 < (int)param_3) {
    uVar14 = (ulong)param_4;
    uVar10 = (ulong)(param_4 & 0xfffffffc);
    uVar15 = 0;
    do {
      uVar1 = param_6 + uVar15 * 0x2260;
      if (0 < (int)param_4) {
        uVar12 = 0;
        uVar11 = 0;
        if (3 < param_4) {
          do {
            pdVar5 = (double *)(uVar1 + uVar12 * 8);
            pdVar3 = (double *)(uVar1 + 0x10 + uVar12 * 8);
            dVar18 = pdVar3[1];
            *(int (*) [16])(uVar1 + uVar12 * 8) =
            *(int (*) [16])(uVar1 + 0x10 + uVar12 * 8) =
            uVar12 = uVar12 + 4;
          } while (uVar12 != uVar10);
          uVar11 = uVar10;
          if (uVar10 == uVar14) goto LAB_00100108;
        }
        do {
          *(double *)(uVar1 + uVar11 * 8) = *(double *)(uVar1 + uVar11 * 8) * param_2;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar14);
      }
LAB_00100108:
      if (0 < (int)param_5) {
        lVar16 = uVar15 * 0x2580;
        uVar11 = uVar15 * 0x2260 + param_6 + uVar14 * 8;
        uVar12 = 0;
        do {
          if (0 < (int)param_4) {
            uVar2 = param_8 + uVar12 * 0x2260;
            pdVar3 = (double *)(lVar16 + param_7 + uVar12 * 8);
            if (param_4 < 6) {
              uVar13 = 0;
            }
            else if (uVar1 < lVar16 + 8 + uVar12 * 8 + param_7 &&
                     lVar16 + uVar12 * 8 + param_7 < uVar11) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              if (uVar12 * 0x2260 + uVar14 * 8 + param_8 <= uVar1 || uVar11 <= uVar2) {
                dVar18 = *pdVar3 * param_1;
                uVar13 = 0;
                do {
                  pdVar5 = (double *)(uVar2 + uVar13 * 8);
                  pdVar4 = (double *)(uVar2 + 0x10 + uVar13 * 8);
                  dVar7 = *pdVar4;
                  dVar8 = pdVar4[1];
                  pdVar6 = (double *)(uVar1 + uVar13 * 8);
                  pdVar4 = (double *)(uVar1 + 0x10 + uVar13 * 8);
                  dVar9 = pdVar4[1];
                  *(int (*) [16])(uVar1 + uVar13 * 8) =
                  *(int (*) [16])(uVar1 + 0x10 + uVar13 * 8) =
                  uVar13 = uVar13 + 4;
                } while (uVar13 != uVar10);
                uVar13 = uVar10;
                if (uVar10 == uVar14) goto LAB_00100140;
              }
            }
            uVar17 = uVar13;
            if ((param_4 & 1) != 0) {
              *(double *)(uVar1 + uVar13 * 8) =
                   *pdVar3 * param_1 * *(double *)(uVar2 + uVar13 * 8) +
                   *(double *)(uVar1 + uVar13 * 8);
              uVar17 = uVar13 | 1;
            }
            if (~uVar13 != -uVar14) {
              do {
                *(double *)(uVar1 + uVar17 * 8) =
                     *pdVar3 * param_1 * *(double *)(uVar2 + uVar17 * 8) +
                     *(double *)(uVar1 + uVar17 * 8);
                *(double *)(uVar1 + 8 + uVar17 * 8) =
                     *pdVar3 * param_1 * *(double *)(uVar2 + 8 + uVar17 * 8) +
                     *(double *)(uVar1 + 8 + uVar17 * 8);
                uVar17 = uVar17 + 2;
              } while (uVar17 != uVar14);
            }
          }
LAB_00100140:
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_5);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_3);
  }
  return;
}
