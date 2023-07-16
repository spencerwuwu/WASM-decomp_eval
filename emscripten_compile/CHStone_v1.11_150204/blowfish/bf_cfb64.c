# 1 "./CHStone_v1.11_150204/blowfish/bf_cfb64.c"
# 81 "./CHStone_v1.11_150204/blowfish/bf_cfb64.c"
void
BF_cfb64_encrypt (in, out, length, ivec, num, encrypt)
     unsigned char *in;
     unsigned char *out;
     long length;
     unsigned char *ivec;
     int *num;
     int encrypt;
{
  register BF_LONG v0, v1, t;
  register int n;
  register long l;
  BF_LONG ti[2];
  unsigned char *iv, c, cc;

  n = *num;
  l = length;
  iv = (unsigned char *) ivec;
  if (encrypt)
    {
      while (l--)
 {
   if (n == 0)
     {
       n2l (iv, v0);
       ti[0] = v0;
       n2l (iv, v1);
       ti[1] = v1;
       BF_encrypt ((unsigned long *) ti, BF_ENCRYPT);
       iv = (unsigned char *) ivec;
       t = ti[0];
       l2n (t, iv);
       t = ti[1];
       l2n (t, iv);

       iv = (unsigned char *) ivec;
     }
   c = *(in++) ^ iv[n];
   *(out++) = c;
   iv[n] = c;
   n = (n + 1) & 0x07;
 }
    }
  else
    {
      while (l--)
 {
   if (n == 0)
     {
       n2l (iv, v0);
       ti[0] = v0;
       n2l (iv, v1);
       ti[1] = v1;
       BF_encrypt ((unsigned long *) ti, BF_ENCRYPT);
       iv = (unsigned char *) ivec;
       t = ti[0];
       l2n (t, iv);
       t = ti[1];
       l2n (t, iv);
       iv = (unsigned char *) ivec;
     }
   cc = *(in++);
   c = iv[n];
   iv[n] = cc;
   *(out++) = c ^ cc;
   n = (n + 1) & 0x07;
 }
    }
  v0 = v1 = ti[0] = ti[1] = t = c = cc = 0;
  *num = n;
}
