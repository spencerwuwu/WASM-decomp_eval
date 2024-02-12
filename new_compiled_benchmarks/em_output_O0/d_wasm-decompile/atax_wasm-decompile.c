import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "y\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fprintf(a:int, b:int, c:int):int;

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function init_array(a:int, b:int, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 32;
  var g:{ a:double, b:int, c:int, d:int, e:int, f:int, g:int } = e - f;
  g.g = a;
  g.f = b;
  g.e = c;
  g.d = d;
  var h:int = g.f;
  var i:double = f64_convert_i32_s(h);
  g.a = i;
  var j:int = 0;
  g.c = j;
  loop L_b {
    var k:int = g.c;
    var l:int = g.f;
    var m:int = k;
    var n:int = l;
    var o:int = m < n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int = g.c;
    var s:double = f64_convert_i32_s(r);
    var t:double = g.a;
    var u:double = s / t;
    var v:double = 1.0;
    var w:double = v + u;
    var x:int = g.d;
    var y:int = g.c;
    var z:int = 3;
    var aa:int = y << z;
    var ba:double_ptr = x + aa;
    ba[0] = w;
    var ca:int = g.c;
    var da:int = 1;
    var ea:int = ca + da;
    g.c = ea;
    continue L_b;
  }
  unreachable;
  label B_a:
  var fa:int = 0;
  g.c = fa;
  loop L_d {
    var ga:int = g.c;
    var ha:int = g.g;
    var ia:int = ga;
    var ja:int = ha;
    var ka:int = ia < ja;
    var la:int = 1;
    var ma:int = ka & la;
    if (eqz(ma)) goto B_c;
    var na:int = 0;
    g.b = na;
    loop L_f {
      var oa:int = g.b;
      var pa:int = g.f;
      var qa:int = oa;
      var ra:int = pa;
      var sa:int = qa < ra;
      var ta:int = 1;
      var ua:int = sa & ta;
      if (eqz(ua)) goto B_e;
      var va:int = g.c;
      var wa:int = g.b;
      var xa:int = va + wa;
      var ya:int = g.f;
      var za:int = xa % ya;
      var ab:double = f64_convert_i32_s(za);
      var bb:int = g.g;
      var cb:int = 5;
      var db:int = bb * cb;
      var eb:double = f64_convert_i32_s(db);
      var fb:double = ab / eb;
      var gb:int = g.e;
      var hb:int = g.c;
      var ib:int = 16800;
      var jb:int = hb * ib;
      var kb:int = gb + jb;
      var lb:int = g.b;
      var mb:int = 3;
      var nb:int = lb << mb;
      var ob:double_ptr = kb + nb;
      ob[0] = fb;
      var pb:int = g.b;
      var qb:int = 1;
      var rb:int = pb + qb;
      g.b = rb;
      continue L_f;
    }
    unreachable;
    label B_e:
    var sb:int = g.c;
    var tb:int = 1;
    var ub:int = sb + tb;
    g.c = ub;
    continue L_d;
  }
  unreachable;
  label B_c:
}

