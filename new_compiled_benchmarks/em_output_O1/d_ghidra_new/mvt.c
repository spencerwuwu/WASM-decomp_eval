
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "mvt.h"
void kernel_mvt(uint param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  uVar1 = (ulong)param_1;
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      dVar4 = *(double *)(param_2 + uVar2 * 8);
      uVar3 = 0;
      do {
        dVar4 = dVar4 + *(double *)(uVar2 * 16000 + param_6 + uVar3 * 8) *
                        *(double *)(param_4 + uVar3 * 8);
        *(double *)(param_2 + uVar2 * 8) = dVar4;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar1);
  }
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      dVar4 = *(double *)(param_3 + uVar2 * 8);
      uVar3 = 0;
      do {
        dVar4 = dVar4 + *(double *)(uVar3 * 16000 + param_6 + uVar2 * 8) *
                        *(double *)(param_5 + uVar3 * 8);
        *(double *)(param_3 + uVar2 * 8) = dVar4;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar1);
  }
  return;
}
