#ifndef EJERCICIO_BITMAP_OPERACIONES_BITS_H
#define EJERCICIO_BITMAP_OPERACIONES_BITS_H

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Operación bitmap_init */
void bitmap_init(Bitmap *bm, size_t total_bits);
/* Operación bitmap_set */
void bitmap_set(Bitmap *bm, size_t index);
/* Operación bitmap_clear */
void bitmap_clear(Bitmap *bm, size_t index);
/* Operación bitmap_test */
int bitmap_test(const Bitmap *bm, size_t index);
/* Operación bitmap_count */
size_t bitmap_count(const Bitmap *bm);
/* Operación bitmap_free */
void bitmap_free(Bitmap *bm);

#endif /* EJERCICIO_BITMAP_OPERACIONES_BITS_H */
