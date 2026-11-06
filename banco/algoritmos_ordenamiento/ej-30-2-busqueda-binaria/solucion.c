#include "ej-30-2-busqueda-binaria.h"
int busqueda_binaria(const int *a, size_t n, int x) { if (!a) return -1; size_t lo=0, hi=n; while(lo<hi){size_t m=lo+(hi-lo)/2; if(a[m]==x)return (int)m; if(a[m]<x)lo=m+1;else hi=m;} return -1; }
