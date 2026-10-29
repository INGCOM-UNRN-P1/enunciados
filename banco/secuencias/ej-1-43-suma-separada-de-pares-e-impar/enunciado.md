### Ejercicio 1.43 - Suma Separada de Pares e Impares ⭐⭐☆☆☆


Dado un rango de números `[n, m]`, el programa debe calcular la suma de todos
los números pares y la suma de todos los números impares de forma independiente
y mostrar ambos resultados.

:::{hint} Lógica y Consideraciones
-   **Variables:** Se necesitan dos acumuladores: `suma_pares` y `suma_impares`,
-   **Entrada:** Leer los enteros `n` y `m`.
-   **Proceso:**
-   **Salida:** Mostrar los valores finales de ambas sumas.

-   **[*plus ultra*]:** Permitir definir los límites del rango de manera dinámica mediante entrada por consola.
-   **[*plus ultra*]:** Calcular también la cantidad de pares e impares encontrados en el intervalo.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO suma_pares_impares_rango
ENTRADA: n, m (enteros)
VARIABLES:
    suma_pares, suma_impares (enteros)

INICIO
    suma_pares = 0
    suma_impares = 0
    PARA i DESDE n HASTA m HACER
        SI i MOD 2 == 0 ENTONCES
            suma_pares = suma_pares + i
        SINO
            suma_impares = suma_impares + i
        FIN SI
    FIN PARA
    ESCRIBIR "Suma de pares: ", suma_pares
    ESCRIBIR "Suma de impares: ", suma_impares
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
