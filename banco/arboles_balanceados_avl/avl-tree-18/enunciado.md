# División de Árbol AVL por una Clave Pivote

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `void avl_split(const avl_node_t *root, int pivot, avl_node_t **less, avl_node_t **greater_equal);`

`avl_split` crea dos nuevos árboles AVL independientes: claves menores que el pivote y claves mayores o iguales. El árbol de entrada permanece intacto. El llamador debe destruir los tres árboles.
