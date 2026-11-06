#include <stddef.h>
#define MAXV 20
int matriz_a_listas(size_t n,const int a[20][20],int l[20][20]){if(!a||!l||n>MAXV)return -1;for(size_t i=0;i<n;i++){if(a[i][i])return -1;for(size_t j=0;j<n;j++)if((a[i][j]!=0)!=(a[j][i]!=0))return -1;}for(size_t i=0;i<n;i++){size_t k=0;for(size_t j=0;j<n;j++)if(a[i][j]){if(k>=n)return -1;l[i][k++]=(int)j;}for(;k<n;k++)l[i][k]=-1;}return 0;}
int listas_a_matriz(size_t n,const int l[20][20],int a[20][20]){if(!l||!a||n>MAXV)return -1;for(size_t i=0;i<n;i++)for(size_t j=0;j<n;j++)a[i][j]=0;for(size_t i=0;i<n;i++){int anterior=-1;for(size_t k=0;k<n;k++){int v=l[i][k];if(v==-1)break;if(v<0||(size_t)v>=n||v== (int)i||v<=anterior)return -1;anterior=v;a[i][v]=1;}}for(size_t i=0;i<n;i++)for(size_t j=0;j<n;j++)if(a[i][j]!=a[j][i])return -1;return 0;}
