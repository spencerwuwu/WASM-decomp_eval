import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global bitoff:int;
export import global startTimer:int;
export import global inData:int;
export import global outData:int;
export import global outLARc:int;
export import global endTimer:int;
global bitoff_1:int = 0;
global startTimer_1:int = 960;
global inData_1:int = 256;
global outData_1:int = 576;
global outLARc_1:int = 896;
global endTimer_1:int = 968;

data data(offset: memory_base) =
  "\08\07\06\06\05\05\05\05\04\04\04\04\04\04\04\04\03\03\03\03\03\03\03\03"
  "\03\03\03\03\03\03\03\03\02\02\02\02\02\02\02\02\02\02\02\02\02\02\02\02"
  "\02\02\02\02\02\02\02\02\02\02\02\02\02\02\02\02\01\01\01\01\01\01\01\01"
  "\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01"
  "\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01\01"
  "\01\01\01\01\01\01\01\01\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00Q\00f*e\07\cd\d7\be\1d"
  "\16t\fbO\e1\8d\fb\b5\92\8b\ef\82<\06\80=\f0\f3\fb\bb\95\a9\8e\1a$\cc\eb"
  "\0eo\c0\db\f9\15\cf!\96?\ff\0c\9cZ\12\1c\89\a0;\8f\fa\9a,j,z\13\bd\1e\91"
  "\f8\a3#\12\84k\9d\b5\c8>F\ab~i\cf\c5\c1\8a\ab\d8\1e\99\06\d1m\1f\0esV<"
  "\ear\b1c0\d9# \a0\c00*TN\ba\b3\ca5O\03'\f4D8\d3R\bc\c8\d6$\96\cf\00\dc"
  "k\d5\09\ff\1b\da\8bW\a8Wu\c0\f6\0d2,\01-\9c\7f#^qa\e6\a9\b0\f5\c7}\e23"
  "\ab\a4\f1~\8a\8a\f3\fd\86\84!\f6iV\0d\05\ee\e1\a8\09\bd\dc5\b8\fb\e7\c6"
  "7V\10\cb\86\7f1A\e7\deC\ce\07)\09Q(\1a&\97\d9\86\d0\0eh\b21\b0\9d\89\a5"
  "~K\cc.#IGc\09\c4\e0\15\c6\1c\e9\d2\1bytj\83#F\a4p\bf\85M|\92\94\f4/-\ea"
  "\a7\a9\e8#\eb\a7;=\17\d0,\1c;\a3\c8\cd\1f\e9a\1d\c5C\cd5\ed\f3l\baI\da"
  "+h\de\1e\b7\09i\0c\e4r\00\b1(\f5\14^\e5\e0:\d7^\d1\0f\c6\fe\e5:}\b4\0f"
  "\dd(7;P\00`*`\07\d0\d7\c0\1d\10t\00P\e0\8d\00\b6\90\8b\f0\82@\06\80=\f0"
  "\f3\00\bc\90\a9\90\1a \cc\f0\0ep\c0\e0\f9\10\cf \96@\ff\10\9c`\12 \89\a0"
  ";\90\fa\a0,p,\80\13\c0\1e\90\f8\a0#\10\84p\9d\b0\c8@F\b0~p\cf\c0\c1\90"
  "\ab\e0\1e\a0\06\d0m \0epV@\eap\b1`0\e0# \a0\c000TP\ba\b0\ca0O\00'\f0D@"
  "\d3P\bc\d0\d6 \96\d0\00\e0k\d0\09\00\1c\e0\8bP\a8Pu\c0\f6\1020\010\9c\80"
  "#`q`\e6\b0\b0\f0\c7\80\e20\ab\a0\f1\80\8a\90\f3\00\87\80!\f0iP\0d\00\ee"
  "\e0\a8\10\bd\e05\c0\fb\e0\c60V\10\cb\80\7f0A\e0\de@\ce\00)\10Q0\1a \97"
  "\e0\86\d0\0ep\b20\b0\a0\89\a0~P\cc0#PG`\09\c0\e0\10\c6 \e9\d0\1b\80tp\83"
  " F\a0p\c0\85P|\90\94\f0/0\ea\a0\a9\f0#\f0\a7@=\10\d00\1c@\a3\d0\cd \e9"
  "`\1d\c0C\d05\f0\f3p\baP\da0h\e0\1e\b0\09p\0c\e0r\00\b10\f5\10^\e0\e0@\d7"
  "`\d1\10\c6\00\e6@}\b0\0f\e0(0; \00!\00\16\00\0d\00\07\00\05\00\03\00\02"
  "\00Error return from gettimeofday: %d\00%0.6f\0a\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00";

