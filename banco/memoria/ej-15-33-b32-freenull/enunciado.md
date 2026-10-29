### Ejercicio 15.33 - b.32 - free(NULL) ⭐⭐☆☆☆

**Pregunta:** ¿Qué hace `free(NULL)`? ¿Es seguro? ¿Por qué esta semántica es
útil?

**Respuesta esperada:** `free(NULL)` no hace nada y es completamente seguro
según el estándar C. Esto permite código más simple sin necesidad de verificar
`if (ptr != NULL) free(ptr)`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
