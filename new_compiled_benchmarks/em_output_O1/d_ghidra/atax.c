#include "atax.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
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
           (double)((uint)((int)lVar2 + (int)lVar1) % 0x834) / 9500.0;
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
      __stream = _DAT_be3d8d48288b4c;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x834);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x76c);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_be3d8d48288b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if (((uint)((int)lVar1 * -0x33333333) >> 2 | (int)lVar1 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__s + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x834);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__s);
  free(__ptr_01);
  return 0;
}


