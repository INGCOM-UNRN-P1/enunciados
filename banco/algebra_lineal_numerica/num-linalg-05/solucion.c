#include "num-linalg-05.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int gauss_pivoteo_parcial(const double*A,const double*b,size_t n,double*x){if(!A||!b||!x||!n||n>SIZE_MAX/n||n*n>SIZE_MAX/sizeof(double))return 0;double*m=malloc(n*n*sizeof(*m)),*r=malloc(n*sizeof(*r));if(!m||!r){free(m);free(r);return 0;}memcpy(m,A,n*n*sizeof(*m));memcpy(r,b,n*sizeof(*r));for(size_t k=0;k<n;k++){size_t p=k;for(size_t i=k+1;i<n;i++)if(fabs(m[i*n+k])>fabs(m[p*n+k]))p=i;if(m[p*n+k]==0.0){free(m);free(r);return 0;}if(p!=k){for(size_t j=0;j<n;j++){double t=m[p*n+j];m[p*n+j]=m[k*n+j];m[k*n+j]=t;}double t=r[p];r[p]=r[k];r[k]=t;}for(size_t i=k+1;i<n;i++){double q=m[i*n+k]/m[k*n+k];for(size_t j=k+1;j<n;j++)m[i*n+j]-=q*m[k*n+j];r[i]-=q*r[k];}}for(size_t ii=n;ii-->0;){double s=r[ii];for(size_t j=ii+1;j<n;j++)s-=m[ii*n+j]*x[j];x[ii]=s/m[ii*n+ii];}free(m);free(r);return 1;}
