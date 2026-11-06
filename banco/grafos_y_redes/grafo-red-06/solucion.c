#include <stddef.h>
#define MAXV 20
typedef struct { size_t vertice; size_t siguiente; } marco_t;
size_t dfs_iterativo(size_t n,const int a[20][20],size_t inicio,size_t orden[20]){if(!a||!orden||n>MAXV||inicio>=n)return 0;marco_t pila[MAXV];size_t tope=0,cantidad=0;int visitado[MAXV]={0};visitado[inicio]=1;orden[cantidad++]=inicio;pila[tope++]=(marco_t){inicio,0};while(tope){marco_t *m=&pila[tope-1];while(m->siguiente<n&&(!a[m->vertice][m->siguiente]||visitado[m->siguiente]))m->siguiente++;if(m->siguiente==n){tope--;continue;}size_t v=m->siguiente++;visitado[v]=1;orden[cantidad++]=v;pila[tope++]=(marco_t){v,0};}return cantidad;}
