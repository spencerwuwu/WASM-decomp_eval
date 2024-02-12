import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function kernel_symm(a:int, b:int, c:double, d:double, e:int, f:int, g:int) {
  var o:int;
  var r:double_ptr;
  var t:double_ptr;
  var n:double;
  if (a < 1) goto B_a;
  var h:int = b < 1;
  var i:int = 0;
  loop L_b {
    var j:int = i;
    if (h) goto B_c;
    var k:int = f + j * 8000;
    var l:double_ptr = k + (j << 3);
    i = 0;
    loop L_d {
      var m:int = i;
      if (j) goto B_f;
      n = 0.0;
      goto B_e;
      label B_f:
      var p:double_ptr = g + j * 9600 + (o = m << 3);
      var q:double = 0.0;
      i = 0;
      loop L_g {
        var s:double_ptr = e + (r = (i = i) * 9600) + o;
        s[0] = p[0] * c * (t = k + (i << 3))[0] + s[0];
        n = (g + r + o)[0]:double * t[0] + q;
        q = n;
        r = i + 1;
        i = r;
        n = n;
        if (r != j) continue L_g;
      }
      label B_e:
      r = e + (i = j * 9600) + (o = m << 3);
      r[0] = c * n + d * r[0] + (g + i + o)[0]:double * c * l[0];
      o = m + 1;
      i = o;
      if (o != b) continue L_d;
    }
    label B_c:
    o = j + 1;
    i = o;
    if (o != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var j:double_ptr;
  var k:double_ptr;
  var h:int;
  var i:double_ptr;
  var l:int;
  var p:double;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var e:int = legalfunc_polybench_alloc_data(1000000L, 8);
  var f:int = legalfunc_polybench_alloc_data(1200000L, 8);
  var g:int = 0;
  loop L_a {
    h = g;
    i = h + 1200;
    g = 0;
    loop L_b {
      (d + (j = h * 9600) + (k = (g = g) << 3))[0]:double =
        f64_convert_i32_s((g + h) % 100) / 1000.0;
      (f + j + k)[0]:double = f64_convert_i32_s((i - g) % 100) / 1000.0;
      j = g + 1;
      g = j;
      if (j != 1200) continue L_b;
    }
    h = h + 1;
    g = h;
    if (h != 1000) continue L_a;
  }
  g = 1;
  h = 0;
  loop L_c {
    h = h;
    i = g;
    g = 0;
    loop L_d {
      k = e + h * 8000;
      k[g = g]:double = f64_convert_i32_s((g + h) % 100) / 1000.0;
      j = g + 1;
      g = j;
      if (j != i) continue L_d;
    }
    j = h + 1;
    g = j;
    if (h > 998) goto B_e;
    loop L_f {
      k[g = g]:long = -4571373524106608640L;
      h = g + 1;
      g = h;
      if (h != 1000) continue L_f;
    }
    label B_e:
    g = i + 1;
    h = j;
    if (j != 1000) continue L_c;
  }
  g = 0;
  loop L_g {
    var m:int = e + (l = g) * 8000;
    var n:double_ptr = m + (l << 3);
    g = 0;
    loop L_h {
      var o:int = g;
      if (l) goto B_j;
      p = 0.0;
      goto B_i;
      label B_j:
      var q:double_ptr = f + l * 9600 + (h = o << 3);
      var r:double = 0.0;
      g = 0;
      loop L_k {
        k = d + (j = (g = g) * 9600) + h;
        k[0] = q[0] * 1.5 * (i = m + (g << 3))[0] + k[0];
        p = (f + j + h)[0]:double * i[0] + r;
        r = p;
        j = g + 1;
        g = j;
        p = p;
        if (j != l) continue L_k;
      }
      label B_i:
      j = d + (g = l * 9600) + (h = o << 3);
      j[0] = p * 1.5 + j[0] * 1.2 + (f + g + h)[0]:double * 1.5 * n[0];
      h = o + 1;
      g = h;
      if (h != 1200) continue L_h;
    }
    h = l + 1;
    g = h;
    if (h != 1000) continue L_g;
  }
  if (a < 43) goto B_l;
  if ((b[0])[0]:ubyte) goto B_l;
  g = memory_base;
  fwrite(g + 42, 22, 1, k = stderr[0]:int);
  c[8]:int = g + 15;
  fiprintf(k, g + 0, c + 32);
  g = 0;
  loop L_m {
    j = g;
    i = j * 1000;
    g = 0;
    loop L_n {
      g = g;
      if ((g + i) % 20) goto B_o;
      fputc(10, k);
      label B_o:
      c[2]:double = (d + j * 9600)[g]:double;
      small_fprintf(k, memory_base + 17, c + 16);
      h = g + 1;
      g = h;
      if (h != 1200) continue L_n;
    }
    h = j + 1;
    g = h;
    if (h != 1000) continue L_m;
  }
  c[0]:int = (g = memory_base) + 15;
  fiprintf(k, g + 25, c);
  fwrite(g + 65, 22, 1, k);
  label B_l:
  free(d);
  free(e);
  free(f);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

