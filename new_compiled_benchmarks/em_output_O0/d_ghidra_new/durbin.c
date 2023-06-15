
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
  int local_3ec8;
  int local_3ec4;
  double local_3ec0;
  double local_3eb8;
  double local_3eb0;
  double adStack_3ea8 [2004];
  
  *param_3 = *param_2 ^ 0x8000000000000000;
  local_3eb8 = 1.0;
  local_3eb0 = (double)(*param_2 ^ 0x8000000000000000);
  for (local_3ec8 = 1; local_3ec8 < param_1; local_3ec8 = local_3ec8 + 1) {
    local_3eb8 = ((double)((ulong)local_3eb0 ^ 0x8000000000000000) * local_3eb0 + 1.0) * local_3eb8;
    local_3ec0 = 0.0;
    for (local_3ec4 = 0; local_3ec4 < local_3ec8; local_3ec4 = local_3ec4 + 1) {
      local_3ec0 = (double)param_2[(local_3ec8 - local_3ec4) + -1] * (double)param_3[local_3ec4] +
                   local_3ec0;
    }
    local_3eb0 = (double)((ulong)((double)param_2[local_3ec8] + local_3ec0) ^ 0x8000000000000000) /
                 local_3eb8;
    for (local_3ec4 = 0; local_3ec4 < local_3ec8; local_3ec4 = local_3ec4 + 1) {
      adStack_3ea8[local_3ec4] =
           local_3eb0 * (double)param_3[(local_3ec8 - local_3ec4) + -1] +
           (double)param_3[local_3ec4];
    }
    for (local_3ec4 = 0; local_3ec4 < local_3ec8; local_3ec4 = local_3ec4 + 1) {
      param_3[local_3ec4] = (ulong)adStack_3ea8[local_3ec4];
    }
    param_3[local_3ec8] = (ulong)local_3eb0;
  }
  return;
}
