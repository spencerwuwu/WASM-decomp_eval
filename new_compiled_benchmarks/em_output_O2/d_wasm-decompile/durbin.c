import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_durbin(a:int, b:double_ptr, c:double_ptr) {
  var g:int;
  var h:int;
  var p:int;
  var f:int;
  var k:int;
  var i:int = stack_pointer - 16000;
  stack_pointer = i;
  c[0] = -(b[0]);
  if (a >= 2) {
    var n:int = a - 2;
    var d:double = -(b[0]);
    var e:int = 1;
    var l:double = 1.0;
    loop L_b {
      var m:int = e & 1;
      var j:double = d * d;
      if (eqz(g)) {
        d = 0.0;
        a = 0;
        goto B_c;
      }
      k = e & 2147483646;
      d = 0.0;
      a = 0;
      f = 0;
      loop L_e {
        d = ((e - a << 3) + b - 16)[0]:double *
            (c + ((h = a << 3) | 8))[0]:double +
            b[e + (a ^ -1)]:double * (c + h)[0]:double + d;
        a = a + 2;
        f = f + 2;
        if (f != k) continue L_e;
      }
      label B_c:
      j = 1.0 - j;
      var o:int = g << 3;
      if (m) { d = b[e + (a ^ -1)]:double * c[a]:double + d }
      d = -(d + (b + (p = e << 3))[0]:double) / (l = j * l);
      if (eqz(g)) {
        a = 0;
        goto B_g;
      }
      k = e & 2147483646;
      a = 0;
      h = 0;
      loop L_i {
        (i + (f = a << 3))[0]:double =
          d * c[e + (a ^ -1)]:double + (c + f)[0]:double;
        (i + (f = f | 8))[0]:double =
          d * ((e - a << 3) + c - 16)[0]:double + (c + f)[0]:double;
        a = a + 2;
        h = h + 2;
        if (h != k) continue L_i;
      }
      label B_g:
      f = o + 8;
      if (m) {
        (i + (h = a << 3))[0]:double =
          d * c[e + (a ^ -1)]:double + (c + h)[0]:double
      }
      (memcpy(c, i, f) + p)[0]:double = d;
      e = e + 1;
      a = g != n;
      g = g + 1;
      if (a) continue L_b;
    }
  }
  stack_pointer = i + 16000;
}

export function submain(a:int, b:int_ptr):int {
  var c:int;
  var e:{ a:double, b:double, c:double, d:double, e:double }
  var j:int;
  var l:int;
  var k:double;
  var p:int;
  var f:int;
  var m:int;
  var g:int = stack_pointer - 16048;
  stack_pointer = g;
  var h:double_ptr = legalfunc_polybench_alloc_data(2000L, 8);
  var d:double_ptr = legalfunc_polybench_alloc_data(2000L, 8);
  loop L_a {
    e = h + (c << 3);
    e.a = f64_convert_i32_s(2001 - c);
    e.e = f64_convert_i32_s(1997 - c);
    e.d = f64_convert_i32_s(1998 - c);
    e.c = f64_convert_i32_s(1999 - c);
    e.b = f64_convert_i32_s(2000 - c);
    c = c + 5;
    if (c != 2000) continue L_a;
  }
  d[0] = -(h[0]);
  var i:double = -(h[0]);
  e = 1;
  var n:double = 1.0;
  loop L_b {
    var o:int = e & 1;
    if (eqz(j)) {
      k = 0.0;
      c = 0;
      goto B_c;
    }
    m = e & 2147483646;
    k = 0.0;
    c = 0;
    f = 0;
    loop L_e {
      k = ((e - c << 3) + h - 16)[0]:double *
          (d + ((l = c << 3) | 8))[0]:double +
          h[e + (c ^ -1)]:double * (d + l)[0]:double + k;
      c = c + 2;
      f = f + 2;
      if (f != m) continue L_e;
    }
    label B_c:
    if (o) { k = h[e + (c ^ -1)]:double * d[c]:double + k }
    i = -(k + (h + (p = e << 3))[0]:double) / (n = n * (-(i) * i + 1.0));
    if (eqz(j)) {
      c = 0;
      goto B_g;
    }
    m = e & 2147483646;
    c = 0;
    l = 0;
    loop L_i {
      f = c << 3;
      (f + g + 48)[0]:double =
        i * d[e + (c ^ -1)]:double + (d + f)[0]:double;
      f = f | 8;
      (f + g + 48)[0]:double =
        i * ((e - c << 3) + d - 16)[0]:double + (d + f)[0]:double;
      c = c + 2;
      l = l + 2;
      if (l != m) continue L_i;
    }
    label B_g:
    f = j << 3;
    if (o) {
      l = c << 3;
      (l + g + 48)[0]:double =
        i * d[e + (c ^ -1)]:double + (d + l)[0]:double;
    }
    f = memcpy(d, g + 48, f + 8);
    (f + p)[0]:double = i;
    e = e + 1;
    c = j != 1998;
    j = j + 1;
    if (c) continue L_b;
  }
  if (a < 43) goto B_k;
  if ((b[0])[0]:ubyte) goto B_k;
  d = memory_base;
  fwrite(d + 42, 22, 1, c = stderr[0]:int);
  g[8]:int = d;
  fiprintf(c, d + 2, g + 32);
  d = 0;
  loop L_l {
    if (eqz((d & 65535) % 20)) { fputc(10, c) }
    g[2]:double = f[d]:double;
    small_fprintf(c, memory_base + 17, g + 16);
    d = d + 1;
    if (d != 2000) continue L_l;
  }
  g[0]:int = (d = memory_base);
  fiprintf(c, d + 25, g);
  fwrite(d + 65, 22, 1, c);
  label B_k:
  free(h);
  free(f);
  stack_pointer = g + 16048;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

