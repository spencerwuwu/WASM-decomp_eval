import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global float_exception_flags:int;
export import global float_rounding_mode:int;
export import global startTimer:int;
export import global b_input:int;
export import global a_input:int;
export import global z_output:int;
export import global endTimer:int;
global float_exception_flags_1:int = 2180;
global float_rounding_mode_1:int = 2176;
global startTimer_1:int = 2184;
global b_input_1:int = 368;
global a_input_1:int = 0;
global z_output_1:int = 736;
global endTimer_1:int = 2192;

data data(offset: memory_base) =
  "\00\00\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00@"
  "\00\00\00\00\00\00\00@\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8\7f\00\00"
  "\00\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00\00\00\00\00\f8?\00\00"
  "\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\00\c0\00\00"
  "\00\00\00\00\00\c0\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00\f0\bf\00\00"
  "\00\00\00\00\00\80\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\f8\ff\00\00"
  "\00\00\00\00\f0\ff\00\00\00\00\00\00\00\80\00\00\00\00\00\00\f8\bf\00\00"
  "\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00"
  "\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\f8?\00\00\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00"
  "\00\00\00\f0?\00\00\00\00\00\00\00@\00\00\00\00\00\00\f0\ff\00\00\00\00"
  "\00\00\f0\ff\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00\f0\bf\00\00\00\00"
  "\00\00\f0\bf\00\00\00\00\00\00\00\80\00\00\00\00\00\00\f8\bf\00\00\00\00"
  "\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\f0\bf\00\00\00\00"
  "\00\00\00\c0\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8\7f\00\00\00\00\00"
  "\00\f0\7f\00\00\00\00\00\00\00@\00\00\00\00\00\00\00@\00\00\00\00\00\00"
  "\f0\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\f0?\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00"
  "\00\80\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00"
  "\f0\ff\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\00\c0\00\00\00\00\00\00"
  "\f0\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\00\80\00\00\00\00\00\00"
  "\f0\bf\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00"
  "\f0\bf\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00"
  "\f0\bf\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00"
  "\f0\bf\00\00\00\00\00\00\00\80\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00"
  "\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00"
  "\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00"
  "\00@\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f"
  "\00\00\00\00\00\00\00@\00\00\00\00\00\00\0c@\00\00\00\00\00\00\f8\7f\00"
  "\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00@\00\00\00\00\00\00\0c@\00\00"
  "\00\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\04@\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00"
  "\00\00\00\00\00\c0\00\00\00\00\00\00\0c\c0\00\00\00\00\00\00\f8\ff\00\00"
  "\00\00\00\00\f0\ff\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\0c\c0\00\00"
  "\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00\00\00\00\00\80\00\00"
  "\00\00\00\00\04\c0\00\00\00\00\00\00\f8\7f\ff\ff\ff\ff\ff\ff\ff\7f\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00"
  "\00\00\00\00\f0\bf\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\f8\7f\00\00"
  "\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00\e0?\00\00\00"
  "\00\00\00\f8\7f\ff\ff\ff\ff\ff\ff\ff\7f\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\f8\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00"
  "\00\00\00\e0?\00\00\00\00\00\00\f8\ff\00\00\00\00\00\00\f0\ff\00\00\00"
  "\00\00\00\f0\bf\00\00\00\00\00\00\e0\bfError return from gettimeofday:"
  " %d\00%0.6f\0a\00\00\00\00\00\00\00\08\00\00\00\07\00\00\00\06\00\00\00"
  "\06\00\00\00\05\00\00\00\05\00\00\00\05\00\00\00\05\00\00\00\04\00\00\00"
  "\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00"
  "\04\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00";

import function gettimeofday(a:int, b:int):int;

import function iprintf(a:int, b:int):int;

import function small_printf(a:int, b:int):int;

import function setTempRet0(a:int);

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function shift64RightJamming(a:long, b:int, c:long_ptr) {
  if (b) goto B_b;
  a = a;
  goto B_a;
  label B_b:
  if (b > 63) goto B_c;
  a = a >> i64_extend_i32_u(b) |
      i64_extend_i32_u(a << i64_extend_i32_u(0 - b & 63) != 0L);
  goto B_a;
  label B_c:
  a = i64_extend_i32_u(a != 0L);
  label B_a:
  c[0] = a;
}

export function float_raise(a:int) {
  var b:int_ptr = float_exception_flags;
  b[0] = b[0] | a;
}

export function float64_is_nan(a:long):int {
  return a << 1L > -9007199254740992L
}

export function float64_is_signaling_nan(a:long):int {
  return (a & 9221120237041090560L) == 9218868437227405312L &
         (a & 2251799813685247L) != 0L
}

export function extractFloat64Frac(a:long):long {
  return a & 4503599627370495L
}

