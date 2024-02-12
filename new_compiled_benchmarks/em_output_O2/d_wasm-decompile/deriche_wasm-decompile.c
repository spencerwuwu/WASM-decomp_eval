import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_deriche(a:int, b:int, c:float, d:int, e:int, f:int, g:int) {
  var v:float;
  var o:int;
  var n:float_ptr;
  var i:float_ptr;
  var s:float_ptr;
  var h:int;
  var j:int;
  var q:float;
  var r:int;
  var u:int;
  var k:float = -(c);
  var m:float = expf(k);
  var p:float = c + c;
  var t:float = expf(p);
  var l:float = expf(c * -2.0f);
  v = l * -(p = (v = 1.0f - m) * v / (p * m + 1.0f - t));
  var w:float = (c + 1.0f) * (m = m * p);
  t = (c + -1.0f) * m;
  c = -(l);
  m = exp2f(k);
  if (a <= 0) goto B_a;
  u = b & -2;
  var x:int = b & 1;
  var y:int = b - 1;
  loop L_b {
    if (b <= 0) goto B_c;
    q = 0.0f;
    h = 0;
    k = 0.0f;
    l = 0.0f;
    j = 0;
    if (y) {
      loop L_e {
        r = f + (n = o * 8640);
        (r + (i = h << 2))[0]:float =
          (l = c * l + m * k + p * (s = (n = d + n) + i)[0] + t * q);
        (r + (i = i | 4))[0]:float =
          (k = c * k + m * l + p * (i = i + n)[0] + t * s[0]);
        q = i[0];
        h = h + 2;
        j = j + 2;
        if (j != u) continue L_e;
      }
    }
    if (eqz(x)) goto B_c;
    h = h << 2;
    (h + f + (i = o * 8640))[0]:float =
      c * l + m * k + p * (d + i + h)[0]:float + t * q;
    label B_c:
    o = o + 1;
    if (o != a) continue L_b;
  }
  if (a <= 0) goto B_a;
  var z:float = c * 0.0f + m * 0.0f + w * 0.0f + v * 0.0f;
  x = b - 1;
  u = b & 1;
  o = 0;
  loop L_f {
    if (b <= 0) goto B_g;
    var aa:float = 0.0f;
    h = b;
    k = 0.0f;
    l = 0.0f;
    if (u) {
      i = x << 2;
      (i + g + (h = o * 8640))[0]:float = z;
      k = (d + h + i)[0]:float;
      l = z;
      h = x;
    }
    q = 0.0f;
    if (eqz(y)) goto B_g;
    loop L_i {
      j = g + (i = o * 8640);
      (j + (r = (n = h - 1) << 2))[0]:float =
        (q = c * q + m * l + w * k + v * aa);
      (j + (s = (h = h - 2) << 2))[0]:float =
        (l = c * l + m * q + w * (aa = ((i = d + i) + r)[0]:float) + v * k);
      k = (i + s)[0]:float;
      if (n > 1) continue L_i;
    }
    label B_g:
    o = o + 1;
    if (o != a) continue L_f;
  }
  if (a <= 0) goto B_a;
  o = b & -2;
  u = b & 1;
  d = 0;
  loop L_j {
    if (b <= 0) goto B_k;
    i = 0;
    n = 0;
    if (y) {
      loop L_m {
        r = e + (j = d * 8640);
        (r + (h = i << 2))[0]:float =
          ((s = f + j) + h)[0]:float + ((j = g + j) + h)[0]:float;
        (r + (h = h | 4))[0]:float = (h + s)[0]:float + (h + j)[0]:float;
        i = i + 2;
        n = n + 2;
        if (n != o) continue L_m;
      }
    }
    if (eqz(u)) goto B_k;
    i = i << 2;
    (i + e + (h = d * 8640))[0]:float =
      (f + h + i)[0]:float + (g + h + i)[0]:float;
    label B_k:
    d = d + 1;
    if (d != a) continue L_j;
  }
  label B_a:
  if (b <= 0) goto B_n;
  d = a & -2;
  u = a & 1;
  o = a - 1;
  s = 0;
  loop L_o {
    if (a <= 0) goto B_p;
    q = 0.0f;
    h = 0;
    k = 0.0f;
    l = 0.0f;
    j = 0;
    if (o) {
      loop L_r {
        i = s << 2;
        (i + f + (n = h * 8640))[0]:float =
          (l = c * l + m * k + p * (n = e + n + i)[0] + t * q);
        (f + (r = (h | 1) * 8640) + i)[0]:float =
          (k = c * k + m * l + p * (i = e + r + i)[0] + t * n[0]);
        q = i[0];
        h = h + 2;
        j = j + 2;
        if (j != d) continue L_r;
      }
    }
    if (eqz(u)) goto B_p;
    i = s << 2;
    (i + f + (h = h * 8640))[0]:float =
      c * l + m * k + p * (e + h + i)[0]:float + t * q;
    label B_p:
    s = s + 1;
    if (s != b) continue L_o;
  }
  if (b <= 0) goto B_n;
  q = c * 0.0f + m * 0.0f + w * 0.0f + v * 0.0f;
  d = a - 1;
  s = a & 1;
  r = 0;
  loop L_s {
    if (a <= 0) goto B_t;
    l = 0.0f;
    h = a;
    p = 0.0f;
    t = 0.0f;
    if (s) {
      i = r << 2;
      (i + g + (h = d * 8640))[0]:float = q;
      p = (e + h + i)[0]:float;
      t = q;
      h = d;
    }
    k = 0.0f;
    if (eqz(o)) goto B_t;
    loop L_v {
      i = r << 2;
      (i + g + (n = (j = h * 8640) - 8640))[0]:float =
        (k = c * k + m * t + w * p + v * l);
      (g + (j = j - 17280) + i)[0]:float =
        (t = c * t + m * k + w * (l = (e + n + i)[0]:float) + v * p);
      p = (e + j + i)[0]:float;
      i = h - 1;
      h = h - 2;
      if (i > 1) continue L_v;
    }
    label B_t:
    r = r + 1;
    if (r != b) continue L_s;
  }
  label B_n:
  if (a > 0) {
    o = b & -2;
    u = b & 1;
    d = 0;
    loop L_x {
      if (b <= 0) goto B_y;
      i = 0;
      n = 0;
      if (b != 1) {
        loop L_aa {
          r = e + (j = d * 8640);
          (r + (h = i << 2))[0]:float =
            ((s = f + j) + h)[0]:float + ((j = g + j) + h)[0]:float;
          (r + (h = h | 4))[0]:float = (h + s)[0]:float + (h + j)[0]:float;
          i = i + 2;
          n = n + 2;
          if (n != o) continue L_aa;
        }
      }
      if (eqz(u)) goto B_y;
      i = i << 2;
      (i + e + (h = d * 8640))[0]:float =
        (f + h + i)[0]:float + (g + h + i)[0]:float;
      label B_y:
      d = d + 1;
      if (d != a) continue L_x;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var g:int;
  var j:int;
  var c:int;
  var f:int;
  var e:int;
  var d:int = stack_pointer - 48;
  stack_pointer = d;
  var h:int = legalfunc_polybench_alloc_data(8847360L, 4);
  var i:int = legalfunc_polybench_alloc_data(8847360L, 4);
  var k:int = legalfunc_polybench_alloc_data(8847360L, 4);
  var l:int = legalfunc_polybench_alloc_data(8847360L, 4);
  loop L_a {
    e = g * 313;
    c = 0;
    loop L_b {
      f = h + g * 8640;
      f[c]:float = f32_convert_i32_s(c * 991 + e & 65535) / 65535.0f;
      f[j = c | 1]:float =
        f32_convert_i32_s(j * 991 + e & 65535) / 65535.0f;
      c = c + 2;
      if (c != 2160) continue L_b;
    }
    g = g + 1;
    if (g != 4096) continue L_a;
  }
  kernel_deriche(4096, 2160, 0.25f, h, i, k, l);
  if (a < 43) goto B_c;
  if ((b[0])[0]:ubyte) goto B_c;
  c = memory_base;
  fwrite(c + 46, 22, 1, f = stderr[0]:int);
  d[8]:int = c;
  fiprintf(f, c + 7, d + 32);
  e = 0;
  loop L_d {
    j = e * 2160;
    c = 0;
    loop L_e {
      if (eqz((c + j) % 20)) { fputc(10, f) }
      d[2]:double = f64_promote_f32((i + e * 8640)[c]:float);
      small_fprintf(f, memory_base + 22, d + 16);
      c = c + 1;
      if (c != 2160) continue L_e;
    }
    e = e + 1;
    if (e != 4096) continue L_d;
  }
  d[0]:int = (c = memory_base);
  fiprintf(f, c + 29, d);
  fwrite(c + 69, 22, 1, f);
  label B_c:
  free(h);
  free(i);
  free(k);
  free(l);
  stack_pointer = d + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

