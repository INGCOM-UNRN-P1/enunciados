### Ejercicio 1.25 - Cálculo de Interés Simple ⭐☆☆☆☆


Implementar una función que calcule el monto final y el interés simple ganado a
partir de un capital inicial, una tasa de interés anual y un período de tiempo
en años.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Solicitar tres valores: capital (`P`), tasa de interés anual
-   **Proceso:**
-   **Salida:** Mostrar tanto el interés ganado como el monto total acumulado.

-   **[*plus ultra*]:** Validar que capital, tasa y tiempo sean valores numéricos positivos.
-   **[*plus ultra*]:** Mostrar el desglose anual del interés acumulado en cada período.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO interes_simple
ENTRADA: capital, tasa_anual, anios (reales)
VARIABLES:
    interes_ganado, monto_final (reales)

INICIO
    LEER capital, tasa_anual, anios
    // Asegurarse que la tasa esté en formato decimal
    tasa_decimal = tasa_anual / 100
    interes_ganado = capital * tasa_decimal * anios
    monto_final = capital + interes_ganado

    ESCRIBIR "Interés ganado: ", interes_ganado
    ESCRIBIR "Monto final: ", monto_final
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
