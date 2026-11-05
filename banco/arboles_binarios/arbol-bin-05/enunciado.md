Suma de valores: Sumar valores de todos los nodos; el árbol vacío suma cero.

### Tipo y contrato

```c
typedef struct nodo_arbol_05 {
    int valor;
    struct nodo_arbol_05 *izq;
    struct nodo_arbol_05 *der;
} nodo_arbol_05_t;

int64_t sumar_nodos(const nodo_arbol_05_t *raiz);
```

Sumar valores de todos los nodos; el árbol vacío suma cero.
