### Ejercicio 1.20 - Tabla de Multiplicar ⭐⭐☆☆☆


El programa debe solicitar un número entero al usuario y mostrar su tabla de
multiplicar, desde el 1 hasta el 10.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer un número entero, que será la base de la tabla.
-   **Proceso:** Utilizar un lazo `for` que itere desde 1 hasta 10. En cada
-   **Salida:** Dentro del lazo, imprimir la operación y su resultado en un

-   **[*plus ultra*]:** Formatear la tabla con columnas alineadas usando especificadores de ancho en printf.
-   **[*plus ultra*]:** Permitir al usuario elegir hasta qué múltiplo generar la tabla (por defecto 10).

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO tabla_de_multiplicar
ENTRADA: numero_base (entero)

INICIO
    LEER numero_base
    PARA i DESDE 1 HASTA 10 HACER
        resultado = numero_base * i
        ESCRIBIR numero_base, " x ", i, " = ", resultado
    FIN PARA
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
