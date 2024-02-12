import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00R\00Q\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP"
  "_ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_gramschmidt(a:int, b:int, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 48;
  var h:int = f - g;
  h[11]:int = a;
  h[10]:int = b;
  h[9]:int = c;
  h[8]:int = d;
  h[7]:int = e;
  var i:int = 0;
  h[4]:int = i;
  loop L_b {
    var j:int = h[4]:int;
    var k:int = h[10]:int;
    var l:int = j;
    var m:int = k;
    var n:int = l < m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = 0;
    var r:double = f64_convert_i32_s(q);
    h[1]:double = r;
    var s:int = 0;
    h[6]:int = s;
    loop L_d {
      var t:int = h[6]:int;
      var u:int = h[11]:int;
      var v:int = t;
      var w:int = u;
      var x:int = v < w;
      var y:int = 1;
      var z:int = x & y;
      if (eqz(z)) goto B_c;
      var aa:int = h[9]:int;
      var ba:int = h[6]:int;
      var ca:int = 9600;
      var da:int = ba * ca;
      var ea:int = aa + da;
      var fa:int = h[4]:int;
      var ga:int = 3;
      var ha:int = fa << ga;
      var ia:double_ptr = ea + ha;
      var ja:double = ia[0];
      var ka:int = h[9]:int;
      var la:int = h[6]:int;
      var ma:int = 9600;
      var na:int = la * ma;
      var oa:int = ka + na;
      var pa:int = h[4]:int;
      var qa:int = 3;
      var ra:int = pa << qa;
      var sa:double_ptr = oa + ra;
      var ta:double = sa[0];
      var ua:double = h[1]:double;
      var va:double = ja * ta;
      var wa:double = va + ua;
      h[1]:double = wa;
      var xa:int = h[6]:int;
      var ya:int = 1;
      var za:int = xa + ya;
      h[6]:int = za;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ab:double = h[1]:double;
    var bb:double = sqrt(ab);
    var cb:int = h[8]:int;
    var db:int = h[4]:int;
    var eb:int = 9600;
    var fb:int = db * eb;
    var gb:int = cb + fb;
    var hb:int = h[4]:int;
    var ib:int = 3;
    var jb:int = hb << ib;
    var kb:double_ptr = gb + jb;
    kb[0] = bb;
    var lb:int = 0;
    h[6]:int = lb;
    loop L_f {
      var mb:int = h[6]:int;
      var nb:int = h[11]:int;
      var ob:int = mb;
      var pb:int = nb;
      var qb:int = ob < pb;
      var rb:int = 1;
      var sb:int = qb & rb;
      if (eqz(sb)) goto B_e;
      var tb:int = h[9]:int;
      var ub:int = h[6]:int;
      var vb:int = 9600;
      var wb:int = ub * vb;
      var xb:int = tb + wb;
      var yb:int = h[4]:int;
      var zb:int = 3;
      var ac:int = yb << zb;
      var bc:double_ptr = xb + ac;
      var cc:double = bc[0];
      var dc:int = h[8]:int;
      var ec:int = h[4]:int;
      var fc:int = 9600;
      var gc:int = ec * fc;
      var hc:int = dc + gc;
      var ic:int = h[4]:int;
      var jc:int = 3;
      var kc:int = ic << jc;
      var lc:double_ptr = hc + kc;
      var mc:double = lc[0];
      var nc:double = cc / mc;
      var oc:int = h[7]:int;
      var pc:int = h[6]:int;
      var qc:int = 9600;
      var rc:int = pc * qc;
      var sc:int = oc + rc;
      var tc:int = h[4]:int;
      var uc:int = 3;
      var vc:int = tc << uc;
      var wc:double_ptr = sc + vc;
      wc[0] = nc;
      var xc:int = h[6]:int;
      var yc:int = 1;
      var zc:int = xc + yc;
      h[6]:int = zc;
      continue L_f;
    }
    unreachable;
    label B_e:
    var ad:int = h[4]:int;
    var bd:int = 1;
    var cd:int = ad + bd;
    h[5]:int = cd;
    loop L_h {
      var dd:int = h[5]:int;
      var ed:int = h[10]:int;
      var fd:int = dd;
      var gd:int = ed;
      var hd:int = fd < gd;
      var id:int = 1;
      var jd:int = hd & id;
      if (eqz(jd)) goto B_g;
      var kd:int = h[8]:int;
      var ld:int = h[4]:int;
      var md:int = 9600;
      var nd:int = ld * md;
      var od:int = kd + nd;
      var pd:int = h[5]:int;
      var qd:int = 3;
      var rd:int = pd << qd;
      var sd:double_ptr = od + rd;
      var td:int = 0;
      var ud:double = f64_convert_i32_s(td);
      sd[0] = ud;
      var vd:int = 0;
      h[6]:int = vd;
      loop L_j {
        var wd:int = h[6]:int;
        var xd:int = h[11]:int;
        var yd:int = wd;
        var zd:int = xd;
        var ae:int = yd < zd;
        var be:int = 1;
        var ce:int = ae & be;
        if (eqz(ce)) goto B_i;
        var de:int = h[7]:int;
        var ee:int = h[6]:int;
        var fe:int = 9600;
        var ge:int = ee * fe;
        var he:int = de + ge;
        var ie:int = h[4]:int;
        var je:int = 3;
        var ke:int = ie << je;
        var le:double_ptr = he + ke;
        var me:double = le[0];
        var ne:int = h[9]:int;
        var oe:int = h[6]:int;
        var pe:int = 9600;
        var qe:int = oe * pe;
        var re:int = ne + qe;
        var se:int = h[5]:int;
        var te:int = 3;
        var ue:int = se << te;
        var ve:double_ptr = re + ue;
        var we:double = ve[0];
        var xe:int = h[8]:int;
        var ye:int = h[4]:int;
        var ze:int = 9600;
        var af:int = ye * ze;
        var bf:int = xe + af;
        var cf:int = h[5]:int;
        var df:int = 3;
        var ef:int = cf << df;
        var ff:double_ptr = bf + ef;
        var gf:double = ff[0];
        var hf:double = me * we;
        var if:double = hf + gf;
        ff[0] = if;
        var jf:int = h[6]:int;
        var kf:int = 1;
        var lf:int = jf + kf;
        h[6]:int = lf;
        continue L_j;
      }
      unreachable;
      label B_i:
      var mf:int = 0;
      h[6]:int = mf;
      loop L_l {
        var nf:int = h[6]:int;
        var of:int = h[11]:int;
        var pf:int = nf;
        var qf:int = of;
        var rf:int = pf < qf;
        var sf:int = 1;
        var tf:int = rf & sf;
        if (eqz(tf)) goto B_k;
        var uf:int = h[9]:int;
        var vf:int = h[6]:int;
        var wf:int = 9600;
        var xf:int = vf * wf;
        var yf:int = uf + xf;
        var zf:int = h[5]:int;
        var ag:int = 3;
        var bg:int = zf << ag;
        var cg:double_ptr = yf + bg;
        var dg:double = cg[0];
        var eg:int = h[7]:int;
        var fg:int = h[6]:int;
        var gg:int = 9600;
        var hg:int = fg * gg;
        var ig:int = eg + hg;
        var jg:int = h[4]:int;
        var kg:int = 3;
        var lg:int = jg << kg;
        var mg:double_ptr = ig + lg;
        var ng:double = mg[0];
        var og:int = h[8]:int;
        var pg:int = h[4]:int;
        var qg:int = 9600;
        var rg:int = pg * qg;
        var sg:int = og + rg;
        var tg:int = h[5]:int;
        var ug:int = 3;
        var vg:int = tg << ug;
        var wg:double_ptr = sg + vg;
        var xg:double = wg[0];
        var yg:double = -(ng);
        var zg:double = yg * xg;
        var ah:double = zg + dg;
        var bh:int = h[9]:int;
        var ch:int = h[6]:int;
        var dh:int = 9600;
        var eh:int = ch * dh;
        var fh:int = bh + eh;
        var gh:int = h[5]:int;
        var hh:int = 3;
        var ih:int = gh << hh;
        var jh:double_ptr = fh + ih;
        jh[0] = ah;
        var kh:int = h[6]:int;
        var lh:int = 1;
        var mh:int = kh + lh;
        h[6]:int = mh;
        continue L_l;
      }
      unreachable;
      label B_k:
      var nh:int = h[5]:int;
      var oh:int = 1;
      var ph:int = nh + oh;
      h[5]:int = ph;
      continue L_h;
    }
    unreachable;
    label B_g:
    var qh:int = h[4]:int;
    var rh:int = 1;
    var sh:int = qh + rh;
    h[4]:int = sh;
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
  var f:int = 1000;
  e[5] = f;
  var g:int = 1200;
  e[4] = g;
  var h:long = 1200000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[3] = j;
  var k:long = 1440000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[2] = m;
  var n:long = 1200000L;
  var o:int = 8;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e[1] = p;
  var q:int = e[5];
  var r:int = e[4];
  var s:int = e[3];
  var t:int = e[2];
  var u:int = e[1];
  init_array(q, r, s, t, u);
  var v:int = e[5];
  var w:int = e[4];
  var x:int = e[3];
  var y:int = e[2];
  var z:int = e[1];
  kernel_gramschmidt(v, w, x, y, z);
  var aa:int = e[7];
  var ba:int = 42;
  var ca:int = aa;
  var da:int = ba;
  var ea:int = ca > da;
  var fa:int = 1;
  var ga:int = ea & fa;
  if (eqz(ga)) goto B_a;
  var ha:int_ptr = e[6];
  var ia:int = ha[0];
  var ja:int = 89;
  var ka:int = memory_base;
  var la:int = ka + ja;
  var ma:int = strcmp(ia, la);
  if (ma) goto B_a;
  var na:int = e[5];
  var oa:int = e[4];
  var pa:int = e[3];
  var qa:int = e[2];
  var ra:int = e[1];
  print_array(na, oa, pa, qa, ra);
  label B_a:
  var sa:int = e[3];
  free(sa);
  var ta:int = e[2];
  free(ta);
  var ua:int = e[1];
  free(ua);
  var va:int = 0;
  var wa:int = 32;
  var xa:int = e + wa;
  stack_pointer = xa;
  return va;
}

function init_array(a:int, b:int, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 32;
  var h:int_ptr = f - g;
  h[7] = a;
  h[6] = b;
  h[5] = c;
  h[4] = d;
  h[3] = e;
  var i:int = 0;
  h[2] = i;
  loop L_b {
    var j:int = h[2];
    var k:int = h[7];
    var l:int = j;
    var m:int = k;
    var n:int = l < m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = 0;
    h[1] = q;
    loop L_d {
      var r:int = h[1];
      var s:int = h[6];
      var t:int = r;
      var u:int = s;
      var v:int = t < u;
      var w:int = 1;
      var x:int = v & w;
      if (eqz(x)) goto B_c;
      var y:int = h[2];
      var z:int = h[1];
      var aa:int = y * z;
      var ba:int = h[7];
      var ca:int = aa % ba;
      var da:double = f64_convert_i32_s(ca);
      var ea:int = h[7];
      var fa:double = f64_convert_i32_s(ea);
      var ga:double = da / fa;
      var ha:double = 100.0;
      var ia:double = ga * ha;
      var ja:double = 10.0;
      var ka:double = ia + ja;
      var la:int = h[5];
      var ma:int = h[2];
      var na:int = 9600;
      var oa:int = ma * na;
      var pa:int = la + oa;
      var qa:int = h[1];
      var ra:int = 3;
      var sa:int = qa << ra;
      var ta:double_ptr = pa + sa;
      ta[0] = ka;
      var ua:int = h[3];
      var va:int = h[2];
      var wa:int = 9600;
      var xa:int = va * wa;
      var ya:int = ua + xa;
      var za:int = h[1];
      var ab:int = 3;
      var bb:int = za << ab;
      var cb:double_ptr = ya + bb;
      var db:int = 0;
      var eb:double = f64_convert_i32_s(db);
      cb[0] = eb;
      var fb:int = h[1];
      var gb:int = 1;
      var hb:int = fb + gb;
      h[1] = hb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ib:int = h[2];
    var jb:int = 1;
    var kb:int = ib + jb;
    h[2] = kb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var lb:int = 0;
  h[2] = lb;
  loop L_f {
    var mb:int = h[2];
    var nb:int = h[6];
    var ob:int = mb;
    var pb:int = nb;
    var qb:int = ob < pb;
    var rb:int = 1;
    var sb:int = qb & rb;
    if (eqz(sb)) goto B_e;
    var tb:int = 0;
    h[1] = tb;
    loop L_h {
      var ub:int = h[1];
      var vb:int = h[6];
      var wb:int = ub;
      var xb:int = vb;
      var yb:int = wb < xb;
      var zb:int = 1;
      var ac:int = yb & zb;
      if (eqz(ac)) goto B_g;
      var bc:int = h[4];
      var cc:int = h[2];
      var dc:int = 9600;
      var ec:int = cc * dc;
      var fc:int = bc + ec;
      var gc:int = h[1];
      var hc:int = 3;
      var ic:int = gc << hc;
      var jc:double_ptr = fc + ic;
      var kc:int = 0;
      var lc:double = f64_convert_i32_s(kc);
      jc[0] = lc;
      var mc:int = h[1];
      var nc:int = 1;
      var oc:int = mc + nc;
      h[1] = oc;
      continue L_h;
    }
    unreachable;
    label B_g:
    var pc:int = h[2];
    var qc:int = 1;
    var rc:int = pc + qc;
    h[2] = rc;
    continue L_f;
  }
  unreachable;
  label B_e:
}

function print_array(a:int, b:int, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 112;
  var h:int = f - g;
  stack_pointer = h;
  h[27]:int = a;
  h[26]:int = b;
  h[25]:int = c;
  h[24]:int = d;
  h[23]:int = e;
  var i:int_ptr = stderr;
  var j:int = i[0];
  var k:int = 44;
  var l:int = memory_base;
  var m:int = l + k;
  var n:int = 0;
  fprintf(j, m, n);
  var o:int = i[0];
  var p:int = 15;
  var q:int = memory_base;
  var r:int = q + p;
  h[20]:int = r;
  var s:int = 0;
  var t:int = q + s;
  var u:int = 80;
  var v:int = h + u;
  fprintf(o, t, v);
  var w:int = 0;
  h[22]:int = w;
  loop L_b {
    var x:int = h[22]:int;
    var y:int = h[26]:int;
    var z:int = x;
    var aa:int = y;
    var ba:int = z < aa;
    var ca:int = 1;
    var da:int = ba & ca;
    if (eqz(da)) goto B_a;
    var ea:int = 0;
    h[21]:int = ea;
    loop L_d {
      var fa:int = h[21]:int;
      var ga:int = h[26]:int;
      var ha:int = fa;
      var ia:int = ga;
      var ja:int = ha < ia;
      var ka:int = 1;
      var la:int = ja & ka;
      if (eqz(la)) goto B_c;
      var ma:int = h[22]:int;
      var na:int = h[26]:int;
      var oa:int = ma * na;
      var pa:int = h[21]:int;
      var qa:int = oa + pa;
      var ra:int = 20;
      var sa:int = qa % ra;
      if (sa) goto B_e;
      var ta:int_ptr = stderr;
      var ua:int = ta[0];
      var va:int = 88;
      var wa:int = memory_base;
      var xa:int = wa + va;
      var ya:int = 0;
      fprintf(ua, xa, ya);
      label B_e:
      var za:int_ptr = stderr;
      var ab:int = za[0];
      var bb:int = h[24]:int;
      var cb:int = h[22]:int;
      var db:int = 9600;
      var eb:int = cb * db;
      var fb:int = bb + eb;
      var gb:int = h[21]:int;
      var hb:int = 3;
      var ib:int = gb << hb;
      var jb:double_ptr = fb + ib;
      var kb:double = jb[0];
      h[0]:double = kb;
      var lb:int = 19;
      var mb:int = memory_base;
      var nb:int = mb + lb;
      fprintf(ab, nb, h);
      var ob:int = h[21]:int;
      var pb:int = 1;
      var qb:int = ob + pb;
      h[21]:int = qb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var rb:int = h[22]:int;
    var sb:int = 1;
    var tb:int = rb + sb;
    h[22]:int = tb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ub:int_ptr = stderr;
  var vb:int = ub[0];
  var wb:int = 15;
  var xb:int = memory_base;
  var yb:int = xb + wb;
  h[12]:int = yb;
  var zb:int = 27;
  var ac:int = xb + zb;
  var bc:int = 48;
  var cc:int = h + bc;
  fprintf(vb, ac, cc);
  var dc:int = ub[0];
  var ec:int = 17;
  var fc:int = memory_base;
  var gc:int = fc + ec;
  h[16]:int = gc;
  var hc:int = 0;
  var ic:int = fc + hc;
  var jc:int = 64;
  var kc:int = h + jc;
  fprintf(dc, ic, kc);
  var lc:int = 0;
  h[22]:int = lc;
  loop L_g {
    var mc:int = h[22]:int;
    var nc:int = h[27]:int;
    var oc:int = mc;
    var pc:int = nc;
    var qc:int = oc < pc;
    var rc:int = 1;
    var sc:int = qc & rc;
    if (eqz(sc)) goto B_f;
    var tc:int = 0;
    h[21]:int = tc;
    loop L_i {
      var uc:int = h[21]:int;
      var vc:int = h[26]:int;
      var wc:int = uc;
      var xc:int = vc;
      var yc:int = wc < xc;
      var zc:int = 1;
      var ad:int = yc & zc;
      if (eqz(ad)) goto B_h;
      var bd:int = h[22]:int;
      var cd:int = h[26]:int;
      var dd:int = bd * cd;
      var ed:int = h[21]:int;
      var fd:int = dd + ed;
      var gd:int = 20;
      var hd:int = fd % gd;
      if (hd) goto B_j;
      var id:int_ptr = stderr;
      var jd:int = id[0];
      var kd:int = 88;
      var ld:int = memory_base;
      var md:int = ld + kd;
      var nd:int = 0;
      fprintf(jd, md, nd);
      label B_j:
      var od:int_ptr = stderr;
      var pd:int = od[0];
      var qd:int = h[23]:int;
      var rd:int = h[22]:int;
      var sd:int = 9600;
      var td:int = rd * sd;
      var ud:int = qd + td;
      var vd:int = h[21]:int;
      var wd:int = 3;
      var xd:int = vd << wd;
      var yd:double_ptr = ud + xd;
      var zd:double = yd[0];
      h[2]:double = zd;
      var ae:int = 19;
      var be:int = memory_base;
      var ce:int = be + ae;
      var de:int = 16;
      var ee:int = h + de;
      fprintf(pd, ce, ee);
      var fe:int = h[21]:int;
      var ge:int = 1;
      var he:int = fe + ge;
      h[21]:int = he;
      continue L_i;
    }
    unreachable;
    label B_h:
    var ie:int = h[22]:int;
    var je:int = 1;
    var ke:int = ie + je;
    h[22]:int = ke;
    continue L_g;
  }
  unreachable;
  label B_f:
  var le:int_ptr = stderr;
  var me:int = le[0];
  var ne:int = 17;
  var oe:int = memory_base;
  var pe:int = oe + ne;
  h[8]:int = pe;
  var qe:int = 27;
  var re:int = oe + qe;
  var se:int = 32;
  var te:int = h + se;
  fprintf(me, re, te);
  var ue:int = le[0];
  var ve:int = 67;
  var we:int = memory_base;
  var xe:int = we + ve;
  var ye:int = 0;
  fprintf(ue, xe, ye);
  var ze:int = 112;
  var af:int = h + ze;
  stack_pointer = af;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

