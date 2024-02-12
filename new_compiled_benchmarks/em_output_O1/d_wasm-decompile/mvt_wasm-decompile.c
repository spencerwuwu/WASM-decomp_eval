import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function kernel_mvt(a:int, b:int, c:int, d:int, e:int, f:int) {
  var h:int;
  var k:int;
  var g:int;
  var i:double_ptr;
  var j:double;
  if (a < 1) goto B_a;
  g = 0;
  loop L_b {
    i = b + ((h = g) << 3);
    j = i[0];
    g = 0;
    loop L_c {
      i[0] =
        (j = 
           (f + h * 16000 + (k = (g = g) << 3))[0]:double * (d + k)[0]:double +
           j);
      j = j;
      k = g + 1;
      g = k;
      if (k != a) continue L_c;
    }
    k = h + 1;
    g = k;
    if (k != a) continue L_b;
  }
  label B_a:
  if (a <= 0) goto B_d;
  g = 0;
  loop L_e {
    i = c + (h = (d = g) << 3);
    j = i[0];
    g = 0;
    loop L_f {
      i[0] = (j = (f + (g = g) * 16000 + h)[0]:double * e[g]:double + j);
      j = j;
      k = g + 1;
      g = k;
      if (k != a) continue L_f;
    }
    k = d + 1;
    g = k;
    if (k != a) continue L_e;
  }
  label B_d:
}

export function submain(a:int, b:int_ptr):int {
  var j:int;
  var k:double_ptr;
  var l:int;
  var m:int;
  var n:double;
  var c:int = stack_pointer - 96;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(4000000L, 8);
  var e:int = legalfunc_polybench_alloc_data(2000L, 8);
  var f:int = legalfunc_polybench_alloc_data(2000L, 8);
  var g:int = legalfunc_polybench_alloc_data(2000L, 8);
  var h:int = legalfunc_polybench_alloc_data(2000L, 8);
  var i:int = 0;
  loop L_a {
    (e + (i = (j = i) << 3))[0]:double = f64_convert_i32_s(j) / 2000.0;
    (f + i)[0]:double =
      f64_convert_i32_s(select_if(0, k = j + 1, l = k == 2000)) / 2000.0;
    (g + i)[0]:double = f64_convert_i32_s((j + 3) % 2000) / 2000.0;
    (h + i)[0]:double = f64_convert_i32_s((j + 4) % 2000) / 2000.0;
    i = 0;
    loop L_b {
      (d + j * 16000)[i = i]:double =
        f64_convert_i32_s(i * j % 2000) / 2000.0;
      m = i + 1;
      i = m;
      if (m != 2000) continue L_b;
    }
    i = k;
    if (eqz(l)) continue L_a;
  }
  i = 0;
  loop L_c {
    k = e + ((m = i) << 3);
    n = k[0];
    i = 0;
    loop L_d {
      k[0] =
        (n = 
           (d + m * 16000 + (j = (i = i) << 3))[0]:double * (g + j)[0]:double +
           n);
      n = n;
      j = i + 1;
      i = j;
      if (j != 2000) continue L_d;
    }
    j = m + 1;
    i = j;
    if (j != 2000) continue L_c;
  }
  i = 0;
  loop L_e {
    k = f + (m = (l = i) << 3);
    n = k[0];
    i = 0;
    loop L_f {
      k[0] = (n = (d + (i = i) * 16000 + m)[0]:double * h[i]:double + n);
      n = n;
      j = i + 1;
      i = j;
      if (j != 2000) continue L_f;
    }
    j = l + 1;
    i = j;
    if (j != 2000) continue L_e;
  }
  if (a < 43) goto B_g;
  if ((b[0])[0]:ubyte) goto B_g;
  j = memory_base;
  fwrite(j + 46, 22, 1, i = stderr[0]:int);
  c[20]:int = j + 18;
  fiprintf(i, j + 0, c + 80);
  j = 0;
  loop L_h {
    j = j;
    if (j % 20) goto B_i;
    fputc(10, i);
    label B_i:
    c[8]:double = e[j]:double;
    small_fprintf(i, memory_base + 21, c + 64);
    m = j + 1;
    j = m;
    if (m != 2000) continue L_h;
  }
  c[12]:int = (j = memory_base) + 18;
  fiprintf(i, j + 29, c + 48);
  c[8]:int = j + 15;
  fiprintf(i, j + 0, c + 32);
  j = 0;
  loop L_j {
    j = j;
    if (j % 20) goto B_k;
    fputc(10, i);
    label B_k:
    c[2]:double = f[j]:double;
    small_fprintf(i, memory_base + 21, c + 16);
    m = j + 1;
    j = m;
    if (m != 2000) continue L_j;
  }
  c[0]:int = (j = memory_base) + 15;
  fiprintf(i, j + 29, c);
  fwrite(j + 69, 22, 1, i);
  label B_g:
  free(d);
  free(e);
  free(f);
  free(g);
  free(h);
  stack_pointer = c + 96;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

