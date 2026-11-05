Suma máxima raíz a hoja: Máxima suma incluyendo ambos extremos y solo caminos que terminan en hoja; admite valores negativos.

### Tipo y contrato

```c
typedef struct nodo_arbol_16 {
    int valor;
    struct nodo_arbol_16 *izq;
    struct nodo_arbol_16 *der;
} nodo_arbol_16_t;

bool suma_maxima_raiz_hoja(const nodo_arbol_16_t *raiz, int64_t *suma);
```

Máxima suma incluyendo ambos extremos y solo caminos que terminan en hoja; admite valores negativos.
