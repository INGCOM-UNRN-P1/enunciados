### Ejercicio 1.13 - Área de Triángulo (Fórmula de Herón) ⭐⭐☆☆☆


Calcular el área de un triángulo conociendo únicamente la longitud de sus tres
lados (`a`, `b`, `c`). Para esto se utiliza la fórmula de Herón.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Solicitar al usuario las longitudes de los tres lados.
-   **Proceso:**
-   **Validación:** Antes de calcular, es importante verificar si los lados

-   **[*plus ultra*]:** Validar la desigualdad triangular (la suma de dos lados cualesquiera debe superar al tercero) antes del cálculo.
-   **[*plus ultra*]:** Retornar un valor de error (-1.0) si los lados no pueden formar un triángulo geométrico válido.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO area_triangulo_heron
ENTRADA: lado1, lado2, lado3 (reales)
VARIABLES:
    s, area (reales)

INICIO
    LEER lado1, lado2, lado3
    // Opcional: Validar desigualdad triangular
    s = (lado1 + lado2 + lado3) / 2
    area = RAIZ_CUADRADA(s * (s - lado1) * (s - lado2) * (s - lado3))
    ESCRIBIR "El área del triángulo es: ", area
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
