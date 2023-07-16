# 1 "./CHStone_v1.11_150204/jpeg/jfif_read.c"
# 46 "./CHStone_v1.11_150204/jpeg/jfif_read.c"
void
jpeg_init_decompress ()
{
  int tmp;



  p_jinfo_MCUHeight = (p_jinfo_image_height - 1) / 8 + 1;
  p_jinfo_MCUWidth = (p_jinfo_image_width - 1) / 8 + 1;
  p_jinfo_NumMCU = p_jinfo_MCUHeight * p_jinfo_MCUWidth;




  tmp = huff_make_dhuff_tb (&p_jinfo_dc_xhuff_tbl_bits[0][0],
       p_jinfo_dc_dhuff_tbl_ml[0],
       &p_jinfo_dc_dhuff_tbl_maxcode[0][0],
       &p_jinfo_dc_dhuff_tbl_mincode[0][0],
       &p_jinfo_dc_dhuff_tbl_valptr[0][0]);
  p_jinfo_dc_dhuff_tbl_ml[0] = tmp;
  tmp = huff_make_dhuff_tb (&p_jinfo_dc_xhuff_tbl_bits[1][0],
       p_jinfo_dc_dhuff_tbl_ml[1],
       &p_jinfo_dc_dhuff_tbl_maxcode[1][0],
       &p_jinfo_dc_dhuff_tbl_mincode[1][0],
       &p_jinfo_dc_dhuff_tbl_valptr[1][0]);
  p_jinfo_dc_dhuff_tbl_ml[1] = tmp;
  tmp = huff_make_dhuff_tb (&p_jinfo_ac_xhuff_tbl_bits[0][0],
       p_jinfo_ac_dhuff_tbl_ml[0],
       &p_jinfo_ac_dhuff_tbl_maxcode[0][0],
       &p_jinfo_ac_dhuff_tbl_mincode[0][0],
       &p_jinfo_ac_dhuff_tbl_valptr[0][0]);
  p_jinfo_ac_dhuff_tbl_ml[0] = tmp;
  tmp = huff_make_dhuff_tb (&p_jinfo_ac_xhuff_tbl_bits[1][0],
       p_jinfo_ac_dhuff_tbl_ml[1],
       &p_jinfo_ac_dhuff_tbl_maxcode[1][0],
       &p_jinfo_ac_dhuff_tbl_mincode[1][0],
       &p_jinfo_ac_dhuff_tbl_valptr[1][0]);
  p_jinfo_ac_dhuff_tbl_ml[1] = tmp;
}



void
jpeg_read (unsigned char *read_buf)
{




  read_markers (read_buf);





  jpeg_init_decompress ();




  decode_start (&OutData_image_width, &OutData_image_height,
  &OutData_comp_vpos[0], &OutData_comp_hpos[0]);

}
