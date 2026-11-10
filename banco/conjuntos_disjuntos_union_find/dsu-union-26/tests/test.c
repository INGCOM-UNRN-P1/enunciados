#include "../dsu-union-26.h"
#include <assert.h>
#include <threads.h>
typedef struct {dsu_atomic_t *d;size_t parity;} arg_t;
static int worker(void *raw){arg_t *a=raw;for(size_t i=0;i<a->d->count;i++){size_t representative;assert(dsu_atomic_union(a->d,i,(i+a->parity+1)%a->d->count));assert(dsu_atomic_find(a->d,i,&representative));}return 0;}
int main(void){dsu_atomic_t d;size_t r=99;assert(dsu_atomic_init(&d,32));assert(dsu_atomic_union(&d,0,1));assert(dsu_atomic_find(&d,1,&r)&&r==0);assert(!dsu_atomic_find(&d,32,&r));thrd_t t[4];arg_t a[4];for(size_t i=0;i<4;i++){a[i]=(arg_t){&d,i};assert(thrd_create(&t[i],worker,&a[i])==thrd_success);}for(size_t i=0;i<4;i++)assert(thrd_join(t[i],NULL)==thrd_success);for(size_t i=0;i<32;i++){size_t vecino;assert(dsu_atomic_find(&d,i,&r));assert(dsu_atomic_find(&d,(i+1)%32,&vecino));assert(r==vecino);}dsu_atomic_destroy(&d);assert(d.parent==NULL&&d.count==0);assert(!dsu_atomic_init(&d,0));}
