### Ejercicio 10.11 - Copia ⭐⭐☆☆☆


Copiar todos los elementos de un arreglo de origen a un arreglo de destino.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo de origen, un arreglo de destino y el tamaño.
-   **Precondición:** El arreglo de destino debe tener suficiente capacidad para
    albergar todos los elementos del arreglo de origen.
-   **Proceso:** Recorrer el arreglo de origen con un lazo `for` y, en cada
    iteración, asignar el elemento de origen al elemento correspondiente en el
    arreglo de destino: `destino[i] = origen[i]`.

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
PROCEDIMIENTO copiar_arreglo(origen, REF destino, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        destino[i] = origen[i]
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
