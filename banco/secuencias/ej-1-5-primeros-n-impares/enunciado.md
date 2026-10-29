### Ejercicio 1.5 - Primeros N Impares ⭐⭐☆☆☆


Este ejercicio consiste en generar una secuencia de números impares, comenzando
desde 1, hasta alcanzar un total de $N$ términos, donde $N$ es un número
proporcionado por el usuario.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Se debe leer un número entero $N$ que representa la cantidad de
-   **Proceso:** Se puede abordar de dos maneras:
-   **Salida:** Se imprime la secuencia de los primeros $N$ números impares.

-   **[*plus ultra*]:** Validar que N sea un entero mayor a cero; de lo contrario, volver a solicitarlo.
-   **[*plus ultra*]:** Mostrar la suma acumulada de los primeros N impares y verificar que sea igual a N².

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO primeros_n_impares
ENTRADA: n_terminos (entero)

INICIO
    PARA k DESDE 1 HASTA n_terminos HACER
        impar = 2 * k - 1
        ESCRIBIR impar
    FIN PARA
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

---

## Operaciones con Rangos Numéricos