import function memset(a:int, b:int, c:int):int;

import function gettimeofday(a:int, b:int):int;

import function iprintf(a:int, b:int):int;

import function memcpy(a:int, b:int, c:int):int;

import function small_printf(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function gsm_add(a:int, b:int):int {
  b = a + b;
  b = select_if(b, 32767, b < 32767);
  return select_if(b, -32768, b > -32768);
}

export function gsm_mult(a:int, b:int):int {
  var c:int;
  return 
    i32_extend16_s(
      select_if(select_if(32767, c = b * a >> 15, b == -32768), c, a == -32768));
}

export function gsm_mult_r(a:int, b:int):int {
  var c:int;
  if (a != -32768) goto B_b;
  c = 32767;
  if (b == -32768) goto B_a;
  label B_b:
  c = b * a + 16384 >> 15;
  label B_a:
  return i32_extend16_s(c);
}

export function gsm_abs(a:int):int {
  return i32_extend16_s(
           select_if(select_if(32767, 0 - a, a == -32768), a, a < 0))
}

export function gsm_norm(a:int):int {
  var b:int;
  if (a <= -1) goto B_c;
  a = a;
  goto B_b;
  label B_c:
  b = 0;
  if (a < -1073741823) goto B_a;
  a = a ^ -1;
  label B_b:
  a = a;
  if (a < 65536) goto B_e;
  if (a < 16777216) goto B_f;
  a = a >> 24;
  b = 65535;
  goto B_d;
  label B_f:
  a = a >> 16 & 255;
  b = 7;
  goto B_d;
  label B_e:
  if (eqz(a & 65280)) goto B_g;
  a = a >> 8 & 255;
  b = 15;
  goto B_d;
  label B_g:
  a = a & 255;
  b = 23;
  label B_d:
  b = b + (bitoff + a)[0]:ubyte;
  label B_a:
  return i32_extend16_s(b);
}

export function gsm_div(a:int, b:int):int {
  var c:int;
  if (a) goto B_b;
  c = 0;
  goto B_a;
  label B_b:
  var d:int = 15;
  var e:int = 0;
  a = a;
  loop L_c {
    var f:int = d + -1;
    d = f;
    var g:int = e << 1 | (c = (a = a << 1) >= b);
    e = g;
    a = a - select_if(b, 0, c);
    c = g;
    if (f) continue L_c;
  }
  label B_a:
  return i32_extend16_s(c);
}

export function Autocorrelation(a:{ a:short, b:short, c:short, d:short, e:short, f:short, g:short, h:short }, b:int) {
  var e:int;
  var f:int;
  var l:int;
  var m:int;
  var n:int;
  var o:int;
  var p:int;
  var q:int;
  var r:int;
  var s:int;
  var t:int;
  var u:int;
  var v:int;
  var y:int;
  var x:int;
  var w:int;
  var g:int;
  var c:int = 0;
  var d:int = 0;
  loop L_a {
    d = 
      i32_extend16_s(
        select_if(select_if(32767, 0 - (d = a[e = d]:ushort), d == 32768),
                  d,
                  i32_extend16_s(d) < 0));
    f = select_if(d, c = i32_extend16_s(c), d > c);
    c = f;
    e = e + 1;
    d = e;
    if (e != 160) continue L_a;
  }
  if (f) goto B_c;
  d = 0;
  goto B_b;
  label B_c:
  d = 262144 -
      (select_if(7, -1, d = f < 256) +
       (bitoff + select_if(f & 255, (f & 65280) >> 8, d))[0]:ubyte <<
       16) >>
      16;
  label B_b:
  g = d;
  d = g + -1;
  if (d > 3) goto B_d;
  e = 16384 >> d;
  d = 0;
  loop L_e {
    c = a + ((d = d) << 1);
    c[0]:short = e * c[0]:short + 16384 >> 15;
    c = d + 1;
    d = c;
    if (c != 160) continue L_e;
  }
  label B_d:
  d = a.a;
  b[0]:long@4 = 0L;
  var h:int_ptr = b + 32;
  h[0] = 0;
  var i:int = b + 24;
  i[0]:long@4 = 0L;
  var j:int = b + 16;
  j[0]:long@4 = 0L;
  var k:int = b + 8;
  k[0]:long@4 = 0L;
  b[0]:int = (e = d * d);
  b[0]:int = (f = (c = a.b) * c + e);
  b[1]:int = (l = b[1]:int + c * d);
  k[0]:int = (m = d * (e = a.c));
  b[1]:int = (l = e * c + l);
  b[0]:int = (n = e * e + f);
  k[0]:int = (m = c * (f = a.d) + m);
  b[1]:int = (o = f * e + l);
  b[0]:int = (n = f * f + n);
  b[3]:int = (p = b[3]:int + f * d);
  b[3]:int = (p = c * (l = a.e) + p);
  k[0]:int = (q = l * e + m);
  b[1]:int = (o = l * f + o);
  b[0]:int = (n = l * l + n);
  j[0]:int = (r = j[0]:int + l * d);
  j[0]:int = (r = c * (m = a.f) + r);
  b[3]:int = (p = m * e + p);
  k[0]:int = (q = m * f + q);
  b[1]:int = (o = m * l + o);
  b[0]:int = (s = m * m + n);
  b[5]:int = (t = b[5]:int + m * d);
  b[5]:int = (t = c * (n = a.g) + t);
  j[0]:int = (r = n * e + r);
  b[3]:int = (p = n * f + p);
  k[0]:int = (q = n * l + q);
  b[1]:int = (u = n * m + o);
  b[0]:int = (s = n * n + s);
  i[0]:int = (v = i[0]:int + n * d);
  i[0]:int = (c = c * (o = a.h) + v);
  b[5]:int = (i = o * e + t);
  j[0]:int = (r = o * f + r);
  b[3]:int = (j = o * l + p);
  k[0]:int = (p = o * m + q);
  b[1]:int = (m = o * n + u);
  b[0]:int = (l = o * o + s);
  b[7]:int = (d = b[7]:int + o * d);
  e = a + 14;
  f = 8;
  l = l;
  m = m;
  n = p;
  o = j;
  k = r;
  j = i;
  i = c;
  p = d;
  h = h[0];
  loop L_f {
    d = e;
    e = d + 2;
    q = f + 1;
    f = q;
    c = d[1]:short;
    r = c * c + l;
    l = r;
    s = d[0]:short * c + m;
    m = s;
    t = (d + -2)[0]:short * c + n;
    n = t;
    u = (d + -4)[0]:short * c + o;
    o = u;
    v = (d + -6)[0]:short * c + k;
    k = v;
    w = (d + -8)[0]:short * c + j;
    j = w;
    x = (d + -10)[0]:short * c + i;
    i = x;
    y = (d + -12)[0]:short * c + p;
    p = y;
    d = (d + -14)[0]:short * c + h;
    h = d;
    if (q != 160) continue L_f;
  }
  b[8]:int = d;
  b[7]:int = y;
  b[6]:int = x;
  b[5]:int = w;
  b[4]:int = v;
  b[3]:int = u;
  b[2]:int = t;
  b[1]:int = s;
  b[0]:int = r;
  c = 8;
  loop L_g {
    c = b + ((d = c) << 2);
    c[0]:int = c[0]:int << 1;
    c = d + -1;
    if (d) continue L_g;
  }
  if (g < 1) goto B_h;
  d = a;
  c = 159;
  loop L_i {
    d = d;
    d[0]:short = d[0]:ushort << g;
    d = d + 2;
    b = c;
    c = b + -1;
    if (b) continue L_i;
  }
  label B_h:
}

export function Reflection_coefficients(a:int_ptr, b:int) {
  var d:int;
  var e:int;
  var g:long;
  var h:long;
  var i:int;
  var m:int;
  var o:int;
  var p:int;
  var c:int = stack_pointer - 96;
  stack_pointer = c;
  d = a[0];
  if (d) goto B_b;
  b[0]:long@2 = 0L;
  (b + 8)[0]:long@2 = 0L;
  goto B_a;
  label B_b:
  if (d <= -1) goto B_e;
  d = d;
  goto B_d;
  label B_e:
  e = 0;
  if (d < -1073741823) goto B_c;
  d = d ^ -1;
  label B_d:
  d = d;
  if (d < 65536) goto B_g;
  if (d < 16777216) goto B_h;
  d = d >> 24;
  e = 65535;
  goto B_f;
  label B_h:
  d = d >> 16 & 255;
  e = 7;
  goto B_f;
  label B_g:
  if (eqz(d & 65280)) goto B_i;
  d = d >> 8 & 255;
  e = 15;
  goto B_f;
  label B_i:
  d = d & 255;
  e = 23;
  label B_f:
  e = e + (bitoff + d)[0]:ubyte & 65535;
  label B_c:
  var f:int = e;
  d = 0;
  loop L_j {
    (c + 64)[d = d]:short = (a[d]:int << f) >> 16;
    e = d + 1;
    d = e;
    if (e != 9) continue L_j;
  }
  (c + 32 + 16)[0]:short = (c + 64 + 16)[0]:ushort;
  c[4]:long = (g = c[8]:long);
  c[4]:long@2 = (h = c[9]:long);
  c[1]:long@2 = c[33]:long@2;
  c[5]:long = h;
  e = 1;
  i = i32_extend16_s(i32_wrap_i64(g));
  if (
    i >=
    (d = 
       i32_extend16_s(
         select_if(select_if(32767, 0 - (d = c[17]:ushort), a = d == 32768),
                   d,
                   (f = i32_extend16_s(d)) < 0)))) goto B_l;
  d = 16;
  e = e;
  a = b;
  goto B_k;
  label B_l:
  e = d;
  a = a;
  f = f;
  var j:int = 7;
  i = i;
  b = b;
  var k:int = 1;
  d = 7;
  var l:int = 0;
  loop L_m {
    m = l;
    var n:int = d;
    o = k;
    p = b;
    l = j;
    k = f;
    var q:int = a;
    d = i32_extend16_s(i);
    i = 0;
    f = e;
    if (eqz(f & 65535)) goto B_n;
    e = 15;
    a = 0;
    f = i32_extend16_s(f);
    loop L_o {
      j = e + -1;
      e = j;
      b = a << 1 | (i = (f = f << 1) >= d);
      a = b;
      f = f - select_if(d, 0, i);
      i = b;
      if (j) continue L_o;
    }
    label B_n:
    p[0]:short = select_if(0 - (e = i), e, (a = i32_extend16_s(k)) > 0);
    if (o == 8) goto B_a;
    c[16]:short =
      (q = 
         select_if(
           d = 
             select_if(
               d = 
                 d +
                 i32_extend16_s(
                   select_if(
                     select_if(32767,
                               a = (f = i32_extend16_s(e = p[0]:ushort)) * a + 16384 >> 15,
                               j = e == 32768),
                     a,
                     q & 1)),
               32767,
               d < 32767),
           -32768,
           d > -32768));
    if (o > 7) goto B_p;
    e = 1;
    loop L_q {
      (c + 32 + (a = (d = e) << 1))[0]:short =
        select_if(
          k = 
            select_if(
              k = 
                (e = (c + 32)[i = d + 1]:short) +
                i32_extend16_s(
                  select_if(select_if(32767,
                                      k = (a = (b = c + a)[0]:short) * f + 16384 >> 15,
                                      (a & 65535) == 32768),
                            k,
                            j)),
              32767,
              k < 32767),
          -32768,
          k > -32768);
      b[0]:short =
        select_if(
          e = 
            select_if(
              e = 
                a +
                i32_extend16_s(
                  select_if(
                    select_if(32767, k = e * f + 16384 >> 15, (e & 65535) == 32768),
                    k,
                    j)),
              32767,
              e < 32767),
          -32768,
          e > -32768);
      e = i;
      if (d != l) continue L_q;
    }
    label B_p:
    var r:int = 
      i32_extend16_s(
        select_if(select_if(32767, 0 - (d = c[17]:ushort), a = d == 32768),
                  d,
                  (f = i32_extend16_s(d)) < 0));
    e = r;
    a = a;
    f = f;
    d = n + -1;
    j = select_if(d, 1, d > 1);
    i = q;
    p = p + 2;
    b = p;
    k = o + 1;
    d = d;
    m = m + 1;
    l = m;
    if (i32_extend16_s(q) >= r) continue L_m;
  }
  d = 16 - (m << 1);
  e = o < 8;
  a = p;
  label B_k:
  a = a;
  d = d;
  if (eqz(e)) goto B_a;
  memset(a, 0, d);
  label B_a:
  stack_pointer = c + 96;
}

export function Transformation_to_Log_Area_Ratios(a:int) {
  var d:int;
  var b:int = 1;
  a = a;
  loop L_a {
    var c:int = b;
    b = 
      i32_extend16_s(
        select_if(select_if(32767, 0 - (b = (a = a)[0]:ushort), b == 32768),
                  b,
                  d = i32_extend16_s(b) < 0));
    if (b > 22117) goto B_c;
    b = b >> 1;
    goto B_b;
    label B_c:
    if (b > 31129) goto B_d;
    b = b + -11059;
    goto B_b;
    label B_d:
    b = (b << 2) + 26624;
    label B_b:
    a[0]:short = select_if(0 - (b = b), b, d);
    c = c + 1;
    b = c;
    a = a + 2;
    if (c != 9) continue L_a;
  }
}

export function Quantization_and_coding(a:{ a:short, b:short, c:short, d:short, e:short, f:short, g:short, h:short }) {
  var b:int;
  a.e =
    select_if(
      15,
      select_if(
        0,
        ((b = select_if(
                b = select_if(b = (a.e * 13964 >> 15) + 350, 32767, b < 32767),
                -32768,
                b > -32768)) >>
         9) +
        8,
        b < -4096),
      b > 4095);
  a.a =
    select_if(
      63,
      select_if(
        0,
        ((b = 
            select_if(
              b = 
                select_if(b = i32_extend16_s(a.a * 20480 >> 15) + 256, 32767, b < 32767),
              -32768,
              b > -32768)) >>
         9) +
        32,
        b < -16384),
      b > 16383);
  a.b =
    select_if(
      63,
      select_if(
        0,
        ((b = 
            select_if(
              b = 
                select_if(b = i32_extend16_s(a.b * 20480 >> 15) + 256, 32767, b < 32767),
              -32768,
              b > -32768)) >>
         9) +
        32,
        b < -16384),
      b > 16383);
  a.c =
    select_if(
      31,
      select_if(
        0,
        ((b = 
            select_if(
              b = 
                select_if(b = i32_extend16_s(a.c * 20480 >> 15) + 2304, 32767, b < 32767),
              -32768,
              b > -32768)) >>
         9) +
        16,
        b < -8192),
      b > 8191);
  a.f =
    select_if(
      15,
      select_if(
        0,
        (i32_extend16_s(
           (b = 
              select_if(
                b = select_if(b = (a.f * 15360 >> 15) + -1792, 32767, b < 32767),
                -32768,
                b > -32768)) +
           256) >>
         9) +
        8,
        b < -4352),
      b > 3839);
  a.g =
    select_if(
      7,
      select_if(
        0,
        (i32_extend16_s(
           (b = select_if(
                  b = select_if(b = (a.g * 8534 >> 15) + -341, 32767, b < 32767),
                  -32768,
                  b > -32768)) +
           256) >>
         9) +
        4,
        b < -2304),
      b > 1791);
  a.h =
    select_if(
      7,
      select_if(
        0,
        (i32_extend16_s(
           (b = 
              select_if(
                b = select_if(b = (a.h * 9036 >> 15) + -1144, 32767, b < 32767),
                -32768,
                b > -32768)) +
           256) >>
         9) +
        4,
        b < -2304),
      b > 1791);
  a.d =
    select_if(
      31,
      select_if(
        0,
        (i32_extend16_s(
           (b = select_if(
                  b = select_if(b = i32_extend16_s(a.d * 20480 >> 15) + -2560,
                                32767,
                                b < 32767),
                  -32768,
                  b > -32768)) +
           256) >>
         9) +
        16,
        b < -8448),
      b > 7935);
}

export function Gsm_LPC_Analysis(a:int, b:int) {
  var f:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  Autocorrelation(a, c);
  Reflection_coefficients(c, b);
  a = 1;
  var d:int = b;
  loop L_a {
    var e:int = a;
    a = 
      i32_extend16_s(
        select_if(select_if(32767, 0 - (a = (d = d)[0]:ushort), a == 32768),
                  a,
                  f = i32_extend16_s(a) < 0));
    if (a > 22117) goto B_c;
    a = a >> 1;
    goto B_b;
    label B_c:
    if (a > 31129) goto B_d;
    a = a + -11059;
    goto B_b;
    label B_d:
    a = (a << 2) + 26624;
    label B_b:
    d[0]:short = select_if(0 - (a = a), a, f);
    e = e + 1;
    a = e;
    d = d + 2;
    if (e != 9) continue L_a;
  }
  Quantization_and_coding(b);
  stack_pointer = c + 48;
}

export function submain():int {
  var b:int;
  var f:int;
  var e:int;
  var g:double;
  var a:int = stack_pointer - 432;
  stack_pointer = a;
  b = gettimeofday(a + 64, 0);
  if (eqz(b)) goto B_a;
  a[8]:int = b;
  iprintf(memory_base + 912, a + 32);
  label B_a:
  b = a[18]:int;
  var c:long = a[8]:long;
  startTimer[0]:double =
    f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c);
  memcpy(a + 64, inData, 320);
  Autocorrelation(a + 64, a + 384);
  Reflection_coefficients(a + 384, a + 48);
  b = 1;
  var d:int = a + 48;
  loop L_b {
    e = b;
    b = 
      i32_extend16_s(
        select_if(select_if(32767, 0 - (b = (d = d)[0]:ushort), b == 32768),
                  b,
                  f = i32_extend16_s(b) < 0));
    if (b > 22117) goto B_d;
    b = b >> 1;
    goto B_c;
    label B_d:
    if (b > 31129) goto B_e;
    b = b + -11059;
    goto B_c;
    label B_e:
    b = (b << 2) + 26624;
    label B_c:
    d[0]:short = select_if(0 - (b = b), b, f);
    e = e + 1;
    b = e;
    d = d + 2;
    if (e != 9) continue L_b;
  }
  Quantization_and_coding(a + 48);
  b = 0;
  d = 0;
  loop L_f {
    e = outData;
    f = 
      b + ((a + 64 + (b = (d = d) << 1))[0]:ushort != (e + b)[0]:ushort);
    b = f;
    e = d + 1;
    d = e;
    if (e != 160) continue L_f;
  }
  b = f;
  d = 0;
  loop L_g {
    e = outLARc;
    f = 
      b + ((a + 48 + (b = (d = d) << 1))[0]:ushort != (e + b)[0]:ushort);
    b = f;
    e = d + 1;
    d = e;
    if (e != 8) continue L_g;
  }
  b = gettimeofday(a + 384, 0);
  if (eqz(b)) goto B_h;
  a[4]:int = b;
  iprintf(memory_base + 912, a + 16);
  label B_h:
  b = a[98]:int;
  c = a[48]:long;
  endTimer[0]:double =
    (g = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(c));
  a[0]:double = g - startTimer[0]:double;
  small_printf(memory_base + 947, a);
  stack_pointer = a + 432;
  return f;
}

