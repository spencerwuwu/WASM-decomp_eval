#include "deriche.h"



void kernel_deriche(float param_1,uint param_2,ulong param_3,long param_4,long param_5,long param_6,
                   long param_7)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  param_3 = param_3 & 0xffffffff;
  uVar7 = (ulong)param_2;
  fVar8 = expf((float)((uint)param_1 ^ 0x80000000));
  fVar9 = expf(param_1);
  fVar10 = expf(param_1);
  fVar11 = expf(param_1 + param_1);
  fVar8 = ((1.0 - fVar9) * (1.0 - fVar8)) / ((fVar10 * (param_1 + param_1) + 1.0) - fVar11);
  fVar9 = expf(param_1);
  fVar13 = (param_1 + -1.0) * fVar9 * fVar8;
  fVar9 = expf(param_1);
  fVar10 = expf(param_1 * -2.0);
  fVar11 = exp2f(param_1);
  fVar12 = expf(param_1 * -2.0);
  fVar12 = (float)((uint)fVar12 ^ 0x80000000);
  iVar3 = (int)param_3;
  if (0 < (int)param_2) {
    uVar2 = 0;
    do {
      if (0 < iVar3) {
        fVar16 = 0.0;
        uVar4 = 0;
        fVar17 = 0.0;
        fVar18 = 0.0;
        do {
          lVar5 = uVar2 * 0x21c0 + param_4;
          fVar14 = fVar17 * fVar12 +
                   fVar11 * fVar18 + *(float *)(lVar5 + uVar4 * 4) * fVar8 + fVar16 * fVar13;
          *(float *)(uVar2 * 0x21c0 + param_6 + uVar4 * 4) = fVar14;
          fVar16 = *(float *)(lVar5 + uVar4 * 4);
          uVar4 = uVar4 + 1;
          fVar17 = fVar18;
          fVar18 = fVar14;
        } while (uVar4 != param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar7);
  }
  fVar9 = (param_1 + 1.0) * fVar9 * fVar8;
  fVar10 = fVar10 * (float)((uint)fVar8 ^ 0x80000000);
  if (0 < (int)param_2) {
    uVar2 = 0;
    do {
      fVar18 = 0.0;
      fVar17 = 0.0;
      fVar14 = 0.0;
      fVar16 = 0.0;
      uVar4 = param_3;
      if (0 < iVar3) {
        do {
          fVar15 = fVar16 * fVar12 + fVar11 * fVar14 + fVar9 * fVar18 + fVar17 * fVar10;
          uVar6 = uVar4 - 1 & 0xffffffff;
          *(float *)(param_7 + uVar2 * 0x21c0 + uVar6 * 4) = fVar15;
          bVar1 = 1 < (long)uVar4;
          uVar4 = uVar4 - 1;
          fVar16 = fVar14;
          fVar17 = fVar18;
          fVar18 = *(float *)(uVar2 * 0x21c0 + param_4 + uVar6 * 4);
          fVar14 = fVar15;
        } while (bVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar7);
  }
  if (0 < (int)param_2) {
    uVar2 = 0;
    do {
      if (0 < iVar3) {
        uVar4 = 0;
        do {
          lVar5 = uVar2 * 0x21c0;
          *(float *)(lVar5 + param_5 + uVar4 * 4) =
               *(float *)(param_6 + lVar5 + uVar4 * 4) + *(float *)(param_7 + lVar5 + uVar4 * 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar7);
  }
  if (0 < iVar3) {
    uVar2 = 0;
    do {
      if (0 < (int)param_2) {
        fVar16 = 0.0;
        uVar4 = 0;
        fVar17 = 0.0;
        fVar18 = 0.0;
        do {
          lVar5 = param_5 + uVar4 * 0x21c0;
          fVar14 = fVar17 * fVar12 +
                   fVar11 * fVar18 + *(float *)(lVar5 + uVar2 * 4) * fVar8 + fVar16 * fVar13;
          *(float *)(uVar4 * 0x21c0 + param_6 + uVar2 * 4) = fVar14;
          fVar16 = *(float *)(lVar5 + uVar2 * 4);
          uVar4 = uVar4 + 1;
          fVar17 = fVar18;
          fVar18 = fVar14;
        } while (uVar4 != uVar7);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_3);
  }
  if (0 < iVar3) {
    uVar2 = 0;
    do {
      uVar4 = uVar7;
      fVar8 = 0.0;
      fVar13 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      if (0 < (int)param_2) {
        do {
          fVar18 = fVar8 * fVar12 + fVar11 * fVar17 + fVar9 * fVar16 + fVar13 * fVar10;
          lVar5 = (uVar4 - 1 & 0xffffffff) * 0x21c0;
          *(float *)(param_7 + lVar5 + uVar2 * 4) = fVar18;
          bVar1 = 1 < (long)uVar4;
          uVar4 = uVar4 - 1;
          fVar8 = fVar17;
          fVar13 = fVar16;
          fVar16 = *(float *)(lVar5 + param_5 + uVar2 * 4);
          fVar17 = fVar18;
        } while (bVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_3);
  }
  if (0 < (int)param_2) {
    uVar2 = 0;
    do {
      if (0 < iVar3) {
        uVar4 = 0;
        do {
          lVar5 = uVar2 * 0x21c0;
          *(float *)(lVar5 + param_5 + uVar4 * 4) =
               *(float *)(param_6 + lVar5 + uVar4 * 4) + *(float *)(param_7 + lVar5 + uVar4 * 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar7);
  }
  return;
}



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
  
  __ptr = (void *)polybench_alloc_data(0x870000,4);
  __ptr_00 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_01 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_02 = (void *)polybench_alloc_data(0x870000,4);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(float *)((long)__ptr + lVar2 * 4 + lVar1 * 0x21c0) =
           (float)((int)lVar2 * 0x3df + (int)lVar1 * 0x139 & 0xffff) / 65535.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x870);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1000);
  kernel_deriche(0x3e800000,0x1000,0x870,__ptr,__ptr_00,__ptr_01,__ptr_02);
  __stream = _DAT_1093d8d48288b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1093d8d48288b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s","imgOut");
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar2 + (int)lVar1 * 0x870) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2f ",(double)*(float *)((long)__ptr_00 + lVar2 * 4 + lVar1 * 0x21c0));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x870);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x1000);
    fprintf(__stream,"\nend   dump: %s\n","imgOut");
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


