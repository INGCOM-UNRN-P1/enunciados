### Ejercicio 14.5 - Concatenación dinámica ⭐⭐⭐☆☆

Implementar `char* concatenar(const char *s1, const char *s2)`. **Algoritmo:**

1.  Calcular la longitud total necesaria: `strlen(s1) + strlen(s2) + 1` (para el
    `\0`).
2.  Reservar memoria con `malloc` para este tamaño.
3.  Copiar la primera cadena (`s1`) al nuevo bloque.
4.  Concatenar la segunda cadena (`s2`) al final.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
