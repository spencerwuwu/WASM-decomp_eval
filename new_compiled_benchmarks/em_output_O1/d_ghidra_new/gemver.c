
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gemver.h"
void kernel_gemver(double param_1,double param_2,uint param_3,long param_4,long param_5,long param_6
                  ,long param_7_00,long param_8_00,long param_7,long param_8,long param_9,
                  long param_10)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  uVar1 = (ulong)param_3;
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      uVar4 = 0;
      do {
        lVar2 = uVar3 * 16000 + param_4;
        *(double *)(lVar2 + uVar4 * 8) =
             *(double *)(param_7_00 + uVar3 * 8) * *(double *)(param_8_00 + uVar4 * 8) +
             *(double *)(param_5 + uVar3 * 8) * *(double *)(param_6 + uVar4 * 8) +
             *(double *)(lVar2 + uVar4 * 8);
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      dVar5 = *(double *)(param_8 + uVar3 * 8);
      uVar4 = 0;
      do {
        dVar5 = dVar5 + *(double *)(uVar4 * 16000 + param_4 + uVar3 * 8) * param_2 *
                        *(double *)(param_9 + uVar4 * 8);
        *(double *)(param_8 + uVar3 * 8) = dVar5;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      *(double *)(param_8 + uVar3 * 8) =
           *(double *)(param_8 + uVar3 * 8) + *(double *)(param_10 + uVar3 * 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      dVar5 = *(double *)(param_7 + uVar3 * 8);
      uVar4 = 0;
      do {
        dVar5 = dVar5 + *(double *)(uVar3 * 16000 + param_4 + uVar4 * 8) * param_1 *
                        *(double *)(param_8 + uVar4 * 8);
        *(double *)(param_7 + uVar3 * 8) = dVar5;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}
