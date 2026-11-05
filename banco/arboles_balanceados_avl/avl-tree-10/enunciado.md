# Recorrido Inorder de Árbol AVL y Verificación de Orden

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
size_t ejecutar_avl_tree_10(const avl_node_t *raiz, int *salida, size_t capacidad);
```

Escribe el recorrido inorder en orden ascendente. Devuelve cantidad escrita; si capacidad es insuficiente escribe solo los primeros elementos. Para NULL salida o capacidad cero no escribe.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
