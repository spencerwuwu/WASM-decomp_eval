#include "trisolv.h"



void kernel_trisolv(uint param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      dVar6 = *(double *)(param_4 + uVar2 * 8);
      *(double *)(param_3 + uVar2 * 8) = dVar6;
      if (uVar2 != 0) {
        if (uVar2 == 1) {
          lVar3 = 0;
        }
        else {
          lVar3 = 0;
          uVar4 = 0;
          do {
            lVar1 = uVar2 * 16000 + param_2;
            dVar6 = dVar6 - *(double *)(lVar1 + lVar3 * 8) * *(double *)(param_3 + lVar3 * 8);
            *(double *)(param_3 + uVar2 * 8) = dVar6;
            uVar5 = lVar3 * 8 | 8;
            dVar6 = dVar6 - *(double *)(uVar5 + lVar1) * *(double *)(param_3 + uVar5);
            *(double *)(param_3 + uVar2 * 8) = dVar6;
            lVar3 = lVar3 + 2;
            uVar4 = uVar4 + 2;
          } while (uVar4 != (uVar2 & 0x7ffffffffffffffe));
        }
        if ((uVar2 & 1) != 0) {
          dVar6 = dVar6 - *(double *)(uVar2 * 16000 + param_2 + lVar3 * 8) *
                          *(double *)(param_3 + lVar3 * 8);
          *(double *)(param_3 + uVar2 * 8) = dVar6;
        }
      }
      *(double *)(param_3 + uVar2 * 8) = dVar6 / *(double *)(uVar2 * 0x3e88 + param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  double dVar9;
  undefined auVar10 [16];
  double dVar12;
  undefined auVar11 [16];
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000);
  auVar2 = __LCPI1_1;
  auVar1 = __LCPI1_0;
  uVar4 = 1;
  uVar3 = 0;
  lVar5 = 0;
  do {
    *(undefined8 *)((long)__ptr_00 + lVar5 * 8) = 0xc08f380000000000;
    *(double *)((long)__ptr_01 + lVar5 * 8) = (double)(int)lVar5;
    iVar8 = (int)lVar5 + 0x7d1;
    if (1 < uVar4) {
      uVar6 = uVar4 & 0x7ffffffffffffffe;
      uVar7 = 0;
      auVar10 = auVar1;
      do {
        dVar9 = (double)(iVar8 - SUB164(auVar10,0));
        dVar12 = (double)(int)((ulong)dVar9 >> 0x20);
        auVar11 = divpd(CONCAT88(dVar12 + dVar12,dVar9 + dVar9),auVar2);
        *(undefined (*) [16])((long)__ptr + uVar7 * 8 + lVar5 * 16000) = auVar11;
        uVar7 = uVar7 + 2;
        auVar10 = CONCAT88(SUB168(auVar10 >> 0x40,0) + 2,SUB168(auVar10,0) + 2);
        if (uVar7 == uVar6) goto joined_r0x00100219;
      } while( true );
    }
    uVar6 = 0;
    do {
      dVar9 = (double)(iVar8 - (int)uVar6);
      *(double *)((long)__ptr + uVar6 * 8 + lVar5 * 16000) = (dVar9 + dVar9) / 2000.0;
      uVar6 = uVar6 + 1;
joined_r0x00100219:
    } while (uVar4 != uVar6);
    lVar5 = lVar5 + 1;
    uVar4 = uVar4 + 1;
  } while (lVar5 != 2000);
  do {
    dVar9 = *(double *)((long)__ptr_01 + uVar3 * 8);
    *(double *)((long)__ptr_00 + uVar3 * 8) = dVar9;
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        uVar4 = 0;
        do {
          dVar9 = dVar9 - *(double *)((long)__ptr + lVar5 * 8 + uVar3 * 16000) *
                          *(double *)((long)__ptr_00 + lVar5 * 8);
          *(double *)((long)__ptr_00 + uVar3 * 8) = dVar9;
          uVar6 = lVar5 * 8 | 8;
          dVar9 = dVar9 - *(double *)((long)__ptr + uVar6 + uVar3 * 16000) *
                          *(double *)((long)__ptr_00 + uVar6);
          *(double *)((long)__ptr_00 + uVar3 * 8) = dVar9;
          lVar5 = lVar5 + 2;
          uVar4 = uVar4 + 2;
        } while (uVar4 != (uVar3 & 0x7ffffffffffffffe));
      }
      if ((uVar3 & 1) != 0) {
        dVar9 = dVar9 - *(double *)((long)__ptr + lVar5 * 8 + uVar3 * 16000) *
                        *(double *)((long)__ptr_00 + lVar5 * 8);
        *(double *)((long)__ptr_00 + uVar3 * 8) = dVar9;
      }
    }
    *(double *)((long)__ptr_00 + uVar3 * 8) = dVar9 / *(double *)(uVar3 * 0x3e88 + (long)__ptr);
    __stream = _DAT_f63d8d48208b4c;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 2000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_f63d8d48208b4c);
    lVar5 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar5 * 8));
      if ((ushort)((ushort)((short)lVar5 * -0x3333) >> 2 | (short)lVar5 * 0x4000) < 0xccd) {
        fputc(10,__stream);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


