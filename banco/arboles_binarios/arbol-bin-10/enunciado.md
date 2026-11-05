Diámetro: Diámetro como cantidad máxima de aristas en un camino entre dos nodos; árbol vacío o unitario da cero.

### Tipo y contrato

```c
typedef struct nodo_arbol_10 {
    int valor;
    struct nodo_arbol_10 *izq;
    struct nodo_arbol_10 *der;
} nodo_arbol_10_t;

size_t diametro(const nodo_arbol_10_t *raiz);
```

Diámetro como cantidad máxima de aristas en un camino entre dos nodos; árbol vacío o unitario da cero.
