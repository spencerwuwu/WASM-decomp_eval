import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function small_fprintf(a:int, b:int, c:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_doitgen(a:int, b:int, c:int, d:int, e:int, f:int) {
  var h:int;
  var j:int;
  var o:int;
  var n:int;
  var i:int;
  var g:int;
  var m:int;
  if (a > 0) {
    var r:int = c & -4;
    var q:int = c & 3;
    var s:int = c & -2;
    var t:int = c & 1;
    var u:int = c < 4;
    loop L_b {
      var k:int = 0;
      if (b > 0) {
        loop L_d {
          var p:int = 0;
          if (c <= 0) goto B_e;
          loop L_f {
            i = f + (h = p << 3);
            i[0]:long = 0L;
            var l:double = 0.0;
            g = 0;
            m = 0;
            if (c != 1) {
              loop L_h {
                i[0]:double =
                  (l = (o = d + j * 179200 + k * 1280)[g]:double *
                       (e + g * 1280 + h)[0]:double +
                       l);
                i[0]:double =
                  (l = o[n = g | 1]:double * (e + n * 1280 + h)[0]:double + l);
                g = g + 2;
                m = m + 2;
                if (m != s) continue L_h;
              }
            }
            if (t) {
              i[0]:double =
                (d + j * 179200 + k * 1280)[g]:double * (e + g * 1280 + h)[0]:double +
                l
            }
            p = p + 1;
            if (p != c) continue L_f;
          }
          if (c <= 0) goto B_e;
          m = 0;
          g = 0;
          o = 0;
          if (eqz(u)) {
            loop L_k {
              i = d + j * 179200 + k * 1280;
              (i + (h = g << 3))[0]:double = (f + h)[0]:double;
              (i + (n = h | 8))[0]:double = (f + n)[0]:double;
              (i + (n = h | 16))[0]:double = (f + n)[0]:double;
              (i + (h = h | 24))[0]:double = (f + h)[0]:double;
              g = g + 4;
              o = o + 4;
              if (o != r) continue L_k;
            }
          }
          if (eqz(q)) goto B_e;
          loop L_l {
            h = g << 3;
            (h + d + j * 179200 + k * 1280)[0]:double = (f + h)[0]:double;
            g = g + 1;
            m = m + 1;
            if (m != q) continue L_l;
          }
          label B_e:
          k = k + 1;
          if (k != b) continue L_d;
        }
      }
      j = j + 1;
      if (j != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var h:int;
  var f:int;
  var d:int;
  var e:int;
  var c:int;
  var n:int;
  var g:int;
  var i:int = stack_pointer - 48;
  stack_pointer = i;
  var k:int = legalfunc_polybench_alloc_data(3360000L, 8);
  var j:int = legalfunc_polybench_alloc_data(160L, 8);
  var l:int = legalfunc_polybench_alloc_data(25600L, 8);
  loop L_a {
    g = 0;
    loop L_b {
      d = g * h;
      c = 0;
      loop L_c {
        e = k + h * 179200 + g * 1280;
        e[c]:double = f64_convert_i32_s((c + d) % 160) / 160.0;
        e[f = c | 1]:double = f64_convert_i32_s((d + f) % 160) / 160.0;
        c = c + 2;
        if (c != 160) continue L_c;
      }
      g = g + 1;
      if (g != 140) continue L_b;
    }
    h = h + 1;
    if (h != 150) continue L_a;
  }
  d = 0;
  loop L_d {
    c = 0;
    loop L_e {
      e = l + d * 1280;
      e[c]:double = f64_convert_i32_s(c * d % 160) / 160.0;
      e[f = c | 1]:double = f64_convert_i32_s(d * f % 160) / 160.0;
      c = c + 2;
      if (c != 160) continue L_e;
    }
    d = d + 1;
    if (d != 160) continue L_d;
  }
  loop L_f {
    h = 0;
    loop L_g {
      var o:int = 0;
      loop L_h {
        f = j + (e = o << 3);
        f[0]:long = 0L;
        c = 0;
        var m:double = 0.0;
        loop L_i {
          f[0]:double =
            (m = (d = k + n * 179200 + h * 1280)[c]:double *
                 (l + c * 1280 + e)[0]:double +
                 m);
          f[0]:double =
            (m = d[g = c | 1]:double * (l + g * 1280 + e)[0]:double + m);
          c = c + 2;
          if (c != 160) continue L_i;
        }
        o = o + 1;
        if (o != 160) continue L_h;
      }
      e = 0;
      loop L_j {
        (d + (c = e << 3))[0]:double = (c + j)[0]:double;
        (d + (f = c + 8))[0]:double = (f + j)[0]:double;
        (d + (f = c + 16))[0]:double = (f + j)[0]:double;
        (d + (f = c + 24))[0]:double = (f + j)[0]:double;
        (d + (c = c + 32))[0]:double = (c + j)[0]:double;
        e = e + 5;
        if (e != 160) continue L_j;
      }
      h = h + 1;
      if (h != 140) continue L_g;
    }
    n = n + 1;
    if (n != 150) continue L_f;
  }
  if (a < 43) goto B_k;
  if ((b[0])[0]:ubyte) goto B_k;
  c = memory_base;
  fwrite(c + 42, 22, 1, e = stderr[0]:int);
  i[8]:int = c + 15;
  fiprintf(e, c, i + 32);
  g = 0;
  loop L_l {
    h = g * 22400;
    d = 0;
    loop L_m {
      f = d * 160 + h;
      c = 0;
      loop L_n {
        if (eqz((c + f) % 20)) { fputc(10, e) }
        i[2]:double = (k + g * 179200 + d * 1280)[c]:double;
        small_fprintf(e, memory_base + 17, i + 16);
        c = c + 1;
        if (c != 160) continue L_n;
      }
      d = d + 1;
      if (d != 140) continue L_m;
    }
    g = g + 1;
    if (g != 150) continue L_l;
  }
  i[0]:int = (c = memory_base) + 15;
  fiprintf(e, c + 25, i);
  fwrite(c + 65, 22, 1, e);
  label B_k:
  free(k);
  free(j);
  free(l);
  stack_pointer = i + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

