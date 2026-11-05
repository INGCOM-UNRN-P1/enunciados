# Fusión de Dos Árboles AVL en Uno Solo Balanceado

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_17(const avl_node_t *arbol_a, const avl_node_t *arbol_b);
```

Fusiona dos AVL con conjuntos de claves disjuntos en una nueva estructura independiente. Los árboles de entrada no se modifican; devuelve NULL si ambos son vacíos o ante falta de memoria.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
