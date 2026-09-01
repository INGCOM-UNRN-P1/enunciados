### Ejercicio 20.27 - Constructores de figuras ⭐⭐⭐☆☆

Implementar funciones para crear cada tipo de figura de forma segura.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
figura_t crear_circulo(double radio);
figura_t crear_rectangulo(double base, double altura);
figura_t crear_triangulo(double a, double b, double c);
```
<!-- c -->

## Conversión entre Enums y Strings
