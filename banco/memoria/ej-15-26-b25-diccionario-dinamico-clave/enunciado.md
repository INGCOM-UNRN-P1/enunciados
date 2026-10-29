### Ejercicio 15.26 - b.25 - Diccionario Dinámico Clave-Valor ⭐⭐⭐☆☆

Implementar una estructura de diccionario asociativo en memoria dinámica basada en un arreglo de pares `(clave, valor)`:
- Crecer automáticamente mediante `realloc` duplicando su capacidad cuando el arreglo se llene
- Duplicar dinámicamente las cadenas de texto correspondientes a las claves
- Liberar cada cadena individual y el arreglo principal al destruir la estructura

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
