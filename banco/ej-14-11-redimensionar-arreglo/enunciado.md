### Ejercicio 14.11 - Redimensionar Arreglo ⭐⭐⭐☆☆

Implementar una función `int* redimensionar_arreglo(int* arr, size_t
nuevo_tamano)` que utilice `realloc` para cambiar el tamaño de un arreglo
dinámico. La función debe manejar tanto la expansión como la contracción del
arreglo y gestionar posibles fallos de `realloc`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
