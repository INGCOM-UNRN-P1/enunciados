/**
 * @file solucion.c
 * @brief Implementación de referencia canónica: TDA Conjunto (conjunto_t).
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "conjunto.h"

struct conjunto
{
    int *elementos;
    size_t capacidad;
    size_t cardinal;
};

static bool verificar_unicidad(const int *elementos, size_t cardinal)
{
    if (elementos == NULL && cardinal > 0)
    {
        return false;
    }
    for (size_t i = 0; i < cardinal; i++)
    {
        for (size_t j = i + 1; j < cardinal; j++)
        {
            if (elementos[i] == elementos[j])
            {
                return false;
            }
        }
    }
    return true;
}

static bool conjunto_invariante(const conjunto_t *c)
{
    if (c == NULL || c->elementos == NULL || c->cardinal > c->capacidad)
    {
        return false;
    }
    return verificar_unicidad(c->elementos, c->cardinal);
}

conjunto_t *conjunto_crear(size_t capacidad)
{
    if (capacidad == 0)
    {
        return NULL;
    }

    conjunto_t *c = (conjunto_t *)malloc(sizeof(struct conjunto));
    if (c == NULL)
    {
        return NULL;
    }

    int *arreglo = (int *)malloc(capacidad * sizeof(int));
    if (arreglo == NULL)
    {
        free(c);
        return NULL;
    }

    c->elementos = arreglo;
    c->capacidad = capacidad;
    c->cardinal = 0;

    if (!conjunto_invariante(c))
    {
        free(arreglo);
        free(c);
        return NULL;
    }

    return c;
}

void conjunto_destruir(conjunto_t *c)
{
    if (c != NULL)
    {
        free(c->elementos);
        free(c);
    }
}

size_t conjunto_cardinal(const conjunto_t *c)
{
    if (c == NULL)
    {
        return 0;
    }
    return c->cardinal;
}

bool conjunto_esta_vacio(const conjunto_t *c)
{
    if (c == NULL)
    {
        return false;
    }
    return c->cardinal == 0;
}

bool conjunto_pertenece(const conjunto_t *c, int elemento)
{
    if (c == NULL || c->elementos == NULL)
    {
        return false;
    }
    for (size_t i = 0; i < c->cardinal; i++)
    {
        if (c->elementos[i] == elemento)
        {
            return true;
        }
    }
    return false;
}

bool conjunto_es_subconjunto(const conjunto_t *a, const conjunto_t *b)
{
    if (a == NULL || b == NULL)
    {
        return false;
    }
    if (a->cardinal > b->cardinal)
    {
        return false;
    }
    for (size_t i = 0; i < a->cardinal; i++)
    {
        if (!conjunto_pertenece(b, a->elementos[i]))
        {
            return false;
        }
    }
    return true;
}

bool conjunto_agregar(conjunto_t *c, int elemento)
{
    if (c == NULL || c->elementos == NULL)
    {
        return false;
    }
    if (conjunto_pertenece(c, elemento))
    {
        return true;
    }
    if (c->cardinal >= c->capacidad)
    {
        return false;
    }
    c->elementos[c->cardinal] = elemento;
    c->cardinal++;
    return true;
}

bool conjunto_eliminar(conjunto_t *c, int elemento)
{
    if (c == NULL || c->elementos == NULL)
    {
        return false;
    }
    size_t idx = 0;
    bool encontrado = false;
    for (size_t i = 0; i < c->cardinal; i++)
    {
        if (c->elementos[i] == elemento)
        {
            idx = i;
            encontrado = true;
            break;
        }
    }
    if (!encontrado)
    {
        return false;
    }
    for (size_t i = idx; i + 1 < c->cardinal; i++)
    {
        c->elementos[i] = c->elementos[i + 1];
    }
    c->cardinal--;
    return true;
}

conjunto_t *conjunto_union(const conjunto_t *a, const conjunto_t *b)
{
    if (a == NULL || b == NULL)
    {
        return NULL;
    }
    conjunto_t *u = conjunto_crear(a->capacidad + b->capacidad);
    if (u == NULL)
    {
        return NULL;
    }
    for (size_t i = 0; i < a->cardinal; i++)
    {
        conjunto_agregar(u, a->elementos[i]);
    }
    for (size_t i = 0; i < b->cardinal; i++)
    {
        conjunto_agregar(u, b->elementos[i]);
    }
    return u;
}

conjunto_t *conjunto_interseccion(const conjunto_t *a, const conjunto_t *b)
{
    if (a == NULL || b == NULL)
    {
        return NULL;
    }
    size_t cap = a->capacidad < b->capacidad ? a->capacidad : b->capacidad;
    if (cap == 0)
    {
        cap = 1;
    }
    conjunto_t *inter = conjunto_crear(cap);
    if (inter == NULL)
    {
        return NULL;
    }
    for (size_t i = 0; i < a->cardinal; i++)
    {
        if (conjunto_pertenece(b, a->elementos[i]))
        {
            conjunto_agregar(inter, a->elementos[i]);
        }
    }
    return inter;
}

int main(void)
{
    char cmd[32];
    conjunto_t *actual = NULL;

    while (scanf("%31s", cmd) == 1)
    {
        if (strcmp(cmd, "CREAR") == 0)
        {
            size_t cap = 0;
            if (scanf("%zu", &cap) == 1)
            {
                if (actual != NULL)
                {
                    conjunto_destruir(actual);
                }
                actual = conjunto_crear(cap);
                if (actual != NULL)
                {
                    printf("OK\n");
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
        else if (strcmp(cmd, "AGREGAR") == 0)
        {
            int val = 0;
            if (scanf("%d", &val) == 1)
            {
                if (actual == NULL)
                {
                    printf("ERROR\n");
                }
                else if (conjunto_agregar(actual, val))
                {
                    printf("OK\n");
                }
                else
                {
                    printf("LLENO\n");
                }
            }
        }
        else if (strcmp(cmd, "ELIMINAR") == 0)
        {
            int val = 0;
            if (scanf("%d", &val) == 1)
            {
                if (actual == NULL)
                {
                    printf("ERROR\n");
                }
                else if (conjunto_eliminar(actual, val))
                {
                    printf("OK\n");
                }
                else
                {
                    printf("NO_EXISTE\n");
                }
            }
        }
        else if (strcmp(cmd, "PERTENECE") == 0)
        {
            int val = 0;
            if (scanf("%d", &val) == 1)
            {
                if (actual == NULL)
                {
                    printf("ERROR\n");
                }
                else
                {
                    printf("%s\n", conjunto_pertenece(actual, val) ? "SI" : "NO");
                }
            }
        }
        else if (strcmp(cmd, "CARDINAL") == 0)
        {
            if (actual == NULL)
            {
                printf("ERROR\n");
            }
            else
            {
                printf("%zu\n", conjunto_cardinal(actual));
            }
        }
        else if (strcmp(cmd, "VACIO") == 0)
        {
            if (actual == NULL)
            {
                printf("ERROR\n");
            }
            else
            {
                printf("%s\n", conjunto_esta_vacio(actual) ? "SI" : "NO");
            }
        }
        else if (strcmp(cmd, "SALIR") == 0)
        {
            break;
        }
    }

    if (actual != NULL)
    {
        conjunto_destruir(actual);
    }
    return 0;
}
