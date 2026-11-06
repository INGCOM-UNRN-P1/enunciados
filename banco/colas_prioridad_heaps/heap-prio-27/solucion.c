#include "heap-prio-27.h"
#include <stdlib.h>
#include <threads.h>
bool concurrent_pq_init(concurrent_pq_t*q){if(!q)return false;q->a=NULL;q->n=q->cap=0;q->initialized=false;if(mtx_init(&q->lock,mtx_plain)!=thrd_success)return false;q->initialized=true;return true;}
bool concurrent_pq_push(concurrent_pq_t*q,int v){if(!q||!q->initialized||mtx_lock(&q->lock)!=thrd_success)return false;bool ok=true;if(q->n==q->cap){size_t c=q->cap?q->cap*2:8;if(c<q->cap||c>SIZE_MAX/sizeof(int))ok=false;else{int*p=realloc(q->a,c*sizeof(int));if(!p)ok=false;else{q->a=p;q->cap=c;}}}if(ok){size_t i=q->n++;while(i){size_t p=(i-1)/2;if(q->a[p]<=v)break;q->a[i]=q->a[p];i=p;}q->a[i]=v;}mtx_unlock(&q->lock);return ok;}
bool concurrent_pq_try_pop(concurrent_pq_t*q,int*out){if(!q||!out||!q->initialized||mtx_lock(&q->lock)!=thrd_success)return false;bool ok=q->n>0;if(ok){*out=q->a[0];int v=q->a[--q->n];if(q->n){size_t i=0;while(2*i+1<q->n){size_t c=2*i+1;if(c+1<q->n&&q->a[c+1]<q->a[c])c++;if(q->a[c]>=v)break;q->a[i]=q->a[c];i=c;}q->a[i]=v;}}mtx_unlock(&q->lock);return ok;}
void concurrent_pq_destroy(concurrent_pq_t*q){if(q&&q->initialized){free(q->a);q->a=NULL;q->n=q->cap=0;q->initialized=false;mtx_destroy(&q->lock);}}
