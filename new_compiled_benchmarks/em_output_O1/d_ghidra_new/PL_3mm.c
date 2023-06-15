
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
  
  uVar4 = (ulong)param_2;
  if (0 < (int)param_1) {
    uVar6 = 0;
    do {
      if (0 < (int)param_2) {
        uVar5 = 0;
        do {
          lVar2 = uVar6 * 0x1c20 + param_6;
          *(int8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_3) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar7 = *pdVar1;
            uVar3 = 0;
            do {
              dVar7 = dVar7 + *(double *)(uVar6 * 8000 + param_7 + uVar3 * 8) *
                              *(double *)(uVar3 * 0x1c20 + param_8 + uVar5 * 8);
              *pdVar1 = dVar7;
              uVar3 = uVar3 + 1;
            } while (uVar3 != param_3);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_1);
  }
  if (0 < (int)param_2) {
    uVar6 = 0;
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar2 = uVar6 * 0x2260 + param_9;
          *(int8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_5) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar7 = *pdVar1;
            uVar3 = 0;
            do {
              dVar7 = dVar7 + *(double *)(uVar6 * 0x2580 + param_10 + uVar3 * 8) *
                              *(double *)(uVar3 * 0x2260 + param_11 + uVar5 * 8);
              *pdVar1 = dVar7;
              uVar3 = uVar3 + 1;
            } while (uVar3 != param_5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4);
  }
  if (0 < (int)param_1) {
    uVar6 = 0;
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar2 = uVar6 * 0x2260 + param_12;
          *(int8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_2) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar7 = *pdVar1;
            uVar3 = 0;
            do {
              dVar7 = dVar7 + *(double *)(uVar6 * 0x1c20 + param_6 + uVar3 * 8) *
                              *(double *)(uVar3 * 0x2260 + param_9 + uVar5 * 8);
              *pdVar1 = dVar7;
              uVar3 = uVar3 + 1;
            } while (uVar3 != uVar4);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_1);
  }
  return;
}
