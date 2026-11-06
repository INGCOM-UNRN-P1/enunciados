#include "num-linalg-28.h"
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

int bairstow_par_raices(const double *a, size_t n, double u, double v, double tol, size_t maxit,
                         double *x1r, double *x1i, double *x2r, double *x2i)
{
    if (!a||!x1r||!x1i||!x2r||!x2i||n<2||!maxit||!isfinite(tol)||tol<=0||!isfinite(u)||!isfinite(v)) return 0;
    if (n > SIZE_MAX / sizeof(double) - 1 || x1r == x1i || x1r == x2r || x1r == x2i || x1i == x2r || x1i == x2i || x2r == x2i) return 0;
    for(size_t i=0;i<=n;i++) if(!isfinite(a[i])) return 0;
    if(a[0]==0.0) return 0;
    double *b=malloc((n+1)*sizeof(*b)), *du=malloc((n+1)*sizeof(*du)), *dv=malloc((n+1)*sizeof(*dv));
    if(!b||!du||!dv){free(b);free(du);free(dv);return 0;}
    int ok=0;
    for(size_t it=0;it<maxit;it++) {
        b[0]=a[0]; du[0]=dv[0]=0.0;
        for(size_t i=1;i<=n;i++) {
            b[i]=a[i]-u*b[i-1]-(i>=2?v*b[i-2]:0.0);
            du[i]=-b[i-1]-u*du[i-1]-(i>=2?v*du[i-2]:0.0);
            dv[i]=-(i>=2?b[i-2]:0.0)-u*dv[i-1]-(i>=2?v*dv[i-2]:0.0);
            if(!isfinite(b[i])||!isfinite(du[i])||!isfinite(dv[i])) goto done;
        }
        double f1=b[n-1], f2=b[n];
        if(fabs(f1)<=tol && fabs(f2)<=tol){ok=1;break;}
        double det=du[n-1]*dv[n]-dv[n-1]*du[n];
        if(!isfinite(det)||det==0.0) goto done;
        double delta_u=(f1*dv[n]-f2*dv[n-1])/det;
        double delta_v=(du[n-1]*f2-du[n]*f1)/det;
        u-=delta_u; v-=delta_v;
        if(!isfinite(u)||!isfinite(v)) goto done;
    }
    if(ok) {
        double disc=u*u-4.0*v;
        if(!isfinite(disc)) ok=0;
        else if(disc>=0.0) { *x1r=(-u-sqrt(disc))/2.0; *x2r=(-u+sqrt(disc))/2.0; *x1i=*x2i=0.0; }
        else { *x1r=*x2r=-u/2.0; *x1i=-sqrt(-disc)/2.0; *x2i=-*x1i; }
    }
done:
    free(b);free(du);free(dv);return ok;
}
