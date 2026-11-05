#include "arbol-bin-24.h"
#include <stdlib.h>

typedef struct {
    const nodo_arbol_bin_24_t **items;
    size_t count;
    size_t capacity;
} pila_nodos_24_t;

static bool push_24(pila_nodos_24_t *p, const nodo_arbol_bin_24_t *n)
{
    if (p->count == p->capacity) {
        size_t cap = p->capacity ? p->capacity * 2 : 16;
        if (cap < p->capacity || cap > (size_t)-1 / sizeof *p->items) return false;
        const nodo_arbol_bin_24_t **items = realloc(p->items, cap * sizeof *items);
        if (!items) return false;
        p->items = items;
        p->capacity = cap;
    }
    p->items[p->count++] = n;
    return true;
}

size_t recorrido_zigzag_24(const nodo_arbol_bin_24_t *raiz, int *salida, size_t capacidad)
{
    if (!raiz || !salida || !capacidad) return 0;
    pila_nodos_24_t actual = {0}, siguiente = {0};
    size_t escritos = 0;
    bool izquierda_a_derecha = true;
    if (!push_24(&actual, raiz)) return 0;
    while (actual.count && escritos < capacidad) {
        while (actual.count && escritos < capacidad) {
            const nodo_arbol_bin_24_t *n = actual.items[--actual.count];
            salida[escritos++] = n->valor;
            if (izquierda_a_derecha) {
                if (n->izq && !push_24(&siguiente, n->izq)) goto fin;
                if (n->der && !push_24(&siguiente, n->der)) goto fin;
            } else {
                if (n->der && !push_24(&siguiente, n->der)) goto fin;
                if (n->izq && !push_24(&siguiente, n->izq)) goto fin;
            }
        }
        pila_nodos_24_t tmp = actual;
        actual = siguiente;
        siguiente = tmp;
        siguiente.count = 0;
        izquierda_a_derecha = !izquierda_a_derecha;
    }
fin:
    free(actual.items);
    free(siguiente.items);
    return escritos;
}
