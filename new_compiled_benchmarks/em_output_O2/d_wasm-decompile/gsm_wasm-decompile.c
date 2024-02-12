import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
export import global bitoff:int;
export import global startTimer:int;
export import global inData:int;
export import global outData:int;
export import global endTimer:int;
global bitoff_1:int = 0;
global startTimer_1:int = 960;
global inData_1:int = 256;
global outData_1:int = 576;
global endTimer_1:int = 968;
export global outLARc:int = 896;

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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function gsm_add(a:int, b:int):int {
  return select_if(-32768,
                   b = select_if(32767, b = a + b, b >= 32767),
                   b <= -32768)
}

export function gsm_mult(a:int, b:int):int {
  var c:int;
  return 
    i32_extend16_s(
      select_if(select_if(32767, c = a * b >> 15, b == -32768), c, a == -32768));
}

export function gsm_mult_r(a:int, b:int):int {
  return i32_extend16_s({
                          if (a == -32768) {
                            32767;
                            if (b == -32768) goto B_a;
                          }
                          a * b + 16384 >> 15;
                          label B_a:
                        })
}

export function gsm_abs(a:int):int {
  return i32_extend16_s(
           select_if(select_if(32767, 0 - a, a == -32768), a, a < 0))
}

export function gsm_norm(a:int):int {
  var b:int;
  b = {
        a = {
              if (a < 0) {
                0;
                if (a < -1073741823) goto B_a;
                a = a ^ -1;
              }
              if (a >= 65536) {
                if (a >= 16777216) {
                  b = 65535;
                  a >> 24;
                  goto B_b;
                }
                b = 7;
                a >> 16;
                goto B_b;
              }
              if (a & 65280) {
                b = 15;
                a >> 8;
                goto B_b;
              }
              b = 23;
              a & 255;
              label B_b:
            }
        (a + bitoff)[0]:ubyte + b;
        label B_a:
      }
  return i32_extend16_s(b);
}

export function gsm_div(a:int, b:int):int {
  var c:int;
  if (eqz(a)) { return 0 }
  a = a << 1;
  return 
    i32_extend16_s(
      ((((((((((((((a >= b) << 3 |
                   (c = (a = a - select_if(b, 0, a >= b) << 1) >= b) << 2) |
                  ((a = a - select_if(b, 0, c) << 1) >= b) << 1) |
                 (c = (a = a - select_if(b, 0, a >= b) << 1) >= b)) <<
                2 |
                ((a = a - select_if(b, 0, c) << 1) >= b) << 1) |
               (c = (a = a - select_if(b, 0, a >= b) << 1) >= b)) <<
              2 |
              ((a = a - select_if(b, 0, c) << 1) >= b) << 1) |
             (c = (a = a - select_if(b, 0, a >= b) << 1) >= b)) <<
            2 |
            ((a = a - select_if(b, 0, c) << 1) >= b) << 1) |
           (c = (a = a - select_if(b, 0, a >= b) << 1) >= b)) <<
          2 |
          ((a = a - select_if(b, 0, c) << 1) >= b) << 1) |
         (c = (a = a - select_if(b, 0, a >= b) << 1) >= b)) <<
        2 |
        ((a = a - select_if(b, 0, c) << 1) >= b) << 1) |
       (c = (a = a - select_if(b, 0, a >= b) << 1) >= b)) <<
      1 |
      a - select_if(b, 0, c) << 1 >= b);
}

