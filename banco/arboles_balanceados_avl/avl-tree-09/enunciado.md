# Verificación de Propiedad AVL en Árbol Binario Arbitrario

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
int ejecutar_avl_tree_09(const avl_node_t *raiz);
```

Verifica que el árbol sea un BST de claves distintas y esté balanceado AVL; no confía en las alturas almacenadas. Devuelve 1 si cumple, 0 si no.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
