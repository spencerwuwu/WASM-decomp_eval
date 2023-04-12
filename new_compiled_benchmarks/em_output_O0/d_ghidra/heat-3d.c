#include "heat-3d.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  undefined8 uVar2;
  
  __ptr = (void *)polybench_alloc_data(0x1a5e00,8);
  uVar2 = polybench_alloc_data(0x1a5e00,8);
  init_array(0x78,__ptr,uVar2);
  kernel_heat_3d(500,0x78,__ptr,uVar2);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(0x78,__ptr);
    }
  }
  free(__ptr);
  return 0;
}



void init_array(int param_1,long param_2,long param_3)

{
  double dVar1;
  int local_2c;
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
      for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
        dVar1 = ((double)(local_24 + local_28 + (param_1 - local_2c)) * 10.0) / (double)param_1;
        *(double *)
         (param_3 + (long)local_24 * 0x1c200 + (long)local_28 * 0x3c0 + (long)local_2c * 8) = dVar1;
        *(double *)
         (param_2 + (long)local_24 * 0x1c200 + (long)local_28 * 0x3c0 + (long)local_2c * 8) = dVar1;
      }
    }
  }
  return;
}



void kernel_heat_3d(undefined8 param_1,int param_2,long param_3,long param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  for (local_24 = 1; local_24 < 0x1f5; local_24 = local_24 + 1) {
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      for (local_2c = 1; local_2c < param_2 + -1; local_2c = local_2c + 1) {
        for (local_30 = 1; local_30 < param_2 + -1; local_30 = local_30 + 1) {
          dVar1 = *(double *)
                   (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          dVar2 = *(double *)
                   (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          dVar3 = *(double *)
                   (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          *(double *)
           (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8) =
               ((*(double *)
                  (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 +
                  (long)(local_30 + 1) * 8) - (dVar3 + dVar3)) +
               *(double *)
                (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 +
                (long)(local_30 + -1) * 8)) * 0.125 +
               ((*(double *)
                  (param_3 + (long)(local_28 + 1) * 0x1c200 + (long)local_2c * 0x3c0 +
                  (long)local_30 * 8) - (dVar1 + dVar1)) +
               *(double *)
                (param_3 + (long)(local_28 + -1) * 0x1c200 + (long)local_2c * 0x3c0 +
                (long)local_30 * 8)) * 0.125 +
               ((*(double *)
                  (param_3 + (long)local_28 * 0x1c200 + (long)(local_2c + 1) * 0x3c0 +
                  (long)local_30 * 8) - (dVar2 + dVar2)) +
               *(double *)
                (param_3 + (long)local_28 * 0x1c200 + (long)(local_2c + -1) * 0x3c0 +
                (long)local_30 * 8)) * 0.125 +
               *(double *)
                (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8);
        }
      }
    }
    for (local_28 = 1; local_28 < param_2 + -1; local_28 = local_28 + 1) {
      for (local_2c = 1; local_2c < param_2 + -1; local_2c = local_2c + 1) {
        for (local_30 = 1; local_30 < param_2 + -1; local_30 = local_30 + 1) {
          dVar1 = *(double *)
                   (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          dVar2 = *(double *)
                   (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          dVar3 = *(double *)
                   (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8
                   );
          *(double *)
           (param_3 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8) =
               ((*(double *)
                  (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 +
                  (long)(local_30 + 1) * 8) - (dVar3 + dVar3)) +
               *(double *)
                (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 +
                (long)(local_30 + -1) * 8)) * 0.125 +
               ((*(double *)
                  (param_4 + (long)(local_28 + 1) * 0x1c200 + (long)local_2c * 0x3c0 +
                  (long)local_30 * 8) - (dVar1 + dVar1)) +
               *(double *)
                (param_4 + (long)(local_28 + -1) * 0x1c200 + (long)local_2c * 0x3c0 +
                (long)local_30 * 8)) * 0.125 +
               ((*(double *)
                  (param_4 + (long)local_28 * 0x1c200 + (long)(local_2c + 1) * 0x3c0 +
                  (long)local_30 * 8) - (dVar2 + dVar2)) +
               *(double *)
                (param_4 + (long)local_28 * 0x1c200 + (long)(local_2c + -1) * 0x3c0 +
                (long)local_30 * 8)) * 0.125 +
               *(double *)
                (param_4 + (long)local_28 * 0x1c200 + (long)local_2c * 0x3c0 + (long)local_30 * 8);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_169358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


