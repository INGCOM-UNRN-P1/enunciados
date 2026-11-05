# Reconstrucción de Árbol AVL desde Secuencia Ordenada en O(N)

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `avl_node_t *avl_from_sorted(const int *values, size_t count);`

Construye desde claves estrictamente crecientes, eligiendo la mediana recursivamente. Entrada vacía produce NULL; entrada nula con count>0 o valores no crecientes produce NULL. Tiempo O(n).
