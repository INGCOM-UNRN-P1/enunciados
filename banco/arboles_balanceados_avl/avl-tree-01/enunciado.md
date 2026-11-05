# Cálculo de Altura y Factor de Balance en Nodos de Árbol

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
int ejecutar_avl_tree_01(const avl_node_t *raiz, int *altura, int *factor_balance);
```

Calcula altura y factor de balance de la raíz (factor = altura izquierda menos derecha). Devuelve 1 si las salidas se escribieron, 0 si falta un puntero. Árbol vacío: altura y factor 0.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
