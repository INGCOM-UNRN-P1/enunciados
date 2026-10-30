/*
 * Trie de Prefijos
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALFABETO 26

typedef struct NodoTrie {
    struct NodoTrie *hijos[ALFABETO];
    int es_fin_palabra;
} nodo_trie_t;

static nodo_trie_t *crear_nodo(void) {
    nodo_trie_t *n = (nodo_trie_t *)calloc(1, sizeof(nodo_trie_t));
    return n;
}

void trie_insertar(nodo_trie_t *raiz, const char *palabra) {
    nodo_trie_t *actual = raiz;
    for (size_t i = 0; palabra[i] != '\0'; i++) {
        int idx = palabra[i] - 'a';
        if (idx < 0 || idx >= ALFABETO) continue;
        if (actual->hijos[idx] == NULL) {
            actual->hijos[idx] = crear_nodo();
        }
        actual = actual->hijos[idx];
    }
    actual->es_fin_palabra = 1;
}

int trie_buscar_prefijo(const nodo_trie_t *raiz, const char *prefijo) {
    const nodo_trie_t *actual = raiz;
    for (size_t i = 0; prefijo[i] != '\0'; i++) {
        int idx = prefijo[i] - 'a';
        if (idx < 0 || idx >= ALFABETO || actual->hijos[idx] == NULL) {
            return 0;
        }
        actual = actual->hijos[idx];
    }
    return 1;
}

void liberar_trie(nodo_trie_t *n) {
    if (n == NULL) return;
    for (int i = 0; i < ALFABETO; i++) {
        liberar_trie(n->hijos[i]);
    }
    free(n);
}

int main(void) {
    nodo_trie_t *raiz = crear_nodo();
    char palabra[64] = {0};
    while (scanf("%63s", palabra) == 1 && strcmp(palabra, "FIN") != 0) {
        trie_insertar(raiz, palabra);
    }
    char prefijo[64] = {0};
    if (scanf("%63s", prefijo) == 1) {
        printf("PREFIJO_%s: %d\n", prefijo, trie_buscar_prefijo(raiz, prefijo));
    }
    liberar_trie(raiz);
    return 0;
}