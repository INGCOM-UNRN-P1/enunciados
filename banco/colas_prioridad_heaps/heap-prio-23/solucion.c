#include "heap-prio-23.h"
#include <stdlib.h>
static bool event_before(event_t a,event_t b){return a.time<b.time||(a.time==b.time&&a.id<b.id);}
void event_heap_init(event_heap_t*q){if(q){q->a=NULL;q->n=q->cap=0;}}
bool event_heap_push(event_heap_t*q,event_t v){if(!q)return false;if(q->n==q->cap){size_t c=q->cap?q->cap*2:8;if(c<q->cap||c>SIZE_MAX/sizeof(*q->a))return false;void*p=realloc(q->a,c*sizeof(*q->a));if(!p)return false;q->a=p;q->cap=c;}size_t i=q->n++;while(i){size_t p=(i-1)/2;if(!event_before(v,q->a[p]))break;q->a[i]=q->a[p];i=p;}q->a[i]=v;return true;}
bool event_heap_pop(event_heap_t*q,event_t*out){if(!q||!q->n||!out)return false;*out=q->a[0];event_t v=q->a[--q->n];if(q->n){size_t i=0;while(2*i+1<q->n){size_t c=2*i+1;if(c+1<q->n&&event_before(q->a[c+1],q->a[c]))c++;if(!event_before(q->a[c],v))break;q->a[i]=q->a[c];i=c;}q->a[i]=v;}return true;}
void event_heap_destroy(event_heap_t*q){if(q){free(q->a);q->a=NULL;q->n=q->cap=0;}}
