#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

#define MAXV 20
static bool cyc8(size_t n,const int a[20][20],size_t u,size_t p,bool v[20]){v[u]=true;for(size_t j=0;j<n;j++)if(a[u][j]){if(!v[j]){if(cyc8(n,a,j,u,v))return true;}else if(j!=p)return true;}return false;}
bool tiene_ciclo_no_dirigido(size_t n,const int a[20][20]){if(!a||n>MAXV)return false;bool v[20]={0};for(size_t i=0;i<n;i++)if(!v[i]&&cyc8(n,a,i,n,v))return true;return false;}
