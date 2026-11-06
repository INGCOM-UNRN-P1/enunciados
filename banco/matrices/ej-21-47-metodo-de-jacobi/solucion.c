#include "ej-21-47-metodo-de-jacobi.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

double *metodo_jacobi(double **A,double *b,int n,double tol,int max_iter)
{
    if(!A||!b||n<=0||tol<=0||!isfinite(tol)||max_iter<=0)return NULL;
    size_t nn=(size_t)n;if(nn>SIZE_MAX/nn/sizeof(double))return NULL;
    for(size_t i=0;i<nn;i++)if(!A[i])return NULL;
    double *old=calloc(nn,sizeof(*old)),*next=malloc(nn*sizeof(*next));if(!old||!next){free(old);free(next);return NULL;}
    for(int it=0;it<max_iter;it++){double delta=0;
        for(size_t i=0;i<nn;i++){double d=A[i][i],s=b[i];if(!isfinite(d)||d==0.0){free(old);free(next);return NULL;}for(size_t j=0;j<nn;j++)if(j!=i)s-=A[i][j]*old[j];next[i]=s/d;if(!isfinite(next[i])){free(old);free(next);return NULL;}if(fabs(next[i]-old[i])>delta)delta=fabs(next[i]-old[i]);}
        double *t=old;old=next;next=t;if(delta<=tol){free(next);return old;}}
    free(old);free(next);return NULL;
}
