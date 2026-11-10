#include "dsu_union_common.h"
#include <stdlib.h>
#include <stdint.h>
void dsu_init(dsu_t *d, int n) { if (!d) return; d->n=0; d->parent=NULL; d->rank=NULL; d->size=NULL; d->components=0; if (n<=0) return; size_t z=(size_t)n; if(z>SIZE_MAX/sizeof(size_t)) return; d->parent=malloc(z*sizeof(size_t)); d->rank=calloc(z,sizeof(size_t)); d->size=malloc(z*sizeof(size_t)); if(!d->parent||!d->rank||!d->size){free(d->parent);free(d->rank);free(d->size);d->parent=d->rank=d->size=NULL;return;} d->n=z;d->components=z;for(size_t i=0;i<z;i++){d->parent[i]=i;d->size[i]=1;} }
int dsu_find(dsu_t *d,int u){if(!d||u<0||(size_t)u>=d->n)return -1;size_t x=(size_t)u;while(d->parent[x]!=x){d->parent[x]=d->parent[d->parent[x]];x=d->parent[x];}return (int)x;}
void dsu_union(dsu_t *d,int u,int v){int a=dsu_find(d,u),b=dsu_find(d,v);if(a<0||b<0||a==b)return;size_t x=(size_t)a,y=(size_t)b;if(d->rank[x]<d->rank[y]){size_t t=x;x=y;y=t;}d->parent[y]=x;d->size[x]+=d->size[y];if(d->rank[x]==d->rank[y])d->rank[x]++;d->components--;}
void dsu_destroy(dsu_t *d){if(!d)return;free(d->parent);free(d->rank);free(d->size);d->parent=d->rank=d->size=NULL;d->n=d->components=0;}
