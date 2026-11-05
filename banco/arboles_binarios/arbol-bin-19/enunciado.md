Reconstrucción desde inorder y postorder

Construir un árbol binario a partir de recorridos inorder y postorder. Los valores son únicos y ambos recorridos pertenecen al mismo árbol.

### Tipo y contrato

```c
typedef struct nodo_arbol_19 {
    int valor;
    struct nodo_arbol_19 *izq;
    struct nodo_arbol_19 *der;
} nodo_arbol_19_t;

nodo_arbol_19_t *reconstruir_in_post(const int *inorder, const int *postorder, size_t n);
void liberar_arbol_19(nodo_arbol_19_t *raiz);
```

Con `n == 0` se devuelve `NULL`. Para `n > 0`, los punteros a recorridos deben ser válidos. Las secuencias deben contener valores únicos y ser recorridos compatibles del mismo árbol.
