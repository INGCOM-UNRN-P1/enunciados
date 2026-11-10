#include "dsu-union-08.h"
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

static int find_root(int *parent, int x)
{
    if (parent[x] != x) parent[x] = find_root(parent, parent[x]);
    return parent[x];
}

int dsu08_tamano_componente(size_t n,const int e[][2],size_t m,int nodo)
{
 if(n==0||n>INT_MAX||n>SIZE_MAX/sizeof(int)||nodo<0||(size_t)nodo>=n||(m&&!e))return -1;
 int *p=malloc(n*sizeof *p),*s=malloc(n*sizeof *s);if(!p||!s){free(p);free(s);return -1;}
 for(size_t i=0;i<n;i++){p[i]=(int)i;s[i]=1;}
 for(size_t i=0;i<m;i++){int a=e[i][0],b=e[i][1];if(a<0||b<0||(size_t)a>=n||(size_t)b>=n){free(p);free(s);return -1;}int x=find_root(p,a),y=find_root(p,b);if(x!=y){if(s[x]<s[y]){int z=x;x=y;y=z;}p[y]=x;s[x]+=s[y];}}
 int r=s[find_root(p,nodo)];free(p);free(s);return r;
}
#ifndef DSU_NO_MAIN
int main(void){const int e[][2]={{0,1},{1,2},{3,4}};return dsu08_tamano_componente(5,e,3,1)==3?0:1;}
#endif
