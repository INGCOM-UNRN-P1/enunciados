### Ejercicio 1.12 - Área de Triángulo (Base y Altura) ⭐⭐☆☆☆


Calcular el área de un triángulo a partir de las longitudes de su base y su
altura. La fórmula es $A = \frac{1}{2} b \cdot h$.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Solicitar al usuario dos valores: la base (`b`) y la altura
-   **Proceso:** Aplicar la fórmula matemática directamente. En C, esto se
-   **Salida:** Mostrar el área calculada.

-   **[*plus ultra*]:** Validar que tanto la base como la altura sean valores estrictamente mayores a cero.
-   **[*plus ultra*]:** Modularizar el cálculo en una función pura double calcular_area_triangulo(double base, double altura).

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO area_triangulo_base_altura
ENTRADA: base, altura (reales)
VARIABLES:
    area (real)

INICIO
    LEER base
    LEER altura
    area = (base * altura) / 2
    ESCRIBIR "El área del triángulo es: ", area
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
