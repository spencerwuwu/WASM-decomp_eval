# 1 "./CHStone_v1.11_150204/jpeg/decode.c"
# 57 "./CHStone_v1.11_150204/jpeg/decode.c"
void ChenIDct (int *x, int *y);

int rgb_buf[4][RGB_NUM][DCTSIZE2];

const int zigzag_index[64] =
{ 0, 1, 5, 6, 14, 15, 27, 28,
  2, 4, 7, 13, 16, 26, 29, 42,
  3, 8, 12, 17, 25, 30, 41, 43,
  9, 11, 18, 24, 31, 40, 44, 53,
  10, 19, 23, 32, 39, 45, 52, 54,
  20, 22, 33, 38, 46, 51, 55, 60,
  21, 34, 37, 47, 50, 56, 59, 61,
  35, 36, 48, 49, 57, 58, 62, 63
};






void
IZigzagMatrix (int *imatrix, int *omatrix)
{
  int i;

  for (i = 0; i < DCTSIZE2; i++)

    {

*(omatrix++) = imatrix[zigzag_index[i]];

}
}






void
IQuantize (int *matrix, unsigned int *qmatrix)
{
  int *mptr;

  for (mptr = matrix; mptr < matrix + DCTSIZE2; mptr++)
    {
      *mptr = *mptr * (*qmatrix);
      qmatrix++;
    }
}






void
PostshiftIDctMatrix (int *matrix, int shift)
{
  int *mptr;
  for (mptr = matrix; mptr < matrix + DCTSIZE2; mptr++)
    {
      *mptr += shift;
    }
}






void
BoundIDctMatrix (int *matrix, int Bound)
{
  int *mptr;

  for (mptr = matrix; mptr < matrix + DCTSIZE2; mptr++)
    {
      if (*mptr < 0)
 {
   *mptr = 0;
 }
      else if (*mptr > Bound)
 {
   *mptr = Bound;
 }
    }
}



void
WriteOneBlock (int *store, unsigned char *out_buf, int width, int height,
        int voffs, int hoffs)
{
  int i, e;



  for (i = voffs; i < voffs + DCTSIZE; i++)
    {
      if (i < height)
 {
   int diff;
   diff = width * i;
   for (e = hoffs; e < hoffs + DCTSIZE; e++)
     {
       if (e < width)
  {
    out_buf[diff + e] = (unsigned char) (*(store++));
  }
       else
  {
    break;
  }
     }
 }
      else
 {
   break;
 }
    }


}
# 190 "./CHStone_v1.11_150204/jpeg/decode.c"
void
WriteBlock (int *store, int *p_out_vpos, int *p_out_hpos,
     unsigned char *p_out_buf)
{
  int voffs, hoffs;




  voffs = *p_out_vpos * DCTSIZE;
  hoffs = *p_out_hpos * DCTSIZE;




  WriteOneBlock (store,
   p_out_buf,
   p_jinfo_image_width, p_jinfo_image_height, voffs, hoffs);




 (*p_out_hpos)++;
 (*p_out_vpos)++;

  if (*p_out_hpos < p_jinfo_MCUWidth)
    {
    (*p_out_vpos)--;
    }
  else
    {
      *p_out_hpos = 0;
    }
}




void
Write4Blocks (int *store1, int *store2, int *store3, int *store4,
       int *p_out_vpos, int *p_out_hpos, unsigned char *p_out_buf)
{
  int voffs, hoffs;





  voffs = *p_out_vpos * DCTSIZE;
  hoffs = *p_out_hpos * DCTSIZE;
  WriteOneBlock (store1, p_out_buf,
   p_jinfo_image_width, p_jinfo_image_height, voffs, hoffs);





  hoffs += DCTSIZE;
  WriteOneBlock (store2, p_out_buf,
   p_jinfo_image_width, p_jinfo_image_height, voffs, hoffs);





  voffs += DCTSIZE;
  hoffs -= DCTSIZE;
  WriteOneBlock (store3, p_out_buf,
   p_jinfo_image_width, p_jinfo_image_height, voffs, hoffs);






  hoffs += DCTSIZE;
  WriteOneBlock (store4,
   p_out_buf, p_jinfo_image_width, p_jinfo_image_height,
   voffs, hoffs);




  *p_out_hpos = *p_out_hpos + 2;
  *p_out_vpos = *p_out_vpos + 2;


  if (*p_out_hpos < p_jinfo_MCUWidth)
    {
      *p_out_vpos = *p_out_vpos - 2;
    }
  else
    {
      *p_out_hpos = 0;
    }
}





