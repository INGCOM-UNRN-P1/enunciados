#include <limits.h>
#include "dsu-union-04.h"
int dsu04_find(dsu04_t *d,size_t x){if(!d||!d->parent||d->n>(size_t)INT_MAX||x>=d->n)return -1;size_t r=x;while(d->parent[r]!=r){if(d->parent[r]>=d->n)return -1;r=d->parent[r];}while(x!=r){size_t p=d->parent[x];d->parent[x]=r;x=p;}return (int)r;}
