### Ejercicio 20.9 - Conversión de color predefinido a RGB ⭐⭐☆☆☆

Implementar una función que convierta un color predefinido a sus componentes
RGB.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Diseñar la función para devolver un código de estado de
    error e informar el resultado mediante parámetros de salida.
-   **[*plus ultra*]:** Documentar la función con etiquetas Doxygen
    especificando precondiciones y postcondiciones.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
rgb_t color_a_rgb(enum color_predefinido color);
```
<!-- c -->

**Valores sugeridos:**
- `COLOR_ROJO`: (255, 0, 0)
- `COLOR_VERDE`: (0, 255, 0)
- `COLOR_AZUL`: (0, 0, 255)
- `COLOR_AMARILLO`: (255, 255, 0)
