
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
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  uVar3 = (ulong)param_2;
  if (0 < (int)param_2) {
    memset(param_5,0,uVar3 * 8);
  }
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      *(int8 *)(param_6 + uVar1 * 8) = 0;
      if (0 < (int)param_2) {
        dVar4 = *(double *)(param_6 + uVar1 * 8);
        uVar2 = 0;
        do {
          dVar4 = dVar4 + *(double *)(uVar1 * 0x41a0 + param_3 + uVar2 * 8) *
                          *(double *)(param_4 + uVar2 * 8);
          *(double *)(param_6 + uVar1 * 8) = dVar4;
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar3);
      }
      if (0 < (int)param_2) {
        uVar2 = 0;
        do {
          *(double *)((long)param_5 + uVar2 * 8) =
               *(double *)(uVar1 * 0x41a0 + param_3 + uVar2 * 8) * *(double *)(param_6 + uVar1 * 8)
               + *(double *)((long)param_5 + uVar2 * 8);
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar3);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  return;
}
