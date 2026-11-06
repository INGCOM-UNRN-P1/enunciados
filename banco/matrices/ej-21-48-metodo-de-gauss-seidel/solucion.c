#include "ej-21-48-metodo-de-gauss-seidel.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

double *metodo_gauss_seidel(double **A,double *b,int n,double tol,int max_iter)
{
    if(!A||!b||n<=0||tol<=0||!isfinite(tol)||max_iter<=0)return NULL;
    size_t nn=(size_t)n;if(nn>SIZE_MAX/nn/sizeof(double))return NULL;
    for(size_t i=0;i<nn;i++)if(!A[i])return NULL;
    double *x=calloc(nn,sizeof(*x));if(!x)return NULL;
    for(int it=0;it<max_iter;it++){double delta=0;
        for(size_t i=0;i<nn;i++){double d=A[i][i],s=b[i];if(!isfinite(d)||d==0.0){free(x);return NULL;}for(size_t j=0;j<nn;j++)if(j!=i)s-=A[i][j]*x[j];double v=s/d;if(!isfinite(v)){free(x);return NULL;}if(fabs(v-x[i])>delta)delta=fabs(v-x[i]);x[i]=v;}
        if(delta<=tol)return x;}
    free(x);return NULL;
}
