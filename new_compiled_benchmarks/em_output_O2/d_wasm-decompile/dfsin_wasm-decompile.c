import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
export import global float_exception_flags:int;
export import global float_rounding_mode:int;
export import global startTimer:int;
export import global test_out:int;
export import global test_in:int;
export import global endTimer:int;
global float_exception_flags_1:int = 1652;
global float_rounding_mode_1:int = 1648;
global startTimer_1:int = 1656;
global test_out_1:int = 288;
global test_in_1:int = 0;
global endTimer_1:int = 1664;

data data(offset: memory_base) =
  "\00\00\00\00\00\00\00\00\c1U\ed\fc\17W\c6?\c1U\ed\fc\17W\d6?Q\00\b2\fd"
  "Q\c1\e0?\c1U\ed\fc\17W\e6?1\ab(\fc\dd\ec\eb?Q\00\b2\fdQ\c1\f0?\09\abO\fd"
  "4\8c\f3?\c1U\ed\fc\17W\f6?y\00\8b\fc\fa!\f9?1\ab(\fc\dd\ec\fb?\e9U\c6\fb"
  "\c0\b7\fe?Q\00\b2\fdQ\c1\00@\ad\d5\80}\c3&\02@\09\abO\fd4\8c\03@e\80\1e"
  "}\a6\f1\04@\c1U\ed\fc\17W\06@\1d+\bc|\89\bc\07@y\00\8b\fc\fa!\09@\d5\d5"
  "Y|l\87\0a@1\ab(\fc\dd\ec\0b@\8d\80\f7{OR\0d@\e9U\c6\fb\c0\b7\0e@\a3\95"
  "\ca=\99\0e\10@Q\00\b2\fdQ\c1\10@\ffj\99\bd\0at\11@\ad\d5\80}\c3&\12@[@"
  "h=|\d9\12@\09\abO\fd4\8c\13@\b7\157\bd\ed>\14@e\80\1e}\a6\f1\14@\13\eb"
  "\05=_\a4\15@\c1U\ed\fc\17W\16@o\c0\d4\bc\d0\09\17@\1d+\bc|\89\bc\17@\cb"
  "\95\a3<Bo\18@\00\00\00\00\00\00\00\00\cd\adZ3\1a:\c6?>\bf\09+\a8\e3\d5"
  "?\91\aa\f9\91\ff\ff\df?\e3B\c2\16\b7\91\e4?\a6\14&go\83\e8?\ed+\0b\c4z"
  "\b6\eb?\ad(~\12\f6\11\ee?\c0\fa\dfj\8b\83\ef?\aa\d7\cb\e1\ff\ff\ef?\89"
  "y\14\b0\8b\83\ef?\b4b\d9\92\f6\11\ee?-\14\c0w{\b6\eb?i\a8N\9dp\83\e8?\e8"
  "\d8r\1d\b8\91\e4?\c8C_\ea\00\00\e0?\c5\90\05N\aa\e3\d5?,U\89!\1d:\c6?\91"
  "KE\fc\df\ae\a6>|\b3\ddD\14:\c6\bf>\8f\8f\e6\a4\e3\d5\bfk\f9LI\fd\ff\df"
  "\bf\d3\a3\b9\1c\b6\91\e4\bf\15\f8\dc\b2n\83\e8\bf2\ae\0atz\b6\eb\bfW!-"
  "\91\f5\11\ee\bf\fcJ\c6\1a\8b\83\ef\bf\8f\dc\e5\c2\ff\ff\ef\bf\ea\e7\a2"
  "^\8b\83\ef\bf'\ae-\11\f7\11\ee\bfJ\cb1,|\b6\eb\bf\81\d7onq\83\e8\bfV]\1b"
  "\cd\b9\91\e4\bf\0d\a3\0c\1d\02\00\e0\bf\f7\cai\0a\ad\e3\d5\bf\ddc\88\c4"
  "#:\c6\bfError return from gettimeofday: %d\00%0.6f\0a\00\00\00\00\00\00"
  "\00\08\00\00\00\07\00\00\00\06\00\00\00\06\00\00\00\05\00\00\00\05\00\00"
  "\00\05\00\00\00\05\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00"
  "\00\04\00\00\00\04\00\00\00\04\00\00\00\04\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00\00\03\00\00"
  "\00\03\00\00\00\03\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00"
  "\00\02\00\00\00\02\00\00\00\02\00\00\00\02\00\00\00\01\00\00\00\01\00\00"
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
  "\00\01\00\00\00\01\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
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
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00";

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

