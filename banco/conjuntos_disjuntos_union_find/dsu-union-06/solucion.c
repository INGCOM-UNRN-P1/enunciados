#include "dsu-union-06.h"
int dsu06_union(dsu06_t *d,size_t a,size_t b){if(!d||!d->parent||!d->size||a>=d->n||b>=d->n)return -1;while(d->parent[a]!=a){d->parent[a]=d->parent[d->parent[a]];a=d->parent[a];}while(d->parent[b]!=b){d->parent[b]=d->parent[d->parent[b]];b=d->parent[b];}if(a==b)return 0;if(d->size[a]<d->size[b]){size_t t=a;a=b;b=t;}d->parent[b]=a;d->size[a]+=d->size[b];return 1;}
