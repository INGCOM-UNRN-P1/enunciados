# Búsqueda y Algoritmos sobre Arreglos

## Ejercicio 5.22 - Búsqueda y Algoritmos sobre Arreglos ⭐⭐⭐⭐⭐

Implementá funciones modulares para operaciones sobre arreglos de enteros:
- `int busqueda_lineal(const int arr[], int n, int objetivo)`: retorna el índice de la primera aparición o `-1`.
- `int encontrar_maximo(const int arr[], int n)`: retorna el valor máximo contenido en el arreglo.
- `int contar_ocurrencias(const int arr[], int n, int valor)`: cuenta cuántas veces aparece un elemento.

**Orientación:**
- Usá el calificador `const` en los arreglos para garantizar que las funciones de consulta no los modifiquen
- Validá que `n > 0` antes de buscar el máximo


:::{hint} Lógica y Consideraciones
    evitar fallos de segmentación.
    punteros en lugar de indexación directa.

-   **[*plus ultra*]:** Usar el calificador const en el arreglo de entrada para garantizar que la función sea de solo lectura.
-   **[*plus ultra*]:** Escribir pruebas unitarias con assert() para elementos presentes, ausentes y arreglos vacíos.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_23)=