
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
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_3;
    uVar3 = 0;
    do {
      if (0 < (int)param_2) {
        uVar1 = 0;
        do {
          if (0 < (int)param_3) {
            uVar4 = 0;
            do {
              *(int8 *)(param_6 + uVar4 * 8) = 0;
              dVar6 = 0.0;
              uVar5 = 0;
              do {
                dVar6 = dVar6 + *(double *)(uVar1 * 0x500 + param_4 + uVar3 * 0x2bc00 + uVar5 * 8) *
                                *(double *)(uVar5 * 0x500 + param_5 + uVar4 * 8);
                *(double *)(param_6 + uVar4 * 8) = dVar6;
                uVar5 = uVar5 + 1;
              } while (uVar5 != uVar2);
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
          }
          if (0 < (int)param_3) {
            uVar4 = 0;
            do {
              *(int8 *)(uVar1 * 0x500 + param_4 + uVar3 * 0x2bc00 + uVar4 * 8) =
                   *(int8 *)(param_6 + uVar4 * 8);
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 != param_2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_1);
  }
  return;
}
