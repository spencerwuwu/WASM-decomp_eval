import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00path\00%d \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARRA"
  "YS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_floyd_warshall(a:int, b:int) {
  var xb:int;
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  e[7] = a;
  e[6] = b;
  var f:int = 0;
  e[3] = f;
  loop L_b {
    var g:int = e[3];
    var h:int = e[7];
    var i:int = g;
    var j:int = h;
    var k:int = i < j;
    var l:int = 1;
    var m:int = k & l;
    if (eqz(m)) goto B_a;
    var n:int = 0;
    e[5] = n;
    loop L_d {
      var o:int = e[5];
      var p:int = e[7];
      var q:int = o;
      var r:int = p;
      var s:int = q < r;
      var t:int = 1;
      var u:int = s & t;
      if (eqz(u)) goto B_c;
      var v:int = 0;
      e[4] = v;
      loop L_f {
        var w:int = e[4];
        var x:int = e[7];
        var y:int = w;
        var z:int = x;
        var aa:int = y < z;
        var ba:int = 1;
        var ca:int = aa & ba;
        if (eqz(ca)) goto B_e;
        var da:int = e[6];
        var ea:int = e[5];
        var fa:int = 11200;
        var ga:int = ea * fa;
        var ha:int = da + ga;
        var ia:int = e[4];
        var ja:int = 2;
        var ka:int = ia << ja;
        var la:int_ptr = ha + ka;
        var ma:int = la[0];
        var na:int = e[6];
        var oa:int = e[5];
        var pa:int = 11200;
        var qa:int = oa * pa;
        var ra:int = na + qa;
        var sa:int = e[3];
        var ta:int = 2;
        var ua:int = sa << ta;
        var va:int_ptr = ra + ua;
        var wa:int = va[0];
        var xa:int = e[6];
        var ya:int = e[3];
        var za:int = 11200;
        var ab:int = ya * za;
        var bb:int = xa + ab;
        var cb:int = e[4];
        var db:int = 2;
        var eb:int = cb << db;
        var fb:int_ptr = bb + eb;
        var gb:int = fb[0];
        var hb:int = wa + gb;
        var ib:int = ma;
        var jb:int = hb;
        var kb:int = ib < jb;
        var lb:int = 1;
        var mb:int = kb & lb;
        if (eqz(mb)) goto B_h;
        var nb:int = e[6];
        var ob:int = e[5];
        var pb:int = 11200;
        var qb:int = ob * pb;
        var rb:int = nb + qb;
        var sb:int = e[4];
        var tb:int = 2;
        var ub:int = sb << tb;
        var vb:int_ptr = rb + ub;
        var wb:int = vb[0];
        xb = wb;
        goto B_g;
        label B_h:
        var yb:int = e[6];
        var zb:int = e[5];
        var ac:int = 11200;
        var bc:int = zb * ac;
        var cc:int = yb + bc;
        var dc:int = e[3];
        var ec:int = 2;
        var fc:int = dc << ec;
        var gc:int_ptr = cc + fc;
        var hc:int = gc[0];
        var ic:int = e[6];
        var jc:int = e[3];
        var kc:int = 11200;
        var lc:int = jc * kc;
        var mc:int = ic + lc;
        var nc:int = e[4];
        var oc:int = 2;
        var pc:int = nc << oc;
        var qc:int_ptr = mc + pc;
        var rc:int = qc[0];
        var sc:int = hc + rc;
        xb = sc;
        label B_g:
        var tc:int = xb;
        var uc:int = e[6];
        var vc:int = e[5];
        var wc:int = 11200;
        var xc:int = vc * wc;
        var yc:int = uc + xc;
        var zc:int = e[4];
        var ad:int = 2;
        var bd:int = zc << ad;
        var cd:int_ptr = yc + bd;
        cd[0] = tc;
        var dd:int = e[4];
        var ed:int = 1;
        var fd:int = dd + ed;
        e[4] = fd;
        continue L_f;
      }
      unreachable;
      label B_e:
      var gd:int = e[5];
      var hd:int = 1;
      var id:int = gd + hd;
      e[5] = id;
      continue L_d;
    }
    unreachable;
    label B_c:
    var jd:int = e[3];
    var kd:int = 1;
    var ld:int = jd + kd;
    e[3] = ld;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:{ a:int, b:int, c:int, d:int } = c - d;
  stack_pointer = e;
  e.d = a;
  e.c = b;
  var f:int = 2800;
  e.b = f;
  var g:long = 7840000L;
  var h:int = 4;
  var i:int = legalfunc_polybench_alloc_data(g, h);
  e.a = i;
  var j:int = e.b;
  var k:int = e.a;
  init_array(j, k);
  var l:int = e.b;
  var m:int = e.a;
  kernel_floyd_warshall(l, m);
  var n:int = e.d;
  var o:int = 42;
  var p:int = n;
  var q:int = o;
  var r:int = p > q;
  var s:int = 1;
  var t:int = r & s;
  if (eqz(t)) goto B_a;
  var u:int_ptr = e.c;
  var v:int = u[0];
  var w:int = 86;
  var x:int = memory_base;
  var y:int = x + w;
  var z:int = strcmp(v, y);
  if (z) goto B_a;
  var aa:int = e.b;
  var ba:int = e.a;
  print_array(aa, ba);
  label B_a:
  var ca:int = e.a;
  free(ca);
  var da:int = 0;
  var ea:int = 16;
  var fa:int = e + ea;
  stack_pointer = fa;
  return da;
}

