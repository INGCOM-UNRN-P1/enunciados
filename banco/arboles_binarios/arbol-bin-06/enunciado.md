Mínimo y máximo: Obtener mínimo y máximo. Devuelve false para árbol vacío o punteros de salida nulos.

### Tipo y contrato

```c
typedef struct nodo_arbol_06 {
    int valor;
    struct nodo_arbol_06 *izq;
    struct nodo_arbol_06 *der;
} nodo_arbol_06_t;

bool obtener_min_max(const nodo_arbol_06_t *raiz, int *minimo, int *maximo);
```

Obtener mínimo y máximo. Devuelve false para árbol vacío o punteros de salida nulos.
