#include "gemm.h"



void kernel_gemm(double param_1,double param_2,uint param_3,uint param_4,uint param_5,long param_6,
                long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (0 < (int)param_3) {
    uVar2 = 0;
    do {
      if (0 < (int)param_4) {
        uVar1 = 0;
        do {
          lVar3 = uVar2 * 0x2260 + param_6;
          *(double *)(lVar3 + uVar1 * 8) = *(double *)(lVar3 + uVar1 * 8) * param_2;
          uVar1 = uVar1 + 1;
        } while (uVar1 != param_4);
      }
      if (0 < (int)param_5) {
        uVar1 = 0;
        do {
          if (0 < (int)param_4) {
            uVar4 = 0;
            do {
              lVar3 = uVar2 * 0x2260 + param_6;
              *(double *)(lVar3 + uVar4 * 8) =
                   *(double *)(uVar2 * 0x2580 + param_7 + uVar1 * 8) * param_1 *
                   *(double *)(uVar1 * 0x2260 + param_8 + uVar4 * 8) +
                   *(double *)(lVar3 + uVar4 * 8);
              uVar4 = uVar4 + 1;
            } while (uVar4 != param_4);
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 != param_5);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_3);
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
  long lVar2;
  long lVar3;
  long lVar4;
  
  __ptr = (void *)polybench_alloc_data(1100000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(0x142440,8);
  lVar2 = 0;
  lVar3 = 0;
  do {
    lVar4 = 0;
    do {
      *(double *)((long)__ptr + lVar4 * 8 + lVar3 * 0x2260) =
           (double)(((int)lVar4 * (int)lVar3 + 1U) % 1000) / 1000.0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x44c);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 1000);
  lVar3 = 0;
  do {
    lVar4 = 0;
    do {
      lVar1 = lVar4 + 1;
      *(double *)((long)__ptr_00 + lVar4 * 8 + lVar2 * 0x2580) =
           (double)((uint)((int)lVar1 * (int)lVar2) % 0x4b0) / 1200.0;
      lVar4 = lVar1;
    } while (lVar1 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1000);
  lVar2 = 0;
  do {
    lVar4 = 0;
    do {
      *(double *)((long)__ptr_01 + lVar4 * 8 + lVar3 * 0x2260) =
           (double)((uint)((int)lVar3 * ((int)lVar4 + 2)) % 0x44c) / 1100.0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x44c);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x4b0);
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 0x2260) =
           *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 0x2260) * 1.2;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x44c);
    lVar3 = 0;
    do {
      lVar4 = 0;
      do {
        *(double *)((long)__ptr + lVar4 * 8 + lVar2 * 0x2260) =
             *(double *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x2580) * 1.5 *
             *(double *)((long)__ptr_01 + lVar4 * 8 + lVar3 * 0x2260) +
             *(double *)((long)__ptr + lVar4 * 8 + lVar2 * 0x2260);
        __stream = _DAT_1073d8d48208b4c;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x44c);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1073d8d48208b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar3 = 0;
      do {
        if (((uint)(((int)lVar3 + (int)lVar2 * 1000) * -0x33333333) >> 2 | (int)lVar3 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar3 * 8 + lVar2 * 0x2260));
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x44c);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


