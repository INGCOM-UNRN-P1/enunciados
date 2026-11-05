#include "bitmap-operaciones-bits.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bitmap_init(bitmap_t *bm, size_t total_bits)
{
    if (bm == NULL) {
        return;
    }

    bm->bytes = NULL;
    bm->total_bits = 0;
    bm->num_bytes = 0;

    /* Avoid overflow in total_bits + 7. */
    size_t num_bytes = total_bits / 8 + (total_bits % 8 != 0);
    if (num_bytes == 0) {
        return;
    }

    uint8_t *bytes = calloc(num_bytes, sizeof(*bytes));
    if (bytes != NULL) {
        bm->bytes = bytes;
        bm->total_bits = total_bits;
        bm->num_bytes = num_bytes;
    }
}

void bitmap_set(bitmap_t *bm, size_t index)
{
    if (bm != NULL && bm->bytes != NULL && index < bm->total_bits) {
        bm->bytes[index / 8] |= (uint8_t)(1u << (index % 8));
    }
}

void bitmap_clear(bitmap_t *bm, size_t index)
{
    if (bm != NULL && bm->bytes != NULL && index < bm->total_bits) {
        bm->bytes[index / 8] &= (uint8_t)~(1u << (index % 8));
    }
}

int bitmap_test(const bitmap_t *bm, size_t index)
{
    if (bm == NULL || bm->bytes == NULL || index >= bm->total_bits) {
        return 0;
    }
    return (bm->bytes[index / 8] & (uint8_t)(1u << (index % 8))) != 0;
}

size_t bitmap_count(const bitmap_t *bm)
{
    if (bm == NULL || bm->bytes == NULL) {
        return 0;
    }

    size_t count = 0;
    for (size_t i = 0; i < bm->num_bytes; ++i) {
        uint8_t byte = bm->bytes[i];
        while (byte != 0) {
            byte &= (uint8_t)(byte - 1u);
            ++count;
        }
    }
    return count;
}

void bitmap_free(bitmap_t *bm)
{
    if (bm == NULL) {
        return;
    }
    free(bm->bytes);
    bm->bytes = NULL;
    bm->total_bits = 0;
    bm->num_bytes = 0;
}

int main(void)
{
    bitmap_t bm = {NULL, 0, 0};
    char comando[32];
    size_t index;

    while (scanf("%31s", comando) == 1) {
        if (strcmp(comando, "INIT") == 0) {
            if (scanf("%zu", &index) != 1) break;
            bitmap_free(&bm);
            bitmap_init(&bm, index);
        } else if (strcmp(comando, "SET") == 0) {
            if (scanf("%zu", &index) != 1) break;
            bitmap_set(&bm, index);
        } else if (strcmp(comando, "CLEAR") == 0) {
            if (scanf("%zu", &index) != 1) break;
            bitmap_clear(&bm, index);
        } else if (strcmp(comando, "TEST") == 0) {
            if (scanf("%zu", &index) != 1) break;
            printf("%d\n", bitmap_test(&bm, index));
        } else if (strcmp(comando, "COUNT") == 0) {
            printf("%zu\n", bitmap_count(&bm));
        } else if (strcmp(comando, "EXIT") == 0) {
            break;
        }
    }

    bitmap_free(&bm);
    return 0;
}
