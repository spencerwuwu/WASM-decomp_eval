
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "durbin.h"
void kernel_durbin(int param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_3eb8 [2001];
  
  *param_3 = *param_2 ^ 0x8000000000000000;
  if (1 < param_1) {
    dVar4 = (double)(*param_2 ^ 0x8000000000000000);
    dVar6 = 1.0;
    uVar3 = 1;
    uVar2 = 0;
    do {
      dVar5 = 0.0;
      uVar1 = 0;
      do {
        dVar5 = dVar5 + (double)param_2[~uVar1 + uVar3] * (double)param_3[uVar1];
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar3);
      dVar6 = dVar6 * (1.0 - dVar4 * dVar4);
      dVar4 = (double)((ulong)(dVar5 + (double)param_2[uVar3]) ^ 0x8000000000000000) / dVar6;
      uVar1 = 0;
      do {
        local_3eb8[uVar1] = (double)param_3[~uVar1 + uVar3] * dVar4 + (double)param_3[uVar1];
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar3);
      memcpy(param_3,local_3eb8,uVar2 * 8 + 8);
      param_3[uVar3] = (ulong)dVar4;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1 - 1);
  }
  return;
}
