#include "nussinov.h"



void kernel_nussinov(int param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (0 < param_1) {
    lVar4 = (long)param_1;
    do {
      lVar5 = lVar4 + -1;
      lVar8 = lVar4;
      if (lVar4 < param_1) {
        do {
          lVar9 = lVar5 * 10000 + param_3;
          piVar2 = (int *)(lVar9 + lVar8 * 4);
          iVar6 = *(int *)(lVar9 + lVar8 * 4);
          if (lVar8 < 1) {
            iVar7 = *(int *)(lVar4 * 10000 + param_3 + lVar8 * 4);
            if (iVar7 < iVar6) {
              iVar7 = iVar6;
            }
            *piVar2 = iVar7;
          }
          else {
            uVar10 = (ulong)((int)lVar8 - 1);
            iVar7 = *(int *)(lVar9 + uVar10 * 4);
            if (iVar7 < iVar6) {
              iVar7 = iVar6;
            }
            *piVar2 = iVar7;
            lVar11 = lVar4 * 10000 + param_3;
            iVar6 = *(int *)(lVar11 + lVar8 * 4);
            if (iVar7 <= iVar6) {
              iVar7 = iVar6;
            }
            *(int *)(lVar9 + lVar8 * 4) = iVar7;
            iVar6 = *(int *)(lVar11 + uVar10 * 4);
            if (lVar4 < lVar8) {
              iVar6 = iVar6 + (uint)((int)*(char *)(param_2 + lVar8) +
                                     (int)*(char *)(param_2 + lVar5) == 3);
            }
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *piVar2 = iVar6;
          }
          if (lVar4 < lVar8) {
            iVar6 = *(int *)(lVar9 + lVar8 * 4);
            lVar11 = lVar4;
            do {
              lVar1 = lVar11 + 1;
              iVar7 = *(int *)(lVar1 * 10000 + param_3 + lVar8 * 4) + *(int *)(lVar9 + lVar11 * 4);
              if (iVar6 <= iVar7) {
                iVar6 = iVar7;
              }
              *piVar2 = iVar6;
              lVar11 = lVar1;
            } while ((int)lVar1 != (int)lVar8);
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 != param_1);
      }
      bVar3 = 1 < lVar4;
      lVar4 = lVar5;
    } while (bVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__s;
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  __ptr = (void *)polybench_alloc_data(0x9c4,1);
  __s = (void *)polybench_alloc_data(0x5f5e10);
  lVar1 = 0;
  do {
    lVar4 = lVar1 + 1;
    *(byte *)((long)__ptr + lVar1) = (byte)lVar4 & 3;
    lVar1 = lVar4;
  } while (lVar4 != 0x9c4);
  memset(__s,0,25000000);
  kernel_nussinov(0x9c4,__ptr,__s);
  __stream = _DAT_e13d8d48388b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_e13d8d48388b4c);
    fprintf(__stream,"begin dump: %s","table");
    iVar3 = 0x9c4;
    lVar4 = 0;
    iVar2 = 0;
    iVar5 = iVar2;
    lVar1 = lVar4;
    do {
      do {
        if ((iVar2 * -0x33333333 + 0x19999998U >> 2 | iVar2 * 0x40000000) < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,(char *)&_L_str_5,(ulong)*(uint *)((long)__s + lVar4 * 4 + lVar1 * 10000));
        iVar2 = iVar2 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x9c4);
      iVar2 = iVar5 + iVar3;
      lVar4 = lVar1 + 1;
      iVar3 = iVar3 + -1;
      iVar5 = iVar2;
      lVar1 = lVar4;
    } while (lVar4 != 0x9c4);
    fprintf(__stream,"\nend   dump: %s\n","table");
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__s);
  return 0;
}


