### Ejercicio 3.6 - MCD y MCM ⭐⭐☆☆☆

#### Descripción
Implementar funciones para calcular el Máximo Común Divisor (MCD) y el Mínimo
Común Múltiplo (MCM) de dos números enteros.

:::{hint} Lógica y Consideraciones
-   **MCD (Algoritmo de Euclides):** Es el método más eficiente. Mientras `b` no
    sea cero, se calcula el resto `r = a % b`, luego se actualiza `a = b` y `b =
    r`. El MCD es el último valor no nulo de `a`.
-   **MCM:** Se puede calcular fácilmente una vez que se tiene el MCD, usando la
    fórmula: $MCM(a, b) = \frac{|a \cdot b|}{MCD(a, b)}$.
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Validar que al menos uno de los números sea distinto de cero.
-   **[*plus ultra*]:** Implementar el algoritmo de Euclides de forma iterativa y verificar que mcd(a,b)*mcm(a,b) == a*b.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION mcd(a, b)
VARIABLES:
    temporal (entero)
INICIO
    MIENTRAS b != 0 HACER
        temporal = b
        b = a MOD b
        a = temporal
    FIN MIENTRAS
    RETORNAR a
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

---

## Propiedades de los Números
