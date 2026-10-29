### Ejercicio 1.14 - Círculo ⭐⭐☆☆☆


Calcular el área y la circunferencia (perímetro) de un círculo a partir de su
radio.

:::{hint} Lógica y Consideraciones
-   **Constantes:** Se necesita el valor de $\pi$. Se puede definir como una
-   **Entrada:** Solicitar al usuario el valor del radio (`r`).
-   **Proceso:**
-   **Salida:** Mostrar ambos resultados de forma clara.

-   **[*plus ultra*]:** Validar que el radio sea positivo y definir PI como una constante con precisión de double.
-   **[*plus ultra*]:** Calcular también el área del sector circular para un ángulo ingresado por el usuario.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO circulo_calculos
ENTRADA: radio (real)
CONSTANTES:
    PI = 3.14159

VARIABLES:
    area, circunferencia (reales)

INICIO
    LEER radio
    area = PI * radio * radio
    circunferencia = 2 * PI * radio
    ESCRIBIR "Área: ", area
    ESCRIBIR "Circunferencia: ", circunferencia
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
