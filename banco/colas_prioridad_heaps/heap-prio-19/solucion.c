#include "heap-prio-19.h"
#include <stdlib.h>
static bool before(task_t a,task_t b){return a.priority<b.priority||(a.priority==b.priority&&a.seq<b.seq);}
void scheduler_init(scheduler_t*q){if(q){q->a=NULL;q->n=q->cap=0;q->next=0;}}
bool scheduler_push(scheduler_t*q,int p){if(!q||q->next==UINT64_MAX)return false;if(q->n==q->cap){size_t c=q->cap?q->cap*2:8;if(c<q->cap||c>SIZE_MAX/sizeof(task_t))return false;task_t*t=realloc(q->a,c*sizeof(*t));if(!t)return false;q->a=t;q->cap=c;}size_t i=q->n++;task_t v={p,q->next++};while(i){size_t par=(i-1)/2;if(!before(v,q->a[par]))break;q->a[i]=q->a[par];i=par;}q->a[i]=v;return true;}
bool scheduler_pop(scheduler_t*q,task_t*out){if(!q||!q->n||!out)return false;*out=q->a[0];task_t v=q->a[--q->n];if(q->n){size_t i=0;while(2*i+1<q->n){size_t c=2*i+1;if(c+1<q->n&&before(q->a[c+1],q->a[c]))c++;if(!before(q->a[c],v))break;q->a[i]=q->a[c];i=c;}q->a[i]=v;}return true;}
void scheduler_destroy(scheduler_t*q){if(q){free(q->a);q->a=NULL;q->n=q->cap=0;q->next=0;}}
