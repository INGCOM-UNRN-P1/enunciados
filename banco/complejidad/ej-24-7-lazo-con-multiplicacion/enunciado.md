### Ejercicio 24.7 - Lazo con Multiplicación ⭐⭐☆☆☆

Analizar la complejidad de:

:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
int contador = 0;
for (int i = 1; i < n; i *= 2)
{
    contador++;
}
```
<!-- c -->
