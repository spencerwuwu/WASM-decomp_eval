#include "ludcmp.h"



void kernel_ludcmp(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  
  uVar2 = (ulong)param_1;
  if (0 < (int)param_1) {
    uVar4 = 0;
    do {
      uVar6 = uVar4;
      if (uVar4 != 0) {
        uVar5 = 0;
        do {
          lVar7 = uVar4 * 16000 + param_2;
          dVar8 = *(double *)(lVar7 + uVar5 * 8);
          if (uVar5 != 0) {
            uVar3 = 0;
            do {
              dVar8 = dVar8 - *(double *)(lVar7 + uVar3 * 8) *
                              *(double *)(uVar3 * 16000 + param_2 + uVar5 * 8);
              uVar3 = uVar3 + 1;
            } while (uVar3 != uVar5);
          }
          *(double *)(lVar7 + uVar5 * 8) = dVar8 / *(double *)(uVar5 * 0x3e88 + param_2);
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
      do {
        lVar7 = uVar4 * 16000 + param_2;
        dVar8 = *(double *)(lVar7 + uVar6 * 8);
        if (uVar4 != 0) {
          uVar5 = 0;
          do {
            dVar8 = dVar8 - *(double *)(lVar7 + uVar5 * 8) *
                            *(double *)(uVar5 * 16000 + param_2 + uVar6 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar4);
        }
        *(double *)(lVar7 + uVar6 * 8) = dVar8;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  if (0 < (int)param_1) {
    uVar4 = 0;
    do {
      dVar8 = *(double *)(param_3 + uVar4 * 8);
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          dVar8 = dVar8 - *(double *)(uVar4 * 16000 + param_2 + uVar6 * 8) *
                          *(double *)(param_5 + uVar6 * 8);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar4);
      }
      *(double *)(param_5 + uVar4 * 8) = dVar8;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  if (0 < (int)param_1) {
    uVar4 = (long)(int)param_1;
    do {
      uVar6 = uVar4 - 1;
      uVar5 = uVar6 & 0xffffffff;
      dVar8 = *(double *)(param_5 + uVar5 * 8);
      if ((long)uVar2 < (long)(int)param_1) {
        do {
          dVar8 = dVar8 - *(double *)(uVar5 * 16000 + param_2 + uVar4 * 8) *
                          *(double *)(param_4 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while ((uint)uVar4 != param_1);
      }
      *(double *)(param_4 + uVar5 * 8) = dVar8 / *(double *)(uVar5 * 0x3e88 + param_2);
      bVar1 = 1 < (long)uVar2;
      uVar2 = uVar2 - 1;
      uVar4 = uVar6;
    } while (bVar1);
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
  void *__ptr_02;
  long lVar2;
  void *__s;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  lVar6 = 0;
  do {
    *(undefined8 *)((long)__ptr_01 + lVar6 * 8) = 0;
    *(undefined8 *)((long)__ptr_02 + lVar6 * 8) = 0;
    lVar2 = lVar6 + 1;
    *(double *)((long)__ptr_00 + lVar6 * 8) = ((double)(int)lVar2 / 2000.0) * 0.5 + 4.0;
    lVar6 = lVar2;
  } while (lVar2 != 2000);
  lVar6 = 1;
  uVar7 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr + lVar2 * 8 + uVar7 * 16000) = (double)-(int)lVar2 / 2000.0 + 1.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != lVar6);
    uVar1 = uVar7 + 1;
    if (uVar7 < 1999) {
      memset((void *)(uVar7 * 0x3e88 + 8 + (long)__ptr),0,(uVar7 * -8 + 0x3e70 & 0x7fffffff8) + 8);
    }
    *(undefined8 *)((long)__ptr + uVar7 * 0x3e88) = 0x3ff0000000000000;
    lVar6 = lVar6 + 1;
    uVar7 = uVar1;
  } while (uVar1 != 2000);
  __s = (void *)polybench_alloc_data(4000000);
  lVar2 = 0;
  memset(__s,0,32000000);
  lVar6 = 0;
  do {
    lVar3 = 0;
    do {
      lVar4 = lVar3 * 16000;
      lVar5 = 0;
      do {
        *(double *)((long)__s + lVar5 * 8 + lVar4) =
             *(double *)((long)__ptr + lVar6 * 8 + lVar4) *
             *(double *)((long)__ptr + lVar6 * 8 + lVar5 * 16000) +
             *(double *)((long)__s + lVar5 * 8 + lVar4);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 2000);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2000);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 2000);
  do {
    lVar6 = 0;
    do {
      *(undefined8 *)((long)__ptr + lVar6 * 8 + lVar2 * 16000) =
           *(undefined8 *)((long)__s + lVar6 * 8 + lVar2 * 16000);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 2000);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 2000);
  free(__s);
  kernel_ludcmp(2000,__ptr,__ptr_00,__ptr_01,__ptr_02);
  __stream = _DAT_d83d8d48288b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_d83d8d48288b4c);
    lVar6 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if (((uint)((int)lVar6 * -0x33333333) >> 2 | (int)lVar6 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


