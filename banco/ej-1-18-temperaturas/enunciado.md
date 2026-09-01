### Ejercicio 1.18 - Temperaturas ⭐⭐☆☆☆


Crear un programa que pueda convertir temperaturas entre las escalas Celsius,
Fahrenheit y Kelvin.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Solicitar al usuario el valor de la temperatura y la escala
-   **Proceso:** Aplicar la fórmula de conversión correspondiente:
    -   **Celsius a Fahrenheit**: $F = (C \times 9/5) + 32$
    -   **Fahrenheit a Celsius**: $C = (F - 32) \times 5/9$
    -   **Celsius a Kelvin**: $K = C + 273.15$
-   **Precisión:** Al trabajar con divisiones como 9/5, es importante usar

-   **[*plus ultra*]:** Validar que la temperatura en Celsius no sea inferior al cero absoluto (-273.15 °C).
-   **[*plus ultra*]:** Presentar una tabla comparativa de temperaturas en pasos de 10 grados dentro de un rango.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo) para celsius a fahrenheit.
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO convertir_c_a_f
ENTRADA: grados_celsius (real)
VARIABLES:
    grados_fahrenheit (real)

INICIO
    LEER grados_celsius
    grados_fahrenheit = (grados_celsius * 9.0 / 5.0) + 32
    ESCRIBIR grados_celsius, "°C son ", grados_fahrenheit, "°F"
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) para celsius a fahrenheit. -->
