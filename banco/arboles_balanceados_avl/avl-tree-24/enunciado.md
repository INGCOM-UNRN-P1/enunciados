# Destrucción y Liberación Recursiva Completa de Memoria de Árbol AVL

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `void avl_tree_destroy(avl_node_t **root);`

Destruye el árbol y fija la raíz en NULL; admite puntero a raíz NULL.
