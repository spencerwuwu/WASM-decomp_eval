int64_t __asm_cvtsi2sd(int64_t, ...);
int64_t __asm_movsd_1(int64_t, ...);
int64_t __asm_divsd(int64_t, ...);
int64_t __asm_movsd(int64_t, ...);
int64_t __asm_xorps(int64_t, ...);
int64_t __asm_addsd(int64_t, ...);
int64_t __asm_mulsd(int64_t, ...);
void kernel_3mm(uint32_t ni, uint32_t nj, uint32_t nk, uint32_t nl, uint32_t nm, float64_t (*E)[1], float64_t (*A)[1], float64_t (*B)[1], float64_t (*F)[1], float64_t (*C)[1], float64_t (*D)[1], float64_t (*G)[1]) ;
