### Ejercicio 10.27 - Rellenar con secuencia aritmética ⭐⭐☆☆☆


Escribir una función que llene un arreglo con los términos de una secuencia
aritmética, dados un valor de inicio, un tamaño y un paso (la diferencia
constante entre términos).

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo, su tamaño, un valor de `inicio` y un `paso`.
-   **Proceso:** Recorrer el arreglo con un lazo `for`. Para cada índice `i`, el
    valor a asignar es `inicio + (i * paso)`.

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
PROCEDIMIENTO rellenar_secuencia(REF arreglo, tamano, inicio, paso)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        arreglo[i] = inicio + (i * paso)
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
