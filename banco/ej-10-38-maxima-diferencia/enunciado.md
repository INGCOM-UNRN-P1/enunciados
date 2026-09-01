### Ejercicio 10.38 - Máxima diferencia ⭐⭐☆☆☆


Encontrar la máxima diferencia `arr[j] - arr[i]` en un arreglo, con la condición
de que el índice `j` sea mayor que el índice `i`.

:::{hint} Lógica y Consideraciones

-   **Proceso (un solo recorrido):**
    1.  Mantener dos variables: `max_diferencia` y `min_elemento`.
    2.  Inicializar `max_diferencia` a un valor muy bajo y `min_elemento` con el
        primer elemento.
    3.  Recorrer el arreglo desde el segundo elemento. En cada paso:
        a. Actualizar `max_diferencia` si `elemento_actual - min_elemento` es
        mayor.
        b. Actualizar `min_elemento` si `elemento_actual` es menor.

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
FUNCION max_diferencia(arreglo, tamano)
VARIABLES:
    max_diferencia, min_elemento
INICIO
    min_elemento = arreglo[0]
    max_diferencia = arreglo[1] - arreglo[0]

    PARA i DESDE 1 HASTA tamano-1 HACER
        SI (arreglo[i] - min_elemento) > max_diferencia ENTONCES
            max_diferencia = arreglo[i] - min_elemento
        FIN SI
        SI arreglo[i] < min_elemento ENTONCES
            min_elemento = arreglo[i]
        FIN SI
    FIN PARA
    RETORNAR max_diferencia
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
