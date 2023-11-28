import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function shift64RightJamming(a:long, b:int, c:long_ptr) {
  if (b) {
    if (b <= 63) {
      c[0] =
        i64_extend_i32_u(a << i64_extend_i32_u(0 - b & 63) != 0L) |
        a >> i64_extend_i32_u(b);
      return ;
    }
    a = i64_extend_i32_u(a != 0L);
  }
  c[0] = a;
}

export function add128(a:long, b:long, c:long, d:long, e:long_ptr, f:long_ptr) {
  f[0] = (b = b + d);
  e[0] = i64_extend_i32_u(b < d) + a + c;
}

export function sub128(a:long, b:long, c:long, d:long, e:long_ptr, f:long_ptr) {
  f[0] = b - d;
  e[0] = a - c - i64_extend_i32_u(b < d);
}

export function mul64To128(a:long, b:long, c:long_ptr, d:long_ptr) {
  var e:long;
  var f:long;
  var g:long;
  d[0] = (e = a * b);
  c[0] =
    ((a = (g = (f = b >> 32L) * (a & 4294967295L)) +
          (b & 4294967295L) * (b = a >> 32L)) >>
     32L) +
    b * f +
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
  var e:int;
  var d:int;
  var f:int;
  var g:int;
  c[0] =
    a <<
    i64_extend_i32_u(
      (d = 
         (memory_base + 576 +
          (select_if(
             (d = 
                select_if(
                  (d = i32_wrap_i64(select_if(a, a >> 32L, e = a < 4294967296L))) << 16,
                  d,
                  f = d < 65536)) <<
             8,
             d,
             g = d < 16777216) >>
           22 &
           1020))[0]:int +
         (e << 5 | select_if((d = f << 4) | 8, d, g))) -
      11);
  b[0] = 12 - d;
}

export function packFloat64(a:int, b:int, c:long):long {
  return 
    (i64_extend_i32_u(a) << 63L) + c + (i64_extend_i32_u(b) << 52L)
}

export function roundAndPackFloat64(a:int, b:int_ptr, c:long):long {
  var d:int;
  var e:long;
  var f:int;
  var g:long = {
                 f = float_rounding_mode[0]:int;
                 if (eqz(f)) {
                   e = 512L;
                   0L;
                   goto B_a;
                 }
                 if (f == 1) {
                   -1L;
                   goto B_a;
                 }
                 if (a) {
                   e = select_if(0L, 1023L, d = f == 2);
                   select_if(-1L, 0L, d);
                   goto B_a;
                 }
                 e = select_if(0L, 1023L, d = f == 3);
                 select_if(-1L, 0L, d);
                 label B_a:
               }
  float_exception_flags[0]:int =
    {
      if ((b & 65535) < 2045) goto B_g;
      if (b <= 2045) {
        if (b != 2045) goto B_h;
        if (c + e >= 0L) goto B_h;
      }
      (b = float_exception_flags)[0] = b[0] | 9;
      return g + (i64_extend_i32_u(a) << 63L) + 9218868437227405312L;
      label B_h:
      if (b >= 0) goto B_g;
      if (eqz(
            d = i32_wrap_i64(
                  c = {
                        if ((d = 0 - b) <= 63) {
                          i64_extend_i32_u(c << i64_extend_i32_u(b & 63) != 0L) |
                          c >> i64_extend_i32_u(d);
                          goto B_j;
                        }
                        i64_extend_i32_u(c != 0L);
                        label B_j:
                      }) &
                1023)) {
        d = 0;
        b = 0;
        goto B_e;
      }
      b = 0;
      float_exception_flags[0]:int | 4;
      goto B_f;
      label B_g:
      if (eqz(d = i32_wrap_i64(c) & 1023)) {
        d = 0;
        goto B_e;
      }
      float_exception_flags[0]:int;
      label B_f:
    } |
    1
  label B_e:
  c = (i64_extend_i32_u(eqz(f) & d == 512) ^ -1L) & c + e >> 10L;
  return (c | i64_extend_i32_u(a) << 63L) +
         select_if(0L, i64_extend_i32_u(b) << 52L, eqz(c));
}

