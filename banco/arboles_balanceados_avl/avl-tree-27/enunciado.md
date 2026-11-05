# Impresión Visual de Estructura de Árbol AVL con Indentación

Todas las operaciones usan `avl_node_t` del header compartido `../avl_tree_common.h` (clave entera única, altura, hijos izquierdo/derecho). Las inserciones AVL usan `avl_insert`; árbol vacío se representa con `NULL`.

Contrato de esta práctica: `void avl_print_indented(const avl_node_t *root, FILE *out);`

Imprime raíz/der/izq, cada nivel con dos espacios de sangría, un nodo por línea. NULL no imprime; `out` debe ser un stream válido.