export function Autocorrelation(a:int, b:int) {
  var d:{ a:short, b:short }
  var o:int;
  var c:int;
  var e:int;
  var g:int;
  var n:int;
  var i:int;
  var j:int;
  var k:int;
  var l:int;
  var m:int;
  var h:short_ptr;
  var u:int;
  loop L_a {
    g = 
      i32_extend16_s(
        select_if(select_if(32767,
                            0 - (c = (a + ((o = d << 1) | 2))[0]:ushort),
                            c == 32768),
                  c,
                  i32_extend16_s(c) < 0));
    e = 
      select_if(
        g,
        c = 
          select_if(
            c = 
              i32_extend16_s(
                select_if(select_if(32767, 0 - (c = (a + o)[0]:ushort), c == 32768),
                          c,
                          i32_extend16_s(c) < 0)),
            e = i32_extend16_s(e),
            c > e),
        c < g);
    d = d + 2;
    if (d != 160) continue L_a;
  }
  o = 0;
  if (eqz(e)) {
    e = 0;
    goto B_b;
  }
  g = 0;
  e = select_if(-3, 5, c = e < 256) -
      (bitoff + select_if(d = e & 65535, d >> 8, c))[0]:ubyte;
  u = e > 0;
  c = e - 1;
  if (c > 3) goto B_b;
  c = 16384 >> c;
  loop L_d {
    h = a + (d = g << 1);
    h[0] = c * h[0] + 16384 >> 15;
    h = a + (d | 2);
    h[0] = c * h[0] + 16384 >> 15;
    h = a + (d | 4);
    h[0] = c * h[0] + 16384 >> 15;
    d = a + (d | 6);
    d.a = c * d.a + 16384 >> 15;
    g = g + 4;
    if (g != 160) continue L_d;
  }
  label B_b:
  var f:int = a[0]:short;
  b[8]:int = 0;
  b[6]:long@4 = 0L;
  b[4]:long@4 = 0L;
  var v:int = 8;
  b[2]:long@4 = 0L;
  b[0]:long@4 = 0L;
  c = a[7]:short;
  g = c * (n = a[1]:short) + f * (i = a[6]:short);
  h = i * n + f * (j = a[5]:short) + c * (k = a[2]:short);
  var p:int = 
    j * n + f * (l = a[4]:short) + i * k + c * (m = a[3]:short);
  var q:int = l * n + f * m + j * k + i * m + c * l;
  var r:int = m * n + f * k + k * l + j * m + i * l + c * j;
  var s:int = k * m + (f + k) * n + l * m + j * l + i * j + c * i;
  d = a + 14;
  var t:int = b[7]:int + c * f;
  f = n * n + f * f + k * k + m * m + l * l + j * j + i * i + c * c;
  loop L_e {
    s = i32_extend16_s(c) * (c = d.b) + s;
    f = c * c + f;
    o = (d - 14)[0]:short * c + o;
    t = (d - 12)[0]:short * c + t;
    g = (d - 10)[0]:short * c + g;
    h = (d - 8)[0]:short * c + h;
    p = (d - 6)[0]:short * c + p;
    q = (d - 4)[0]:short * c + q;
    r = (d - 2)[0]:short * c + r;
    d = d + 2;
    v = v + 1;
    if (v != 160) continue L_e;
  }
  b[7]:int = t << 1;
  b[8]:int = o << 1;
  b[6]:int = g << 1;
  b[5]:int = h << 1;
  b[4]:int = p << 1;
  b[3]:int = q << 1;
  b[2]:int = r << 1;
  b[1]:int = s << 1;
  b[0]:int = f << 1;
  if (u) {
    c = 159;
    loop L_g {
      a[0]:short = a[0]:ushort << e;
      a[1]:short = a[1]:ushort << e;
      a[2]:short = a[2]:ushort << e;
      a[3]:short = a[3]:ushort << e;
      a[4]:short = a[4]:ushort << e;
      a = a + 10;
      d = c != 4;
      c = c - 5;
      if (d) continue L_g;
    }
  }
}

