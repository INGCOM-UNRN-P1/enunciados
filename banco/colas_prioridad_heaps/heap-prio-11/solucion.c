#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include "heap-prio-11.h"

static void bajar_max(int *h, size_t n, size_t i) {
    for (;;) {
        size_t mayor = i;
        size_t izq = 2 * i + 1;
        size_t der = izq + 1;
        if (izq < n && h[izq] > h[mayor]) mayor = izq;
        if (der < n && h[der] > h[mayor]) mayor = der;
        if (mayor == i) return;
        int t = h[i]; h[i] = h[mayor]; h[mayor] = t;
        i = mayor;
    }
}
static void reparar_max(int *h, size_t n, size_t i) {
    if (i > 0 && h[i] > h[(i - 1) / 2]) {
        while (i > 0 && h[i] > h[(i - 1) / 2]) {
            size_t p = (i - 1) / 2;
            int t = h[i]; h[i] = h[p]; h[p] = t;
            i = p;
        }
    } else {
        bajar_max(h, n, i);
    }
}
bool kth_largest(const int *a, size_t n, size_t k, int *resultado) {
    if (!a || !resultado || k == 0 || k > n || k > (size_t)-1 / sizeof(int)) return false;
    int *h = malloc(k * sizeof *h);
    if (!h) return false;
    size_t usados = 0;
    for (size_t q = 0; q < n; q++) {
        if (usados < k) {
            size_t i = usados++;
            while (i > 0 && h[(i - 1) / 2] < a[q]) {
                h[i] = h[(i - 1) / 2];
                i = (i - 1) / 2;
            }
            h[i] = a[q];
            continue;
        }
        size_t minimo = 0;
        for (size_t i = 1; i < k; i++) if (h[i] < h[minimo]) minimo = i;
        if (a[q] > h[minimo]) {
            h[minimo] = a[q];
            reparar_max(h, k, minimo);
        }
    }
    size_t minimo = 0;
    for (size_t i = 1; i < k; i++) if (h[i] < h[minimo]) minimo = i;
    *resultado = h[minimo];
    free(h);
    return true;
}
