#include "ej-21-44-sustitucion-hacia-adelante.h"
#include <stdlib.h>
#include <stdint.h>
double *sustitucion_adelante(double **L,double *b,int n) {
 if(!L || !b || n<=0 || (size_t)n>SIZE_MAX/sizeof(double)) return NULL;
 for(int i=0;i<n;i++) if(!L[i] || L[i][i]==0) return NULL;
 double *x=malloc((size_t)n*sizeof(*x)); if(!x) return NULL;
 for(int i=0;i<n;i++){double sum=b[i];for(int j=0;j<i;j++)sum-=L[i][j]*x[j];x[i]=sum/L[i][i];} return x;
}
