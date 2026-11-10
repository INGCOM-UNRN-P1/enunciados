#include "dsu-union-28.h"
#include <stdint.h>
size_t dsu_measure_find_steps(const dsu_t *d,const size_t *q,size_t n,bool *valid){if(valid)*valid=false;if(!d||!d->parent||(!q&&n))return 0;size_t total=0;for(size_t i=0;i<n;i++){if(q[i]>=d->n)return 0;size_t x=q[i],steps=0;while(d->parent[x]!=x){if(d->parent[x]>=d->n||++steps>d->n||total>SIZE_MAX-steps)return 0;x=d->parent[x];}total+=steps;}if(valid)*valid=true;return total;}
