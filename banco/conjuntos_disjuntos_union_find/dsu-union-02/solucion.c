#include "dsu-union-02.h"
#include <stdlib.h>
#include <stdint.h>
bool dsu02_init(dsu02_t *d,size_t n){if(!d)return false;d->parent=NULL;d->n=0;if(!n||n>SIZE_MAX/sizeof(size_t))return false;d->parent=malloc(n*sizeof(size_t));if(!d->parent)return false;d->n=n;for(size_t i=0;i<n;i++)d->parent[i]=i;return true;}
void dsu02_destroy(dsu02_t *d){if(d){free(d->parent);d->parent=NULL;d->n=0;}}
