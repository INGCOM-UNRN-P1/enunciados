### Ejercicio 7.15 - Librería de Transformación y Filtrado de Arreglos ⭐⭐⭐⭐☆

Diseñá `array_utils.h` y `array_utils.c` para procesar secuencias numéricas mediante funciones modulares:
- `size_t arr_filtrar_pares(const int *src, size_t n, int *dest)`: copia solo los valores pares a `dest` y retorna la cantidad colocada.
- `size_t arr_filtrar_mayores_que(const int *src, size_t n, int umbral, int *dest)`: copia solo los valores mayores que `umbral`.
- `void arr_escalar(int *v, size_t n, int factor)`: multiplica cada elemento del arreglo por un factor escalar.
- `long long arr_sumatoria(const int *v, size_t n)`: calcula la suma total de los elementos.

:::{hint} Lógica y Consideraciones
- Utilizá el calificador `const` en los arreglos de solo lectura y documentá precondiciones claras para cada función.
- **[*plus ultra*]:** Escribir pruebas unitarias con `assert()` en `tests/` para verificar arreglos vacíos y con valores negativos.
:::
<!-- {hint} Lógica y Consideraciones -->

---

## 4. Librerías de Utilidades del Sistema y E/S
