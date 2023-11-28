import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global float_exception_flags:int;
export import global float_rounding_mode:int;
export import global startTimer:int;
export import global z_output:int;
export import global b_input:int;
export import global a_input:int;
export import global endTimer:int;
global float_exception_flags_1:int = 1604;
global float_rounding_mode_1:int = 1600;
global startTimer_1:int = 1608;
global z_output_1:int = 352;
global b_input_1:int = 176;
global a_input_1:int = 0;
global endTimer_1:int = 1616;

data data(offset: memory_base) =
  "\00\00\00\00\00\00\ff\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0\7f"
  "\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\80\00\00\00\00\00\00\08@\00\00\00\00\00\00\08\c0\00"
  "\00\00\00\00\00\08@\00\00\00\00\00\00\08\c0\00\00\00\00\00\00\00@\00\00"
  "\00\00\00\00\00\c0\00\00\00\00\00\00\00@\00\00\00\00\00\00\00\c0\00\00"
  "\00\00\00\00\f0?\00\00\00\00\00\00\f0\bf\00\00\00\00\00\00\f0?\00\00\00"
  "\00\00\00\f0\bf\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f8\7f\00\00\00"
  "\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f8\7f\00\00\00"
  "\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00@\00\00\00\00\00"
  "\00\00@\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\00\c0\00\00\00\00\00"
  "\00\10@\00\00\00\00\00\00\10@\00\00\00\00\00\00\10\c0\00\00\00\00\00\00"
  "\10\c0\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8?\00\00\00\00\00\00\f8"
  "\bf\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\ff\7f\00\00\00\00\00\00\f8"
  "\7f\ff\ff\ff\ff\ff\ff\ff\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f8"
  "\7f\00\00\00\00\00\00\00\00\ff\ff\ff\ff\ff\ff\ff\7f\00\00\00\00\00\00\f0"
  "\7f\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\80\00\00\00\00\00\00\f8"
  "?\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\f8\bf\00\00\00\00\00\00\f8"
  "?\00\00\00\00\00\00\e0?\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\e0\bf"
  "\00\00\00\00\00\00\e0?UUUUUU\e5?UUUUUU\e5\bfUUUUUU\e5\bfUUUUUU\e5?Erro"
  "r return from gettimeofday: %d\00%0.6f\0a\00\00\00\00\00\00\00\08\00\00"
  "\00\07\00\00\00\06\00\00\00\06\00\00\00\05\00\00\00\05\00\00\00\05\00\00"
  "\00\05\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00"
  "\00\04\00\00\00\04\00\00\00\04\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00"
  "\00\01\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
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
  "\00\00\00\00\00\00\00\00\00\00\00\00\00";

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

export function add128(a:long, b:long, c:long, d:long, e:long_ptr, f:long_ptr) {
  f[0] = (b = d + b);
  e[0] = c + a + i64_extend_i32_u(b < d);
}

export function sub128(a:long, b:long, c:long, d:long, e:long_ptr, f:long_ptr) {
  f[0] = b - d;
  e[0] = a - c - i64_extend_i32_u(b < d);
}

