
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
  ulong uVar6;
  double dVar7;
  
  if (0 < (int)param_3) {
    uVar6 = 0;
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar2 = uVar6 * 0x1c20 + param_7_00;
          *(int8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_5) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar7 = 0.0;
            uVar4 = 0;
            uVar3 = 0;
            if (param_5 != 1) {
              do {
                lVar2 = uVar6 * 0x2260 + param_8_00;
                dVar7 = *(double *)(lVar2 + uVar4 * 8) * param_1 *
                        *(double *)(uVar4 * 0x1c20 + param_7 + uVar5 * 8) + dVar7;
                *pdVar1 = dVar7;
                dVar7 = *(double *)(lVar2 + (uVar4 | 1) * 8) * param_1 *
                        *(double *)((uVar4 | 1) * 0x1c20 + param_7 + uVar5 * 8) + dVar7;
                *pdVar1 = dVar7;
                uVar4 = uVar4 + 2;
                uVar3 = uVar3 + 2;
              } while (uVar3 != (param_5 & 0xfffffffe));
            }
            if ((param_5 & 1) != 0) {
              *pdVar1 = *(double *)(uVar6 * 0x2260 + param_8_00 + uVar4 * 8) * param_1 *
                        *(double *)(uVar4 * 0x1c20 + param_7 + uVar5 * 8) + dVar7;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_3);
    if (0 < (int)param_3) {
      uVar6 = 0;
      do {
        if (0 < (int)param_6) {
          uVar5 = 0;
          do {
            lVar2 = uVar6 * 0x2580 + param_9;
            dVar7 = *(double *)(lVar2 + uVar5 * 8) * param_2;
            *(double *)(lVar2 + uVar5 * 8) = dVar7;
            if (0 < (int)param_4) {
              pdVar1 = (double *)(lVar2 + uVar5 * 8);
              uVar4 = 0;
              uVar3 = 0;
              if (param_4 != 1) {
                do {
                  lVar2 = uVar6 * 0x1c20 + param_7_00;
                  dVar7 = *(double *)(lVar2 + uVar4 * 8) *
                          *(double *)(uVar4 * 0x2580 + param_8 + uVar5 * 8) + dVar7;
                  *pdVar1 = dVar7;
                  dVar7 = *(double *)(lVar2 + (uVar4 | 1) * 8) *
                          *(double *)((uVar4 | 1) * 0x2580 + param_8 + uVar5 * 8) + dVar7;
                  *pdVar1 = dVar7;
                  uVar4 = uVar4 + 2;
                  uVar3 = uVar3 + 2;
                } while (uVar3 != (param_4 & 0xfffffffe));
              }
              if ((param_4 & 1) != 0) {
                *pdVar1 = *(double *)(uVar6 * 0x1c20 + param_7_00 + uVar4 * 8) *
                          *(double *)(uVar4 * 0x2580 + param_8 + uVar5 * 8) + dVar7;
              }
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != param_6);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != param_3);
    }
  }
  return;
}
