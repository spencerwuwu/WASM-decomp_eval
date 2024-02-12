import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00table\00%d \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function memset(a:int, b:int, c:int):int;

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_nussinov(a:int, b:int, c:int) {
  var i:int;
  var j:int;
  var l:int;
  var m:int;
  var n:int;
  if (a <= 0) goto B_a;
  var d:int = a;
  loop L_b {
    var e:int = d;
    var f:int = e + -1;
    if (e >= a) goto B_c;
    var g:byte_ptr = b + f;
    d = e;
    loop L_d {
      var h:int = c + f * 10000;
      var k:int_ptr = h + (j = (i = d) << 2);
      d = k[0];
      if (i < 1) goto B_f;
      k[0] = (d = select_if(d, m = (h + (l = j + -4))[0]:int, d > m));
      k[0] =
        (d = select_if(d, n = ((m = c + e * 10000) + j)[0]:int, d > n));
      l = (m + l)[0]:int;
      if (e >= i) goto B_g;
      k[0] = select_if(d, l = l + ((b + i)[0]:byte + g[0] == 3), d > l);
      goto B_e;
      label B_g:
      k[0] = select_if(d, l, d > l);
      goto B_e;
      label B_f:
      k[0] = select_if(d, l = (c + e * 10000 + j)[0]:int, d > l);
      label B_e:
      if (e >= i) goto B_h;
      l = k[0];
      m = e;
      loop L_i {
        k[0] =
          (l = 
             select_if(l = l,
                       m = (c + (d = (m = m) + 1) * 10000 + j)[0]:int + h[m]:int,
                       l > m));
        l = l;
        m = d;
        if (d != i) continue L_i;
      }
      label B_h:
      l = i + 1;
      d = l;
      if (l != a) continue L_d;
    }
    label B_c:
    d = f;
    if (e >= 2) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var g:int;
  var h:int;
  var i:int;
  var c:int_ptr = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(2500L, 1);
  var e:int = legalfunc_polybench_alloc_data(6250000L, 4);
  var f:int = 0;
  loop L_a {
    (d + (g = f))[0]:byte = (g = g + 1) & 3;
    f = g;
    if (g != 2500) continue L_a;
  }
  kernel_nussinov(2500, d, h = memset(e, 0, 25000000));
  if (a < 43) goto B_b;
  if ((b[0])[0]:ubyte) goto B_b;
  g = memory_base;
  fwrite(g + 42, 22, 1, i = stderr[0]:int);
  c[8] = g + 15;
  fiprintf(i, g + 0, c + 32);
  g = 2500;
  f = 2499;
  a = 2500;
  var j:int = 0;
  b = 0;
  loop L_c {
    var k:int = a;
    var l:int = f;
    e = g;
    j = j;
    f = j;
    b = b;
    g = b;
    loop L_d {
      g = g;
      f = f;
      if (f % 20) goto B_e;
      fputc(10, i);
      label B_e:
      c[4] = (h + b * 10000)[g]:int;
      fiprintf(i, memory_base + 21, c + 16);
      a = f + 1;
      f = a;
      g = g + 1;
      if (a != e) continue L_d;
    }
    g = l + e;
    f = l + -1;
    a = k + -1;
    j = j + k;
    e = b + 1;
    b = e;
    if (e != 2500) continue L_c;
  }
  c[0] = (g = memory_base) + 15;
  fiprintf(i, g + 25, c);
  fwrite(g + 65, 22, 1, i);
  label B_b:
  free(d);
  free(h);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

