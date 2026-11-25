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

```{dibu}
:caption: `ancestro_comun(raiz, 10, 14)` devuelve el nodo `12`: es el nodo más profundo que tiene a ambos en su subárbol. Para `4` y `14` el resultado es `8`, y para `4` y `22`, la raíz `20`.
type: tree
values: [20, 8, 22, 4, 12, "", "", "", "", 10, 14]
highlight: [10, 14, 12]
```
