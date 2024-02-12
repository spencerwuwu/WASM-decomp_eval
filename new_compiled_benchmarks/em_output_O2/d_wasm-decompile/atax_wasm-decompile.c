import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "y\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function small_fprintf(a:int, b:int, c:int):int;

import function memset(a:int, b:int, c:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function init_array(a:int, b:int, c:int, d:int) {
  var e:int;
  var j:int;
  var g:int;
  var f:double;
  var i:int;
  var h:int;
  if (b <= 0) goto B_a;
  f = f64_convert_i32_s(b);
  h = b & 1;
  if (b != 1) {
    i = b & -2;
    loop L_c {
      d[e]:double = f64_convert_i32_s(e) / f + 1.0;
      d[j = e | 1]:double = f64_convert_i32_s(j) / f + 1.0;
      e = e + 2;
      g = g + 2;
      if (g != i) continue L_c;
    }
  }
  if (eqz(h)) goto B_a;
  d[e]:double = f64_convert_i32_s(e) / f + 1.0;
  label B_a:
  if (a > 0) {
    h = b & -2;
    var k:int = b & 1;
    f = f64_convert_i32_s(a * 5);
    d = 0;
    loop L_e {
      if (b <= 0) goto B_f;
      e = 0;
      g = 0;
      if (b != 1) {
        loop L_h {
          j = c + d * 16800;
          j[e]:double = f64_convert_i32_s((d + e) % b) / f;
          j[i = e | 1]:double = f64_convert_i32_s((d + i) % b) / f;
          e = e + 2;
          g = g + 2;
          if (g != h) continue L_h;
        }
      }
      if (eqz(k)) goto B_f;
      (c + d * 16800)[e]:double = f64_convert_i32_s((d + e) % b) / f;
      label B_f:
      d = d + 1;
      if (d != a) continue L_e;
    }
  }
}

export function print_array(a:int, b:int) {
  var e:int;
  var d:int = stack_pointer - 48;
  stack_pointer = d;
  var c:int = memory_base;
  fwrite(c + 42, 22, 1, e = stderr[0]:int);
  d[8]:int = c;
  fiprintf(e, c + 2, d + 32);
  if (a > 0) {
    c = 0;
    loop L_b {
      if (eqz(c % 20)) { fputc(10, e) }
      d[2]:double = b[c]:double;
      small_fprintf(e, memory_base + 17, d + 16);
      c = c + 1;
      if (c != a) continue L_b;
    }
  }
  d[0]:int = (c = memory_base);
  fiprintf(e, c + 25, d);
  fwrite(c + 65, 22, 1, e);
  stack_pointer = d + 48;
}

export function kernel_atax(a:int, b:int, c:int, d:int, e:int, f:int) {
  var i:int;
  var m:double_ptr;
  var h:double_ptr;
  if (b > 0) { memset(e, 0, b << 3) }
  if (a > 0) {
    var o:int = b & -2;
    var p:int = b & 1;
    var q:int = b - 1;
    loop L_c {
      var j:int = f + (i << 3);
      j[0]:long = 0L;
      var n:int = b <= 0;
      if (n) goto B_d;
      var g:int = 0;
      var k:double = 0.0;
      var l:int = 0;
      if (q) {
        loop L_f {
          j[0]:double =
            (k = 
               ((m = c + i * 16800) + (h = g << 3))[0]:double * (d + h)[0]:double +
               k);
          j[0]:double =
            (k = (m + (h = h | 8))[0]:double * (d + h)[0]:double + k);
          g = g + 2;
          l = l + 2;
          if (l != o) continue L_f;
        }
      }
      if (p) {
        j[0]:double =
          ((g = g << 3) + c + i * 16800)[0]:double * (d + g)[0]:double + k
      }
      if (n) goto B_d;
      g = 0;
      l = 0;
      if (q) {
        loop L_i {
          m = e + (h = g << 3);
          m[0] = ((n = c + i * 16800) + h)[0]:double * j[0]:double + m[0];
          m = e + (h = h | 8);
          m[0] = (h + n)[0]:double * j[0]:double + m[0];
          g = g + 2;
          l = l + 2;
          if (l != o) continue L_i;
        }
      }
      if (eqz(p)) goto B_d;
      h = e + (g = g << 3);
      h[0] = (c + i * 16800 + g)[0]:double * j[0]:double + h[0];
      label B_d:
      i = i + 1;
      if (i != a) continue L_c;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var c:int;
  var d:int;
  var e:int;
  var f:int;
  var k:int;
  var i:double_ptr;
  var l:int = legalfunc_polybench_alloc_data(3990000L, 8);
  var g:int = legalfunc_polybench_alloc_data(2100L, 8);
  var h:int = legalfunc_polybench_alloc_data(2100L, 8);
  var m:int = legalfunc_polybench_alloc_data(1900L, 8);
  loop L_a {
    g[c]:double = f64_convert_i32_s(c) / 2100.0 + 1.0;
    g[d = c + 1]:double = f64_convert_i32_s(d) / 2100.0 + 1.0;
    g[d = c + 2]:double = f64_convert_i32_s(d) / 2100.0 + 1.0;
    c = c + 3;
    if (c != 2100) continue L_a;
  }
  loop L_b {
    c = 0;
    loop L_c {
      d = l + e * 16800;
      d[c]:double = f64_convert_i32_s((c + e) % 2100) / 9500.0;
      d[f = c | 1]:double = f64_convert_i32_s((e + f) % 2100) / 9500.0;
      c = c + 2;
      if (c != 2100) continue L_c;
    }
    e = e + 1;
    if (e != 1900) continue L_b;
  }
  h = memset(h, 0, 16800);
  loop L_d {
    c = m + (k << 3);
    c[0]:long = 0L;
    var j:double = 0.0;
    f = 0;
    loop L_e {
      c[0]:double =
        (j = 
           ((e = l + k * 16800) + (d = f << 3))[0]:double * (d + g)[0]:double +
           j);
      c[0]:double =
        (j = (e + (i = d + 8))[0]:double * (g + i)[0]:double + j);
      c[0]:double =
        (j = (e + (d = d + 16))[0]:double * (d + g)[0]:double + j);
      f = f + 3;
      if (f != 2100) continue L_e;
    }
    f = 0;
    loop L_f {
      i = h + (d = f << 3);
      i[0] = (d + e)[0]:double * c[0]:double + i[0];
      var n:double_ptr = h + (i = d + 8);
      n[0] = (e + i)[0]:double * c[0]:double + n[0];
      i = h + (d = d + 16);
      i[0] = (d + e)[0]:double * c[0]:double + i[0];
      f = f + 3;
      if (f != 2100) continue L_f;
    }
    k = k + 1;
    if (k != 1900) continue L_d;
  }
  if (a < 43) goto B_g;
  if ((b[0])[0]:ubyte) goto B_g;
  print_array(2100, h);
  label B_g:
  free(l);
  free(g);
  free(h);
  free(m);
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

