int64_t __asm_hlt(int64_t, ...);
int64_t __asm_movsd(int64_t, ...);
int64_t __asm_movsd_1(int64_t, ...);
int64_t __asm_subsd(int64_t, ...);
int64_t __asm_cvtsi2sd(int64_t, ...);
int64_t __asm_mulsd(int64_t, ...);
int64_t __asm_cvtsi2sd_2(int64_t, ...);
int64_t __asm_addsd(int64_t, ...);
int64_t _abs(int32_t a1) ;
int32_t encode(int32_t xin1, int32_t xin2) ;
int32_t filtez(int32_t * bpl, int32_t * dlt) ;
int32_t filtep(int32_t rlt1, int32_t al1, int32_t rlt2, int32_t al2) ;
int32_t quantl(int32_t el, int32_t detl) ;
int32_t logscl(int32_t il, int32_t nbl) ;
int32_t scalel(uint32_t nbl, int32_t shift_constant) ;
void upzero(int32_t dlt, int32_t * dlti, int32_t * bli) ;
int32_t uppol2(int32_t al1, int32_t al2, int32_t plt, int32_t plt1, int32_t plt2) ;
int32_t uppol1(int32_t al1, int32_t apl2, int32_t plt, int32_t plt1) ;
int32_t logsch(int32_t ih, int32_t nbh) ;
void decode(int32_t input) ;
