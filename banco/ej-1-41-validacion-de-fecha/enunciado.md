### Ejercicio 1.41 - Validación de Fecha ⭐⭐☆☆☆


Crear una función que valide si una combinación de día, mes y año corresponde a
una fecha real en el calendario gregoriano.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Tres enteros: `dia`, `mes`, `anio`.
-   **Proceso:** Realizar una serie de verificaciones en orden lógico:
-   **Salida:** Devolver un valor booleano (`true` si es válida, `false` si no).

-   **[*plus ultra*]:** Validar años bisiestos para febrero y el número correcto de días según cada mes (1-31).
-   **[*plus ultra*]:** Calcular el día de la semana correspondiente a la fecha ingresada.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

FUNCION es_fecha_valida(dia, mes, anio)
VARIABLES:
    dias_en_mes (entero)

INICIO
    SI anio < 1 O mes < 1 O mes > 12 O dia < 1 O dia > 31 ENTONCES
        RETORNAR FALSO
    FIN SI

    // Lógica para dias_en_mes (similar al ejercicio 1.17)
    ...

    SI dia > dias_en_mes ENTONCES
        RETORNAR FALSO
    FIN SI

    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
