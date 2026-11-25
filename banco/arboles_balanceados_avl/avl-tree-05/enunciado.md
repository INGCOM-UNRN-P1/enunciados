# Rotación Doble Derecha-Izquierda RL en Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_05(avl_node_t *raiz);
```

Rebalancea una raíz con caso derecha-izquierda (RL) y devuelve la nueva raíz. Precondición: los nodos del patrón RL existen.

```{dibu}
:caption: Caso derecha-izquierda (RL): primero se rota a la derecha el hijo derecho (`30`) y después se rota a la izquierda la raíz (`10`). La nueva raíz es `20`.
- type: tree
  title: Antes (desbalanceado en 10)
  values: [10, "", 30, "", "", 20]
  highlight: [10, 20, 30]
- type: tree
  title: Tras rotar a la derecha en 30
  values: [10, "", 20, "", "", "", 30]
  highlight: [10, 20, 30]
- type: tree
  title: Tras rotar a la izquierda en 10
  values: [20, 10, 30]
  highlight: [10, 20, 30]
```

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
