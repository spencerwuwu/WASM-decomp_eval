#include "symm.h"



void kernel_symm(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6,
                long param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      if (0 < (int)param_4) {
        lVar4 = uVar3 * 8000 + param_6;
        uVar2 = 0;
        do {
          if (uVar3 == 0) {
            dVar6 = 0.0;
          }
          else {
            dVar6 = 0.0;
            uVar5 = 0;
            do {
              lVar1 = param_5 + uVar5 * 0x2580;
              *(double *)(lVar1 + uVar2 * 8) =
                   *(double *)(uVar3 * 0x2580 + param_7 + uVar2 * 8) * param_1 *
                   *(double *)(lVar4 + uVar5 * 8) + *(double *)(lVar1 + uVar2 * 8);
              dVar6 = dVar6 + *(double *)(uVar5 * 0x2580 + param_7 + uVar2 * 8) *
                              *(double *)(lVar4 + uVar5 * 8);
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          lVar1 = param_5 + uVar3 * 0x2580;
          *(double *)(lVar1 + uVar2 * 8) =
               dVar6 * param_1 +
               *(double *)(lVar1 + uVar2 * 8) * param_2 +
               *(double *)(uVar3 * 0x2580 + param_7 + uVar2 * 8) * param_1 *
               *(double *)(lVar4 + uVar3 * 8);
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  ulong uVar1;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __ptr_00 = (void *)polybench_alloc_data(1000000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000);
  lVar2 = 0;
  do {
    lVar5 = 0;
    do {
      *(double *)((long)__ptr + lVar5 * 8 + lVar2 * 0x2580) =
           (double)((uint)((int)lVar5 + (int)lVar2) % 100) / 1000.0;
      *(double *)((long)__ptr_01 + lVar5 * 8 + lVar2 * 0x2580) =
           (double)((uint)(((int)lVar2 + 0x4b0) - (int)lVar5) % 100) / 1000.0;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1000);
  lVar5 = 1;
  lVar2 = 0;
  uVar3 = 0;
  do {
    lVar4 = 0;
    do {
      *(double *)((long)__ptr_00 + lVar4 * 8 + uVar3 * 8000) =
           (double)((uint)((int)lVar4 + (int)uVar3) % 100) / 1000.0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar5);
    uVar1 = uVar3 + 1;
    lVar4 = lVar5;
    if (uVar3 < 999) {
      do {
        *(undefined8 *)((long)__ptr_00 + lVar4 * 8 + uVar3 * 8000) = 0xc08f380000000000;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 1000);
    }
    lVar5 = lVar5 + 1;
    uVar3 = uVar1;
  } while (uVar1 != 1000);
  do {
    lVar5 = 0;
    do {
      if (lVar2 == 0) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = 0.0;
        lVar4 = 0;
        do {
          lVar6 = lVar4 * 0x2580;
          *(double *)((long)__ptr + lVar5 * 8 + lVar6) =
               *(double *)((long)__ptr_01 + lVar5 * 8 + lVar2 * 0x2580) * 1.5 *
               *(double *)((long)__ptr_00 + lVar4 * 8 + lVar2 * 8000) +
               *(double *)((long)__ptr + lVar5 * 8 + lVar6);
          dVar7 = dVar7 + *(double *)((long)__ptr_01 + lVar5 * 8 + lVar6) *
                          *(double *)((long)__ptr_00 + lVar4 * 8 + lVar2 * 8000);
          lVar4 = lVar4 + 1;
        } while (lVar4 != lVar2);
      }
      lVar4 = lVar2 * 0x2580;
      *(double *)((long)__ptr + lVar5 * 8 + lVar4) =
           dVar7 * 1.5 +
           *(double *)((long)__ptr + lVar5 * 8 + lVar4) * 1.2 +
           *(double *)((long)__ptr_01 + lVar5 * 8 + lVar4) * 1.5 *
           *(double *)((long)__ptr_00 + lVar2 * 0x1f48);
      __stream = _DAT_eb3d8d48208b4c;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_eb3d8d48208b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar5 = 0;
      do {
        if (((uint)(((int)lVar5 + (int)lVar2 * 1000) * -0x33333333) >> 2 | (int)lVar5 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar5 * 8 + lVar2 * 0x2580));
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x4b0);
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


