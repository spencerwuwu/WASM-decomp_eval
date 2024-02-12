import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00D\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fprintf(a:int, b:int, c:int):int;

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function init_array(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int) {
  var k:int = stack_pointer;
  var l:int = 48;
  var m:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int } = 
    k - l;
  m.l = a;
  m.k = b;
  m.j = c;
  m.i = d;
  m.h = e;
  m.g = f;
  m.f = g;
  m.e = h;
  m.d = i;
  m.c = j;
  var n:double_ptr = m.h;
  var o:double = 1.5;
  n[0] = o;
  var p:double_ptr = m.g;
  var q:double = 1.2;
  p[0] = q;
  var r:int = 0;
  m.b = r;
  loop L_b {
    var s:int = m.b;
    var t:int = m.l;
    var u:int = s;
    var v:int = t;
    var w:int = u < v;
    var x:int = 1;
    var y:int = w & x;
    if (eqz(y)) goto B_a;
    var z:int = 0;
    m.a = z;
    loop L_d {
      var aa:int = m.a;
      var ba:int = m.j;
      var ca:int = aa;
      var da:int = ba;
      var ea:int = ca < da;
      var fa:int = 1;
      var ga:int = ea & fa;
      if (eqz(ga)) goto B_c;
      var ha:int = m.b;
      var ia:int = m.a;
      var ja:int = ha * ia;
      var ka:int = 1;
      var la:int = ja + ka;
      var ma:int = m.l;
      var na:int = la % ma;
      var oa:double = f64_convert_i32_s(na);
      var pa:int = m.l;
      var qa:double = f64_convert_i32_s(pa);
      var ra:double = oa / qa;
      var sa:int = m.f;
      var ta:int = m.b;
      var ua:int = 8800;
      var va:int = ta * ua;
      var wa:int = sa + va;
      var xa:int = m.a;
      var ya:int = 3;
      var za:int = xa << ya;
      var ab:double_ptr = wa + za;
      ab[0] = ra;
      var bb:int = m.a;
      var cb:int = 1;
      var db:int = bb + cb;
      m.a = db;
      continue L_d;
    }
    unreachable;
    label B_c:
    var eb:int = m.b;
    var fb:int = 1;
    var gb:int = eb + fb;
    m.b = gb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var hb:int = 0;
  m.b = hb;
  loop L_f {
    var ib:int = m.b;
    var jb:int = m.j;
    var kb:int = ib;
    var lb:int = jb;
    var mb:int = kb < lb;
    var nb:int = 1;
    var ob:int = mb & nb;
    if (eqz(ob)) goto B_e;
    var pb:int = 0;
    m.a = pb;
    loop L_h {
      var qb:int = m.a;
      var rb:int = m.k;
      var sb:int = qb;
      var tb:int = rb;
      var ub:int = sb < tb;
      var vb:int = 1;
      var wb:int = ub & vb;
      if (eqz(wb)) goto B_g;
      var xb:int = m.b;
      var yb:int = m.a;
      var zb:int = 1;
      var ac:int = yb + zb;
      var bc:int = xb * ac;
      var cc:int = m.k;
      var dc:int = bc % cc;
      var ec:double = f64_convert_i32_s(dc);
      var fc:int = m.k;
      var gc:double = f64_convert_i32_s(fc);
      var hc:double = ec / gc;
      var ic:int = m.e;
      var jc:int = m.b;
      var kc:int = 7200;
      var lc:int = jc * kc;
      var mc:int = ic + lc;
      var nc:int = m.a;
      var oc:int = 3;
      var pc:int = nc << oc;
      var qc:double_ptr = mc + pc;
      qc[0] = hc;
      var rc:int = m.a;
      var sc:int = 1;
      var tc:int = rc + sc;
      m.a = tc;
      continue L_h;
    }
    unreachable;
    label B_g:
    var uc:int = m.b;
    var vc:int = 1;
    var wc:int = uc + vc;
    m.b = wc;
    continue L_f;
  }
  unreachable;
  label B_e:
  var xc:int = 0;
  m.b = xc;
  loop L_j {
    var yc:int = m.b;
    var zc:int = m.k;
    var ad:int = yc;
    var bd:int = zc;
    var cd:int = ad < bd;
    var dd:int = 1;
    var ed:int = cd & dd;
    if (eqz(ed)) goto B_i;
    var fd:int = 0;
    m.a = fd;
    loop L_l {
      var gd:int = m.a;
      var hd:int = m.i;
      var id:int = gd;
      var jd:int = hd;
      var kd:int = id < jd;
      var ld:int = 1;
      var md:int = kd & ld;
      if (eqz(md)) goto B_k;
      var nd:int = m.b;
      var od:int = m.a;
      var pd:int = 3;
      var qd:int = od + pd;
      var rd:int = nd * qd;
      var sd:int = 1;
      var td:int = rd + sd;
      var ud:int = m.i;
      var vd:int = td % ud;
      var wd:double = f64_convert_i32_s(vd);
      var xd:int = m.i;
      var yd:double = f64_convert_i32_s(xd);
      var zd:double = wd / yd;
      var ae:int = m.d;
      var be:int = m.b;
      var ce:int = 9600;
      var de:int = be * ce;
      var ee:int = ae + de;
      var fe:int = m.a;
      var ge:int = 3;
      var he:int = fe << ge;
      var ie:double_ptr = ee + he;
      ie[0] = zd;
      var je:int = m.a;
      var ke:int = 1;
      var le:int = je + ke;
      m.a = le;
      continue L_l;
    }
    unreachable;
    label B_k:
    var me:int = m.b;
    var ne:int = 1;
    var oe:int = me + ne;
    m.b = oe;
    continue L_j;
  }
  unreachable;
  label B_i:
  var pe:int = 0;
  m.b = pe;
  loop L_n {
    var qe:int = m.b;
    var re:int = m.l;
    var se:int = qe;
    var te:int = re;
    var ue:int = se < te;
    var ve:int = 1;
    var we:int = ue & ve;
    if (eqz(we)) goto B_m;
    var xe:int = 0;
    m.a = xe;
    loop L_p {
      var ye:int = m.a;
      var ze:int = m.i;
      var af:int = ye;
      var bf:int = ze;
      var cf:int = af < bf;
      var df:int = 1;
      var ef:int = cf & df;
      if (eqz(ef)) goto B_o;
      var ff:int = m.b;
      var gf:int = m.a;
      var hf:int = 2;
      var if:int = gf + hf;
      var jf:int = ff * if;
      var kf:int = m.j;
      var lf:int = jf % kf;
      var mf:double = f64_convert_i32_s(lf);
      var nf:int = m.j;
      var of:double = f64_convert_i32_s(nf);
      var pf:double = mf / of;
      var qf:int = m.c;
      var rf:int = m.b;
      var sf:int = 9600;
      var tf:int = rf * sf;
      var uf:int = qf + tf;
      var vf:int = m.a;
      var wf:int = 3;
      var xf:int = vf << wf;
      var yf:double_ptr = uf + xf;
      yf[0] = pf;
      var zf:int = m.a;
      var ag:int = 1;
      var bg:int = zf + ag;
      m.a = bg;
      continue L_p;
    }
    unreachable;
    label B_o:
    var cg:int = m.b;
    var dg:int = 1;
    var eg:int = cg + dg;
    m.b = eg;
    continue L_n;
  }
  unreachable;
  label B_m:
}

