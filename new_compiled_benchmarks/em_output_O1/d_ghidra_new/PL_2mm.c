
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "PL_2mm.h"
void kernel_2mm(double param_1,double param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               long param_7_00,long param_8_00,long param_7,long param_8,long param_9)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar2 = uVar4 * 0x1c20 + param_7_00;
          *(int8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_5) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar6 = *pdVar1;
            uVar3 = 0;
            do {
              dVar6 = dVar6 + *(double *)(uVar4 * 0x2260 + param_8_00 + uVar3 * 8) * param_1 *
                              *(double *)(uVar3 * 0x1c20 + param_7 + uVar5 * 8);
              *pdVar1 = dVar6;
              uVar3 = uVar3 + 1;
            } while (uVar3 != param_5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_3);
  }
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      if (0 < (int)param_6) {
        uVar5 = 0;
        do {
          lVar2 = uVar4 * 0x2580 + param_9;
          *(double *)(lVar2 + uVar5 * 8) = *(double *)(lVar2 + uVar5 * 8) * param_2;
          if (0 < (int)param_4) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar6 = *pdVar1;
            uVar3 = 0;
            do {
              dVar6 = dVar6 + *(double *)(uVar4 * 0x1c20 + param_7_00 + uVar3 * 8) *
                              *(double *)(uVar3 * 0x2580 + param_8 + uVar5 * 8);
              *pdVar1 = dVar6;
              uVar3 = uVar3 + 1;
            } while (uVar3 != param_4);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_6);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_3);
  }
  return;
}
