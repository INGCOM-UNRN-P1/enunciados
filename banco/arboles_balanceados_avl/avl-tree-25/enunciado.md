# Comparación Empírica de Altura de AVL frente a BST Aleatorio

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `int avl_compare_heights(const int *keys, size_t count, int *avl_height_out, int *bst_height_out);`

Compara inserción BST sin balancear contra AVL con la misma secuencia de claves distintas, en el orden dado. Devuelve 1 y escribe alturas; inválidos retornan 0.
