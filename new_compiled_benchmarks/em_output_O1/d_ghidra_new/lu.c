
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "lu.h"
void kernel_lu(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      uVar3 = uVar1;
      if (uVar1 != 0) {
        uVar2 = 0;
        do {
          if (uVar2 != 0) {
            lVar4 = uVar1 * 16000 + param_2;
            dVar6 = *(double *)(lVar4 + uVar2 * 8);
            uVar5 = 0;
            do {
              dVar6 = dVar6 - *(double *)(lVar4 + uVar5 * 8) *
                              *(double *)(uVar5 * 16000 + param_2 + uVar2 * 8);
              *(double *)(lVar4 + uVar2 * 8) = dVar6;
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar2);
          }
          lVar4 = uVar1 * 16000 + param_2;
          *(double *)(lVar4 + uVar2 * 8) =
               *(double *)(lVar4 + uVar2 * 8) / *(double *)(uVar2 * 0x3e88 + param_2);
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar1);
      }
      do {
        if (uVar1 != 0) {
          lVar4 = uVar1 * 16000 + param_2;
          dVar6 = *(double *)(lVar4 + uVar3 * 8);
          uVar2 = 0;
          do {
            dVar6 = dVar6 - *(double *)(lVar4 + uVar2 * 8) *
                            *(double *)(uVar2 * 16000 + param_2 + uVar3 * 8);
            *(double *)(lVar4 + uVar3 * 8) = dVar6;
            uVar2 = uVar2 + 1;
          } while (uVar2 != uVar1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  return;
}
