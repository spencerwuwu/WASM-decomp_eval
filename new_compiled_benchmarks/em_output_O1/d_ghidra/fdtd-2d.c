#include "fdtd-2d.h"



void kernel_fdtd_2d(uint param_1,uint param_2,uint param_3,long param_4,long param_5,long param_6,
                   long param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (0 < (int)param_1) {
    uVar3 = (ulong)param_3;
    uVar6 = 0;
    do {
      if (0 < (int)param_3) {
        uVar4 = 0;
        do {
          *(undefined8 *)(param_5 + uVar4 * 8) = *(undefined8 *)(param_7 + uVar6 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar3);
      }
      uVar4 = 1;
      if (1 < (int)param_2) {
        do {
          if (0 < (int)param_3) {
            uVar5 = 0;
            do {
              lVar2 = param_5 + uVar4 * 0x2580;
              *(double *)(lVar2 + uVar5 * 8) =
                   (*(double *)(uVar4 * 0x2580 + param_6 + uVar5 * 8) -
                   *(double *)((uVar4 - 1) * 0x2580 + param_6 + uVar5 * 8)) * -0.5 +
                   *(double *)(lVar2 + uVar5 * 8);
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_2);
      }
      if (0 < (int)param_2) {
        uVar4 = 0;
        do {
          uVar5 = 1;
          if (1 < (int)param_3) {
            do {
              lVar2 = param_4 + uVar4 * 0x2580;
              lVar1 = uVar4 * 0x2580 + param_6;
              *(double *)(lVar2 + uVar5 * 8) =
                   (*(double *)(lVar1 + uVar5 * 8) - *(double *)(lVar1 + -8 + uVar5 * 8)) * -0.5 +
                   *(double *)(lVar2 + uVar5 * 8);
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_2);
      }
      if (1 < (int)param_2) {
        uVar4 = 0;
        do {
          if (1 < (int)param_3) {
            uVar5 = 0;
            do {
              lVar2 = uVar4 * 0x2580;
              *(double *)(param_6 + lVar2 + uVar5 * 8) =
                   (((*(double *)(param_4 + lVar2 + 8 + uVar5 * 8) -
                     *(double *)(param_4 + lVar2 + uVar5 * 8)) +
                    *(double *)((uVar4 + 1) * 0x2580 + param_5 + uVar5 * 8)) -
                   *(double *)(lVar2 + param_5 + uVar5 * 8)) * -0.7 +
                   *(double *)(param_6 + lVar2 + uVar5 * 8);
              uVar5 = uVar5 + 1;
            } while (uVar5 != param_3 - 1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_2 - 1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  __ptr_02 = (void *)polybench_alloc_data(500,8);
  lVar2 = 0;
  lVar3 = 0;
  do {
    *(double *)((long)__ptr_02 + lVar3 * 8) = (double)(int)lVar3;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 500);
  do {
    dVar5 = (double)(int)lVar2;
    lVar3 = 0;
    do {
      lVar1 = lVar3 + 1;
      lVar4 = lVar2 * 0x2580;
      *(double *)((long)__ptr + lVar3 * 8 + lVar4) = ((double)(int)lVar1 * dVar5) / 1000.0;
      *(double *)((long)__ptr_00 + lVar3 * 8 + lVar4) = ((double)((int)lVar3 + 2) * dVar5) / 1200.0;
      *(double *)((long)__ptr_01 + lVar3 * 8 + lVar4) = ((double)((int)lVar3 + 3) * dVar5) / 1000.0;
      lVar3 = lVar1;
    } while (lVar1 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1000);
  kernel_fdtd_2d(500,1000,0x4b0,__ptr,__ptr_00,__ptr_01,__ptr_02);
  __stream = _DAT_25b3d8d48288b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_25b3d8d48288b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar3 = 0;
      do {
        if (((uint)(((int)lVar3 + (int)lVar2 * 1000) * -0x33333333) >> 2 | (int)lVar3 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar3 * 8 + lVar2 * 0x2580));
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    lVar2 = 0;
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
    fprintf(__stream,"begin dump: %s",&_L_str_8);
    do {
      lVar3 = 0;
      do {
        if (((uint)(((int)lVar3 + (int)lVar2 * 1000) * -0x33333333) >> 2 | (int)lVar3 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x2580));
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    lVar2 = 0;
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_8);
    fprintf(__stream,"begin dump: %s",&_L_str_9);
    do {
      lVar3 = 0;
      do {
        if (((uint)(((int)lVar3 + (int)lVar2 * 1000) * -0x33333333) >> 2 | (int)lVar3 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar3 * 8 + lVar2 * 0x2580));
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_9);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


