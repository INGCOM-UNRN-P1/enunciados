# Recorrido por Niveles BFS de Árbol AVL

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `size_t avl_level_order(const avl_node_t *root, int *values, size_t capacity);`

Escribe claves por niveles izquierda a derecha. Devuelve cantidad; devuelve 0 para árbol vacío, salida NULL o capacidad insuficiente, sin modificar salida si no cabe.
