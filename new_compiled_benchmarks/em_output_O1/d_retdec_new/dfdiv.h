int64_t __asm_int1(int64_t, ...);
int64_t __asm_cvtsi2sd(int64_t, ...);
int64_t __asm_addsd(int64_t, ...);
int64_t __asm_mulsd(int64_t, ...);
int64_t __asm_cvtsi2sd_1(int64_t, ...);
int64_t __asm_movsd(int64_t, ...);
int64_t __asm_xorps(int64_t, ...);
int64_t __asm_subsd(int64_t, ...);
int64_t shift64RightJamming(uint64_t a1, int64_t a2, int64_t a3) ;
int64_t add128(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) ;
int64_t sub128(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) ;
int64_t mul64To128(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) ;
int64_t float_raise(int64_t a1) ;
int64_t float64_is_nan(int64_t a1) ;
int64_t float64_is_signaling_nan(int64_t a1) ;
int64_t extractFloat64Frac(int64_t a1) ;
int64_t extractFloat64Exp(uint64_t a1) ;
int32_t extractFloat64Sign(uint64_t a) ;
int64_t normalizeFloat64Subnormal(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) ;
int64_t packFloat64(int64_t a1, int64_t a2, int64_t a3) ;
int64_t roundAndPackFloat64(uint32_t zSign, int32_t zExp, uint64_t zSig) ;
int64_t float64_div(uint64_t a, uint64_t b) ;
float64_t ullong_to_double(int64_t x) ;
unsigned int g1, g1;
