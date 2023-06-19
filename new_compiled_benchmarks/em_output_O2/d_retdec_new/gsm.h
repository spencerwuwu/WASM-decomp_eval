int64_t __asm_pxor(int64_t, ...);
int64_t __asm_movdqa(int64_t, ...);
int64_t __asm_movdqu(int64_t, ...);
int64_t __asm_pcmpgtw(int64_t, ...);
int64_t __asm_pcmpeqw(int64_t, ...);
int64_t __asm_psubw(int64_t, ...);
int64_t __asm_por(int64_t, ...);
int64_t __asm_psrlw(int64_t, ...);
int64_t __asm_pandn(int64_t, ...);
int64_t __asm_pand(int64_t, ...);
int64_t __asm_pmaxsw(int64_t, ...);
int64_t __asm_pshufd(int64_t, ...);
int64_t __asm_movd(int64_t, ...);
int64_t __asm_psrld(int64_t, ...);
int64_t __asm_movdqu_1(int64_t, ...);
int64_t __asm_punpckhwd(int64_t, ...);
int64_t __asm_punpcklwd(int64_t, ...);
int64_t __asm_movd_2(int64_t, ...);
int64_t __asm_pslld(int64_t, ...);
int64_t __asm_packssdw(int64_t, ...);
int64_t __asm_psrad(int64_t, ...);
int64_t __asm_pslld_3(int64_t, ...);
int64_t __asm_movups(int64_t, ...);
int64_t __asm_xorps(int64_t, ...);
int64_t __asm_pmaddwd(int64_t, ...);
int64_t __asm_paddsw(int64_t, ...);
int64_t __asm_pextrw(int64_t, ...);
int64_t __asm_pinsrw(int64_t, ...);
int64_t __asm_paddw(int64_t, ...);
int64_t __asm_psraw(int64_t, ...);
int64_t __asm_cvtsi2sd(int64_t, ...);
int64_t __asm_movsd(int64_t, ...);
int64_t __asm_addsd(int64_t, ...);
int64_t __asm_mulsd(int64_t, ...);
int64_t __asm_cvtsi2sd_4(int64_t, ...);
int64_t __asm_pcmpeqd(int64_t, ...);
int64_t __asm_movq(int64_t, ...);
int64_t __asm_paddd(int64_t, ...);
int64_t __asm_movdqa_5(int64_t, ...);
int64_t __asm_movaps(int64_t, ...);
int64_t __asm_movaps_6(int64_t, ...);
int64_t __asm_packsswb(int64_t, ...);
int64_t __asm_pmovmskb(int64_t, ...);
int64_t __asm_subsd(int64_t, ...);
int64_t gsm_add(int64_t a1, int64_t a2) ;
int64_t gsm_mult(int64_t a1, int64_t a2) ;
int64_t gsm_mult_r(int64_t a1, int64_t a2) ;
int64_t gsm_norm(int64_t a1) ;
int16_t gsm_div(uint16_t num, int16_t denum) ;
void Autocorrelation(int16_t * s, int64_t * L_ACF) ;
void Reflection_coefficients(int64_t * L_ACF, int16_t * r) ;
void Transformation_to_Log_Area_Ratios(int16_t * r) ;
void Quantization_and_coding(int16_t * LAR) ;
int64_t Gsm_LPC_Analysis(int64_t a1, int64_t a2) ;
unsigned int g11, g1, g2, g3, g4, g5, g7, g6, g8, g12;
