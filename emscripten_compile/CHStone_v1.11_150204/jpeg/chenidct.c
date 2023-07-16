# 1 "./CHStone_v1.11_150204/jpeg/chenidct.c"
# 54 "./CHStone_v1.11_150204/jpeg/chenidct.c"
#define LS(r,s) ((r) << (s))
#define RS(r,s) ((r) >> (s))

#define MSCALE(expr) RS((expr),9)



#define c1d4 362L

#define c1d8 473L
#define c3d8 196L

#define c1d16 502L
#define c3d16 426L
#define c5d16 284L
#define c7d16 100L
# 78 "./CHStone_v1.11_150204/jpeg/chenidct.c"
void
ChenIDct (int *x, int *y)
{
  register int i;
  register int *aptr;
  register int a0, a1, a2, a3;
  register int b0, b1, b2, b3;
  register int c0, c1, c2, c3;



  for (i = 0; i < 8; i++)
    {
      aptr = x + i;
      b0 = LS (*aptr, 2);
      aptr += 8;
      a0 = LS (*aptr, 2);
      aptr += 8;
      b2 = LS (*aptr, 2);
      aptr += 8;
      a1 = LS (*aptr, 2);
      aptr += 8;
      b1 = LS (*aptr, 2);
      aptr += 8;
      a2 = LS (*aptr, 2);
      aptr += 8;
      b3 = LS (*aptr, 2);
      aptr += 8;
      a3 = LS (*aptr, 2);





      c0 = MSCALE ((c7d16 * a0) - (c1d16 * a3));
      c1 = MSCALE ((c3d16 * a2) - (c5d16 * a1));
      c2 = MSCALE ((c3d16 * a1) + (c5d16 * a2));
      c3 = MSCALE ((c1d16 * a0) + (c7d16 * a3));



      a0 = MSCALE (c1d4 * (b0 + b1));
      a1 = MSCALE (c1d4 * (b0 - b1));

      a2 = MSCALE ((c3d8 * b2) - (c1d8 * b3));
      a3 = MSCALE ((c1d8 * b2) + (c3d8 * b3));

      b0 = a0 + a3;
      b1 = a1 + a2;
      b2 = a1 - a2;
      b3 = a0 - a3;



      a0 = c0 + c1;
      a1 = c0 - c1;
      a2 = c3 - c2;
      a3 = c3 + c2;

      c0 = a0;
      c1 = MSCALE (c1d4 * (a2 - a1));
      c2 = MSCALE (c1d4 * (a2 + a1));
      c3 = a3;

      aptr = y + i;
      *aptr = b0 + c3;
      aptr += 8;
      *aptr = b1 + c2;
      aptr += 8;
      *aptr = b2 + c1;
      aptr += 8;
      *aptr = b3 + c0;
      aptr += 8;
      *aptr = b3 - c0;
      aptr += 8;
      *aptr = b2 - c1;
      aptr += 8;
      *aptr = b1 - c2;
      aptr += 8;
      *aptr = b0 - c3;
    }



  for (i = 0; i < 8; i++)
    {
      aptr = y + LS (i, 3);
      b0 = *(aptr++);
      a0 = *(aptr++);
      b2 = *(aptr++);
      a1 = *(aptr++);
      b1 = *(aptr++);
      a2 = *(aptr++);
      b3 = *(aptr++);
      a3 = *(aptr);






      c0 = MSCALE ((c7d16 * a0) - (c1d16 * a3));
      c1 = MSCALE ((c3d16 * a2) - (c5d16 * a1));
      c2 = MSCALE ((c3d16 * a1) + (c5d16 * a2));
      c3 = MSCALE ((c1d16 * a0) + (c7d16 * a3));



      a0 = MSCALE (c1d4 * (b0 + b1));
      a1 = MSCALE (c1d4 * (b0 - b1));

      a2 = MSCALE ((c3d8 * b2) - (c1d8 * b3));
      a3 = MSCALE ((c1d8 * b2) + (c3d8 * b3));



      b0 = a0 + a3;
      b1 = a1 + a2;
      b2 = a1 - a2;
      b3 = a0 - a3;



      a0 = c0 + c1;
      a1 = c0 - c1;
      a2 = c3 - c2;
      a3 = c3 + c2;

      c0 = a0;
      c1 = MSCALE (c1d4 * (a2 - a1));
      c2 = MSCALE (c1d4 * (a2 + a1));
      c3 = a3;

      aptr = y + LS (i, 3);
      *(aptr++) = b0 + c3;
      *(aptr++) = b1 + c2;
      *(aptr++) = b2 + c1;
      *(aptr++) = b3 + c0;
      *(aptr++) = b3 - c0;
      *(aptr++) = b2 - c1;
      *(aptr++) = b1 - c2;
      *(aptr) = b0 - c3;
    }






  for (i = 0, aptr = y; i < 64; i++, aptr++)
    *aptr = (((*aptr < 0) ? (*aptr - 8) : (*aptr + 8)) / 16);
}