export function print_array(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 64;
  var f:int = d - e;
  stack_pointer = f;
  f[15]:int = a;
  f[14]:int = b;
  f[13]:int = c;
  var g:int_ptr = stderr;
  var h:int = g[0];
  var i:int = 42;
  var j:int = memory_base;
  var k:int = j + i;
  var l:int = 0;
  fprintf(h, k, l);
  var m:int = g[0];
  var n:int = 15;
  var o:int = memory_base;
  var p:int = o + n;
  f[8]:int = p;
  var q:int = 0;
  var r:int = o + q;
  var s:int = 32;
  var t:int = f + s;
  fprintf(m, r, t);
  var u:int = 0;
  f[12]:int = u;
  loop L_b {
    var v:int = f[12]:int;
    var w:int = f[15]:int;
    var x:int = v;
    var y:int = w;
    var z:int = x < y;
    var aa:int = 1;
    var ba:int = z & aa;
    if (eqz(ba)) goto B_a;
    var ca:int = 0;
    f[11]:int = ca;
    loop L_d {
      var da:int = f[11]:int;
      var ea:int = f[14]:int;
      var fa:int = da;
      var ga:int = ea;
      var ha:int = fa < ga;
      var ia:int = 1;
      var ja:int = ha & ia;
      if (eqz(ja)) goto B_c;
      var ka:int = f[12]:int;
      var la:int = f[15]:int;
      var ma:int = ka * la;
      var na:int = f[11]:int;
      var oa:int = ma + na;
      var pa:int = 20;
      var qa:int = oa % pa;
      if (qa) goto B_e;
      var ra:int_ptr = stderr;
      var sa:int = ra[0];
      var ta:int = 86;
      var ua:int = memory_base;
      var va:int = ua + ta;
      var wa:int = 0;
      fprintf(sa, va, wa);
      label B_e:
      var xa:int_ptr = stderr;
      var ya:int = xa[0];
      var za:int = f[13]:int;
      var ab:int = f[12]:int;
      var bb:int = 9600;
      var cb:int = ab * bb;
      var db:int = za + cb;
      var eb:int = f[11]:int;
      var fb:int = 3;
      var gb:int = eb << fb;
      var hb:double_ptr = db + gb;
      var ib:double = hb[0];
      f[0]:double = ib;
      var jb:int = 17;
      var kb:int = memory_base;
      var lb:int = kb + jb;
      fprintf(ya, lb, f);
      var mb:int = f[11]:int;
      var nb:int = 1;
      var ob:int = mb + nb;
      f[11]:int = ob;
      continue L_d;
    }
    unreachable;
    label B_c:
    var pb:int = f[12]:int;
    var qb:int = 1;
    var rb:int = pb + qb;
    f[12]:int = rb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var sb:int_ptr = stderr;
  var tb:int = sb[0];
  var ub:int = 15;
  var vb:int = memory_base;
  var wb:int = vb + ub;
  f[4]:int = wb;
  var xb:int = 25;
  var yb:int = vb + xb;
  var zb:int = 16;
  var ac:int = f + zb;
  fprintf(tb, yb, ac);
  var bc:int = sb[0];
  var cc:int = 65;
  var dc:int = memory_base;
  var ec:int = dc + cc;
  var fc:int = 0;
  fprintf(bc, ec, fc);
  var gc:int = 64;
  var hc:int = f + gc;
  stack_pointer = hc;
}

export function kernel_2mm(a:int, b:int, c:int, d:int, e:double, f:double, g:int, h:int, i:int, j:int, k:int) {
  var l:int = stack_pointer;
  var m:int = 64;
  var n:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:double, j:double, k:int, l:int, m:int, n:int } = 
    l - m;
  n.n = a;
  n.m = b;
  n.l = c;
  n.k = d;
  n.j = e;
  n.i = f;
  n.h = g;
  n.g = h;
  n.f = i;
  n.e = j;
  n.d = k;
  var o:int = 0;
  n.c = o;
  loop L_b {
    var p:int = n.c;
    var q:int = n.n;
    var r:int = p;
    var s:int = q;
    var t:int = r < s;
    var u:int = 1;
    var v:int = t & u;
    if (eqz(v)) goto B_a;
    var w:int = 0;
    n.b = w;
    loop L_d {
      var x:int = n.b;
      var y:int = n.m;
      var z:int = x;
      var aa:int = y;
      var ba:int = z < aa;
      var ca:int = 1;
      var da:int = ba & ca;
      if (eqz(da)) goto B_c;
      var ea:int = n.h;
      var fa:int = n.c;
      var ga:int = 7200;
      var ha:int = fa * ga;
      var ia:int = ea + ha;
      var ja:int = n.b;
      var ka:int = 3;
      var la:int = ja << ka;
      var ma:double_ptr = ia + la;
      var na:int = 0;
      var oa:double = f64_convert_i32_s(na);
      ma[0] = oa;
      var pa:int = 0;
      n.a = pa;
      loop L_f {
        var qa:int = n.a;
        var ra:int = n.l;
        var sa:int = qa;
        var ta:int = ra;
        var ua:int = sa < ta;
        var va:int = 1;
        var wa:int = ua & va;
        if (eqz(wa)) goto B_e;
        var xa:double = n.j;
        var ya:int = n.g;
        var za:int = n.c;
        var ab:int = 8800;
        var bb:int = za * ab;
        var cb:int = ya + bb;
        var db:int = n.a;
        var eb:int = 3;
        var fb:int = db << eb;
        var gb:double_ptr = cb + fb;
        var hb:double = gb[0];
        var ib:double = xa * hb;
        var jb:int = n.f;
        var kb:int = n.a;
        var lb:int = 7200;
        var mb:int = kb * lb;
        var nb:int = jb + mb;
        var ob:int = n.b;
        var pb:int = 3;
        var qb:int = ob << pb;
        var rb:double_ptr = nb + qb;
        var sb:double = rb[0];
        var tb:int = n.h;
        var ub:int = n.c;
        var vb:int = 7200;
        var wb:int = ub * vb;
        var xb:int = tb + wb;
        var yb:int = n.b;
        var zb:int = 3;
        var ac:int = yb << zb;
        var bc:double_ptr = xb + ac;
        var cc:double = bc[0];
        var dc:double = ib * sb;
        var ec:double = dc + cc;
        bc[0] = ec;
        var fc:int = n.a;
        var gc:int = 1;
        var hc:int = fc + gc;
        n.a = hc;
        continue L_f;
      }
      unreachable;
      label B_e:
      var ic:int = n.b;
      var jc:int = 1;
      var kc:int = ic + jc;
      n.b = kc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var lc:int = n.c;
    var mc:int = 1;
    var nc:int = lc + mc;
    n.c = nc;
    continue L_b;
  }
  unreachable;
  label B_a:
  var oc:int = 0;
  n.c = oc;
  loop L_h {
    var pc:int = n.c;
    var qc:int = n.n;
    var rc:int = pc;
    var sc:int = qc;
    var tc:int = rc < sc;
    var uc:int = 1;
    var vc:int = tc & uc;
    if (eqz(vc)) goto B_g;
    var wc:int = 0;
    n.b = wc;
    loop L_j {
      var xc:int = n.b;
      var yc:int = n.k;
      var zc:int = xc;
      var ad:int = yc;
      var bd:int = zc < ad;
      var cd:int = 1;
      var dd:int = bd & cd;
      if (eqz(dd)) goto B_i;
      var ed:double = n.i;
      var fd:int = n.d;
      var gd:int = n.c;
      var hd:int = 9600;
      var id:int = gd * hd;
      var jd:int = fd + id;
      var kd:int = n.b;
      var ld:int = 3;
      var md:int = kd << ld;
      var nd:double_ptr = jd + md;
      var od:double = nd[0];
      var pd:double = od * ed;
      nd[0] = pd;
      var qd:int = 0;
      n.a = qd;
      loop L_l {
        var rd:int = n.a;
        var sd:int = n.m;
        var td:int = rd;
        var ud:int = sd;
        var vd:int = td < ud;
        var wd:int = 1;
        var xd:int = vd & wd;
        if (eqz(xd)) goto B_k;
        var yd:int = n.h;
        var zd:int = n.c;
        var ae:int = 7200;
        var be:int = zd * ae;
        var ce:int = yd + be;
        var de:int = n.a;
        var ee:int = 3;
        var fe:int = de << ee;
        var ge:double_ptr = ce + fe;
        var he:double = ge[0];
        var ie:int = n.e;
        var je:int = n.a;
        var ke:int = 9600;
        var le:int = je * ke;
        var me:int = ie + le;
        var ne:int = n.b;
        var oe:int = 3;
        var pe:int = ne << oe;
        var qe:double_ptr = me + pe;
        var re:double = qe[0];
        var se:int = n.d;
        var te:int = n.c;
        var ue:int = 9600;
        var ve:int = te * ue;
        var we:int = se + ve;
        var xe:int = n.b;
        var ye:int = 3;
        var ze:int = xe << ye;
        var af:double_ptr = we + ze;
        var bf:double = af[0];
        var cf:double = he * re;
        var df:double = cf + bf;
        af[0] = df;
        var ef:int = n.a;
        var ff:int = 1;
        var gf:int = ef + ff;
        n.a = gf;
        continue L_l;
      }
      unreachable;
      label B_k:
      var hf:int = n.b;
      var if:int = 1;
      var jf:int = hf + if;
      n.b = jf;
      continue L_j;
    }
    unreachable;
    label B_i:
    var kf:int = n.c;
    var lf:int = 1;
    var mf:int = kf + lf;
    n.c = mf;
    continue L_h;
  }
  unreachable;
  label B_g:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int = c - d;
  stack_pointer = e;
  e[15]:int = a;
  e[14]:int = b;
  var f:int = 800;
  e[13]:int = f;
  var g:int = 900;
  e[12]:int = g;
  var h:int = 1100;
  e[11]:int = h;
  var i:int = 1200;
  e[10]:int = i;
  var j:long = 720000L;
  var k:int = 8;
  var l:int = legalfunc_polybench_alloc_data(j, k);
  e[5]:int = l;
  var m:long = 880000L;
  var n:int = 8;
  var o:int = legalfunc_polybench_alloc_data(m, n);
  e[4]:int = o;
  var p:long = 990000L;
  var q:int = 8;
  var r:int = legalfunc_polybench_alloc_data(p, q);
  e[3]:int = r;
  var s:long = 1080000L;
  var t:int = 8;
  var u:int = legalfunc_polybench_alloc_data(s, t);
  e[2]:int = u;
  var v:long = 960000L;
  var w:int = 8;
  var x:int = legalfunc_polybench_alloc_data(v, w);
  e[1]:int = x;
  var y:int = e[13]:int;
  var z:int = e[12]:int;
  var aa:int = e[11]:int;
  var ba:int = e[10]:int;
  var ca:int = e[4]:int;
  var da:int = e[3]:int;
  var ea:int = e[2]:int;
  var fa:int = e[1]:int;
  var ga:int = 32;
  var ha:int = e + ga;
  var ia:int = ha;
  var ja:int = 24;
  var ka:int = e + ja;
  var la:int = ka;
  init_array(y, z, aa, ba, ia, la, ca, da, ea, fa);
  var ma:int = e[13]:int;
  var na:int = e[12]:int;
  var oa:int = e[11]:int;
  var pa:int = e[10]:int;
  var qa:double = e[4]:double;
  var ra:double = e[3]:double;
  var sa:int = e[5]:int;
  var ta:int = e[4]:int;
  var ua:int = e[3]:int;
  var va:int = e[2]:int;
  var wa:int = e[1]:int;
  kernel_2mm(ma, na, oa, pa, qa, ra, sa, ta, ua, va, wa);
  var xa:int = e[15]:int;
  var ya:int = 42;
  var za:int = xa;
  var ab:int = ya;
  var bb:int = za > ab;
  var cb:int = 1;
  var db:int = bb & cb;
  if (eqz(db)) goto B_a;
  var eb:int_ptr = e[14]:int;
  var fb:int = eb[0];
  var gb:int = 87;
  var hb:int = memory_base;
  var ib:int = hb + gb;
  var jb:int = strcmp(fb, ib);
  if (jb) goto B_a;
  var kb:int = e[13]:int;
  var lb:int = e[10]:int;
  var mb:int = e[1]:int;
  print_array(kb, lb, mb);
  label B_a:
  var nb:int = e[5]:int;
  free(nb);
  var ob:int = e[4]:int;
  free(ob);
  var pb:int = e[3]:int;
  free(pb);
  var qb:int = e[2]:int;
  free(qb);
  var rb:int = e[1]:int;
  free(rb);
  var sb:int = 0;
  var tb:int = 64;
  var ub:int = e + tb;
  stack_pointer = ub;
  return sb;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

