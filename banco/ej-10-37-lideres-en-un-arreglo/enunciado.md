### Ejercicio 10.37 - Líderes en un arreglo ⭐⭐⭐☆☆


Encontrar todos los "líderes" en un arreglo. Un elemento es un líder si es mayor
que todos los elementos que se encuentran a su derecha. El elemento más a la
derecha siempre es un líder.

:::{hint} Lógica y Consideraciones

-   **Proceso (recorrido inverso):** La forma más eficiente es recorrer el
    arreglo de derecha a izquierda.
    1.  El último elemento siempre es un líder. Guardarlo como `maximo_derecha`.
    2.  Iterar desde el penúltimo elemento hacia el principio.
    3.  Si el elemento actual es mayor que `maximo_derecha`, es un nuevo líder.
        Imprimirlo y actualizar `maximo_derecha`.

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
PROCEDIMIENTO encontrar_lideres(arreglo, tamano)
VARIABLES:
    maximo_derecha (entero)
INICIO
    maximo_derecha = arreglo[tamano-1]
    ESCRIBIR maximo_derecha

    PARA i DESDE tamano-2 HASTA 0 CON PASO -1 HACER
        SI arreglo[i] > maximo_derecha ENTONCES
            maximo_derecha = arreglo[i]
            ESCRIBIR maximo_derecha
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
