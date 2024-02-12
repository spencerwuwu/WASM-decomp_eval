import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00C\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_syr2k(a:int, b:int, c:double, d:double, e:int, f:int, g:int) {
  var h:int = stack_pointer;
  var i:int = 48;
  var j:{ a:int, b:int, c:int, d:int, e:int, f:int, g:double, h:double, i:int, j:int } = 
    h - i;
  j.j = a;
  j.i = b;
  j.h = c;
  j.g = d;
  j.f = e;
  j.e = f;
  j.d = g;
  var k:int = 0;
  j.c = k;
  loop L_b {
    var l:int = j.c;
    var m:int = j.j;
    var n:int = l;
    var o:int = m;
    var p:int = n < o;
    var q:int = 1;
    var r:int = p & q;
    if (eqz(r)) goto B_a;
    var s:int = 0;
    j.b = s;
    loop L_d {
      var t:int = j.b;
      var u:int = j.c;
      var v:int = t;
      var w:int = u;
      var x:int = v <= w;
      var y:int = 1;
      var z:int = x & y;
      if (eqz(z)) goto B_c;
      var aa:double = j.g;
      var ba:int = j.f;
      var ca:int = j.c;
      var da:int = 9600;
      var ea:int = ca * da;
      var fa:int = ba + ea;
      var ga:int = j.b;
      var ha:int = 3;
      var ia:int = ga << ha;
      var ja:double_ptr = fa + ia;
      var ka:double = ja[0];
      var la:double = ka * aa;
      ja[0] = la;
      var ma:int = j.b;
      var na:int = 1;
      var oa:int = ma + na;
      j.b = oa;
      continue L_d;
    }
    unreachable;
    label B_c:
    var pa:int = 0;
    j.a = pa;
    loop L_f {
      var qa:int = j.a;
      var ra:int = j.i;
      var sa:int = qa;
      var ta:int = ra;
      var ua:int = sa < ta;
      var va:int = 1;
      var wa:int = ua & va;
      if (eqz(wa)) goto B_e;
      var xa:int = 0;
      j.b = xa;
      loop L_h {
        var ya:int = j.b;
        var za:int = j.c;
        var ab:int = ya;
        var bb:int = za;
        var cb:int = ab <= bb;
        var db:int = 1;
        var eb:int = cb & db;
        if (eqz(eb)) goto B_g;
        var fb:int = j.e;
        var gb:int = j.b;
        var hb:int = 8000;
        var ib:int = gb * hb;
        var jb:int = fb + ib;
        var kb:int = j.a;
        var lb:int = 3;
        var mb:int = kb << lb;
        var nb:double_ptr = jb + mb;
        var ob:double = nb[0];
        var pb:double = j.h;
        var qb:double = ob * pb;
        var rb:int = j.d;
        var sb:int = j.c;
        var tb:int = 8000;
        var ub:int = sb * tb;
        var vb:int = rb + ub;
        var wb:int = j.a;
        var xb:int = 3;
        var yb:int = wb << xb;
        var zb:double_ptr = vb + yb;
        var ac:double = zb[0];
        var bc:int = j.d;
        var cc:int = j.b;
        var dc:int = 8000;
        var ec:int = cc * dc;
        var fc:int = bc + ec;
        var gc:int = j.a;
        var hc:int = 3;
        var ic:int = gc << hc;
        var jc:double_ptr = fc + ic;
        var kc:double = jc[0];
        var lc:double = j.h;
        var mc:double = kc * lc;
        var nc:int = j.e;
        var oc:int = j.c;
        var pc:int = 8000;
        var qc:int = oc * pc;
        var rc:int = nc + qc;
        var sc:int = j.a;
        var tc:int = 3;
        var uc:int = sc << tc;
        var vc:double_ptr = rc + uc;
        var wc:double = vc[0];
        var xc:double = mc * wc;
        var yc:double = qb * ac;
        var zc:double = yc + xc;
        var ad:int = j.f;
        var bd:int = j.c;
        var cd:int = 9600;
        var dd:int = bd * cd;
        var ed:int = ad + dd;
        var fd:int = j.b;
        var gd:int = 3;
        var hd:int = fd << gd;
        var id:double_ptr = ed + hd;
        var jd:double = id[0];
        var kd:double = jd + zc;
        id[0] = kd;
        var ld:int = j.b;
        var md:int = 1;
        var nd:int = ld + md;
        j.b = nd;
        continue L_h;
      }
      unreachable;
      label B_g:
      var od:int = j.a;
      var pd:int = 1;
      var qd:int = od + pd;
      j.a = qd;
      continue L_f;
    }
    unreachable;
    label B_e:
    var rd:int = j.c;
    var sd:int = 1;
    var td:int = rd + sd;
    j.c = td;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int = c - d;
  stack_pointer = e;
  e[11]:int = a;
  e[10]:int = b;
  var f:int = 1200;
  e[9]:int = f;
  var g:int = 1000;
  e[8]:int = g;
  var h:long = 1440000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[3]:int = j;
  var k:long = 1200000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[2]:int = m;
  var n:long = 1200000L;
  var o:int = 8;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e[1]:int = p;
  var q:int = e[9]:int;
  var r:int = e[8]:int;
  var s:int = e[3]:int;
  var t:int = e[2]:int;
  var u:int = e[1]:int;
  var v:int = 24;
  var w:int = e + v;
  var x:int = w;
  var y:int = 16;
  var z:int = e + y;
  var aa:int = z;
  init_array(q, r, x, aa, s, t, u);
  var ba:int = e[9]:int;
  var ca:int = e[8]:int;
  var da:double = e[3]:double;
  var ea:double = e[2]:double;
  var fa:int = e[3]:int;
  var ga:int = e[2]:int;
  var ha:int = e[1]:int;
  kernel_syr2k(ba, ca, da, ea, fa, ga, ha);
  var ia:int = e[11]:int;
  var ja:int = 42;
  var ka:int = ia;
  var la:int = ja;
  var ma:int = ka > la;
  var na:int = 1;
  var oa:int = ma & na;
  if (eqz(oa)) goto B_a;
  var pa:int_ptr = e[10]:int;
  var qa:int = pa[0];
  var ra:int = 87;
  var sa:int = memory_base;
  var ta:int = sa + ra;
  var ua:int = strcmp(qa, ta);
  if (ua) goto B_a;
  var va:int = e[9]:int;
  var wa:int = e[3]:int;
  print_array(va, wa);
  label B_a:
  var xa:int = e[3]:int;
  free(xa);
  var ya:int = e[2]:int;
  free(ya);
  var za:int = e[1]:int;
  free(za);
  var ab:int = 0;
  var bb:int = 48;
  var cb:int = e + bb;
  stack_pointer = cb;
  return ab;
}

function init_array(a:int, b:int, c:int, d:int, e:int, f:int, g:int) {
  var h:int = stack_pointer;
  var i:int = 48;
  var j:int_ptr = h - i;
  j[11] = a;
  j[10] = b;
  j[9] = c;
  j[8] = d;
  j[7] = e;
  j[6] = f;
  j[5] = g;
  var k:double_ptr = j[9];
  var l:double = 1.5;
  k[0] = l;
  var m:double_ptr = j[8];
  var n:double = 1.2;
  m[0] = n;
  var o:int = 0;
  j[4] = o;
  loop L_b {
    var p:int = j[4];
    var q:int = j[11];
    var r:int = p;
    var s:int = q;
    var t:int = r < s;
    var u:int = 1;
    var v:int = t & u;
    if (eqz(v)) goto B_a;
    var w:int = 0;
    j[3] = w;
    loop L_d {
      var x:int = j[3];
      var y:int = j[10];
      var z:int = x;
      var aa:int = y;
      var ba:int = z < aa;
      var ca:int = 1;
      var da:int = ba & ca;
      if (eqz(da)) goto B_c;
      var ea:int = j[4];
      var fa:int = j[3];
      var ga:int = ea * fa;
      var ha:int = 1;
      var ia:int = ga + ha;
      var ja:int = j[11];
      var ka:int = ia % ja;
      var la:double = f64_convert_i32_s(ka);
      var ma:int = j[11];
      var na:double = f64_convert_i32_s(ma);
      var oa:double = la / na;
      var pa:int = j[6];
      var qa:int = j[4];
      var ra:int = 8000;
      var sa:int = qa * ra;
      var ta:int = pa + sa;
      var ua:int = j[3];
      var va:int = 3;
      var wa:int = ua << va;
      var xa:double_ptr = ta + wa;
      xa[0] = oa;
      var ya:int = j[4];
      var za:int = j[3];
      var ab:int = ya * za;
      var bb:int = 2;
      var cb:int = ab + bb;
      var db:int = j[10];
      var eb:int = cb % db;
      var fb:double = f64_convert_i32_s(eb);
      var gb:int = j[10];
      var hb:double = f64_convert_i32_s(gb);
      var ib:double = fb / hb;
      var jb:int = j[5];
      var kb:int = j[4];
      var lb:int = 8000;
      var mb:int = kb * lb;
      var nb:int = jb + mb;
      var ob:int = j[3];
      var pb:int = 3;
      var qb:int = ob << pb;
      var rb:double_ptr = nb + qb;
      rb[0] = ib;
      var sb:int = j[3];
      var tb:int = 1;
      var ub:int = sb + tb;
      j[3] = ub;
      continue L_d;
    }
    unreachable;
    label B_c:
    var vb:int = j[4];
    var wb:int = 1;
    var xb:int = vb + wb;
    j[4] = xb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var yb:int = 0;
  j[4] = yb;
  loop L_f {
    var zb:int = j[4];
    var ac:int = j[11];
    var bc:int = zb;
    var cc:int = ac;
    var dc:int = bc < cc;
    var ec:int = 1;
    var fc:int = dc & ec;
    if (eqz(fc)) goto B_e;
    var gc:int = 0;
    j[3] = gc;
    loop L_h {
      var hc:int = j[3];
      var ic:int = j[11];
      var jc:int = hc;
      var kc:int = ic;
      var lc:int = jc < kc;
      var mc:int = 1;
      var nc:int = lc & mc;
      if (eqz(nc)) goto B_g;
      var oc:int = j[4];
      var pc:int = j[3];
      var qc:int = oc * pc;
      var rc:int = 3;
      var sc:int = qc + rc;
      var tc:int = j[11];
      var uc:int = sc % tc;
      var vc:double = f64_convert_i32_s(uc);
      var wc:int = j[10];
      var xc:double = f64_convert_i32_s(wc);
      var yc:double = vc / xc;
      var zc:int = j[7];
      var ad:int = j[4];
      var bd:int = 9600;
      var cd:int = ad * bd;
      var dd:int = zc + cd;
      var ed:int = j[3];
      var fd:int = 3;
      var gd:int = ed << fd;
      var hd:double_ptr = dd + gd;
      hd[0] = yc;
      var id:int = j[3];
      var jd:int = 1;
      var kd:int = id + jd;
      j[3] = kd;
      continue L_h;
    }
    unreachable;
    label B_g:
    var ld:int = j[4];
    var md:int = 1;
    var nd:int = ld + md;
    j[4] = nd;
    continue L_f;
  }
  unreachable;
  label B_e:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int = c - d;
  stack_pointer = e;
  e[15]:int = a;
  e[14]:int = b;
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
  e[13]:int = t;
  loop L_b {
    var u:int = e[13]:int;
    var v:int = e[15]:int;
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = 0;
    e[12]:int = ba;
    loop L_d {
      var ca:int = e[12]:int;
      var da:int = e[15]:int;
      var ea:int = ca;
      var fa:int = da;
      var ga:int = ea < fa;
      var ha:int = 1;
      var ia:int = ga & ha;
      if (eqz(ia)) goto B_c;
      var ja:int = e[13]:int;
      var ka:int = e[15]:int;
      var la:int = ja * ka;
      var ma:int = e[12]:int;
      var na:int = la + ma;
      var oa:int = 20;
      var pa:int = na % oa;
      if (pa) goto B_e;
      var qa:int_ptr = stderr;
      var ra:int = qa[0];
      var sa:int = 86;
      var ta:int = memory_base;
      var ua:int = ta + sa;
      var va:int = 0;
      fprintf(ra, ua, va);
      label B_e:
      var wa:int_ptr = stderr;
      var xa:int = wa[0];
      var ya:int = e[14]:int;
      var za:int = e[13]:int;
      var ab:int = 9600;
      var bb:int = za * ab;
      var cb:int = ya + bb;
      var db:int = e[12]:int;
      var eb:int = 3;
      var fb:int = db << eb;
      var gb:double_ptr = cb + fb;
      var hb:double = gb[0];
      e[0]:double = hb;
      var ib:int = 17;
      var jb:int = memory_base;
      var kb:int = jb + ib;
      fprintf(xa, kb, e);
      var lb:int = e[12]:int;
      var mb:int = 1;
      var nb:int = lb + mb;
      e[12]:int = nb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ob:int = e[13]:int;
    var pb:int = 1;
    var qb:int = ob + pb;
    e[13]:int = qb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var rb:int_ptr = stderr;
  var sb:int = rb[0];
  var tb:int = 15;
  var ub:int = memory_base;
  var vb:int = ub + tb;
  e[4]:int = vb;
  var wb:int = 25;
  var xb:int = ub + wb;
  var yb:int = 16;
  var zb:int = e + yb;
  fprintf(sb, xb, zb);
  var ac:int = rb[0];
  var bc:int = 65;
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

