#include "deriche.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  void *pvVar1;
  void *pvVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined auVar27 [16];
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  undefined auVar35 [16];
  
  __ptr = (void *)polybench_alloc_data(0x870000,4);
  __ptr_00 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_01 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_02 = (void *)polybench_alloc_data(0x870000,4);
  auVar27 = __LCPI0_4;
  lVar19 = 0;
  lVar20 = 0;
  do {
    lVar21 = lVar20 * 0x139;
    iVar28 = (int)lVar21;
    lVar22 = 0;
    uVar34 = 3;
    iVar33 = 2;
    iVar32 = 1;
    iVar30 = 0;
    do {
      auVar35 = divps(CONCAT412((float)((uint)((uVar34 & 0xffffffff) * 0x3df +
                                              SUB168(CONCAT412((int)((ulong)lVar21 >> 0x20),
                                                               CONCAT48(iVar28,lVar21)) >> 0x40,0))
                                       & 0xffff),
                                CONCAT48((float)(iVar33 * 0x3df + iVar28 & 0xffff),
                                         CONCAT44((float)(iVar32 * 0x3df + iVar28 & 0xffff),
                                                  (float)(iVar30 * 0x3df + iVar28 & 0xffff)))),
                      auVar27);
      *(undefined (*) [16])((long)__ptr + lVar22 * 4 + lVar20 * 0x21c0) = auVar35;
      lVar22 = lVar22 + 4;
      iVar30 = iVar30 + 4;
      iVar32 = iVar32 + 4;
      iVar33 = iVar33 + 4;
      uVar34 = uVar34 + 4;
    } while (lVar22 != 0x870);
    lVar20 = lVar20 + 1;
  } while (lVar20 != 0x1000);
  lVar20 = 0;
  do {
    fVar26 = 0.0;
    lVar21 = 0;
    fVar29 = 0.0;
    fVar31 = 0.0;
    do {
      lVar22 = lVar19 * 0x21c0;
      fVar25 = fVar29 * -0.6065307 +
               fVar31 * 0.8408964 +
               *(float *)((long)__ptr + lVar21 * 4 + lVar22) * -0.1886817 + fVar26 * 0.1102091;
      *(float *)((long)__ptr_01 + lVar21 * 4 + lVar22) = fVar25;
      fVar26 = *(float *)((long)__ptr + lVar21 * 4 + lVar22);
      lVar21 = lVar21 + 1;
      fVar29 = fVar31;
      fVar31 = fVar25;
    } while (lVar21 != 0x870);
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x1000);
  lVar19 = 0;
  do {
    fVar29 = 0.0;
    fVar26 = 0.0;
    auVar27 = ZEXT816(0);
    fVar31 = 0.0;
    lVar21 = 0x86f;
    do {
      fVar31 = fVar31 * -0.6065307 +
               SUB164(auVar27,0) * 0.8408964 + fVar29 * -0.1836818 + fVar26 * 0.1144412;
      lVar22 = lVar20 * 0x21c0;
      *(float *)((long)__ptr_02 + lVar21 * 4 + lVar22) = fVar31;
      fVar26 = *(float *)((long)__ptr + lVar21 * 4 + lVar22);
      fVar29 = SUB164(auVar27,0) * -0.6065307 +
               fVar31 * 0.8408964 + fVar26 * -0.1836818 + fVar29 * 0.1144412;
      auVar27 = CONCAT124(SUB1612(auVar27 >> 0x20,0),fVar29);
      *(float *)((long)__ptr_02 + lVar21 * 4 + lVar22 + -4) = fVar29;
      fVar29 = *(float *)((long)__ptr + lVar21 * 4 + lVar22 + -4);
      bVar24 = lVar21 != 1;
      lVar21 = lVar21 + -2;
    } while (bVar24);
    lVar20 = lVar20 + 1;
  } while (lVar20 != 0x1000);
  lVar20 = 0;
  do {
    lVar21 = lVar19 * 0x21c0;
    pvVar1 = (void *)(lVar21 + (long)__ptr_02);
    pvVar2 = (void *)(lVar21 + (long)__ptr_01);
    if ((ulong)((long)__ptr_00 + (lVar21 - (long)pvVar2)) < 0x20) {
      lVar22 = 0;
LAB_00100360:
      do {
        *(float *)((long)__ptr_00 + lVar22 * 4 + lVar21) =
             *(float *)((long)pvVar2 + lVar22 * 4) + *(float *)((long)pvVar1 + lVar22 * 4);
        uVar34 = lVar22 * 4 | 4;
        *(float *)((long)__ptr_00 + uVar34 + lVar21) =
             *(float *)(uVar34 + (long)pvVar2) + *(float *)(uVar34 + (long)pvVar1);
        lVar22 = lVar22 + 2;
      } while (lVar22 != 0x870);
    }
    else {
      lVar23 = 0;
      lVar22 = 0;
      if ((ulong)((long)__ptr_00 + (lVar21 - (long)pvVar1)) < 0x20) goto LAB_00100360;
      do {
        pfVar3 = (float *)((long)pvVar2 + lVar23 * 4);
        fVar26 = pfVar3[1];
        fVar29 = pfVar3[2];
        fVar31 = pfVar3[3];
        pfVar4 = (float *)((long)pvVar2 + lVar23 * 4 + 0x10);
        fVar25 = *pfVar4;
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        pfVar4 = (float *)((long)pvVar1 + lVar23 * 4);
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        pfVar5 = (float *)((long)pvVar1 + lVar23 * 4 + 0x10);
        fVar12 = *pfVar5;
        fVar13 = pfVar5[1];
        fVar14 = pfVar5[2];
        fVar15 = pfVar5[3];
        pfVar5 = (float *)((long)__ptr_00 + lVar23 * 4 + lVar21);
        *pfVar5 = *pfVar4 + *pfVar3;
        pfVar5[1] = fVar9 + fVar26;
        pfVar5[2] = fVar10 + fVar29;
        pfVar5[3] = fVar11 + fVar31;
        pfVar3 = (float *)((long)__ptr_00 + lVar23 * 4 + lVar21 + 0x10);
        *pfVar3 = fVar12 + fVar25;
        pfVar3[1] = fVar13 + fVar6;
        pfVar3[2] = fVar14 + fVar7;
        pfVar3[3] = fVar15 + fVar8;
        uVar34 = lVar23 * 4 | 0x20;
        pfVar3 = (float *)(uVar34 + (long)pvVar2);
        pfVar4 = (float *)(uVar34 + 0x10 + (long)pvVar2);
        fVar26 = *pfVar4;
        fVar29 = pfVar4[1];
        fVar31 = pfVar4[2];
        fVar25 = pfVar4[3];
        pfVar4 = (float *)(uVar34 + (long)pvVar1);
        pfVar5 = (float *)(uVar34 + 0x10 + (long)pvVar1);
        fVar6 = *pfVar5;
        fVar7 = pfVar5[1];
        fVar8 = pfVar5[2];
        fVar9 = pfVar5[3];
        *(undefined (*) [16])((long)__ptr_00 + uVar34 + lVar21) =
             CONCAT412(pfVar4[3] + pfVar3[3],
                       CONCAT48(pfVar4[2] + pfVar3[2],
                                CONCAT44(pfVar4[1] + pfVar3[1],*pfVar4 + *pfVar3)));
        pfVar3 = (float *)((long)__ptr_00 + uVar34 + 0x10 + lVar21);
        *pfVar3 = fVar6 + fVar26;
        pfVar3[1] = fVar7 + fVar29;
        pfVar3[2] = fVar8 + fVar31;
        pfVar3[3] = fVar9 + fVar25;
        lVar23 = lVar23 + 0x10;
      } while (lVar23 != 0x870);
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x1000);
  lVar19 = 0;
  do {
    fVar26 = 0.0;
    lVar21 = 0;
    auVar27 = ZEXT816(0);
    auVar35 = ZEXT816(0);
    do {
      lVar22 = lVar21 * 0x21c0;
      fVar29 = SUB164(auVar27,0) * -0.6065307 +
               SUB164(auVar35,0) * 0.8408964 +
               *(float *)((long)__ptr_00 + lVar20 * 4 + lVar22) * -0.1886817 + fVar26 * 0.1102091;
      *(float *)((long)__ptr_01 + lVar20 * 4 + lVar22) = fVar29;
      fVar26 = *(float *)((long)__ptr_00 + lVar20 * 4 + lVar22);
      lVar21 = lVar21 + 1;
      auVar16 = auVar27 >> 0x20;
      auVar17 = auVar27 >> 0x40;
      auVar18 = auVar27 >> 0x60;
      auVar27 = auVar35;
      auVar35 = CONCAT412(SUB164(auVar18,0),
                          CONCAT48(SUB164(auVar17,0),CONCAT44(SUB164(auVar16,0),fVar29)));
    } while (lVar21 != 0x1000);
    lVar20 = lVar20 + 1;
  } while (lVar20 != 0x870);
  lVar20 = 0;
  do {
    fVar29 = 0.0;
    fVar26 = 0.0;
    fVar31 = 0.0;
    auVar27 = ZEXT816(0);
    lVar21 = 0xfff;
    do {
      fVar25 = SUB164(auVar27,0) * -0.6065307 +
               fVar31 * 0.8408964 + fVar29 * -0.1836818 + fVar26 * 0.1144412;
      auVar27 = CONCAT124(SUB1612(auVar27 >> 0x20,0),fVar25);
      lVar22 = lVar21 * 0x21c0;
      *(float *)((long)__ptr_02 + lVar19 * 4 + lVar22) = fVar25;
      fVar26 = *(float *)((long)__ptr_00 + lVar19 * 4 + lVar22);
      fVar31 = fVar31 * -0.6065307 + fVar25 * 0.8408964 + fVar26 * -0.1836818 + fVar29 * 0.1144412;
      *(float *)((long)__ptr_02 + lVar19 * 4 + lVar22 + -0x21c0) = fVar31;
      fVar29 = *(float *)((long)__ptr_00 + lVar19 * 4 + lVar22 + -0x21c0);
      bVar24 = lVar21 != 1;
      lVar21 = lVar21 + -2;
    } while (bVar24);
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x870);
  do {
    lVar19 = lVar20 * 0x21c0;
    pvVar1 = (void *)(lVar19 + (long)__ptr_02);
    pvVar2 = (void *)(lVar19 + (long)__ptr_01);
    if ((ulong)((long)__ptr_00 + (lVar19 - (long)pvVar2)) < 0x20) {
      lVar21 = 0;
LAB_001005d0:
      do {
        *(float *)((long)__ptr_00 + lVar21 * 4 + lVar19) =
             *(float *)((long)pvVar2 + lVar21 * 4) + *(float *)((long)pvVar1 + lVar21 * 4);
        uVar34 = lVar21 * 4 | 4;
        *(float *)((long)__ptr_00 + uVar34 + lVar19) =
             *(float *)(uVar34 + (long)pvVar2) + *(float *)(uVar34 + (long)pvVar1);
        lVar21 = lVar21 + 2;
      } while (lVar21 != 0x870);
    }
    else {
      lVar22 = 0;
      lVar21 = 0;
      if ((ulong)((long)__ptr_00 + (lVar19 - (long)pvVar1)) < 0x20) goto LAB_001005d0;
      do {
        pfVar3 = (float *)((long)pvVar2 + lVar22 * 4);
        fVar26 = pfVar3[1];
        fVar29 = pfVar3[2];
        fVar31 = pfVar3[3];
        pfVar4 = (float *)((long)pvVar2 + lVar22 * 4 + 0x10);
        fVar25 = *pfVar4;
        fVar6 = pfVar4[1];
        fVar7 = pfVar4[2];
        fVar8 = pfVar4[3];
        pfVar4 = (float *)((long)pvVar1 + lVar22 * 4);
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        pfVar5 = (float *)((long)pvVar1 + lVar22 * 4 + 0x10);
        fVar12 = *pfVar5;
        fVar13 = pfVar5[1];
        fVar14 = pfVar5[2];
        fVar15 = pfVar5[3];
        pfVar5 = (float *)((long)__ptr_00 + lVar22 * 4 + lVar19);
        *pfVar5 = *pfVar4 + *pfVar3;
        pfVar5[1] = fVar9 + fVar26;
        pfVar5[2] = fVar10 + fVar29;
        pfVar5[3] = fVar11 + fVar31;
        pfVar3 = (float *)((long)__ptr_00 + lVar22 * 4 + lVar19 + 0x10);
        *pfVar3 = fVar12 + fVar25;
        pfVar3[1] = fVar13 + fVar6;
        pfVar3[2] = fVar14 + fVar7;
        pfVar3[3] = fVar15 + fVar8;
        uVar34 = lVar22 * 4 | 0x20;
        pfVar3 = (float *)(uVar34 + (long)pvVar2);
        auVar27 = *(undefined (*) [16])(uVar34 + 0x10 + (long)pvVar2);
        pfVar4 = (float *)(uVar34 + (long)pvVar1);
        pfVar5 = (float *)(uVar34 + 0x10 + (long)pvVar1);
        fVar26 = *pfVar5;
        fVar29 = pfVar5[1];
        fVar31 = pfVar5[2];
        fVar25 = pfVar5[3];
        *(undefined (*) [16])((long)__ptr_00 + uVar34 + lVar19) =
             CONCAT412(pfVar4[3] + pfVar3[3],
                       CONCAT48(pfVar4[2] + pfVar3[2],
                                CONCAT44(pfVar4[1] + pfVar3[1],*pfVar4 + *pfVar3)));
        pfVar3 = (float *)((long)__ptr_00 + uVar34 + 0x10 + lVar19);
        *pfVar3 = fVar26 + SUB164(auVar27,0);
        pfVar3[1] = fVar29 + SUB164(auVar27 >> 0x20,0);
        pfVar3[2] = fVar31 + SUB164(auVar27 >> 0x40,0);
        pfVar3[3] = fVar25 + SUB164(auVar27 >> 0x60,0);
        lVar22 = lVar22 + 0x10;
      } while (lVar22 != 0x870);
    }
    __stream = _DAT_1593d8d48288b4c;
    lVar20 = lVar20 + 1;
    if (lVar20 == 0x1000) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_1593d8d48288b4c);
        lVar19 = 0;
        fprintf(__stream,"begin dump: %s","imgOut");
        do {
          lVar20 = 0;
          do {
            if (((uint)(((int)lVar19 * 0x870 + (int)lVar20) * -0x33333333) >> 2 |
                (int)lVar20 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2f ",
                    (double)*(float *)((long)__ptr_00 + lVar20 * 4 + lVar19 * 0x21c0));
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x870);
          lVar19 = lVar19 + 1;
        } while (lVar19 != 0x1000);
        fprintf(__stream,"\nend   dump: %s\n","imgOut");
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      free(__ptr_02);
      return 0;
    }
  } while( true );
}


