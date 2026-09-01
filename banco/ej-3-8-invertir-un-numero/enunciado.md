### Ejercicio 3.8 - Invertir un número ⭐⭐☆☆☆

#### Descripción
Tomar un número entero y devolver otro número con sus dígitos en orden inverso.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un entero `n`.
-   **Proceso:** Similar a la suma de dígitos, pero en lugar de sumar, se
    construye un nuevo número.
    1.  Inicializar `invertido = 0`.
    2.  En un lazo, mientras `n > 0`:
        a. `invertido = (invertido * 10) + (n % 10)`.
        b. `n = n / 10`.
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Manejar adecuadamente números terminados en ceros.
-   **[*plus ultra*]:** Validar si el número invertido excede el rango máximo de un entero int.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION invertir_numero(n)
VARIABLES:
    invertido (entero)
INICIO
    invertido = 0
    MIENTRAS n > 0 HACER
        invertido = (invertido * 10) + (n MOD 10)
        n = n / 10
    FIN MIENTRAS
    RETORNAR invertido
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
