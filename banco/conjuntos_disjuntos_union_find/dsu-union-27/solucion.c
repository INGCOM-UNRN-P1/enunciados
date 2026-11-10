#include "dsu-union-27.h"
size_t dsu_flatten_all(dsu_t *d){if(!d||!d->parent||d->n==0)return 0;size_t changed=0;for(size_t i=0;i<d->n;i++){size_t r=i,steps=0;while(d->parent[r]!=r){if(d->parent[r]>=d->n||++steps>d->n)return changed;r=d->parent[r];}if(d->parent[i]!=r){d->parent[i]=r;++changed;}}return changed;}
