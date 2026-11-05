Árbol balanceado en altura: Balanceado si en cada nodo las alturas de subárboles difieren como máximo en uno.

### Tipo y contrato

```c
typedef struct nodo_arbol_09 {
    int valor;
    struct nodo_arbol_09 *izq;
    struct nodo_arbol_09 *der;
} nodo_arbol_09_t;

bool esta_balanceado(const nodo_arbol_09_t *raiz);
```

Balanceado si en cada nodo las alturas de subárboles difieren como máximo en uno.
