#include "durbin.h"



void kernel_durbin(int param_1,ulong *param_2,ulong *param_3)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  double local_3eb8 [2001];
  
  *param_3 = *param_2 ^ 0x8000000000000000;
  if (1 < param_1) {
    dVar7 = (double)(*param_2 ^ 0x8000000000000000);
    auVar9 = ZEXT816(0x3ff0000000000000);
    uVar4 = 1;
    uVar5 = 0;
    do {
      if (uVar5 == 0) {
        dVar6 = 0.0;
        uVar2 = 0;
      }
      else {
        dVar6 = 0.0;
        uVar2 = 0;
        uVar3 = 0;
        do {
          dVar6 = (double)param_2[(uVar4 - uVar2) + -2] *
                  *(double *)((long)param_3 + (uVar2 * 8 | 8)) +
                  (double)param_2[~uVar2 + uVar4] * (double)param_3[uVar2] + dVar6;
          uVar2 = uVar2 + 2;
          uVar3 = uVar3 + 2;
        } while (uVar3 != (uVar4 & 0x7ffffffffffffffe));
      }
      if ((uVar4 & 1) != 0) {
        dVar6 = dVar6 + (double)param_2[~uVar2 + uVar4] * (double)param_3[uVar2];
      }
      dVar8 = SUB168(auVar9,0) * (1.0 - dVar7 * dVar7);
      dVar7 = (double)((ulong)(dVar6 + (double)param_2[uVar4]) ^ 0x8000000000000000) / dVar8;
      if (3 < uVar4) {
        uVar2 = uVar4 & 0x7ffffffffffffffc;
        uVar3 = 0;
        do {
          dVar6 = (double)param_3[uVar3 + 2];
          dVar1 = (double)(param_3 + uVar3 + 2)[1];
          auVar10 = shufpd(*(undefined (*) [16])(param_3 + ~uVar3 + uVar4 + -1),
                           *(undefined (*) [16])(param_3 + ~uVar3 + uVar4 + -1),1);
          auVar9 = shufpd(*(undefined (*) [16])(param_3 + ~uVar3 + uVar4 + -3),
                          *(undefined (*) [16])(param_3 + ~uVar3 + uVar4 + -3),1);
          *(undefined (*) [16])(local_3eb8 + uVar3) =
               CONCAT88(SUB168(auVar10 >> 0x40,0) * dVar7 + (double)(param_3 + uVar3)[1],
                        SUB168(auVar10,0) * dVar7 + (double)param_3[uVar3]);
          local_3eb8[uVar3 + 2] = SUB168(auVar9,0) * dVar7 + dVar6;
          local_3eb8[uVar3 + 3] = SUB168(auVar9 >> 0x40,0) * dVar7 + dVar1;
          uVar3 = uVar3 + 4;
          if (uVar3 == uVar2) goto joined_r0x001001c2;
        } while( true );
      }
      uVar2 = 0;
      do {
        local_3eb8[uVar2] = (double)param_3[~uVar2 + uVar4] * dVar7 + (double)param_3[uVar2];
        uVar2 = uVar2 + 1;
joined_r0x001001c2:
      } while (uVar4 != uVar2);
      memcpy(param_3,local_3eb8,uVar5 * 8 + 8);
      param_3[uVar4] = (ulong)dVar7;
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + 1;
      auVar9 = ZEXT816((ulong)dVar8);
    } while (uVar5 != param_1 - 1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  FILE *__stream;
  ulong *__ptr;
  ulong *__dest;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined auVar11 [16];
  double dVar12;
  undefined auVar13 [16];
  double local_3eb8 [2001];
  
  __ptr = (ulong *)polybench_alloc_data(2000,8);
  __dest = (ulong *)polybench_alloc_data(2000,8);
  iVar8 = 0;
  lVar4 = 0;
  do {
    __ptr[lVar4] = (ulong)(double)(0x7d1 - iVar8);
    (__ptr + lVar4)[1] = (ulong)(double)(int)((ulong)(double)(0x7d1 - iVar8) >> 0x20);
    __ptr[lVar4 + 2] = (ulong)(double)(1999 - iVar8);
    (__ptr + lVar4 + 2)[1] = (ulong)(double)(int)((ulong)(double)(1999 - iVar8) >> 0x20);
    uVar6 = lVar4 * 8 | 0x20;
    pdVar1 = (double *)((long)__ptr + uVar6);
    *pdVar1 = (double)(0x7cd - iVar8);
    pdVar1[1] = (double)(int)((ulong)(double)(0x7cd - iVar8) >> 0x20);
    pdVar1 = (double *)((long)__ptr + uVar6 + 0x10);
    *pdVar1 = (double)(0x7cb - iVar8);
    pdVar1[1] = (double)(int)((ulong)(double)(0x7cb - iVar8) >> 0x20);
    lVar4 = lVar4 + 8;
    iVar8 = iVar8 + 8;
  } while (lVar4 != 2000);
  *__dest = *__ptr ^ 0x8000000000000000;
  dVar10 = (double)(*__ptr ^ 0x8000000000000000);
  auVar11 = ZEXT816(0x3ff0000000000000);
  uVar6 = 1;
  lVar4 = 0;
  while( true ) {
    if (lVar4 == 0) {
      dVar9 = 0.0;
      uVar5 = 0;
    }
    else {
      dVar9 = 0.0;
      uVar5 = 0;
      uVar7 = 0;
      do {
        dVar9 = (double)__ptr[(uVar6 - uVar5) + -2] * *(double *)((long)__dest + (uVar5 * 8 | 8)) +
                (double)__ptr[~uVar5 + uVar6] * (double)__dest[uVar5] + dVar9;
        uVar5 = uVar5 + 2;
        uVar7 = uVar7 + 2;
      } while (uVar7 != (uVar6 & 0x7ffffffffffffffe));
    }
    if ((uVar6 & 1) != 0) {
      dVar9 = dVar9 + (double)__ptr[~uVar5 + uVar6] * (double)__dest[uVar5];
    }
    dVar12 = SUB168(auVar11,0) * ((double)((ulong)dVar10 ^ 0x8000000000000000) * dVar10 + 1.0);
    dVar10 = (double)((ulong)(dVar9 + (double)__ptr[uVar6]) ^ 0x8000000000000000) / dVar12;
    if (3 < uVar6) break;
    uVar5 = 0;
    do {
      local_3eb8[uVar5] = (double)__dest[~uVar5 + uVar6] * dVar10 + (double)__dest[uVar5];
      uVar5 = uVar5 + 1;
joined_r0x001004b6:
    } while (uVar6 != uVar5);
    memcpy(__dest,local_3eb8,lVar4 * 8 + 8);
    __dest[uVar6] = (ulong)dVar10;
    __stream = _DAT_1523d8d48388b4c;
    uVar6 = uVar6 + 1;
    lVar4 = lVar4 + 1;
    auVar11 = ZEXT816((ulong)dVar12);
    if (lVar4 == 1999) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_1523d8d48388b4c);
        lVar4 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          if ((ushort)((ushort)((short)lVar4 * -0x3333) >> 2 | (short)lVar4 * 0x4000) < 0xccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",__dest[lVar4]);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 2000);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__dest);
      return 0;
    }
  }
  uVar5 = uVar6 & 0x7ffffffffffffffc;
  uVar7 = 0;
  do {
    dVar9 = (double)(__dest + uVar7)[1];
    dVar2 = (double)__dest[uVar7 + 2];
    dVar3 = (double)(__dest + uVar7 + 2)[1];
    auVar13 = shufpd(*(undefined (*) [16])(__dest + ~uVar7 + uVar6 + -1),
                     *(undefined (*) [16])(__dest + ~uVar7 + uVar6 + -1),1);
    auVar11 = shufpd(*(undefined (*) [16])(__dest + ~uVar7 + uVar6 + -3),
                     *(undefined (*) [16])(__dest + ~uVar7 + uVar6 + -3),1);
    local_3eb8[uVar7] = SUB168(auVar13,0) * dVar10 + (double)__dest[uVar7];
    local_3eb8[uVar7 + 1] = SUB168(auVar13 >> 0x40,0) * dVar10 + dVar9;
    local_3eb8[uVar7 + 2] = SUB168(auVar11,0) * dVar10 + dVar2;
    local_3eb8[uVar7 + 3] = SUB168(auVar11 >> 0x40,0) * dVar10 + dVar3;
    uVar7 = uVar7 + 4;
    if (uVar7 == uVar5) goto joined_r0x001004b6;
  } while( true );
}


