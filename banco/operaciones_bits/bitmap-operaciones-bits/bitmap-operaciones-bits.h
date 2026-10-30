#ifndef EJERCICIO_BITMAP_OPERACIONES_BITS_H
#define EJERCICIO_BITMAP_OPERACIONES_BITS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación bitmap_init */
void bitmap_init(bitmap_t *bm, size_t total_bits);
/* Operación bitmap_set */
void bitmap_set(bitmap_t *bm, size_t index);
/* Operación bitmap_clear */
void bitmap_clear(bitmap_t *bm, size_t index);
/* Operación bitmap_test */
int bitmap_test(const bitmap_t *bm, size_t index);
/* Operación bitmap_count */
size_t bitmap_count(const bitmap_t *bm);
/* Operación bitmap_free */
void bitmap_free(bitmap_t *bm);

#endif /* EJERCICIO_BITMAP_OPERACIONES_BITS_H */
