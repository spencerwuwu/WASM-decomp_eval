import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "y\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function memcpy(a:int, b:int, c:int):int;

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

export function kernel_durbin(a:int, b:double_ptr, c:double_ptr) {
  var n:int;
  var d:int = stack_pointer - 16000;
  stack_pointer = d;
  c[0] = -(b[0]);
  if (a < 2) goto B_a;
  var e:int = a + -2;
  var f:int = 0;
  a = 1;
  var g:double = 1.0;
  var h:double = -(b[0]);
  loop L_b {
    var i:double = g;
    a = a;
    var j:double = 1.0 - (h = h) * h;
    var k:int = f;
    var l:int = (k << 3) + 8;
    var m:int = 0;
    h = 0.0;
    loop L_c {
      f = m;
      n = f + 1;
      m = n;
      g = b[a + (f ^ -1)]:double * c[f]:double + h;
      h = g;
      if (n != a) continue L_c;
    }
    h = -(g + (b + (n = a << 3))[0]:double) / (g = j * i);
    f = 0;
    loop L_d {
      (d + (m = (f = f) << 3))[0]:double =
        h * c[a + (f ^ -1)]:double + (c + m)[0]:double;
      m = f + 1;
      f = m;
      if (m != a) continue L_d;
    }
    (memcpy(c, d, l) + n)[0]:double = h;
    f = k + 1;
    a = a + 1;
    g = g;
    h = h;
    if (k != e) continue L_b;
  }
  label B_a:
  stack_pointer = d + 16000;
}

export function submain(a:int, b:int_ptr):int {
  var g:int;
  var p:int;
  var o:int;
  var c:int = stack_pointer - 16048;
  stack_pointer = c;
  var d:double_ptr = legalfunc_polybench_alloc_data(2000L, 8);
  var e:double_ptr = legalfunc_polybench_alloc_data(2000L, 8);
  var f:int = 0;
  loop L_a {
    d[f = f]:double = f64_convert_i32_s(2001 - f);
    g = f + 1;
    f = g;
    if (g != 2000) continue L_a;
  }
  e[0] = -(d[0]);
  g = 0;
  f = 1;
  var h:double = 1.0;
  var i:double = -(d[0]);
  loop L_b {
    var j:double = h;
    f = f;
    var k:int = g;
    var l:int = k << 3;
    var m:double = i;
    var n:double = -(m);
    o = 0;
    i = 0.0;
    loop L_c {
      g = o;
      p = g + 1;
      o = p;
      h = d[f + (g ^ -1)]:double * e[g]:double + i;
      i = h;
      if (p != f) continue L_c;
    }
    i = -(h + (d + (p = f << 3))[0]:double) / (h = j * (n * m + 1.0));
    g = 0;
    loop L_d {
      (c + 48 + (o = (g = g) << 3))[0]:double =
        i * e[f + (g ^ -1)]:double + (e + o)[0]:double;
      o = g + 1;
      g = o;
      if (o != f) continue L_d;
    }
    o = memcpy(e, c + 48, l + 8);
    (o + p)[0]:double = i;
    g = k + 1;
    f = f + 1;
    h = h;
    i = i;
    if (k != 1998) continue L_b;
  }
  if (a < 43) goto B_e;
  if ((b[0])[0]:ubyte) goto B_e;
  f = memory_base;
  fwrite(f + 42, 22, 1, g = stderr[0]:int);
  c[8]:int = f + 0;
  fiprintf(g, f + 2, c + 32);
  f = 0;
  loop L_f {
    f = f;
    if (f % 20) goto B_g;
    fputc(10, g);
    label B_g:
    c[2]:double = o[f]:double;
    small_fprintf(g, memory_base + 17, c + 16);
    e = f + 1;
    f = e;
    if (e != 2000) continue L_f;
  }
  c[0]:int = (f = memory_base) + 0;
  fiprintf(g, f + 25, c);
  fwrite(f + 65, 22, 1, g);
  label B_e:
  free(d);
  free(o);
  stack_pointer = c + 16048;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