function init_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 16;
  var e:{ a:int, b:int, c:int, d:int } = c - d;
  e.d = a;
  e.c = b;
  var f:int = 0;
  e.b = f;
  loop L_b {
    var g:int = e.b;
    var h:int = e.d;
    var i:int = g;
    var j:int = h;
    var k:int = i < j;
    var l:int = 1;
    var m:int = k & l;
    if (eqz(m)) goto B_a;
    var n:int = 0;
    e.a = n;
    loop L_d {
      var o:int = e.a;
      var p:int = e.d;
      var q:int = o;
      var r:int = p;
      var s:int = q < r;
      var t:int = 1;
      var u:int = s & t;
      if (eqz(u)) goto B_c;
      var v:int = e.b;
      var w:int = e.a;
      var x:int = v * w;
      var y:int = 7;
      var z:int = x % y;
      var aa:int = 1;
      var ba:int = z + aa;
      var ca:int = e.c;
      var da:int = e.b;
      var ea:int = 11200;
      var fa:int = da * ea;
      var ga:int = ca + fa;
      var ha:int = e.a;
      var ia:int = 2;
      var ja:int = ha << ia;
      var ka:int_ptr = ga + ja;
      ka[0] = ba;
      var la:int = e.b;
      var ma:int = e.a;
      var na:int = la + ma;
      var oa:int = 13;
      var pa:int = na % oa;
      if (eqz(pa)) goto B_f;
      var qa:int = e.b;
      var ra:int = e.a;
      var sa:int = qa + ra;
      var ta:int = 7;
      var ua:int = sa % ta;
      if (eqz(ua)) goto B_f;
      var va:int = e.b;
      var wa:int = e.a;
      var xa:int = va + wa;
      var ya:int = 11;
      var za:int = xa % ya;
      if (za) goto B_e;
      label B_f:
      var ab:int = e.c;
      var bb:int = e.b;
      var cb:int = 11200;
      var db:int = bb * cb;
      var eb:int = ab + db;
      var fb:int = e.a;
      var gb:int = 2;
      var hb:int = fb << gb;
      var ib:int_ptr = eb + hb;
      var jb:int = 999;
      ib[0] = jb;
      label B_e:
      var kb:int = e.a;
      var lb:int = 1;
      var mb:int = kb + lb;
      e.a = mb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var nb:int = e.b;
    var ob:int = 1;
    var pb:int = nb + ob;
    e.b = pb;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[15] = a;
  e[14] = b;
  var f:int_ptr = stderr;
  var g:int = f[0];
  var h:int = 41;
  var i:int = memory_base;
  var j:int = i + h;
  var k:int = 0;
  fprintf(g, j, k);
  var l:int = f[0];
  var m:int = 15;
  var n:int = memory_base;
  var o:int = n + m;
  e[8] = o;
  var p:int = 0;
  var q:int = n + p;
  var r:int = 32;
  var s:int = e + r;
  fprintf(l, q, s);
  var t:int = 0;
  e[13] = t;
  loop L_b {
    var u:int = e[13];
    var v:int = e[15];
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = 0;
    e[12] = ba;
    loop L_d {
      var ca:int = e[12];
      var da:int = e[15];
      var ea:int = ca;
      var fa:int = da;
      var ga:int = ea < fa;
      var ha:int = 1;
      var ia:int = ga & ha;
      if (eqz(ia)) goto B_c;
      var ja:int = e[13];
      var ka:int = e[15];
      var la:int = ja * ka;
      var ma:int = e[12];
      var na:int = la + ma;
      var oa:int = 20;
      var pa:int = na % oa;
      if (pa) goto B_e;
      var qa:int_ptr = stderr;
      var ra:int = qa[0];
      var sa:int = 85;
      var ta:int = memory_base;
      var ua:int = ta + sa;
      var va:int = 0;
      fprintf(ra, ua, va);
      label B_e:
      var wa:int_ptr = stderr;
      var xa:int = wa[0];
      var ya:int = e[14];
      var za:int = e[13];
      var ab:int = 11200;
      var bb:int = za * ab;
      var cb:int = ya + bb;
      var db:int = e[12];
      var eb:int = 2;
      var fb:int = db << eb;
      var gb:int_ptr = cb + fb;
      var hb:int = gb[0];
      e[0] = hb;
      var ib:int = 20;
      var jb:int = memory_base;
      var kb:int = jb + ib;
      fprintf(xa, kb, e);
      var lb:int = e[12];
      var mb:int = 1;
      var nb:int = lb + mb;
      e[12] = nb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ob:int = e[13];
    var pb:int = 1;
    var qb:int = ob + pb;
    e[13] = qb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var rb:int_ptr = stderr;
  var sb:int = rb[0];
  var tb:int = 15;
  var ub:int = memory_base;
  var vb:int = ub + tb;
  e[4] = vb;
  var wb:int = 24;
  var xb:int = ub + wb;
  var yb:int = 16;
  var zb:int = e + yb;
  fprintf(sb, xb, zb);
  var ac:int = rb[0];
  var bc:int = 64;
  var cc:int = memory_base;
  var dc:int = cc + bc;
  var ec:int = 0;
  fprintf(ac, dc, ec);
  var fc:int = 64;
  var gc:int = e + fc;
  stack_pointer = gc;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

