### Ejercicio 14.3 - Fusión de Arreglos Ordenados ⭐⭐⭐☆☆

Implementar `int* fusionar(const int *a1, size_t n1, const int *a2, size_t n2)`.
**Algoritmo:**

1.  Reservar memoria para un nuevo arreglo de tamaño `n1 + n2`.
2.  Usar tres contadores: `i` para `a1`, `j` para `a2`, y `k` para el nuevo
    arreglo.
3.  Mientras `i < n1` y `j < n2`, comparar `a1[i]` y `a2[j]` y copiar el menor
    al nuevo arreglo, incrementando el contador correspondiente y `k`.
4.  Al salir del lazo, copiar los elementos restantes del arreglo que no se haya
    completado.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
