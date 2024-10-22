#include "jacobi-2d.h"



void kernel_jacobi_2d(int param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  if (0 < param_1) {
    uVar3 = (ulong)(param_2 - 1);
    iVar5 = 0;
    do {
      uVar6 = 1;
      if (2 < param_2) {
        do {
          uVar1 = uVar6 + 1;
          uVar4 = 1;
          do {
            lVar2 = param_3 + uVar6 * 0x28a0;
            *(double *)(uVar6 * 0x28a0 + param_4 + uVar4 * 8) =
                 (*(double *)(lVar2 + uVar4 * 8) + *(double *)(lVar2 + -8 + uVar4 * 8) +
                  *(double *)(lVar2 + 8 + uVar4 * 8) +
                  *(double *)(uVar1 * 0x28a0 + param_3 + uVar4 * 8) +
                 *(double *)((uVar6 - 1) * 0x28a0 + param_3 + uVar4 * 8)) * 0.2;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar3);
          uVar6 = uVar1;
        } while (uVar1 != uVar3);
      }
      uVar6 = 1;
      if (2 < param_2) {
        do {
          uVar1 = uVar6 + 1;
          uVar4 = 1;
          do {
            lVar2 = param_4 + uVar6 * 0x28a0;
            *(double *)(uVar6 * 0x28a0 + param_3 + uVar4 * 8) =
                 (*(double *)(lVar2 + uVar4 * 8) + *(double *)(lVar2 + -8 + uVar4 * 8) +
                  *(double *)(lVar2 + 8 + uVar4 * 8) +
                  *(double *)(uVar1 * 0x28a0 + param_4 + uVar4 * 8) +
                 *(double *)((uVar6 - 1) * 0x28a0 + param_4 + uVar4 * 8)) * 0.2;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar3);
          uVar6 = uVar1;
        } while (uVar1 != uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  __ptr = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_00 = (void *)polybench_alloc_data(0x19c990,8);
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 0x28a0) =
           ((double)((int)lVar3 + 2) * (double)(int)lVar2 + 2.0) / 1300.0;
      *(double *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x28a0) =
           ((double)((int)lVar3 + 3) * (double)(int)lVar2 + 3.0) / 1300.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x514);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x514);
  iVar1 = 0;
  do {
    lVar2 = 1;
    do {
      lVar3 = lVar2 + 1;
      lVar4 = 1;
      do {
        lVar5 = lVar2 * 0x28a0;
        *(double *)((long)__ptr_00 + lVar4 * 8 + lVar5) =
             (*(double *)((long)__ptr + lVar4 * 8 + lVar5) +
              *(double *)((long)__ptr + lVar4 * 8 + lVar5 + -8) +
              *(double *)((long)__ptr + lVar4 * 8 + lVar5 + 8) +
              *(double *)((long)__ptr + lVar4 * 8 + lVar3 * 0x28a0) +
             *(double *)((long)__ptr + lVar4 * 8 + (lVar2 + -1) * 0x28a0)) * 0.2;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x513);
      lVar4 = 1;
      lVar2 = lVar3;
    } while (lVar3 != 0x513);
    do {
      lVar2 = lVar4 + 1;
      lVar3 = 1;
      do {
        lVar5 = lVar4 * 0x28a0;
        *(double *)((long)__ptr + lVar3 * 8 + lVar5) =
             (*(double *)((long)__ptr_00 + lVar3 * 8 + lVar5) +
              *(double *)((long)__ptr_00 + lVar3 * 8 + lVar5 + -8) +
              *(double *)((long)__ptr_00 + lVar3 * 8 + lVar5 + 8) +
              *(double *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x28a0) +
             *(double *)((long)__ptr_00 + lVar3 * 8 + (lVar4 + -1) * 0x28a0)) * 0.2;
        __stream = _DAT_1043d8d48388b4c;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x513);
      lVar4 = lVar2;
    } while (lVar2 != 0x513);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 500);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1043d8d48388b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar3 = 0;
      do {
        if (((uint)(((int)lVar3 + (int)lVar2 * 0x514) * -0x33333333) >> 2 | (int)lVar3 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar3 * 8 + lVar2 * 0x28a0));
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x514);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x514);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}


