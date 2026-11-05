Árboles idénticos: Idénticos si coinciden estructura y valores en las posiciones correspondientes; dos árboles vacíos son idénticos.

### Tipo y contrato

```c
typedef struct nodo_arbol_14 {
    int valor;
    struct nodo_arbol_14 *izq;
    struct nodo_arbol_14 *der;
} nodo_arbol_14_t;

bool son_identicos(const nodo_arbol_14_t *a, const nodo_arbol_14_t *b);
```

Idénticos si coinciden estructura y valores en las posiciones correspondientes; dos árboles vacíos son idénticos.
