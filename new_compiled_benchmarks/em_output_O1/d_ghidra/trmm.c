#include "trmm.h"



void kernel_trmm(double param_1,uint param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_2) {
    uVar2 = 1;
    uVar3 = 0;
    do {
      if (0 < (int)param_3) {
        uVar1 = 0;
        do {
          if ((long)(uVar3 + 1) < (long)(int)param_2) {
            lVar4 = uVar3 * 0x2580 + param_5;
            dVar6 = *(double *)(lVar4 + uVar1 * 8);
            uVar5 = uVar2;
            do {
              dVar6 = dVar6 + *(double *)(uVar5 * 8000 + param_4 + uVar3 * 8) *
                              *(double *)(uVar5 * 0x2580 + param_5 + uVar1 * 8);
              *(double *)(lVar4 + uVar1 * 8) = dVar6;
              uVar5 = uVar5 + 1;
            } while (uVar5 != param_2);
          }
          lVar4 = uVar3 * 0x2580 + param_5;
          *(double *)(lVar4 + uVar1 * 8) = *(double *)(lVar4 + uVar1 * 8) * param_1;
          uVar1 = uVar1 + 1;
        } while (uVar1 != param_3);
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar3 != param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(1000000,8);
  __ptr_00 = (void *)polybench_alloc_data();
  uVar1 = 0;
  lVar2 = 0;
  do {
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 8000) =
             (double)((uint)((int)lVar3 + (int)lVar2) % 1000) / 1000.0;
        lVar3 = lVar3 + 1;
      } while (lVar3 != lVar2);
    }
    *(undefined8 *)(lVar2 * 0x1f48 + (long)__ptr) = 0x3ff0000000000000;
    lVar3 = 0;
    do {
      *(double *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x2580) =
           (double)((uint)(((int)lVar2 + 0x4b0) - (int)lVar3) % 0x4b0) / 1200.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1000);
  lVar2 = 1;
  do {
    lVar3 = 0;
    do {
      if (uVar1 < 999) {
        dVar5 = *(double *)((long)__ptr_00 + lVar3 * 8 + uVar1 * 0x2580);
        lVar4 = lVar2;
        do {
          dVar5 = dVar5 + *(double *)((long)__ptr + uVar1 * 8 + lVar4 * 8000) *
                          *(double *)((long)__ptr_00 + lVar3 * 8 + lVar4 * 0x2580);
          *(double *)((long)__ptr_00 + lVar3 * 8 + uVar1 * 0x2580) = dVar5;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 1000);
      }
      *(double *)((long)__ptr_00 + lVar3 * 8 + uVar1 * 0x2580) =
           *(double *)((long)__ptr_00 + lVar3 * 8 + uVar1 * 0x2580) * 1.5;
      __stream = _DAT_f03d8d48388b4c;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 1;
  } while (uVar1 != 1000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_f03d8d48388b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
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
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}


