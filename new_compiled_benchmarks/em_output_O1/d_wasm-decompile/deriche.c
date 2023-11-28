import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "imgOut\00begin dump: %s\00%0.2f \00\0aend   dump: %s\0a\00==BEGIN DUMP"
  "_ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function expf(a:float):float;

import function exp2f(a:float):float;

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

export function kernel_deriche(a:int, b:int, c:float, d:float_ptr, e:int, f:int, g:int) {
  var h:float;
  var i:float;
  var n:float;
  var u:float_ptr;
  var v:int;
  var q:int;
  var r:int;
  var t:float;
  var s:int;
  var j:float = 1.0f - (i = expf(h = -(c)));
  var k:float = j * j / ((j = c + c) * i + 1.0f - expf(j));
  var l:float = -(k);
  var m:float = c + 1.0f;
  var o:float = (c + -1.0f) * (n = i * k);
  var p:float = expf(c * -2.0f);
  c = -(p);
  i = exp2f(h);
  q = a < 1;
  if (q) goto B_a;
  r = 0;
  loop L_b {
    s = r;
    r = 0;
    h = 0.0f;
    j = 0.0f;
    t = 0.0f;
    if (b <= 0) goto B_c;
    loop L_d {
      (f + (u = s * 8640) + (v = (r = r) << 2))[0]:float =
        (j = c * t + i * (t = j) + k * (u = d + u + v)[0] + o * h);
      v = r + 1;
      r = v;
      h = u[0];
      j = j;
      t = t;
      if (v != b) continue L_d;
    }
    label B_c:
    u = s + 1;
    r = u;
    if (u != a) continue L_b;
  }
  label B_a:
  p = p * l;
  m = m * n;
  if (q) goto B_e;
  r = 0;
  loop L_f {
    q = r;
    r = b;
    h = 0.0f;
    j = 0.0f;
    t = 0.0f;
    l = 0.0f;
    if (b <= 0) goto B_g;
    loop L_h {
      (g + (u = q * 8640) + (s = (r = (v = r) + -1) << 2))[0]:float =
        (n = c * l + i * (l = t) + m * (t = h) + p * j);
      r = r;
      h = (d + u + s)[0]:float;
      j = t;
      t = n;
      l = l;
      if (v > 1) continue L_h;
    }
    label B_g:
    u = q + 1;
    r = u;
    if (u != a) continue L_f;
  }
  label B_e:
  if (a < 1) goto B_i;
  r = 0;
  loop L_j {
    v = r;
    d = 0;
    if (b <= 0) goto B_k;
    loop L_l {
      (e + (r = v * 8640) + (d = (u = d) << 2))[0]:float =
        (f + r + d)[0]:float + (g + r + d)[0]:float;
      r = u + 1;
      d = r;
      if (r != b) continue L_l;
    }
    label B_k:
    d = v + 1;
    r = d;
    if (d != a) continue L_j;
  }
  label B_i:
  if (b < 1) goto B_m;
  r = 0;
  loop L_n {
    v = r;
    r = 0;
    h = 0.0f;
    j = 0.0f;
    t = 0.0f;
    if (a <= 0) goto B_o;
    loop L_p {
      (f + (d = (r = r) * 8640) + (u = v << 2))[0]:float =
        (j = c * t + i * (t = j) + k * (d = e + d + u)[0] + o * h);
      u = r + 1;
      r = u;
      h = d[0];
      j = j;
      t = t;
      if (u != a) continue L_p;
    }
    label B_o:
    d = v + 1;
    r = d;
    if (d != b) continue L_n;
  }
  label B_m:
  if (b < 1) goto B_q;
  r = 0;
  loop L_r {
    s = r;
    r = a;
    h = 0.0f;
    j = 0.0f;
    t = 0.0f;
    l = 0.0f;
    if (a <= 0) goto B_s;
    loop L_t {
      (g + (u = (r = (d = r) + -1) * 8640) + (v = s << 2))[0]:float =
        (k = c * l + i * (l = t) + m * (t = h) + p * j);
      r = r;
      h = (e + u + v)[0]:float;
      j = t;
      t = k;
      l = l;
      if (d > 1) continue L_t;
    }
    label B_s:
    d = s + 1;
    r = d;
    if (d != b) continue L_r;
  }
  label B_q:
  if (a < 1) goto B_u;
  s = b < 1;
  r = 0;
  loop L_v {
    v = r;
    d = 0;
    if (s) goto B_w;
    loop L_x {
      (e + (r = v * 8640) + (d = (u = d) << 2))[0]:float =
        (f + r + d)[0]:float + (g + r + d)[0]:float;
      r = u + 1;
      d = r;
      if (r != b) continue L_x;
    }
    label B_w:
    d = v + 1;
    r = d;
    if (d != a) continue L_v;
  }
  label B_u:
}

export function submain(a:int, b:int_ptr):int {
  var k:int;
  var j:int;
  var i:int;
  var c:int = stack_pointer - 48;
  stack_pointer = c;
  var d:int = legalfunc_polybench_alloc_data(8847360L, 4);
  var e:int = legalfunc_polybench_alloc_data(8847360L, 4);
  var f:int = legalfunc_polybench_alloc_data(8847360L, 4);
  var g:int = legalfunc_polybench_alloc_data(8847360L, 4);
  var h:int = 0;
  loop L_a {
    i = h;
    j = i * 313;
    h = 0;
    loop L_b {
      (d + i * 8640)[h = h]:float =
        f32_convert_i32_s(h * 991 + j & 65535) / 65535.0f;
      k = h + 1;
      h = k;
      if (k != 2160) continue L_b;
    }
    k = i + 1;
    h = k;
    if (k != 4096) continue L_a;
  }
  kernel_deriche(4096, 2160, 0.25f, d, e, f, g);
  if (a < 43) goto B_c;
  if ((b[0])[0]:ubyte) goto B_c;
  h = memory_base;
  fwrite(h + 46, 22, 1, j = stderr[0]:int);
  c[8]:int = h + 0;
  fiprintf(j, h + 7, c + 32);
  h = 0;
  loop L_d {
    i = h;
    a = i * 2160;
    h = 0;
    loop L_e {
      h = h;
      if ((h + a) % 20) goto B_f;
      fputc(10, j);
      label B_f:
      c[2]:double = f64_promote_f32((e + i * 8640)[h]:float);
      small_fprintf(j, memory_base + 22, c + 16);
      k = h + 1;
      h = k;
      if (k != 2160) continue L_e;
    }
    k = i + 1;
    h = k;
    if (k != 4096) continue L_d;
  }
  c[0]:int = (h = memory_base) + 0;
  fiprintf(j, h + 29, c);
  fwrite(h + 69, 22, 1, j);
  label B_c:
  free(d);
  free(e);
  free(f);
  free(g);
  stack_pointer = c + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

