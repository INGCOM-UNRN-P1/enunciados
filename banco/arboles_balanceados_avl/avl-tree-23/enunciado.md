# Árbol AVL Indexado como Arreglo Dinámico

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `typedef struct { int *values; size_t *indices; size_t count; } avl_index_t;
int avl_index_build(const avl_node_t *root, avl_index_t *index);
void avl_index_destroy(avl_index_t *index);`

Construye una representación dinámica con los pares de serialización por niveles. En éxito retorna 1; destroy libera arreglos y reinicia el descriptor. Árbol vacío produce descriptor vacío válido. Si el cálculo de algún índice heap excede `SIZE_MAX`, la operación falla, devuelve 0 y deja el descriptor vacío.
