// adjtimex-1.29.c mat.c:80
// need context sensitive anlaysis.
// False alarm disappears with '-inline mat_add -inline kalman_update' option.
#include<stdio.h>
#include<stdlib.h>

void mat_add(void *a, int ar, int ac,
	     void *b, int br, int bc,
	     void *c, int cr, int cc)
{
  double *_a = (double *)a;
  double *_b = (double *)b;
  double *_c = (double *)c;
  int i;

  assert(ar == br && br == cr && ac == bc && bc == cc);

  sparrow_print(ar);
  sparrow_print(ac);
  sparrow_print(ar*ac);
  for (i = 0; i < ar*ac; i++)
    _c[i] = _a[i] + _b[i];
}

static 
void kalman_update(double *x,	/* state vector */
		   int xr,	/* rows in x (must be 1 or 2) */
		   double *p,	/* covariance matrix for x (has xr
				   rows and columns) */
		   double *h,	/* transforms from state space to
				   measurement space (has zr rows
				   and xr columns) */
		   double *z,	/* measurement vector */
		   int zr,	/* rows in z (must be 1 or 2) */
		   double *r)	/* covariance matrix for z (has zr
				   rows and columns) */
{
  static double k[4], num[4], denom[4], v[4], w[4];
  int pr=xr, pc=xr, 
    hr=zr, hc=xr, 
    rr=zr, rc=zr,
    kr=xr, kc=zr,
    nr=xr, nc=zr,
    dr=zr, dc=zr,
    vr=xr, vc=1,
    wr=zr, wc=1;

  /* find the Kalman gain k:
     k = p h' /(h p h' + r) */
  mat_add(denom,dr,dc, r,rr,rc, denom,dr,dc);

  /* update the state x:
     x <- x + k (z - h x) */
  mat_add(x,xr,1, v,vr,vc, x,xr,1);
}

int main() {
    double x[2], p[4], h[4], z[2], r[4];
    kalman_update(x, 2, p, h, z, 1, r);
    kalman_update(x, 2, p, h, z, 2, r);

    return 0;
}