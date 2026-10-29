### Ejercicio 3.25 - Identidad de Bézout ⭐⭐☆☆☆

#### Descripción
Extender el Algoritmo de Euclides para encontrar no solo el MCD de dos enteros
`a` y `b`, sino también dos enteros `x` e `y` que satisfacen la identidad de
Bézout: $ax + by = mcd(a, b)$.

:::{hint} Lógica y Consideraciones
-   **Algoritmo Extendido de Euclides:** Es una modificación del algoritmo de
    Euclides que mantiene un registro de los coeficientes `x` e `y` en cada
    paso. Es inherentemente recursivo.
-   **Proceso:** La implementación recursiva es más intuitiva. La llamada
    recursiva devuelve el MCD y los coeficientes para los números más pequeños,
    y la llamada actual los ajusta para los números originales.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que los coeficientes satisfagan la igualdad a*x + b*y == mcd(a, b).
-   **[*plus ultra*]:** Modularizar la versión extendida del algoritmo de Euclides.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION mcd_extendido(a, b, REF x, REF y)
INICIO
    SI a == 0 ENTONCES
        x = 0
        y = 1
        RETORNAR b
    FIN SI

    x1, y1 (enteros)
    mcd = mcd_extendido(b MOD a, a, REF x1, REF y1)

    x = y1 - (b / a) * x1
    y = x1

    RETORNAR mcd
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
