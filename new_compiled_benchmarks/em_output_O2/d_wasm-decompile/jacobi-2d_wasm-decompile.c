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

export function kernel_jacobi_2d(a:int, b:int, c:int, d:int) {
  var g:int;
  var k:double_ptr;
  var f:int;
  var h:int;
  var j:int;
  var l:int;
  if (a > 0) {
    var i:int = b - 1;
    var m:int = b > 2;
    loop L_b {
      var e:int = 1;
      if (eqz(m)) goto B_c;
      loop L_d {
        j = e - 1;
        h = e + 1;
        b = 1;
        loop L_e {
          f = b << 3;
          (f + d + (g = e * 10400))[0]:double =
            ((k = (g = c + g) + f)[0] + (k - 8)[0]:double + g[b = b + 1]:double +
             (f + c + h * 10400)[0]:double +
             (f + c + j * 10400)[0]:double) *
            0.2;
          if (b != i) continue L_e;
        }
        e = h;
        if (e != i) continue L_d;
      }
      e = 1;
      if (eqz(m)) goto B_c;
      loop L_f {
        j = e - 1;
        h = e + 1;
        b = 1;
        loop L_g {
          f = b << 3;
          (f + c + (g = e * 10400))[0]:double =
            ((k = (g = d + g) + f)[0] + (k - 8)[0]:double + g[b = b + 1]:double +
             (f + d + h * 10400)[0]:double +
             (f + d + j * 10400)[0]:double) *
            0.2;
          if (b != i) continue L_g;
        }
        e = h;
        if (e != i) continue L_f;
      }
      label B_c:
      l = l + 1;
      if (l != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var f:double_ptr;
  var e:int;
  var c:int;
  var d:int;
  var k:int;
  var l:int;
  var n:int;
  var h:int = stack_pointer - 48;
  stack_pointer = h;
  var i:int = legalfunc_polybench_alloc_data(1690000L, 8);
  var j:int = legalfunc_polybench_alloc_data(1690000L, 8);
  loop L_a {
    var m:double = f64_convert_i32_s(f);
    c = 0;
    loop L_b {
      d = c << 3;
      (d + i + (e = f * 10400))[0]:double =
        (m * f64_convert_i32_s(c + 2) + 2.0) / 1300.0;
      (e + j + d)[0]:double = (m * f64_convert_i32_s(c + 3) + 3.0) / 1300.0;
      c = c + 1;
      if (c != 1300) continue L_b;
    }
    f = f + 1;
    if (f != 1300) continue L_a;
  }
  loop L_c {
    var g:int = 1;
    loop L_d {
      l = g - 1;
      c = 1;
      k = g + 1;
      loop L_e {
        e = c << 3;
        (e + j + (d = g * 10400))[0]:double =
          ((f = (d = d + i) + e)[0] + (f - 8)[0]:double + d[c = c + 1]:double +
           (e + i + k * 10400)[0]:double +
           (e + i + l * 10400)[0]:double) *
          0.2;
        if (c != 1299) continue L_e;
      }
      g = k;
      if (g != 1299) continue L_d;
    }
    g = 1;
    loop L_f {
      l = g - 1;
      k = g + 1;
      c = 1;
      loop L_g {
        e = c << 3;
        (e + i + (d = g * 10400))[0]:double =
          ((f = (d = d + j) + e)[0] + (f - 8)[0]:double + d[c = c + 1]:double +
           (e + j + k * 10400)[0]:double +
           (e + j + l * 10400)[0]:double) *
          0.2;
        if (c != 1299) continue L_g;
      }
      g = k;
      if (g != 1299) continue L_f;
    }
    n = n + 1;
    if (n != 500) continue L_c;
  }
  if (a < 43) goto B_h;
  if ((b[0])[0]:ubyte) goto B_h;
  c = memory_base;
  fwrite(c + 42, 22, 1, d = stderr[0]:int);
  h[8]:int = c + 15;
  fiprintf(d, c, h + 32);
  e = 0;
  loop L_i {
    f = e * 1300;
    c = 0;
    loop L_j {
      if (eqz((c + f) % 20)) { fputc(10, d) }
      h[2]:double = (i + e * 10400)[c]:double;
      small_fprintf(d, memory_base + 17, h + 16);
      c = c + 1;
      if (c != 1300) continue L_j;
    }
    e = e + 1;
    if (e != 1300) continue L_i;
  }
  h[0]:int = (c = memory_base) + 15;
  fiprintf(d, c + 25, h);
  fwrite(c + 65, 22, 1, d);
  label B_h:
  free(i);
  free(j);
  stack_pointer = h + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

