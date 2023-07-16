# 1 "./CHStone_v1.11_150204/motion/getbits.c"
# 55 "./CHStone_v1.11_150204/motion/getbits.c"
int
read (unsigned char *s1, const unsigned char *s2, int n)
{
  unsigned char *p1;
  const unsigned char *p2;
  int n_tmp;

p1 = s1;
  p2 = s2;
  n_tmp = n;

while (n_tmp-- > 0)
    {
      *p1 = *p2;

p1++;

p2++;

}

return n;
}

void
Fill_Buffer ()
{
  int Buffer_Level;
  unsigned char *p;
  p = ld_Rdbfr;


  Buffer_Level = read (ld_Rdbfr, inRdbfr, 2048);
  ld_Rdptr = ld_Rdbfr;

  if (System_Stream_Flag)
    ld_Rdmax -= 2048;



  if (Buffer_Level < 2048)
    {

      if (Buffer_Level < 0)
 Buffer_Level = 0;


      while (Buffer_Level & 3)
 ld_Rdbfr[Buffer_Level++] = 0;


      while (Buffer_Level < 2048)
 {
   ld_Rdbfr[Buffer_Level++] = SEQUENCE_END_CODE >> 24;
   ld_Rdbfr[Buffer_Level++] = SEQUENCE_END_CODE >> 16;
   ld_Rdbfr[Buffer_Level++] = SEQUENCE_END_CODE >> 8;
   ld_Rdbfr[Buffer_Level++] = SEQUENCE_END_CODE & 0xff;
 }
    }
}

unsigned int
Show_Bits (N)
     int N;
{
  return ld_Bfr >> (unsigned)(32-N)%32;
}




unsigned int
Get_Bits1 ()
{
  return Get_Bits (1);
}




void
Flush_Buffer (N)
     int N;
{
  int Incnt;

#ifdef RAND_VAL

 ld_Bfr <<= (N%20);
#else
  ld_Bfr <<= N;
#endif

  Incnt = ld_Incnt -= N;

  if (Incnt <= 24)
    {
      if (ld_Rdptr < ld_Rdbfr + 2044)
 {
   do
     {
#ifdef RAND_VAL

      ld_Bfr |= *ld_Rdptr++ << ((24 - Incnt)%20);
#else
      ld_Bfr |= *ld_Rdptr++ << (24 - Incnt);
#endif
      Incnt += 8;
     }
   while (Incnt <= 24);
 }
      else
 {
   do
     {
       if (ld_Rdptr >= ld_Rdbfr + 2048)
  Fill_Buffer ();
#ifdef RAND_VAL

       ld_Bfr |= *ld_Rdptr++ << ((24 - Incnt)%20);
#else
       ld_Bfr |= *ld_Rdptr++ << (24 - Incnt);
#endif
       Incnt += 8;
     }
   while (Incnt <= 24);
 }
      ld_Incnt = Incnt;
    }
}




unsigned int
Get_Bits (N)
     int N;
{
  unsigned int Val;

  Val = Show_Bits (N);
  Flush_Buffer (N);

  return Val;
}
