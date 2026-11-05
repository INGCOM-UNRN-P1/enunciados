# Búsqueda del K-ésimo Menor Elemento en AVL Aumentado

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `int avl_kth_smallest(const avl_node_t *root, size_t k, int *key);`

`avl_kth_smallest` usa rango 1-based y devuelve 1 si encuentra la clave; para k fuera de 1..n o salida NULL devuelve 0 sin escribirla.
