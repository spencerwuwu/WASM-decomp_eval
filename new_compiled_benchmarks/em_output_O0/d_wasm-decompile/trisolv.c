import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "x\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_trisolv(a:int, b:int, c:int, d:int) {
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
    var p:int = g[4];
    var q:int = g[3];
    var r:int = 3;
    var s:int = q << r;
    var t:double_ptr = p + s;
    var u:double = t[0];
    var v:int = g[5];
    var w:int = g[3];
    var x:int = 3;
    var y:int = w << x;
    var z:double_ptr = v + y;
    z[0] = u;
    var aa:int = 0;
    g[2] = aa;
    loop L_d {
      var ba:int = g[2];
      var ca:int = g[3];
      var da:int = ba;
      var ea:int = ca;
      var fa:int = da < ea;
      var ga:int = 1;
      var ha:int = fa & ga;
      if (eqz(ha)) goto B_c;
      var ia:int = g[6];
      var ja:int = g[3];
      var ka:int = 16000;
      var la:int = ja * ka;
      var ma:int = ia + la;
      var na:int = g[2];
      var oa:int = 3;
      var pa:int = na << oa;
      var qa:double_ptr = ma + pa;
      var ra:double = qa[0];
      var sa:int = g[5];
      var ta:int = g[2];
      var ua:int = 3;
      var va:int = ta << ua;
      var wa:double_ptr = sa + va;
      var xa:double = wa[0];
      var ya:int = g[5];
      var za:int = g[3];
      var ab:int = 3;
      var bb:int = za << ab;
      var cb:double_ptr = ya + bb;
      var db:double = cb[0];
      var eb:double = -(ra);
      var fb:double = eb * xa;
      var gb:double = fb + db;
      cb[0] = gb;
      var hb:int = g[2];
      var ib:int = 1;
      var jb:int = hb + ib;
      g[2] = jb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var kb:int = g[5];
    var lb:int = g[3];
    var mb:int = 3;
    var nb:int = lb << mb;
    var ob:double_ptr = kb + nb;
    var pb:double = ob[0];
    var qb:int = g[6];
    var rb:int = g[3];
    var sb:int = 16000;
    var tb:int = rb * sb;
    var ub:int = qb + tb;
    var vb:int = g[3];
    var wb:int = 3;
    var xb:int = vb << wb;
    var yb:double_ptr = ub + xb;
    var zb:double = yb[0];
    var ac:double = pb / zb;
    var bc:int = g[5];
    var cc:int = g[3];
    var dc:int = 3;
    var ec:int = cc << dc;
    var fc:double_ptr = bc + ec;
    fc[0] = ac;
    var gc:int = g[3];
    var hc:int = 1;
    var ic:int = gc + hc;
    g[3] = ic;
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
  var g:long = 4000000L;
  var h:int = 8;
  var i:int = legalfunc_polybench_alloc_data(g, h);
  e[4] = i;
  var j:long = 2000L;
  var k:int = 8;
  var l:int = legalfunc_polybench_alloc_data(j, k);
  e[3] = l;
  var m:long = 2000L;
  var n:int = 8;
  var o:int = legalfunc_polybench_alloc_data(m, n);
  e[2] = o;
  var p:int = e[5];
  var q:int = e[4];
  var r:int = e[3];
  var s:int = e[2];
  init_array(p, q, r, s);
  var t:int = e[5];
  var u:int = e[4];
  var v:int = e[3];
  var w:int = e[2];
  kernel_trisolv(t, u, v, w);
  var x:int = e[7];
  var y:int = 42;
  var z:int = x;
  var aa:int = y;
  var ba:int = z > aa;
  var ca:int = 1;
  var da:int = ba & ca;
  if (eqz(da)) goto B_a;
  var ea:int_ptr = e[6];
  var fa:int = ea[0];
  var ga:int = 87;
  var ha:int = memory_base;
  var ia:int = ha + ga;
  var ja:int = strcmp(fa, ia);
  if (ja) goto B_a;
  var ka:int = e[5];
  var la:int = e[3];
  print_array(ka, la);
  label B_a:
  var ma:int = e[4];
  free(ma);
  var na:int = e[3];
  free(na);
  var oa:int = e[2];
  free(oa);
  var pa:int = 0;
  var qa:int = 32;
  var ra:int = e + qa;
  stack_pointer = ra;
  return pa;
}

function init_array(a:int, b:int, c:int, d:int) {
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
    var p:int = g[5];
    var q:int = g[3];
    var r:int = 3;
    var s:int = q << r;
    var t:double_ptr = p + s;
    var u:double = -999.0;
    t[0] = u;
    var v:int = g[3];
    var w:double = f64_convert_i32_s(v);
    var x:int = g[4];
    var y:int = g[3];
    var z:int = 3;
    var aa:int = y << z;
    var ba:double_ptr = x + aa;
    ba[0] = w;
    var ca:int = 0;
    g[2] = ca;
    loop L_d {
      var da:int = g[2];
      var ea:int = g[3];
      var fa:int = da;
      var ga:int = ea;
      var ha:int = fa <= ga;
      var ia:int = 1;
      var ja:int = ha & ia;
      if (eqz(ja)) goto B_c;
      var ka:int = g[3];
      var la:int = g[7];
      var ma:int = ka + la;
      var na:int = g[2];
      var oa:int = ma - na;
      var pa:int = 1;
      var qa:int = oa + pa;
      var ra:double = f64_convert_i32_s(qa);
      var sa:double = 2.0;
      var ta:double = ra * sa;
      var ua:int = g[7];
      var va:double = f64_convert_i32_s(ua);
      var wa:double = ta / va;
      var xa:int = g[6];
      var ya:int = g[3];
      var za:int = 16000;
      var ab:int = ya * za;
      var bb:int = xa + ab;
      var cb:int = g[2];
      var db:int = 3;
      var eb:int = cb << db;
      var fb:double_ptr = bb + eb;
      fb[0] = wa;
      var gb:int = g[2];
      var hb:int = 1;
      var ib:int = gb + hb;
      g[2] = ib;
      continue L_d;
    }
    unreachable;
    label B_c:
    var jb:int = g[3];
    var kb:int = 1;
    var lb:int = jb + kb;
    g[3] = lb;
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
  var m:int = 0;
  var n:int = memory_base;
  var o:int = n + m;
  e[8]:int = o;
  var p:int = 2;
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
    var ba:int_ptr = stderr;
    var ca:int = ba[0];
    var da:int = e[10]:int;
    var ea:int = e[9]:int;
    var fa:int = 3;
    var ga:int = ea << fa;
    var ha:double_ptr = da + ga;
    var ia:double = ha[0];
    e[0]:double = ia;
    var ja:int = 17;
    var ka:int = memory_base;
    var la:int = ka + ja;
    fprintf(ca, la, e);
    var ma:int = e[9]:int;
    var na:int = 20;
    var oa:int = ma % na;
    if (oa) goto B_c;
    var pa:int_ptr = stderr;
    var qa:int = pa[0];
    var ra:int = 86;
    var sa:int = memory_base;
    var ta:int = sa + ra;
    var ua:int = 0;
    fprintf(qa, ta, ua);
    label B_c:
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
  var ab:int = 0;
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

