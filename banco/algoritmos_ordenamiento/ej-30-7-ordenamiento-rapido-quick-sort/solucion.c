#include "ej-30-7-ordenamiento-rapido-quick-sort.h"
#include <stdlib.h>
#include <stdint.h>
static void qsort_int(int*a,ptrdiff_t lo,ptrdiff_t hi){while(lo<hi){ptrdiff_t i=lo,j=hi;int p=a[lo+(hi-lo)/2];while(i<=j){while(a[i]<p)i++;while(a[j]>p)j--;if(i<=j){int t=a[i];a[i++]=a[j];a[j--]=t;}}if(j-lo<hi-i){if(lo<j)qsort_int(a,lo,j);lo=i;}else{if(i<hi)qsort_int(a,i,hi);hi=j;}}}
void ordenar_rapido(int*a,size_t n){if(a&&n>1&&n<=(size_t)PTRDIFF_MAX)qsort_int(a,0,(ptrdiff_t)n-1);}
