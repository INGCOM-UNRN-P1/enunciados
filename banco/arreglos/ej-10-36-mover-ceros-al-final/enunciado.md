### Ejercicio 10.36 - Mover ceros al final ⭐⭐☆☆☆


Escribir una función que mueva todos los ceros de un arreglo al final del mismo,
manteniendo el orden relativo de los elementos no nulos.

:::{hint} Lógica y Consideraciones

-   **Proceso (un solo recorrido):**
    1.  Usar un índice `posicion_no_cero` inicializado en 0.
    2.  Recorrer el arreglo. Si el elemento actual no es cero, se coloca en la
        posición `posicion_no_cero` y se incrementa `posicion_no_cero`.
    3.  Después del primer lazo, todos los elementos no nulos están al principio
        en su orden original. Llenar el resto del arreglo con ceros.

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
PROCEDIMIENTO mover_ceros_final(REF arreglo, tamano)
VARIABLES:
    posicion_no_cero (entero)
INICIO
    posicion_no_cero = 0
    PARA i DESDE 0 HASTA tamano-1 HACER
        SI arreglo[i] != 0 ENTONCES
            arreglo[posicion_no_cero] = arreglo[i]
            posicion_no_cero = posicion_no_cero + 1
        FIN SI
    FIN PARA

    PARA i DESDE posicion_no_cero HASTA tamano-1 HACER
        arreglo[i] = 0
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
