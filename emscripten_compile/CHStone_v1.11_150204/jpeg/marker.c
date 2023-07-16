# 1 "./CHStone_v1.11_150204/jpeg/marker.c"
# 53 "./CHStone_v1.11_150204/jpeg/marker.c"
#define M_SOI 0xd8
#define M_SOF0 0xc0
#define M_SOS 0xda
#define M_DHT 0xc4
#define M_DQT 0xdb
#define M_EOI 0xd9







#define READ_MARKERS_REP 10
int i_marker = 0;
const int out_unread_marker[READ_MARKERS_REP] =
  { 0xd8, 0xe0, 0xdb, 0xdb, 0xc0, 0xc4, 0xc4, 0xc4, 0xc4, 0xda };
# 86 "./CHStone_v1.11_150204/jpeg/marker.c"
#define GET_SOF_REP 3
int out_length_get_sof = 17;
int out_data_precision_get_sof = 8;
int out_p_jinfo_image_height_get_sof = 59;
int out_p_jinfo_image_width_get_sof = 90;
int out_p_jinfo_num_components_get_sof = 3;
const int out_index_get_sof[GET_SOF_REP] = { 0, 1, 2 };
const int out_id_get_sof[GET_SOF_REP] = { 1, 2, 3 };
const int out_h_samp_factor_get_sof[GET_SOF_REP] = { 2, 1, 1 };
const int out_v_samp_factor_get_sof[GET_SOF_REP] = { 2, 1, 1 };
const int out_quant_tbl_no_get_sof[GET_SOF_REP] = { 0, 1, 1 };
# 108 "./CHStone_v1.11_150204/jpeg/marker.c"
#define GET_SOS_REP 3
int i_get_sos = 0;
int out_length_get_sos = 12;
int out_num_comp_get_sos = 3;
const int out_comp_id_get_sos[GET_SOS_REP] = { 1, 2, 3 };
const int out_dc_tbl_no_get_sos[GET_SOS_REP] = { 0, 1, 1 };
const int out_ac_tbl_no_get_sos[GET_SOS_REP] = { 0, 1, 1 };
# 124 "./CHStone_v1.11_150204/jpeg/marker.c"
#define GET_DHT_REP 4
int i_get_dht = 0;
const int out_length_get_dht[GET_DHT_REP] = { 29, 179, 29, 179 };
const int out_index_get_dht[GET_DHT_REP] = { 0x0, 0x10, 0x1, 0x11 };
const int out_count_get_dht[GET_DHT_REP] = { 12, 162, 12, 162 };
# 138 "./CHStone_v1.11_150204/jpeg/marker.c"
#define GET_DQT_REP 2
int i_get_dqt = 0;
const int out_length_get_dqt[GET_DQT_REP] = { 65, 65 };
const int out_prec_get_dht[GET_DQT_REP] = { 0, 0 };
const int out_num_get_dht[GET_DQT_REP] = { 0, 1 };
# 152 "./CHStone_v1.11_150204/jpeg/marker.c"
const int izigzag_index[64] = { 0, 1, 8, 16, 9, 2, 3, 10,
  17, 24, 32, 25, 18, 11, 4, 5,
  12, 19, 26, 33, 40, 48, 41, 34,
  27, 20, 13, 6, 7, 14, 21, 28,
  35, 42, 49, 56, 57, 50, 43, 36,
  29, 22, 15, 23, 30, 37, 44, 51,
  58, 59, 52, 45, 38, 31, 39, 46,
  53, 60, 61, 54, 47, 55, 62, 63
};





static unsigned char *ReadBuf;





int
read_byte (void)
{
  return *ReadBuf++;
}


short
read_word (void)
{
  short c;

  c = *ReadBuf++ << 8;
  c |= *ReadBuf++;

  return c;
}

int
first_marker (void)
{
  int c1, c2;
  c1 = read_byte ();
  c2 = read_byte ();

  if (c1 != 0xFF || c2 != M_SOI)
    {
      main_result++;
      printf ("Not Jpeg File!\n");
      EXIT;
    }

  return c2;
}


