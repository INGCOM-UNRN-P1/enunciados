### Ejercicio 15.30 - b.29 - Stack vs Heap ⭐⭐☆☆☆

**Pregunta:** ¿Por qué no podemos simplemente usar el stack para todas las
asignaciones de memoria? ¿Qué limitaciones tiene?

**Respuesta esperada:** El stack tiene tamaño limitado (típicamente 1-8 MB),
crece automáticamente en cada llamada a función, y su memoria tiene scope
limitado al bloque actual. El heap permite asignaciones grandes, persistencia
más allá del scope, y tamaño determinado en runtime.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
