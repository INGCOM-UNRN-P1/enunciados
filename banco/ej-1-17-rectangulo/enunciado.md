### Ejercicio 1.17 - Rectángulo ⭐⭐☆☆☆


Calcular el área y el perímetro de un rectángulo dadas las longitudes de su
largo y su ancho.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Solicitar el largo (`l`) y el ancho (`w`).
-   **Proceso:**
-   **Salida:** Mostrar ambos resultados.

-   **[*plus ultra*]:** Validar que ancho y alto sean positivos y determinar si la figura es un caso especial (cuadrado).
-   **[*plus ultra*]:** Modularizar las funciones para calcular área y perímetro por separado.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO rectangulo_calculos
ENTRADA: largo, ancho (reales)
VARIABLES:
    area, perimetro (reales)

INICIO
    LEER largo, ancho
    area = largo * ancho
    perimetro = 2 * (largo + ancho)
    ESCRIBIR "Área: ", area
    ESCRIBIR "Perímetro: ", perimetro
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

---

## Conversiones de Unidades
