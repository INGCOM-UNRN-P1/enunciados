#include <stdbool.h>
#include <stddef.h>
#define MAXV 50
int cargar_grafo_no_dirigido(size_t n,size_t m,const size_t (*e)[2],int a[50][50]){if((m && !e)||!a||n>MAXV)return -1;for(size_t i=0;i<MAXV;i++)for(size_t j=0;j<MAXV;j++)a[i][j]=0;for(size_t k=0;k<m;k++){size_t u=e[k][0],v=e[k][1];if(u>=n||v>=n)return -1;a[u][v]=a[v][u]=1;}return 0;}
bool grafo_adyacente(size_t n,const int a[50][50],size_t u,size_t v){return a&&n<=MAXV&&u<n&&v<n&&a[u][v]!=0;}
