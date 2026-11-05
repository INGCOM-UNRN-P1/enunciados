Ancestro común más bajo: LCA por valores únicos: devuelve NULL si alguno no existe; si ambos son el mismo valor, devuelve su nodo.

### Tipo y contrato

```c
typedef struct nodo_arbol_11 {
    int valor;
    struct nodo_arbol_11 *izq;
    struct nodo_arbol_11 *der;
} nodo_arbol_11_t;

nodo_arbol_11_t *ancestro_comun(const nodo_arbol_11_t *raiz, int valor_a, int valor_b);
```

LCA por valores únicos: devuelve NULL si alguno no existe; si ambos son el mismo valor, devuelve su nodo.
