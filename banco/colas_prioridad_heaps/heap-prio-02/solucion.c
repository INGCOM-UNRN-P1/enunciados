#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "heap-prio-02.h"
void max_heap_init(max_heap_t*h){if(h)h->tamano=0;}
bool max_heap_push(max_heap_t*h,int v){if(!h||h->tamano>=HEAP_CAPACITY)return false;size_t i=h->tamano++;while(i&&h->datos[(i-1)/2]<v){h->datos[i]=h->datos[(i-1)/2];i=(i-1)/2;}h->datos[i]=v;return true;}
bool max_heap_pop(max_heap_t*h,int*o){if(!h||!o||!h->tamano)return false;*o=h->datos[0];int v=h->datos[--h->tamano];size_t i=0;while(i*2+1<h->tamano){size_t c=i*2+1;if(c+1<h->tamano&&h->datos[c+1]>h->datos[c])c++;if(h->datos[c]<=v)break;h->datos[i]=h->datos[c];i=c;}if(h->tamano)h->datos[i]=v;return true;}
