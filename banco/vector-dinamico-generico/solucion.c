/*
 * Vector Dinamico Redimensionable
 * Catedra Programacion I - UNRN
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACIDAD_INICIAL 4

typedef struct
{
    int *datos;
    size_t longitud;
    size_t capacidad;
} VectorDinamico;

void vector_init(VectorDinamico *vec)
{
    vec->capacidad = CAPACIDAD_INICIAL;
    vec->longitud = 0;
    int *d = (int *)malloc(vec->capacidad * sizeof(int));
    if (d == NULL)
    {
        vec->datos = NULL;
        vec->capacidad = 0;
        return;
    }
    vec->datos = d;
}

void vector_push(VectorDinamico *vec, int valor)
{
    if (vec->datos == NULL)
    {
        vector_init(vec);
        if (vec->datos == NULL)
        {
            return;
        }
    }
    if (vec->longitud >= vec->capacidad)
    {
        size_t nueva_cap = vec->capacidad * 2;
        int *nuevos_datos = (int *)realloc(vec->datos, nueva_cap * sizeof(int));
        if (nuevos_datos == NULL)
        {
            return;
        }
        vec->datos = nuevos_datos;
        vec->capacidad = nueva_cap;
    }
    vec->datos[vec->longitud++] = valor;
}

void vector_pop(VectorDinamico *vec)
{
    if (vec->longitud == 0 || vec->datos == NULL)
    {
        printf("VACIO\n");
        return;
    }
    int v = vec->datos[--vec->longitud];
    printf("%d\n", v);
}

void vector_get(const VectorDinamico *vec, size_t index)
{
    if (vec->datos == NULL || index >= vec->longitud)
    {
        printf("FUERA_RANGO\n");
        return;
    }
    printf("%d\n", vec->datos[index]);
}

void vector_free(VectorDinamico *vec)
{
    if (vec->datos != NULL)
    {
        free(vec->datos);
        vec->datos = NULL;
    }
    vec->longitud = 0;
    vec->capacidad = 0;
}

int main(void)
{
    VectorDinamico vec;
    vector_init(&vec);

    char op[32] = {0};
    int val = 0;
    size_t idx = 0;

    while (scanf("%31s", op) == 1)
    {
        if (strcmp(op, "PUSH") == 0)
        {
            if (scanf("%d", &val) == 1)
            {
                vector_push(&vec, val);
            }
        }
        else if (strcmp(op, "POP") == 0)
        {
            vector_pop(&vec);
        }
        else if (strcmp(op, "GET") == 0)
        {
            if (scanf("%zu", &idx) == 1)
            {
                vector_get(&vec, idx);
            }
        }
        else if (strcmp(op, "SIZE") == 0)
        {
            printf("LEN: %zu | CAP: %zu\n", vec.longitud, vec.capacidad);
        }
        else if (strcmp(op, "CLEAR") == 0)
        {
            vec.longitud = 0;
        }
        else if (strcmp(op, "EXIT") == 0)
        {
            break;
        }
    }

    vector_free(&vec);
    return 0;
}