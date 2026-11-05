Árbol simétrico: Simétrico si el árbol coincide consigo mismo al reflejar estructura y valores.

### Tipo y contrato

```c
typedef struct nodo_arbol_13 {
    int valor;
    struct nodo_arbol_13 *izq;
    struct nodo_arbol_13 *der;
} nodo_arbol_13_t;

bool es_simetrico(const nodo_arbol_13_t *raiz);
```

Simétrico si el árbol coincide consigo mismo al reflejar estructura y valores.
