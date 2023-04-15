#include "heat-3d.h"



void kernel_heat_3d(undefined8 param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  
  uVar6 = (ulong)(param_2 - 1);
  iVar7 = 1;
  do {
    uVar8 = 1;
    if (2 < param_2) {
      do {
        uVar1 = uVar8 + 1;
        uVar9 = 1;
        do {
          uVar2 = uVar9 + 1;
          uVar11 = 1;
          do {
            lVar10 = uVar9 * 0x3c0;
            lVar3 = param_3 + uVar8 * 0x1c200;
            lVar4 = lVar3 + lVar10;
            dVar5 = *(double *)(lVar4 + uVar11 * 8);
            dVar12 = dVar5 * -2.0;
            *(double *)(uVar8 * 0x1c200 + param_4 + lVar10 + uVar11 * 8) =
                 (dVar12 + *(double *)(lVar4 + 8 + uVar11 * 8) +
                 *(double *)(lVar4 + -8 + uVar11 * 8)) * 0.125 +
                 (*(double *)(uVar1 * 0x1c200 + param_3 + lVar10 + uVar11 * 8) + dVar12 +
                 *(double *)((uVar8 - 1) * 0x1c200 + param_3 + lVar10 + uVar11 * 8)) * 0.125 +
                 (*(double *)(uVar2 * 0x3c0 + lVar3 + uVar11 * 8) + dVar12 +
                 *(double *)((uVar9 - 1) * 0x3c0 + lVar3 + uVar11 * 8)) * 0.125 + dVar5;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar6);
          uVar9 = uVar2;
        } while (uVar2 != uVar6);
        uVar8 = uVar1;
      } while (uVar1 != uVar6);
    }
    uVar8 = 1;
    if (2 < param_2) {
      do {
        uVar1 = uVar8 + 1;
        uVar9 = 1;
        do {
          uVar2 = uVar9 + 1;
          uVar11 = 1;
          do {
            lVar10 = uVar9 * 0x3c0;
            lVar3 = param_4 + uVar8 * 0x1c200;
            lVar4 = lVar3 + lVar10;
            dVar5 = *(double *)(lVar4 + uVar11 * 8);
            dVar12 = dVar5 * -2.0;
            *(double *)(uVar8 * 0x1c200 + param_3 + lVar10 + uVar11 * 8) =
                 (dVar12 + *(double *)(lVar4 + 8 + uVar11 * 8) +
                 *(double *)(lVar4 + -8 + uVar11 * 8)) * 0.125 +
                 (*(double *)(uVar1 * 0x1c200 + param_4 + lVar10 + uVar11 * 8) + dVar12 +
                 *(double *)((uVar8 - 1) * 0x1c200 + param_4 + lVar10 + uVar11 * 8)) * 0.125 +
                 (*(double *)(uVar2 * 0x3c0 + lVar3 + uVar11 * 8) + dVar12 +
                 *(double *)((uVar9 - 1) * 0x3c0 + lVar3 + uVar11 * 8)) * 0.125 + dVar5;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar6);
          uVar9 = uVar2;
        } while (uVar2 != uVar6);
        uVar8 = uVar1;
      } while (uVar1 != uVar6);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x1f5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  FILE *__stream;
  void *__ptr;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  __ptr = (void *)polybench_alloc_data(0x1a5e00,8);
  lVar2 = polybench_alloc_data(0x1a5e00);
  lVar3 = 0;
  do {
    lVar4 = 0;
    do {
      lVar1 = lVar3 + 0x78 + lVar4;
      lVar5 = 0;
      do {
        dVar6 = ((double)((int)lVar1 - (int)lVar5) * 10.0) / 120.0;
        *(double *)(lVar2 + lVar3 * 0x1c200 + lVar4 * 0x3c0 + lVar5 * 8) = dVar6;
        *(double *)((long)__ptr + lVar5 * 8 + lVar4 * 0x3c0 + lVar3 * 0x1c200) = dVar6;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x78);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x78);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x78);
  kernel_heat_3d(lVar1,0x78,__ptr,lVar2);
  __stream = _DAT_1113d8d48308b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1113d8d48308b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar3 = 0;
      do {
        lVar4 = 0;
        do {
          if (((uint)(((int)lVar4 + (int)lVar3 * 0x78 + (int)lVar2 * 0x3840) * -0x33333333) >> 2 |
              (int)lVar4 * 0x40000000) < 0xccccccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",
                  *(undefined8 *)((long)__ptr + lVar4 * 8 + lVar3 * 0x3c0 + lVar2 * 0x1c200));
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x78);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x78);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x78);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  return 0;
}


