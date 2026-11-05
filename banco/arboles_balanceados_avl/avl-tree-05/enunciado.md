# Rotación Doble Derecha-Izquierda RL en Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_05(avl_node_t *raiz);
```

Rebalancea una raíz con caso derecha-izquierda (RL) y devuelve la nueva raíz. Precondición: los nodos del patrón RL existen.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
