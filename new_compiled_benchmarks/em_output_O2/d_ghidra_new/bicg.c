
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "bicg.h"
void kernel_bicg(uint param_1,uint param_2,long param_3,void *param_4,long param_5,long param_6,
                long param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (0 < (int)param_1) {
    memset(param_4,0,(ulong)param_1 * 8);
  }
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      *(int8 *)(param_5 + uVar1 * 8) = 0;
      if (0 < (int)param_1) {
        uVar2 = 0;
        do {
          lVar3 = uVar1 * 0x3b60 + param_3;
          *(double *)((long)param_4 + uVar2 * 8) =
               *(double *)(param_7 + uVar1 * 8) * *(double *)(lVar3 + uVar2 * 8) +
               *(double *)((long)param_4 + uVar2 * 8);
          *(double *)(param_5 + uVar1 * 8) =
               *(double *)(lVar3 + uVar2 * 8) * *(double *)(param_6 + uVar2 * 8) +
               *(double *)(param_5 + uVar1 * 8);
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_2);
  }
  return;
}
