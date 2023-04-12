#include "deriche.h"



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
  long lVar3;
  long lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  __ptr = (void *)polybench_alloc_data(0x870000,4);
  __ptr_00 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_01 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_02 = (void *)polybench_alloc_data(0x870000);
  lVar2 = 0;
  lVar1 = 0;
  do {
    lVar3 = 0;
    do {
      *(float *)((long)__ptr + lVar3 * 4 + lVar1 * 0x21c0) =
           (float)((int)lVar3 * 0x3df + (int)lVar1 * 0x139 & 0xffff) / 65535.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x870);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1000);
  lVar1 = 0;
  do {
    fVar8 = 0.0;
    lVar3 = 0;
    fVar6 = 0.0;
    fVar10 = 0.0;
    do {
      lVar4 = lVar2 * 0x21c0;
      fVar7 = fVar6 * -0.6065307 +
              fVar10 * 0.8408964 +
              *(float *)((long)__ptr + lVar3 * 4 + lVar4) * -0.1886817 + fVar8 * 0.1102091;
      *(float *)((long)__ptr_01 + lVar3 * 4 + lVar4) = fVar7;
      fVar8 = *(float *)((long)__ptr + lVar3 * 4 + lVar4);
      lVar3 = lVar3 + 1;
      fVar6 = fVar10;
      fVar10 = fVar7;
    } while (lVar3 != 0x870);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x1000);
  lVar2 = 0;
  do {
    lVar3 = 0x86f;
    fVar8 = 0.0;
    fVar6 = 0.0;
    fVar10 = 0.0;
    fVar7 = 0.0;
    do {
      fVar9 = fVar8 * -0.6065307 + fVar7 * 0.8408964 + fVar10 * -0.1836818 + fVar6 * 0.1144412;
      *(float *)((long)__ptr_02 + lVar3 * 4 + lVar1 * 0x21c0) = fVar9;
      lVar4 = lVar3 * 4;
      bVar5 = lVar3 != 0;
      lVar3 = lVar3 + -1;
      fVar8 = fVar7;
      fVar6 = fVar10;
      fVar10 = *(float *)((long)__ptr + lVar4 + lVar1 * 0x21c0);
      fVar7 = fVar9;
    } while (bVar5);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1000);
  lVar1 = 0;
  do {
    lVar3 = 0;
    do {
      lVar4 = lVar2 * 0x21c0;
      *(float *)((long)__ptr_00 + lVar3 * 4 + lVar4) =
           *(float *)((long)__ptr_01 + lVar3 * 4 + lVar4) +
           *(float *)((long)__ptr_02 + lVar3 * 4 + lVar4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x870);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x1000);
  lVar2 = 0;
  do {
    fVar8 = 0.0;
    lVar3 = 0;
    fVar6 = 0.0;
    fVar10 = 0.0;
    do {
      lVar4 = lVar3 * 0x21c0;
      fVar7 = fVar6 * -0.6065307 +
              fVar10 * 0.8408964 +
              *(float *)((long)__ptr_00 + lVar1 * 4 + lVar4) * -0.1886817 + fVar8 * 0.1102091;
      *(float *)((long)__ptr_01 + lVar1 * 4 + lVar4) = fVar7;
      fVar8 = *(float *)((long)__ptr_00 + lVar1 * 4 + lVar4);
      lVar3 = lVar3 + 1;
      fVar6 = fVar10;
      fVar10 = fVar7;
    } while (lVar3 != 0x1000);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x870);
  lVar1 = 0;
  do {
    lVar3 = 0xfff;
    fVar8 = 0.0;
    fVar6 = 0.0;
    fVar10 = 0.0;
    fVar7 = 0.0;
    do {
      fVar9 = fVar8 * -0.6065307 + fVar7 * 0.8408964 + fVar10 * -0.1836818 + fVar6 * 0.1144412;
      lVar4 = lVar3 * 0x21c0;
      *(float *)((long)__ptr_02 + lVar2 * 4 + lVar4) = fVar9;
      bVar5 = lVar3 != 0;
      lVar3 = lVar3 + -1;
      fVar8 = fVar7;
      fVar6 = fVar10;
      fVar10 = *(float *)((long)__ptr_00 + lVar2 * 4 + lVar4);
      fVar7 = fVar9;
    } while (bVar5);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x870);
  do {
    lVar2 = 0;
    do {
      lVar3 = lVar1 * 0x21c0;
      *(float *)((long)__ptr_00 + lVar2 * 4 + lVar3) =
           *(float *)((long)__ptr_01 + lVar2 * 4 + lVar3) +
           *(float *)((long)__ptr_02 + lVar2 * 4 + lVar3);
      __stream = _DAT_1043d8d48288b4c;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x870);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_1043d8d48288b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s","imgOut");
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar1 * 0x870 + (int)lVar2) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
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


