#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "heap-prio-07.h"

static bool antes(tarea_t a, size_t sa, tarea_t b, size_t sb) {
    return a.prioridad > b.prioridad ||
           (a.prioridad == b.prioridad && sa < sb);
}
void cola_init(cola_t *c) {
    if (!c) return;
    c->tamano = 0;
    c->siguiente = 0;
}
bool cola_push(cola_t *c, tarea_t tarea) {
    if (!c || c->tamano >= HEAP_CAPACITY) return false;
    size_t i = c->tamano++;
    size_t sec = c->siguiente++;
    while (i > 0) {
        size_t p = (i - 1) / 2;
        if (!antes(tarea, sec, c->datos[p], c->secuencia[p])) break;
        c->datos[i] = c->datos[p];
        c->secuencia[i] = c->secuencia[p];
        i = p;
    }
    c->datos[i] = tarea;
    c->secuencia[i] = sec;
    return true;
}
bool cola_pop(cola_t *c, tarea_t *salida) {
    if (!c || !salida || c->tamano == 0) return false;
    *salida = c->datos[0];
    size_t n = --c->tamano;
    if (n == 0) return true;
    tarea_t ultimo = c->datos[n];
    size_t sec_ultimo = c->secuencia[n];
    size_t i = 0;
    while (i < n / 2 || (n % 2 != 0 && i == n / 2)) {
        size_t izq = 2 * i + 1;
        if (izq >= n) break;
        size_t mejor = izq;
        size_t der = izq + 1;
        if (der < n && antes(c->datos[der], c->secuencia[der],
                             c->datos[izq], c->secuencia[izq])) {
            mejor = der;
        }
        if (!antes(c->datos[mejor], c->secuencia[mejor], ultimo, sec_ultimo)) break;
        c->datos[i] = c->datos[mejor];
        c->secuencia[i] = c->secuencia[mejor];
        i = mejor;
    }
    c->datos[i] = ultimo;
    c->secuencia[i] = sec_ultimo;
    return true;
}