export function mul64To128(a:long, b:long, c:long_ptr, d:long_ptr) {
  var e:long;
  var f:long;
  var g:long;
  d[0] = (e = b * a);
  c[0] =
    ((a = (g = (f = b >> 32L) * (a & 4294967295L)) +
          (b & 4294967295L) * (b = a >> 32L)) >>
     32L) +
    f * b +
    (i64_extend_i32_u(a < g) << 32L) +
    i64_extend_i32_u(e < a << 32L);
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

export function normalizeFloat64Subnormal(a:long, b:int_ptr, c:long_ptr) {
  var d:int;
  var e:int;
  var f:int;
  var g:int;
  c[0] =
    a <<
    i64_extend_i32_u(
      (e = 
         (memory_base + 576 +
          (select_if(
             (e = 
                select_if(
                  (e = i32_wrap_i64(select_if(a, a >> 32L, d = a < 4294967296L))) << 16,
                  e,
                  f = e < 65536)) <<
             8,
             e,
             g = e < 16777216) >>
           22 &
           1020))[0]:int +
         (select_if((e = f << 4) | 8, e, g) | d << 5)) +
      -11);
  b[0] = 12 - e;
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

export function float64_div(a:long, b:long):long {
  var i:int_ptr;
  var h:int;
  var g:long;
  var j:int;
  var k:int;
  var m:long;
  var n:long;
  var o:long;
  var q:long;
  var r:long;
  var c:long = b & 4503599627370495L;
  var d:long = a & 4503599627370495L;
  var e:int_ptr = i32_wrap_i64(b >> 52L) & 2047;
  var f:long = b ^ a;
  g = a >> 52L;
  h = i32_wrap_i64(g) & 2047;
  if (h != 2047) goto B_a;
  if (eqz(d)) goto B_b;
  e = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  h = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (h) goto B_d;
  if (eqz(e)) goto B_c;
  label B_d:
  i = float_exception_flags;
  i[0] = i[0] | 16;
  label B_c:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        h),
              e);
  label B_b:
  if (e != 2047) goto B_e;
  if (eqz(c)) goto B_f;
  e = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  h = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (h) goto B_h;
  if (eqz(e)) goto B_g;
  label B_h:
  i = float_exception_flags;
  i[0] = i[0] | 16;
  label B_g:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        h),
              e);
  label B_f:
  e = float_exception_flags;
  e[0] = e[0] | 16;
  return 9223372036854775807L;
  label B_e:
  return (f & -9223372036854775808L) | 9218868437227405312L;
  label B_a:
  if (eqz(e)) goto B_j;
  if (e == 2047) goto B_k;
  b = c;
  e = e;
  goto B_i;
  label B_k:
  if (eqz(c)) goto B_l;
  e = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  h = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (h) goto B_n;
  if (eqz(e)) goto B_m;
  label B_n:
  i = float_exception_flags;
  i[0] = i[0] | 16;
  label B_m:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        h),
              e);
  label B_l:
  return f & -9223372036854775808L;
  label B_j:
  if (c != 0L) goto B_o;
  e = float_exception_flags[0]:int;
  if (((g & 2047L) | d) != 0L) goto B_p;
  float_exception_flags[0]:int = e | 16;
  return 9223372036854775807L;
  label B_p:
  float_exception_flags[0]:int = e | 2;
  return (f & -9223372036854775808L) | 9218868437227405312L;
  label B_o:
  b = 
    c <<
    i64_extend_i32_u(
      (e = 
         (memory_base + 576 +
          (select_if(
             (e = 
                select_if(
                  (e = i32_wrap_i64(select_if(b, c >> 32L, i = c < 4294967296L))) << 16,
                  e,
                  j = e < 65536)) <<
             8,
             e,
             k = e < 16777216) >>
           22 &
           1020))[0]:int +
         (select_if((e = j << 4) | 8, e, k) | i << 5)) +
      -11);
  e = 12 - e;
  label B_i:
  e = e;
  c = b;
  if (eqz(h)) goto B_r;
  b = d;
  j = h;
  goto B_q;
  label B_r:
  if (d != 0L) goto B_s;
  return f & -9223372036854775808L;
  label B_s:
  b = 
    d <<
    i64_extend_i32_u(
      (h = 
         (memory_base + 576 +
          (select_if(
             (h = 
                select_if(
                  (h = i32_wrap_i64(select_if(a, d >> 32L, i = d < 4294967296L))) << 16,
                  h,
                  j = h < 65536)) <<
             8,
             h,
             k = h < 16777216) >>
           22 &
           1020))[0]:int +
         (select_if((h = j << 4) | 8, h, k) | i << 5)) +
      -11);
  j = 12 - h;
  label B_q:
  var l:long = f >> 63L;
  i = select_if(1022,
                1021,
                h = (n = (m = c << 11L) | -9223372036854775808L) <=
                    (a = b << 10L | 4611686018427387904L) << 1L);
  e = j - e;
  b = -1L;
  if (n <= (o = a >> i64_extend_i32_u(h))) goto B_t;
  var p:long = n >> 32L;
  b = -4294967296L;
  q = n & -4294967296L;
  if (q <= o) goto B_u;
  b = o / p << 32L;
  label B_u:
  f = 0L - (b = (a = b) * n);
  g = o - (d = a >> 32L) * p + ((d = d * (m & 4294965248L)) >> 32L) -
      i64_extend_i32_u(b != 0L) -
      i64_extend_i32_u(b < d << 32L);
  if (g <= -1L) goto B_w;
  b = f;
  r = g;
  g = a;
  goto B_v;
  label B_w:
  var s:long = c << 43L;
  d = a;
  c = g;
  f = f;
  loop L_x {
    g = d + -4294967296L;
    d = g;
    a = c + p + i64_extend_i32_u((b = (a = f) + s) < a);
    c = a;
    f = b;
    b = b;
    r = a;
    g = g;
    if (a < 0L) continue L_x;
  }
  label B_v:
  d = g;
  a = 4294967295L;
  if (q <= (b = r << 32L | b >> 32L)) goto B_y;
  a = b / p;
  label B_y:
  b = a | d;
  label B_t:
  h = i32_wrap_i64(l);
  e = e + i;
  a = b;
  if ((a & 511L) <= 2L) goto B_aa;
  b = a;
  goto B_z;
  label B_aa:
  g = 0L - (b = a * n);
  b = 
    o - i64_extend_i32_u(b != 0L) -
    (d = a >> 32L) * (c = n >> 32L) +
    ((d = (f = d * (m & 4294965248L)) + (a & 4294967295L) * c) >> 32L) +
    select_if(-4294967296L, 0L, d < f) -
    i64_extend_i32_u(b < d << 32L);
  if (b <= -1L) goto B_ca;
  b = g;
  f = a;
  goto B_ba;
  label B_ca:
  a = a;
  d = g;
  c = b;
  loop L_da {
    f = a + -1L;
    a = f;
    g = d;
    b = g + n;
    d = b;
    g = c + i64_extend_i32_u(b < g);
    c = g;
    b = b;
    f = f;
    if (g < 0L) continue L_da;
  }
  label B_ba:
  b = f | i64_extend_i32_u(b != 0L);
  label B_z:
  return roundAndPackFloat64(h, e, b);
}

