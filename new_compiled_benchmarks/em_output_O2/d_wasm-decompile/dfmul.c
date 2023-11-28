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
global float_exception_flags_1:int = 1556;
global float_rounding_mode_1:int = 1552;
global startTimer_1:int = 1560;
global z_output_1:int = 320;
global b_input_1:int = 160;
global a_input_1:int = 0;
global endTimer_1:int = 1568;

data data(offset: memory_base) =
  "\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\ff\7f\00\00\00\00\00\00\f0\7f"
  "\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\80"
  "\00\00\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00@\00\00"
  "\00\00\00\00\d0?\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\d0\bf\00\00"
  "\00\00\00\00\00@\00\00\00\00\00\00\d0\bf\00\00\00\00\00\00\00\c0\00\00"
  "\00\00\00\00\d0?\00\00\00\00\00\00\00\00\ff\ff\ff\ff\ff\ff\ff\ff\00\00"
  "\00\00\00\00\f0\ff\00\00\00\00\00\00\00\00\00\00\00\00\00\00\f0?\00\00"
  "\00\00\00\00\ff\ff\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\f0\7f\00\00"
  "\00\00\00\00\f0?\00\00\00\00\00\00\f0?\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\80\00\00\00\00\00\00\d0?\00\00\00\00\00\00\00@\00\00\00\00"
  "\00\00\d0\bf\00\00\00\00\00\00\00\c0\00\00\00\00\00\00\d0\bf\00\00\00\00"
  "\00\00\00@\00\00\00\00\00\00\d0?\00\00\00\00\00\00\00\c0\00\00\00\00\00"
  "\00\00\00\ff\ff\ff\ff\ff\ff\ff\ff\00\00\00\00\00\00\ff\7f\ff\ff\ff\ff\ff"
  "\ff\ff\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\ff\ff\ff\ff\ff\ff\ff"
  "\ff\ff\7f\00\00\00\00\00\00\f0\7f\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\80\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\80\00\00\00\00\00"
  "\00\e0?\00\00\00\00\00\00\e0?\00\00\00\00\00\00\e0?\00\00\00\00\00\00\e0"
  "?\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\e0"
  "\bf\00\00\00\00\00\00\e0\bf\00\00\00\00\00\00\00\00Error return from g"
  "ettimeofday: %d\00%0.6f\0a\00\00\00\00\00\00\00\08\00\00\00\07\00\00\00"
  "\06\00\00\00\06\00\00\00\05\00\00\00\05\00\00\00\05\00\00\00\05\00\00\00"
  "\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00"
  "\04\00\00\00\04\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00"
  "\02\00\00\00\02\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
  "\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00\01\00\00\00"
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
  "\00\00\00\00\00\00\00\00";

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
         (memory_base + 528 +
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

export function float64_mul(a:long, b:long):long {
  var g:int_ptr;
  var j:int;
  var k:int;
  var f:long = b & 4503599627370495L;
  var d:long = a & 4503599627370495L;
  var i:long = b >> 52L;
  var c:int_ptr = i32_wrap_i64(i) & 2047;
  var h:long = a ^ b;
  var l:long = a >> 52L;
  var e:int = i32_wrap_i64(l) & 2047;
  if (e == 2047) {
    if (eqz(d)) {
      if (eqz(f)) goto B_b;
      if (c != 2047) goto B_b;
    }
    e = (a & 9221120237041090560L) == 9218868437227405312L &
        (a & 2251799813685247L) != 0L;
    if (e |
        (c = (b & 9221120237041090560L) == 9218868437227405312L &
             (b & 2251799813685247L) != 0L)) {
      g = float_exception_flags;
      g[0] = g[0] | 16;
    }
    d = b | 2251799813685248L;
    return 
      select_if(d,
                select_if(a = a | 2251799813685248L,
                          select_if(a, d, b << 1L < -9007199254740991L),
                          e),
                c);
    label B_b:
    if (eqz((i & 2047L) | f)) {
      c = float_exception_flags;
      c[0] = c[0] | 16;
      return 9223372036854775807L;
    }
    return (h & -9223372036854775808L) | 9218868437227405312L;
  }
  if (c == 2047) {
    if (f != 0L) {
      e = (a & 9221120237041090560L) == 9218868437227405312L &
          (a & 2251799813685247L) != 0L;
      if (e |
          (c = (b & 9221120237041090560L) == 9218868437227405312L &
               (b & 2251799813685247L) != 0L)) {
        g = float_exception_flags;
        g[0] = g[0] | 16;
      }
      d = b | 2251799813685248L;
      return 
        select_if(d,
                  select_if(a = a | 2251799813685248L,
                            select_if(a, d, b << 1L < -9007199254740991L),
                            e),
                  c);
    }
    if (eqz((l & 2047L) | d)) {
      c = float_exception_flags;
      c[0] = c[0] | 16;
      return 9223372036854775807L;
    }
    return (h & -9223372036854775808L) | 9218868437227405312L;
  }
  if (eqz(e)) {
    if (eqz(d)) { return h & -9223372036854775808L }
    e = 
      12 -
      (g = 
         (memory_base + 528 +
          (select_if(
             (e = 
                select_if(
                  (e = i32_wrap_i64(select_if(a, d >> 32L, g = d < 4294967296L))) << 16,
                  e,
                  j = e < 65536)) <<
             8,
             e,
             k = e < 16777216) >>
           22 &
           1020))[0]:int +
         (g << 5 | select_if((e = j << 4) | 8, e, k)));
    d = d << i64_extend_i32_u(g - 11);
  }
  if (eqz(c)) {
    if (eqz(f)) { return h & -9223372036854775808L }
    c = 
      12 -
      (g = 
         (memory_base + 528 +
          (select_if(
             (c = 
                select_if(
                  (c = i32_wrap_i64(select_if(b, f >> 32L, g = f < 4294967296L))) << 16,
                  c,
                  j = c < 65536)) <<
             8,
             c,
             k = c < 16777216) >>
           22 &
           1020))[0]:int +
         (g << 5 | select_if((c = j << 4) | 8, c, k)));
    f = f << i64_extend_i32_u(g - 11);
  }
  return 
    roundAndPackFloat64(
      i32_wrap_i64(h >> 63L),
      c + e +
      select_if(
        -1024,
        -1023,
        c = 
          (a = 
             (b = 
                ((b = (h = (f = (a = (b = f << 11L) | -9223372036854775808L) >> 32L) *
                           ((d = d << 10L) & 4294966272L)) +
                      (i = (d = d | 4611686018427387904L) >> 32L) * (b & 4294965248L)) >>
                 32L) +
                f * i +
                (i64_extend_i32_u(b < h) << 32L) +
                i64_extend_i32_u((a = a * d) < b << 32L) |
                i64_extend_i32_u(a != 0L)) <<
             1L) >=
          0L),
      select_if(a, b, c));
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
    iprintf(memory_base + 480, a + 32);
  }
  startTimer[0]:double =
    f64_convert_i32_s(b = a[14]:int) * 0.000001 +
    f64_convert_i64_s(d = a[6]:long);
  b = 0;
  loop L_b {
    var e:int = b << 3;
    d = (e + z_output)[0]:long;
    c = 
      c + (float64_mul((a_input + e)[0]:long, (b_input + e)[0]:long) != d);
    b = b + 1;
    if (b != 20) continue L_b;
  }
  b = gettimeofday(a + 48, 0);
  if (b) {
    a[4]:int = b;
    iprintf(memory_base + 480, a + 16);
  }
  endTimer[0]:double =
    (f = f64_convert_i32_s(b = a[14]:int) * 0.000001 +
         f64_convert_i64_s(d = a[6]:long));
  a[0]:double = f - startTimer[0]:double;
  small_printf(memory_base + 515, a);
  stack_pointer = a - -64;
  return c;
}

function legalstub_shift64RightJamming(a:int, b:int, c:int, d:int) {
  shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                      c,
                      d)
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

function legalstub_float64_mul(a:int, b:int, c:int, d:int):int {
  var e:long = 
    float64_mul(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_ullong_to_double(a:int, b:int):double {
  return 
    ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

