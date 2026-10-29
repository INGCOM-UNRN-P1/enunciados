### Ejercicio 14.16 - calloc vs. malloc ⭐⭐☆☆☆

Escribir un programa que reserve dos arreglos de enteros del mismo tamaño, uno
con `malloc` y otro con `calloc`. Imprimir el contenido de ambos arreglos
inmediatamente después de la reserva para demostrar que `calloc` inicializa la
memoria a cero.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
