### Ejercicio 10.6 - Casi máximo ⭐⭐☆☆☆


Encontrar el segundo elemento más grande en un arreglo. Este ejercicio requiere
un seguimiento más cuidadoso que simplemente encontrar el máximo.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Variables:** Se necesitan dos variables: `maximo` y `segundo_maximo`.
    Inicializarlas con el menor valor posible o con los dos primeros elementos
    del arreglo de forma ordenada.
-   **Proceso:**
    1.  Recorrer el arreglo.
    2.  Si el elemento actual `x` es mayor que `maximo`:
        a. `segundo_maximo` toma el valor de `maximo`.
        b. `maximo` toma el valor de `x`.
    3.  Si no, si `x` es mayor que `segundo_maximo` y diferente de `maximo`, se
        actualiza `segundo_maximo` a `x`.

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
FUNCION encontrar_segundo_maximo(arreglo, tamano)
VARIABLES:
    maximo, segundo_maximo
INICIO
    // Inicializar con los dos primeros elementos o valores muy bajos
    maximo = MINIMO_VALOR_POSIBLE
    segundo_maximo = MINIMO_VALOR_POSIBLE

    PARA cada elemento x EN arreglo HACER
        SI x > maximo ENTONCES
            segundo_maximo = maximo
            maximo = x
        SINO SI x > segundo_maximo Y x < maximo ENTONCES
            segundo_maximo = x
        FIN SI
    FIN PARA
    RETORNAR segundo_maximo
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
