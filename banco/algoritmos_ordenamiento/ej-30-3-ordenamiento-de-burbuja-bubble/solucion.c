#include "ej-30-3-ordenamiento-de-burbuja-bubble.h"
void ordenar_burbuja(int *a,size_t n){if(!a)return; for(size_t i=0;i<n;i++){bool cambio=false;for(size_t j=1;j<n-i;j++)if(a[j-1]>a[j]){int t=a[j];a[j]=a[j-1];a[j-1]=t;cambio=true;}if(!cambio)break;}}
