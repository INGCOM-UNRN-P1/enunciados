# Rotación Simple a la Izquierda en Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_02(avl_node_t *raiz);
```

Aplica una rotación simple izquierda en la raíz y devuelve la nueva raíz. Precondición: la raíz y su hijo derecho existen.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
