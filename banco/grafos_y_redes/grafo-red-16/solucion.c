#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

#define MAXV 20
static bool valido(size_t n, size_t x) { return n <= MAXV && x < n; }
bool dijkstra(size_t n,const int a[20][20],size_t s,int d[20]){if(!a||!d||!valido(n,s))return false;for(size_t i=0;i<n;i++)for(size_t j=0;j<n;j++)if(a[i][j]<0)return false;bool used[20]={0};for(size_t i=0;i<n;i++)d[i]=INT_MAX;d[s]=0;for(size_t z=0;z<n;z++){size_t u=n;for(size_t i=0;i<n;i++)if(!used[i]&&(u==n||d[i]<d[u]))u=i;if(u==n||d[u]==INT_MAX)break;used[u]=true;for(size_t j=0;j<n;j++)if(a[u][j]>0&&d[u]<=INT_MAX-a[u][j]&&d[u]+a[u][j]<d[j])d[j]=d[u]+a[u][j];}return true;}
