#include "ej-21-46-eliminacion-gaussiana-completa.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

double *resolver_sistema(double **A, double *b, int n)
{
    if (A == NULL || b == NULL || n <= 0 || (size_t)n > SIZE_MAX / (size_t)n / sizeof(double)) return NULL;
    size_t nn=(size_t)n;
    double *m=malloc(nn*nn*sizeof(*m)), *rhs=malloc(nn*sizeof(*rhs)), *x=malloc(nn*sizeof(*x));
    size_t *perm=malloc(nn*sizeof(*perm));
    if(!m||!rhs||!x||!perm){free(m);free(rhs);free(x);free(perm);return NULL;}
    for(size_t i=0;i<nn;i++){if(A[i]==NULL){free(m);free(rhs);free(x);free(perm);return NULL;}memcpy(m+i*nn,A[i],nn*sizeof(*m));rhs[i]=b[i];perm[i]=i;}
    for(size_t k=0;k<nn;k++){
        size_t pr=k,pc=k;double best=0;
        for(size_t i=k;i<nn;i++)for(size_t j=k;j<nn;j++)if(fabs(m[i*nn+j])>best){best=fabs(m[i*nn+j]);pr=i;pc=j;}
        if(best==0.0){free(m);free(rhs);free(x);free(perm);return NULL;}
        if(pr!=k){for(size_t j=0;j<nn;j++){double t=m[k*nn+j];m[k*nn+j]=m[pr*nn+j];m[pr*nn+j]=t;}double t=rhs[k];rhs[k]=rhs[pr];rhs[pr]=t;}
        if(pc!=k){for(size_t i=0;i<nn;i++){double t=m[i*nn+k];m[i*nn+k]=m[i*nn+pc];m[i*nn+pc]=t;}size_t t=perm[k];perm[k]=perm[pc];perm[pc]=t;}
        for(size_t i=k+1;i<nn;i++){double f=m[i*nn+k]/m[k*nn+k];m[i*nn+k]=0;for(size_t j=k+1;j<nn;j++)m[i*nn+j]-=f*m[k*nn+j];rhs[i]-=f*rhs[k];}
    }
    for(size_t ii=nn;ii-->0;){double s=rhs[ii];for(size_t j=ii+1;j<nn;j++)s-=m[ii*nn+j]*x[j];x[ii]=s/m[ii*nn+ii];}
    double *out=malloc(nn*sizeof(*out));if(!out){free(m);free(rhs);free(x);free(perm);return NULL;}for(size_t i=0;i<nn;i++)out[perm[i]]=x[i];
    free(m);free(rhs);free(x);free(perm);return out;
}