export function ullong_to_double(a:long):double {
  var b:double;
  return b;
}

export function submain():int {
  var b:int;
  var e:int;
  var h:double;
  var g:int;
  var a:int = stack_pointer - 64;
  stack_pointer = a;
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_a;
  a[8]:int = b;
  iprintf(memory_base + 528, a + 32);
  label B_a:
  b = a[14]:int;
  var c:long = a[6]:long;
  startTimer[0]:double =
    f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
  var d:int = 0;
  b = 0;
  loop L_b {
    c = (z_output + (b = (e = b) << 3))[0]:long;
    var f:long = (b_input + b)[0]:long;
    g = d + (c != float64_div((a_input + b)[0]:long, f));
    d = g;
    e = e + 1;
    b = e;
    if (e != 22) continue L_b;
  }
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_c;
  a[4]:int = b;
  iprintf(memory_base + 528, a + 16);
  label B_c:
  b = a[14]:int;
  c = a[6]:long;
  endTimer[0]:double =
    (h = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
  a[0]:double = h - startTimer[0]:double;
  small_printf(memory_base + 563, a);
  stack_pointer = a + 64;
  return g;
}

function legalstub_shift64RightJamming(a:int, b:int, c:int, d:int) {
  shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                      c,
                      d)
}

function legalstub_add128(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int) {
  add128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
         i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
         i64_extend_i32_u(e) | i64_extend_i32_u(f) << 32L,
         i64_extend_i32_u(g) | i64_extend_i32_u(h) << 32L,
         i,
         j)
}

function legalstub_sub128(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int) {
  sub128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
         i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
         i64_extend_i32_u(e) | i64_extend_i32_u(f) << 32L,
         i64_extend_i32_u(g) | i64_extend_i32_u(h) << 32L,
         i,
         j)
}

function legalstub_mul64To128(a:int, b:int, c:int, d:int, e:int, f:int) {
  mul64To128(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
             i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
             e,
             f)
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

function legalstub_normalizeFloat64Subnormal(a:int, b:int, c:int, d:int) {
  normalizeFloat64Subnormal(
    i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
    c,
    d)
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

function legalstub_float64_div(a:int, b:int, c:int, d:int):int {
  var e:long = 
    float64_div(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_ullong_to_double(a:int, b:int):double {
  return 
    ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

