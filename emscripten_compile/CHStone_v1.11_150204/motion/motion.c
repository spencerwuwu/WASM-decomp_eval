# 1 "./CHStone_v1.11_150204/motion/motion.c"
# 49 "./CHStone_v1.11_150204/motion/motion.c"
static void decode_motion_vector
_ANSI_ARGS_ ((int *pred, int r_size, int motion_code,
       int motion_residualesidual, int full_pel_vector));


void
motion_vectors (PMV, dmvector, motion_vertical_field_select, s,
  motion_vector_count, mv_format, h_r_size, v_r_size, dmv,
  mvscale)
     int PMV[2][2][2];
     int dmvector[2];
     int motion_vertical_field_select[2][2];
     int s, motion_vector_count, mv_format, h_r_size, v_r_size, dmv, mvscale;
{
  if (motion_vector_count == 1)
    {
      if (mv_format == MV_FIELD && !dmv)
 {
   motion_vertical_field_select[1][s] =
     motion_vertical_field_select[0][s] = Get_Bits (1);
 }

      motion_vector (PMV[0][s], dmvector, h_r_size, v_r_size, dmv, mvscale,
       0);


      PMV[1][s][0] = PMV[0][s][0];
      PMV[1][s][1] = PMV[0][s][1];
    }
  else
    {
      motion_vertical_field_select[0][s] = Get_Bits (1);

      motion_vector (PMV[0][s], dmvector, h_r_size, v_r_size, dmv, mvscale,
       0);

      motion_vertical_field_select[1][s] = Get_Bits (1);

      motion_vector (PMV[1][s], dmvector, h_r_size, v_r_size, dmv, mvscale,
       0);
    }
}



void
motion_vector (PMV, dmvector, h_r_size, v_r_size, dmv, mvscale,
        full_pel_vector)
     int *PMV;
     int *dmvector;
     int h_r_size;
     int v_r_size;
     int dmv;
     int mvscale;
     int full_pel_vector;
{
  int motion_code;
  int motion_residual;



  motion_code = Get_motion_code ();

  motion_residual = (h_r_size != 0
       && motion_code != 0) ? Get_Bits (h_r_size) : 0;

  decode_motion_vector (&PMV[0], h_r_size, motion_code, motion_residual,
   full_pel_vector);

  if (dmv)
    dmvector[0] = Get_dmvector ();



  motion_code = Get_motion_code ();
  motion_residual = (v_r_size != 0
       && motion_code != 0) ? Get_Bits (v_r_size) : 0;

  if (mvscale)
    PMV[1] >>= 1;

  decode_motion_vector (&PMV[1], v_r_size, motion_code, motion_residual,
   full_pel_vector);

  if (mvscale)
    PMV[1] <<= 1;

  if (dmv)
    dmvector[1] = Get_dmvector ();

}






static void
decode_motion_vector (pred, r_size, motion_code, motion_residual,
        full_pel_vector)
     int *pred;
     int r_size, motion_code, motion_residual;
     int full_pel_vector;
{
  int lim, vec;

  r_size = r_size % 32;
  lim = 16 << r_size;
  vec = full_pel_vector ? (*pred >> 1) : (*pred);

  if (motion_code > 0)
    {
      vec += ((motion_code - 1) << r_size) + motion_residual + 1;
      if (vec >= lim)
 vec -= lim + lim;
    }
  else if (motion_code < 0)
    {
      vec -= ((-motion_code - 1) << r_size) + motion_residual + 1;
      if (vec < -lim)
 vec += lim + lim;
    }
  *pred = full_pel_vector ? (vec << 1) : vec;
}
