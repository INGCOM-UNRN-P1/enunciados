Árbol estricto: Verificar que cada nodo tenga cero o dos hijos.

### Tipo y contrato

```c
typedef struct nodo_arbol_07 {
    int valor;
    struct nodo_arbol_07 *izq;
    struct nodo_arbol_07 *der;
} nodo_arbol_07_t;

bool es_estricto(const nodo_arbol_07_t *raiz);
```

Verificar que cada nodo tenga cero o dos hijos.
