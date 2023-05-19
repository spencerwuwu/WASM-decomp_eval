#include "mpeg2.h"



ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  undefined4 in_register_0000003c;
  int local_34;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)CONCAT44(in_register_0000003c,__fd);
  local_34 = (int)__nbytes;
  local_30 = (undefined *)__buf;
  while (0 < local_34) {
    *local_28 = *local_30;
    local_28 = local_28 + 1;
    local_30 = local_30 + 1;
    local_34 = local_34 + -1;
  }
  return __nbytes & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Fill_Buffer(void)

{
  ssize_t sVar1;
  int iVar2;
  uint local_c;
  
  sVar1 = read(0x358b48,(void *)0xff65e800000800ba,0x800);
  local_c = (uint)sVar1;
  _DAT_48000000000d8b48 = &DAT_58b48088948;
  if (_DAT_1b840f003883 != 0) {
    _DAT_800fc7d81088948 = _DAT_f800c18148088b48 + -0x800;
  }
  if ((int)local_c < 0x800) {
    if ((int)local_c < 0) {
      local_c = 0;
    }
    while ((local_c & 3) != 0) {
      *(undefined *)((long)(int)local_c + -0x2c16fff7fb3a) = 0;
      local_c = local_c + 1;
    }
    while ((int)local_c < 0x800) {
      *(undefined *)((long)(int)local_c + -0x7603ba74fff7fb3a) = 0;
      *(undefined *)((long)(int)(local_c + 1) + -0x7603ba74fff7fb3a) = 0;
      iVar2 = local_c + 3;
      *(undefined *)((long)(int)(local_c + 2) + -0x7603ba74fef7fb3a) = 1;
      local_c = local_c + 4;
      *(undefined *)((long)iVar2 + -0x751648f7fb3a) = 0xb7;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint Show_Bits(char param_1)

{
  return _DAT_2b00000020b9008b >> (0x20U - param_1 & 0x1f);
}



void Get_Bits1(void)

{
  Get_Bits(1);
  return;
}



undefined4 Get_Bits(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = Show_Bits(param_1);
  Flush_Buffer(param_1);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Flush_Buffer(int param_1)

{
  int local_10;
  
  _DAT_58b48fc4d8b0889 = _DAT_8b48c189e0d3008b << ((byte)param_1 & 0x1f);
  _DAT_f87d83f845890189 = _DAT_d8b48c829008b - param_1;
  if (_DAT_f87d83f845890189 < 0x19) {
    local_10 = _DAT_f87d83f845890189;
    if (_DAT_59830f083948 < 0x48000007fcc18944) {
      do {
        _DAT_18b900b60f118948 = _DAT_8348c28948008b48 + 1;
        _DAT_8c083f8458b0889 =
             (uint)*_DAT_8348c28948008b48 << (0x18U - (char)local_10 & 0x1f) | _DAT_58b48080b;
        local_10 = local_10 + 8;
      } while (local_10 < 0x19);
    }
    else {
      do {
        if (0x4800000800c18947 < _DAT_5820f083948) {
          Fill_Buffer();
        }
        _DAT_18b900b60f118948 = _DAT_8348c28948008b48 + 1;
        _DAT_8c083f8458b0889 =
             (uint)*_DAT_8348c28948008b48 << (0x18U - (char)local_10 & 0x1f) | _DAT_58b48080b;
        local_10 = local_10 + 8;
      } while (local_10 < 0x19);
    }
    _DAT_c35d10c483480889 = local_10;
  }
  return;
}



int Get_motion_code(void)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  iVar1 = Get_Bits1();
  if (iVar1 == 0) {
    iVar1 = Show_Bits(9);
    if (iVar1 < 0x40) {
      if (iVar1 < 0x18) {
        iVar1 = iVar1 + -0xc;
        if (iVar1 < 0) {
          local_c = 0;
        }
        else {
          Flush_Buffer((int)*(char *)((long)iVar1 * 2 + -0x28c17feb78341f0));
          iVar2 = Get_Bits1();
          if (iVar2 == 0) {
            local_1c = (int)*(char *)((long)iVar1 * 2 + -0x7413ba76b7fb41f1);
          }
          else {
            local_1c = -(int)*(char *)((long)iVar1 * 2 + -0x37d63fceb7f341f1);
          }
          local_c = local_1c;
        }
      }
      else {
        iVar1 = iVar1 >> 3;
        Flush_Buffer((int)*(char *)((long)iVar1 * 2 + -0x21317feb78341f0));
        iVar2 = Get_Bits1();
        if (iVar2 == 0) {
          local_18 = (int)*(char *)((long)iVar1 * 2 + -0x740fba76b7fb41f1);
        }
        else {
          local_18 = -(int)*(char *)((long)iVar1 * 2 + -0x37d63fceb7f341f1);
        }
        local_c = local_18;
      }
    }
    else {
      iVar1 = iVar1 >> 6;
      Flush_Buffer((int)*(char *)((long)iVar1 * 2 + -0x1a517feb78341f0));
      iVar2 = Get_Bits1();
      if (iVar2 == 0) {
        local_14 = (int)*(char *)((long)iVar1 * 2 + -0x740bba76b7fb41f1);
      }
      else {
        local_14 = -(int)*(char *)((long)iVar1 * 2 + -0x37d63fceb7f341f1);
      }
      local_c = local_14;
    }
  }
  else {
    local_c = 0;
  }
  return local_c;
}



undefined4 Get_dmvector(void)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = Get_Bits(1);
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    iVar1 = Get_Bits(1);
    local_c = 1;
    if (iVar1 != 0) {
      local_c = 0xffffffff;
    }
  }
  return local_c;
}



void motion_vectors(long param_1,undefined8 param_2,long param_3,int param_4,int param_5,int param_6
                   ,undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10)

{
  undefined4 uVar1;
  
  if (param_5 == 1) {
    if ((param_6 == 0) && (param_9 == 0)) {
      uVar1 = Get_Bits(1);
      *(undefined4 *)(param_3 + (long)param_4 * 4) = uVar1;
      *(undefined4 *)(param_3 + 8 + (long)param_4 * 4) = uVar1;
    }
    motion_vector(param_1 + (long)param_4 * 8,param_2,param_7,param_8,param_9,param_10,0);
    *(undefined4 *)(param_1 + 0x10 + (long)param_4 * 8) =
         *(undefined4 *)(param_1 + (long)param_4 * 8);
    *(undefined4 *)(param_1 + 0x14 + (long)param_4 * 8) =
         *(undefined4 *)(param_1 + 4 + (long)param_4 * 8);
  }
  else {
    uVar1 = Get_Bits(1);
    *(undefined4 *)(param_3 + (long)param_4 * 4) = uVar1;
    motion_vector(param_1 + (long)param_4 * 8,param_2,param_7,param_8,param_9,param_10,0);
    uVar1 = Get_Bits(1);
    *(undefined4 *)(param_3 + 8 + (long)param_4 * 4) = uVar1;
    motion_vector(param_1 + 0x10 + (long)param_4 * 8,param_2,param_7,param_8,param_9,param_10,0);
  }
  return;
}



void motion_vector(long param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
                  undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = Get_motion_code();
  if ((param_3 == 0) || (iVar1 == 0)) {
    local_34 = 0;
  }
  else {
    local_34 = Get_Bits(param_3);
  }
  decode_motion_vector(param_1,param_3,iVar1,local_34,param_7);
  if (param_5 != 0) {
    uVar2 = Get_dmvector();
    *param_2 = uVar2;
  }
  iVar1 = Get_motion_code();
  if ((param_4 == 0) || (iVar1 == 0)) {
    local_38 = 0;
  }
  else {
    local_38 = Get_Bits(param_4);
  }
  if (param_6 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) >> 1;
  }
  decode_motion_vector(param_1 + 4,param_4,iVar1,local_38,param_7);
  if (param_6 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) << 1;
  }
  if (param_5 != 0) {
    uVar2 = Get_dmvector();
    param_2[1] = uVar2;
  }
  return;
}



