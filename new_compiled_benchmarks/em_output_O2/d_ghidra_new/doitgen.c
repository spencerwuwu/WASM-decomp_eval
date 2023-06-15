
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "doitgen.h"
void kernel_doitgen(uint param_1,uint param_2,uint param_3,long param_4,long param_5,long param_6)

{
  int8 *puVar1;
  int8 *puVar2;
  int *puVar3;
  int8 uVar4;
  int uVar5;
  int uVar6;
  int uVar7;
  int uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  double dVar18;
  ulong local_60;
  
  if (0 < (int)param_1) {
    uVar14 = (ulong)param_3;
    uVar10 = (ulong)(param_3 & 0xfffffffc);
    local_60 = 0;
    do {
      if (0 < (int)param_2) {
        lVar15 = local_60 * 0x2bc00;
        uVar11 = 0;
        do {
          if (0 < (int)param_3) {
            lVar9 = uVar11 * 0x500;
            uVar12 = 0;
            do {
              *(int8 *)(param_6 + uVar12 * 8) = 0;
              dVar18 = 0.0;
              uVar16 = 0;
              uVar13 = 0;
              if (param_3 != 1) {
                do {
                  lVar17 = param_4 + lVar9 + lVar15;
                  dVar18 = *(double *)(lVar17 + uVar16 * 8) *
                           *(double *)(uVar16 * 0x500 + param_5 + uVar12 * 8) + dVar18;
                  *(double *)(param_6 + uVar12 * 8) = dVar18;
                  dVar18 = *(double *)(lVar17 + (uVar16 | 1) * 8) *
                           *(double *)((uVar16 | 1) * 0x500 + param_5 + uVar12 * 8) + dVar18;
                  *(double *)(param_6 + uVar12 * 8) = dVar18;
                  uVar16 = uVar16 + 2;
                  uVar13 = uVar13 + 2;
                } while (uVar13 != (param_3 & 0xfffffffe));
              }
              if ((param_3 & 1) != 0) {
                *(double *)(param_6 + uVar12 * 8) =
                     *(double *)(param_4 + lVar9 + lVar15 + uVar16 * 8) *
                     *(double *)(uVar16 * 0x500 + param_5 + uVar12 * 8) + dVar18;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar14);
            if (0 < (int)param_3) {
              if (param_3 < 6) {
                uVar12 = 0;
              }
              else {
                uVar13 = 0;
                uVar12 = 0;
                if (0x1f < (ulong)((lVar15 + param_4 + lVar9) - param_6)) {
                  do {
                    puVar1 = (int8 *)(param_6 + uVar13 * 8);
                    uVar4 = puVar1[1];
                    puVar3 = (int *)(param_6 + 0x10 + uVar13 * 8);
                    uVar5 = *puVar3;
                    uVar6 = puVar3[1];
                    uVar7 = puVar3[2];
                    uVar8 = puVar3[3];
                    lVar17 = param_4 + lVar9 + lVar15;
                    puVar2 = (int8 *)(lVar17 + uVar13 * 8);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar4;
                    puVar3 = (int *)(lVar17 + 0x10 + uVar13 * 8);
                    *puVar3 = uVar5;
                    puVar3[1] = uVar6;
                    puVar3[2] = uVar7;
                    puVar3[3] = uVar8;
                    uVar13 = uVar13 + 4;
                  } while (uVar13 != uVar10);
                  uVar12 = uVar10;
                  if (uVar10 == uVar14) goto LAB_00100090;
                }
              }
              uVar13 = ~uVar12;
              if ((ulong)(param_3 & 3) != 0) {
                uVar16 = 0;
                do {
                  *(int8 *)(param_4 + lVar9 + lVar15 + uVar12 * 8) =
                       *(int8 *)(param_6 + uVar12 * 8);
                  uVar12 = uVar12 + 1;
                  uVar16 = uVar16 + 1;
                } while (uVar16 != (param_3 & 3));
              }
              if (2 < uVar13 + uVar14) {
                do {
                  lVar17 = param_4 + lVar9 + lVar15;
                  *(int8 *)(lVar17 + uVar12 * 8) = *(int8 *)(param_6 + uVar12 * 8);
                  *(int8 *)(lVar17 + 8 + uVar12 * 8) =
                       *(int8 *)(param_6 + 8 + uVar12 * 8);
                  *(int8 *)(lVar17 + 0x10 + uVar12 * 8) =
                       *(int8 *)(param_6 + 0x10 + uVar12 * 8);
                  *(int8 *)(lVar17 + 0x18 + uVar12 * 8) =
                       *(int8 *)(param_6 + 0x18 + uVar12 * 8);
                  uVar12 = uVar12 + 4;
                } while (uVar12 != uVar14);
              }
            }
          }
LAB_00100090:
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_2);
      }
      local_60 = local_60 + 1;
    } while (local_60 != param_1);
  }
  return;
}
