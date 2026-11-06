#include <stdbool.h>
#include <stddef.h>
#define MAXV 20
bool dos_colorear(size_t n,const int a[20][20],int colores[20]){if(!a||!colores||n>MAXV)return false;int resultado[MAXV];for(size_t i=0;i<n;i++)resultado[i]=-1;size_t cola[MAXV];for(size_t s=0;s<n;s++){if(resultado[s]>=0)continue;size_t frente=0,final=0;resultado[s]=0;cola[final++]=s;while(frente<final){size_t u=cola[frente++];for(size_t v=0;v<n;v++)if(a[u][v]){if(resultado[v]<0){resultado[v]=1-resultado[u];cola[final++]=v;}else if(resultado[v]==resultado[u])return false;}}}for(size_t i=0;i<n;i++)colores[i]=resultado[i];return true;}
bool es_bipartito(size_t n,const int a[20][20]){int colores[MAXV];return dos_colorear(n,a,colores);}