void decode_motion_vector(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  int local_30;
  int local_2c;
  int local_28;
  
  bVar2 = (byte)(param_2 % 0x20);
  iVar1 = 0x10 << (bVar2 & 0x1f);
  if (param_5 == 0) {
    local_2c = *param_1;
  }
  else {
    local_2c = *param_1 >> 1;
  }
  local_28 = local_2c;
  if (param_3 < 1) {
    if ((param_3 < 0) &&
       (local_28 = local_2c - ((-1 - param_3 << (bVar2 & 0x1f)) + param_4 + 1), local_28 < -iVar1))
    {
      local_28 = iVar1 * 2 + local_28;
    }
  }
  else {
    local_28 = (param_3 + -1 << (bVar2 & 0x1f)) + param_4 + 1 + local_2c;
    if (iVar1 <= local_28) {
      local_28 = local_28 + iVar1 * -2;
    }
  }
  if (param_5 == 0) {
    local_30 = local_28;
  }
  else {
    local_30 = local_28 << 1;
  }
  *param_1 = local_30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Initialize_Buffer(void)

{
  _DAT_8b480000000000c7 = 0;
  _DAT_48000000000d8b48 = 0x4800000800c18948;
  _DAT_58b48088948 = _DAT_58b48088b48;
  _DAT_ff310410000000c7 = 0x4100000;
  Flush_Buffer(0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  int local_68 [6];
  int local_50 [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  _DAT_e845c700110ff2 = rtclock();
  local_20 = 0;
  _DAT_8b480000000000c7 = 0;
  _DAT_45c70000000000c7 = 0;
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    local_50[local_14] = 0;
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      local_68[(long)local_14 * 2 + (long)local_18] =
           *(int *)((long)local_14 * 8 + 0x48c8014803e1c148 + (long)local_18 * 4);
      for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
        local_50[(long)local_14 * 4 + (long)local_18 * 2 + (long)local_1c + 2] =
             *(int *)((long)local_14 * 0x10 + 0x48c8014804e1c148 + (long)local_18 * 8 +
                     (long)local_1c * 4);
      }
    }
  }
  Initialize_Buffer();
  motion_vectors(local_50 + 2,local_50,local_68,0,1,0,200,200,0,1);
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      local_20 = (uint)(local_68[(long)local_14 * 2 + (long)local_18] !=
                       *(int *)((long)local_14 * 8 + 0x48d1014803e2c148 + (long)local_18 * 4)) +
                 local_20;
      for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
        local_20 = (uint)(local_50[(long)local_14 * 4 + (long)local_18 * 2 + (long)local_1c + 2] !=
                         *(int *)((long)local_14 * 0x10 + 0x48d1014804e2c148 + (long)local_18 * 8 +
                                 (long)local_1c * 4)) + local_20;
      }
    }
  }
  _DAT_58b4800110ff2 = rtclock();
  printf("%0.6f\n",_DAT_58b4800100ff2 - _DAT_4f3d8d48005c0ff2);
  return local_20;
}



double rtclock(void)

{
  uint uVar1;
  undefined local_18 [16];
  
  uVar1 = gettimeofday((timeval *)local_18,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  return (double)local_18._8_4_ * 1e-06 + (double)local_18._0_8_;
}


