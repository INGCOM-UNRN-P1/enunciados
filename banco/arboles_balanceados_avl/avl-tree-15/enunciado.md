# Clonación Profunda de Estructura de Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_15(const avl_node_t *raiz);
```

Crea una copia profunda independiente, conservando claves, enlaces y alturas. Devuelve NULL para árbol vacío o si falla una reserva.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
