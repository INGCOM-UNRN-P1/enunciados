#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
static int fallar_malloc;
static void *reserva_controlada(size_t n) { if (fallar_malloc) return NULL; return malloc(n); }
#define malloc reserva_controlada
#include "../solucion.c"
#undef malloc
int main(void) { fib_heap_t h; int x; fib_init(&h); assert(fib_insert(&h,0)); assert(fib_insert(&h,4)); assert(fib_insert(&h,1)); assert(fib_insert(&h,3)); fallar_malloc=1; assert(fib_extract_min(&h,&x) && x==0); fallar_malloc=0; assert(fib_extract_min(&h,&x) && x==1); assert(fib_extract_min(&h,&x) && x==3); assert(fib_extract_min(&h,&x) && x==4); fib_destroy(&h); return 0; }
