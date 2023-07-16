# 1 "./CHStone_v1.11_150204/motion/getvlc.c"
# 48 "./CHStone_v1.11_150204/motion/getvlc.c"
int
Get_motion_code ()
{
  int code;

  if (Get_Bits1 ())
    {
      return 0;
    }

  if ((code = Show_Bits (9)) >= 64)
    {
      code >>= 6;
      Flush_Buffer (MVtab0[code][1]);

      return Get_Bits1 ()? -MVtab0[code][0] : MVtab0[code][0];
    }

  if (code >= 24)
    {
      code >>= 3;
      Flush_Buffer (MVtab1[code][1]);

      return Get_Bits1 ()? -MVtab1[code][0] : MVtab1[code][0];
    }

  if ((code -= 12) < 0)
    return 0;

  Flush_Buffer (MVtab2[code][1]);
  return Get_Bits1 ()? -MVtab2[code][0] : MVtab2[code][0];
}


int
Get_dmvector ()
{

  if (Get_Bits (1))
    {
      return Get_Bits (1) ? -1 : 1;
    }
  else
    {
      return 0;
    }
}
