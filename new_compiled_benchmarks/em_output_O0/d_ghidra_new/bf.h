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
unsigned int _DAT_58b48d84589d0, _DAT_58b48d84589c8, _DAT_58b48d84589c0, _DAT_58b48d84589b8, _DAT_58b48d84589b0, _DAT_58b48d84589a8, _DAT_58b48d84589a0, _DAT_58b48d8458998, _DAT_58b48d8458990, _DAT_58b48d8458988, _DAT_58b48d8458980, _DAT_58b48d8458978, _DAT_58b48d8458970, _DAT_58b48d8458968, _DAT_58b48d8458960, _DAT_58b48d8458958, _DAT_58b48d8458950, _DAT_58b48d8458948;
