# Eliminación de Nodos en Árbol AVL y Rebalanceo

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_08(avl_node_t *raiz, int clave);
```

Elimina la clave indicada, rebalancea los ancestros y devuelve la raíz actualizada. Si no existe, el árbol no cambia.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
