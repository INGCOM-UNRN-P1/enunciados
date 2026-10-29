### Ejercicio 7.13 - Librería de Operaciones sobre Matrices 2D ⭐⭐⭐⭐☆

Diseñá `matriz2d.h` y `matriz2d.c` para matrices con dimensiones fijas o pasadas linealmente:
- `void mat_sumar(size_t filas, size_t cols, const double A[filas][cols], const double B[filas][cols], double C[filas][cols])`
- `void mat_multiplicar_escalar(size_t filas, size_t cols, double M[filas][cols], double escalar)`
- `void mat_transponer(size_t filas, size_t cols, const double A[filas][cols], double T[cols][filas])`
- `double mat_traza(size_t n, const double A[n][n])`

:::{hint} Lógica y Consideraciones
- Usá VLA (Variable Length Arrays) en los parámetros para permitir sintaxis limpia de matrices 2D en C99+.
:::
<!-- {hint} Lógica y Consideraciones -->

---
