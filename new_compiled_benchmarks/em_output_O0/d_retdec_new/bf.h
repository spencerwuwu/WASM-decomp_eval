int64_t __asm_movsd(int64_t, ...);
int64_t __asm_movsd_1(int64_t, ...);
int64_t __asm_subsd(int64_t, ...);
int64_t __asm_cvtsi2sd(int64_t, ...);
int64_t __asm_mulsd(int64_t, ...);
int64_t __asm_cvtsi2sd_2(int64_t, ...);
int64_t __asm_addsd(int64_t, ...);
int64_t local_memcpy(int64_t a1, int64_t a2, int64_t a3) ;
void BF_set_key(int32_t len, char * data) ;
void BF_encrypt(int64_t * data, int32_t encrypt) ;
void BF_cfb64_encrypt(char * in, char * out, int64_t length, char * ivec, int32_t * num, int32_t encrypt) ;
