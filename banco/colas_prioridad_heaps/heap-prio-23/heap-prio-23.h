#ifndef EJERCICIO_HEAP_PRIO_23_H
#define EJERCICIO_HEAP_PRIO_23_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct {uint64_t time;int id;} event_t; typedef struct {event_t *a;size_t n,cap;} event_heap_t;
void event_heap_init(event_heap_t*q);bool event_heap_push(event_heap_t*q,event_t v);bool event_heap_pop(event_heap_t*q,event_t*out);void event_heap_destroy(event_heap_t*q);
#endif
