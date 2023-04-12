#include "seidel-2d.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double dVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  undefined auVar6 [16];
  FILE *__stream;
  double *__ptr;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  int iVar15;
  undefined auVar16 [16];
  double dVar3;
  
  __ptr = (double *)polybench_alloc_data(4000000,8);
  auVar6 = __LCPI0_3;
  lVar7 = 0;
  do {
    dVar12 = (double)(int)lVar7;
    lVar8 = 0;
    iVar14 = 0;
    iVar15 = 1;
    do {
      auVar16 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar14 + 2) >> 0x20) * dVar12 + 2.0,
                               (double)(iVar14 + 2) * dVar12 + 2.0),auVar6);
      *(undefined (*) [16])(__ptr + lVar7 * 2000 + lVar8) = auVar16;
      iVar14 = iVar14 + 4;
      iVar15 = iVar15 + 4;
      auVar16 = divpd(CONCAT88((double)iVar15 * dVar12 + 2.0,(double)iVar14 * dVar12 + 2.0),auVar6);
      *(undefined (*) [16])((long)__ptr + (lVar8 * 8 | 0x10U) + lVar7 * 16000) = auVar16;
      lVar8 = lVar8 + 4;
    } while (lVar8 != 2000);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 2000);
  iVar14 = 0;
  do {
    lVar7 = 1;
    dVar12 = *__ptr;
    do {
      lVar9 = lVar7 + 1;
      dVar1 = __ptr[lVar7 * 2000];
      dVar11 = __ptr[lVar7 * 2000 + 1];
      lVar8 = 1;
      dVar13 = __ptr[lVar7 * 2000 + 2000];
      dVar10 = dVar1;
      dVar2 = __ptr[lVar7 * 2000 + -1999];
      dVar3 = __ptr[lVar7 * 2000 + 0x7d1];
      do {
        dVar4 = __ptr[(lVar7 + -1) * 2000 + lVar8 + 1];
        dVar12 = dVar12 + dVar2 + dVar4 + dVar10 + dVar11;
        dVar11 = __ptr[lVar7 * 2000 + lVar8 + 1];
        dVar5 = __ptr[lVar9 * 2000 + lVar8 + 1];
        dVar10 = (dVar12 + dVar11 + dVar13 + dVar3 + dVar5) / 9.0;
        __ptr[lVar7 * 2000 + lVar8] = dVar10;
        __stream = _DAT_12e3d8d48308b4c;
        lVar8 = lVar8 + 1;
        dVar12 = dVar2;
        dVar13 = dVar3;
        dVar2 = dVar4;
        dVar3 = dVar5;
      } while (lVar8 != 1999);
      lVar7 = lVar9;
      dVar12 = dVar1;
    } while (lVar9 != 1999);
    iVar14 = iVar14 + 1;
  } while (iVar14 != 500);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_12e3d8d48308b4c);
    lVar7 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar8 = 0;
      do {
        if (((uint)(((int)lVar8 + (int)lVar7 * 2000) * -0x33333333) >> 2 | (int)lVar8 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",__ptr[lVar7 * 2000 + lVar8]);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 2000);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  return 0;
}


