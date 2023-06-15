
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "jacobi-1d.h"
void kernel_jacobi_1d(int param_1,uint param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  
  if (0 < param_1) {
    uVar11 = (ulong)(param_2 - 1);
    uVar1 = uVar11 - 1;
    uVar12 = uVar1 & 0xfffffffffffffffc;
    iVar15 = 0;
    do {
      if (2 < (int)param_2) {
        uVar16 = 1;
        if (uVar1 < 4 || param_3 < param_4 + uVar11 * 8 && param_4 + 8 < param_3 + uVar11 * 8 + 8) {
LAB_00100134:
          uVar13 = uVar16;
          if ((param_2 & 1) != 0) {
            pdVar2 = (double *)((param_3 - 8) + uVar16 * 8);
            uVar13 = uVar16 + 1;
            *(double *)(param_4 + uVar16 * 8) =
                 (pdVar2[1] + *pdVar2 + *(double *)(param_3 + 8 + uVar16 * 8)) * 0.33333;
          }
          if (~uVar16 != -uVar11) {
            do {
              pdVar2 = (double *)((param_3 - 8) + uVar13 * 8);
              *(double *)(param_4 + uVar13 * 8) =
                   (pdVar2[1] + *pdVar2 + *(double *)(param_3 + 8 + uVar13 * 8)) * 0.33333;
              pdVar2 = (double *)(param_3 + uVar13 * 8);
              *(double *)(param_4 + 8 + uVar13 * 8) =
                   (pdVar2[1] + *pdVar2 + *(double *)(param_3 + 0x10 + uVar13 * 8)) * 0.33333;
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar11);
          }
        }
        else {
          uVar16 = 0;
          do {
            pdVar2 = (double *)(param_3 + uVar16 * 8);
            pdVar3 = (double *)(param_3 + 0x10 + uVar16 * 8);
            dVar5 = *pdVar3;
            dVar6 = pdVar3[1];
            uVar14 = uVar16 * 8 | 8;
            pdVar3 = (double *)(param_3 + 0x10 + uVar14);
            dVar7 = *pdVar3;
            dVar8 = pdVar3[1];
            uVar13 = uVar16 * 8 | 0x10;
            pdVar3 = (double *)(param_3 + uVar13);
            pdVar4 = (double *)(param_3 + 0x10 + uVar13);
            dVar9 = *pdVar4;
            dVar10 = pdVar4[1];
            *(int (*) [16])(param_4 + uVar14) =
                          (*pdVar3 + *(double *)(param_3 + uVar14) + *pdVar2) * 0.33333);
            *(int (*) [16])(param_4 + 0x10 + uVar14) =
            uVar16 = uVar16 + 4;
          } while (uVar16 != uVar12);
          uVar16 = uVar12 + 1;
          if (uVar1 != uVar12) goto LAB_00100134;
        }
        if (2 < (int)param_2) {
          uVar16 = 1;
          if (3 < uVar1 &&
              (param_4 + uVar11 * 8 + 8 <= param_3 + 8 || param_3 + uVar11 * 8 <= param_4)) {
            uVar16 = 0;
            do {
              pdVar2 = (double *)(param_4 + uVar16 * 8);
              pdVar3 = (double *)(param_4 + 0x10 + uVar16 * 8);
              dVar5 = *pdVar3;
              dVar6 = pdVar3[1];
              uVar14 = uVar16 * 8 | 8;
              pdVar3 = (double *)(param_4 + 0x10 + uVar14);
              dVar7 = *pdVar3;
              dVar8 = pdVar3[1];
              uVar13 = uVar16 * 8 | 0x10;
              pdVar3 = (double *)(param_4 + uVar13);
              pdVar4 = (double *)(param_4 + 0x10 + uVar13);
              dVar9 = *pdVar4;
              dVar10 = pdVar4[1];
              *(int (*) [16])(param_3 + uVar14) =
                            (*pdVar3 + *(double *)(param_4 + uVar14) + *pdVar2) * 0.33333);
              *(int (*) [16])(param_3 + 0x10 + uVar14) =
              uVar16 = uVar16 + 4;
            } while (uVar16 != uVar12);
            uVar16 = uVar12 + 1;
            if (uVar1 == uVar12) goto LAB_00100090;
          }
          uVar13 = uVar16;
          if ((param_2 & 1) != 0) {
            pdVar2 = (double *)((param_4 - 8) + uVar16 * 8);
            uVar13 = uVar16 + 1;
            *(double *)(param_3 + uVar16 * 8) =
                 (pdVar2[1] + *pdVar2 + *(double *)(param_4 + 8 + uVar16 * 8)) * 0.33333;
          }
          if (~uVar16 != -uVar11) {
            do {
              pdVar2 = (double *)((param_4 - 8) + uVar13 * 8);
              *(double *)(param_3 + uVar13 * 8) =
                   (pdVar2[1] + *pdVar2 + *(double *)(param_4 + 8 + uVar13 * 8)) * 0.33333;
              pdVar2 = (double *)(param_4 + uVar13 * 8);
              *(double *)(param_3 + 8 + uVar13 * 8) =
                   (pdVar2[1] + *pdVar2 + *(double *)(param_4 + 0x10 + uVar13 * 8)) * 0.33333;
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar11);
          }
        }
      }
LAB_00100090:
      iVar15 = iVar15 + 1;
    } while (iVar15 != param_1);
  }
  return;
}
