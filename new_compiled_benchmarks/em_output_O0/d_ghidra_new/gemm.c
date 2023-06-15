
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gemm.h"
void kernel_gemm(double param_1,double param_2,int param_3,int param_4,int param_5,long param_6,
                long param_7,long param_8)

{
  long lVar1;
  int local_4c;
  int local_48;
  int local_44;
  
  for (local_44 = 0; local_44 < param_3; local_44 = local_44 + 1) {
    for (local_48 = 0; local_48 < param_4; local_48 = local_48 + 1) {
      lVar1 = param_6 + (long)local_44 * 0x2260;
      *(double *)(lVar1 + (long)local_48 * 8) = param_2 * *(double *)(lVar1 + (long)local_48 * 8);
    }
    for (local_4c = 0; local_4c < param_5; local_4c = local_4c + 1) {
      for (local_48 = 0; local_48 < param_4; local_48 = local_48 + 1) {
        lVar1 = param_6 + (long)local_44 * 0x2260;
        *(double *)(lVar1 + (long)local_48 * 8) =
             param_1 * *(double *)(param_7 + (long)local_44 * 0x2580 + (long)local_4c * 8) *
             *(double *)(param_8 + (long)local_4c * 0x2260 + (long)local_48 * 8) +
             *(double *)(lVar1 + (long)local_48 * 8);
      }
    }
  }
  return;
}
