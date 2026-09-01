### Ejercicio 7.1 - Librería de Operaciones Geométricas 2D ⭐⭐☆☆☆

Diseñá e implementá la librería `geometria2d.h` y `geometria2d.c` para cálculos en el plano 2D:
- `double geo_distancia(double x1, double y1, double x2, double y2)`: distancia euclídea.
- `double geo_area_rectangulo(double ancho, double alto)`: área de un rectángulo.
- `double geo_perimetro_rectangulo(double ancho, double alto)`: perímetro de un rectángulo.
- `double geo_area_circulo(double radio)`: área de un círculo.
- `double geo_perimetro_circulo(double radio)`: perímetro de un círculo.

:::{hint} Lógica y Consideraciones
- **[*plus ultra*]:** Validar que dimensiones como radio, ancho y alto no sean negativas (retornar `-1.0` en caso de error).
- Usá la constante `M_PI` definida en `<math.h>`.
:::
<!-- {hint} Lógica y Consideraciones -->

---
