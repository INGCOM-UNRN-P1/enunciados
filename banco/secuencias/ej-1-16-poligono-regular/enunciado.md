### Ejercicio 1.16 - Polígono Regular ⭐⭐☆☆☆


Calcular el área de un polígono regular (lados y ángulos iguales) a partir del
número de lados, la longitud de un lado y la apotema.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Solicitar el número de lados (`n`), la longitud de un lado
-   **Proceso:**
-   **Salida:** Mostrar el área calculada.

-   **[*plus ultra*]:** Validar que el número de lados sea al menos 3 y que las longitudes sean positivas.
-   **[*plus ultra*]:** Calcular también el ángulo interior de cada vértice del polígono regular.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO area_poligono_regular
ENTRADA: num_lados (entero), long_lado, apotema (reales)
VARIABLES:
    perimetro, area (reales)

INICIO
    LEER num_lados, long_lado, apotema
    perimetro = num_lados * long_lado
    area = (perimetro * apotema) / 2
    ESCRIBIR "El área del polígono es: ", area
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
