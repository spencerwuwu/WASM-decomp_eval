import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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

export function shift64ExtraRightJamming(a:long, b:long, c:int, d:long_ptr, e:long_ptr) {
  if (c) goto B_b;
  b = b;
  a = a;
  goto B_a;
  label B_b:
  if (c > 63) goto B_c;
  b = a << i64_extend_i32_u(0 - c & 63) | i64_extend_i32_u(b != 0L);
  a = a >> i64_extend_i32_u(c);
  goto B_a;
  label B_c:
  if (c != 64) goto B_d;
  b = i64_extend_i32_u(b != 0L) | a;
  a = 0L;
  goto B_a;
  label B_d:
  b = i64_extend_i32_u((b | a) != 0L);
  a = 0L;
  label B_a:
  e[0] = b;
  d[0] = a;
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
         (memory_base + 624 +
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
  if (a) goto B_a;
  return 0L;
  label B_a:
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
          (memory_base + 624 +
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

export function float64_mul(a:long, b:long):long {
  var i:int;
  var j:int_ptr;
  var h:long;
  var k:int;
  var l:int;
  var c:long = b & 4503599627370495L;
  var d:long = a & 4503599627370495L;
  var e:long = b >> 52L;
  var f:int_ptr = i32_wrap_i64(e) & 2047;
  var g:long = b ^ a;
  h = a >> 52L;
  i = i32_wrap_i64(h) & 2047;
  if (i != 2047) goto B_a;
  if (d != 0L) goto B_c;
  if (eqz(c)) goto B_b;
  if (f != 2047) goto B_b;
  label B_c:
  f = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  i = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (i) goto B_e;
  if (eqz(f)) goto B_d;
  label B_e:
  j = float_exception_flags;
  j[0] = j[0] | 16;
  label B_d:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        i),
              f);
  label B_b:
  if (((e & 2047L) | c) != 0L) goto B_f;
  f = float_exception_flags;
  f[0] = f[0] | 16;
  return 9223372036854775807L;
  label B_f:
  return (g & -9223372036854775808L) | 9218868437227405312L;
  label B_a:
  if (f != 2047) goto B_g;
  if (eqz(c)) goto B_h;
  f = (b & 9221120237041090560L) == 9218868437227405312L &
      (b & 2251799813685247L) != 0L;
  i = (a & 9221120237041090560L) == 9218868437227405312L &
      (a & 2251799813685247L) != 0L;
  if (i) goto B_j;
  if (eqz(f)) goto B_i;
  label B_j:
  j = float_exception_flags;
  j[0] = j[0] | 16;
  label B_i:
  d = b | 2251799813685248L;
  return 
    select_if(d,
              select_if(a = a | 2251799813685248L,
                        select_if(a, d, b << 1L < -9007199254740991L),
                        i),
              f);
  label B_h:
  if (((h & 2047L) | d) != 0L) goto B_k;
  f = float_exception_flags;
  f[0] = f[0] | 16;
  return 9223372036854775807L;
  label B_k:
  return (g & -9223372036854775808L) | 9218868437227405312L;
  label B_g:
  if (eqz(i)) goto B_m;
  a = d;
  i = i;
  goto B_l;
  label B_m:
  if (d != 0L) goto B_n;
  return g & -9223372036854775808L;
  label B_n:
  a = 
    d <<
    i64_extend_i32_u(
      (i = 
         (memory_base + 624 +
          (select_if(
             (i = 
                select_if(
                  (i = i32_wrap_i64(select_if(a, d >> 32L, j = d < 4294967296L))) << 16,
                  i,
                  k = i < 65536)) <<
             8,
             i,
             l = i < 16777216) >>
           22 &
           1020))[0]:int +
         (select_if((i = k << 4) | 8, i, l) | j << 5)) +
      -11);
  i = 12 - i;
  label B_l:
  i = i;
  a = a;
  if (eqz(f)) goto B_p;
  f = f;
  b = c;
  goto B_o;
  label B_p:
  if (c != 0L) goto B_q;
  return g & -9223372036854775808L;
  label B_q:
  f = 
    12 -
    (j = 
       (memory_base + 624 +
        (select_if(
           (f = 
              select_if(
                (f = i32_wrap_i64(select_if(b, c >> 32L, j = c < 4294967296L))) << 16,
                f,
                k = f < 65536)) <<
           8,
           f,
           l = f < 16777216) >>
         22 &
         1020))[0]:int +
       (select_if((f = k << 4) | 8, f, l) | j << 5));
  b = c << i64_extend_i32_u(j + -11);
  label B_o:
  return 
    roundAndPackFloat64(
      i32_wrap_i64(g >> 63L),
      f + i +
      select_if(
        -1024,
        -1023,
        f = 
          (a = 
             (b = 
                ((b = (g = (c = (d = (b = b << 11L) | -9223372036854775808L) >> 32L) *
                           ((a = a << 10L) & 4294966272L)) +
                      (b & 4294965248L) * (e = (a = a | 4611686018427387904L) >> 32L)) >>
                 32L) +
                c * e +
                (i64_extend_i32_u(b < g) << 32L) +
                i64_extend_i32_u((a = d * a) < b << 32L) |
                i64_extend_i32_u(a != 0L)) <<
             1L) >
          -1L),
      select_if(a, b, f));
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
         (memory_base + 624 +
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
         (memory_base + 624 +
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

export function float64_le(a:long, b:long):int {
  var c:int_ptr;
  if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_c;
  if ((a & 4503599627370495L) != 0L) goto B_b;
  label B_c:
  if ((b & 9218868437227405312L) != 9218868437227405312L) goto B_a;
  if (eqz(b & 4503599627370495L)) goto B_a;
  label B_b:
  c = float_exception_flags;
  c[0] = c[0] | 16;
  return 0;
  label B_a:
  c = i32_wrap_i64(a >> 63L);
  if (c == i32_wrap_i64(b >> 63L)) goto B_d;
  return a < 0L | eqz((b | a) & 9223372036854775807L);
  label B_d:
  return a == b | c != (a < b);
}

export function float64_ge(a:long, b:long):int {
  var c:int_ptr;
  if ((b & 9218868437227405312L) != 9218868437227405312L) goto B_c;
  if ((b & 4503599627370495L) != 0L) goto B_b;
  label B_c:
  if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_a;
  if (eqz(a & 4503599627370495L)) goto B_a;
  label B_b:
  c = float_exception_flags;
  c[0] = c[0] | 16;
  return 0;
  label B_a:
  c = i32_wrap_i64(b >> 63L);
  if (c == i32_wrap_i64(a >> 63L)) goto B_d;
  return b < 0L | eqz((b | a) & 9223372036854775807L);
  label B_d:
  return b == a | c != (b < a);
}

export function float64_neg(a:long):long {
  return a ^ -9223372036854775808L
}

export function float64_abs(a:long):long {
  return a & 9223372036854775807L
}

export function local_sin(a:long):long {
  var f:long;
  var g:int_ptr;
  var h:int;
  var i:int;
  var j:int;
  var k:long;
  var b:long = float64_mul(a, a) ^ -9223372036854775808L;
  var c:long = 1L;
  var d:long = a;
  var e:long = a;
  loop L_a {
    g = 
      (memory_base + 624 +
       (select_if(
          (g = select_if(
                 (g = i32_wrap_i64(a = ((a = (f = c) << 1L) | 1L) * a)) << 16,
                 g,
                 h = eqz(a & 4294901760L))) <<
          8,
          g,
          i = g < 16777216) >>
        22 &
        1020))[0]:int;
    c = e;
    j = i32_wrap_i64(c >> 63L);
    if (
      j !=
      i32_wrap_i64(
        (a = 
           float64_div(
             float64_mul(d, b),
             ((a & 4294967294L) <<
              i64_extend_i32_u((g = g + select_if((h = h << 4) | 8, h, i)) + 21)) +
             (i64_extend_i32_u(1053 - g) << 52L))) >>
        63L)) goto B_c;
    c = addFloat64Sigs(c, a, j);
    goto B_b;
    label B_c:
    c = subFloat64Sigs(c, a, j);
    label B_b:
    k = c;
    if ((a & 9218868437227405312L) != 9218868437227405312L) goto B_d;
    if (eqz(a & 4503599627370495L)) goto B_d;
    g = float_exception_flags;
    g[0] = g[0] | 16;
    return k;
    label B_d:
    c = f + 1L;
    d = a;
    e = k;
    if ((a & 9223372036854775807L) > 4532020583610935536L) continue L_a;
  }
  return k;
}

export function ullong_to_double(a:long):double {
  var b:double;
  return b;
}

export function submain():int {
  var b:int;
  var g:double;
  var e:int;
  var a:int = stack_pointer - 64;
  stack_pointer = a;
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_a;
  a[8]:int = b;
  iprintf(memory_base + 576, a + 32);
  label B_a:
  b = a[14]:int;
  var c:long = a[6]:long;
  startTimer[0]:double =
    f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
  b = 0;
  var d:int = 0;
  loop L_b {
    e = b +
        ((test_out + (b = (d = d) << 3))[0]:long !=
         local_sin((test_in + b)[0]:long));
    b = e;
    var f:int = d + 1;
    d = f;
    if (f != 36) continue L_b;
  }
  b = gettimeofday(a + 48, 0);
  if (eqz(b)) goto B_c;
  a[4]:int = b;
  iprintf(memory_base + 576, a + 16);
  label B_c:
  b = a[14]:int;
  c = a[6]:long;
  endTimer[0]:double =
    (g = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
  a[0]:double = g - startTimer[0]:double;
  small_printf(memory_base + 611, a);
  stack_pointer = a + 64;
  return e;
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