export function extractFloat64Exp(a:long):int {
  return i32_wrap_i64(a >> 52L) & 2047
}

export function extractFloat64Sign(a:long):int {
  return i32_wrap_i64(a >> 63L)
}

export function packFloat64(a:int, b:int, c:long):long {
  return 
    (i64_extend_i32_u(a) << 63L) + c + (i64_extend_i32_u(b) << 52L)
}

export function roundAndPackFloat64(a:int, b:int_ptr, c:long):long {
  var d:int;
  var g:int;
  var f:long;
  var e:long;
  d = float_rounding_mode[0]:int;
  if (d) goto B_b;
  e = 0L;
  f = 512L;
  goto B_a;
  label B_b:
  if (d != 1) goto B_c;
  e = -1L;
  f = 0L;
  goto B_a;
  label B_c:
  if (eqz(a)) goto B_d;
  e = select_if(-1L, 0L, g = d == 2);
  f = select_if(0L, 1023L, g);
  goto B_a;
  label B_d:
  e = select_if(-1L, 0L, g = d == 3);
  f = select_if(0L, 1023L, g);
  label B_a:
  f = f;
  e = e;
  g = i32_wrap_i64(c) & 1023;
  if ((b & 65535) < 2045) goto B_f;
  if (b > 2045) goto B_h;
  if (b != 2045) goto B_g;
  if (f + c > -1L) goto B_g;
  label B_h:
  b = float_exception_flags;
  b[0] = b[0] | 9;
  return e + (i64_extend_i32_u(a) << 63L) + 9218868437227405312L;
  label B_g:
  if (b > -1) goto B_f;
  if (b < -63) goto B_j;
  c = c >> i64_extend_i32_u(0 - b) |
      i64_extend_i32_u(c << i64_extend_i32_u(b & 63) != 0L);
  goto B_i;
  label B_j:
  c = i64_extend_i32_u(c != 0L);
  label B_i:
  c = c;
  g = i32_wrap_i64(c) & 1023;
  if (g) goto B_k;
  c = c;
  b = 0;
  g = 0;
  goto B_e;
  label B_k:
  b = float_exception_flags;
  b[0] = b[0] | 4;
  c = c;
  b = 0;
  g = g;
  goto B_e;
  label B_f:
  c = c;
  b = b;
  g = g;
  label B_e:
  b = b;
  c = c;
  g = g;
  if (eqz(g)) goto B_l;
  var h:int_ptr = float_exception_flags;
  h[0] = h[0] | 1;
  label B_l:
  c = c + f >> 10L & (i64_extend_i32_u(eqz(d) & g == 512) ^ -1L);
  return (c | i64_extend_i32_u(a) << 63L) +
         select_if(0L, i64_extend_i32_u(b) << 52L, eqz(c));
}

export function normalizeRoundAndPackFloat64(a:int, b:int, c:long):long {
  var d:int;
  var e:int;
  var f:int;
  return 
    roundAndPackFloat64(
      a,
      b -
      (d = 
         select_if(31, -1, d = c < 4294967296L) +
         select_if(
           (f = (e = (d = i32_wrap_i64(select_if(c, c >> 32L, d))) < 65536) << 4) |
           8,
           f,
           e = (d = select_if(d << 16, d, e)) < 16777216) +
         (memory_base + 1152 + (select_if(d << 8, d, e) >> 22 & 1020))[0]:int),
      c << i64_extend_i32_u(d));
}

