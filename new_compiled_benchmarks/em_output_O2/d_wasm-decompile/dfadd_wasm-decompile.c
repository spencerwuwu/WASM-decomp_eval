import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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

export function addFloat64Sigs(a:long, b:long, c:int_ptr):long {
  var h:int;
  var d:int;
  var f:int;
  var e:long = b << 9L & 2305843009213693440L;
  var g:long = a << 9L & 2305843009213693440L;
  d = i32_wrap_i64(a >> 52L) & 2047;
  f = d - (h = i32_wrap_i64(b >> 52L) & 2047);
  if (f > 0) {
    if (d == 2047) {
      if (eqz(g)) goto B_a;
      f = (a & 9221120237041090560L) == 9218868437227405312L &
          (a & 2251799813685247L) != 0L;
      if (f |
          (d = (b & 9221120237041090560L) == 9218868437227405312L &
               (b & 2251799813685247L) != 0L)) {
        c = float_exception_flags;
        c[0] = c[0] | 16;
      }
      e = b | 2251799813685248L;
      return 
        select_if(e,
                  select_if(a = a | 2251799813685248L,
                            select_if(a, e, b << 1L < -9007199254740991L),
                            f),
                  d);
    }
    if (h) {
      e = e | 2305843009213693952L;
      goto B_h;
    }
    f = f - 1;
    if (eqz(f)) goto B_c;
    label B_h:
    if (f > 63) goto B_d;
    e = i64_extend_i32_u(e << i64_extend_i32_u(0 - f & 63) != 0L) |
        e >> i64_extend_i32_u(f);
    goto B_c;
  }
  if (f < 0) {
    if (h == 2047) {
      if (e != 0L) {
        f = (a & 9221120237041090560L) == 9218868437227405312L &
            (a & 2251799813685247L) != 0L;
        if (f |
            (d = (b & 9221120237041090560L) == 9218868437227405312L &
                 (b & 2251799813685247L) != 0L)) {
          c = float_exception_flags;
          c[0] = c[0] | 16;
        }
        e = b | 2251799813685248L;
        return 
          select_if(e,
                    select_if(a = a | 2251799813685248L,
                              select_if(a, e, b << 1L < -9007199254740991L),
                              f),
                    d);
      }
      return i64_extend_i32_u(c) << 63L | 9218868437227405312L;
    }
    g = select_if(g | 2305843009213693952L, g, d);
    d = f + eqz(d);
    if (eqz(d)) {
      d = h;
      goto B_c;
    }
    f = 0 - d;
    if (f <= 63) {
      g = i64_extend_i32_u(g << i64_extend_i32_u(d & 63) != 0L) |
          g >> i64_extend_i32_u(f);
      d = h;
      goto B_c;
    }
    g = i64_extend_i32_u(g != 0L);
    d = h;
    goto B_c;
  }
  if (d) {
    if (d != 2047) goto B_p;
    if (eqz(e | g)) goto B_a;
    f = (a & 9221120237041090560L) == 9218868437227405312L &
        (a & 2251799813685247L) != 0L;
    if (f |
        (d = (b & 9221120237041090560L) == 9218868437227405312L &
             (b & 2251799813685247L) != 0L)) {
      c = float_exception_flags;
      c[0] = c[0] | 16;
    }
    e = b | 2251799813685248L;
    return 
      select_if(e,
                select_if(a = a | 2251799813685248L,
                          select_if(a, e, b << 1L < -9007199254740991L),
                          f),
                d);
  }
  return i64_extend_i32_u(c) << 63L | e + g >> 9L;
  label B_p:
  a = e + g | 4611686018427387904L;
  goto B_b;
  label B_d:
  e = i64_extend_i32_u(e != 0L);
  label B_c:
  a = (g | 2305843009213693952L) + e;
  b = a << 1L;
  a = select_if(b, a, f = b >= 0L);
  d = d - f;
  label B_b:
  a = roundAndPackFloat64(c, d, a);
  label B_a:
  return a;
}

