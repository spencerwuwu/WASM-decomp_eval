# 1 "./CHStone_v1.11_150204/aes/aes_dec.c"
# 62 "./CHStone_v1.11_150204/aes/aes_dec.c"
int
decrypt (int statemt[32], int key[32], int type)
{
  int i;






  const int out_dec_statemt[16] =
    { 0x32, 0x43, 0xf6, 0xa8, 0x88, 0x5a, 0x30, 0x8d, 0x31, 0x31, 0x98, 0xa2,
    0xe0, 0x37, 0x7, 0x34
  };
  KeySchedule (type, key);

  switch (type)
    {
    case 128128:
      round_val = 10;
      nb = 4;
      break;
    case 128192:
    case 192192:
      round_val = 12;
      nb = 6;
      break;
    case 192128:
      round_val = 12;
      nb = 4;
      break;
    case 128256:
    case 192256:
      round_val = 14;
      nb = 8;
      break;
    case 256128:
      round_val = 14;
      nb = 4;
      break;
    case 256192:
      round_val = 14;
      nb = 6;
      break;
    case 256256:
      round_val = 14;
      nb = 8;
      break;
    }

  AddRoundKey (statemt, type, round_val);

  InversShiftRow_ByteSub (statemt, nb);

  for (i = round_val - 1; i >= 1; --i)
    {
      AddRoundKey_InversMixColumn (statemt, nb, i);
      InversShiftRow_ByteSub (statemt, nb);
    }

  AddRoundKey (statemt, type, 0);
# 137 "./CHStone_v1.11_150204/aes/aes_dec.c"
  for (i = 0; i < 16; i++)
    main_result += (statemt[i] != out_dec_statemt[i]);

  return 0;
}
