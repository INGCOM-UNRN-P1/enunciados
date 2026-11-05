Subárbol: Candidato vacío es subárbol; árbol principal vacío solo contiene candidato vacío.

### Tipo y contrato

```c
typedef struct nodo_arbol_15 {
    int valor;
    struct nodo_arbol_15 *izq;
    struct nodo_arbol_15 *der;
} nodo_arbol_15_t;

bool es_subarbol(const nodo_arbol_15_t *arbol, const nodo_arbol_15_t *candidato);
```

Candidato vacío es subárbol; árbol principal vacío solo contiene candidato vacío.
