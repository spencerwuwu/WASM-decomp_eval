
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "ludcmp.h"
void kernel_ludcmp(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  int bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  
  uVar2 = (ulong)param_1;
  if (0 < (int)param_1) {
    uVar4 = 0;
    do {
      uVar6 = uVar4;
      if (uVar4 != 0) {
        uVar5 = 0;
        do {
          lVar7 = uVar4 * 16000 + param_2;
          dVar8 = *(double *)(lVar7 + uVar5 * 8);
          if (uVar5 != 0) {
            uVar3 = 0;
            do {
              dVar8 = dVar8 - *(double *)(lVar7 + uVar3 * 8) *
                              *(double *)(uVar3 * 16000 + param_2 + uVar5 * 8);
              uVar3 = uVar3 + 1;
            } while (uVar3 != uVar5);
          }
          *(double *)(lVar7 + uVar5 * 8) = dVar8 / *(double *)(uVar5 * 0x3e88 + param_2);
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
      do {
        lVar7 = uVar4 * 16000 + param_2;
        dVar8 = *(double *)(lVar7 + uVar6 * 8);
        if (uVar4 != 0) {
          uVar5 = 0;
          do {
            dVar8 = dVar8 - *(double *)(lVar7 + uVar5 * 8) *
                            *(double *)(uVar5 * 16000 + param_2 + uVar6 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar4);
        }
        *(double *)(lVar7 + uVar6 * 8) = dVar8;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  if (0 < (int)param_1) {
    uVar4 = 0;
    do {
      dVar8 = *(double *)(param_3 + uVar4 * 8);
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          dVar8 = dVar8 - *(double *)(uVar4 * 16000 + param_2 + uVar6 * 8) *
                          *(double *)(param_5 + uVar6 * 8);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar4);
      }
      *(double *)(param_5 + uVar4 * 8) = dVar8;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  if (0 < (int)param_1) {
    uVar4 = (long)(int)param_1;
    do {
      uVar6 = uVar4 - 1;
      uVar5 = uVar6 & 0xffffffff;
      dVar8 = *(double *)(param_5 + uVar5 * 8);
      if ((long)uVar2 < (long)(int)param_1) {
        do {
          dVar8 = dVar8 - *(double *)(uVar5 * 16000 + param_2 + uVar4 * 8) *
                          *(double *)(param_4 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while ((uint)uVar4 != param_1);
      }
      *(double *)(param_4 + uVar5 * 8) = dVar8 / *(double *)(uVar5 * 0x3e88 + param_2);
      bVar1 = 1 < (long)uVar2;
      uVar2 = uVar2 - 1;
      uVar4 = uVar6;
    } while (bVar1);
  }
  return;
}
