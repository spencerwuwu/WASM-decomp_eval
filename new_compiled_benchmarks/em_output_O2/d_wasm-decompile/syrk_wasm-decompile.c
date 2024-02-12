import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00C\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
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

export function kernel_syrk(a:int, b:int, c:double, d:double, e:int, f:int) {
  var i:int;
  var j:double_ptr;
  var h:double_ptr;
  var k:double_ptr;
  var l:double_ptr;
  var o:int;
  if (a > 0) {
    var m:int = 1;
    loop L_b {
      var n:double_ptr = m & 3;
      var g:int = 0;
      if (i >= 3) {
        o = m & -4;
        l = 0;
        loop L_d {
          h = e + i * 9600;
          k = h + (j = g << 3);
          k[0] = k[0] * d;
          k = h + (j | 8);
          k[0] = k[0] * d;
          k = h + (j | 16);
          k[0] = k[0] * d;
          h = h + (j | 24);
          h[0] = h[0] * d;
          g = g + 4;
          l = l + 4;
          if (l != o) continue L_d;
        }
      }
      h = 0;
      if (n) {
        loop L_f {
          j = e + i * 9600 + (g << 3);
          j[0] = j[0] * d;
          g = g + 1;
          h = h + 1;
          if (h != n) continue L_f;
        }
      }
      if (b > 0) {
        o = m & -2;
        var q:int = m & 1;
        var p:int = 0;
        loop L_h {
          h = p << 3;
          j = h + f + i * 8000;
          g = 0;
          l = 0;
          if (i) {
            loop L_j {
              k = e + i * 9600;
              n = k + (g << 3);
              n[0] = j[0] * c * (f + g * 8000 + h)[0]:double + n[0];
              k = k + ((n = g | 1) << 3);
              k[0] = j[0] * c * (f + n * 8000 + h)[0]:double + k[0];
              g = g + 2;
              l = l + 2;
              if (l != o) continue L_j;
            }
          }
          if (q) {
            l = e + i * 9600 + (g << 3);
            l[0] = j[0] * c * (f + g * 8000 + h)[0]:double + l[0];
          }
          p = p + 1;
          if (p != b) continue L_h;
        }
      }
      m = m + 1;
      i = i + 1;
      if (i != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:double_ptr;
  var f:double_ptr;
  var e:double_ptr;
  var c:int;
  var l:int;
  var g:int;
  var n:int;
  var m:double_ptr;
  var h:double_ptr;
  var i:int = stack_pointer - 48;
  stack_pointer = i;
  var j:int = legalfunc_polybench_alloc_data(1440000L, 8);
  var k:int = legalfunc_polybench_alloc_data(1200000L, 8);
  loop L_a {
    c = 0;
    loop L_b {
      e = k + d * 8000;
      e[c]:double = f64_convert_i32_s((c * d | 1) % 1200) / 1200.0;
      e[f = c | 1]:double = f64_convert_i32_s((d * f + 1) % 1200) / 1200.0;
      c = c + 2;
      if (c != 1000) continue L_b;
    }
    d = d + 1;
    if (d != 1200) continue L_a;
  }
  d = 0;
  loop L_c {
    c = 0;
    loop L_d {
      e = j + d * 9600;
      e[c]:double = f64_convert_i32_s((c * d + 2) % 1000) / 1000.0;
      e[f = c | 1]:double = f64_convert_i32_s((d * f + 2) % 1000) / 1000.0;
      c = c + 2;
      if (c != 1200) continue L_d;
    }
    l = 1;
    d = d + 1;
    if (d != 1200) continue L_c;
  }
  loop L_e {
    var o:int = l & 3;
    f = 0;
    c = 0;
    if (g >= 3) {
      n = l & 2147483644;
      m = 0;
      loop L_g {
        d = j + g * 9600;
        h = d + (e = c << 3);
        h[0] = h[0] * 1.2;
        h = d + (e | 8);
        h[0] = h[0] * 1.2;
        h = d + (e | 16);
        h[0] = h[0] * 1.2;
        d = d + (e | 24);
        d[0] = d[0] * 1.2;
        c = c + 4;
        m = m + 4;
        if (m != n) continue L_g;
      }
    }
    if (o) {
      loop L_i {
        d = j + g * 9600 + (c << 3);
        d[0] = d[0] * 1.2;
        c = c + 1;
        f = f + 1;
        if (f != o) continue L_i;
      }
    }
    o = l & 2147483646;
    var p:int = l & 1;
    n = 0;
    loop L_j {
      d = n << 3;
      e = d + k + g * 8000;
      c = 0;
      f = 0;
      if (g) {
        loop L_l {
          m = j + g * 9600;
          h = m + (c << 3);
          h[0] = e[0] * 1.5 * (k + c * 8000 + d)[0]:double + h[0];
          m = m + ((h = c | 1) << 3);
          m[0] = e[0] * 1.5 * (k + h * 8000 + d)[0]:double + m[0];
          c = c + 2;
          f = f + 2;
          if (f != o) continue L_l;
        }
      }
      if (p) {
        f = j + g * 9600 + (c << 3);
        f[0] = e[0] * 1.5 * (k + c * 8000 + d)[0]:double + f[0];
      }
      n = n + 1;
      if (n != 1000) continue L_j;
    }
    l = l + 1;
    g = g + 1;
    if (g != 1200) continue L_e;
  }
  if (a < 43) goto B_n;
  if ((b[0])[0]:ubyte) goto B_n;
  c = memory_base;
  fwrite(c + 42, 22, 1, e = stderr[0]:int);
  i[8]:int = c + 15;
  fiprintf(e, c, i + 32);
  d = 0;
  loop L_o {
    f = d * 1200;
    c = 0;
    loop L_p {
      if (eqz((c + f) % 20)) { fputc(10, e) }
      i[2]:double = (j + d * 9600)[c]:double;
      small_fprintf(e, memory_base + 17, i + 16);
      c = c + 1;
      if (c != 1200) continue L_p;
    }
    d = d + 1;
    if (d != 1200) continue L_o;
  }
  i[0]:int = (c = memory_base) + 15;
  fiprintf(e, c + 25, i);
  fwrite(c + 65, 22, 1, e);
  label B_n:
  free(j);
  free(k);
  stack_pointer = i + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

