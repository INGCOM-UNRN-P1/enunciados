#include <stdint.h>
#include <stdlib.h>
#include "heap-prio-01.h"

void heap_init(min_heap_t *h) {
    if (!h) return;
    h->datos = NULL;
    h->tamano = 0;
    h->capacidad = 0;
}
static int heap_reservar(min_heap_t *h, size_t requerida) {
    if (requerida <= h->capacidad) return 1;
    size_t nueva = h->capacidad ? h->capacidad : 8;
    while (nueva < requerida) {
        if (nueva > SIZE_MAX / 2) {
            nueva = requerida;
            break;
        }
        nueva *= 2;
    }
    if (nueva > SIZE_MAX / sizeof *h->datos) return 0;
    int *datos = realloc(h->datos, nueva * sizeof *datos);
    if (!datos) return 0;
    h->datos = datos;
    h->capacidad = nueva;
    return 1;
}
void heap_push(min_heap_t *h, int val) {
    if (!h || h->tamano == SIZE_MAX || !heap_reservar(h, h->tamano + 1)) return;
    size_t i = h->tamano++;
    while (i > 0) {
        size_t padre = (i - 1) / 2;
        if (h->datos[padre] <= val) break;
        h->datos[i] = h->datos[padre];
        i = padre;
    }
    h->datos[i] = val;
}
int heap_pop(min_heap_t *h, int *out) {
    if (!h || !out || h->tamano == 0) return 0;
    *out = h->datos[0];
    int ultimo = h->datos[--h->tamano];
    if (h->tamano == 0) return 1;
    size_t i = 0;
    while (i <= (h->tamano - 1) / 2) {
        size_t hijo = i * 2 + 1;
        if (hijo >= h->tamano) break;
        if (hijo + 1 < h->tamano && h->datos[hijo + 1] < h->datos[hijo]) hijo++;
        if (h->datos[hijo] >= ultimo) break;
        h->datos[i] = h->datos[hijo];
        i = hijo;
    }
    h->datos[i] = ultimo;
    return 1;
}
void heap_destroy(min_heap_t *h) {
    if (!h) return;
    free(h->datos);
    h->datos = NULL;
    h->tamano = 0;
    h->capacidad = 0;
}
