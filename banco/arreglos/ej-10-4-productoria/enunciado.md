### Ejercicio 10.4 - Productoria ⭐⭐☆☆☆


Calcular el producto de todos los elementos de un arreglo.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Variables:** Se necesita un `acumulador` inicializado en 1 (no en 0, ya
    que cualquier cosa multiplicada por 0 es 0).
-   **Proceso:** Recorrer el arreglo con un lazo `for`. En cada iteración,
    multiplicar el `acumulador` por el elemento actual.
-   **Caso Especial:** Si el arreglo contiene un 0, el producto final será 0.

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
FUNCION productoria_arreglo(arreglo, tamano)
VARIABLES:
    producto (tipo de dato del arreglo)
INICIO
    producto = 1
    PARA i DESDE 0 HASTA tamano-1 HACER
        producto = producto * arreglo[i]
    FIN PARA
    RETORNAR producto
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Búsqueda y Estadísticas
