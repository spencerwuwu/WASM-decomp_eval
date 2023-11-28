import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00G\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function fprintf(a:int, b:int, c:int):int;

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function init_array(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int) {
  var j:int = stack_pointer;
  var k:int = 48;
  var l:int_ptr = j - k;
  l[11] = a;
  l[10] = b;
  l[9] = c;
  l[8] = d;
  l[7] = e;
  l[6] = f;
  l[5] = g;
  l[4] = h;
  l[3] = i;
  var m:int = 0;
  l[2] = m;
  loop L_b {
    var n:int = l[2];
    var o:int = l[11];
    var p:int = n;
    var q:int = o;
    var r:int = p < q;
    var s:int = 1;
    var t:int = r & s;
    if (eqz(t)) goto B_a;
    var u:int = 0;
    l[1] = u;
    loop L_d {
      var v:int = l[1];
      var w:int = l[9];
      var x:int = v;
      var y:int = w;
      var z:int = x < y;
      var aa:int = 1;
      var ba:int = z & aa;
      if (eqz(ba)) goto B_c;
      var ca:int = l[2];
      var da:int = l[1];
      var ea:int = ca * da;
      var fa:int = 1;
      var ga:int = ea + fa;
      var ha:int = l[11];
      var ia:int = ga % ha;
      var ja:double = f64_convert_i32_s(ia);
      var ka:int = l[11];
      var la:int = 5;
      var ma:int = ka * la;
      var na:double = f64_convert_i32_s(ma);
      var oa:double = ja / na;
      var pa:int = l[6];
      var qa:int = l[2];
      var ra:int = 8000;
      var sa:int = qa * ra;
      var ta:int = pa + sa;
      var ua:int = l[1];
      var va:int = 3;
      var wa:int = ua << va;
      var xa:double_ptr = ta + wa;
      xa[0] = oa;
      var ya:int = l[1];
      var za:int = 1;
      var ab:int = ya + za;
      l[1] = ab;
      continue L_d;
    }
    unreachable;
    label B_c:
    var bb:int = l[2];
    var cb:int = 1;
    var db:int = bb + cb;
    l[2] = db;
    continue L_b;
  }
  unreachable;
  label B_a:
  var eb:int = 0;
  l[2] = eb;
  loop L_f {
    var fb:int = l[2];
    var gb:int = l[9];
    var hb:int = fb;
    var ib:int = gb;
    var jb:int = hb < ib;
    var kb:int = 1;
    var lb:int = jb & kb;
    if (eqz(lb)) goto B_e;
    var mb:int = 0;
    l[1] = mb;
    loop L_h {
      var nb:int = l[1];
      var ob:int = l[10];
      var pb:int = nb;
      var qb:int = ob;
      var rb:int = pb < qb;
      var sb:int = 1;
      var tb:int = rb & sb;
      if (eqz(tb)) goto B_g;
      var ub:int = l[2];
      var vb:int = l[1];
      var wb:int = 1;
      var xb:int = vb + wb;
      var yb:int = ub * xb;
      var zb:int = 2;
      var ac:int = yb + zb;
      var bc:int = l[10];
      var cc:int = ac % bc;
      var dc:double = f64_convert_i32_s(cc);
      var ec:int = l[10];
      var fc:int = 5;
      var gc:int = ec * fc;
      var hc:double = f64_convert_i32_s(gc);
      var ic:double = dc / hc;
      var jc:int = l[5];
      var kc:int = l[2];
      var lc:int = 7200;
      var mc:int = kc * lc;
      var nc:int = jc + mc;
      var oc:int = l[1];
      var pc:int = 3;
      var qc:int = oc << pc;
      var rc:double_ptr = nc + qc;
      rc[0] = ic;
      var sc:int = l[1];
      var tc:int = 1;
      var uc:int = sc + tc;
      l[1] = uc;
      continue L_h;
    }
    unreachable;
    label B_g:
    var vc:int = l[2];
    var wc:int = 1;
    var xc:int = vc + wc;
    l[2] = xc;
    continue L_f;
  }
  unreachable;
  label B_e:
  var yc:int = 0;
  l[2] = yc;
  loop L_j {
    var zc:int = l[2];
    var ad:int = l[10];
    var bd:int = zc;
    var cd:int = ad;
    var dd:int = bd < cd;
    var ed:int = 1;
    var fd:int = dd & ed;
    if (eqz(fd)) goto B_i;
    var gd:int = 0;
    l[1] = gd;
    loop L_l {
      var hd:int = l[1];
      var id:int = l[7];
      var jd:int = hd;
      var kd:int = id;
      var ld:int = jd < kd;
      var md:int = 1;
      var nd:int = ld & md;
      if (eqz(nd)) goto B_k;
      var od:int = l[2];
      var pd:int = l[1];
      var qd:int = 3;
      var rd:int = pd + qd;
      var sd:int = od * rd;
      var td:int = l[8];
      var ud:int = sd % td;
      var vd:double = f64_convert_i32_s(ud);
      var wd:int = l[8];
      var xd:int = 5;
      var yd:int = wd * xd;
      var zd:double = f64_convert_i32_s(yd);
      var ae:double = vd / zd;
      var be:int = l[4];
      var ce:int = l[2];
      var de:int = 9600;
      var ee:int = ce * de;
      var fe:int = be + ee;
      var ge:int = l[1];
      var he:int = 3;
      var ie:int = ge << he;
      var je:double_ptr = fe + ie;
      je[0] = ae;
      var ke:int = l[1];
      var le:int = 1;
      var me:int = ke + le;
      l[1] = me;
      continue L_l;
    }
    unreachable;
    label B_k:
    var ne:int = l[2];
    var oe:int = 1;
    var pe:int = ne + oe;
    l[2] = pe;
    continue L_j;
  }
  unreachable;
  label B_i:
  var qe:int = 0;
  l[2] = qe;
  loop L_n {
    var re:int = l[2];
    var se:int = l[7];
    var te:int = re;
    var ue:int = se;
    var ve:int = te < ue;
    var we:int = 1;
    var xe:int = ve & we;
    if (eqz(xe)) goto B_m;
    var ye:int = 0;
    l[1] = ye;
    loop L_p {
      var ze:int = l[1];
      var af:int = l[8];
      var bf:int = ze;
      var cf:int = af;
      var df:int = bf < cf;
      var ef:int = 1;
      var ff:int = df & ef;
      if (eqz(ff)) goto B_o;
      var gf:int = l[2];
      var hf:int = l[1];
      var if:int = 2;
      var jf:int = hf + if;
      var kf:int = gf * jf;
      var lf:int = 2;
      var mf:int = kf + lf;
      var nf:int = l[9];
      var of:int = mf % nf;
      var pf:double = f64_convert_i32_s(of);
      var qf:int = l[9];
      var rf:int = 5;
      var sf:int = qf * rf;
      var tf:double = f64_convert_i32_s(sf);
      var uf:double = pf / tf;
      var vf:int = l[3];
      var wf:int = l[2];
      var xf:int = 8800;
      var yf:int = wf * xf;
      var zf:int = vf + yf;
      var ag:int = l[1];
      var bg:int = 3;
      var cg:int = ag << bg;
      var dg:double_ptr = zf + cg;
      dg[0] = uf;
      var eg:int = l[1];
      var fg:int = 1;
      var gg:int = eg + fg;
      l[1] = gg;
      continue L_p;
    }
    unreachable;
    label B_o:
    var hg:int = l[2];
    var ig:int = 1;
    var jg:int = hg + ig;
    l[2] = jg;
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
      var bb:int = 8800;
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

export function kernel_3mm(a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int) {
  var m:int = stack_pointer;
  var n:int = 64;
  var o:int_ptr = m - n;
  o[15] = a;
  o[14] = b;
  o[13] = c;
  o[12] = d;
  o[11] = e;
  o[10] = f;
  o[9] = g;
  o[8] = h;
  o[7] = i;
  o[6] = j;
  o[5] = k;
  o[4] = l;
  var p:int = 0;
  o[3] = p;
  loop L_b {
    var q:int = o[3];
    var r:int = o[15];
    var s:int = q;
    var t:int = r;
    var u:int = s < t;
    var v:int = 1;
    var w:int = u & v;
    if (eqz(w)) goto B_a;
    var x:int = 0;
    o[2] = x;
    loop L_d {
      var y:int = o[2];
      var z:int = o[14];
      var aa:int = y;
      var ba:int = z;
      var ca:int = aa < ba;
      var da:int = 1;
      var ea:int = ca & da;
      if (eqz(ea)) goto B_c;
      var fa:int = o[10];
      var ga:int = o[3];
      var ha:int = 7200;
      var ia:int = ga * ha;
      var ja:int = fa + ia;
      var ka:int = o[2];
      var la:int = 3;
      var ma:int = ka << la;
      var na:double_ptr = ja + ma;
      var oa:int = 0;
      var pa:double = f64_convert_i32_s(oa);
      na[0] = pa;
      var qa:int = 0;
      o[1] = qa;
      loop L_f {
        var ra:int = o[1];
        var sa:int = o[13];
        var ta:int = ra;
        var ua:int = sa;
        var va:int = ta < ua;
        var wa:int = 1;
        var xa:int = va & wa;
        if (eqz(xa)) goto B_e;
        var ya:int = o[9];
        var za:int = o[3];
        var ab:int = 8000;
        var bb:int = za * ab;
        var cb:int = ya + bb;
        var db:int = o[1];
        var eb:int = 3;
        var fb:int = db << eb;
        var gb:double_ptr = cb + fb;
        var hb:double = gb[0];
        var ib:int = o[8];
        var jb:int = o[1];
        var kb:int = 7200;
        var lb:int = jb * kb;
        var mb:int = ib + lb;
        var nb:int = o[2];
        var ob:int = 3;
        var pb:int = nb << ob;
        var qb:double_ptr = mb + pb;
        var rb:double = qb[0];
        var sb:int = o[10];
        var tb:int = o[3];
        var ub:int = 7200;
        var vb:int = tb * ub;
        var wb:int = sb + vb;
        var xb:int = o[2];
        var yb:int = 3;
        var zb:int = xb << yb;
        var ac:double_ptr = wb + zb;
        var bc:double = ac[0];
        var cc:double = hb * rb;
        var dc:double = cc + bc;
        ac[0] = dc;
        var ec:int = o[1];
        var fc:int = 1;
        var gc:int = ec + fc;
        o[1] = gc;
        continue L_f;
      }
      unreachable;
      label B_e:
      var hc:int = o[2];
      var ic:int = 1;
      var jc:int = hc + ic;
      o[2] = jc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var kc:int = o[3];
    var lc:int = 1;
    var mc:int = kc + lc;
    o[3] = mc;
    continue L_b;
  }
  unreachable;
  label B_a:
  var nc:int = 0;
  o[3] = nc;
  loop L_h {
    var oc:int = o[3];
    var pc:int = o[14];
    var qc:int = oc;
    var rc:int = pc;
    var sc:int = qc < rc;
    var tc:int = 1;
    var uc:int = sc & tc;
    if (eqz(uc)) goto B_g;
    var vc:int = 0;
    o[2] = vc;
    loop L_j {
      var wc:int = o[2];
      var xc:int = o[12];
      var yc:int = wc;
      var zc:int = xc;
      var ad:int = yc < zc;
      var bd:int = 1;
      var cd:int = ad & bd;
      if (eqz(cd)) goto B_i;
      var dd:int = o[7];
      var ed:int = o[3];
      var fd:int = 8800;
      var gd:int = ed * fd;
      var hd:int = dd + gd;
      var id:int = o[2];
      var jd:int = 3;
      var kd:int = id << jd;
      var ld:double_ptr = hd + kd;
      var md:int = 0;
      var nd:double = f64_convert_i32_s(md);
      ld[0] = nd;
      var od:int = 0;
      o[1] = od;
      loop L_l {
        var pd:int = o[1];
        var qd:int = o[11];
        var rd:int = pd;
        var sd:int = qd;
        var td:int = rd < sd;
        var ud:int = 1;
        var vd:int = td & ud;
        if (eqz(vd)) goto B_k;
        var wd:int = o[6];
        var xd:int = o[3];
        var yd:int = 9600;
        var zd:int = xd * yd;
        var ae:int = wd + zd;
        var be:int = o[1];
        var ce:int = 3;
        var de:int = be << ce;
        var ee:double_ptr = ae + de;
        var fe:double = ee[0];
        var ge:int = o[5];
        var he:int = o[1];
        var ie:int = 8800;
        var je:int = he * ie;
        var ke:int = ge + je;
        var le:int = o[2];
        var me:int = 3;
        var ne:int = le << me;
        var oe:double_ptr = ke + ne;
        var pe:double = oe[0];
        var qe:int = o[7];
        var re:int = o[3];
        var se:int = 8800;
        var te:int = re * se;
        var ue:int = qe + te;
        var ve:int = o[2];
        var we:int = 3;
        var xe:int = ve << we;
        var ye:double_ptr = ue + xe;
        var ze:double = ye[0];
        var af:double = fe * pe;
        var bf:double = af + ze;
        ye[0] = bf;
        var cf:int = o[1];
        var df:int = 1;
        var ef:int = cf + df;
        o[1] = ef;
        continue L_l;
      }
      unreachable;
      label B_k:
      var ff:int = o[2];
      var gf:int = 1;
      var hf:int = ff + gf;
      o[2] = hf;
      continue L_j;
    }
    unreachable;
    label B_i:
    var if:int = o[3];
    var jf:int = 1;
    var kf:int = if + jf;
    o[3] = kf;
    continue L_h;
  }
  unreachable;
  label B_g:
  var lf:int = 0;
  o[3] = lf;
  loop L_n {
    var mf:int = o[3];
    var nf:int = o[15];
    var of:int = mf;
    var pf:int = nf;
    var qf:int = of < pf;
    var rf:int = 1;
    var sf:int = qf & rf;
    if (eqz(sf)) goto B_m;
    var tf:int = 0;
    o[2] = tf;
    loop L_p {
      var uf:int = o[2];
      var vf:int = o[12];
      var wf:int = uf;
      var xf:int = vf;
      var yf:int = wf < xf;
      var zf:int = 1;
      var ag:int = yf & zf;
      if (eqz(ag)) goto B_o;
      var bg:int = o[4];
      var cg:int = o[3];
      var dg:int = 8800;
      var eg:int = cg * dg;
      var fg:int = bg + eg;
      var gg:int = o[2];
      var hg:int = 3;
      var ig:int = gg << hg;
      var jg:double_ptr = fg + ig;
      var kg:int = 0;
      var lg:double = f64_convert_i32_s(kg);
      jg[0] = lg;
      var mg:int = 0;
      o[1] = mg;
      loop L_r {
        var ng:int = o[1];
        var og:int = o[14];
        var pg:int = ng;
        var qg:int = og;
        var rg:int = pg < qg;
        var sg:int = 1;
        var tg:int = rg & sg;
        if (eqz(tg)) goto B_q;
        var ug:int = o[10];
        var vg:int = o[3];
        var wg:int = 7200;
        var xg:int = vg * wg;
        var yg:int = ug + xg;
        var zg:int = o[1];
        var ah:int = 3;
        var bh:int = zg << ah;
        var ch:double_ptr = yg + bh;
        var dh:double = ch[0];
        var eh:int = o[7];
        var fh:int = o[1];
        var gh:int = 8800;
        var hh:int = fh * gh;
        var ih:int = eh + hh;
        var jh:int = o[2];
        var kh:int = 3;
        var lh:int = jh << kh;
        var mh:double_ptr = ih + lh;
        var nh:double = mh[0];
        var oh:int = o[4];
        var ph:int = o[3];
        var qh:int = 8800;
        var rh:int = ph * qh;
        var sh:int = oh + rh;
        var th:int = o[2];
        var uh:int = 3;
        var vh:int = th << uh;
        var wh:double_ptr = sh + vh;
        var xh:double = wh[0];
        var yh:double = dh * nh;
        var zh:double = yh + xh;
        wh[0] = zh;
        var ai:int = o[1];
        var bi:int = 1;
        var ci:int = ai + bi;
        o[1] = ci;
        continue L_r;
      }
      unreachable;
      label B_q:
      var di:int = o[2];
      var ei:int = 1;
      var fi:int = di + ei;
      o[2] = fi;
      continue L_p;
    }
    unreachable;
    label B_o:
    var gi:int = o[3];
    var hi:int = 1;
    var ii:int = gi + hi;
    o[3] = ii;
    continue L_n;
  }
  unreachable;
  label B_m:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[15] = a;
  e[14] = b;
  var f:int = 800;
  e[13] = f;
  var g:int = 900;
  e[12] = g;
  var h:int = 1000;
  e[11] = h;
  var i:int = 1100;
  e[10] = i;
  var j:int = 1200;
  e[9] = j;
  var k:long = 720000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[8] = m;
  var n:long = 800000L;
  var o:int = 8;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e[7] = p;
  var q:long = 900000L;
  var r:int = 8;
  var s:int = legalfunc_polybench_alloc_data(q, r);
  e[6] = s;
  var t:long = 990000L;
  var u:int = 8;
  var v:int = legalfunc_polybench_alloc_data(t, u);
  e[5] = v;
  var w:long = 1080000L;
  var x:int = 8;
  var y:int = legalfunc_polybench_alloc_data(w, x);
  e[4] = y;
  var z:long = 1320000L;
  var aa:int = 8;
  var ba:int = legalfunc_polybench_alloc_data(z, aa);
  e[3] = ba;
  var ca:long = 880000L;
  var da:int = 8;
  var ea:int = legalfunc_polybench_alloc_data(ca, da);
  e[2] = ea;
  var fa:int = e[13];
  var ga:int = e[12];
  var ha:int = e[11];
  var ia:int = e[10];
  var ja:int = e[9];
  var ka:int = e[7];
  var la:int = e[6];
  var ma:int = e[4];
  var na:int = e[3];
  init_array(fa, ga, ha, ia, ja, ka, la, ma, na);
  var oa:int = e[13];
  var pa:int = e[12];
  var qa:int = e[11];
  var ra:int = e[10];
  var sa:int = e[9];
  var ta:int = e[8];
  var ua:int = e[7];
  var va:int = e[6];
  var wa:int = e[5];
  var xa:int = e[4];
  var ya:int = e[3];
  var za:int = e[2];
  kernel_3mm(oa, pa, qa, ra, sa, ta, ua, va, wa, xa, ya, za);
  var ab:int = e[15];
  var bb:int = 42;
  var cb:int = ab;
  var db:int = bb;
  var eb:int = cb > db;
  var fb:int = 1;
  var gb:int = eb & fb;
  if (eqz(gb)) goto B_a;
  var hb:int_ptr = e[14];
  var ib:int = hb[0];
  var jb:int = 87;
  var kb:int = memory_base;
  var lb:int = kb + jb;
  var mb:int = strcmp(ib, lb);
  if (mb) goto B_a;
  var nb:int = e[13];
  var ob:int = e[10];
  var pb:int = e[2];
  print_array(nb, ob, pb);
  label B_a:
  var qb:int = e[8];
  free(qb);
  var rb:int = e[7];
  free(rb);
  var sb:int = e[6];
  free(sb);
  var tb:int = e[5];
  free(tb);
  var ub:int = e[4];
  free(ub);
  var vb:int = e[3];
  free(vb);
  var wb:int = e[2];
  free(wb);
  var xb:int = 0;
  var yb:int = 64;
  var zb:int = e + yb;
  stack_pointer = zb;
  return xb;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

