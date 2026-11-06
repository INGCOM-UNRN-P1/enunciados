#include "num-linalg-26.h"
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

int fft_radix2(double *real, double *imag, size_t n)
{
    if (!real || !imag || n == 0 || (n & (n - 1)) != 0 || n > SIZE_MAX / sizeof(double)) return 0;
    double *r = malloc(n * sizeof(*r)), *im = malloc(n * sizeof(*im));
    if (!r || !im) { free(r); free(im); return 0; }
    for (size_t i=0;i<n;i++) { if (!isfinite(real[i]) || !isfinite(imag[i])) { free(r); free(im); return 0; } r[i]=real[i]; im[i]=imag[i]; }
    for (size_t i=1,j=0;i<n;i++) {
        size_t bit=n>>1; for (; j & bit; bit>>=1) j^=bit; j^=bit;
        if (i<j) { double t=r[i];r[i]=r[j];r[j]=t;t=im[i];im[i]=im[j];im[j]=t; }
    }
    const double pi=acos(-1.0);
    for (size_t len=2;len<=n;) {
        double angle=-2.0*pi/(double)len, wr0=cos(angle), wi0=sin(angle);
        for (size_t base=0;base<n;base+=len) {
            double wr=1.0, wi=0.0; size_t half=len/2;
            for (size_t j=0;j<half;j++) {
                size_t u=base+j,v=u+half; double tr=wr*r[v]-wi*im[v], ti=wr*im[v]+wi*r[v];
                r[v]=r[u]-tr; im[v]=im[u]-ti; r[u]+=tr; im[u]+=ti;
                double next=wr*wr0-wi*wi0; wi=wr*wi0+wi*wr0; wr=next;
            }
        }
        if (len == n) {
            break;
        }
        len *= 2;
    }
    for (size_t i=0;i<n;i++) if (!isfinite(r[i]) || !isfinite(im[i])) { free(r); free(im); return 0; }
    for (size_t i=0;i<n;i++) { real[i]=r[i]; imag[i]=im[i]; }
    free(r); free(im); return 1;
}
