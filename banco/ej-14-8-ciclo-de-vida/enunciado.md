### Ejercicio 14.8 - Ciclo de vida ⭐⭐☆☆☆

Implementar funciones para reservar y liberar una matriz `m x n` usando un
arreglo de punteros.

- **Reserva**: Se realiza en dos etapas. Primero se reserva el arreglo de
  punteros a las filas, y luego, en un lazo, se reserva la memoria para cada
  fila individual.
- **Liberación**: Debe seguir el orden inverso. Primero, en un lazo, se libera
  la memoria de cada fila, y finalmente se libera el arreglo que contenía los
  punteros a las filas.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
