# Conversión de Árbol Binario de Búsqueda Desbalanceado a AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_16(avl_node_t *raiz);
```

Convierte en AVL un BST desbalanceado de claves distintas, reordenando enlaces de los mismos nodos y actualizando alturas. No reserva ni libera nodos.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
