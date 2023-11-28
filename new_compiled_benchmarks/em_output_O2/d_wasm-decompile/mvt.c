import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00x2\00x1\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DU"
  "MP_ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

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

export function kernel_mvt(a:int, b:int, c:int, d:int, e:int, f:int) {
  var i:int;
  var n:int;
  var j:int;
  var k:double_ptr;
  var g:int;
  var h:double;
  var l:int;
  if (a <= 0) goto B_a;
  var m:int = a & -2;
  var p:int = a & 1;
  var o:int = a - 1;
  loop L_b {
    k = b + (i << 3);
    h = k[0];
    g = 0;
    l = 0;
    if (o) {
      loop L_d {
        k[0] =
          (h = 
             ((n = f + i * 16000) + (j = g << 3))[0]:double * (d + j)[0]:double +
             h);
        k[0] = (h = (n + (j = j | 8))[0]:double * (d + j)[0]:double + h);
        g = g + 2;
        l = l + 2;
        if (l != m) continue L_d;
      }
    }
    if (p) {
      k[0] =
        ((g = g << 3) + f + i * 16000)[0]:double * (d + g)[0]:double + h
    }
    i = i + 1;
    if (i != a) continue L_b;
  }
  if (a <= 0) goto B_a;
  n = a & -2;
  m = a & 1;
  i = 0;
  loop L_f {
    k = c + (j = i << 3);
    h = k[0];
    g = 0;
    l = 0;
    if (o) {
      loop L_h {
        k[0] = (h = (f + g * 16000 + j)[0]:double * e[g]:double + h);
        k[0] =
          (h = (f + (d = g | 1) * 16000 + j)[0]:double * e[d]:double + h);
        g = g + 2;
        l = l + 2;
        if (l != n) continue L_h;
      }
    }
    if (m) { k[0] = (f + g * 16000 + j)[0]:double * e[g]:double + h }
    i = i + 1;
    if (i != a) continue L_f;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var f:int;
  var d:int;
  var c:int;
  var o:int;
  var j:int;
  var h:double_ptr;
  var g:double;
  var e:int = stack_pointer - 96;
  stack_pointer = e;
  var i:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var k:int = legalfunc_polybench_alloc_data(2000L, 8);
  var l:int = legalfunc_polybench_alloc_data(2000L, 8);
  var m:int = legalfunc_polybench_alloc_data(2000L, 8);
  var n:int = legalfunc_polybench_alloc_data(2000L, 8);
  loop L_a {
    (k + (c = (d = f) << 3))[0]:double = f64_convert_i32_s(d) / 2000.0;
    (c + l)[0]:double =
      f64_convert_i32_s(select_if(0, f = d + 1, o = f == 2000)) / 2000.0;
    (c + m)[0]:double =
      f64_convert_i32_s(d + select_if(3, -1997, d < 1997)) / 2000.0;
    (c + n)[0]:double =
      f64_convert_i32_s(d + select_if(4, -1996, d < 1996)) / 2000.0;
    c = 0;
    loop L_b {
      h = i + d * 16000;
      h[c]:double = f64_convert_i32_s(c * d % 2000) / 2000.0;
      h[j = c | 1]:double = f64_convert_i32_s(d * j % 2000) / 2000.0;
      c = c + 2;
      if (c != 2000) continue L_b;
    }
    if (eqz(o)) continue L_a;
  }
  f = 0;
  loop L_c {
    h = k + (f << 3);
    g = h[0];
    c = 0;
    loop L_d {
      h[0] =
        (g = 
           ((j = i + f * 16000) + (d = c << 3))[0]:double * (d + m)[0]:double +
           g);
      h[0] = (g = (j + (d = d | 8))[0]:double * (d + m)[0]:double + g);
      c = c + 2;
      if (c != 2000) continue L_d;
    }
    f = f + 1;
    if (f != 2000) continue L_c;
  }
  f = 0;
  loop L_e {
    h = l + (d = f << 3);
    g = h[0];
    c = 0;
    loop L_f {
      h[0] = (g = (i + c * 16000 + d)[0]:double * n[c]:double + g);
      h[0] =
        (g = (i + (j = c | 1) * 16000 + d)[0]:double * n[j]:double + g);
      c = c + 2;
      if (c != 2000) continue L_f;
    }
    f = f + 1;
    if (f != 2000) continue L_e;
  }
  if (a < 43) goto B_g;
  if ((b[0])[0]:ubyte) goto B_g;
  c = memory_base;
  fwrite(c + 46, 22, 1, d = stderr[0]:int);
  e[20]:int = c + 18;
  fiprintf(d, c, e + 80);
  c = 0;
  loop L_h {
    if (eqz((c & 65535) % 20)) { fputc(10, d) }
    e[8]:double = k[c]:double;
    small_fprintf(d, memory_base + 21, e - -64);
    c = c + 1;
    if (c != 2000) continue L_h;
  }
  e[12]:int = (c = memory_base) + 18;
  fiprintf(d, c + 29, e + 48);
  e[8]:int = c + 15;
  fiprintf(d, c, e + 32);
  c = 0;
  loop L_j {
    if (eqz((c & 65535) % 20)) { fputc(10, d) }
    e[2]:double = l[c]:double;
    small_fprintf(d, memory_base + 21, e + 16);
    c = c + 1;
    if (c != 2000) continue L_j;
  }
  e[0]:int = (c = memory_base) + 15;
  fiprintf(d, c + 29, e);
  fwrite(c + 69, 22, 1, d);
  label B_g:
  free(i);
  free(k);
  free(l);
  free(m);
  free(n);
  stack_pointer = e + 96;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

