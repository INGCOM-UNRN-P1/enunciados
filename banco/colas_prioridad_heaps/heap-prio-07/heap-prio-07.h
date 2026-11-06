#ifndef HEAP_PRIO_07_H
#define HEAP_PRIO_07_H
#include <stdbool.h>
#include <stddef.h>
#define HEAP_CAPACITY 256
typedef struct { int prioridad; int id; } tarea_t;
typedef struct { tarea_t datos[HEAP_CAPACITY]; size_t tamano; size_t secuencia[HEAP_CAPACITY]; size_t siguiente; } cola_t;
void cola_init(cola_t *c); bool cola_push(cola_t *c, tarea_t tarea); bool cola_pop(cola_t *c, tarea_t *salida);
#endif
