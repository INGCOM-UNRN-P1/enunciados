#ifndef EJERCICIO_ARENA_ALLOCATOR_H
#define EJERCICIO_ARENA_ALLOCATOR_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación arena_init */
void arena_init(Arena *arena, size_t capacidad);
/* Operación arena_reset */
void arena_reset(Arena *arena);
/* Operación arena_free */
void arena_free(Arena *arena);

#endif /* EJERCICIO_ARENA_ALLOCATOR_H */
