### Ejercicio 15.32 - b.31 - Costos Ocultos de malloc ⭐⭐☆☆☆

**Pregunta:** ¿Por qué `malloc` tiene overhead? ¿Qué información necesita
guardar el allocator?

**Respuesta esperada:** El allocator guarda metadatos como tamaño del bloque,
estado (libre/ocupado), punteros a bloques vecinos para coalescing, información
de alineación. Típicamente 8-16 bytes por bloque.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
