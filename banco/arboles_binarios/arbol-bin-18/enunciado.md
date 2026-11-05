Reconstrucción desde inorder y preorder

Construir un árbol binario a partir de recorridos inorder y preorder. Los valores son únicos y ambos recorridos pertenecen al mismo árbol.

### Tipo y contrato

```c
typedef struct nodo_arbol_18 {
    int valor;
    struct nodo_arbol_18 *izq;
    struct nodo_arbol_18 *der;
} nodo_arbol_18_t;

nodo_arbol_18_t *reconstruir_in_pre(const int *inorder, const int *preorder, size_t n);
void liberar_arbol_18(nodo_arbol_18_t *raiz);
```

Con `n == 0` se devuelve `NULL`. Para `n > 0`, los punteros a recorridos deben ser válidos. Las secuencias deben contener valores únicos y ser recorridos compatibles del mismo árbol.