export function print_array(a:int, b:int) {
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

export function kernel_atax(a:int, b:int, c:int, d:int, e:int, f:int) {
  var g:int = stack_pointer;
  var h:int = 32;
  var i:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    g - h;
  i.h = a;
  i.g = b;
  i.f = c;
  i.e = d;
  i.d = e;
  i.c = f;
  var j:int = 0;
  i.b = j;
  loop L_b {
    var k:int = i.b;
    var l:int = i.g;
    var m:int = k;
    var n:int = l;
    var o:int = m < n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int = i.d;
    var s:int = i.b;
    var t:int = 3;
    var u:int = s << t;
    var v:double_ptr = r + u;
    var w:int = 0;
    var x:double = f64_convert_i32_s(w);
    v[0] = x;
    var y:int = i.b;
    var z:int = 1;
    var aa:int = y + z;
    i.b = aa;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ba:int = 0;
  i.b = ba;
  loop L_d {
    var ca:int = i.b;
    var da:int = i.h;
    var ea:int = ca;
    var fa:int = da;
    var ga:int = ea < fa;
    var ha:int = 1;
    var ia:int = ga & ha;
    if (eqz(ia)) goto B_c;
    var ja:int = i.c;
    var ka:int = i.b;
    var la:int = 3;
    var ma:int = ka << la;
    var na:double_ptr = ja + ma;
    var oa:int = 0;
    var pa:double = f64_convert_i32_s(oa);
    na[0] = pa;
    var qa:int = 0;
    i.a = qa;
    loop L_f {
      var ra:int = i.a;
      var sa:int = i.g;
      var ta:int = ra;
      var ua:int = sa;
      var va:int = ta < ua;
      var wa:int = 1;
      var xa:int = va & wa;
      if (eqz(xa)) goto B_e;
      var ya:int = i.c;
      var za:int = i.b;
      var ab:int = 3;
      var bb:int = za << ab;
      var cb:double_ptr = ya + bb;
      var db:double = cb[0];
      var eb:int = i.f;
      var fb:int = i.b;
      var gb:int = 16800;
      var hb:int = fb * gb;
      var ib:int = eb + hb;
      var jb:int = i.a;
      var kb:int = 3;
      var lb:int = jb << kb;
      var mb:double_ptr = ib + lb;
      var nb:double = mb[0];
      var ob:int = i.e;
      var pb:int = i.a;
      var qb:int = 3;
      var rb:int = pb << qb;
      var sb:double_ptr = ob + rb;
      var tb:double = sb[0];
      var ub:double = nb * tb;
      var vb:double = ub + db;
      var wb:int = i.c;
      var xb:int = i.b;
      var yb:int = 3;
      var zb:int = xb << yb;
      var ac:double_ptr = wb + zb;
      ac[0] = vb;
      var bc:int = i.a;
      var cc:int = 1;
      var dc:int = bc + cc;
      i.a = dc;
      continue L_f;
    }
    unreachable;
    label B_e:
    var ec:int = 0;
    i.a = ec;
    loop L_h {
      var fc:int = i.a;
      var gc:int = i.g;
      var hc:int = fc;
      var ic:int = gc;
      var jc:int = hc < ic;
      var kc:int = 1;
      var lc:int = jc & kc;
      if (eqz(lc)) goto B_g;
      var mc:int = i.d;
      var nc:int = i.a;
      var oc:int = 3;
      var pc:int = nc << oc;
      var qc:double_ptr = mc + pc;
      var rc:double = qc[0];
      var sc:int = i.f;
      var tc:int = i.b;
      var uc:int = 16800;
      var vc:int = tc * uc;
      var wc:int = sc + vc;
      var xc:int = i.a;
      var yc:int = 3;
      var zc:int = xc << yc;
      var ad:double_ptr = wc + zc;
      var bd:double = ad[0];
      var cd:int = i.c;
      var dd:int = i.b;
      var ed:int = 3;
      var fd:int = dd << ed;
      var gd:double_ptr = cd + fd;
      var hd:double = gd[0];
      var id:double = bd * hd;
      var jd:double = id + rc;
      var kd:int = i.d;
      var ld:int = i.a;
      var md:int = 3;
      var nd:int = ld << md;
      var od:double_ptr = kd + nd;
      od[0] = jd;
      var pd:int = i.a;
      var qd:int = 1;
      var rd:int = pd + qd;
      i.a = rd;
      continue L_h;
    }
    unreachable;
    label B_g:
    var sd:int = i.b;
    var td:int = 1;
    var ud:int = sd + td;
    i.b = ud;
    continue L_d;
  }
  unreachable;
  label B_c:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    c - d;
  stack_pointer = e;
  e.h = a;
  e.g = b;
  var f:int = 1900;
  e.f = f;
  var g:int = 2100;
  e.e = g;
  var h:long = 3990000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e.d = j;
  var k:long = 2100L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e.c = m;
  var n:long = 2100L;
  var o:int = 8;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e.b = p;
  var q:long = 1900L;
  var r:int = 8;
  var s:int = legalfunc_polybench_alloc_data(q, r);
  e.a = s;
  var t:int = e.f;
  var u:int = e.e;
  var v:int = e.d;
  var w:int = e.c;
  init_array(t, u, v, w);
  var x:int = e.f;
  var y:int = e.e;
  var z:int = e.d;
  var aa:int = e.c;
  var ba:int = e.b;
  var ca:int = e.a;
  kernel_atax(x, y, z, aa, ba, ca);
  var da:int = e.h;
  var ea:int = 42;
  var fa:int = da;
  var ga:int = ea;
  var ha:int = fa > ga;
  var ia:int = 1;
  var ja:int = ha & ia;
  if (eqz(ja)) goto B_a;
  var ka:int_ptr = e.g;
  var la:int = ka[0];
  var ma:int = 87;
  var na:int = memory_base;
  var oa:int = na + ma;
  var pa:int = strcmp(la, oa);
  if (pa) goto B_a;
  var qa:int = e.e;
  var ra:int = e.b;
  print_array(qa, ra);
  label B_a:
  var sa:int = e.d;
  free(sa);
  var ta:int = e.c;
  free(ta);
  var ua:int = e.b;
  free(ua);
  var va:int = e.a;
  free(va);
  var wa:int = 0;
  var xa:int = 32;
  var ya:int = e + xa;
  stack_pointer = ya;
  return wa;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

