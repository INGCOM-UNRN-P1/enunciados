#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

#define MAXV 20
size_t orden_topologico(size_t n,const int a[20][20],size_t out[20]){if(!a||!out||n>MAXV)return 0;size_t deg[20],q[20],h=0,t=0,k=0;for(size_t j=0;j<n;j++){deg[j]=0;for(size_t i=0;i<n;i++)deg[j]+=a[i][j]!=0;if(!deg[j])q[t++]=j;}while(h<t){size_t u=q[h++];out[k++]=u;for(size_t j=0;j<n;j++)if(a[u][j]&&--deg[j]==0)q[t++]=j;}return k==n?k:0;}
