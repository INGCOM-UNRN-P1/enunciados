/*
 * LRU Cache Basico
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>

#define MAX_CAP 8

typedef struct {
    int claves[MAX_CAP];
    int valores[MAX_CAP];
    int tamano;
    int capacidad;
} t_LRUCache;

void lru_init(t_LRUCache *c, int cap) {
    c->tamano = 0;
    c->capacidad = (cap > MAX_CAP) ? MAX_CAP : cap;
}

int lru_get(t_LRUCache *c, int clave) {
    for (int i = 0; i < c->tamano; i++) {
        if (c->claves[i] == clave) {
            int val = c->valores[i];
            for (int j = i; j < c->tamano - 1; j++) {
                c->claves[j] = c->claves[j + 1];
                c->valores[j] = c->valores[j + 1];
            }
            c->claves[c->tamano - 1] = clave;
            c->valores[c->tamano - 1] = val;
            return val;
        }
    }
    return -1;
}

void lru_put(t_LRUCache *c, int clave, int valor) {
    if (lru_get(c, clave) != -1) {
        c->valores[c->tamano - 1] = valor;
        return;
    }
    if (c->tamano >= c->capacidad) {
        for (int i = 0; i < c->tamano - 1; i++) {
            c->claves[i] = c->claves[i + 1];
            c->valores[i] = c->valores[i + 1];
        }
        c->tamano--;
    }
    c->claves[c->tamano] = clave;
    c->valores[c->tamano] = valor;
    c->tamano++;
}

int main(void) {
    t_LRUCache c;
    lru_init(&c, 2);
    lru_put(&c, 1, 10);
    lru_put(&c, 2, 20);
    int v1 = lru_get(&c, 1);
    lru_put(&c, 3, 30); // desaloja 2
    int v2 = lru_get(&c, 2);
    int v3 = lru_get(&c, 3);
    printf("GET_1: %d | GET_2: %d | GET_3: %d\n", v1, v2, v3);
    return 0;
}