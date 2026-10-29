#ifndef EJERCICIO_VECTOR_DINAMICO_GENERICO_H
#define EJERCICIO_VECTOR_DINAMICO_GENERICO_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación vector_init */
void vector_init(VectorDinamico *vec);
/* Operación vector_push */
void vector_push(VectorDinamico *vec, int valor);
/* Operación vector_pop */
void vector_pop(VectorDinamico *vec);
/* Operación vector_get */
void vector_get(const VectorDinamico *vec, size_t index);
/* Operación vector_free */
void vector_free(VectorDinamico *vec);

#endif /* EJERCICIO_VECTOR_DINAMICO_GENERICO_H */
