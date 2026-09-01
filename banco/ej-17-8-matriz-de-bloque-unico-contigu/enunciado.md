### Ejercicio 17.8 - Matriz de Bloque Único (Contigua) ⭐⭐⭐☆☆

Implementar funciones para crear y liberar una matriz contigua en memoria,
reservando un único bloque para todos los datos y configurando el array de
punteros a filas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int **crear_matriz_contigua(size_t filas, size_t columnas);
void liberar_matriz_contigua(int ***ptr_matriz);
```
<!-- c -->
