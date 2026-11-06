#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

#define MAXV 20
static bool valido(size_t n, size_t x) { return n <= MAXV && x < n; }
size_t bfs_recorrido(size_t n,const int a[20][20],size_t s,size_t out[20]){if(!a||!out||!valido(n,s))return 0;bool v[20]={0};size_t q[20],h=0,t=0,k=0;q[t++]=s;v[s]=true;while(h<t){size_t u=q[h++];out[k++]=u;for(size_t j=0;j<n;j++)if(a[u][j]&&!v[j]){v[j]=true;q[t++]=j;}}return k;}
