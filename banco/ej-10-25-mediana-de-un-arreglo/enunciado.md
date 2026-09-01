### Ejercicio 10.25 - Mediana de un arreglo ⭐⭐⭐☆☆


Calcular la mediana de un arreglo. La mediana es el valor que se encuentra en la
posición central de un arreglo ordenado. Si el arreglo tiene un número par de
elementos, la mediana es el promedio de los dos elementos centrales.

:::{hint} Lógica y Consideraciones

-   **Proceso:**
    1.  Ordenar el arreglo.
    2.  Determinar el índice del medio: `medio = tamano / 2`.
    3.  Si el tamaño es impar, la mediana es `arreglo[medio]`.
    4.  Si el tamaño es par, la mediana es `(arreglo[medio - 1] +
        arreglo[medio]) / 2.0`.

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
FUNCION calcular_mediana(arreglo, tamano)
INICIO
    ORDENAR(arreglo, tamano)
    SI tamano MOD 2 != 0 ENTONCES
        RETORNAR arreglo[tamano / 2]
    SINO
        RETORNAR (arreglo[tamano/2 - 1] + arreglo[tamano/2]) / 2.0
    FIN SI
    FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
