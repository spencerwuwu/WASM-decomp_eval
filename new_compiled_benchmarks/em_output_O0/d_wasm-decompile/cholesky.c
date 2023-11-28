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

export function kernel_cholesky(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  e[7] = a;
  e[6] = b;
  var f:int = 0;
  e[5] = f;
  loop L_b {
    var g:int = e[5];
    var h:int = e[7];
    var i:int = g;
    var j:int = h;
    var k:int = i < j;
    var l:int = 1;
    var m:int = k & l;
    if (eqz(m)) goto B_a;
    var n:int = 0;
    e[4] = n;
    loop L_d {
      var o:int = e[4];
      var p:int = e[5];
      var q:int = o;
      var r:int = p;
      var s:int = q < r;
      var t:int = 1;
      var u:int = s & t;
      if (eqz(u)) goto B_c;
      var v:int = 0;
      e[3] = v;
      loop L_f {
        var w:int = e[3];
        var x:int = e[4];
        var y:int = w;
        var z:int = x;
        var aa:int = y < z;
        var ba:int = 1;
        var ca:int = aa & ba;
        if (eqz(ca)) goto B_e;
        var da:int = e[6];
        var ea:int = e[5];
        var fa:int = 16000;
        var ga:int = ea * fa;
        var ha:int = da + ga;
        var ia:int = e[3];
        var ja:int = 3;
        var ka:int = ia << ja;
        var la:double_ptr = ha + ka;
        var ma:double = la[0];
        var na:int = e[6];
        var oa:int = e[4];
        var pa:int = 16000;
        var qa:int = oa * pa;
        var ra:int = na + qa;
        var sa:int = e[3];
        var ta:int = 3;
        var ua:int = sa << ta;
        var va:double_ptr = ra + ua;
        var wa:double = va[0];
        var xa:int = e[6];
        var ya:int = e[5];
        var za:int = 16000;
        var ab:int = ya * za;
        var bb:int = xa + ab;
        var cb:int = e[4];
        var db:int = 3;
        var eb:int = cb << db;
        var fb:double_ptr = bb + eb;
        var gb:double = fb[0];
        var hb:double = -(ma);
        var ib:double = hb * wa;
        var jb:double = ib + gb;
        fb[0] = jb;
        var kb:int = e[3];
        var lb:int = 1;
        var mb:int = kb + lb;
        e[3] = mb;
        continue L_f;
      }
      unreachable;
      label B_e:
      var nb:int = e[6];
      var ob:int = e[4];
      var pb:int = 16000;
      var qb:int = ob * pb;
      var rb:int = nb + qb;
      var sb:int = e[4];
      var tb:int = 3;
      var ub:int = sb << tb;
      var vb:double_ptr = rb + ub;
      var wb:double = vb[0];
      var xb:int = e[6];
      var yb:int = e[5];
      var zb:int = 16000;
      var ac:int = yb * zb;
      var bc:int = xb + ac;
      var cc:int = e[4];
      var dc:int = 3;
      var ec:int = cc << dc;
      var fc:double_ptr = bc + ec;
      var gc:double = fc[0];
      var hc:double = gc / wb;
      fc[0] = hc;
      var ic:int = e[4];
      var jc:int = 1;
      var kc:int = ic + jc;
      e[4] = kc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var lc:int = 0;
    e[3] = lc;
    loop L_h {
      var mc:int = e[3];
      var nc:int = e[5];
      var oc:int = mc;
      var pc:int = nc;
      var qc:int = oc < pc;
      var rc:int = 1;
      var sc:int = qc & rc;
      if (eqz(sc)) goto B_g;
      var tc:int = e[6];
      var uc:int = e[5];
      var vc:int = 16000;
      var wc:int = uc * vc;
      var xc:int = tc + wc;
      var yc:int = e[3];
      var zc:int = 3;
      var ad:int = yc << zc;
      var bd:double_ptr = xc + ad;
      var cd:double = bd[0];
      var dd:int = e[6];
      var ed:int = e[5];
      var fd:int = 16000;
      var gd:int = ed * fd;
      var hd:int = dd + gd;
      var id:int = e[3];
      var jd:int = 3;
      var kd:int = id << jd;
      var ld:double_ptr = hd + kd;
      var md:double = ld[0];
      var nd:int = e[6];
      var od:int = e[5];
      var pd:int = 16000;
      var qd:int = od * pd;
      var rd:int = nd + qd;
      var sd:int = e[5];
      var td:int = 3;
      var ud:int = sd << td;
      var vd:double_ptr = rd + ud;
      var wd:double = vd[0];
      var xd:double = -(cd);
      var yd:double = xd * md;
      var zd:double = yd + wd;
      vd[0] = zd;
      var ae:int = e[3];
      var be:int = 1;
      var ce:int = ae + be;
      e[3] = ce;
      continue L_h;
    }
    unreachable;
    label B_g:
    var de:int = e[6];
    var ee:int = e[5];
    var fe:int = 16000;
    var ge:int = ee * fe;
    var he:int = de + ge;
    var ie:int = e[5];
    var je:int = 3;
    var ke:int = ie << je;
    var le:double_ptr = he + ke;
    var me:double = le[0];
    var ne:double = sqrt(me);
    var oe:int = e[6];
    var pe:int = e[5];
    var qe:int = 16000;
    var re:int = pe * qe;
    var se:int = oe + re;
    var te:int = e[5];
    var ue:int = 3;
    var ve:int = te << ue;
    var we:double_ptr = se + ve;
    we[0] = ne;
    var xe:int = e[5];
    var ye:int = 1;
    var ze:int = xe + ye;
    e[5] = ze;
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
  var f:int = 2000;
  e.b = f;
  var g:long = 4000000L;
  var h:int = 8;
  var i:int = legalfunc_polybench_alloc_data(g, h);
  e.a = i;
  var j:int = e.b;
  var k:int = e.a;
  init_array(j, k);
  var l:int = e.b;
  var m:int = e.a;
  kernel_cholesky(l, m);
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
  var w:int = 87;
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
  var d:int = 32;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    c - d;
  stack_pointer = e;
  e.h = a;
  e.g = b;
  var f:int = 0;
  e.f = f;
  loop L_b {
    var g:int = e.f;
    var h:int = e.h;
    var i:int = g;
    var j:int = h;
    var k:int = i < j;
    var l:int = 1;
    var m:int = k & l;
    if (eqz(m)) goto B_a;
    var n:int = 0;
    e.e = n;
    loop L_d {
      var o:int = e.e;
      var p:int = e.f;
      var q:int = o;
      var r:int = p;
      var s:int = q <= r;
      var t:int = 1;
      var u:int = s & t;
      if (eqz(u)) goto B_c;
      var v:int = e.e;
      var w:int = 0;
      var x:int = w - v;
      var y:int = e.h;
      var z:int = x % y;
      var aa:double = f64_convert_i32_s(z);
      var ba:int = e.h;
      var ca:double = f64_convert_i32_s(ba);
      var da:double = aa / ca;
      var ea:double = 1.0;
      var fa:double = da + ea;
      var ga:int = e.g;
      var ha:int = e.f;
      var ia:int = 16000;
      var ja:int = ha * ia;
      var ka:int = ga + ja;
      var la:int = e.e;
      var ma:int = 3;
      var na:int = la << ma;
      var oa:double_ptr = ka + na;
      oa[0] = fa;
      var pa:int = e.e;
      var qa:int = 1;
      var ra:int = pa + qa;
      e.e = ra;
      continue L_d;
    }
    unreachable;
    label B_c:
    var sa:int = e.f;
    var ta:int = 1;
    var ua:int = sa + ta;
    e.e = ua;
    loop L_f {
      var va:int = e.e;
      var wa:int = e.h;
      var xa:int = va;
      var ya:int = wa;
      var za:int = xa < ya;
      var ab:int = 1;
      var bb:int = za & ab;
      if (eqz(bb)) goto B_e;
      var cb:int = e.g;
      var db:int = e.f;
      var eb:int = 16000;
      var fb:int = db * eb;
      var gb:int = cb + fb;
      var hb:int = e.e;
      var ib:int = 3;
      var jb:int = hb << ib;
      var kb:double_ptr = gb + jb;
      var lb:int = 0;
      var mb:double = f64_convert_i32_s(lb);
      kb[0] = mb;
      var nb:int = e.e;
      var ob:int = 1;
      var pb:int = nb + ob;
      e.e = pb;
      continue L_f;
    }
    unreachable;
    label B_e:
    var qb:int = e.g;
    var rb:int = e.f;
    var sb:int = 16000;
    var tb:int = rb * sb;
    var ub:int = qb + tb;
    var vb:int = e.f;
    var wb:int = 3;
    var xb:int = vb << wb;
    var yb:double_ptr = ub + xb;
    var zb:double = 1.0;
    yb[0] = zb;
    var ac:int = e.f;
    var bc:int = 1;
    var cc:int = ac + bc;
    e.f = cc;
    continue L_b;
  }
  unreachable;
  label B_a:
  var dc:long = 4000000L;
  var ec:int = 8;
  var fc:int = legalfunc_polybench_alloc_data(dc, ec);
  e.a = fc;
  var gc:int = 0;
  e.d = gc;
  loop L_h {
    var hc:int = e.d;
    var ic:int = e.h;
    var jc:int = hc;
    var kc:int = ic;
    var lc:int = jc < kc;
    var mc:int = 1;
    var nc:int = lc & mc;
    if (eqz(nc)) goto B_g;
    var oc:int = 0;
    e.c = oc;
    loop L_j {
      var pc:int = e.c;
      var qc:int = e.h;
      var rc:int = pc;
      var sc:int = qc;
      var tc:int = rc < sc;
      var uc:int = 1;
      var vc:int = tc & uc;
      if (eqz(vc)) goto B_i;
      var wc:int = e.a;
      var xc:int = e.d;
      var yc:int = 16000;
      var zc:int = xc * yc;
      var ad:int = wc + zc;
      var bd:int = e.c;
      var cd:int = 3;
      var dd:int = bd << cd;
      var ed:double_ptr = ad + dd;
      var fd:int = 0;
      var gd:double = f64_convert_i32_s(fd);
      ed[0] = gd;
      var hd:int = e.c;
      var id:int = 1;
      var jd:int = hd + id;
      e.c = jd;
      continue L_j;
    }
    unreachable;
    label B_i:
    var kd:int = e.d;
    var ld:int = 1;
    var md:int = kd + ld;
    e.d = md;
    continue L_h;
  }
  unreachable;
  label B_g:
  var nd:int = 0;
  e.b = nd;
  loop L_l {
    var od:int = e.b;
    var pd:int = e.h;
    var qd:int = od;
    var rd:int = pd;
    var sd:int = qd < rd;
    var td:int = 1;
    var ud:int = sd & td;
    if (eqz(ud)) goto B_k;
    var vd:int = 0;
    e.d = vd;
    loop L_n {
      var wd:int = e.d;
      var xd:int = e.h;
      var yd:int = wd;
      var zd:int = xd;
      var ae:int = yd < zd;
      var be:int = 1;
      var ce:int = ae & be;
      if (eqz(ce)) goto B_m;
      var de:int = 0;
      e.c = de;
      loop L_p {
        var ee:int = e.c;
        var fe:int = e.h;
        var ge:int = ee;
        var he:int = fe;
        var ie:int = ge < he;
        var je:int = 1;
        var ke:int = ie & je;
        if (eqz(ke)) goto B_o;
        var le:int = e.g;
        var me:int = e.d;
        var ne:int = 16000;
        var oe:int = me * ne;
        var pe:int = le + oe;
        var qe:int = e.b;
        var re:int = 3;
        var se:int = qe << re;
        var te:double_ptr = pe + se;
        var ue:double = te[0];
        var ve:int = e.g;
        var we:int = e.c;
        var xe:int = 16000;
        var ye:int = we * xe;
        var ze:int = ve + ye;
        var af:int = e.b;
        var bf:int = 3;
        var cf:int = af << bf;
        var df:double_ptr = ze + cf;
        var ef:double = df[0];
        var ff:int = e.a;
        var gf:int = e.d;
        var hf:int = 16000;
        var if:int = gf * hf;
        var jf:int = ff + if;
        var kf:int = e.c;
        var lf:int = 3;
        var mf:int = kf << lf;
        var nf:double_ptr = jf + mf;
        var of:double = nf[0];
        var pf:double = ue * ef;
        var qf:double = pf + of;
        nf[0] = qf;
        var rf:int = e.c;
        var sf:int = 1;
        var tf:int = rf + sf;
        e.c = tf;
        continue L_p;
      }
      unreachable;
      label B_o:
      var uf:int = e.d;
      var vf:int = 1;
      var wf:int = uf + vf;
      e.d = wf;
      continue L_n;
    }
    unreachable;
    label B_m:
    var xf:int = e.b;
    var yf:int = 1;
    var zf:int = xf + yf;
    e.b = zf;
    continue L_l;
  }
  unreachable;
  label B_k:
  var ag:int = 0;
  e.d = ag;
  loop L_r {
    var bg:int = e.d;
    var cg:int = e.h;
    var dg:int = bg;
    var eg:int = cg;
    var fg:int = dg < eg;
    var gg:int = 1;
    var hg:int = fg & gg;
    if (eqz(hg)) goto B_q;
    var ig:int = 0;
    e.c = ig;
    loop L_t {
      var jg:int = e.c;
      var kg:int = e.h;
      var lg:int = jg;
      var mg:int = kg;
      var ng:int = lg < mg;
      var og:int = 1;
      var pg:int = ng & og;
      if (eqz(pg)) goto B_s;
      var qg:int = e.a;
      var rg:int = e.d;
      var sg:int = 16000;
      var tg:int = rg * sg;
      var ug:int = qg + tg;
      var vg:int = e.c;
      var wg:int = 3;
      var xg:int = vg << wg;
      var yg:double_ptr = ug + xg;
      var zg:double = yg[0];
      var ah:int = e.g;
      var bh:int = e.d;
      var ch:int = 16000;
      var dh:int = bh * ch;
      var eh:int = ah + dh;
      var fh:int = e.c;
      var gh:int = 3;
      var hh:int = fh << gh;
      var ih:double_ptr = eh + hh;
      ih[0] = zg;
      var jh:int = e.c;
      var kh:int = 1;
      var lh:int = jh + kh;
      e.c = lh;
      continue L_t;
    }
    unreachable;
    label B_s:
    var mh:int = e.d;
    var nh:int = 1;
    var oh:int = mh + nh;
    e.d = oh;
    continue L_r;
  }
  unreachable;
  label B_q:
  var ph:int = e.a;
  free(ph);
  var qh:int = 32;
  var rh:int = e + qh;
  stack_pointer = rh;
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
      var da:int = e[13]:int;
      var ea:int = ca;
      var fa:int = da;
      var ga:int = ea <= fa;
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
      var ab:int = 16000;
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

