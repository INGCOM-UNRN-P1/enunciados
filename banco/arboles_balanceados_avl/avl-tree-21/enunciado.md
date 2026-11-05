# Serialización de Árbol AVL a Representación en Arreglo

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `size_t avl_serialize_level(const avl_node_t *root, int *values, size_t *indices, size_t capacity);`

Serializa por niveles a pares (clave, índice de heap): raíz en 0, hijo izq 2i+1, der 2i+2. Devuelve número de pares; raíz NULL da 0. Si capacidad no basta devuelve 0.
