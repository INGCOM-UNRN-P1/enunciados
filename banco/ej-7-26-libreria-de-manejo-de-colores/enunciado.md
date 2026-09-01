### Ejercicio 7.26 - Librería de Manejo de Colores RGB ⭐⭐⭐☆☆

Creá `color_utils.h` y `color_utils.c` para cálculos de color mediante operaciones aritméticas y fórmulas estándar:
- `double color_luminancia(unsigned char r, unsigned char g, unsigned char b)`: calcula la luminosidad relativa ($0.2126R + 0.7152G + 0.0722B$).
- `unsigned char color_escala_grises(unsigned char r, unsigned char g, unsigned char b)`: calcula el promedio de intensidad.
- `unsigned char color_mezclar_componente(unsigned char c1, unsigned char c2, double factor)`: realiza una interpolación lineal entre dos colores.

:::{hint} Lógica y Consideraciones
- Validá que `factor` se encuentre en el rango $[0.0, 1.0]$.
- **[*plus ultra*]:** Implementar pruebas unitarias con `assert()` para colores básicos (blanco, negro, primarios).
:::
<!-- {hint} Lógica y Consideraciones -->

---
