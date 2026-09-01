### Ejercicio 10.20 - Algoritmo de Kadane (Suma máxima de subarreglo) ⭐⭐⭐☆☆


Implementar el algoritmo de Kadane para encontrar la suma del subarreglo
contiguo que tenga la suma más grande. El arreglo puede contener números
negativos.

:::{hint} Lógica y Consideraciones

-   **Proceso:** Se recorre el arreglo una sola vez, manteniendo dos variables:
    -   `max_actual`: La suma máxima del subarreglo que termina en la posición
        actual.
    -   `max_global`: La suma máxima encontrada en todo el arreglo hasta el
        momento.
-   En cada paso `i`:
    1.  `max_actual = MAXIMO(arreglo[i], max_actual + arreglo[i])`
    2.  `max_global = MAXIMO(max_global, max_actual)`

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
FUNCION kadane(arreglo, tamano)
VARIABLES:
    max_actual, max_global
INICIO
    max_actual = arreglo[0]
    max_global = arreglo[0]

    PARA i DESDE 1 HASTA tamano-1 HACER
        max_actual = MAXIMO(arreglo[i], max_actual + arreglo[i])
        SI max_actual > max_global ENTONCES
            max_global = max_actual
        FIN SI
    FIN PARA
    RETORNAR max_global
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
