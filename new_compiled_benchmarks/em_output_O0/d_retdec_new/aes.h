int64_t __asm_movaps_1(int64_t, ...);
int64_t __asm_movaps(int64_t, ...);
int64_t __asm_movsd(int64_t, ...);
int64_t __asm_movsd_2(int64_t, ...);
int64_t __asm_subsd(int64_t, ...);
int64_t __asm_cvtsi2sd(int64_t, ...);
int64_t __asm_mulsd(int64_t, ...);
int64_t __asm_cvtsi2sd_3(int64_t, ...);
int64_t __asm_addsd(int64_t, ...);
int64_t encrypt(int64_t a1, int64_t a2, int64_t a3) ;
int32_t KeySchedule(int32_t type, int32_t * key) ;
int32_t AddRoundKey(int32_t * statemt, int32_t type, int32_t n) ;
void ByteSub_ShiftRow(int32_t * statemt, int32_t nb) ;
int32_t MixColumn_AddRoundKey(int32_t * statemt, uint32_t nb, int32_t n) ;
int32_t SubByte(uint32_t in) ;
int32_t decrypt(int32_t * statemt, int32_t * key, int32_t type) ;
void InversShiftRow_ByteSub(int32_t * statemt, int32_t nb) ;
int32_t AddRoundKey_InversMixColumn(int32_t * statemt, uint32_t nb, int32_t n) ;
int32_t aes_main(void) ;
unsigned int g5, g4, g3, g2, g1, g9, g8, g7, g6, g1;
