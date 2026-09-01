### Ejercicio 26.1 - Asignación de Memoria en una Función ⭐⭐☆☆☆

Escribir una función `void alocar_cadena(char **puntero_a_cadena, const char
*valor_inicial)` que reciba un puntero doble. La función debe reservar memoria
para una nueva cadena, copiar el `valor_inicial` en ella, y hacer que el puntero
original en `main` apunte a esta nueva memoria.

**Lógica y Consideraciones:**
- **Parámetro**: El puntero doble `char **puntero_a_cadena` permite modificar el
  `char *` original.
- **Proceso**:
  1. Dentro de la función, usar `malloc` para reservar la memoria necesaria.
  2. Usar `strcpy` para copiar el `valor_inicial`.
  3. Asignar la nueva dirección de memoria al puntero desreferenciado:
     `*puntero_a_cadena = nueva_cadena;`.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->
