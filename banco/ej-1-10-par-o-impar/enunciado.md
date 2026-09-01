### Ejercicio 1.10 - Par o Impar ⭐⭐☆☆☆


Este es un ejercicio fundamental de lógica condicional. El programa debe
solicitar un número entero al usuario y determinar si es par (divisible por 2) o
impar.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer un único número entero.
-   **Proceso:** La propiedad matemática clave es que un número entero es par si
-   **Condición:** Se utiliza una estructura `if-else`. Si `numero % 2 == 0`, el
-   **Salida:** Imprimir un mensaje claro que indique el resultado, como "El

-   **[*plus ultra*]:** Validar que el valor ingresado sea un número entero válido comprobando el retorno de scanf.
-   **[*plus ultra*]:** Encapsular la lógica en una función bool es_par(int n) que no realice operaciones de E/S.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO verificar_par_impar
ENTRADA: numero (entero)

INICIO
    LEER numero
    SI numero MOD 2 == 0 ENTONCES
        ESCRIBIR "El número ", numero, " es Par."
    SINO
        ESCRIBIR "El número ", numero, " es Impar."
    FIN SI
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
