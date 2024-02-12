import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00x2\00x1\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DU"
  "MP_ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_mvt(a:int, b:int, c:int, d:int, e:int, f:int) {
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
    var l:int = i.h;
    var m:int = k;
    var n:int = l;
    var o:int = m < n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int = 0;
    i.a = r;
    loop L_d {
      var s:int = i.a;
      var t:int = i.h;
      var u:int = s;
      var v:int = t;
      var w:int = u < v;
      var x:int = 1;
      var y:int = w & x;
      if (eqz(y)) goto B_c;
      var z:int = i.g;
      var aa:int = i.b;
      var ba:int = 3;
      var ca:int = aa << ba;
      var da:double_ptr = z + ca;
      var ea:double = da[0];
      var fa:int = i.c;
      var ga:int = i.b;
      var ha:int = 16000;
      var ia:int = ga * ha;
      var ja:int = fa + ia;
      var ka:int = i.a;
      var la:int = 3;
      var ma:int = ka << la;
      var na:double_ptr = ja + ma;
      var oa:double = na[0];
      var pa:int = i.e;
      var qa:int = i.a;
      var ra:int = 3;
      var sa:int = qa << ra;
      var ta:double_ptr = pa + sa;
      var ua:double = ta[0];
      var va:double = oa * ua;
      var wa:double = va + ea;
      var xa:int = i.g;
      var ya:int = i.b;
      var za:int = 3;
      var ab:int = ya << za;
      var bb:double_ptr = xa + ab;
      bb[0] = wa;
      var cb:int = i.a;
      var db:int = 1;
      var eb:int = cb + db;
      i.a = eb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var fb:int = i.b;
    var gb:int = 1;
    var hb:int = fb + gb;
    i.b = hb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ib:int = 0;
  i.b = ib;
  loop L_f {
    var jb:int = i.b;
    var kb:int = i.h;
    var lb:int = jb;
    var mb:int = kb;
    var nb:int = lb < mb;
    var ob:int = 1;
    var pb:int = nb & ob;
    if (eqz(pb)) goto B_e;
    var qb:int = 0;
    i.a = qb;
    loop L_h {
      var rb:int = i.a;
      var sb:int = i.h;
      var tb:int = rb;
      var ub:int = sb;
      var vb:int = tb < ub;
      var wb:int = 1;
      var xb:int = vb & wb;
      if (eqz(xb)) goto B_g;
      var yb:int = i.f;
      var zb:int = i.b;
      var ac:int = 3;
      var bc:int = zb << ac;
      var cc:double_ptr = yb + bc;
      var dc:double = cc[0];
      var ec:int = i.c;
      var fc:int = i.a;
      var gc:int = 16000;
      var hc:int = fc * gc;
      var ic:int = ec + hc;
      var jc:int = i.b;
      var kc:int = 3;
      var lc:int = jc << kc;
      var mc:double_ptr = ic + lc;
      var nc:double = mc[0];
      var oc:int = i.d;
      var pc:int = i.a;
      var qc:int = 3;
      var rc:int = pc << qc;
      var sc:double_ptr = oc + rc;
      var tc:double = sc[0];
      var uc:double = nc * tc;
      var vc:double = uc + dc;
      var wc:int = i.f;
      var xc:int = i.b;
      var yc:int = 3;
      var zc:int = xc << yc;
      var ad:double_ptr = wc + zc;
      ad[0] = vc;
      var bd:int = i.a;
      var cd:int = 1;
      var dd:int = bd + cd;
      i.a = dd;
      continue L_h;
    }
    unreachable;
    label B_g:
    var ed:int = i.b;
    var fd:int = 1;
    var gd:int = ed + fd;
    i.b = gd;
    continue L_f;
  }
  unreachable;
  label B_e:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    c - d;
  stack_pointer = e;
  e.h = a;
  e.g = b;
  var f:int = 2000;
  e.f = f;
  var g:long = 4000000L;
  var h:int = 8;
  var i:int = legalfunc_polybench_alloc_data(g, h);
  e.e = i;
  var j:long = 2000L;
  var k:int = 8;
  var l:int = legalfunc_polybench_alloc_data(j, k);
  e.d = l;
  var m:long = 2000L;
  var n:int = 8;
  var o:int = legalfunc_polybench_alloc_data(m, n);
  e.c = o;
  var p:long = 2000L;
  var q:int = 8;
  var r:int = legalfunc_polybench_alloc_data(p, q);
  e.b = r;
  var s:long = 2000L;
  var t:int = 8;
  var u:int = legalfunc_polybench_alloc_data(s, t);
  e.a = u;
  var v:int = e.f;
  var w:int = e.d;
  var x:int = e.c;
  var y:int = e.b;
  var z:int = e.a;
  var aa:int = e.e;
  init_array(v, w, x, y, z, aa);
  var ba:int = e.f;
  var ca:int = e.d;
  var da:int = e.c;
  var ea:int = e.b;
  var fa:int = e.a;
  var ga:int = e.e;
  kernel_mvt(ba, ca, da, ea, fa, ga);
  var ha:int = e.h;
  var ia:int = 42;
  var ja:int = ha;
  var ka:int = ia;
  var la:int = ja > ka;
  var ma:int = 1;
  var na:int = la & ma;
  if (eqz(na)) goto B_a;
  var oa:int_ptr = e.g;
  var pa:int = oa[0];
  var qa:int = 91;
  var ra:int = memory_base;
  var sa:int = ra + qa;
  var ta:int = strcmp(pa, sa);
  if (ta) goto B_a;
  var ua:int = e.f;
  var va:int = e.d;
  var wa:int = e.c;
  print_array(ua, va, wa);
  label B_a:
  var xa:int = e.e;
  free(xa);
  var ya:int = e.d;
  free(ya);
  var za:int = e.c;
  free(za);
  var ab:int = e.b;
  free(ab);
  var bb:int = e.a;
  free(bb);
  var cb:int = 0;
  var db:int = 32;
  var eb:int = e + db;
  stack_pointer = eb;
  return cb;
}

