#include "correlation.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  __ptr_02 = (void *)polybench_alloc_data(0x4b0,8);
  lVar1 = 0;
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 0x2580) =
           (double)((int)lVar3 * (int)lVar2) / 1200.0 + (double)(int)lVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x578);
  lVar2 = 0;
  do {
    *(undefined8 *)((long)__ptr_01 + lVar1 * 8) = 0;
    dVar5 = 0.0;
    lVar3 = 0;
    do {
      dVar5 = dVar5 + *(double *)((long)__ptr + lVar1 * 8 + lVar3 * 0x2580);
      *(double *)((long)__ptr_01 + lVar1 * 8) = dVar5;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x578);
    *(double *)((long)__ptr_01 + lVar1 * 8) = dVar5 / 1400.0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x4b0);
  lVar1 = 0;
  do {
    *(undefined8 *)((long)__ptr_02 + lVar2 * 8) = 0;
    lVar3 = 0;
    do {
      dVar5 = *(double *)((long)__ptr + lVar2 * 8 + lVar3 * 0x2580) -
              *(double *)((long)__ptr_01 + lVar2 * 8);
      dVar5 = dVar5 * dVar5 + *(double *)((long)__ptr_02 + lVar2 * 8);
      *(double *)((long)__ptr_02 + lVar2 * 8) = dVar5;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x578);
    dVar5 = dVar5 / 1400.0;
    if (dVar5 < 0.0) {
      dVar5 = sqrt(dVar5);
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    *(ulong *)((long)__ptr_02 + lVar2 * 8) =
         ~-(ulong)(0.1 < dVar5) | (ulong)dVar5 & -(ulong)(0.1 < dVar5);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x4b0);
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      dVar5 = *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 0x2580) -
              *(double *)((long)__ptr_01 + lVar3 * 8);
      *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 0x2580) = dVar5;
      *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 0x2580) =
           dVar5 / (*(double *)((long)__ptr_02 + lVar3 * 8) * 37.41657386773942);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x578);
  lVar1 = 1;
  do {
    *(undefined8 *)((long)__ptr_00 + lVar2 * 0x2588) = 0x3ff0000000000000;
    lVar3 = lVar1;
    do {
      *(undefined8 *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x2580) = 0;
      dVar5 = 0.0;
      lVar4 = 0;
      do {
        dVar5 = dVar5 + *(double *)((long)__ptr + lVar2 * 8 + lVar4 * 0x2580) *
                        *(double *)((long)__ptr + lVar3 * 8 + lVar4 * 0x2580);
        *(double *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x2580) = dVar5;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x578);
      *(double *)((long)__ptr_00 + lVar2 * 8 + lVar3 * 0x2580) = dVar5;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar2 = lVar2 + 1;
    lVar1 = lVar1 + 1;
  } while (lVar2 != 0x4af);
  *(undefined8 *)((long)__ptr_00 + 0xafc7f8) = 0x3ff0000000000000;
  __stream = _DAT_1123d8d48288b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1123d8d48288b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar1 * 0x4b0 + (int)lVar2) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar2 * 8 + lVar1 * 0x2580));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x4b0);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x4b0);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