export function addFloat64Sigs(a:long, b:long, c:int):long {
  var g:int;
  var h:int_ptr;
  var f:int;
  var d:long = b << 9L & 2305843009213693440L;
  var e:long = a << 9L & 2305843009213693440L;
  f = i32_wrap_i64(a >> 52L) & 2047;
  h = f - (g = i32_wrap_i64(b >> 52L) & 2047);
  if (h < 1) goto B_f;
  if (f != 2047) goto B_g;
  if (eqz(eqz(e))) goto B_h;
  return a;
  label B_h:
  f = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  g = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (g) goto B_j;
  if (eqz(f)) goto B_i;
  label B_j:
  h = float_exception_flags;
  h[0] = h[0] | 16;
  label B_i:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        g),
              f);
  label B_g:
  a = select_if(d | 2305843009213693952L, d, g);
  g = h - eqz(g);
  if (g) goto B_k;
  b = e;
  a = a;
  goto B_d;
  label B_k:
  if (g > 63) goto B_e;
  b = e;
  a = a >> i64_extend_i32_u(g) |
      i64_extend_i32_u(a << i64_extend_i32_u(0 - g & 63) != 0L);
  goto B_d;
  label B_f:
  if (h > -1) goto B_l;
  if (g != 2047) goto B_m;
  if (eqz(d)) goto B_n;
  f = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  g = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (g) goto B_p;
  if (eqz(f)) goto B_o;
  label B_p:
  h = float_exception_flags;
  h[0] = h[0] | 16;
  label B_o:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        g),
              f);
  label B_n:
  return i64_extend_i32_u(c) << 63L | 9218868437227405312L;
  label B_m:
  b = select_if(e | 2305843009213693952L, e, f);
  f = h + eqz(f);
  if (f) goto B_q;
  b = b;
  goto B_c;
  label B_q:
  if (f < -63) goto B_r;
  b = b >> i64_extend_i32_u(0 - f) |
      i64_extend_i32_u(b << i64_extend_i32_u(f & 63) != 0L);
  goto B_c;
  label B_r:
  b = i64_extend_i32_u(b != 0L);
  goto B_c;
  label B_l:
  if (eqz(f)) goto B_t;
  if (f != 2047) goto B_s;
  if (eqz(eqz(d | e))) goto B_u;
  return a;
  label B_u:
  f = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  g = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (g) goto B_w;
  if (eqz(f)) goto B_v;
  label B_w:
  h = float_exception_flags;
  h[0] = h[0] | 16;
  label B_v:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        g),
              f);
  label B_t:
  return d + e >> 9L | i64_extend_i32_u(c) << 63L;
  label B_s:
  f = f;
  b = d + e | 4611686018427387904L;
  goto B_a;
  label B_e:
  b = e;
  a = i64_extend_i32_u(a != 0L);
  label B_d:
  f = f;
  goto B_b;
  label B_c:
  a = d;
  f = g;
  label B_b:
  f = f - (g = (a = (b = (b | 2305843009213693952L) + a) << 1L) > -1L);
  b = select_if(a, b, g);
  label B_a:
  return roundAndPackFloat64(c, f, b);
}

export function subFloat64Sigs(a:long, b:long, c:int):long {
  var g:int;
  var f:int_ptr;
  var h:int_ptr;
  var d:long = b << 10L & 4611686018427386880L;
  var e:long = a << 10L & 4611686018427386880L;
  f = i32_wrap_i64(a >> 52L) & 2047;
  h = f - (g = i32_wrap_i64(b >> 52L) & 2047);
  if (h > 0) goto B_c;
  if (h < 0) goto B_e;
  if (eqz(f)) goto B_g;
  h = f;
  g = g;
  if (f != 2047) goto B_f;
  if (eqz(d | e)) goto B_h;
  f = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  g = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (g) goto B_j;
  if (eqz(f)) goto B_i;
  label B_j:
  h = float_exception_flags;
  h[0] = h[0] | 16;
  label B_i:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        g),
              f);
  label B_h:
  f = float_exception_flags;
  f[0] = f[0] | 16;
  return 9223372036854775807L;
  label B_g:
  h = 1;
  g = 1;
  label B_f:
  f = g;
  g = h;
  if (d >= e) goto B_k;
  b = e;
  a = d;
  g = g;
  goto B_b;
  label B_k:
  b = e;
  a = d;
  g = f;
  if (e < d) goto B_d;
  return i64_extend_i32_u(float_rounding_mode[0]:int == 3) << 63L;
  label B_e:
  if (g != 2047) goto B_l;
  if (eqz(d)) goto B_m;
  f = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  g = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (g) goto B_o;
  if (eqz(f)) goto B_n;
  label B_o:
  h = float_exception_flags;
  h[0] = h[0] | 16;
  label B_n:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        g),
              f);
  label B_m:
  return i64_extend_i32_u(c ^ -1) << 63L | 9218868437227405312L;
  label B_l:
  b = select_if(e | 4611686018427387904L, e, f);
  f = h + eqz(f);
  if (f) goto B_q;
  b = b;
  goto B_p;
  label B_q:
  if (f < -63) goto B_r;
  b = b >> i64_extend_i32_u(0 - f) |
      i64_extend_i32_u(b << i64_extend_i32_u(f & 63) != 0L);
  goto B_p;
  label B_r:
  b = i64_extend_i32_u(b != 0L);
  label B_p:
  b = b;
  a = d | 4611686018427387904L;
  g = g;
  label B_d:
  f = c ^ 1;
  g = g;
  b = a - b;
  goto B_a;
  label B_c:
  if (f != 2047) goto B_s;
  if (eqz(eqz(e))) goto B_t;
  return a;
  label B_t:
  f = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  g = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (g) goto B_v;
  if (eqz(f)) goto B_u;
  label B_v:
  h = float_exception_flags;
  h[0] = h[0] | 16;
  label B_u:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        g),
              f);
  label B_s:
  b = select_if(d | 4611686018427387904L, d, g);
  g = h - eqz(g);
  if (g) goto B_x;
  a = b;
  goto B_w;
  label B_x:
  if (g > 63) goto B_y;
  a = b >> i64_extend_i32_u(g) |
      i64_extend_i32_u(b << i64_extend_i32_u(0 - g & 63) != 0L);
  goto B_w;
  label B_y:
  a = i64_extend_i32_u(b != 0L);
  label B_w:
  b = e | 4611686018427387904L;
  a = a;
  g = f;
  label B_b:
  f = c;
  g = g;
  b = b - a;
  label B_a:
  return 
    roundAndPackFloat64(
      f,
      g +
      ((f = 
          select_if(31, -1, f = (b = b) < 4294967296L) +
          (memory_base + 1152 +
           (select_if(
              (f = select_if((f = i32_wrap_i64(select_if(b, b >> 32L, f))) << 16,
                             f,
                             g = f < 65536)) <<
              8,
              f,
              h = f < 16777216) >>
            22 &
            1020))[0]:int +
          select_if((f = g << 4) | 8, f, h)) ^
       -1),
      b << i64_extend_i32_u(f));
}