void
YuvToRgb (int p, int *y_buf, int *u_buf, int *v_buf)
{
  int r, g, b;
  int y, u, v;
  int i;

  for (i = 0; i < DCTSIZE2; i++)
    {
      y = y_buf[i];
      u = u_buf[i] - 128;
      v = v_buf[i] - 128;

      r = (y * 256 + v * 359 + 128) >> 8;
      g = (y * 256 - u * 88 - v * 182 + 128) >> 8;
      b = (y * 256 + u * 454 + 128) >> 8;

      if (r < 0)
 r = 0;
      else if (r > 255)
 r = 255;

      if (g < 0)
 g = 0;
      else if (g > 255)
 g = 255;

      if (b < 0)
 b = 0;
      else if (b > 255)
 b = 255;

      rgb_buf[p][0][i] = r;
      rgb_buf[p][1][i] = g;
      rgb_buf[p][2][i] = b;

    }
}





void
decode_block (int comp_no, int *out_buf, int *HuffBuff)
{
  int QuantBuff[DCTSIZE2];
  unsigned int *p_quant_tbl;

  DecodeHuffMCU (HuffBuff, comp_no);

  IZigzagMatrix (HuffBuff, QuantBuff);

  p_quant_tbl =
    &p_jinfo_quant_tbl_quantval[(int)p_jinfo_comps_info_quant_tbl_no[comp_no]][DCTSIZE2];
  IQuantize (QuantBuff, p_quant_tbl);

  ChenIDct (QuantBuff, out_buf);

  PostshiftIDctMatrix (out_buf, IDCT_SHIFT);

  BoundIDctMatrix (out_buf, IDCT_BOUNT);

}


void
decode_start (int *out_data_image_width, int *out_data_image_height,
       int *out_data_comp_vpos, int *out_data_comp_hpos)
{
  int i;
  int CurrentMCU = 0;
  int HuffBuff[NUM_COMPONENT][DCTSIZE2];
  int IDCTBuff[6][DCTSIZE2];


  CurHuffReadBuf = p_jinfo_jpeg_data;




  for (i = 0; i < NUM_COMPONENT; i++)
    {
      HuffBuff[i][0] = 0;
    }




  *out_data_image_width = p_jinfo_image_width;
  *out_data_image_height = p_jinfo_image_height;




  for (i = 0; i < RGB_NUM; i++)
    {
      out_data_comp_vpos[i] = 0;
      out_data_comp_hpos[i] = 0;
    }


  if (p_jinfo_smp_fact == SF1_1_1)
    {





      while (CurrentMCU < p_jinfo_NumMCU)
 {

   for (i = 0; i < NUM_COMPONENT; i++)
     {
       decode_block (i, IDCTBuff[i], HuffBuff[i]);
     }


   YuvToRgb (0, IDCTBuff[0], IDCTBuff[1], IDCTBuff[2]);



   for (i = 0; i < RGB_NUM; i++)
     {
       WriteBlock (&rgb_buf[0][i][0],
     &out_data_comp_vpos[i],
     &out_data_comp_hpos[i], &OutData_comp_buf[i][0]);
     }
   CurrentMCU++;
 }

    }
  else
    {




      while (CurrentMCU < p_jinfo_NumMCU)
 {





   for (i = 0; i < 4; i++)
     {
       decode_block (0, IDCTBuff[i], HuffBuff[0]);
     }


   decode_block (1, IDCTBuff[4], HuffBuff[1]);


   decode_block (2, IDCTBuff[5], HuffBuff[2]);




   for (i = 0; i < 4; i++)
     {
       YuvToRgb (i, IDCTBuff[i], IDCTBuff[4], IDCTBuff[5]);
     }


   for (i = 0; i < RGB_NUM; i++)
     {
       Write4Blocks (&rgb_buf[0][i][0],
       &rgb_buf[1][i][0],
       &rgb_buf[2][i][0],
       &rgb_buf[3][i][0],
       &out_data_comp_vpos[i],
       &out_data_comp_hpos[i], &OutData_comp_buf[i][0]);
     }


   CurrentMCU += 4;
 }
    }
}
