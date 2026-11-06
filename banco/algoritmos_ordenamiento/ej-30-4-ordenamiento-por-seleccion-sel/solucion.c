#include "ej-30-4-ordenamiento-por-seleccion-sel.h"
void ordenar_seleccion(int *a,size_t n){if(!a)return;for(size_t i=0;i<n;i++){size_t m=i;for(size_t j=i+1;j<n;j++)if(a[j]<a[m])m=j;int t=a[i];a[i]=a[m];a[m]=t;}}
