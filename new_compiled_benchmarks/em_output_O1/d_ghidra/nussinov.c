#include "nussinov.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  FILE *__stream;
  int iVar4;
  void *__ptr;
  void *__s;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  
  __ptr = (void *)polybench_alloc_data(0x9c4,1);
  __s = (void *)polybench_alloc_data(0x5f5e10);
  lVar5 = 0;
  do {
    lVar12 = lVar5 + 1;
    *(byte *)((long)__ptr + lVar5) = (byte)lVar12 & 3;
    lVar5 = lVar12;
  } while (lVar12 != 0x9c4);
  memset(__s,0,25000000);
  uVar6 = 0x9c4;
  uVar7 = 0x9c3;
  do {
    if (uVar7 < 0x9c3) {
      uVar1 = uVar7 + 1;
      uVar9 = uVar6;
      do {
        iVar8 = *(int *)((long)__s + uVar9 * 4 + uVar7 * 10000 + -4);
        iVar10 = *(int *)((long)__s + uVar9 * 4 + uVar7 * 10000);
        if (iVar8 < iVar10) {
          iVar8 = iVar10;
        }
        *(int *)((long)__s + uVar9 * 4 + uVar7 * 10000) = iVar8;
        iVar10 = *(int *)((long)__s + uVar9 * 4 + uVar1 * 10000);
        if (iVar8 <= iVar10) {
          iVar8 = iVar10;
        }
        *(int *)((long)__s + uVar9 * 4 + uVar7 * 10000) = iVar8;
        iVar10 = *(int *)((long)__s + uVar9 * 4 + uVar1 * 10000 + -4);
        if (uVar7 < uVar9 - 1) {
          iVar10 = iVar10 + (uint)((int)*(char *)((long)__ptr + uVar9) +
                                   (int)*(char *)((long)__ptr + uVar7) == 3);
        }
        piVar3 = (int *)((long)__s + uVar9 * 4 + uVar7 * 10000);
        if (iVar10 < iVar8) {
          iVar10 = iVar8;
        }
        *piVar3 = iVar10;
        if (uVar1 < uVar9) {
          iVar8 = *piVar3;
          uVar11 = uVar6;
          do {
            uVar2 = uVar11 + 1;
            iVar10 = *(int *)((long)__s + uVar9 * 4 + uVar2 * 10000) +
                     *(int *)((long)__s + uVar11 * 4 + uVar7 * 10000);
            if (iVar8 <= iVar10) {
              iVar8 = iVar10;
            }
            *piVar3 = iVar8;
            uVar11 = uVar2;
          } while (uVar2 != uVar9);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x9c4);
    }
    __stream = _DAT_f23d8d48388b4c;
    uVar6 = uVar6 - 1;
    bVar13 = uVar7 != 0;
    uVar7 = uVar7 - 1;
  } while (bVar13);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_f23d8d48388b4c);
    fprintf(__stream,"begin dump: %s","table");
    iVar4 = 0x9c4;
    lVar12 = 0;
    iVar8 = 0;
    lVar5 = lVar12;
    iVar10 = iVar8;
    do {
      do {
        if ((iVar8 * -0x33333333 + 0x19999998U >> 2 | iVar8 * 0x40000000) < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,(char *)&_L_str_5,(ulong)*(uint *)((long)__s + lVar12 * 4 + lVar5 * 10000))
        ;
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x9c4);
      iVar8 = iVar10 + iVar4;
      lVar12 = lVar5 + 1;
      iVar4 = iVar4 + -1;
      lVar5 = lVar12;
      iVar10 = iVar8;
    } while (lVar12 != 0x9c4);
    fprintf(__stream,"\nend   dump: %s\n","table");
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__s);
  return 0;
}


