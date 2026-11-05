Árbol perfecto: Árbol perfecto: todo nodo interno tiene dos hijos y todas las hojas están a igual profundidad. Árbol vacío se considera perfecto.

### Tipo y contrato

```c
typedef struct nodo_arbol_08 {
    int valor;
    struct nodo_arbol_08 *izq;
    struct nodo_arbol_08 *der;
} nodo_arbol_08_t;

bool es_perfecto(const nodo_arbol_08_t *raiz);
```

Árbol perfecto: todo nodo interno tiene dos hijos y todas las hojas están a igual profundidad. Árbol vacío se considera perfecto.
