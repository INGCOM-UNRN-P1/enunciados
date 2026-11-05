# Búsqueda de Claves en Árbol AVL con Complejidad Logarítmica

Representación común: cada nodo `avl_node_t` contiene `int key`, `int height` (hoja=1, vacío=0) y punteros `left`/`right`. Las claves de árboles de búsqueda son distintas. La función requerida es:

```c
const avl_node_t *ejecutar_avl_tree_07(const avl_node_t *raiz, int clave);
```

Busca una clave y devuelve un puntero al nodo encontrado, o NULL si no existe.

`prueba.c` contiene comprobaciones ejecutables de los casos principales.
