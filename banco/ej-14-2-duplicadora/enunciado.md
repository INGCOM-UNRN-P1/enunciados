### Ejercicio 14.2 - Duplicadora ⭐⭐☆☆☆

Implementar `int* duplicar_arreglo(const int *origen, size_t tamano)`.
**Algoritmo:**

1.  Reservar memoria para un nuevo arreglo del mismo tamaño que el original.
2.  Verificar que la reserva de memoria fue exitosa.
3.  Recorrer el arreglo de origen y copiar cada elemento al nuevo arreglo.
4.  Retornar el puntero al nuevo arreglo.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
