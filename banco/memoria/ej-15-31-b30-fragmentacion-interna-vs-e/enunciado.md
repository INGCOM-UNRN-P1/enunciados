### Ejercicio 15.31 - b.30 - Fragmentación Interna vs Externa ⭐⭐☆☆☆

**Pregunta:** Explicar la diferencia entre fragmentación interna y externa. Dar
ejemplos de cada una.

**Fragmentación interna:** Espacio desperdiciado dentro de un bloque asignado
(ej. `malloc(17)` puede asignar 32 bytes, desperdiciando 15).

**Fragmentación externa:** Espacio libre total suficiente pero dividido en
bloques no contiguos (ej. después de liberar bloques alternados).
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
