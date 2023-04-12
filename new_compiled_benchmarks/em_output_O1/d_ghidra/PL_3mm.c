#include "PL_3mm.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  void *__ptr_05;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(800000,8);
  __ptr_01 = (void *)polybench_alloc_data(900000,8);
  __ptr_02 = (void *)polybench_alloc_data(990000,8);
  __ptr_03 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_04 = (void *)polybench_alloc_data(0x142440,8);
  __ptr_05 = (void *)polybench_alloc_data(880000,8);
  lVar4 = 0;
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr_00 + lVar2 * 8 + lVar1 * 8000) =
           (double)(((int)lVar2 * (int)lVar1 + 1U) % 800) / 4000.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      *(double *)((long)__ptr_01 + lVar2 * 8 + lVar4 * 0x1c20) =
           (double)(((int)lVar3 * (int)lVar4 + 2U) % 900) / 4500.0;
      lVar2 = lVar3;
    } while (lVar3 != 900);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 1000);
  lVar4 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580) =
           (double)((uint)((int)lVar1 * ((int)lVar2 + 3)) % 0x44c) / 5500.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 900);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr_04 + lVar2 * 8 + lVar4 * 0x2260) =
           (double)(((int)lVar4 * ((int)lVar2 + 2) + 2U) % 1000) / 5000.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x44c);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x4b0);
  lVar4 = 0;
  do {
    lVar2 = 0;
    do {
      *(undefined8 *)((long)__ptr + lVar2 * 8 + lVar1 * 0x1c20) = 0;
      dVar5 = 0.0;
      lVar3 = 0;
      do {
        dVar5 = dVar5 + *(double *)((long)__ptr_00 + lVar3 * 8 + lVar1 * 8000) *
                        *(double *)((long)__ptr_01 + lVar2 * 8 + lVar3 * 0x1c20);
        *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x1c20) = dVar5;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 1000);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 900);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(undefined8 *)((long)__ptr_02 + lVar2 * 8 + lVar4 * 0x2260) = 0;
      dVar5 = 0.0;
      lVar3 = 0;
      do {
        dVar5 = dVar5 + *(double *)((long)__ptr_03 + lVar3 * 8 + lVar4 * 0x2580) *
                        *(double *)((long)__ptr_04 + lVar2 * 8 + lVar3 * 0x2260);
        *(double *)((long)__ptr_02 + lVar2 * 8 + lVar4 * 0x2260) = dVar5;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x44c);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 900);
  do {
    lVar4 = 0;
    do {
      *(undefined8 *)((long)__ptr_05 + lVar4 * 8 + lVar1 * 0x2260) = 0;
      dVar5 = 0.0;
      lVar2 = 0;
      do {
        dVar5 = dVar5 + *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x1c20) *
                        *(double *)((long)__ptr_02 + lVar4 * 8 + lVar2 * 0x2260);
        *(double *)((long)__ptr_05 + lVar4 * 8 + lVar1 * 0x2260) = dVar5;
        __stream = _DAT_48240c8948088b48;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 900);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x44c);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_48240c8948088b48);
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    lVar1 = 0;
    do {
      lVar4 = 0;
      do {
        if (((uint)(((int)lVar1 * 800 + (int)lVar4) * -0x33333333) >> 2 | (int)lVar4 * 0x40000000) <
            0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_05 + lVar4 * 8 + lVar1 * 0x2260));
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x44c);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 800);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr_04);
  free(__ptr_05);
  return 0;
}


