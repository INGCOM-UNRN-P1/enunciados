# Cálculo del Factor de Balance Promedio del Árbol

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
double ejecutar_avl_tree_14(const avl_node_t *raiz);
```

Calcula el promedio aritmético de los factores de balance de todos los nodos; árbol vacío produce 0.0.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
