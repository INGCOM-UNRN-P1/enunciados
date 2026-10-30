/*
 * DSU con Compresion de Caminos
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>

#define MAX_NODOS 100

typedef struct {
    int padre[MAX_NODOS];
    int rango[MAX_NODOS];
} t_DSU;

void dsu_init(t_DSU *d, int n) {
    for (int i = 0; i < n; i++) {
        d->padre[i] = i;
        d->rango[i] = 0;
    }
}

int dsu_find(t_DSU *d, int u) {
    if (d->padre[u] != u) {
        d->padre[u] = dsu_find(d, d->padre[u]);
    }
    return d->padre[u];
}

void dsu_union(t_DSU *d, int u, int v) {
    int ru = dsu_find(d, u);
    int rv = dsu_find(d, v);
    if (ru != rv) {
        if (d->rango[ru] < d->rango[rv]) {
            d->padre[ru] = rv;
        } else if (d->rango[ru] > d->rango[rv]) {
            d->padre[rv] = ru;
        } else {
            d->padre[rv] = ru;
            d->rango[ru]++;
        }
    }
}

int main(void) {
    t_DSU dsu;
    int n = 0, operaciones = 0;
    if (scanf("%d %d", &n, &operaciones) != 2 || n <= 0 || n > MAX_NODOS) return 0;
    dsu_init(&dsu, n);
    for (int i = 0; i < operaciones; i++) {
        int u = 0, v = 0;
        if (scanf("%d %d", &u, &v) == 2 && u < n && v < n) {
            dsu_union(&dsu, u, v);
        }
    }
    int q1 = 0, q2 = 0;
    if (scanf("%d %d", &q1, &q2) == 2 && q1 < n && q2 < n) {
        printf("CONECTADOS: %d\n", (dsu_find(&dsu, q1) == dsu_find(&dsu, q2)) ? 1 : 0);
    }
    return 0;
}