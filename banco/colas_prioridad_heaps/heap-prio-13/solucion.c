#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "heap-prio-13.h"
static void down(dheap_t*h,size_t i){for(;;){size_t m=i,first=i*h->d+1;for(size_t k=0;k<h->d&&first+k<h->tamano;k++)if(h->datos[first+k]<h->datos[m])m=first+k;if(m==i)return;int t=h->datos[i];h->datos[i]=h->datos[m];h->datos[m]=t;i=m;}}
bool dheap_init(dheap_t*h,size_t d){if(!h||d<2)return false;h->tamano=0;h->d=d;return true;}
bool dheap_push(dheap_t*h,int v){if(!h||h->tamano>=HEAP_CAPACITY)return false;size_t i=h->tamano++;while(i&&h->datos[(i-1)/h->d]>v){h->datos[i]=h->datos[(i-1)/h->d];i=(i-1)/h->d;}h->datos[i]=v;return true;}
bool dheap_pop(dheap_t*h,int*o){if(!h||!o||!h->tamano)return false;*o=h->datos[0];int v=h->datos[--h->tamano];if(h->tamano){h->datos[0]=v;down(h,0);}return true;}
