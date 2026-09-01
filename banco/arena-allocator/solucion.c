/*
 * Arena Allocator con alineacion a 8 bytes
 * Catedra Programacion I - UNRN
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    uint8_t *buffer;
    size_t capacidad;
    size_t offset;
} Arena;

void arena_init(Arena *arena, size_t capacidad)
{
    uint8_t *buf = (uint8_t *)malloc(capacidad);
    if (buf == NULL)
    {
        arena->buffer = NULL;
        arena->capacidad = 0;
        arena->offset = 0;
        return;
    }
    arena->buffer = buf;
    arena->capacidad = capacidad;
    arena->offset = 0;
}

static void *arena_alloc(Arena *arena, size_t bytes, size_t alineacion)
{
    if (arena->buffer == NULL)
    {
        return NULL;
    }
    size_t alineado = (arena->offset + (alineacion - 1)) & ~(alineacion - 1);
    if (alineado + bytes > arena->capacidad)
    {
        return NULL;
    }
    void *ptr = &arena->buffer[alineado];
    arena->offset = alineado + bytes;
    return ptr;
}

void arena_reset(Arena *arena)
{
    arena->offset = 0;
}

void arena_free(Arena *arena)
{
    if (arena->buffer != NULL)
    {
        free(arena->buffer);
        arena->buffer = NULL;
    }
    arena->capacidad = 0;
    arena->offset = 0;
}

int main(void)
{
    Arena arena = {NULL, 0, 0};
    char comando[32] = {0};
    size_t param = 0;

    while (scanf("%31s", comando) == 1)
    {
        if (strcmp(comando, "INIT") == 0)
        {
            if (scanf("%zu", &param) == 1)
            {
                arena_free(&arena);
                arena_init(&arena, param);
                printf("ARENA_INICIALIZADA %zu\n", param);
            }
        }
        else if (strcmp(comando, "ALLOC") == 0)
        {
            if (scanf("%zu", &param) == 1)
            {
                void *ptr = arena_alloc(&arena, param, 8);
                if (ptr != NULL)
                {
                    printf("OK offset=%zu\n", arena.offset);
                }
                else
                {
                    printf("FALLO\n");
                }
            }
        }
        else if (strcmp(comando, "STATS") == 0)
        {
            printf("USADO: %zu / RESTANTE: %zu\n", arena.offset, arena.capacidad - arena.offset);
        }
        else if (strcmp(comando, "RESET") == 0)
        {
            arena_reset(&arena);
            printf("ARENA_RESETEADA\n");
        }
        else if (strcmp(comando, "EXIT") == 0)
        {
            break;
        }
    }

    arena_free(&arena);
    return 0;
}