#include "seidel-2d.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  long lVar2;
  FILE *__stream;
  int iVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  lVar4 = 0;
  do {
    lVar5 = 0;
    do {
      *(double *)((long)__ptr + lVar5 * 8 + lVar4 * 16000) =
           ((double)((int)lVar5 + 2) * (double)(int)lVar4 + 2.0) / 2000.0;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2000);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 2000);
  iVar3 = 0;
  do {
    lVar5 = 0;
    lVar4 = 1;
    do {
      lVar1 = lVar4 + -1;
      lVar2 = lVar4 + 1;
      dVar7 = *(double *)(lVar5 * 16000 + 16000 + (long)__ptr);
      lVar6 = 1;
      do {
        dVar7 = (*(double *)((long)__ptr + lVar6 * 8 + lVar1 * 16000 + -8) +
                 *(double *)((long)__ptr + lVar6 * 8 + lVar1 * 16000) +
                 *(double *)((long)__ptr + lVar6 * 8 + lVar1 * 16000 + 8) + dVar7 +
                 *(double *)((long)__ptr + lVar6 * 8 + lVar4 * 16000) +
                 *(double *)((long)__ptr + lVar6 * 8 + lVar4 * 16000 + 8) +
                 *(double *)((long)__ptr + lVar6 * 8 + lVar2 * 16000 + -8) +
                 *(double *)((long)__ptr + lVar6 * 8 + lVar2 * 16000) +
                *(double *)((long)__ptr + lVar6 * 8 + lVar2 * 16000 + 8)) / 9.0;
        *(double *)((long)__ptr + lVar6 * 8 + lVar4 * 16000) = dVar7;
        __stream = _DAT_e43d8d48308b4c;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 1999);
      lVar5 = lVar5 + 1;
      lVar4 = lVar2;
    } while (lVar2 != 1999);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 500);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_e43d8d48308b4c);
    lVar4 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar5 = 0;
      do {
        if (((uint)(((int)lVar5 + (int)lVar4 * 2000) * -0x33333333) >> 2 | (int)lVar5 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar5 * 8 + lVar4 * 16000));
        lVar5 = lVar5 + 1;
      } while (lVar5 != 2000);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  return 0;
}


