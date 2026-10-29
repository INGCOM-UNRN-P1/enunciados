### Ejercicio 10.22 - Barajar arreglo (Fisher-Yates) ⭐⭐⭐☆☆


Implementar el algoritmo de Fisher-Yates para barajar (desordenar
aleatoriamente) los elementos de un arreglo _in-place_.

:::{hint} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer el arreglo desde el último elemento hasta el segundo (`i` desde
        `n-1` hasta 1).
    2.  En cada iteración, generar un índice aleatorio `j` entre 0 e `i`
        (inclusive).
    3.  Intercambiar el elemento en la posición `i` con el elemento en la
        posición `j`.
-   **Aleatoriedad:** Requiere `srand()` y `rand()`.

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO barajar_fisher_yates(REF arreglo, tamano)
VARIABLES:
    j, temporal (enteros)
INICIO
    PARA i DESDE tamano-1 HASTA 1 CON PASO -1 HACER
        j = generar_aleatorio(0, i)
        INTERCAMBIAR(arreglo[i], arreglo[j])
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