function init_array(a:int, b:int, c:int, d:int, e:int, f:int) {
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
    var l:int = i.h;
    var m:int = k;
    var n:int = l;
    var o:int = m < n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int = i.b;
    var s:int = i.h;
    var t:int = r % s;
    var u:double = f64_convert_i32_s(t);
    var v:int = i.h;
    var w:double = f64_convert_i32_s(v);
    var x:double = u / w;
    var y:int = i.g;
    var z:int = i.b;
    var aa:int = 3;
    var ba:int = z << aa;
    var ca:double_ptr = y + ba;
    ca[0] = x;
    var da:int = i.b;
    var ea:int = 1;
    var fa:int = da + ea;
    var ga:int = i.h;
    var ha:int = fa % ga;
    var ia:double = f64_convert_i32_s(ha);
    var ja:int = i.h;
    var ka:double = f64_convert_i32_s(ja);
    var la:double = ia / ka;
    var ma:int = i.f;
    var na:int = i.b;
    var oa:int = 3;
    var pa:int = na << oa;
    var qa:double_ptr = ma + pa;
    qa[0] = la;
    var ra:int = i.b;
    var sa:int = 3;
    var ta:int = ra + sa;
    var ua:int = i.h;
    var va:int = ta % ua;
    var wa:double = f64_convert_i32_s(va);
    var xa:int = i.h;
    var ya:double = f64_convert_i32_s(xa);
    var za:double = wa / ya;
    var ab:int = i.e;
    var bb:int = i.b;
    var cb:int = 3;
    var db:int = bb << cb;
    var eb:double_ptr = ab + db;
    eb[0] = za;
    var fb:int = i.b;
    var gb:int = 4;
    var hb:int = fb + gb;
    var ib:int = i.h;
    var jb:int = hb % ib;
    var kb:double = f64_convert_i32_s(jb);
    var lb:int = i.h;
    var mb:double = f64_convert_i32_s(lb);
    var nb:double = kb / mb;
    var ob:int = i.d;
    var pb:int = i.b;
    var qb:int = 3;
    var rb:int = pb << qb;
    var sb:double_ptr = ob + rb;
    sb[0] = nb;
    var tb:int = 0;
    i.a = tb;
    loop L_d {
      var ub:int = i.a;
      var vb:int = i.h;
      var wb:int = ub;
      var xb:int = vb;
      var yb:int = wb < xb;
      var zb:int = 1;
      var ac:int = yb & zb;
      if (eqz(ac)) goto B_c;
      var bc:int = i.b;
      var cc:int = i.a;
      var dc:int = bc * cc;
      var ec:int = i.h;
      var fc:int = dc % ec;
      var gc:double = f64_convert_i32_s(fc);
      var hc:int = i.h;
      var ic:double = f64_convert_i32_s(hc);
      var jc:double = gc / ic;
      var kc:int = i.c;
      var lc:int = i.b;
      var mc:int = 16000;
      var nc:int = lc * mc;
      var oc:int = kc + nc;
      var pc:int = i.a;
      var qc:int = 3;
      var rc:int = pc << qc;
      var sc:double_ptr = oc + rc;
      sc[0] = jc;
      var tc:int = i.a;
      var uc:int = 1;
      var vc:int = tc + uc;
      i.a = vc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var wc:int = i.b;
    var xc:int = 1;
    var yc:int = wc + xc;
    i.b = yc;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 112;
  var f:int = d - e;
  stack_pointer = f;
  f[27]:int = a;
  f[26]:int = b;
  f[25]:int = c;
  var g:int_ptr = stderr;
  var h:int = g[0];
  var i:int = 46;
  var j:int = memory_base;
  var k:int = j + i;
  var l:int = 0;
  fprintf(h, k, l);
  var m:int = g[0];
  var n:int = 18;
  var o:int = memory_base;
  var p:int = o + n;
  f[20]:int = p;
  var q:int = 0;
  var r:int = o + q;
  var s:int = 80;
  var t:int = f + s;
  fprintf(m, r, t);
  var u:int = 0;
  f[24]:int = u;
  loop L_b {
    var v:int = f[24]:int;
    var w:int = f[27]:int;
    var x:int = v;
    var y:int = w;
    var z:int = x < y;
    var aa:int = 1;
    var ba:int = z & aa;
    if (eqz(ba)) goto B_a;
    var ca:int = f[24]:int;
    var da:int = 20;
    var ea:int = ca % da;
    if (ea) goto B_c;
    var fa:int_ptr = stderr;
    var ga:int = fa[0];
    var ha:int = 90;
    var ia:int = memory_base;
    var ja:int = ia + ha;
    var ka:int = 0;
    fprintf(ga, ja, ka);
    label B_c:
    var la:int_ptr = stderr;
    var ma:int = la[0];
    var na:int = f[26]:int;
    var oa:int = f[24]:int;
    var pa:int = 3;
    var qa:int = oa << pa;
    var ra:double_ptr = na + qa;
    var sa:double = ra[0];
    f[0]:double = sa;
    var ta:int = 21;
    var ua:int = memory_base;
    var va:int = ua + ta;
    fprintf(ma, va, f);
    var wa:int = f[24]:int;
    var xa:int = 1;
    var ya:int = wa + xa;
    f[24]:int = ya;
    continue L_b;
  }
  unreachable;
  label B_a:
  var za:int_ptr = stderr;
  var ab:int = za[0];
  var bb:int = 18;
  var cb:int = memory_base;
  var db:int = cb + bb;
  f[12]:int = db;
  var eb:int = 29;
  var fb:int = cb + eb;
  var gb:int = 48;
  var hb:int = f + gb;
  fprintf(ab, fb, hb);
  var ib:int = za[0];
  var jb:int = 15;
  var kb:int = memory_base;
  var lb:int = kb + jb;
  f[16]:int = lb;
  var mb:int = 0;
  var nb:int = kb + mb;
  var ob:int = 64;
  var pb:int = f + ob;
  fprintf(ib, nb, pb);
  var qb:int = 0;
  f[24]:int = qb;
  loop L_e {
    var rb:int = f[24]:int;
    var sb:int = f[27]:int;
    var tb:int = rb;
    var ub:int = sb;
    var vb:int = tb < ub;
    var wb:int = 1;
    var xb:int = vb & wb;
    if (eqz(xb)) goto B_d;
    var yb:int = f[24]:int;
    var zb:int = 20;
    var ac:int = yb % zb;
    if (ac) goto B_f;
    var bc:int_ptr = stderr;
    var cc:int = bc[0];
    var dc:int = 90;
    var ec:int = memory_base;
    var fc:int = ec + dc;
    var gc:int = 0;
    fprintf(cc, fc, gc);
    label B_f:
    var hc:int_ptr = stderr;
    var ic:int = hc[0];
    var jc:int = f[25]:int;
    var kc:int = f[24]:int;
    var lc:int = 3;
    var mc:int = kc << lc;
    var nc:double_ptr = jc + mc;
    var oc:double = nc[0];
    f[2]:double = oc;
    var pc:int = 21;
    var qc:int = memory_base;
    var rc:int = qc + pc;
    var sc:int = 16;
    var tc:int = f + sc;
    fprintf(ic, rc, tc);
    var uc:int = f[24]:int;
    var vc:int = 1;
    var wc:int = uc + vc;
    f[24]:int = wc;
    continue L_e;
  }
  unreachable;
  label B_d:
  var xc:int_ptr = stderr;
  var yc:int = xc[0];
  var zc:int = 15;
  var ad:int = memory_base;
  var bd:int = ad + zc;
  f[8]:int = bd;
  var cd:int = 29;
  var dd:int = ad + cd;
  var ed:int = 32;
  var fd:int = f + ed;
  fprintf(yc, dd, fd);
  var gd:int = xc[0];
  var hd:int = 69;
  var id:int = memory_base;
  var jd:int = id + hd;
  var kd:int = 0;
  fprintf(gd, jd, kd);
  var ld:int = 112;
  var md:int = f + ld;
  stack_pointer = md;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

