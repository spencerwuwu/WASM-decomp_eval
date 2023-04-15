#include "adi.h"



void init_array(uint param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  undefined auVar8 [16];
  
  if (0 < (int)param_1) {
    dVar5 = (double)param_1;
    uVar1 = 0;
    do {
      iVar2 = (int)uVar1 + param_1;
      if (1 < param_1) {
        uVar4 = 0;
        iVar6 = 0;
        do {
          dVar7 = (double)(iVar2 - iVar6);
          auVar8 = divpd(CONCAT88((double)(int)((ulong)dVar7 >> 0x20),dVar7),CONCAT88(dVar5,dVar5));
          *(undefined (*) [16])(uVar1 * 8000 + param_2 + uVar4 * 8) = auVar8;
          uVar4 = uVar4 + 2;
          iVar6 = iVar6 + 2;
          uVar3 = (ulong)(param_1 & 0xfffffffe);
          if (uVar4 == (param_1 & 0xfffffffe)) goto joined_r0x001000a3;
        } while( true );
      }
      uVar3 = 0;
      do {
        *(double *)(uVar1 * 8000 + param_2 + uVar3 * 8) = (double)(iVar2 - (int)uVar3) / dVar5;
        uVar3 = uVar3 + 1;
joined_r0x001000a3:
      } while (uVar3 != param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(uint param_1,long param_2)

{
  FILE *__stream;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  __stream = _DAT_80f3d8d48188b48;
  fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_80f3d8d48188b48);
  fprintf(__stream,"begin dump: %s",&_L_str_2);
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      uVar3 = 0;
      do {
        iVar1 = (int)uVar3 + (int)uVar2 * param_1;
        if ((iVar1 * -0x33333333 + 0x19999998U >> 2 | iVar1 * 0x40000000) < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)(uVar2 * 8000 + param_2 + uVar3 * 8));
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  fprintf(__stream,"\nend   dump: %s\n",&_L_str_2);
  fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  return;
}



void kernel_adi(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  uint uVar2;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulong uVar3;
  
  if (0 < param_1) {
    dVar14 = 1.0 / (double)param_1;
    dVar16 = (1.0 / (double)param_2) * (1.0 / (double)param_2);
    dVar15 = (dVar14 + dVar14) / dVar16;
    dVar14 = dVar14 / dVar16;
    dVar17 = dVar15 * -0.5;
    dVar15 = dVar15 + 1.0;
    dVar16 = dVar14 * -0.5;
    dVar14 = dVar14 + 1.0;
    uVar2 = param_2 - 1;
    uVar3 = (ulong)uVar2;
    dVar19 = (double)((ulong)dVar17 ^ 0x8000000000000000);
    dVar18 = (double)((ulong)dVar16 ^ 0x8000000000000000);
    dVar20 = dVar16 + dVar16 + 1.0;
    dVar21 = dVar17 + dVar17 + 1.0;
    lVar1 = uVar3 * 8 + 8000;
    iVar4 = 1;
    do {
      if (2 < param_2) {
        lVar10 = 0;
        uVar11 = 1;
        do {
          lVar7 = lVar10 * 8000;
          lVar8 = lVar1 + lVar7;
          *(undefined8 *)(param_4 + uVar11 * 8) = 0x3ff0000000000000;
          lVar12 = uVar11 * 8000;
          *(undefined8 *)(param_5 + lVar12) = 0;
          *(undefined8 *)(param_6 + lVar12) = *(undefined8 *)(param_4 + uVar11 * 8);
          uVar6 = uVar11 + 1;
          if ((param_5 + lVar7 + 8000U < (ulong)(param_6 + lVar8)) &&
             (uVar5 = 1, param_6 + lVar7 + 8000U < (ulong)(lVar8 + param_5))) {
            do {
              dVar22 = *(double *)(param_5 + lVar12 + -8 + uVar5 * 8) * dVar17 + dVar15;
              *(double *)(param_5 + lVar12 + uVar5 * 8) = dVar19 / dVar22;
              lVar8 = uVar5 * 8000 + param_3;
              *(double *)(param_6 + lVar12 + uVar5 * 8) =
                   (*(double *)(param_6 + lVar12 + -8 + uVar5 * 8) * dVar19 +
                   *(double *)(lVar8 + uVar6 * 8) * dVar18 +
                   *(double *)(lVar8 + (uVar11 - 1) * 8) * dVar18 +
                   *(double *)(lVar8 + uVar11 * 8) * dVar20) / dVar22;
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          else {
            dVar22 = *(double *)(param_5 + 8000 + lVar7);
            dVar23 = *(double *)(param_6 + 8000 + lVar7);
            uVar5 = 1;
            do {
              dVar24 = dVar22 * dVar17 + dVar15;
              dVar22 = dVar19 / dVar24;
              *(double *)(param_5 + lVar12 + uVar5 * 8) = dVar22;
              lVar8 = uVar5 * 8000 + param_3;
              dVar23 = (dVar23 * dVar19 +
                       *(double *)(lVar8 + uVar6 * 8) * dVar18 +
                       *(double *)(lVar8 + (uVar11 - 1) * 8) * dVar18 +
                       *(double *)(lVar8 + uVar11 * 8) * dVar20) / dVar24;
              *(double *)(param_6 + lVar12 + uVar5 * 8) = dVar23;
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          *(undefined8 *)((long)(int)uVar2 * 8000 + param_4 + uVar11 * 8) = 0x3ff0000000000000;
          uVar5 = (ulong)(param_2 - 2);
          do {
            lVar8 = uVar5 * 8000 + param_4;
            *(double *)(lVar8 + uVar11 * 8) =
                 *(double *)(param_5 + lVar12 + uVar5 * 8) * *(double *)(lVar8 + 8000 + uVar11 * 8)
                 + *(double *)(param_6 + lVar12 + uVar5 * 8);
            bVar13 = 1 < (long)uVar5;
            uVar5 = uVar5 - 1;
          } while (bVar13);
          lVar10 = lVar10 + 1;
          uVar11 = uVar6;
        } while (uVar6 != uVar3);
        if (2 < param_2) {
          uVar11 = 1;
          lVar10 = 0;
          do {
            lVar12 = lVar10 * 8000;
            lVar9 = lVar1 + lVar12;
            lVar7 = uVar11 * 8000;
            *(undefined8 *)(param_3 + lVar7) = 0x3ff0000000000000;
            *(undefined8 *)(param_5 + lVar7) = 0;
            *(undefined8 *)(param_6 + lVar7) = *(undefined8 *)(param_3 + lVar7);
            lVar8 = uVar11 - 1;
            uVar11 = uVar11 + 1;
            if ((param_5 + lVar12 + 8000U < (ulong)(param_6 + lVar9)) &&
               (uVar6 = 1, param_6 + lVar12 + 8000U < (ulong)(lVar9 + param_5))) {
              do {
                dVar22 = *(double *)(param_5 + lVar7 + -8 + uVar6 * 8) * dVar16 + dVar14;
                *(double *)(param_5 + lVar7 + uVar6 * 8) = dVar18 / dVar22;
                *(double *)(param_6 + lVar7 + uVar6 * 8) =
                     (*(double *)(param_6 + lVar7 + -8 + uVar6 * 8) * dVar18 +
                     *(double *)(uVar11 * 8000 + param_4 + uVar6 * 8) * dVar19 +
                     *(double *)(lVar8 * 8000 + param_4 + uVar6 * 8) * dVar19 +
                     *(double *)(param_4 + lVar7 + uVar6 * 8) * dVar21) / dVar22;
                uVar6 = uVar6 + 1;
              } while (uVar6 != uVar3);
            }
            else {
              dVar22 = *(double *)(param_5 + 8000 + lVar12);
              dVar23 = *(double *)(param_6 + 8000 + lVar12);
              uVar6 = 1;
              do {
                dVar24 = dVar22 * dVar16 + dVar14;
                dVar22 = dVar18 / dVar24;
                *(double *)(param_5 + lVar7 + uVar6 * 8) = dVar22;
                dVar23 = (dVar23 * dVar18 +
                         *(double *)(uVar11 * 8000 + param_4 + uVar6 * 8) * dVar19 +
                         *(double *)(lVar8 * 8000 + param_4 + uVar6 * 8) * dVar19 +
                         *(double *)(param_4 + lVar7 + uVar6 * 8) * dVar21) / dVar24;
                *(double *)(param_6 + lVar7 + uVar6 * 8) = dVar23;
                uVar6 = uVar6 + 1;
              } while (uVar6 != uVar3);
            }
            lVar8 = param_3 + lVar7;
            *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8) = 0x3ff0000000000000;
            uVar6 = (ulong)(param_2 - 2);
            do {
              *(double *)(lVar8 + uVar6 * 8) =
                   *(double *)(param_5 + lVar7 + uVar6 * 8) * *(double *)(lVar8 + 8 + uVar6 * 8) +
                   *(double *)(param_6 + lVar7 + uVar6 * 8);
              bVar13 = 1 < (long)uVar6;
              uVar6 = uVar6 - 1;
            } while (bVar13);
            lVar10 = lVar10 + 1;
          } while (uVar11 != uVar3);
        }
      }
      bVar13 = iVar4 != param_1;
      iVar4 = iVar4 + 1;
    } while (bVar13);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar8;
  undefined auVar7 [16];
  int iVar9;
  double dVar10;
  undefined auVar11 [16];
  
  __ptr = (void *)polybench_alloc_data(1000000,8);
  __ptr_00 = (void *)polybench_alloc_data(1000000,8);
  __ptr_01 = (void *)polybench_alloc_data(1000000,8);
  __ptr_02 = (void *)polybench_alloc_data(1000000,8);
  auVar3 = __LCPI3_3;
  auVar2 = __LCPI3_1;
  auVar1 = __LCPI3_0;
  lVar4 = 0;
  do {
    iVar5 = (int)lVar4 + 1000;
    lVar6 = 0;
    auVar7 = auVar1;
    do {
      iVar9 = iVar5 - SUB164(auVar7,0);
      iVar8 = SUB164(auVar7 >> 0x20,0);
      auVar11 = divpd(CONCAT88((double)(iVar5 - iVar8),(double)iVar9),auVar2);
      *(undefined (*) [16])((long)__ptr + lVar6 * 8 + lVar4 * 8000) = auVar11;
      dVar10 = (double)(iVar9 + -2);
      auVar11 = divpd(CONCAT88((double)(int)((ulong)dVar10 >> 0x20),dVar10),auVar2);
      *(undefined (*) [16])((long)__ptr + (lVar6 * 8 | 0x10U) + lVar4 * 8000) = auVar11;
      lVar6 = lVar6 + 4;
      auVar7 = CONCAT412(SUB164(auVar7 >> 0x60,0) + SUB164(auVar3 >> 0x60,0),
                         CONCAT48(SUB164(auVar7 >> 0x40,0) + SUB164(auVar3 >> 0x40,0),
                                  CONCAT44(iVar8 + SUB164(auVar3 >> 0x20,0),
                                           SUB164(auVar7,0) + SUB164(auVar3,0))));
    } while (lVar6 != 1000);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 1000);
  kernel_adi(500,1000,__ptr,__ptr_00,__ptr_01,__ptr_02);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    print_array(1000,__ptr);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


