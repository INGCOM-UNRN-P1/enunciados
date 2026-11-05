# Conteo de Nodos en Rango de Claves en Árbol AVL

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
size_t ejecutar_avl_tree_13(const avl_node_t *raiz, int minimo, int maximo);
```

Cuenta nodos cuyas claves están dentro del intervalo inclusivo [minimo, maximo]. Si minimo > maximo devuelve 0.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
