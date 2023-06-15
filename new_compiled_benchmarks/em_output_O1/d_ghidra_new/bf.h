typedef struct bf_key_st bf_key_st, *Pbf_key_st;
typedef struct bf_key_st BF_KEY;
struct bf_key_st {
uint P[18];
  uint S[1024];
};
void local_memcpy(int8 *param_1,int8 *param_2,int param_3)  ;
void BF_set_key(BF_KEY *key,int len,uchar *data)  ;
void BF_encrypt(uint *data,BF_KEY *key)  ;
void BF_cfb64_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int *num,int enc                      )  ;
unsigned int DAT_ba00000000358b48, _DAT_48000000888e33d0, _DAT_48000000888e33c8, _DAT_48000000888e33c0, _DAT_48000000888e33b8, _DAT_48000000888e33b0, _DAT_48000000888e33a8, _DAT_48000000888e33a0, _DAT_48000000888e3398, _DAT_48000000888e3390, _DAT_48000000888e3388, _DAT_48000000888e3380, _DAT_48000000888e3378, _DAT_48000000888e3370, _DAT_48000000888e3368, _DAT_48000000888e3360, _DAT_48000000888e3358, _DAT_48000000888e3350, _DAT_48000000888e3348, _DAT_c148ca89480e3348, _DAT_c148ca89480e3350, _DAT_c148ca89480e3358, _DAT_c148ca89480e3360, _DAT_c148ca89480e3368, _DAT_c148ca89480e3370, _DAT_c148ca89480e3378, _DAT_c148ca89480e3380, _DAT_c148ca89480e3388, _DAT_c148ca89480e3390, _DAT_c148ca89480e3398, _DAT_c148ca89480e33a0, _DAT_c148ca89480e33a8, _DAT_c148ca89480e33b0, _DAT_c148ca89480e33b8, _DAT_c148ca89480e33c0, _DAT_c148ca89480e33c8, _DAT_c148ca89480e33d0;
