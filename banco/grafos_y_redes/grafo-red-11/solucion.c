#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <string.h>

#define MAXV 20
size_t contar_componentes(size_t n,const int a[20][20]){if(!a||n>MAXV)return 0;bool v[20]={0};size_t c=0,q[20];for(size_t s=0;s<n;s++)if(!v[s]){c++;size_t h=0,t=0;q[t++]=s;v[s]=true;while(h<t){size_t u=q[h++];for(size_t j=0;j<n;j++)if(a[u][j]&&!v[j]){v[j]=true;q[t++]=j;}}}return c;}
