### Ejercicio 20.30 - Inicializar juego ⭐☆☆☆☆

Implementar una función que inicialice un juego nuevo con la dificultad
especificada.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
juego_t inicializar_juego(enum dificultad dif);
```
<!-- c -->

La dificultad debe afectar el número inicial de vidas y otros parámetros.
