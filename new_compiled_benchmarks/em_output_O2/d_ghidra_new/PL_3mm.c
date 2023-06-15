
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "PL_3mm.h"
void kernel_3mm(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
               long param_7,long param_8,long param_9,long param_10,long param_11,long param_12)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  if (0 < (int)param_1) {
    uVar5 = 0;
    do {
      if (0 < (int)param_2) {
        uVar6 = 0;
        do {
          lVar2 = uVar5 * 0x1c20 + param_6;
          *(int8 *)(lVar2 + uVar6 * 8) = 0;
          if (0 < (int)param_3) {
            pdVar1 = (double *)(lVar2 + uVar6 * 8);
            dVar7 = 0.0;
            uVar3 = 0;
            uVar4 = 0;
            if (param_3 != 1) {
              do {
                lVar2 = uVar5 * 8000 + param_7;
                dVar7 = *(double *)(lVar2 + uVar3 * 8) *
                        *(double *)(uVar3 * 0x1c20 + param_8 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                dVar7 = *(double *)(lVar2 + (uVar3 | 1) * 8) *
                        *(double *)((uVar3 | 1) * 0x1c20 + param_8 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                uVar3 = uVar3 + 2;
                uVar4 = uVar4 + 2;
              } while (uVar4 != (param_3 & 0xfffffffe));
            }
            if ((param_3 & 1) != 0) {
              *pdVar1 = *(double *)(uVar5 * 8000 + param_7 + uVar3 * 8) *
                        *(double *)(uVar3 * 0x1c20 + param_8 + uVar6 * 8) + dVar7;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_1);
  }
  if (0 < (int)param_2) {
    uVar5 = 0;
    do {
      if (0 < (int)param_4) {
        uVar6 = 0;
        do {
          lVar2 = uVar5 * 0x2260 + param_9;
          *(int8 *)(lVar2 + uVar6 * 8) = 0;
          if (0 < (int)param_5) {
            pdVar1 = (double *)(lVar2 + uVar6 * 8);
            dVar7 = 0.0;
            uVar4 = 0;
            uVar3 = 0;
            if (param_5 != 1) {
              do {
                lVar2 = uVar5 * 0x2580 + param_10;
                dVar7 = *(double *)(lVar2 + uVar4 * 8) *
                        *(double *)(uVar4 * 0x2260 + param_11 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                dVar7 = *(double *)(lVar2 + (uVar4 | 1) * 8) *
                        *(double *)((uVar4 | 1) * 0x2260 + param_11 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                uVar4 = uVar4 + 2;
                uVar3 = uVar3 + 2;
              } while (uVar3 != (param_5 & 0xfffffffe));
            }
            if ((param_5 & 1) != 0) {
              *pdVar1 = *(double *)(uVar5 * 0x2580 + param_10 + uVar4 * 8) *
                        *(double *)(uVar4 * 0x2260 + param_11 + uVar6 * 8) + dVar7;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_2);
  }
  if (0 < (int)param_1) {
    uVar5 = 0;
    do {
      if (0 < (int)param_4) {
        uVar6 = 0;
        do {
          lVar2 = uVar5 * 0x2260 + param_12;
          *(int8 *)(lVar2 + uVar6 * 8) = 0;
          if (0 < (int)param_2) {
            pdVar1 = (double *)(lVar2 + uVar6 * 8);
            dVar7 = 0.0;
            uVar3 = 0;
            uVar4 = 0;
            if (param_2 != 1) {
              do {
                lVar2 = uVar5 * 0x1c20 + param_6;
                dVar7 = *(double *)(lVar2 + uVar3 * 8) *
                        *(double *)(uVar3 * 0x2260 + param_9 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                dVar7 = *(double *)(lVar2 + (uVar3 | 1) * 8) *
                        *(double *)((uVar3 | 1) * 0x2260 + param_9 + uVar6 * 8) + dVar7;
                *pdVar1 = dVar7;
                uVar3 = uVar3 + 2;
                uVar4 = uVar4 + 2;
              } while (uVar4 != (param_2 & 0xfffffffe));
            }
            if ((param_2 & 1) != 0) {
              *pdVar1 = *(double *)(uVar5 * 0x1c20 + param_6 + uVar3 * 8) *
                        *(double *)(uVar3 * 0x2260 + param_9 + uVar6 * 8) + dVar7;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_1);
  }
  return;
}
