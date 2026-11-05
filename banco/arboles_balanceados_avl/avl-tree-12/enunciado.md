# Sucesor y Predecesor Inorder en Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
int ejecutar_avl_tree_12(const avl_node_t *raiz, int clave, const avl_node_t **predecesor, const avl_node_t **sucesor);
```

Busca una clave y devuelve por separado su predecesor y sucesor inorder. Cada salida puede ser NULL en un extremo. Devuelve 1 si la clave existe; si no, devuelve 0 y ambas salidas quedan NULL.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
