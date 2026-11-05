# Árbol AVL con Conteo de Tamaño de Subárbol para Selección por Rango

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `size_t avl_subtree_size(const avl_node_t *root);
int avl_select_rank(const avl_node_t *root, size_t rank, int *key);`

Los rangos son 1-based e in-order. `avl_select_rank` devuelve 1 y escribe la clave si el rango existe; devuelve 0 si el rango o puntero de salida es inválido. `avl_subtree_size(NULL)` vale 0.
