/**
 * @file solucion.c
 * @brief Implementación de referencia canónica: TDA Secuencia (secuencia_t).
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "secuencia.h"

struct secuencia
{
    int *datos;
    size_t cantidad;
    size_t capacidad;
};

static bool secuencia_invariante(const secuencia_t *s)
{
    return (s != NULL && s->datos != NULL && s->capacidad > 0 && s->cantidad <= s->capacidad);
}

secuencia_t *secuencia_crear(size_t capacidad)
{
    if (capacidad == 0)
    {
        return NULL;
    }
    secuencia_t *s = (secuencia_t *)malloc(sizeof(struct secuencia));
    if (s == NULL)
    {
        return NULL;
    }
    int *arreglo = (int *)malloc(capacidad * sizeof(int));
    if (arreglo == NULL)
    {
        free(s);
        return NULL;
    }
    s->datos = arreglo;
    s->capacidad = capacidad;
    s->cantidad = 0;
    if (!secuencia_invariante(s))
    {
        free(s->datos);
        free(s);
        return NULL;
    }
    return s;
}

void secuencia_destruir(secuencia_t *sec)
{
    if (sec != NULL)
    {
        free(sec->datos);
        free(sec);
    }
}

bool secuencia_obtener(const secuencia_t *sec, size_t indice, int *destino)
{
    if (sec == NULL || destino == NULL || indice >= sec->cantidad)
    {
        return false;
    }
    *destino = sec->datos[indice];
    return true;
}

size_t secuencia_largo(const secuencia_t *sec)
{
    if (sec == NULL)
    {
        return 0;
    }
    return sec->cantidad;
}

bool secuencia_esta_vacia(const secuencia_t *sec)
{
    if (sec == NULL)
    {
        return false;
    }
    return sec->cantidad == 0;
}

bool secuencia_insertar(secuencia_t *sec, size_t pos, int valor)
{
    if (sec == NULL || sec->datos == NULL || sec->cantidad >= sec->capacidad || pos > sec->cantidad)
    {
        return false;
    }
    for (size_t i = sec->cantidad; i > pos; i--)
    {
        sec->datos[i] = sec->datos[i - 1];
    }
    sec->datos[pos] = valor;
    sec->cantidad++;
    return true;
}

bool secuencia_eliminar(secuencia_t *sec, size_t pos, int *dato_extraido)
{
    if (sec == NULL || sec->datos == NULL || dato_extraido == NULL || pos >= sec->cantidad)
    {
        return false;
    }
    *dato_extraido = sec->datos[pos];
    for (size_t i = pos; i + 1 < sec->cantidad; i++)
    {
        sec->datos[i] = sec->datos[i + 1];
    }
    sec->cantidad--;
    return true;
}

char *secuencia_a_cadena(const secuencia_t *sec)
{
    if (sec == NULL || sec->datos == NULL)
    {
        return NULL;
    }
    size_t tam = 3;
    for (size_t i = 0; i < sec->cantidad; i++)
    {
        tam += (size_t)snprintf(NULL, 0, "%d", sec->datos[i]);
        if (i + 1 < sec->cantidad)
        {
            tam += 2;
        }
    }
    char *str = (char *)malloc(tam * sizeof(char));
    if (str == NULL)
    {
        return NULL;
    }
    size_t offset = 0;
    offset += (size_t)snprintf(str + offset, tam - offset, "[");
    for (size_t i = 0; i < sec->cantidad; i++)
    {
        offset += (size_t)snprintf(str + offset, tam - offset, "%d", sec->datos[i]);
        if (i + 1 < sec->cantidad)
        {
            offset += (size_t)snprintf(str + offset, tam - offset, ", ");
        }
    }
    snprintf(str + offset, tam - offset, "]");
    return str;
}

int main(void)
{
    char cmd[32];
    secuencia_t *actual = NULL;

    while (scanf("%31s", cmd) == 1)
    {
        if (strcmp(cmd, "CREAR") == 0)
        {
            size_t cap = 0;
            if (scanf("%zu", &cap) == 1)
            {
                if (actual != NULL)
                {
                    secuencia_destruir(actual);
                }
                actual = secuencia_crear(cap);
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
        else if (strcmp(cmd, "INSERTAR") == 0)
        {
            size_t pos = 0;
            int val = 0;
            if (scanf("%zu %d", &pos, &val) == 2)
            {
                if (actual == NULL)
                {
                    printf("ERROR\n");
                }
                else if (secuencia_insertar(actual, pos, val))
                {
                    printf("OK\n");
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
        else if (strcmp(cmd, "ELIMINAR") == 0)
        {
            size_t pos = 0;
            if (scanf("%zu", &pos) == 1)
            {
                int extraido = 0;
                if (actual == NULL)
                {
                    printf("ERROR\n");
                }
                else if (secuencia_eliminar(actual, pos, &extraido))
                {
                    printf("EXTRAIDO %d\n", extraido);
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
        else if (strcmp(cmd, "OBTENER") == 0)
        {
            size_t idx = 0;
            if (scanf("%zu", &idx) == 1)
            {
                int val = 0;
                if (actual == NULL)
                {
                    printf("ERROR\n");
                }
                else if (secuencia_obtener(actual, idx, &val))
                {
                    printf("VALOR %d\n", val);
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
        else if (strcmp(cmd, "LARGO") == 0)
        {
            if (actual == NULL)
            {
                printf("ERROR\n");
            }
            else
            {
                printf("%zu\n", secuencia_largo(actual));
            }
        }
        else if (strcmp(cmd, "VACIA") == 0)
        {
            if (actual == NULL)
            {
                printf("ERROR\n");
            }
            else
            {
                printf("%s\n", secuencia_esta_vacia(actual) ? "SI" : "NO");
            }
        }
        else if (strcmp(cmd, "CADENA") == 0)
        {
            if (actual == NULL)
            {
                printf("ERROR\n");
            }
            else
            {
                char *str = secuencia_a_cadena(actual);
                if (str != NULL)
                {
                    printf("%s\n", str);
                    free(str);
                }
                else
                {
                    printf("ERROR\n");
                }
            }
        }
        else if (strcmp(cmd, "SALIR") == 0)
        {
            break;
        }
    }

    if (actual != NULL)
    {
        secuencia_destruir(actual);
    }
    return 0;
}
