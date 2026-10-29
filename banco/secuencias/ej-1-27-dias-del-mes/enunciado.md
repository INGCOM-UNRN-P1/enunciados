### Ejercicio 1.27 - Días del Mes ⭐⭐☆☆☆


Crear un programa que, dado un mes (como número del 1 al 12) y un año, determine
y muestre cuántos días tiene ese mes. Este ejercicio requiere manejar el caso
especial de febrero en los años bisiestos.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer el mes y el año como números enteros.
-   **Proceso:**
-   **Año Bisiesto:** Un año es bisiesto si es divisible por 4, excepto los años
-   **Salida:** Imprimir el número de días.

-   **[*plus ultra*]:** Verificar si el año es bisiesto para determinar correctamente los días del mes de febrero.
-   **[*plus ultra*]:** Validar que el número de mes esté estrictamente comprendido entre 1 y 12.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO dias_del_mes
ENTRADA: mes, anio (enteros)
VARIABLES:
    es_bisiesto (booleano)

INICIO
    LEER mes, anio

    es_bisiesto = (anio MOD 4 == 0 Y anio MOD 100 != 0) O (anio MOD 400 == 0)

    SEGUN mes HACER
        CASO 1, 3, 5, 7, 8, 10, 12:
            ESCRIBIR "31 días"
        CASO 4, 6, 9, 11:
            ESCRIBIR "30 días"
        CASO 2:
            SI es_bisiesto ENTONCES
                ESCRIBIR "29 días"
            SINO
                ESCRIBIR "28 días"
            FIN SI
        CASO CONTRARIO:
            ESCRIBIR "Mes no válido."
    FIN SEGUN
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