int
next_marker (void)
{
  int c;

  for (;;)
    {
      c = read_byte ();

      while (c != 0xff)
 c = read_byte ();

      do
 {
   c = read_byte ();
 }
      while (c == 0xff);
      if (c != 0)
 break;
    }
  return c;
}





void
get_sof ()
{
  int ci, c;
  int length;
  char *p_comp_info_index;
  char *p_comp_info_id;
  char *p_comp_info_h_samp_factor;
  char *p_comp_info_v_samp_factor;
  char *p_comp_info_quant_tbl_no;

  length = read_word ();
  p_jinfo_data_precision = read_byte ();
  p_jinfo_image_height = read_word ();
  p_jinfo_image_width = read_word ();
  p_jinfo_num_components = read_byte ();







  if (length != out_length_get_sof)
    {
        main_result++;
    }
  if (p_jinfo_data_precision != out_data_precision_get_sof)
    {
        main_result++;
    }
  if (p_jinfo_image_height != out_p_jinfo_image_height_get_sof)
    {
        main_result++;
    }
  if (p_jinfo_image_width != out_p_jinfo_image_width_get_sof)
    {
        main_result++;
    }
  if (p_jinfo_num_components != out_p_jinfo_num_components_get_sof)
    {
        main_result++;
    }

  length -= 8;




  for (ci = 0; ci < p_jinfo_num_components; ci++)
    {
      p_comp_info_index = &p_jinfo_comps_info_index[ci];
      p_comp_info_id = &p_jinfo_comps_info_id[ci];
      p_comp_info_h_samp_factor = &p_jinfo_comps_info_h_samp_factor[ci];
      p_comp_info_v_samp_factor = &p_jinfo_comps_info_v_samp_factor[ci];
      p_comp_info_quant_tbl_no = &p_jinfo_comps_info_quant_tbl_no[ci];

      *p_comp_info_index = ci;
      *p_comp_info_id = read_byte ();
      c = read_byte ();
      *p_comp_info_h_samp_factor = (c >> 4) & 15;
      *p_comp_info_v_samp_factor = (c) & 15;
      *p_comp_info_quant_tbl_no = read_byte ();







      if (*p_comp_info_index != out_index_get_sof[ci])
 {
  main_result++;
 }
      if (*p_comp_info_id != out_id_get_sof[ci])
 {
  main_result++;
 }
      if (*p_comp_info_h_samp_factor != out_h_samp_factor_get_sof[ci])
 {
  main_result++;
 }
      if (*p_comp_info_v_samp_factor != out_v_samp_factor_get_sof[ci])
 {
  main_result++;
 }
      if (*p_comp_info_quant_tbl_no != out_quant_tbl_no_get_sof[ci])
 {
  main_result++;
 }

    }





  if (p_jinfo_comps_info_h_samp_factor[0] == 2)
    {
      p_jinfo_smp_fact = SF4_1_1;

    }
  else
    {
      p_jinfo_smp_fact = SF1_1_1;

    }
}


void
get_sos ()
{
  int length, num_comp;
  int i, c, cc, ci, j;
  char *p_comp_info_id;
  char *p_comp_info_dc_tbl_no;
  char *p_comp_info_ac_tbl_no;

  length = read_word ();
  num_comp = read_byte ();




  if (length != out_length_get_sos)
    {
        main_result++;
    }
  if (num_comp != out_num_comp_get_sos)
    {
        main_result++;
    }


  for (i = 0; i < num_comp; i++)
    {
      cc = read_byte ();
      c = read_byte ();

      for (ci = 0; ci < p_jinfo_num_components; ci++)
 {
   p_comp_info_id = &p_jinfo_comps_info_id[ci];
   p_comp_info_dc_tbl_no = &p_jinfo_comps_info_dc_tbl_no[ci];
   p_comp_info_ac_tbl_no = &p_jinfo_comps_info_ac_tbl_no[ci];

   if (cc == *p_comp_info_id)
     goto id_found;
 }
      main_result++;
      printf ("Bad Component ID!\n");
      EXIT;

    id_found:
      *p_comp_info_dc_tbl_no = (c >> 4) & 15;
      *p_comp_info_ac_tbl_no = (c) & 15;





      if (cc != out_comp_id_get_sos[i_get_sos])
 {
  main_result++;
 }
      if (*p_comp_info_dc_tbl_no != out_dc_tbl_no_get_sos[i_get_sos])
 {
  main_result++;
 }
      if (*p_comp_info_ac_tbl_no != out_ac_tbl_no_get_sos[i_get_sos])
 {
  main_result++;
 }
      i_get_sos++;

    }


  j = 3;
  while (j--)
    {
      c = read_byte ();
    }




  p_jinfo_jpeg_data = ReadBuf;

}