export function Reflection_coefficients(a:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int }, b:int) {
  var c:int;
  var e:int;
  var m:int;
  var n:int;
  var o:int;
  var d:int = stack_pointer + -64;
  stack_pointer = d;
  var h:int = a.a;
  if (eqz(h)) {
    b[0]:long@2 = 0L;
    b[4]:long@2 = 0L;
    goto B_a;
  }
  var f:int = {
                c = {
                      c = h;
                      if (c < 0) {
                        0;
                        if (h < -1073741823) goto B_c;
                        c = h ^ -1;
                      }
                      if (c >= 65536) {
                        if (c >= 16777216) {
                          e = 65535;
                          c >> 24;
                          goto B_d;
                        }
                        e = 7;
                        c >> 16;
                        goto B_d;
                      }
                      if (c & 65280) {
                        e = 15;
                        c >> 8;
                        goto B_d;
                      }
                      e = 23;
                      c & 255;
                      label B_d:
                    }
                (c + bitoff)[0]:ubyte + e & 65535;
                label B_c:
              }
  var p:int = 16;
  c = a.i;
  e = a.b;
  var i:int = a.c;
  var j:short_ptr = a.d;
  var g:int = a.e;
  var l:int = a.f;
  var k:int = a.g;
  d[7]:short = (m = (a.h << f) >> 16);
  d[6]:short = (k = (k << f) >> 16);
  d[5]:short = (l = (l << f) >> 16);
  d[4]:short = (g = (g << f) >> 16);
  d[3]:short = (j = (j << f) >> 16);
  d[2]:short = (i = (i << f) >> 16);
  d[1]:short = (a = (n = e << f) >> 16);
  d[24]:short = (c << f) >> 16;
  d[23]:short = m;
  d[22]:short = k;
  d[21]:short = l;
  d[20]:short = g;
  d[19]:short = j;
  d[18]:short = i;
  d[17]:short = a;
  e = 1;
  a = 
    i32_extend16_s(
      select_if(select_if(32767, 0 - a, i = a == 32768), a, (c = n >> 16) < 0));
  if (a <= (k = (h << f) >> 16)) {
    l = 7;
    m = 7;
    loop L_j {
      b[0]:short =
        (c = 
           select_if(0 - (a = gsm_div(i32_extend16_s(a), j = i32_extend16_s(k))),
                     a,
                     (h = i32_extend16_s(c)) > 0));
      n = e;
      if (n == 8) goto B_a;
      a = 1;
      d[16]:short =
        (k = 
           select_if(
             -32768,
             c = 
               select_if(
                 32767,
                 c = 
                   j +
                   i32_extend16_s(
                     select_if(select_if(32767,
                                         e = (f = i32_extend16_s(c)) * h + 16384 >> 15,
                                         h = (c & 65535) == 32768),
                               e,
                               i & 1)),
                 c >= 32767),
             c <= -32768));
      if (n <= 7) {
        loop L_l {
          e = a << 1;
          (e + d + 32)[0]:short =
            select_if(
              -32768,
              g = 
                select_if(
                  32767,
                  g = (c = (d + 32)[i = a + 1]:short) +
                      i32_extend16_s(
                        select_if(select_if(32767,
                                            g = (e = (j = d + e)[0]) * f + 16384 >> 15,
                                            (e & 65535) == 32768),
                                  g,
                                  h)),
                  g >= 32767),
              g <= -32768);
          j[0] =
            select_if(
              -32768,
              c = 
                select_if(
                  32767,
                  c = 
                    e +
                    i32_extend16_s(
                      select_if(
                        select_if(32767, g = c * f + 16384 >> 15, (c & 65535) == 32768),
                        g,
                        h)),
                  c >= 32767),
              c <= -32768);
          c = a != l;
          a = i;
          if (c) continue L_l;
        }
      }
      l = select_if(1, m = m - 1, m <= 1);
      o = o + 1;
      b = b + 2;
      e = n + 1;
      a = 
        i32_extend16_s(
          select_if(select_if(32767, 0 - (a = d[17]:ushort), i = a == 32768),
                    a,
                    (c = i32_extend16_s(a)) < 0));
      if (a <= i32_extend16_s(k)) continue L_j;
    }
    p = 16 - (o << 1);
    e = n < 8;
  }
  if (eqz(e)) goto B_a;
  memset(b, 0, p);
  label B_a:
  stack_pointer = d - -64;
}

