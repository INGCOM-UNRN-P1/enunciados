#include "ej-21-42-matriz-circulante.h"
#include <stdlib.h>
#include <stdint.h>
int **matriz_circulante(int *f,int n) {
 if (!f || n<=0 || (size_t)n>SIZE_MAX/sizeof(int*) || (size_t)n>SIZE_MAX/sizeof(int)) return NULL;
 int **a=calloc((size_t)n,sizeof(*a)); if(!a) return NULL;
 for(int i=0;i<n;i++){ a[i]=malloc((size_t)n*sizeof(**a)); if(!a[i]){while(i>0)free(a[--i]);free(a);return NULL;} for(int j=0;j<n;j++){int k=j>=i?j-i:n-(i-j); a[i][j]=f[k];} } return a;
}
