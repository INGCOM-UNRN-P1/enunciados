#include "arbol-bin-22.h"
#include <stdlib.h>

typedef struct {
    long long distancia;
    size_t profundidad;
    int valor;
} columna_22_t;

typedef struct {
    columna_22_t *items;
    size_t cantidad;
    size_t capacidad;
    bool inferior;
} vista_ctx_22_t;

static void visitar_lateral_22(const nodo_arbol_bin_22_t *n, bool izquierda,
                               size_t profundidad, int *valores,
                               size_t capacidad, size_t *cantidad)
{
    if (!n) return;
    if (profundidad == *cantidad && *cantidad < capacidad)
        valores[(*cantidad)++] = n->valor;
    visitar_lateral_22(izquierda ? n->izq : n->der, izquierda,
                       profundidad + 1, valores, capacidad, cantidad);
    visitar_lateral_22(izquierda ? n->der : n->izq, izquierda,
                       profundidad + 1, valores, capacidad, cantidad);
}

bool vista_lateral_22(const nodo_arbol_bin_22_t *raiz, bool desde_izquierda,
                      int *valores, size_t capacidad, size_t *cantidad)
{
    if (!cantidad || (capacidad && !valores)) return false;
    *cantidad = 0;
    visitar_lateral_22(raiz, desde_izquierda, 0, valores, capacidad, cantidad);
    return true;
}

static bool visitar_vertical_22(const nodo_arbol_bin_22_t *n, long long hd,
                                size_t profundidad, vista_ctx_22_t *ctx)
{
    if (!n) return true;
    size_t i = 0;
    while (i < ctx->cantidad && ctx->items[i].distancia != hd) ++i;
    if (i == ctx->cantidad) {
        if (ctx->cantidad == ctx->capacidad) {
            size_t nueva = ctx->capacidad ? ctx->capacidad * 2 : 8;
            if (nueva < ctx->capacidad || nueva > (size_t)-1 / sizeof *ctx->items)
                return false;
            columna_22_t *p = realloc(ctx->items, nueva * sizeof *p);
            if (!p) return false;
            ctx->items = p;
            ctx->capacidad = nueva;
        }
        ctx->items[i] = (columna_22_t){hd, profundidad, n->valor};
        ++ctx->cantidad;
    } else if ((ctx->inferior && profundidad >= ctx->items[i].profundidad) ||
               (!ctx->inferior && profundidad < ctx->items[i].profundidad)) {
        ctx->items[i].profundidad = profundidad;
        ctx->items[i].valor = n->valor;
    }
    return visitar_vertical_22(n->izq, hd - 1, profundidad + 1, ctx) &&
           visitar_vertical_22(n->der, hd + 1, profundidad + 1, ctx);
}

static int comparar_columnas_22(const void *a, const void *b)
{
    const columna_22_t *x = a, *y = b;
    return (x->distancia > y->distancia) - (x->distancia < y->distancia);
}

bool vista_vertical_22(const nodo_arbol_bin_22_t *raiz, bool inferior,
                       int *valores, size_t capacidad, size_t *cantidad)
{
    if (!cantidad || (capacidad && !valores)) return false;
    *cantidad = 0;
    vista_ctx_22_t ctx = {NULL, 0, 0, inferior};
    bool ok = visitar_vertical_22(raiz, 0, 0, &ctx);
    if (ok) {
        qsort(ctx.items, ctx.cantidad, sizeof *ctx.items, comparar_columnas_22);
        *cantidad = ctx.cantidad < capacidad ? ctx.cantidad : capacidad;
        for (size_t i = 0; i < *cantidad; ++i) valores[i] = ctx.items[i].valor;
    }
    free(ctx.items);
    return ok;
}
