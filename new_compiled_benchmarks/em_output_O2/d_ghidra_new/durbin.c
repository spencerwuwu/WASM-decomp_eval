
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
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int auVar9 [16];
  int auVar10 [16];
  double local_3eb8 [2001];
  
  *param_3 = *param_2 ^ 0x8000000000000000;
  if (1 < param_1) {
    dVar7 = (double)(*param_2 ^ 0x8000000000000000);
    uVar4 = 1;
    uVar5 = 0;
    do {
      if (uVar5 == 0) {
        dVar6 = 0.0;
        uVar2 = 0;
      }
      else {
        dVar6 = 0.0;
        uVar2 = 0;
        uVar3 = 0;
        do {
          dVar6 = (double)param_2[(uVar4 - uVar2) + -2] *
                  *(double *)((long)param_3 + (uVar2 * 8 | 8)) +
                  (double)param_2[~uVar2 + uVar4] * (double)param_3[uVar2] + dVar6;
          uVar2 = uVar2 + 2;
          uVar3 = uVar3 + 2;
        } while (uVar3 != (uVar4 & 0x7ffffffffffffffe));
      }
      if ((uVar4 & 1) != 0) {
        dVar6 = dVar6 + (double)param_2[~uVar2 + uVar4] * (double)param_3[uVar2];
      }
      dVar7 = (double)((ulong)(dVar6 + (double)param_2[uVar4]) ^ 0x8000000000000000) / dVar8;
      if (3 < uVar4) {
        uVar2 = uVar4 & 0x7ffffffffffffffc;
        uVar3 = 0;
        do {
          dVar6 = (double)param_3[uVar3 + 2];
          dVar1 = (double)(param_3 + uVar3 + 2)[1];
          auVar10 = shufpd(*(int (*) [16])(param_3 + ~uVar3 + uVar4 + -1),
                           *(int (*) [16])(param_3 + ~uVar3 + uVar4 + -1),1);
          auVar9 = shufpd(*(int (*) [16])(param_3 + ~uVar3 + uVar4 + -3),
                          *(int (*) [16])(param_3 + ~uVar3 + uVar4 + -3),1);
          *(int (*) [16])(local_3eb8 + uVar3) =
          uVar3 = uVar3 + 4;
          if (uVar3 == uVar2) goto joined_r0x001001c2;
        } while( 1 );
      }
      uVar2 = 0;
      do {
        local_3eb8[uVar2] = (double)param_3[~uVar2 + uVar4] * dVar7 + (double)param_3[uVar2];
        uVar2 = uVar2 + 1;
joined_r0x001001c2:
      } while (uVar4 != uVar2);
      memcpy(param_3,local_3eb8,uVar5 * 8 + 8);
      param_3[uVar4] = (ulong)dVar7;
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_1 - 1);
  }
  return;
}
