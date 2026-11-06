#include "ej-30-5-ordenamiento-por-insercion-ins.h"
void ordenar_insercion(int *a,size_t n){if(!a)return;for(size_t i=1;i<n;i++){int x=a[i];size_t j=i;while(j>0&&a[j-1]>x){a[j]=a[j-1];j--;}a[j]=x;}}
