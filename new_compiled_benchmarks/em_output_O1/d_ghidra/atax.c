#include "atax.h"



void init_array(uint param_1,uint param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      *(double *)(param_4 + uVar1 * 8) = (double)(int)uVar1 / (double)param_2 + 1.0;
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_2);
  }
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      if (0 < (int)param_2) {
        uVar2 = 0;
        do {
          *(double *)(uVar1 * 0x41a0 + param_3 + uVar2 * 8) =
               (double)(((int)uVar2 + (int)uVar1) % (int)param_2) / (double)(param_1 * 5);
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(uint param_1,long param_2)

{
  FILE *__stream;
  ulong uVar1;
  
  __stream = _DAT_39f3d8d48188b48;
  fwrite(_L_str,0x16,1,_DAT_39f3d8d48188b48);
  fprintf(__stream,"begin dump: %s",&_L_str_2);
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      if (((uint)((int)uVar1 * -0x33333333) >> 2 | (int)uVar1 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)(param_2 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  fprintf(__stream,"\nend   dump: %s\n",&_L_str_2);
  fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  return;
}



void kernel_atax(uint param_1,uint param_2,long param_3,long param_4,void *param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  uVar3 = (ulong)param_2;
  if (0 < (int)param_2) {
    memset(param_5,0,uVar3 * 8);
  }
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      *(undefined8 *)(param_6 + uVar1 * 8) = 0;
      if (0 < (int)param_2) {
        dVar4 = *(double *)(param_6 + uVar1 * 8);
        uVar2 = 0;
        do {
          dVar4 = dVar4 + *(double *)(uVar1 * 0x41a0 + param_3 + uVar2 * 8) *
                          *(double *)(param_4 + uVar2 * 8);
          *(double *)(param_6 + uVar1 * 8) = dVar4;
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar3);
      }
      if (0 < (int)param_2) {
        uVar2 = 0;
        do {
          *(double *)((long)param_5 + uVar2 * 8) =
               *(double *)(uVar1 * 0x41a0 + param_3 + uVar2 * 8) * *(double *)(param_6 + uVar1 * 8)
               + *(double *)((long)param_5 + uVar2 * 8);
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar3);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  return;
}



undefined8 submain(int param_1,char **param_2)

{
  void *__ptr;
  void *__ptr_00;
  void *__s;
  void *__ptr_01;
  long lVar1;
  long lVar2;
  double dVar3;
  
  __ptr = (void *)polybench_alloc_data(0x3ce1f0,8);
  __ptr_00 = (void *)polybench_alloc_data(0x834,8);
  __s = (void *)polybench_alloc_data(0x834,8);
  __ptr_01 = (void *)polybench_alloc_data(0x76c,8);
  lVar1 = 0;
  lVar2 = 0;
  do {
    *(double *)((long)__ptr_00 + lVar2 * 8) = (double)(int)lVar2 / 2100.0 + 1.0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x834);
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x41a0) =
           (double)(((int)lVar2 + (int)lVar1) % 0x834) / 9500.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x834);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x76c);
  lVar1 = 0;
  memset(__s,0,0x41a0);
  do {
    *(undefined8 *)((long)__ptr_01 + lVar1 * 8) = 0;
    dVar3 = 0.0;
    lVar2 = 0;
    do {
      dVar3 = dVar3 + *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x41a0) *
                      *(double *)((long)__ptr_00 + lVar2 * 8);
      *(double *)((long)__ptr_01 + lVar1 * 8) = dVar3;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x834);
    lVar2 = 0;
    do {
      *(double *)((long)__s + lVar2 * 8) =
           *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x41a0) *
           *(double *)((long)__ptr_01 + lVar1 * 8) + *(double *)((long)__s + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x834);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x76c);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    print_array(0x834,__s);
  }
  free(__ptr);
  free(__ptr_00);
  free(__s);
  free(__ptr_01);
  return 0;
}


