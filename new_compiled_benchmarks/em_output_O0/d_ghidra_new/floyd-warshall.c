
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "floyd-warshall.h"
void kernel_floyd_warshall(int param_1,long param_2)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
      for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
        if (*(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_20 * 4) <
            *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_24 * 4) +
            *(int *)(param_2 + (long)local_24 * 0x2bc0 + (long)local_20 * 4)) {
          local_28 = *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_20 * 4);
        }
        else {
          local_28 = *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_24 * 4) +
                     *(int *)(param_2 + (long)local_24 * 0x2bc0 + (long)local_20 * 4);
        }
        *(int *)(param_2 + (long)local_1c * 0x2bc0 + (long)local_20 * 4) = local_28;
      }
    }
  }
  return;
}
