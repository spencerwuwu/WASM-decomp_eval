
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "PL_2mm.h"
void kernel_2mm(double param_1,double param_2,int param_3,int param_4,int param_5,int param_6,
               long param_7_00,long param_8_00,long param_7,long param_8,long param_9)

{
  long lVar1;
  int local_44;
  int local_40;
  int local_3c;
  
  for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_4; local_40 = local_40 + 1) {
      *(int8 *)(param_7_00 + (long)local_3c * 0x1c20 + (long)local_40 * 8) = 0;
      for (local_44 = 0; local_44 < param_5; local_44 = local_44 + 1) {
        lVar1 = param_7_00 + (long)local_3c * 0x1c20;
        *(double *)(lVar1 + (long)local_40 * 8) =
             param_1 * *(double *)(param_8_00 + (long)local_3c * 0x2260 + (long)local_44 * 8) *
             *(double *)(param_7 + (long)local_44 * 0x1c20 + (long)local_40 * 8) +
             *(double *)(lVar1 + (long)local_40 * 8);
      }
    }
  }
  for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_6; local_40 = local_40 + 1) {
      lVar1 = param_9 + (long)local_3c * 0x2580;
      *(double *)(lVar1 + (long)local_40 * 8) = param_2 * *(double *)(lVar1 + (long)local_40 * 8);
      for (local_44 = 0; local_44 < param_4; local_44 = local_44 + 1) {
        lVar1 = param_9 + (long)local_3c * 0x2580;
        *(double *)(lVar1 + (long)local_40 * 8) =
             *(double *)(param_7_00 + (long)local_3c * 0x1c20 + (long)local_44 * 8) *
             *(double *)(param_8 + (long)local_44 * 0x2580 + (long)local_40 * 8) +
             *(double *)(lVar1 + (long)local_40 * 8);
      }
    }
  }
  return;
}
