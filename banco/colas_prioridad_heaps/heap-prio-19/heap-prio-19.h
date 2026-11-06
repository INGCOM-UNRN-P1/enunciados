#ifndef EJERCICIO_HEAP_PRIO_19_H
#define EJERCICIO_HEAP_PRIO_19_H
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
typedef struct {int priority;uint64_t seq;} task_t; typedef struct {task_t *a;size_t n,cap;uint64_t next;} scheduler_t;
void scheduler_init(scheduler_t*q);bool scheduler_push(scheduler_t*q,int priority);bool scheduler_pop(scheduler_t*q,task_t*out);void scheduler_destroy(scheduler_t*q);
#endif
