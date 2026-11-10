#include <limits.h>
#include "dsu-union-03.h"
int dsu03_find(dsu03_t *d,size_t x){if(!d||!d->parent||d->n>(size_t)INT_MAX||x>=d->n)return -1;if(d->parent[x]==x)return (int)x;int r=dsu03_find(d,d->parent[x]);if(r>=0)d->parent[x]=(size_t)r;return r;}
