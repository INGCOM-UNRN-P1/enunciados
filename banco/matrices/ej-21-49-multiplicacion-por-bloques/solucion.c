#include "ej-21-49-multiplicacion-por-bloques.h"
#include <float.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

double **multiplicar_bloques(double **A,double **B,int n,int bs)
{
    if(!A||!B||n<=0||bs<=0||(size_t)n>SIZE_MAX/(size_t)n/sizeof(double))return NULL;
    size_t nn=(size_t)n;for(size_t i=0;i<nn;i++)if(!A[i]||!B[i])return NULL;
    double **C=calloc(nn,sizeof(*C));if(!C)return NULL;for(size_t i=0;i<nn;i++){C[i]=calloc(nn,sizeof(**C));if(!C[i]){for(size_t r=0;r<i;r++)free(C[r]);free(C);return NULL;}}
    for(size_t ii=0;ii<nn;ii+=(size_t)bs)for(size_t kk=0;kk<nn;kk+=(size_t)bs)for(size_t jj=0;jj<nn;jj+=(size_t)bs){size_t ie=ii+(size_t)bs<nn?ii+(size_t)bs:nn,ke=kk+(size_t)bs<nn?kk+(size_t)bs:nn,je=jj+(size_t)bs<nn?jj+(size_t)bs:nn;for(size_t i=ii;i<ie;i++)for(size_t k=kk;k<ke;k++)for(size_t j=jj;j<je;j++){C[i][j]+=A[i][k]*B[k][j];if(!isfinite(C[i][j])){for(size_t r=0;r<nn;r++)free(C[r]);free(C);return NULL;}}}
    return C;
}