export function shift64ExtraRightJamming(a:long, b:long, c:int, d:long_ptr, e:long_ptr) {
  var f:long = 
    {
      a;
      if (eqz(c)) goto B_a;
      if (c <= 63) {
        b = i64_extend_i32_u(b != 0L) | a << i64_extend_i32_u(0 - c & 63);
        a >> i64_extend_i32_u(c);
        goto B_a;
      }
      if (c == 64) {
        b = i64_extend_i32_u(b != 0L) | a;
        0L;
        goto B_a;
      }
      b = i64_extend_i32_u((a | b) != 0L);
      0L;
      label B_a:
    }
  e[0] = b;
  d[0] = f;
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
         (memory_base + 624 +
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
         (memory_base + 624 + (select_if(d << 8, d, e) >> 22 & 1020))[0]:int),
      c << i64_extend_i32_u(d));
}

export function int32_to_float64(a:int):long {
  var b:int;
  var c:int;
  var d:int;
  if (eqz(a)) { return 0L }
  b = (a ^ (b = a >> 31)) - b;
  return 
    (i64_extend_i32_u(b) <<
     i64_extend_i32_u(
       (b = (memory_base + 624 +
             (select_if((b = select_if(b << 16, b, c = b < 65536)) << 8,
                        b,
                        d = b < 16777216) >>
              22 &
              1020))[0]:int +
            select_if((b = c << 4) | 8, b, d)) +
       21)) +
    (i64_extend_i32_u(a >> 31) << 63L) +
    (i64_extend_i32_u(1053 - b) << 52L);
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
          (memory_base + 624 +
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
         (memory_base + 624 +
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
         (memory_base + 624 +
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
       (memory_base + 624 +
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
         (memory_base + 624 +
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

export function float64_le(a:long, b:long):int {
  var c:int_ptr;
  if (eqz((a & 9218868437227405312L) == 9218868437227405312L &
          (a & 4503599627370495L) != 0L)) {
    if ((b & 9218868437227405312L) != 9218868437227405312L) goto B_a;
    if (eqz(b & 4503599627370495L)) goto B_a;
  }
  c = float_exception_flags;
  c[0] = c[0] | 16;
  return 0;
  label B_a:
  c = i32_wrap_i64(a >> 63L);
  if (c != i32_wrap_i64(b >> 63L)) {
    return eqz((a | b) & 9223372036854775807L) | a < 0L
  }
  return c != (a < b) | a == b;
}

export function float64_ge(a:long, b:long):int {
  var c:int_ptr;
  if (eqz((b & 9218868437227405312L) == 9218868437227405312L &
          (b & 4503599627370495L) != 0L)) {
    if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_a;
    if (eqz(a & 4503599627370495L)) goto B_a;
  }
  c = float_exception_flags;
  c[0] = c[0] | 16;
  return 0;
  label B_a:
  c = i32_wrap_i64(b >> 63L);
  if (c != i32_wrap_i64(a >> 63L)) {
    return eqz((a | b) & 9223372036854775807L) | b < 0L
  }
  return c != (a > b) | a == b;
}

export function float64_neg(a:long):long {
  return a ^ -9223372036854775808L
}

export function float64_abs(a:long):long {
  return a & 9223372036854775807L
}

export function local_sin(a:long):long {
  var e:long;
  var b:int_ptr;
  var f:int;
  var i:int;
  var h:long = float64_mul(a, a) ^ -9223372036854775808L;
  var d:long = 1L;
  var c:long = a;
  loop L_a {
    b = 
      (memory_base + 624 +
       (select_if(
          (b = select_if((b = i32_wrap_i64(e = ((e = d << 1L) | 1L) * e)) << 16,
                         b,
                         f = b < 65536)) <<
          8,
          b,
          i = b < 16777216) >>
        22 &
        1020))[0]:int;
    c = 
      {
        var g:int = i32_wrap_i64(c >> 63L);
        if (g ==
            i32_wrap_i64(
              (a = 
                 float64_div(
                   float64_mul(a, h),
                   ((e & 4294967294L) <<
                    i64_extend_i32_u((b = b + select_if((f = f << 4) | 8, f, i)) + 21)) +
                   (i64_extend_i32_u(1053 - b) << 52L))) >>
              63L)) {
          addFloat64Sigs(c, a, g);
          goto B_b;
        }
        subFloat64Sigs(c, a, g);
        label B_b:
      }
    if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_d;
    if (eqz(a & 4503599627370495L)) goto B_d;
    b = float_exception_flags;
    b[0] = b[0] | 16;
    return c;
    label B_d:
    d = d + 1L;
    if ((a & 9223372036854775807L) > 4532020583610935536L) continue L_a;
  }
  return c;
}

export function ullong_to_double(a:long):double {
  var b:double;
  return b;
}

export function submain():int {
  var c:int;
  var d:int;
  var e:double;
  var a:int = stack_pointer + -64;
  stack_pointer = a;
  var b:int = gettimeofday(a + 48, 0);
  if (b) {
    a[8]:int = b;
    iprintf(memory_base + 576, a + 32);
  }
  startTimer[0]:double =
    f64_convert_i32_s(b = a[14]:int) * 0.000001 +
    f64_convert_i64_s(a[6]:long);
  b = 0;
  loop L_b {
    c = 
      c +
      (((d = b << 3) + test_out)[0]:long != local_sin((test_in + d)[0]:long));
    b = b + 1;
    if (b != 36) continue L_b;
  }
  b = gettimeofday(a + 48, 0);
  if (b) {
    a[4]:int = b;
    iprintf(memory_base + 576, a + 16);
  }
  endTimer[0]:double =
    (e = f64_convert_i32_s(b = a[14]:int) * 0.000001 +
         f64_convert_i64_s(a[6]:long));
  a[0]:double = e - startTimer[0]:double;
  small_printf(memory_base + 611, a);
  stack_pointer = a - -64;
  return c;
}

function legalstub_shift64RightJamming(a:int, b:int, c:int, d:int) {
  shift64RightJamming(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                      c,
                      d)
}

function legalstub_shift64ExtraRightJamming(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  shift64ExtraRightJamming(
    i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
    i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L,
    e,
    f,
    g)
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

function legalstub_normalizeRoundAndPackFloat64(a:int, b:int, c:int, d:int):int {
  var e:long = normalizeRoundAndPackFloat64(
                 a,
                 b,
                 i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L);
  setTempRet0(i32_wrap_i64(e >> 32L));
  return i32_wrap_i64(e);
}

function legalstub_int32_to_float64(a:int):int {
  var b:long = int32_to_float64(a);
  setTempRet0(i32_wrap_i64(b >> 32L));
  return i32_wrap_i64(b);
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

function legalstub_float64_mul(a:int, b:int, c:int, d:int):int {
  var e:long = 
    float64_mul(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
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

function legalstub_float64_le(a:int, b:int, c:int, d:int):int {
  return float64_le(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                    i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L)
}

function legalstub_float64_ge(a:int, b:int, c:int, d:int):int {
  return float64_ge(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L,
                    i64_extend_i32_u(c) | i64_extend_i32_u(d) << 32L)
}

function legalstub_float64_neg(a:int, b:int):int {
  var c:long = 
    float64_neg(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
  setTempRet0(i32_wrap_i64(c >> 32L));
  return i32_wrap_i64(c);
}

function legalstub_float64_abs(a:int, b:int):int {
  var c:long = 
    float64_abs(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
  setTempRet0(i32_wrap_i64(c >> 32L));
  return i32_wrap_i64(c);
}

function legalstub_local_sin(a:int, b:int):int {
  var c:long = 
    local_sin(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L);
  setTempRet0(i32_wrap_i64(c >> 32L));
  return i32_wrap_i64(c);
}

function legalstub_ullong_to_double(a:int, b:int):double {
  return 
    ullong_to_double(i64_extend_i32_u(a) | i64_extend_i32_u(b) << 32L)
}

