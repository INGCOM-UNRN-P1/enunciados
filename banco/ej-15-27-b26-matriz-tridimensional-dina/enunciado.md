### Ejercicio 15.27 - b.26 - Matriz Tridimensional Dinámica ⭐⭐⭐⭐☆

Implementar la asignación, manipulación y liberación de un volumen tridimensional de enteros (`int ***`) de dimensiones $X 	imes Y 	imes Z$:
- Asignar el arreglo de punteros a matrices 2D, luego los punteros a filas, y finalmente cada fila
- Implementar la función de liberación que destruya simétricamente cada dimensión en orden inverso
- Asegurar que ante cualquier fallo parcial de asignación durante la creación, se liberen todos los bloques previamente reservados sin dejar fugas
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
