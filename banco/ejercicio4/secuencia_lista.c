/**
 * @file secuencia_lista.c
 * @brief Implementación del TDA Secuencia sobre nodos dispersos (Lista enlazada).
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "secuencia.h"

typedef struct nodo
{
    int valor;
    struct nodo *siguiente;
} nodo_t;

struct secuencia
{
    nodo_t *cabeza;
    size_t cantidad;
    size_t capacidad;
};

static bool secuencia_invariante(const secuencia_t *s)
{
    if (s == NULL || s->capacidad == 0 || s->cantidad > s->capacidad)
    {
        return false;
    }
    size_t contador = 0;
    const nodo_t *actual = s->cabeza;
    while (actual != NULL)
    {
        contador++;
        actual = actual->siguiente;
    }
    return contador == s->cantidad;
}

secuencia_t *secuencia_crear(size_t capacidad)
{
    if (capacidad == 0)
    {
        return NULL;
    }
    secuencia_t *sec = (secuencia_t *)malloc(sizeof(struct secuencia));
    if (sec == NULL)
    {
        return NULL;
    }
    sec->cabeza = NULL;
    sec->cantidad = 0;
    sec->capacidad = capacidad;
    if (!secuencia_invariante(sec))
    {
        free(sec);
        return NULL;
    }
    return sec;
}

void secuencia_destruir(secuencia_t *sec)
{
    if (sec != NULL)
    {
        nodo_t *actual = sec->cabeza;
        while (actual != NULL)
        {
            nodo_t *sig = actual->siguiente;
            free(actual);
            actual = sig;
        }
        free(sec);
    }
}

bool secuencia_obtener(const secuencia_t *sec, size_t indice, int *destino)
{
    if (sec == NULL || destino == NULL || indice >= sec->cantidad)
    {
        return false;
    }
    const nodo_t *actual = sec->cabeza;
    size_t i = 0;
    while (i < indice && actual != NULL)
    {
        actual = actual->siguiente;
        i++;
    }
    if (actual == NULL)
    {
        return false;
    }
    *destino = actual->valor;
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
    if (sec == NULL || sec->cantidad >= sec->capacidad || pos > sec->cantidad)
    {
        return false;
    }
    nodo_t *nuevo = (nodo_t *)malloc(sizeof(nodo_t));
    if (nuevo == NULL)
    {
        return false;
    }
    nuevo->valor = valor;

    if (pos == 0)
    {
        nuevo->siguiente = sec->cabeza;
        sec->cabeza = nuevo;
    }
    else
    {
        nodo_t *ant = sec->cabeza;
        for (size_t i = 0; i < pos - 1 && ant != NULL; i++)
        {
            ant = ant->siguiente;
        }
        if (ant == NULL)
        {
            free(nuevo);
            return false;
        }
        nuevo->siguiente = ant->siguiente;
        ant->siguiente = nuevo;
    }
    sec->cantidad++;
    return true;
}

bool secuencia_eliminar(secuencia_t *sec, size_t pos, int *dato_extraido)
{
    if (sec == NULL || dato_extraido == NULL || pos >= sec->cantidad || sec->cabeza == NULL)
    {
        return false;
    }
    nodo_t *a_eliminar = NULL;
    if (pos == 0)
    {
        a_eliminar = sec->cabeza;
        sec->cabeza = a_eliminar->siguiente;
    }
    else
    {
        nodo_t *ant = sec->cabeza;
        for (size_t i = 0; i < pos - 1 && ant != NULL; i++)
        {
            ant = ant->siguiente;
        }
        if (ant == NULL || ant->siguiente == NULL)
        {
            return false;
        }
        a_eliminar = ant->siguiente;
        ant->siguiente = a_eliminar->siguiente;
    }
    *dato_extraido = a_eliminar->valor;
    free(a_eliminar);
    sec->cantidad--;
    return true;
}

char *secuencia_a_cadena(const secuencia_t *sec)
{
    if (sec == NULL)
    {
        return NULL;
    }
    size_t tam = 3;
    const nodo_t *actual = sec->cabeza;
    while (actual != NULL)
    {
        tam += (size_t)snprintf(NULL, 0, "%d", actual->valor);
        if (actual->siguiente != NULL)
        {
            tam += 2;
        }
        actual = actual->siguiente;
    }
    char *str = (char *)malloc(tam * sizeof(char));
    if (str == NULL)
    {
        return NULL;
    }
    size_t offset = 0;
    offset += (size_t)snprintf(str + offset, tam - offset, "[");
    actual = sec->cabeza;
    while (actual != NULL)
    {
        offset += (size_t)snprintf(str + offset, tam - offset, "%d", actual->valor);
        if (actual->siguiente != NULL)
        {
            offset += (size_t)snprintf(str + offset, tam - offset, ", ");
        }
        actual = actual->siguiente;
    }
    snprintf(str + offset, tam - offset, "]");
    return str;
}
