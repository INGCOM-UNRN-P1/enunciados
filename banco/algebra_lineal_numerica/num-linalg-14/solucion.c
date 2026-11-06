#include "num-linalg-14.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
double interpolar_newton(const double*x,const double*y,int n,double p){if(!x||!y||n<=0||!isfinite(p))return NAN;double*c=malloc((size_t)n*sizeof*c);if(!c)return NAN;for(int i=0;i<n;i++){if(!isfinite(x[i])||!isfinite(y[i])){free(c);return NAN;}c[i]=y[i];}for(int k=1;k<n;k++)for(int i=n-1;i>=k;i--){double d=x[i]-x[i-k];if(d==0){free(c);return NAN;}c[i]=(c[i]-c[i-1])/d;}double v=c[n-1];for(int i=n-2;i>=0;i--)v=v*(p-x[i])+c[i];free(c);return isfinite(v)?v:NAN;}
