### Ejercicio 22.6 - Obtener Elemento en Posición ⭐⭐☆☆☆

Implementar una función que retorne el elemento en una posición específica
(índice basado en 0).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool lista_obtener(const lista_t *lista, size_t posicion, int *dato);
```
<!-- c -->

Retornar `false` si la posición es inválida.
