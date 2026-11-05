# Mínimo y Máximo Elemento en Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
int ejecutar_avl_tree_11(const avl_node_t *raiz, int *minimo, int *maximo);
```

Obtiene mínimo y máximo. Devuelve 1 si el árbol no está vacío y los punteros de salida son válidos; de lo contrario devuelve 0.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
