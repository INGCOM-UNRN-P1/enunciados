# Rotación Simple a la Derecha en Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_03(avl_node_t *raiz);
```

Aplica una rotación simple derecha en la raíz y devuelve la nueva raíz. Precondición: la raíz y su hijo izquierdo existen.

```{dibu}
:caption: Rotación simple a la derecha en la raíz `30`: su hijo izquierdo `20` sube como nueva raíz, `30` baja a la derecha y el subárbol derecho de `20` (`25`) pasa a ser el hijo izquierdo de `30`.
- type: tree
  title: Antes
  values: [30, 20, 40, 10, 25]
  highlight: [20, 30]
- type: tree
  title: Después de rotar a la derecha
  values: [20, 10, 30, "", "", 25, 40]
  highlight: [20, 30]
```

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
