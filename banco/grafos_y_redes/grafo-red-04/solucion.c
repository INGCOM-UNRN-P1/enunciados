#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

#define MAXV 20
static bool valido(size_t n, size_t x) { return n <= MAXV && x < n; }
int grado_dirigido(size_t n,const int a[20][20],size_t v,bool in){if(!a||!valido(n,v))return -1;int g=0;for(size_t j=0;j<n;j++)g+=in?(a[j][v]!=0):(a[v][j]!=0);return g;}
