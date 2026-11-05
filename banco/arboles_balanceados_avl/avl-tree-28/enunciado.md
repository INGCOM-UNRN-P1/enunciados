# Verificación de Invariante de Búsqueda Binaria y Balance

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `int avl_is_valid(const avl_node_t *root);`

Valida orden estricto BST, alturas almacenadas y diferencia de alturas no mayor a 1; NULL es válido.
