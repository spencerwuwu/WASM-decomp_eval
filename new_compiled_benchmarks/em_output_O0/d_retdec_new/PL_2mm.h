int64_t __asm_movsd_1(int64_t, ...);
int64_t __asm_movsd(int64_t, ...);
int64_t __asm_cvtsi2sd(int64_t, ...);
int64_t __asm_divsd(int64_t, ...);
int64_t __asm_xorps(int64_t, ...);
int64_t __asm_mulsd(int64_t, ...);
int64_t __asm_addsd(int64_t, ...);
int64_t __asm_mulsd_2(int64_t, ...);
void kernel_2mm(uint32_t ni, int32_t nj, uint32_t nk, uint32_t nl, float64_t alpha, float64_t beta, float64_t (*tmp)[1], float64_t (*A)[1], float64_t (*B)[1], float64_t (*C)[1], float64_t (*D)[1]) ;
