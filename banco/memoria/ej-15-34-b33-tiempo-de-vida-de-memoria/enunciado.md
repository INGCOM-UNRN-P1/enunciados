### Ejercicio 15.34 - b.33 - Tiempo de Vida de Memoria ⭐⭐☆☆☆

**Pregunta:** Clasificar las siguientes asignaciones según su tiempo de vida:
- Variable local
- Variable `static` local
- Variable global
- Memoria de `malloc`

**Respuestas:**
- Variable local: hasta el final del bloque
- Variable `static` local: toda la ejecución del programa (inicializada una vez)
- Variable global: toda la ejecución del programa
- Memoria de `malloc`: hasta el `free` correspondiente

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
