Árbol espejo: Invertir in situ intercambiando recursivamente los hijos izquierdo y derecho.

### Tipo y contrato

```c
typedef struct nodo_arbol_12 {
    int valor;
    struct nodo_arbol_12 *izq;
    struct nodo_arbol_12 *der;
} nodo_arbol_12_t;

void invertir_arbol(nodo_arbol_12_t *raiz);
```

Invertir in situ intercambiando recursivamente los hijos izquierdo y derecho.
