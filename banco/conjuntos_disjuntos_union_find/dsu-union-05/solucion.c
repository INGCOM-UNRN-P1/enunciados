#include "dsu-union-05.h"
#include <stdbool.h>
int dsu05_union(dsu05_t *d,size_t a,size_t b){if(!d||!d->parent||!d->rank||a>=d->n||b>=d->n)return -1;while(d->parent[a]!=a){d->parent[a]=d->parent[d->parent[a]];a=d->parent[a];}while(d->parent[b]!=b){d->parent[b]=d->parent[d->parent[b]];b=d->parent[b];}if(a==b)return 0;if(d->rank[a]<d->rank[b]){size_t t=a;a=b;b=t;}d->parent[b]=a;if(d->rank[a]==d->rank[b])d->rank[a]++;return 1;}
