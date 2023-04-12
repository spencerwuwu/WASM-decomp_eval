#include "trmm.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
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
  do {
    lVar2 = 0;
    do {
      if (uVar1 < 999) {
        dVar5 = *(double *)((long)__ptr_00 + lVar2 * 8 + uVar1 * 0x2580);
        uVar4 = uVar1;
        do {
          uVar4 = uVar4 + 1;
          dVar5 = dVar5 + *(double *)((long)__ptr + uVar1 * 8 + uVar4 * 8000) *
                          *(double *)((long)__ptr_00 + lVar2 * 8 + uVar4 * 0x2580);
          *(double *)((long)__ptr_00 + lVar2 * 8 + uVar1 * 0x2580) = dVar5;
        } while (uVar4 != 999);
      }
      *(double *)((long)__ptr_00 + lVar2 * 8 + uVar1 * 0x2580) =
           *(double *)((long)__ptr_00 + lVar2 * 8 + uVar1 * 0x2580) * 1.5;
      __stream = _DAT_f23d8d48388b4c;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    uVar1 = uVar1 + 1;
  } while (uVar1 != 1000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_f23d8d48388b4c);
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


