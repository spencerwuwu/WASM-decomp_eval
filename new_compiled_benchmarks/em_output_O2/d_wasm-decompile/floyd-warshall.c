import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00path\00%d \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARRA"
  "YS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fwrite(a:int, b:int, c:int, d:int):int;

import function fiprintf(a:int, b:int, c:int):int;

import function fputc(a:int, b:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_floyd_warshall(a:int, b:int) {
  var f:int;
  var c:int_ptr;
  var m:int;
  var n:int;
  if (a > 0) {
    var k:int = a & -2;
    var l:int = a & 1;
    loop L_b {
      var g:int = 0;
      loop L_c {
        var h:int = b + g * 11200;
        var i:int_ptr = h + (f << 2);
        var d:int = 0;
        var j:int = 0;
        if (a != 1) {
          loop L_e {
            var e:int_ptr = h + (c = d << 2);
            e[0] =
              select_if(e = e[0], n = ((m = b + f * 11200) + c)[0]:int + i[0], e < n);
            e = h + (c = c | 4);
            e[0] = select_if(e = e[0], c = (c + m)[0]:int + i[0], c > e);
            d = d + 2;
            j = j + 2;
            if (j != k) continue L_e;
          }
        }
        if (l) {
          c = h + (d = d << 2);
          c[0] =
            select_if(c = c[0], d = (b + f * 11200 + d)[0]:int + i[0], c < d);
        }
        g = g + 1;
        if (g != a) continue L_c;
      }
      f = f + 1;
      if (f != a) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var d:int;
  var e:int;
  var i:int;
  var c:int;
  var l:int;
  var m:int;
  var j:int_ptr;
  var f:int_ptr = stack_pointer - 48;
  stack_pointer = f;
  var h:int = legalfunc_polybench_alloc_data(7840000L, 4);
  loop L_a {
    c = 0;
    loop L_b {
      (h + d * 11200)[c]:int =
        select_if(
          select_if(select_if(c * d % 7 + 1, 999, (e = c + d) % 11), 999, e % 7),
          999,
          e % 13);
      c = c + 1;
      if (c != 2800) continue L_b;
    }
    d = d + 1;
    if (d != 2800) continue L_a;
  }
  loop L_c {
    var k:int = 0;
    loop L_d {
      e = h + k * 11200;
      j = e + (i << 2);
      c = 0;
      loop L_e {
        var g:int_ptr = e + (d = c << 2);
        g[0] =
          select_if(g = g[0], m = ((l = h + i * 11200) + d)[0]:int + j[0], g < m);
        g = e + (d = d | 4);
        g[0] = select_if(g = g[0], d = (d + l)[0]:int + j[0], d > g);
        c = c + 2;
        if (c != 2800) continue L_e;
      }
      k = k + 1;
      if (k != 2800) continue L_d;
    }
    i = i + 1;
    if (i != 2800) continue L_c;
  }
  if (a < 43) goto B_f;
  if ((b[0])[0]:ubyte) goto B_f;
  c = memory_base;
  fwrite(c + 41, 22, 1, e = stderr[0]:int);
  f[8] = c + 15;
  fiprintf(e, c, f + 32);
  d = 0;
  loop L_g {
    j = d * 2800;
    c = 0;
    loop L_h {
      if (eqz((c + j) % 20)) { fputc(10, e) }
      f[4] = (h + d * 11200)[c]:int;
      fiprintf(e, memory_base + 20, f + 16);
      c = c + 1;
      if (c != 2800) continue L_h;
    }
    d = d + 1;
    if (d != 2800) continue L_g;
  }
  f[0] = (c = memory_base) + 15;
  fiprintf(e, c + 24, f);
  fwrite(c - -64, 22, 1, e);
  label B_f:
  free(h);
  stack_pointer = f + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

