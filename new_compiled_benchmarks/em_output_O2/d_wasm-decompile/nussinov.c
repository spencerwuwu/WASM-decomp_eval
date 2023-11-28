import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
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
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function kernel_nussinov(a:int, b:int, c:int) {
  var i:int;
  var d:int;
  var h:int;
  var n:{ a:int, b:int }
  var r:int;
  if (a > 0) {
    var k:int = a;
    loop L_b {
      var f:int = k;
      k = f - 1;
      if (a > f) {
        var m:int = c + k * 10000;
        var p:int_ptr = m + (f << 2);
        var o:int = f + 1;
        var q:byte_ptr = b + k;
        var l:int = 0;
        var g:int = f;
        loop L_d {
          var j:int_ptr = m + (i = g << 2);
          var e:int = j[0];
          j[0] =
            (d = 
               {
                 if (g > 0) {
                   j[0] =
                     (e = select_if(e = select_if(e, h = (m + (d = i - 4))[0]:int, e > h),
                                    n = ((h = c + f * 10000) + i)[0]:int,
                                    e > n));
                   d = (d + h)[0]:int;
                   if (f < g) {
                     select_if(e, d = d + ((b + g)[0]:byte + q[0] == 3), d < e);
                     goto B_e;
                   }
                   select_if(e, d, d < e);
                   goto B_e;
                 }
                 select_if(e, d = (c + f * 10000 + i)[0]:int, d < e);
                 label B_e:
               });
          if (f >= g) goto B_h;
          e = 
            if (l & 1) {
              j[0] =
                (d = select_if(d, e = (c + o * 10000 + i)[0]:int + p[0], d > e));
              o;
            } else {
              f
            }
          if (l == 1) goto B_h;
          loop L_j {
            j[0] =
              (d = 
                 select_if(
                   d,
                   r = ((h = e * 10000 + c + i) + 10000)[0]:int + (n = m + (e << 2)).a,
                   d > r));
            j[0] = (d = select_if(d, h = (h + 20000)[0]:int + n.b, d > h));
            e = e + 2;
            if (e != g) continue L_j;
          }
          label B_h:
          l = l + 1;
          g = g + 1;
          if (g != a) continue L_d;
        }
      }
      if (f >= 2) continue L_b;
    }
  }
}

export function submain(a:int, b:int_ptr):int {
  var c:int;
  var d:int;
  var e:int;
  var g:{ a:int, b:int }
  var j:int;
  var f:int;
  var h:int;
  var k:int_ptr = stack_pointer - 48;
  stack_pointer = k;
  var l:int = legalfunc_polybench_alloc_data(2500L, 1);
  var m:int = legalfunc_polybench_alloc_data(6250000L, 4);
  loop L_a {
    f = c + l;
    f[4]:byte = (d = c + 5) & 3;
    (l + (e = c + 3))[0]:byte = c & 3;
    (l + (g = c + 2))[0]:byte = e & 3;
    (l + (c = c + 1))[0]:byte = g & 3;
    f[0]:byte = c & 3;
    c = d;
    if (c != 2500) continue L_a;
  }
  var n:int = memset(m, 0, 25000000);
  var o:int = 2500;
  loop L_b {
    var i:int = o;
    o = i - 1;
    if (i <= 2499) {
      var q:int = n + o * 10000;
      var s:int_ptr = q + (i << 2);
      var r:int = i + 1;
      var t:byte_ptr = l + o;
      var p:int = 0;
      h = i;
      loop L_d {
        f = q + (j = h << 2);
        f[0]:int =
          (d = 
             select_if(
               c = select_if(c = f[0]:int, d = (q + (e = j - 4))[0]:int, c > d),
               d = ((g = n + i * 10000) + j)[0]:int,
               c > d));
        c = (e + g)[0]:int;
        e = h <= i;
        if (eqz(e)) { c = c + ((h + l)[0]:byte + t[0] == 3) }
        f[0]:int = (d = select_if(d, c, c < d));
        if (e) goto B_f;
        c = 
          if (p & 1) {
            f[0]:int =
              (d = select_if(d, c = (n + r * 10000 + j)[0]:int + s[0], c < d));
            r;
          } else {
            i
          }
        if (p == 1) goto B_f;
        loop L_h {
          f[0]:int =
            (d = 
               select_if(
                 d,
                 m = ((e = c * 10000 + n + j) + 10000)[0]:int + (g = q + (c << 2)).a,
                 d > m));
          f[0]:int = (d = select_if(d, e = (e + 20000)[0]:int + g.b, d > e));
          c = c + 2;
          if (c != h) continue L_h;
        }
        label B_f:
        p = p + 1;
        h = h + 1;
        if (h != 2500) continue L_d;
      }
    }
    if (i >= 2) continue L_b;
  }
  if (a < 43) goto B_i;
  if ((b[0])[0]:ubyte) goto B_i;
  c = memory_base;
  fwrite(c + 42, 22, 1, g = stderr[0]:int);
  k[8] = c + 15;
  fiprintf(g, c, k + 32);
  m = 0;
  h = 2499;
  e = 2500;
  j = 2500;
  f = 0;
  loop L_j {
    c = m;
    d = f;
    loop L_k {
      if (eqz(c % 20)) { fputc(10, g) }
      k[4] = (n + f * 10000)[d]:int;
      fiprintf(g, memory_base + 21, k + 16);
      d = d + 1;
      c = c + 1;
      if (c != e) continue L_k;
    }
    e = e + h;
    h = h - 1;
    m = j + m;
    j = j - 1;
    f = f + 1;
    if (f != 2500) continue L_j;
  }
  k[0] = (c = memory_base) + 15;
  fiprintf(g, c + 25, k);
  fwrite(c + 65, 22, 1, g);
  label B_i:
  free(l);
  free(n);
  stack_pointer = k + 48;
  return 0;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