export function Transformation_to_Log_Area_Ratios(a:int) {
  var b:int;
  var c:int;
  var d:int;
  a[0]:short =
    select_if(
      0 -
      (b = 
         {
           if ((d = 
                  i32_extend16_s(
                    b = select_if(select_if(32767, 0 - (b = a[0]:ushort), b == 32768),
                                  b,
                                  (c = i32_extend16_s(b)) < 0))) <=
               22117) {
             d >> 1;
             goto B_a;
           }
           b - 11059;
           if ((b & 65535) <= 31129) goto B_a;
           (b << 2) + 26624;
           label B_a:
         }),
      b,
      c < 0);
  a[1]:short =
    select_if(
      0 -
      (c = 
         {
           if ((d = 
                  i32_extend16_s(
                    c = select_if(
                          select_if(32767, 0 - (b = a[1]:short), (b & 65535) == 32768),
                          b,
                          b < 0))) >=
               22118) {
             (c << 2) + 26624;
             if ((c & 65535) >= 31130) goto B_c;
             c - 11059;
             goto B_c;
           }
           d >> 1;
           label B_c:
         }),
      c,
      b < 0);
  a[2]:short =
    select_if(
      0 -
      (c = 
         {
           if ((d = 
                  i32_extend16_s(
                    c = select_if(
                          select_if(32767, 0 - (b = a[2]:short), (b & 65535) == 32768),
                          b,
                          b < 0))) >=
               22118) {
             (c << 2) + 26624;
             if ((c & 65535) >= 31130) goto B_e;
             c - 11059;
             goto B_e;
           }
           d >> 1;
           label B_e:
         }),
      c,
      b < 0);
  a[3]:short =
    select_if(
      0 -
      (c = 
         {
           if ((d = 
                  i32_extend16_s(
                    c = select_if(
                          select_if(32767, 0 - (b = a[3]:short), (b & 65535) == 32768),
                          b,
                          b < 0))) >=
               22118) {
             (c << 2) + 26624;
             if ((c & 65535) >= 31130) goto B_g;
             c - 11059;
             goto B_g;
           }
           d >> 1;
           label B_g:
         }),
      c,
      b < 0);
  a[4]:short =
    select_if(
      0 -
      (c = 
         {
           if ((d = 
                  i32_extend16_s(
                    c = select_if(
                          select_if(32767, 0 - (b = a[4]:short), (b & 65535) == 32768),
                          b,
                          b < 0))) >=
               22118) {
             (c << 2) + 26624;
             if ((c & 65535) >= 31130) goto B_i;
             c - 11059;
             goto B_i;
           }
           d >> 1;
           label B_i:
         }),
      c,
      b < 0);
  a[5]:short =
    select_if(
      0 -
      (c = 
         {
           if ((d = 
                  i32_extend16_s(
                    c = select_if(
                          select_if(32767, 0 - (b = a[5]:short), (b & 65535) == 32768),
                          b,
                          b < 0))) >=
               22118) {
             (c << 2) + 26624;
             if ((c & 65535) >= 31130) goto B_k;
             c - 11059;
             goto B_k;
           }
           d >> 1;
           label B_k:
         }),
      c,
      b < 0);
  a[6]:short =
    select_if(
      0 -
      (c = 
         {
           if ((d = 
                  i32_extend16_s(
                    c = select_if(
                          select_if(32767, 0 - (b = a[6]:short), (b & 65535) == 32768),
                          b,
                          b < 0))) >=
               22118) {
             (c << 2) + 26624;
             if ((c & 65535) >= 31130) goto B_m;
             c - 11059;
             goto B_m;
           }
           d >> 1;
           label B_m:
         }),
      c,
      b < 0);
  a[7]:short =
    select_if(
      0 -
      (c = 
         {
           if ((d = 
                  i32_extend16_s(
                    c = select_if(
                          select_if(32767, 0 - (b = a[7]:short), (b & 65535) == 32768),
                          b,
                          b < 0))) >=
               22118) {
             (c << 2) + 26624;
             if ((c & 65535) >= 31130) goto B_o;
             c - 11059;
             goto B_o;
           }
           d >> 1;
           label B_o:
         }),
      c,
      b < 0);
}

