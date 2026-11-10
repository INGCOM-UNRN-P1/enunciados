#include "dsu-union-09.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

static int find_root(int *parent, int x)
{
    if (parent[x] != x) parent[x] = find_root(parent, parent[x]);
    return parent[x];
}

int dsu09_tiene_ciclo(size_t n,const int e[][2],size_t m)
{
 if(n>INT_MAX||n>SIZE_MAX/sizeof(int)||(m&&!e))return -1;
 for (size_t i = 0; i < m; ++i) {
     if (e[i][0] < 0 || e[i][1] < 0 || (size_t)e[i][0] >= n || (size_t)e[i][1] >= n) return -1;
 }
 int *p=n?malloc(n*sizeof *p):NULL,*r=n?calloc(n,sizeof *r):NULL;if(n&&(!p||!r)){free(p);free(r);return -1;}for(size_t i=0;i<n;i++)p[i]=(int)i;
 for(size_t i=0;i<m;i++){int a=e[i][0],b=e[i][1];int x=find_root(p,a),y=find_root(p,b);if(x==y){free(p);free(r);return 1;}if(r[x]<r[y]){int z=x;x=y;y=z;}p[y]=x;if(r[x]==r[y])r[x]++;}
 free(p);free(r);return 0;
}
#ifndef DSU_NO_MAIN
int main(void){const int e[][2]={{0,1},{1,2},{2,0}};return dsu09_tiene_ciclo(3,e,3)==1?0:1;}
#endif
