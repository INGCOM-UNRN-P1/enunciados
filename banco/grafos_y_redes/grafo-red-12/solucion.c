#include <stddef.h>
#define MAXV 20
static void f12(size_t n,const int a[20][20],size_t u,int v[20],size_t st[20],size_t *k){v[u]=1;for(size_t j=0;j<n;j++)if(a[u][j]&&!v[j])f12(n,a,j,v,st,k);st[(*k)++]=u;}
static void r12(size_t n,const int a[20][20],size_t u,int v[20],int lab[20],int c){v[u]=1;lab[u]=c;for(size_t j=0;j<n;j++)if(a[j][u]&&!v[j])r12(n,a,j,v,lab,c);}
size_t componentes_kosaraju(size_t n,const int a[20][20],int lab[20]){if(!a||!lab||n>MAXV)return 0;int v[20]={0};size_t st[20],k=0;for(size_t i=0;i<n;i++)if(!v[i])f12(n,a,i,v,st,&k);for(size_t i=0;i<n;i++)v[i]=0;size_t c=0;while(k){size_t u=st[--k];if(!v[u])r12(n,a,u,v,lab,(int)c++);}return c;}
