# 1 "./CHStone_v1.11_150204/jpeg/huffman.c"
# 54 "./CHStone_v1.11_150204/jpeg/huffman.c"
const static int extend_mask[20] = {
  0xFFFFFFFE, 0xFFFFFFFC, 0xFFFFFFF8, 0xFFFFFFF0, 0xFFFFFFE0, 0xFFFFFFC0,
  0xFFFFFF80, 0xFFFFFF00, 0xFFFFFE00, 0xFFFFFC00, 0xFFFFF800, 0xFFFFF000,
  0xFFFFE000, 0xFFFFC000, 0xFFFF8000, 0xFFFF0000, 0xFFFE0000, 0xFFFC0000,
  0xFFF80000, 0xFFF00000
};



const int bit_set_mask[32] = {
  0x00000001, 0x00000002, 0x00000004, 0x00000008,
  0x00000010, 0x00000020, 0x00000040, 0x00000080,
  0x00000100, 0x00000200, 0x00000400, 0x00000800,
  0x00001000, 0x00002000, 0x00004000, 0x00008000,
  0x00010000, 0x00020000, 0x00040000, 0x00080000,
  0x00100000, 0x00200000, 0x00400000, 0x00800000,
  0x01000000, 0x02000000, 0x04000000, 0x08000000,
  0x10000000, 0x20000000, 0x40000000, 0x80000000
};

const int lmask[32] = {
  0x00000001, 0x00000003, 0x00000007, 0x0000000f,
  0x0000001f, 0x0000003f, 0x0000007f, 0x000000ff,
  0x000001ff, 0x000003ff, 0x000007ff, 0x00000fff,
  0x00001fff, 0x00003fff, 0x00007fff, 0x0000ffff,
  0x0001ffff, 0x0003ffff, 0x0007ffff, 0x000fffff,
  0x001fffff, 0x003fffff, 0x007fffff, 0x00ffffff,
  0x01ffffff, 0x03ffffff, 0x07ffffff, 0x0fffffff,
  0x1fffffff, 0x3fffffff, 0x7fffffff, 0xffffffff
};

static unsigned int current_read_byte;
static int read_position = -1;





static int
pgetc ()
{
  int temp;

  if ((temp = *CurHuffReadBuf++) == MARKER_MARKER)
    {
      if ((temp = *CurHuffReadBuf++))
 {
   printf ("Unanticipated marker detected.\n");
 }
      else
 {
   return (MARKER_MARKER);
 }
    }
  return (temp);
}





int
buf_getb ()
{
  if (read_position < 0)
    {
      current_read_byte = pgetc ();
      read_position = 7;
    }

  if (current_read_byte & bit_set_mask[read_position--])
    {
      return (1);
    }
  return (0);
}






int
buf_getv (int n)
{
  int p, rv;

  n--;
  p = n - read_position;
  while (p > 0)
    {
      if (read_position > 23)
 {
   rv = (current_read_byte << p);
   current_read_byte = pgetc ();

   rv |= (current_read_byte >> (8 - p));
   read_position = 7 - p;
   return (rv & lmask[n]);

 }
      current_read_byte = (current_read_byte << 8) | pgetc ();
      read_position += 8;
      p -= 8;
    }

  if (!p)
    {
      read_position = -1;

      return (current_read_byte & lmask[n]);
    }

  p = -p;

  read_position = p - 1;
  return ((current_read_byte >> p) & lmask[n]);
}






int
huff_make_dhuff_tb (int *p_xhtbl_bits, int p_dhtbl_ml,
      int *p_dhtbl_maxcode, int *p_dhtbl_mincode,
      int *p_dhtbl_valptr)
{
  int i, j, p, code, size, l;
  int huffsize[257];
  int huffcode[257];
  int lastp;




  for (p = 0, i = 1; i < 17; i++)
    {
      for (j = 1; j <= p_xhtbl_bits[i]; j++)
 {
   huffsize[p++] = i;
 }
    }

  huffsize[p] = 0;
  lastp = p;

  p = 0;
  code = 0;
  size = huffsize[0];
  while (1)
    {
      do
 {
   huffcode[p++] = code++;
 }
      while ((huffsize[p] == size) && (p < 257));

      if (!huffsize[p])
 {
   break;
 }
      do
 {

   code <<= 1;
   size++;
 }
      while (huffsize[p] != size);
    }

  for (p_dhtbl_ml = 1, p = 0, l = 1; l <= 16; l++)
    {
      if (p_xhtbl_bits[l] == 0)
 {
   p_dhtbl_maxcode[l] = -1;
 }
      else
 {
   p_dhtbl_valptr[l] = p;
   p_dhtbl_mincode[l] = huffcode[p];
   p += p_xhtbl_bits[l] - 1;
   p_dhtbl_maxcode[l] = huffcode[p];
   p_dhtbl_ml = l;
   p++;
 }
    }
  p_dhtbl_maxcode[p_dhtbl_ml]++;
  return p_dhtbl_ml;
}





int
DecodeHuffman (int *Xhuff_huffval, int Dhuff_ml,
        int *Dhuff_maxcode, int *Dhuff_mincode, int *Dhuff_valptr)
{
  int code, l, p;

  code = buf_getb ();
  for (l = 1; code > Dhuff_maxcode[l]; l++)
    {
      code = (code << 1) + buf_getb ();
    }

  if (code < Dhuff_maxcode[Dhuff_ml])
    {
      p = Dhuff_valptr[l] + code - Dhuff_mincode[l];
      return (Xhuff_huffval[p]);
    }
  else
    {
      main_result++;
      printf ("Huffman read error\n");
      EXIT;
    }

}





void
DecodeHuffMCU (int *out_buf, int num_cmp)
{
  int s, diff, tbl_no, *mptr, k, n, r;




  tbl_no = p_jinfo_comps_info_dc_tbl_no[num_cmp];
  s = DecodeHuffman (&p_jinfo_dc_xhuff_tbl_huffval[tbl_no][0],
       p_jinfo_dc_dhuff_tbl_ml[tbl_no],
       &p_jinfo_dc_dhuff_tbl_maxcode[tbl_no][0],
       &p_jinfo_dc_dhuff_tbl_mincode[tbl_no][0],
       &p_jinfo_dc_dhuff_tbl_valptr[tbl_no][0]);

  if (s)
    {
      diff = buf_getv (s);
      s--;
      if ((diff & bit_set_mask[s]) == 0)
 {
   diff |= extend_mask[s];
   diff++;
 }

      diff += *out_buf;
      *out_buf = diff;
    }





  for (mptr = out_buf + 1; mptr < out_buf + DCTSIZE2; mptr++)
    {
      *mptr = 0;
    }

  for (k = 1; k < DCTSIZE2;)
    {
      r = DecodeHuffman (&p_jinfo_ac_xhuff_tbl_huffval[tbl_no][0],
    p_jinfo_ac_dhuff_tbl_ml[tbl_no],
    &p_jinfo_ac_dhuff_tbl_maxcode[tbl_no][0],
    &p_jinfo_ac_dhuff_tbl_mincode[tbl_no][0],
    &p_jinfo_ac_dhuff_tbl_valptr[tbl_no][0]);

      s = r & 0xf;
      n = (r >> 4) & 0xf;

      if (s)
 {
   if ((k += n) >= DCTSIZE2)
     break;
   out_buf[k] = buf_getv (s);
   s--;
   if ((out_buf[k] & bit_set_mask[s]) == 0)
     {
       out_buf[k] |= extend_mask[s];
       out_buf[k]++;
     }
   k++;
 }
      else if (n == 15)
 k += 16;
      else
 {
   break;
 }
    }
}
