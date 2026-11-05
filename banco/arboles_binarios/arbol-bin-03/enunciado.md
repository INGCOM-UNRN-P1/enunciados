# Recorrido por niveles (BFS)

Incluye el tipo compartido `../arbol_binario_common.h`. Use `nodo_arbol_t` con `valor`, `izq` y `der`. Implemente `recorrido_niveles(raiz, salida, capacidad)`: escribe valores por niveles, de izquierda a derecha, en el arreglo suministrado y devuelve la cantidad escrita. Si la raíz es `NULL`, devuelve 0. Para un árbol no vacío se requiere `salida != NULL` y capacidad suficiente para todos sus nodos; si no lo es, devuelve 0 y deja el arreglo sin modificar. La cola auxiliar debe reservarse dinámicamente y liberarse antes de retornar.

Ejemplo raíz 1 con hijos 2 y 3: salida `[1, 2, 3]`, retorno 3.
