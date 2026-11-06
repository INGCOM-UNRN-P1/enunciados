#include <stddef.h>
#define MAXV 20
static void t13(size_t n,const int a[20][20],size_t u,int ix[20],int lo[20],int on[20],size_t st[20],size_t *top,int *time,int lab[20],int *comp){ix[u]=lo[u]=(*time)++;st[(*top)++]=u;on[u]=1;for(size_t j=0;j<n;j++)if(a[u][j]){if(ix[j]<0){t13(n,a,j,ix,lo,on,st,top,time,lab,comp);if(lo[j]<lo[u])lo[u]=lo[j];}else if(on[j]&&ix[j]<lo[u])lo[u]=ix[j];}if(lo[u]==ix[u]){size_t w;do{w=st[--(*top)];on[w]=0;lab[w]=*comp;}while(w!=u);(*comp)++;}}
size_t componentes_tarjan(size_t n,const int a[20][20],int lab[20]){if(!a||!lab||n>MAXV)return 0;int ix[20],lo[20],on[20]={0},time=0,c=0;size_t st[20],top=0;for(size_t i=0;i<n;i++)ix[i]=-1;for(size_t i=0;i<n;i++)if(ix[i]<0)t13(n,a,i,ix,lo,on,st,&top,&time,lab,&c);return (size_t)c;}