export function subFloat64Sigs(a:long, b:long, c:int):long {
  var h:int;
  var d:int_ptr;
  var i:int;
  var f:int_ptr;
  var e:long = b << 10L & 4611686018427386880L;
  var g:long = a << 10L & 4611686018427386880L;
  a = 
    {
      d = i32_wrap_i64(a >> 52L) & 2047;
      f = d - (h = i32_wrap_i64(b >> 52L) & 2047);
      if (f <= 0) {
        if (f >= 0) {
          if (d) {
            if (d != 2047) goto B_g;
            if ((e | g) != 0L) {
              h = (a & 9221120237041090560L) == 9218868437227405312L &
                  (a & 2251799813685247L) != 0L;
              if (h |
                  (d = (b & 9221120237041090560L) == 9218868437227405312L &
                       (b & 2251799813685247L) != 0L)) {
                f = float_exception_flags;
                f[0] = f[0] | 16;
              }
              e = b | 2251799813685248L;
              return 
                select_if(e,
                          select_if(a = a | 2251799813685248L,
                                    select_if(a, e, b << 1L < -9007199254740991L),
                                    h),
                          d);
            }
            d = float_exception_flags;
            d[0] = d[0] | 16;
            return 9223372036854775807L;
          }
          d = 1;
          h = 1;
          label B_g:
          if (e < g) goto B_c;
          if (e > g) goto B_e;
          return i64_extend_i32_u(float_rounding_mode[0]:int == 3) << 63L;
        }
        if (h == 2047) {
          if (e != 0L) {
            h = (a & 9221120237041090560L) == 9218868437227405312L &
                (a & 2251799813685247L) != 0L;
            if (h |
                (d = (b & 9221120237041090560L) == 9218868437227405312L &
                     (b & 2251799813685247L) != 0L)) {
              f = float_exception_flags;
              f[0] = f[0] | 16;
            }
            e = b | 2251799813685248L;
            return 
              select_if(e,
                        select_if(a = a | 2251799813685248L,
                                  select_if(a, e, b << 1L < -9007199254740991L),
                                  h),
                        d);
          }
          return i64_extend_i32_u(c ^ -1) << 63L | 9218868437227405312L;
        }
        g = select_if(g | 4611686018427387904L, g, d);
        d = f + eqz(d);
        if (eqz(d)) goto B_n;
        f = 0 - d;
        if (f <= 63) {
          g = i64_extend_i32_u(g << i64_extend_i32_u(d & 63) != 0L) |
              g >> i64_extend_i32_u(f);
          goto B_n;
        }
        g = i64_extend_i32_u(g != 0L);
        label B_n:
        e = e | 4611686018427387904L;
        label B_e:
        c = c ^ 1;
        e - g;
        goto B_b;
      }
      if (d == 2047) {
        if (eqz(g)) goto B_a;
        h = (a & 9221120237041090560L) == 9218868437227405312L &
            (a & 2251799813685247L) != 0L;
        if (h |
            (d = (b & 9221120237041090560L) == 9218868437227405312L &
                 (b & 2251799813685247L) != 0L)) {
          f = float_exception_flags;
          f[0] = f[0] | 16;
        }
        e = b | 2251799813685248L;
        return 
          select_if(e,
                    select_if(a = a | 2251799813685248L,
                              select_if(a, e, b << 1L < -9007199254740991L),
                              h),
                    d);
      }
      if (h) {
        e = e | 4611686018427387904L;
        goto B_s;
      }
      f = f - 1;
      if (eqz(f)) goto B_r;
      label B_s:
      if (f <= 63) {
        e = i64_extend_i32_u(e << i64_extend_i32_u(0 - f & 63) != 0L) |
            e >> i64_extend_i32_u(f);
        goto B_r;
      }
      e = i64_extend_i32_u(e != 0L);
      label B_r:
      g = g | 4611686018427387904L;
      label B_c:
      h = d;
      g - e;
      label B_b:
    }
  a = 
    roundAndPackFloat64(
      c,
      h +
      ((d = 
          select_if(31, -1, d = a < 4294967296L) +
          (memory_base + 1152 +
           (select_if(
              (d = select_if((d = i32_wrap_i64(select_if(a, a >> 32L, d))) << 16,
                             d,
                             f = d < 65536)) <<
              8,
              d,
              i = d < 16777216) >>
            22 &
            1020))[0]:int +
          select_if((d = f << 4) | 8, d, i)) ^
       -1),
      a << i64_extend_i32_u(d));
  label B_a:
  return a;
}

export function float64_add(a:long, b:long):long {
  var c:int = i32_wrap_i64(a >> 63L);
  if (c == i32_wrap_i64(b >> 63L)) { return addFloat64Sigs(a, b, c) }
  return subFloat64Sigs(a, b, c);
}

export function ullong_to_double(a:long):double {
  var b:double;
  return b;
}

export function submain():int {
  var c:long;
  var d:int;
  var h:double;
  var a:int = stack_pointer + -64;
  stack_pointer = a;
  var b:int = gettimeofday(a + 48, 0);
  if (b) {
    a[8]:int = b;
    iprintf(memory_base + 1104, a + 32);
  }
  startTimer[0]:double =
    f64_convert_i32_s(b = a[14]:int) * 0.000001 +
    f64_convert_i64_s(c = a[6]:long);
  b = 0;
  loop L_b {
    var e:int = b << 3;
    c = (e + b_input)[0]:long;
    c = {
          var f:long = (a_input + e)[0]:long;
          var g:int = i32_wrap_i64(f >> 63L);
          if (g == i32_wrap_i64(c >> 63L)) {
            addFloat64Sigs(f, c, g);
            goto B_c;
          }
          subFloat64Sigs(f, c, g);
          label B_c:
        }
    d = d + (c != (z_output + e)[0]:long);
    b = b + 1;
    if (b != 46) continue L_b;
  }
  b = gettimeofday(a + 48, 0);
  if (b) {
    a[4]:int = b;
    iprintf(memory_base + 1104, a + 16);
  }
  endTimer[0]:double =
    (h = f64_convert_i32_s(b = a[14]:int) * 0.000001 +
         f64_convert_i64_s(c = a[6]:long));
  a[0]:double = h - startTimer[0]:double;
  small_printf(memory_base + 1139, a);
  stack_pointer = a - -64;
  return d;
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

