/*
 * Bitmap Compacto con Operaciones a Nivel de Bits
 * Catedra Programacion I - UNRN
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    uint8_t *bytes;
    size_t total_bits;
    size_t num_bytes;
} Bitmap;

void bitmap_init(Bitmap *bm, size_t total_bits)
{
    bm->total_bits = total_bits;
    bm->num_bytes = (total_bits + 7) / 8;
    uint8_t *b = (uint8_t *)calloc(bm->num_bytes, sizeof(uint8_t));
    if (b == NULL)
    {
        bm->bytes = NULL;
        bm->total_bits = 0;
        bm->num_bytes = 0;
        return;
    }
    bm->bytes = b;
}

void bitmap_set(Bitmap *bm, size_t index)
{
    if (bm->bytes != NULL && index < bm->total_bits)
    {
        bm->bytes[index / 8] |= (uint8_t)(1 << (index % 8));
    }
}

void bitmap_clear(Bitmap *bm, size_t index)
{
    if (bm->bytes != NULL && index < bm->total_bits)
    {
        bm->bytes[index / 8] &= (uint8_t)(~(1 << (index % 8)));
    }
}

int bitmap_test(const Bitmap *bm, size_t index)
{
    if (bm->bytes == NULL || index >= bm->total_bits)
    {
        return 0;
    }
    return (bm->bytes[index / 8] & (uint8_t)(1 << (index % 8))) ? 1 : 0;
}

size_t bitmap_count(const Bitmap *bm)
{
    if (bm->bytes == NULL)
    {
        return 0;
    }
    size_t contador = 0;
    for (size_t i = 0; i < bm->num_bytes; i++)
    {
        uint8_t b = bm->bytes[i];
        while (b > 0)
        {
            contador += (size_t)(b & 1);
            b >>= 1;
        }
    }
    return contador;
}

void bitmap_free(Bitmap *bm)
{
    if (bm->bytes != NULL)
    {
        free(bm->bytes);
        bm->bytes = NULL;
    }
    bm->total_bits = 0;
    bm->num_bytes = 0;
}

int main(void)
{
    Bitmap bm = {NULL, 0, 0};
    char comando[32] = {0};
    size_t index = 0;

    while (scanf("%31s", comando) == 1)
    {
        if (strcmp(comando, "INIT") == 0)
        {
            if (scanf("%zu", &index) == 1)
            {
                bitmap_free(&bm);
                bitmap_init(&bm, index);
            }
        }
        else if (strcmp(comando, "SET") == 0)
        {
            if (scanf("%zu", &index) == 1)
            {
                bitmap_set(&bm, index);
            }
        }
        else if (strcmp(comando, "CLEAR") == 0)
        {
            if (scanf("%zu", &index) == 1)
            {
                bitmap_clear(&bm, index);
            }
        }
        else if (strcmp(comando, "TEST") == 0)
        {
            if (scanf("%zu", &index) == 1)
            {
                printf("%d\n", bitmap_test(&bm, index));
            }
        }
        else if (strcmp(comando, "COUNT") == 0)
        {
            printf("%zu\n", bitmap_count(&bm));
        }
        else if (strcmp(comando, "EXIT") == 0)
        {
            break;
        }
    }

    bitmap_free(&bm);
    return 0;
}