void
get_dht ()
{
  int length;
  int index, i, count;
  int *p_xhtbl_bits;
  int *p_xhtbl_huffval;

  length = read_word ();
  length -= 2;



  if (length != out_length_get_dht[i_get_dht])
    {
        main_result++;
    }

  while (length > 16)
    {
      index = read_byte ();



      if (index != out_index_get_dht[i_get_dht])
 {
        main_result++;
}

      if (index & 0x10)
 {

   index -= 0x10;
   p_xhtbl_bits = p_jinfo_ac_xhuff_tbl_bits[index];
   p_xhtbl_huffval = p_jinfo_ac_xhuff_tbl_huffval[index];
 }
      else
 {

   p_xhtbl_bits = p_jinfo_dc_xhuff_tbl_bits[index];
   p_xhtbl_huffval = p_jinfo_dc_xhuff_tbl_huffval[index];
 }

      count = 0;

      for (i = 1; i <= 16; i++)
 {
   p_xhtbl_bits[i] = read_byte ();
   count += p_xhtbl_bits[i];
 }



      if (count != out_count_get_dht[i_get_dht])
 {
        main_result++;
    }
      i_get_dht++;

      length -= 1 + 16;

      for (i = 0; i < count; i++)
 {
   p_xhtbl_huffval[i] = read_byte ();
 }

      length -= count;
    }
}


void
get_dqt ()
{
  int length;
  int prec, num, i;
  unsigned int tmp;
  unsigned int *p_quant_tbl;

  length = read_word ();
  length -= 2;



  if (length != out_length_get_dqt[i_get_dqt])
    {
        main_result++;
    }

  while (length > 0)
    {
      num = read_byte ();

      prec = num >> 4;

      num &= 0x0f;




      if (prec != out_prec_get_dht[i_get_dqt])
 {
        main_result++;
    }
      if (num != out_num_get_dht[i_get_dqt])
 {
        main_result++;
    }
      i_get_dqt++;

      p_quant_tbl = &p_jinfo_quant_tbl_quantval[num][DCTSIZE2];
      for (i = 0; i < DCTSIZE2; i++)
 {
   if (prec)
     tmp = read_word ();
   else
     tmp = read_byte ();
   p_quant_tbl[izigzag_index[i]] = (unsigned short) tmp;
 }

      length -= DCTSIZE2 + 1;
      if (prec)
 length -= DCTSIZE2;
    }
}



void
read_markers (unsigned char *buf)
{
  int unread_marker;
  int sow_SOI;

  ReadBuf = buf;

  sow_SOI = 0;

  unread_marker = 0;


  for (;;)
    {
      if (!sow_SOI)
 {
   unread_marker = first_marker ();
 }
      else
 {
   unread_marker = next_marker ();
 }



      if (unread_marker != out_unread_marker[i_marker++])
 {
  main_result++;
 }


      switch (unread_marker)
 {
 case M_SOI:
   sow_SOI = 1;
   break;

 case M_SOF0:
   get_sof ();
   break;

 case M_SOS:
   get_sos ();
   return;

 case M_DHT:
   get_dht ();
   break;

 case M_DQT:
   get_dqt ();
   break;

 case M_EOI:
   return;
 }
    }
}
