
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "atax.h"
void kernel_atax(uint param_1,uint param_2,long param_3,long param_4,void *param_5,long param_6)

{
  void *pvVar1;
  void *pvVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  
  uVar15 = (ulong)param_2;
  if (0 < (int)param_2) {
    memset(param_5,0,uVar15 * 8);
  }
  if (0 < (int)param_1) {
    pvVar1 = (void *)((long)param_5 + uVar15 * 8);
    uVar12 = (ulong)(param_2 & 0xfffffffc);
    uVar14 = 0;
    do {
      *(int8 *)(param_6 + uVar14 * 8) = 0;
      if (0 < (int)param_2) {
        pvVar2 = (void *)(param_3 + uVar14 * 0x41a0);
        dVar16 = 0.0;
        lVar10 = 0;
        uVar11 = 0;
        if (param_2 != 1) {
          do {
            dVar16 = *(double *)((long)pvVar2 + lVar10 * 8) * *(double *)(param_4 + lVar10 * 8) +
                     dVar16;
            *(double *)(param_6 + uVar14 * 8) = dVar16;
            uVar13 = lVar10 * 8 | 8;
            dVar16 = *(double *)(uVar13 + (long)pvVar2) * *(double *)(param_4 + uVar13) + dVar16;
            *(double *)(param_6 + uVar14 * 8) = dVar16;
            lVar10 = lVar10 + 2;
            uVar11 = uVar11 + 2;
          } while (uVar11 != (param_2 & 0xfffffffe));
        }
        if ((param_2 & 1) != 0) {
          *(double *)(param_6 + uVar14 * 8) =
               *(double *)((long)pvVar2 + lVar10 * 8) * *(double *)(param_4 + lVar10 * 8) + dVar16;
        }
        if (0 < (int)param_2) {
          if (param_2 < 8) {
            uVar11 = 0;
          }
          else if (param_5 < (void *)(uVar14 * 0x41a0 + uVar15 * 8 + param_3) && pvVar2 < pvVar1) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            if ((void *)(param_6 + uVar14 * 8 + 8) <= param_5 ||
                pvVar1 <= (void *)(param_6 + uVar14 * 8)) {
              dVar16 = *(double *)(param_6 + uVar14 * 8);
              uVar11 = 0;
              do {
                pdVar3 = (double *)((long)param_5 + uVar11 * 8);
                pdVar4 = (double *)((long)param_5 + uVar11 * 8 + 0x10);
                dVar6 = *pdVar4;
                dVar7 = pdVar4[1];
                pdVar4 = (double *)((long)pvVar2 + uVar11 * 8);
                pdVar5 = (double *)((long)pvVar2 + uVar11 * 8 + 0x10);
                dVar8 = *pdVar5;
                dVar9 = pdVar5[1];
                *(int (*) [16])((long)param_5 + uVar11 * 8) =
                *(int (*) [16])((long)param_5 + uVar11 * 8 + 0x10) =
                uVar11 = uVar11 + 4;
              } while (uVar11 != uVar12);
              uVar11 = uVar12;
              if (uVar12 == uVar15) goto LAB_001002e0;
            }
          }
          uVar13 = uVar11;
          if ((param_2 & 1) != 0) {
            *(double *)((long)param_5 + uVar11 * 8) =
                 *(double *)((long)pvVar2 + uVar11 * 8) * *(double *)(param_6 + uVar14 * 8) +
                 *(double *)((long)param_5 + uVar11 * 8);
            uVar13 = uVar11 | 1;
          }
          if (~uVar11 != -uVar15) {
            do {
              *(double *)((long)param_5 + uVar13 * 8) =
                   *(double *)((long)pvVar2 + uVar13 * 8) * *(double *)(param_6 + uVar14 * 8) +
                   *(double *)((long)param_5 + uVar13 * 8);
              *(double *)((long)param_5 + uVar13 * 8 + 8) =
                   *(double *)((long)pvVar2 + uVar13 * 8 + 8) * *(double *)(param_6 + uVar14 * 8) +
                   *(double *)((long)param_5 + uVar13 * 8 + 8);
              uVar13 = uVar13 + 2;
            } while (uVar13 != uVar15);
          }
        }
      }
LAB_001002e0:
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_1);
  }
  return;
}
