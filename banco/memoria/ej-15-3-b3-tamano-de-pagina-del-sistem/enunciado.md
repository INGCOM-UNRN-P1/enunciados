### Ejercicio 15.3 - b.3 - Tamaño de Página del Sistema ⭐⭐☆☆☆

Escribir un programa que use `sysconf(_SC_PAGESIZE)` (en sistemas POSIX) para
obtener el tamaño de página del sistema. Luego, alojar varios bloques de memoria
de diferentes tamaños y analizar cuánta memoria física se está usando realmente.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{note} Memoria Virtual

Recordá que el sistema operativo asigna memoria en múltiplos del tamaño de
página, típicamente 4 KB. Una asignación de 100 bytes puede consumir 4 KB de
memoria física.

:::
<!-- {note} Memoria Virtual -->

## Patrones de Gestión de Memoria
