#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

#define MAXV 20
static bool valido(size_t n, size_t x) { return n <= MAXV && x < n; }
int distancia_bfs(size_t n,const int a[20][20],size_t s,size_t d){if(!a||!valido(n,s)||!valido(n,d))return -1;int dist[20];size_t q[20],h=0,t=0;for(size_t i=0;i<n;i++)dist[i]=-1;dist[s]=0;q[t++]=s;while(h<t){size_t u=q[h++];if(u==d)return dist[u];for(size_t j=0;j<n;j++)if(a[u][j]&&dist[j]<0){dist[j]=dist[u]+1;q[t++]=j;}}return -1;}
