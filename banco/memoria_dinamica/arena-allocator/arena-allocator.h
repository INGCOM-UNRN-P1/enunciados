#ifndef EJERCICIO_ARENA_ALLOCATOR_H
#define EJERCICIO_ARENA_ALLOCATOR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación arena_init */
void arena_init(arena_t *arena, size_t capacidad);
/* Operación arena_reset */
void arena_reset(arena_t *arena);
/* Operación arena_free */
void arena_free(arena_t *arena);

#endif /* EJERCICIO_ARENA_ALLOCATOR_H */
