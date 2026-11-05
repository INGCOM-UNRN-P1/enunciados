#include "ej-21-39-matriz-de-vandermonde.h"
#include <stdlib.h>
#include <stdint.h>
double **matriz_vandermonde(double *x,int n,int m) {
 if (!x || n<=0 || m<=0 || (size_t)n>SIZE_MAX/sizeof(double*) || (size_t)m>SIZE_MAX/sizeof(double)) return NULL;
 double **v=calloc((size_t)n,sizeof(*v)); if (!v) return NULL;
 for(int i=0;i<n;i++) { v[i]=malloc((size_t)m*sizeof(**v)); if(!v[i]) { while(i>0) free(v[--i]); free(v); return NULL; } double p=1; for(int j=0;j<m;j++){v[i][j]=p; p*=x[i];} } return v;
}
