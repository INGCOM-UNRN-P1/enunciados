# Inserción Balanceada en Árbol AVL con Actualización de Alturas

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
avl_node_t *ejecutar_avl_tree_06(avl_node_t *raiz, int clave);
```

Inserta una clave en el AVL, ignora claves duplicadas y devuelve la raíz actualizada. Si falla una reserva, conserva el árbol sin el nuevo nodo.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
