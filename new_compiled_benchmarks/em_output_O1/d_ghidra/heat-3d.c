#include "heat-3d.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  long lVar2;
  FILE *__stream;
  void *__ptr;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  __ptr = (void *)polybench_alloc_data(0x1a5e00,8);
  lVar3 = polybench_alloc_data(0x1a5e00);
  lVar5 = 0;
  do {
    lVar6 = 0;
    do {
      lVar7 = 0;
      do {
        dVar11 = ((double)(((int)lVar5 + 0x78 + (int)lVar6) - (int)lVar7) * 10.0) / 120.0;
        *(double *)(lVar3 + lVar5 * 0x1c200 + lVar6 * 0x3c0 + lVar7 * 8) = dVar11;
        *(double *)((long)__ptr + lVar7 * 8 + lVar6 * 0x3c0 + lVar5 * 0x1c200) = dVar11;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x78);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x78);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x78);
  iVar4 = 1;
  do {
    lVar5 = 1;
    do {
      lVar6 = lVar5 + 1;
      lVar7 = 1;
      do {
        lVar1 = lVar7 + 1;
        lVar8 = 1;
        do {
          lVar10 = lVar7 * 0x3c0;
          lVar9 = lVar5 * 0x1c200;
          lVar2 = lVar10 + lVar9;
          dVar11 = *(double *)((long)__ptr + lVar8 * 8 + lVar2);
          dVar12 = dVar11 * -2.0;
          *(double *)(lVar9 + lVar3 + lVar10 + lVar8 * 8) =
               (dVar12 + *(double *)((long)__ptr + lVar8 * 8 + lVar2 + 8) +
               *(double *)((long)__ptr + lVar8 * 8 + lVar2 + -8)) * 0.125 +
               (*(double *)((long)__ptr + lVar8 * 8 + lVar10 + lVar6 * 0x1c200) + dVar12 +
               *(double *)((long)__ptr + lVar8 * 8 + lVar10 + (lVar5 + -1) * 0x1c200)) * 0.125 +
               (*(double *)((long)__ptr + lVar8 * 8 + lVar1 * 0x3c0 + lVar9) + dVar12 +
               *(double *)((long)__ptr + lVar8 * 8 + (lVar7 + -1) * 0x3c0 + lVar9)) * 0.125 + dVar11
          ;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x77);
        lVar7 = lVar1;
      } while (lVar1 != 0x77);
      lVar7 = 1;
      lVar5 = lVar6;
    } while (lVar6 != 0x77);
    do {
      lVar5 = lVar7 + 1;
      lVar6 = 1;
      do {
        lVar1 = lVar6 + 1;
        lVar8 = 1;
        do {
          lVar10 = lVar6 * 0x3c0;
          lVar2 = lVar3 + lVar7 * 0x1c200;
          lVar9 = lVar10 + lVar2;
          dVar11 = *(double *)(lVar9 + lVar8 * 8);
          dVar12 = dVar11 * -2.0;
          *(double *)((long)__ptr + lVar8 * 8 + lVar10 + lVar7 * 0x1c200) =
               (dVar12 + *(double *)(lVar9 + 8 + lVar8 * 8) + *(double *)(lVar9 + -8 + lVar8 * 8)) *
               0.125 + (*(double *)(lVar5 * 0x1c200 + lVar3 + lVar10 + lVar8 * 8) + dVar12 +
                       *(double *)((lVar7 + -1) * 0x1c200 + lVar3 + lVar10 + lVar8 * 8)) * 0.125 +
                       (*(double *)(lVar1 * 0x3c0 + lVar2 + lVar8 * 8) + dVar12 +
                       *(double *)((lVar6 + -1) * 0x3c0 + lVar2 + lVar8 * 8)) * 0.125 + dVar11;
          __stream = _DAT_1143d8d48308b4c;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x77);
        lVar6 = lVar1;
      } while (lVar1 != 0x77);
      lVar7 = lVar5;
    } while (lVar5 != 0x77);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x1f5);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1143d8d48308b4c);
    lVar3 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar5 = 0;
      do {
        lVar6 = 0;
        do {
          if (((uint)(((int)lVar6 + (int)lVar5 * 0x78 + (int)lVar3 * 0x3840) * -0x33333333) >> 2 |
              (int)lVar6 * 0x40000000) < 0xccccccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",
                  *(undefined8 *)((long)__ptr + lVar6 * 8 + lVar5 * 0x3c0 + lVar3 * 0x1c200));
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x78);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x78);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x78);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  return 0;
}


