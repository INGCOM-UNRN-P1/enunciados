### Ejercicio 1.15 - Trapecio ⭐⭐☆☆☆


Calcular el área de un trapecio dadas las longitudes de sus dos bases paralelas
y su altura.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Solicitar al usuario tres valores: la base mayor (`B`), la base
-   **Proceso:** Aplicar la fórmula del área del trapecio: $A = \frac{B+b}{2}
-   **Salida:** Mostrar el área calculada.

-   **[*plus ultra*]:** Validar que ambas bases y la altura sean estrictamente positivas y que la base mayor sea mayor que la menor.
-   **[*plus ultra*]:** Modularizar la operación en una función independiente.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO area_trapecio
ENTRADA: base_mayor, base_menor, altura (reales)
VARIABLES:
    area (real)

INICIO
    LEER base_mayor, base_menor, altura
    area = ((base_mayor + base_menor) / 2) * altura
    ESCRIBIR "El área del trapecio es: ", area
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
