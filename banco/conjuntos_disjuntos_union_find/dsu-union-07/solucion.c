#include "dsu-union-07.h"
size_t dsu07_count(const dsu07_t *d){if(!d||!d->parent)return 0;size_t c=0;for(size_t i=0;i<d->n;i++){size_t p=d->parent[i],steps=0;if(p>=d->n)return 0;while(p!=d->parent[p]&&steps++<d->n){p=d->parent[p];if(p>=d->n)return 0;}if(steps>=d->n)return 0;if(p==i)c++;}return c;}
