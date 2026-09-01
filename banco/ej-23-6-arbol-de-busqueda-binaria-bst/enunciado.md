### Ejercicio 23.6 - Árbol de Búsqueda Binaria (BST) ⭐⭐☆☆☆

Un árbol binario de búsqueda es una estructura de datos basada en nodos donde
cada nodo tiene un valor, un puntero a un sub-árbol izquierdo (con valores
menores) y un puntero a un sub-árbol derecho (con valores mayores).

- **`nodo_arbol_t* insertar_en_bst(nodo_arbol_t *raiz, int dato)`**: Función
  recursiva que encuentra la posición correcta e inserta un nuevo nodo.
- **`void imprimir_en_orden(nodo_arbol_t *raiz)`**: Recorrido recursivo
  (izquierdo, raíz, derecho) que imprime los elementos de forma ordenada.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
