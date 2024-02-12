import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_jacobi_1d(a:int, b:int, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 32;
  var g:int_ptr = e - f;
  g[7] = a;
  g[6] = b;
  g[5] = c;
  g[4] = d;
  var h:int = 0;
  g[3] = h;
  loop L_b {
    var i:int = g[3];
    var j:int = g[7];
    var k:int = i;
    var l:int = j;
    var m:int = k < l;
    var n:int = 1;
    var o:int = m & n;
    if (eqz(o)) goto B_a;
    var p:int = 1;
    g[2] = p;
    loop L_d {
      var q:int = g[2];
      var r:int = g[6];
      var s:int = 1;
      var t:int = r - s;
      var u:int = q;
      var v:int = t;
      var w:int = u < v;
      var x:int = 1;
      var y:int = w & x;
      if (eqz(y)) goto B_c;
      var z:int = g[5];
      var aa:int = g[2];
      var ba:int = 1;
      var ca:int = aa - ba;
      var da:int = 3;
      var ea:int = ca << da;
      var fa:double_ptr = z + ea;
      var ga:double = fa[0];
      var ha:int = g[5];
      var ia:int = g[2];
      var ja:int = 3;
      var ka:int = ia << ja;
      var la:double_ptr = ha + ka;
      var ma:double = la[0];
      var na:double = ga + ma;
      var oa:int = g[5];
      var pa:int = g[2];
      var qa:int = 1;
      var ra:int = pa + qa;
      var sa:int = 3;
      var ta:int = ra << sa;
      var ua:double_ptr = oa + ta;
      var va:double = ua[0];
      var wa:double = na + va;
      var xa:double = 0.33333;
      var ya:double = xa * wa;
      var za:int = g[4];
      var ab:int = g[2];
      var bb:int = 3;
      var cb:int = ab << bb;
      var db:double_ptr = za + cb;
      db[0] = ya;
      var eb:int = g[2];
      var fb:int = 1;
      var gb:int = eb + fb;
      g[2] = gb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var hb:int = 1;
    g[2] = hb;
    loop L_f {
      var ib:int = g[2];
      var jb:int = g[6];
      var kb:int = 1;
      var lb:int = jb - kb;
      var mb:int = ib;
      var nb:int = lb;
      var ob:int = mb < nb;
      var pb:int = 1;
      var qb:int = ob & pb;
      if (eqz(qb)) goto B_e;
      var rb:int = g[4];
      var sb:int = g[2];
      var tb:int = 1;
      var ub:int = sb - tb;
      var vb:int = 3;
      var wb:int = ub << vb;
      var xb:double_ptr = rb + wb;
      var yb:double = xb[0];
      var zb:int = g[4];
      var ac:int = g[2];
      var bc:int = 3;
      var cc:int = ac << bc;
      var dc:double_ptr = zb + cc;
      var ec:double = dc[0];
      var fc:double = yb + ec;
      var gc:int = g[4];
      var hc:int = g[2];
      var ic:int = 1;
      var jc:int = hc + ic;
      var kc:int = 3;
      var lc:int = jc << kc;
      var mc:double_ptr = gc + lc;
      var nc:double = mc[0];
      var oc:double = fc + nc;
      var pc:double = 0.33333;
      var qc:double = pc * oc;
      var rc:int = g[5];
      var sc:int = g[2];
      var tc:int = 3;
      var uc:int = sc << tc;
      var vc:double_ptr = rc + uc;
      vc[0] = qc;
      var wc:int = g[2];
      var xc:int = 1;
      var yc:int = wc + xc;
      g[2] = yc;
      continue L_f;
    }
    unreachable;
    label B_e:
    var zc:int = g[3];
    var ad:int = 1;
    var bd:int = zc + ad;
    g[3] = bd;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[7] = a;
  e[6] = b;
  var f:int = 2000;
  e[5] = f;
  var g:int = 500;
  e[4] = g;
  var h:long = 2000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[3] = j;
  var k:long = 2000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[2] = m;
  var n:int = e[5];
  var o:int = e[3];
  var p:int = e[2];
  init_array(n, o, p);
  var q:int = e[4];
  var r:int = e[5];
  var s:int = e[3];
  var t:int = e[2];
  kernel_jacobi_1d(q, r, s, t);
  var u:int = e[7];
  var v:int = 42;
  var w:int = u;
  var x:int = v;
  var y:int = w > x;
  var z:int = 1;
  var aa:int = y & z;
  if (eqz(aa)) goto B_a;
  var ba:int_ptr = e[6];
  var ca:int = ba[0];
  var da:int = 87;
  var ea:int = memory_base;
  var fa:int = ea + da;
  var ga:int = strcmp(ca, fa);
  if (ga) goto B_a;
  var ha:int = e[5];
  var ia:int = e[3];
  print_array(ha, ia);
  label B_a:
  var ja:int = e[3];
  free(ja);
  var ka:int = e[2];
  free(ka);
  var la:int = 0;
  var ma:int = 32;
  var na:int = e + ma;
  stack_pointer = na;
  return la;
}

function init_array(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 16;
  var f:{ a:int, b:int, c:int, d:int } = d - e;
  f.d = a;
  f.c = b;
  f.b = c;
  var g:int = 0;
  f.a = g;
  loop L_b {
    var h:int = f.a;
    var i:int = f.d;
    var j:int = h;
    var k:int = i;
    var l:int = j < k;
    var m:int = 1;
    var n:int = l & m;
    if (eqz(n)) goto B_a;
    var o:int = f.a;
    var p:double = f64_convert_i32_s(o);
    var q:double = 2.0;
    var r:double = p + q;
    var s:int = f.d;
    var t:double = f64_convert_i32_s(s);
    var u:double = r / t;
    var v:int = f.c;
    var w:int = f.a;
    var x:int = 3;
    var y:int = w << x;
    var z:double_ptr = v + y;
    z[0] = u;
    var aa:int = f.a;
    var ba:double = f64_convert_i32_s(aa);
    var ca:double = 3.0;
    var da:double = ba + ca;
    var ea:int = f.d;
    var fa:double = f64_convert_i32_s(ea);
    var ga:double = da / fa;
    var ha:int = f.b;
    var ia:int = f.a;
    var ja:int = 3;
    var ka:int = ia << ja;
    var la:double_ptr = ha + ka;
    la[0] = ga;
    var ma:int = f.a;
    var na:int = 1;
    var oa:int = ma + na;
    f.a = oa;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int = c - d;
  stack_pointer = e;
  e[11]:int = a;
  e[10]:int = b;
  var f:int_ptr = stderr;
  var g:int = f[0];
  var h:int = 42;
  var i:int = memory_base;
  var j:int = i + h;
  var k:int = 0;
  fprintf(g, j, k);
  var l:int = f[0];
  var m:int = 15;
  var n:int = memory_base;
  var o:int = n + m;
  e[8]:int = o;
  var p:int = 0;
  var q:int = n + p;
  var r:int = 32;
  var s:int = e + r;
  fprintf(l, q, s);
  var t:int = 0;
  e[9]:int = t;
  loop L_b {
    var u:int = e[9]:int;
    var v:int = e[11]:int;
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = e[9]:int;
    var ca:int = 20;
    var da:int = ba % ca;
    if (da) goto B_c;
    var ea:int_ptr = stderr;
    var fa:int = ea[0];
    var ga:int = 86;
    var ha:int = memory_base;
    var ia:int = ha + ga;
    var ja:int = 0;
    fprintf(fa, ia, ja);
    label B_c:
    var ka:int_ptr = stderr;
    var la:int = ka[0];
    var ma:int = e[10]:int;
    var na:int = e[9]:int;
    var oa:int = 3;
    var pa:int = na << oa;
    var qa:double_ptr = ma + pa;
    var ra:double = qa[0];
    e[0]:double = ra;
    var sa:int = 17;
    var ta:int = memory_base;
    var ua:int = ta + sa;
    fprintf(la, ua, e);
    var va:int = e[9]:int;
    var wa:int = 1;
    var xa:int = va + wa;
    e[9]:int = xa;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ya:int_ptr = stderr;
  var za:int = ya[0];
  var ab:int = 15;
  var bb:int = memory_base;
  var cb:int = bb + ab;
  e[4]:int = cb;
  var db:int = 25;
  var eb:int = bb + db;
  var fb:int = 16;
  var gb:int = e + fb;
  fprintf(za, eb, gb);
  var hb:int = ya[0];
  var ib:int = 65;
  var jb:int = memory_base;
  var kb:int = jb + ib;
  var lb:int = 0;
  fprintf(hb, kb, lb);
  var mb:int = 48;
  var nb:int = e + mb;
  stack_pointer = nb;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