export function Quantization_and_coding(a:{ a:short, b:short, c:short, d:short, e:short, f:short, g:short, h:short }) {
  var b:int;
  a.e =
    select_if(
      15,
      select_if(
        ((b = 
            select_if(
              -32768,
              b = select_if(32767, b = (a.e * 13964 >> 15) + 350, b >= 32767),
              b <= -32768)) >>
         9) +
        8,
        0,
        b >= -4096),
      b > 4095);
  a.a =
    select_if(
      63,
      select_if(
        ((b = 
            select_if(
              -32768,
              b = 
                select_if(32767, b = i32_extend16_s(a.a * 20480 >> 15) + 256, b >= 32767),
              b <= -32768)) >>
         9) +
        32,
        0,
        b >= -16384),
      b > 16383);
  a.b =
    select_if(
      63,
      select_if(
        ((b = 
            select_if(
              -32768,
              b = 
                select_if(32767, b = i32_extend16_s(a.b * 20480 >> 15) + 256, b >= 32767),
              b <= -32768)) >>
         9) +
        32,
        0,
        b >= -16384),
      b > 16383);
  a.c =
    select_if(
      31,
      select_if(
        ((b = 
            select_if(-32768,
                      b = select_if(32767,
                                    b = i32_extend16_s(a.c * 20480 >> 15) + 2304,
                                    b >= 32767),
                      b <= -32768)) >>
         9) +
        16,
        0,
        b >= -8192),
      b > 8191);
  a.f =
    select_if(
      15,
      select_if(
        (i32_extend16_s(
           (b = 
              select_if(
                -32768,
                b = select_if(32767, b = (a.f * 15360 >> 15) - 1792, b >= 32767),
                b <= -32768)) +
           256) >>
         9) +
        8,
        0,
        b >= -4352),
      b > 3839);
  a.g =
    select_if(
      7,
      select_if(
        (i32_extend16_s(
           (b = select_if(
                  -32768,
                  b = select_if(32767, b = (a.g * 8534 >> 15) - 341, b >= 32767),
                  b <= -32768)) +
           256) >>
         9) +
        4,
        0,
        b >= -2304),
      b > 1791);
  a.h =
    select_if(
      7,
      select_if(
        (i32_extend16_s(
           (b = 
              select_if(
                -32768,
                b = select_if(32767, b = (a.h * 9036 >> 15) - 1144, b >= 32767),
                b <= -32768)) +
           256) >>
         9) +
        4,
        0,
        b >= -2304),
      b > 1791);
  a.d =
    select_if(
      31,
      select_if(
        (i32_extend16_s(
           (b = 
              select_if(-32768,
                        b = select_if(32767,
                                      b = i32_extend16_s(a.d * 20480 >> 15) - 2560,
                                      b >= 32767),
                        b <= -32768)) +
           256) >>
         9) +
        16,
        0,
        b >= -8448),
      b > 7935);
}

export function Gsm_LPC_Analysis(a:int, b:int) {
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  Autocorrelation(a, c);
  Reflection_coefficients(c, b);
  Transformation_to_Log_Area_Ratios(b);
  Quantization_and_coding(b);
  stack_pointer = c + 48;
}

export function submain():int {
  var d:int;
  var c:int;
  var e:int;
  var l:double;
  var a:int = stack_pointer - 432;
  stack_pointer = a;
  var b:int = gettimeofday(a - -64, 0);
  if (b) {
    a[8]:int = b;
    iprintf(memory_base + 912, a + 32);
  }
  startTimer[0]:double =
    f64_convert_i32_s(b = a[18]:int) * 0.000001 +
    f64_convert_i64_s(a[8]:long);
  memcpy(a - -64, inData, 320);
  Autocorrelation(a - -64, a + 384);
  Reflection_coefficients(a + 384, a + 48);
  Transformation_to_Log_Area_Ratios(a + 48);
  Quantization_and_coding(a + 48);
  b = 0;
  loop L_b {
    d = 
      d +
      (((c = b << 1) + a - -64)[0]:ushort != (c + (e = outData))[0]:ushort) +
      (((c = c | 2) + a - -64)[0]:ushort != (c + e)[0]:ushort);
    b = b + 2;
    if (b != 160) continue L_b;
  }
  b = a[31]:ushort;
  e = a[30]:ushort;
  c = a[29]:ushort;
  var g:int = a[28]:ushort;
  var h:int = a[27]:ushort;
  var i:int = a[26]:ushort;
  var j:int = a[25]:ushort;
  var k:int = a[24]:ushort;
  var f:int = gettimeofday(a + 384, 0);
  if (f) {
    a[4]:int = f;
    iprintf(memory_base + 912, a + 16);
  }
  endTimer[0]:double =
    (l = f64_convert_i32_s(f = a[98]:int) * 0.000001 +
         f64_convert_i64_s(a[48]:long));
  a[0]:double = l - startTimer[0]:double;
  small_printf(memory_base + 947, a);
  stack_pointer = a + 432;
  return d + (k != 32) + (j != 33) + (i != 22) + (h != 13) + (g != 7) +
         ((c & 65535) != 5) +
         ((e & 65535) != 3) +
         ((b & 65535) != 2);
}

