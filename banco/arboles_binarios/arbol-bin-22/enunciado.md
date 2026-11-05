# Vistas superior, inferior, izquierda y derecha de un árbol binario

Implementa las cuatro vistas de un árbol binario. Las vistas izquierda y derecha devuelven el primer nodo visible en cada profundidad. Las vistas superior e inferior agrupan los nodos por distancia horizontal: la raíz tiene distancia 0, el hijo izquierdo reduce la distancia en 1 y el derecho la aumenta en 1. Se devuelve un nodo por columna, ordenando las columnas desde la más a la izquierda hasta la más a la derecha.

En la vista superior se elige el nodo de menor profundidad de cada columna; en la inferior, el de mayor profundidad. Si dos nodos empatan en profundidad, se conserva el primero encontrado al recorrer primero los subárboles izquierdos.

```c
bool vista_lateral_22(const nodo_arbol_bin_22_t *raiz, bool desde_izquierda,
                      int *valores, size_t capacidad, size_t *cantidad);
bool vista_vertical_22(const nodo_arbol_bin_22_t *raiz, bool inferior,
                       int *valores, size_t capacidad, size_t *cantidad);
```

Las funciones escriben como máximo `capacidad` valores, informan cuántos escribieron mediante `cantidad` y aceptan un árbol vacío. Devuelven `false` si los parámetros de salida son inválidos o si falla una reserva de memoria.

Ejemplo: raíz `10`, hijos `5` y `20`, y nietos `7` (hijo derecho de 5) y `15` (hijo izquierdo de 20): la vista superior es `5, 10, 20`; la inferior es `5, 15, 20`; las vistas laterales son `10, 5, 7` y `10, 20, 15`.
