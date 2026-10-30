#ifndef EJERCICIO_VECTOR_DINAMICO_GENERICO_H
#define EJERCICIO_VECTOR_DINAMICO_GENERICO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación vector_init */
void vector_init(vector_dinamico_t *vec);
/* Operación vector_push */
void vector_push(vector_dinamico_t *vec, int valor);
/* Operación vector_pop */
void vector_pop(vector_dinamico_t *vec);
/* Operación vector_get */
void vector_get(const vector_dinamico_t *vec, size_t index);
/* Operación vector_free */
void vector_free(vector_dinamico_t *vec);

#endif /* EJERCICIO_VECTOR_DINAMICO_GENERICO_H */
