#ifndef EJERCICIO_HEAP_PRIO_27_H
#define EJERCICIO_HEAP_PRIO_27_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <threads.h>
typedef struct {int *a;size_t n,cap;mtx_t lock;bool initialized;} concurrent_pq_t;
bool concurrent_pq_init(concurrent_pq_t*q);bool concurrent_pq_push(concurrent_pq_t*q,int v);bool concurrent_pq_try_pop(concurrent_pq_t*q,int*out);void concurrent_pq_destroy(concurrent_pq_t*q);
#endif
