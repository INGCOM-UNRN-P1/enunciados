#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

#define MAXV 20
static bool cyc9(size_t n,const int a[20][20],size_t u,int c[20]){c[u]=1;for(size_t j=0;j<n;j++)if(a[u][j]){if(c[j]==1)return true;if(c[j]==0&&cyc9(n,a,j,c))return true;}c[u]=2;return false;}
bool tiene_ciclo_dirigido(size_t n,const int a[20][20]){if(!a||n>MAXV)return false;int c[20]={0};for(size_t i=0;i<n;i++)if(!c[i]&&cyc9(n,a,i,c))return true;return false;}
