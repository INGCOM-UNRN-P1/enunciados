Impresión de caminos raíz a hoja: Imprime un camino por línea, valores separados por espacios, recorriendo primero el hijo izquierdo. Árbol vacío no imprime nada.

### Tipo y contrato

```c
typedef struct nodo_arbol_17 {
    int valor;
    struct nodo_arbol_17 *izq;
    struct nodo_arbol_17 *der;
} nodo_arbol_17_t;

void imprimir_caminos(const nodo_arbol_17_t *raiz, FILE *salida);
```

Imprime un camino por línea, valores separados por espacios, recorriendo primero el hijo izquierdo. Árbol vacío no imprime nada.
