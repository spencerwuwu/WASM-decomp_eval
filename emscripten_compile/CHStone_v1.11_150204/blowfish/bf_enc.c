# 1 "./CHStone_v1.11_150204/blowfish/bf_enc.c"
# 81 "./CHStone_v1.11_150204/blowfish/bf_enc.c"
void
BF_encrypt (data, encrypt)
     BF_LONG *data;
     int encrypt;
{
  register BF_LONG l, r, *p, *s;
  p = key_P;
  s = &(key_S[0]);
  l = data[0];
  r = data[1];

  if (encrypt)
    {
      l ^= p[0];

      BF_ENC (r, l, s, p[1]);
      BF_ENC (l, r, s, p[2]);
      BF_ENC (r, l, s, p[3]);
      BF_ENC (l, r, s, p[4]);
      BF_ENC (r, l, s, p[5]);
      BF_ENC (l, r, s, p[6]);
      BF_ENC (r, l, s, p[7]);
      BF_ENC (l, r, s, p[8]);
      BF_ENC (r, l, s, p[9]);
      BF_ENC (l, r, s, p[10]);
      BF_ENC (r, l, s, p[11]);
      BF_ENC (l, r, s, p[12]);
      BF_ENC (r, l, s, p[13]);
      BF_ENC (l, r, s, p[14]);
      BF_ENC (r, l, s, p[15]);
      BF_ENC (l, r, s, p[16]);
      r ^= p[BF_ROUNDS + 1];
    }
  else
    {
      l ^= p[BF_ROUNDS + 1];
      BF_ENC (r, l, s, p[16]);
      BF_ENC (l, r, s, p[15]);
      BF_ENC (r, l, s, p[14]);
      BF_ENC (l, r, s, p[13]);
      BF_ENC (r, l, s, p[12]);
      BF_ENC (l, r, s, p[11]);
      BF_ENC (r, l, s, p[10]);
      BF_ENC (l, r, s, p[9]);
      BF_ENC (r, l, s, p[8]);
      BF_ENC (l, r, s, p[7]);
      BF_ENC (r, l, s, p[6]);
      BF_ENC (l, r, s, p[5]);
      BF_ENC (r, l, s, p[4]);
      BF_ENC (l, r, s, p[3]);
      BF_ENC (r, l, s, p[2]);
      BF_ENC (l, r, s, p[1]);
      r ^= p[0];
    }
  data[1] = l & 0xffffffff;
  data[0] = r & 0xffffffff;
}
