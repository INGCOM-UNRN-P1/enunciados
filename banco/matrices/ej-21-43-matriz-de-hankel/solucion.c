#include "ej-21-43-matriz-de-hankel.h"
#include <stdlib.h>
#include <stdint.h>
double **matriz_hankel(double *c,double *r,int n) {
 if(!c || !r || n<=0 || c[n-1]!=r[0] || (size_t)n>SIZE_MAX/sizeof(double*) || (size_t)n>SIZE_MAX/sizeof(double)) return NULL;
 double **a=calloc((size_t)n,sizeof(*a)); if(!a) return NULL;
 for(int i=0;i<n;i++){a[i]=malloc((size_t)n*sizeof(**a)); if(!a[i]){while(i>0)free(a[--i]);free(a);return NULL;} for(int j=0;j<n;j++){size_t k=(size_t)i+(size_t)j; a[i][j]=k<(size_t)n?c[k]:r[k-(size_t)n+1];}} return a;
}
