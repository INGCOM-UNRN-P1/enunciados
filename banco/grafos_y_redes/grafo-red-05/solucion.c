#include <stddef.h>
#define MAXV 20
static void visitar(size_t n,const int a[20][20],size_t u,int v[20],size_t o[20],size_t *k){v[u]=1;o[(*k)++]=u;for(size_t j=0;j<n;j++)if(a[u][j]&&!v[j])visitar(n,a,j,v,o,k);}
size_t dfs_recursivo(size_t n,const int a[20][20],size_t s,size_t o[20]){if(!a||!o||n>MAXV||s>=n)return 0;int v[20]={0};size_t k=0;visitar(n,a,s,v,o,&k);return k;}