export function float64_div(a:long, b:long):long {
  var g:int_ptr;
  var l:int;
  var m:int;
  var j:long;
  var k:long;
  var n:long;
  var o:long;
  var p:long;
  var e:long = b & 4503599627370495L;
  var c:long = a & 4503599627370495L;
  var d:int_ptr = i32_wrap_i64(b >> 52L) & 2047;
  var h:long = a ^ b;
  var i:long = a >> 52L;
  var f:int = i32_wrap_i64(i) & 2047;
  if (f == 2047) {
    if (c != 0L) {
      f = (a & 9221120237041090560L) == 9218868437227405312L &
          (a & 2251799813685247L) != 0L;
      if (f |
          (d = (b & 9221120237041090560L) == 9218868437227405312L &
               (b & 2251799813685247L) != 0L)) {
        g = float_exception_flags;
        g[0] = g[0] | 16;
      }
      c = b | 2251799813685248L;
      return 
        select_if(c,
                  select_if(a = a | 2251799813685248L,
                            select_if(a, c, b << 1L < -9007199254740991L),
                            f),
                  d);
    }
    if (d == 2047) {
      if (e != 0L) {
        f = (a & 9221120237041090560L) == 9218868437227405312L &
            (a & 2251799813685247L) != 0L;
        if (f |
            (d = (b & 9221120237041090560L) == 9218868437227405312L &
                 (b & 2251799813685247L) != 0L)) {
          g = float_exception_flags;
          g[0] = g[0] | 16;
        }
        c = b | 2251799813685248L;
        return 
          select_if(c,
                    select_if(a = a | 2251799813685248L,
                              select_if(a, c, b << 1L < -9007199254740991L),
                              f),
                    d);
      }
      d = float_exception_flags;
      d[0] = d[0] | 16;
      return 9223372036854775807L;
    }
    return (h & -9223372036854775808L) | 9218868437227405312L;
  }
  if (d) {
    if (d != 2047) goto B_g;
    if (e != 0L) {
      f = (a & 9221120237041090560L) == 9218868437227405312L &
          (a & 2251799813685247L) != 0L;
      if (f |
          (d = (b & 9221120237041090560L) == 9218868437227405312L &
               (b & 2251799813685247L) != 0L)) {
        g = float_exception_flags;
        g[0] = g[0] | 16;
      }
      c = b | 2251799813685248L;
      return 
        select_if(c,
                  select_if(a = a | 2251799813685248L,
                            select_if(a, c, b << 1L < -9007199254740991L),
                            f),
                  d);
    }
    return h & -9223372036854775808L;
  }
  if (eqz(e)) {
    d = float_exception_flags[0]:int;
    if (eqz((i & 2047L) | c)) {
      float_exception_flags[0]:int = d | 16;
      return 9223372036854775807L;
    }
    float_exception_flags[0]:int = d | 2;
    return (h & -9223372036854775808L) | 9218868437227405312L;
  }
  d = 
    12 -
    (g = 
       (memory_base + 576 +
        (select_if(
           (d = 
              select_if(
                (d = i32_wrap_i64(select_if(b, e >> 32L, g = e < 4294967296L))) << 16,
                d,
                l = d < 65536)) <<
           8,
           d,
           m = d < 16777216) >>
         22 &
         1020))[0]:int +
       (g << 5 | select_if((d = l << 4) | 8, d, m)));
  e = e << i64_extend_i32_u(g - 11);
  label B_g:
  if (eqz(f)) {
    if (eqz(c)) { return h & -9223372036854775808L }
    f = 
      12 -
      (g = 
         (memory_base + 576 +
          (select_if(
             (f = 
                select_if(
                  (f = i32_wrap_i64(select_if(a, c >> 32L, g = c < 4294967296L))) << 16,
                  f,
                  l = f < 65536)) <<
             8,
             f,
             m = f < 16777216) >>
           22 &
           1020))[0]:int +
         (g << 5 | select_if((f = l << 4) | 8, f, m)));
    c = c << i64_extend_i32_u(g - 11);
  }
  g = i32_wrap_i64(h >> 63L);
  f = f - d +
      select_if(1022,
                1021,
                d = (i = (j = e << 11L) | -9223372036854775808L) <=
                    (a = c << 10L | 4611686018427387904L) << 1L);
  b = -1L;
  if (i <= (k = a >> i64_extend_i32_u(d))) goto B_o;
  h = i >> 32L;
  a = -4294967296L;
  if (k < (n = i & -4294967296L)) { a = k / h << 32L }
  b = 0L - (c = a * i);
  c = 
    k - (o = a >> 32L) * h + ((j = o * (p = j & 4294965248L)) >> 32L) -
    i64_extend_i32_u(c != 0L) -
    i64_extend_i32_u(c < j << 32L);
  if (c >= 0L) {
    e = b;
    goto B_q;
  }
  j = e << 43L;
  loop L_s {
    e = b + j;
    d = e < b;
    a = a - 4294967296L;
    b = e;
    c = i64_extend_i32_u(d) + c + h;
    if (c < 0L) continue L_s;
  }
  label B_q:
  b = 4294967295L;
  c = c << 32L | e >> 32L;
  if (c < n) { b = c / h }
  b = a | b;
  if ((b & 511L) > 2L) goto B_o;
  a = 0L - (c = b * i);
  e = k - i64_extend_i32_u(c != 0L) -
      (e = b >> 32L) * h +
      ((e = (j = e * p) + (b & 4294967295L) * h) >> 32L) +
      select_if(-4294967296L, 0L, e < j) -
      i64_extend_i32_u(c < e << 32L);
  if (e >= 0L) {
    c = a;
    goto B_u;
  }
  loop L_w {
    b = b - 1L;
    c = a + i;
    d = c < a;
    a = c;
    e = e + i64_extend_i32_u(d);
    if (e < 0L) continue L_w;
  }
  label B_u:
  b = b | i64_extend_i32_u(c != 0L);
  label B_o:
  return roundAndPackFloat64(g, f, b);
}

export function ullong_to_double(a:long):double {
  var b:double;
  return b;
}

export function submain():int {
  var d:long;
  var c:int;
  var f:double;
  var a:int = stack_pointer + -64;
  stack_pointer = a;
  var b:int = gettimeofday(a + 48, 0);
  if (b) {
    a[8]:int = b;
    iprintf(memory_base + 528, a + 32);
  }
  startTimer[0]:double =
    f64_convert_i32_s(b = a[14]:int) * 0.000001 +
    f64_convert_i64_s(d = a[6]:long);
  b = 0;
  loop L_b {
    var e:int = b << 3;
    d = (e + z_output)[0]:long;
    c = 
      c + (float64_div((a_input + e)[0]:long, (b_input + e)[0]:long) != d);
    b = b + 1;
    if (b != 22) continue L_b;
  }
  b = gettimeofday(a + 48, 0);
  if (b) {
    a[4]:int = b;
    iprintf(memory_base + 528, a + 16);
  }
  endTimer[0]:double =
    (f = f64_convert_i32_s(b = a[14]:int) * 0.000001 +
         f64_convert_i64_s(d = a[6]:long));
  a[0]:double = f - startTimer[0]:double;
  small_printf(memory_base + 563, a);
  stack_pointer = a - -64;
  return c;
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

