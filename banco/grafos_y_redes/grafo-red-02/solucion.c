#include <stddef.h>
#define MAXV 20
int construir_listas_adyacencia(size_t n,size_t m,const size_t e[40][2],int l[20][20]){if(!e||!l||n>MAXV||m>40)return -1;size_t k[20]={0};for(size_t i=0;i<MAXV;i++)for(size_t j=0;j<MAXV;j++)l[i][j]=-1;for(size_t z=0;z<m;z++){size_t u=e[z][0],v=e[z][1];if(u>=n||v>=n||u==v||k[u]>=n||k[v]>=n)return -1;l[u][k[u]++]=(int)v;l[v][k[v]++]=(int)u;}for(size_t u=0;u<n;u++)for(size_t a=0;a<k[u];a++)for(size_t b=a+1;b<k[u];b++)if(l[u][a]>l[u][b]){int t=l[u][a];l[u][a]=l[u][b];l[u][b]=t;}return 0;}
int grado_vertice(size_t n,const int l[20][20],size_t v){if(!l||n>MAXV||v>=n)return -1;int k=0;while(k<(int)n&&l[v][k]>=0)k++;return k;}
