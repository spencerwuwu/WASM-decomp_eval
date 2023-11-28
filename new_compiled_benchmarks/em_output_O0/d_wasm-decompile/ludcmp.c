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

export function kernel_ludcmp(a:int, b:int, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 48;
  var h:int = f - g;
  h[11]:int = a;
  h[10]:int = b;
  h[9]:int = c;
  h[8]:int = d;
  h[7]:int = e;
  var i:int = 0;
  h[6]:int = i;
  loop L_b {
    var j:int = h[6]:int;
    var k:int = h[11]:int;
    var l:int = j;
    var m:int = k;
    var n:int = l < m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = 0;
    h[5]:int = q;
    loop L_d {
      var r:int = h[5]:int;
      var s:int = h[6]:int;
      var t:int = r;
      var u:int = s;
      var v:int = t < u;
      var w:int = 1;
      var x:int = v & w;
      if (eqz(x)) goto B_c;
      var y:int = h[10]:int;
      var z:int = h[6]:int;
      var aa:int = 16000;
      var ba:int = z * aa;
      var ca:int = y + ba;
      var da:int = h[5]:int;
      var ea:int = 3;
      var fa:int = da << ea;
      var ga:double_ptr = ca + fa;
      var ha:double = ga[0];
      h[1]:double = ha;
      var ia:int = 0;
      h[4]:int = ia;
      loop L_f {
        var ja:int = h[4]:int;
        var ka:int = h[5]:int;
        var la:int = ja;
        var ma:int = ka;
        var na:int = la < ma;
        var oa:int = 1;
        var pa:int = na & oa;
        if (eqz(pa)) goto B_e;
        var qa:int = h[10]:int;
        var ra:int = h[6]:int;
        var sa:int = 16000;
        var ta:int = ra * sa;
        var ua:int = qa + ta;
        var va:int = h[4]:int;
        var wa:int = 3;
        var xa:int = va << wa;
        var ya:double_ptr = ua + xa;
        var za:double = ya[0];
        var ab:int = h[10]:int;
        var bb:int = h[4]:int;
        var cb:int = 16000;
        var db:int = bb * cb;
        var eb:int = ab + db;
        var fb:int = h[5]:int;
        var gb:int = 3;
        var hb:int = fb << gb;
        var ib:double_ptr = eb + hb;
        var jb:double = ib[0];
        var kb:double = h[1]:double;
        var lb:double = -(za);
        var mb:double = lb * jb;
        var nb:double = mb + kb;
        h[1]:double = nb;
        var ob:int = h[4]:int;
        var pb:int = 1;
        var qb:int = ob + pb;
        h[4]:int = qb;
        continue L_f;
      }
      unreachable;
      label B_e:
      var rb:double = h[1]:double;
      var sb:int = h[10]:int;
      var tb:int = h[5]:int;
      var ub:int = 16000;
      var vb:int = tb * ub;
      var wb:int = sb + vb;
      var xb:int = h[5]:int;
      var yb:int = 3;
      var zb:int = xb << yb;
      var ac:double_ptr = wb + zb;
      var bc:double = ac[0];
      var cc:double = rb / bc;
      var dc:int = h[10]:int;
      var ec:int = h[6]:int;
      var fc:int = 16000;
      var gc:int = ec * fc;
      var hc:int = dc + gc;
      var ic:int = h[5]:int;
      var jc:int = 3;
      var kc:int = ic << jc;
      var lc:double_ptr = hc + kc;
      lc[0] = cc;
      var mc:int = h[5]:int;
      var nc:int = 1;
      var oc:int = mc + nc;
      h[5]:int = oc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var pc:int = h[6]:int;
    h[5]:int = pc;
    loop L_h {
      var qc:int = h[5]:int;
      var rc:int = h[11]:int;
      var sc:int = qc;
      var tc:int = rc;
      var uc:int = sc < tc;
      var vc:int = 1;
      var wc:int = uc & vc;
      if (eqz(wc)) goto B_g;
      var xc:int = h[10]:int;
      var yc:int = h[6]:int;
      var zc:int = 16000;
      var ad:int = yc * zc;
      var bd:int = xc + ad;
      var cd:int = h[5]:int;
      var dd:int = 3;
      var ed:int = cd << dd;
      var fd:double_ptr = bd + ed;
      var gd:double = fd[0];
      h[1]:double = gd;
      var hd:int = 0;
      h[4]:int = hd;
      loop L_j {
        var id:int = h[4]:int;
        var jd:int = h[6]:int;
        var kd:int = id;
        var ld:int = jd;
        var md:int = kd < ld;
        var nd:int = 1;
        var od:int = md & nd;
        if (eqz(od)) goto B_i;
        var pd:int = h[10]:int;
        var qd:int = h[6]:int;
        var rd:int = 16000;
        var sd:int = qd * rd;
        var td:int = pd + sd;
        var ud:int = h[4]:int;
        var vd:int = 3;
        var wd:int = ud << vd;
        var xd:double_ptr = td + wd;
        var yd:double = xd[0];
        var zd:int = h[10]:int;
        var ae:int = h[4]:int;
        var be:int = 16000;
        var ce:int = ae * be;
        var de:int = zd + ce;
        var ee:int = h[5]:int;
        var fe:int = 3;
        var ge:int = ee << fe;
        var he:double_ptr = de + ge;
        var ie:double = he[0];
        var je:double = h[1]:double;
        var ke:double = -(yd);
        var le:double = ke * ie;
        var me:double = le + je;
        h[1]:double = me;
        var ne:int = h[4]:int;
        var oe:int = 1;
        var pe:int = ne + oe;
        h[4]:int = pe;
        continue L_j;
      }
      unreachable;
      label B_i:
      var qe:double = h[1]:double;
      var re:int = h[10]:int;
      var se:int = h[6]:int;
      var te:int = 16000;
      var ue:int = se * te;
      var ve:int = re + ue;
      var we:int = h[5]:int;
      var xe:int = 3;
      var ye:int = we << xe;
      var ze:double_ptr = ve + ye;
      ze[0] = qe;
      var af:int = h[5]:int;
      var bf:int = 1;
      var cf:int = af + bf;
      h[5]:int = cf;
      continue L_h;
    }
    unreachable;
    label B_g:
    var df:int = h[6]:int;
    var ef:int = 1;
    var ff:int = df + ef;
    h[6]:int = ff;
    continue L_b;
  }
  unreachable;
  label B_a:
  var gf:int = 0;
  h[6]:int = gf;
  loop L_l {
    var hf:int = h[6]:int;
    var if:int = h[11]:int;
    var jf:int = hf;
    var kf:int = if;
    var lf:int = jf < kf;
    var mf:int = 1;
    var nf:int = lf & mf;
    if (eqz(nf)) goto B_k;
    var of:int = h[9]:int;
    var pf:int = h[6]:int;
    var qf:int = 3;
    var rf:int = pf << qf;
    var sf:double_ptr = of + rf;
    var tf:double = sf[0];
    h[1]:double = tf;
    var uf:int = 0;
    h[5]:int = uf;
    loop L_n {
      var vf:int = h[5]:int;
      var wf:int = h[6]:int;
      var xf:int = vf;
      var yf:int = wf;
      var zf:int = xf < yf;
      var ag:int = 1;
      var bg:int = zf & ag;
      if (eqz(bg)) goto B_m;
      var cg:int = h[10]:int;
      var dg:int = h[6]:int;
      var eg:int = 16000;
      var fg:int = dg * eg;
      var gg:int = cg + fg;
      var hg:int = h[5]:int;
      var ig:int = 3;
      var jg:int = hg << ig;
      var kg:double_ptr = gg + jg;
      var lg:double = kg[0];
      var mg:int = h[7]:int;
      var ng:int = h[5]:int;
      var og:int = 3;
      var pg:int = ng << og;
      var qg:double_ptr = mg + pg;
      var rg:double = qg[0];
      var sg:double = h[1]:double;
      var tg:double = -(lg);
      var ug:double = tg * rg;
      var vg:double = ug + sg;
      h[1]:double = vg;
      var wg:int = h[5]:int;
      var xg:int = 1;
      var yg:int = wg + xg;
      h[5]:int = yg;
      continue L_n;
    }
    unreachable;
    label B_m:
    var zg:double = h[1]:double;
    var ah:int = h[7]:int;
    var bh:int = h[6]:int;
    var ch:int = 3;
    var dh:int = bh << ch;
    var eh:double_ptr = ah + dh;
    eh[0] = zg;
    var fh:int = h[6]:int;
    var gh:int = 1;
    var hh:int = fh + gh;
    h[6]:int = hh;
    continue L_l;
  }
  unreachable;
  label B_k:
  var ih:int = h[11]:int;
  var jh:int = 1;
  var kh:int = ih - jh;
  h[6]:int = kh;
  loop L_p {
    var lh:int = h[6]:int;
    var mh:int = 0;
    var nh:int = lh;
    var oh:int = mh;
    var ph:int = nh >= oh;
    var qh:int = 1;
    var rh:int = ph & qh;
    if (eqz(rh)) goto B_o;
    var sh:int = h[7]:int;
    var th:int = h[6]:int;
    var uh:int = 3;
    var vh:int = th << uh;
    var wh:double_ptr = sh + vh;
    var xh:double = wh[0];
    h[1]:double = xh;
    var yh:int = h[6]:int;
    var zh:int = 1;
    var ai:int = yh + zh;
    h[5]:int = ai;
    loop L_r {
      var bi:int = h[5]:int;
      var ci:int = h[11]:int;
      var di:int = bi;
      var ei:int = ci;
      var fi:int = di < ei;
      var gi:int = 1;
      var hi:int = fi & gi;
      if (eqz(hi)) goto B_q;
      var ii:int = h[10]:int;
      var ji:int = h[6]:int;
      var ki:int = 16000;
      var li:int = ji * ki;
      var mi:int = ii + li;
      var ni:int = h[5]:int;
      var oi:int = 3;
      var pi:int = ni << oi;
      var qi:double_ptr = mi + pi;
      var ri:double = qi[0];
      var si:int = h[8]:int;
      var ti:int = h[5]:int;
      var ui:int = 3;
      var vi:int = ti << ui;
      var wi:double_ptr = si + vi;
      var xi:double = wi[0];
      var yi:double = h[1]:double;
      var zi:double = -(ri);
      var aj:double = zi * xi;
      var bj:double = aj + yi;
      h[1]:double = bj;
      var cj:int = h[5]:int;
      var dj:int = 1;
      var ej:int = cj + dj;
      h[5]:int = ej;
      continue L_r;
    }
    unreachable;
    label B_q:
    var fj:double = h[1]:double;
    var gj:int = h[10]:int;
    var hj:int = h[6]:int;
    var ij:int = 16000;
    var jj:int = hj * ij;
    var kj:int = gj + jj;
    var lj:int = h[6]:int;
    var mj:int = 3;
    var nj:int = lj << mj;
    var oj:double_ptr = kj + nj;
    var pj:double = oj[0];
    var qj:double = fj / pj;
    var rj:int = h[8]:int;
    var sj:int = h[6]:int;
    var tj:int = 3;
    var uj:int = sj << tj;
    var vj:double_ptr = rj + uj;
    vj[0] = qj;
    var wj:int = h[6]:int;
    var xj:int = -1;
    var yj:int = wj + xj;
    h[6]:int = yj;
    continue L_p;
  }
  unreachable;
  label B_o:
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
  var p:long = 2000L;
  var q:int = 8;
  var r:int = legalfunc_polybench_alloc_data(p, q);
  e[1] = r;
  var s:int = e[5];
  var t:int = e[4];
  var u:int = e[3];
  var v:int = e[2];
  var w:int = e[1];
  init_array(s, t, u, v, w);
  var x:int = e[5];
  var y:int = e[4];
  var z:int = e[3];
  var aa:int = e[2];
  var ba:int = e[1];
  kernel_ludcmp(x, y, z, aa, ba);
  var ca:int = e[7];
  var da:int = 42;
  var ea:int = ca;
  var fa:int = da;
  var ga:int = ea > fa;
  var ha:int = 1;
  var ia:int = ga & ha;
  if (eqz(ia)) goto B_a;
  var ja:int_ptr = e[6];
  var ka:int = ja[0];
  var la:int = 87;
  var ma:int = memory_base;
  var na:int = ma + la;
  var oa:int = strcmp(ka, na);
  if (oa) goto B_a;
  var pa:int = e[5];
  var qa:int = e[2];
  print_array(pa, qa);
  label B_a:
  var ra:int = e[4];
  free(ra);
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
  var g:int = 64;
  var h:int = f - g;
  stack_pointer = h;
  h[15]:int = a;
  h[14]:int = b;
  h[13]:int = c;
  h[12]:int = d;
  h[11]:int = e;
  var i:int = h[15]:int;
  var j:double = f64_convert_i32_s(i);
  h[3]:double = j;
  var k:int = 0;
  h[10]:int = k;
  loop L_b {
    var l:int = h[10]:int;
    var m:int = h[15]:int;
    var n:int = l;
    var o:int = m;
    var p:int = n < o;
    var q:int = 1;
    var r:int = p & q;
    if (eqz(r)) goto B_a;
    var s:int = h[12]:int;
    var t:int = h[10]:int;
    var u:int = 3;
    var v:int = t << u;
    var w:double_ptr = s + v;
    var x:int = 0;
    var y:double = f64_convert_i32_s(x);
    w[0] = y;
    var z:int = h[11]:int;
    var aa:int = h[10]:int;
    var ba:int = 3;
    var ca:int = aa << ba;
    var da:double_ptr = z + ca;
    var ea:int = 0;
    var fa:double = f64_convert_i32_s(ea);
    da[0] = fa;
    var ga:int = h[10]:int;
    var ha:int = 1;
    var ia:int = ga + ha;
    var ja:double = f64_convert_i32_s(ia);
    var ka:double = h[3]:double;
    var la:double = ja / ka;
    var ma:double = 2.0;
    var na:double = la / ma;
    var oa:double = 4.0;
    var pa:double = na + oa;
    var qa:int = h[13]:int;
    var ra:int = h[10]:int;
    var sa:int = 3;
    var ta:int = ra << sa;
    var ua:double_ptr = qa + ta;
    ua[0] = pa;
    var va:int = h[10]:int;
    var wa:int = 1;
    var xa:int = va + wa;
    h[10]:int = xa;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ya:int = 0;
  h[10]:int = ya;
  loop L_d {
    var za:int = h[10]:int;
    var ab:int = h[15]:int;
    var bb:int = za;
    var cb:int = ab;
    var db:int = bb < cb;
    var eb:int = 1;
    var fb:int = db & eb;
    if (eqz(fb)) goto B_c;
    var gb:int = 0;
    h[9]:int = gb;
    loop L_f {
      var hb:int = h[9]:int;
      var ib:int = h[10]:int;
      var jb:int = hb;
      var kb:int = ib;
      var lb:int = jb <= kb;
      var mb:int = 1;
      var nb:int = lb & mb;
      if (eqz(nb)) goto B_e;
      var ob:int = h[9]:int;
      var pb:int = 0;
      var qb:int = pb - ob;
      var rb:int = h[15]:int;
      var sb:int = qb % rb;
      var tb:double = f64_convert_i32_s(sb);
      var ub:int = h[15]:int;
      var vb:double = f64_convert_i32_s(ub);
      var wb:double = tb / vb;
      var xb:double = 1.0;
      var yb:double = wb + xb;
      var zb:int = h[14]:int;
      var ac:int = h[10]:int;
      var bc:int = 16000;
      var cc:int = ac * bc;
      var dc:int = zb + cc;
      var ec:int = h[9]:int;
      var fc:int = 3;
      var gc:int = ec << fc;
      var hc:double_ptr = dc + gc;
      hc[0] = yb;
      var ic:int = h[9]:int;
      var jc:int = 1;
      var kc:int = ic + jc;
      h[9]:int = kc;
      continue L_f;
    }
    unreachable;
    label B_e:
    var lc:int = h[10]:int;
    var mc:int = 1;
    var nc:int = lc + mc;
    h[9]:int = nc;
    loop L_h {
      var oc:int = h[9]:int;
      var pc:int = h[15]:int;
      var qc:int = oc;
      var rc:int = pc;
      var sc:int = qc < rc;
      var tc:int = 1;
      var uc:int = sc & tc;
      if (eqz(uc)) goto B_g;
      var vc:int = h[14]:int;
      var wc:int = h[10]:int;
      var xc:int = 16000;
      var yc:int = wc * xc;
      var zc:int = vc + yc;
      var ad:int = h[9]:int;
      var bd:int = 3;
      var cd:int = ad << bd;
      var dd:double_ptr = zc + cd;
      var ed:int = 0;
      var fd:double = f64_convert_i32_s(ed);
      dd[0] = fd;
      var gd:int = h[9]:int;
      var hd:int = 1;
      var id:int = gd + hd;
      h[9]:int = id;
      continue L_h;
    }
    unreachable;
    label B_g:
    var jd:int = h[14]:int;
    var kd:int = h[10]:int;
    var ld:int = 16000;
    var md:int = kd * ld;
    var nd:int = jd + md;
    var od:int = h[10]:int;
    var pd:int = 3;
    var qd:int = od << pd;
    var rd:double_ptr = nd + qd;
    var sd:double = 1.0;
    rd[0] = sd;
    var td:int = h[10]:int;
    var ud:int = 1;
    var vd:int = td + ud;
    h[10]:int = vd;
    continue L_d;
  }
  unreachable;
  label B_c:
  var wd:long = 4000000L;
  var xd:int = 8;
  var yd:int = legalfunc_polybench_alloc_data(wd, xd);
  h[2]:int = yd;
  var zd:int = 0;
  h[5]:int = zd;
  loop L_j {
    var ae:int = h[5]:int;
    var be:int = h[15]:int;
    var ce:int = ae;
    var de:int = be;
    var ee:int = ce < de;
    var fe:int = 1;
    var ge:int = ee & fe;
    if (eqz(ge)) goto B_i;
    var he:int = 0;
    h[4]:int = he;
    loop L_l {
      var ie:int = h[4]:int;
      var je:int = h[15]:int;
      var ke:int = ie;
      var le:int = je;
      var me:int = ke < le;
      var ne:int = 1;
      var oe:int = me & ne;
      if (eqz(oe)) goto B_k;
      var pe:int = h[2]:int;
      var qe:int = h[5]:int;
      var re:int = 16000;
      var se:int = qe * re;
      var te:int = pe + se;
      var ue:int = h[4]:int;
      var ve:int = 3;
      var we:int = ue << ve;
      var xe:double_ptr = te + we;
      var ye:int = 0;
      var ze:double = f64_convert_i32_s(ye);
      xe[0] = ze;
      var af:int = h[4]:int;
      var bf:int = 1;
      var cf:int = af + bf;
      h[4]:int = cf;
      continue L_l;
    }
    unreachable;
    label B_k:
    var df:int = h[5]:int;
    var ef:int = 1;
    var ff:int = df + ef;
    h[5]:int = ff;
    continue L_j;
  }
  unreachable;
  label B_i:
  var gf:int = 0;
  h[3]:int = gf;
  loop L_n {
    var hf:int = h[3]:int;
    var if:int = h[15]:int;
    var jf:int = hf;
    var kf:int = if;
    var lf:int = jf < kf;
    var mf:int = 1;
    var nf:int = lf & mf;
    if (eqz(nf)) goto B_m;
    var of:int = 0;
    h[5]:int = of;
    loop L_p {
      var pf:int = h[5]:int;
      var qf:int = h[15]:int;
      var rf:int = pf;
      var sf:int = qf;
      var tf:int = rf < sf;
      var uf:int = 1;
      var vf:int = tf & uf;
      if (eqz(vf)) goto B_o;
      var wf:int = 0;
      h[4]:int = wf;
      loop L_r {
        var xf:int = h[4]:int;
        var yf:int = h[15]:int;
        var zf:int = xf;
        var ag:int = yf;
        var bg:int = zf < ag;
        var cg:int = 1;
        var dg:int = bg & cg;
        if (eqz(dg)) goto B_q;
        var eg:int = h[14]:int;
        var fg:int = h[5]:int;
        var gg:int = 16000;
        var hg:int = fg * gg;
        var ig:int = eg + hg;
        var jg:int = h[3]:int;
        var kg:int = 3;
        var lg:int = jg << kg;
        var mg:double_ptr = ig + lg;
        var ng:double = mg[0];
        var og:int = h[14]:int;
        var pg:int = h[4]:int;
        var qg:int = 16000;
        var rg:int = pg * qg;
        var sg:int = og + rg;
        var tg:int = h[3]:int;
        var ug:int = 3;
        var vg:int = tg << ug;
        var wg:double_ptr = sg + vg;
        var xg:double = wg[0];
        var yg:int = h[2]:int;
        var zg:int = h[5]:int;
        var ah:int = 16000;
        var bh:int = zg * ah;
        var ch:int = yg + bh;
        var dh:int = h[4]:int;
        var eh:int = 3;
        var fh:int = dh << eh;
        var gh:double_ptr = ch + fh;
        var hh:double = gh[0];
        var ih:double = ng * xg;
        var jh:double = ih + hh;
        gh[0] = jh;
        var kh:int = h[4]:int;
        var lh:int = 1;
        var mh:int = kh + lh;
        h[4]:int = mh;
        continue L_r;
      }
      unreachable;
      label B_q:
      var nh:int = h[5]:int;
      var oh:int = 1;
      var ph:int = nh + oh;
      h[5]:int = ph;
      continue L_p;
    }
    unreachable;
    label B_o:
    var qh:int = h[3]:int;
    var rh:int = 1;
    var sh:int = qh + rh;
    h[3]:int = sh;
    continue L_n;
  }
  unreachable;
  label B_m:
  var th:int = 0;
  h[5]:int = th;
  loop L_t {
    var uh:int = h[5]:int;
    var vh:int = h[15]:int;
    var wh:int = uh;
    var xh:int = vh;
    var yh:int = wh < xh;
    var zh:int = 1;
    var ai:int = yh & zh;
    if (eqz(ai)) goto B_s;
    var bi:int = 0;
    h[4]:int = bi;
    loop L_v {
      var ci:int = h[4]:int;
      var di:int = h[15]:int;
      var ei:int = ci;
      var fi:int = di;
      var gi:int = ei < fi;
      var hi:int = 1;
      var ii:int = gi & hi;
      if (eqz(ii)) goto B_u;
      var ji:int = h[2]:int;
      var ki:int = h[5]:int;
      var li:int = 16000;
      var mi:int = ki * li;
      var ni:int = ji + mi;
      var oi:int = h[4]:int;
      var pi:int = 3;
      var qi:int = oi << pi;
      var ri:double_ptr = ni + qi;
      var si:double = ri[0];
      var ti:int = h[14]:int;
      var ui:int = h[5]:int;
      var vi:int = 16000;
      var wi:int = ui * vi;
      var xi:int = ti + wi;
      var yi:int = h[4]:int;
      var zi:int = 3;
      var aj:int = yi << zi;
      var bj:double_ptr = xi + aj;
      bj[0] = si;
      var cj:int = h[4]:int;
      var dj:int = 1;
      var ej:int = cj + dj;
      h[4]:int = ej;
      continue L_v;
    }
    unreachable;
    label B_u:
    var fj:int = h[5]:int;
    var gj:int = 1;
    var hj:int = fj + gj;
    h[5]:int = hj;
    continue L_t;
  }
  unreachable;
  label B_s:
  var ij:int = h[2]:int;
  free(ij);
  var jj:int = 64;
  var kj:int = h + jj;
  stack_pointer = kj;
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

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

