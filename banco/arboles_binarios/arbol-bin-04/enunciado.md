Conteo de nodos: Contar todos los nodos; el árbol vacío tiene cero nodos.

### Tipo y contrato

```c
typedef struct nodo_arbol_04 {
    int valor;
    struct nodo_arbol_04 *izq;
    struct nodo_arbol_04 *der;
} nodo_arbol_04_t;

size_t contar_nodos(const nodo_arbol_04_t *raiz);
```

Contar todos los nodos; el árbol vacío tiene cero nodos.