export function float64_add(a:long, b:long):long {
  var c:int;
  c = i32_wrap_i64(a >> 63L);
  if (c != i32_wrap_i64(b >> 63L)) goto B_a;
  return addFloat64Sigs(a, b, c);
  label B_a:
  return subFloat64Sigs(a, b, c);
}

export function ullong_to_double(a:long):double {
  var b:double;
  return b;
}

export function submain():int {
  var b:int;
  var f:long;
  var g:int;
  var h:double;
  var a:int = stack_pointer - 64;
  stack_pointer = a;
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_a;
  a[8]:int = b;
  iprintf(memory_base + 1104, a + 32);
  label B_a:
  b = a[14]:int;
  var c:long = a[6]:long;
  startTimer[0]:double =
    f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
  b = 0;
  var d:int = 0;
  loop L_b {
    var e:int = b;
    c = (b_input + (b = (d = d) << 3))[0]:long;
    f = (a_input + b)[0]:long;
    g = i32_wrap_i64(f >> 63L);
    if (g != i32_wrap_i64(c >> 63L)) goto B_d;
    c = addFloat64Sigs(f, c, g);
    goto B_c;
    label B_d:
    c = subFloat64Sigs(f, c, g);
    label B_c:
    g = e + (c != (z_output + b)[0]:long);
    b = g;
    e = d + 1;
    d = e;
    if (e != 46) continue L_b;
  }
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_e;
  a[4]:int = b;
  iprintf(memory_base + 1104, a + 16);
  label B_e:
  b = a[14]:int;
  c = a[6]:long;
  endTimer[0]:double =
    (h = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
  a[0]:double = h - startTimer[0]:double;
  small_printf(memory_base + 1139, a);
  stack_pointer = a + 64;
  return g;
}

function legalstub_shift64RightJamming(a:int, b:int, c:int, d:int) {
  shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                      c,
                      d)
}

function legalstub_float64_is_nan(a:int, b:int):int {
  return 
    float64_is_nan(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

function legalstub_float64_is_signaling_nan(a:int, b:int):int {
  return float64_is_signaling_nan(
           i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

function legalstub_extractFloat64Frac(a:int, b:int):int {
  var c:long = 
    extractFloat64Frac(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
  setTempRet0(i32_wrap_i64(c >> 32L));
  return i32_wrap_i64(c);
}

function legalstub_extractFloat64Exp(a:int, b:int):int {
  return 
    extractFloat64Exp(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

function legalstub_extractFloat64Sign(a:int, b:int):int {
  return 
    extractFloat64Sign(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

function legalstub_packFloat64(a:int, b:int, c:int, d:int):int {
  var e:long = 
    packFloat64(a, b, i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_roundAndPackFloat64(a:int, b:int, c:int, d:int):int {
  var e:long = 
    roundAndPackFloat64(a,
                        b,
                        i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_normalizeRoundAndPackFloat64(a:int, b:int, c:int, d:int):int {
  var e:long = normalizeRoundAndPackFloat64(
                 a,
                 b,
                 i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_addFloat64Sigs(a:int, b:int, c:int, d:int, e:int):int {
  var f:long = 
    addFloat64Sigs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                   i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
                   e);
  setTempRet0(i32_wrap_i64(f >> 32L));
  return i32_wrap_i64(f);
}

function legalstub_subFloat64Sigs(a:int, b:int, c:int, d:int, e:int):int {
  var f:long = 
    subFloat64Sigs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                   i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
                   e);
  setTempRet0(i32_wrap_i64(f >> 32L));
  return i32_wrap_i64(f);
}

function legalstub_float64_add(a:int, b:int, c:int, d:int):int {
  var e:long = 
    float64_add(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_ullong_to_double(a:int, b:int):double {
  return 
    ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

