### Ejercicio 1.22 - Calculadora Básica ⭐⭐☆☆☆


Crear un programa que funcione como una calculadora simple. Debe solicitar al
usuario dos números y un carácter que represente la operación aritmética a
realizar (+, -, *, /).

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer dos números (pueden ser `double` para mayor flexibilidad)
-   **Proceso:** Utilizar una estructura `switch` (o `if-else if`) para
-   **Caso Especial:** Manejar la división por cero. Si el operador es `/` y el
-   **Salida:** Mostrar el resultado de la operación o el mensaje de error.

-   **[*plus ultra*]:** Manejar adecuadamente el error de división por cero mostrando un mensaje descriptivo.
-   **[*plus ultra*]:** Permitir la ejecución continua de operaciones dentro de un lazo hasta que el usuario elija salir.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO calculadora
ENTRADA: num1, num2 (reales), operador (caracter)
VARIABLES:
    resultado (real)

INICIO
    LEER num1, operador, num2
    SEGUN operador HACER
        CASO '+': resultado = num1 + num2
        CASO '-': resultado = num1 - num2
        CASO '*': resultado = num1 * num2
        CASO '/': 
            SI num2 != 0 ENTONCES
                resultado = num1 / num2
            SINO
                ESCRIBIR "Error: División por cero."
                TERMINAR
            FIN SI
        CASO CONTRARIO:
            ESCRIBIR "Error: Operador no válido."
            TERMINAR
    FIN SEGUN
    ESCRIBIR "Resultado: ", resultado
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
