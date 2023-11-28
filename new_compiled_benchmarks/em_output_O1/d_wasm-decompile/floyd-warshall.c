import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
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
}

export function wasm_apply_data_relocs() {
}

export function kernel_floyd_warshall(a:int, b:int) {
  var e:int;
  var h:int;
  if (a < 1) goto B_a;
  var c:int = 0;
  loop L_b {
    var d:int = c;
    c = 0;
    loop L_c {
      var f:int = b + (e = c) * 11200;
      var g:int_ptr = f + (d << 2);
      c = 0;
      loop L_d {
        var i:int_ptr = f + (h = (c = c) << 2);
        i[0] =
          select_if(i = i[0], h = (b + d * 11200 + h)[0]:int + g[0], i < h);
        h = c + 1;
        c = h;
        if (h != a) continue L_d;
      }
      h = e + 1;
      c = h;
      if (h != a) continue L_c;
    }
    h = d + 1;
    c = h;
    if (h != a) continue L_b;
  }
  label B_a:
}

export function submain(a:int, b:int_ptr):int {
  var g:int_ptr;
  var i:int;
  var f:int;
  var h:int;
  var j:int;
  var c:int_ptr = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(7840000L, 4);
  var e:int = 0;
  loop L_a {
    f = e;
    e = 0;
    loop L_b {
      (d + f * 11200)[e = e]:int =
        select_if(
          select_if(select_if(e * f % 7 + 1, 999, (g = e + f) % 11), 999, g % 7),
          999,
          g % 13);
      g = e + 1;
      e = g;
      if (g != 2800) continue L_b;
    }
    f = f + 1;
    e = f;
    if (f != 2800) continue L_a;
  }
  e = 0;
  loop L_c {
    h = e;
    e = 0;
    loop L_d {
      j = d + (i = e) * 11200;
      var k:int_ptr = j + (h << 2);
      e = 0;
      loop L_e {
        g = j + (f = (e = e) << 2);
        g[0] =
          select_if(g = g[0], f = (d + h * 11200 + f)[0]:int + k[0], g < f);
        f = e + 1;
        e = f;
        if (f != 2800) continue L_e;
      }
      f = i + 1;
      e = f;
      if (f != 2800) continue L_d;
    }
    f = h + 1;
    e = f;
    if (f != 2800) continue L_c;
  }
  if (a < 43) goto B_f;
  if ((b[0])[0]:ubyte) goto B_f;
  e = memory_base;
  fwrite(e + 41, 22, 1, h = stderr[0]:int);
  c[8] = e + 15;
  fiprintf(h, e + 0, c + 32);
  e = 0;
  loop L_g {
    g = e;
    j = g * 2800;
    e = 0;
    loop L_h {
      e = e;
      if ((e + j) % 20) goto B_i;
      fputc(10, h);
      label B_i:
      c[4] = (d + g * 11200)[e]:int;
      fiprintf(h, memory_base + 20, c + 16);
      f = e + 1;
      e = f;
      if (f != 2800) continue L_h;
    }
    f = g + 1;
    e = f;
    if (f != 2800) continue L_g;
  }
  c[0] = (e = memory_base) + 15;
  fiprintf(h, e + 24, c);
  fwrite(e + 64, 22, 1, h);
  label B_f:
  free(d);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

