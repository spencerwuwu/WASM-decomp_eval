# 1 "./CHStone_v1.11_150204/jpeg/jpeg2bmp.c"
# 46 "./CHStone_v1.11_150204/jpeg/jpeg2bmp.c"
unsigned char JpegFileBuf[JPEG_FILE_SIZE];


int
jpeg2bmp_main ()
{
  int ci;
  unsigned char *c;
  int i, j;




  c = JpegFileBuf;
  for (i = 0; i < JPEGSIZE; i++)

    {
        ci = hana_jpg[i];
        *c++ = ci;
    }

  jpeg_read (JpegFileBuf);

  for (i = 0; i < RGB_NUM; i++)
    {
      for (j = 0; j < BMP_OUT_SIZE; j++)
 {
   if (OutData_comp_buf[i][j] != hana_bmp[i][j])
     {
       main_result++;
     }
 }
    }
  if (OutData_image_width != out_width)
    {
      main_result++;
    }
  if (OutData_image_height != out_length)
    {
      main_result++;
    }
  return (0);
}
