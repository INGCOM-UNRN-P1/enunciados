#ifndef EJERCICIO_BITMAP_OPERACIONES_BITS_H
#define EJERCICIO_BITMAP_OPERACIONES_BITS_H

#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint8_t *bytes;
    size_t total_bits;
    size_t num_bytes;
} bitmap_t;

void bitmap_init(bitmap_t *bm, size_t total_bits);
void bitmap_set(bitmap_t *bm, size_t index);
void bitmap_clear(bitmap_t *bm, size_t index);
int bitmap_test(const bitmap_t *bm, size_t index);
size_t bitmap_count(const bitmap_t *bm);
void bitmap_free(bitmap_t *bm);

#endif
