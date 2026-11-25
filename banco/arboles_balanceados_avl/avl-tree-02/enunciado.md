# Rotación Simple a la Izquierda en Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_02(avl_node_t *raiz);
```

Aplica una rotación simple izquierda en la raíz y devuelve la nueva raíz. Precondición: la raíz y su hijo derecho existen.

```{dibu}
:caption: Rotación simple a la izquierda en la raíz `10`: su hijo derecho `20` sube como nueva raíz, `10` baja a la izquierda y el subárbol izquierdo de `20` (`15`) pasa a ser el hijo derecho de `10`.
- type: tree
  title: Antes
  values: [10, 5, 20, "", "", 15, 30]
  highlight: [10, 20]
- type: tree
  title: Después de rotar a la izquierda
  values: [20, 10, 30, 5, 15]
  highlight: [10, 20]
```

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
