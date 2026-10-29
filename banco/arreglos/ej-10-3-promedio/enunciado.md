### Ejercicio 10.3 - Promedio ⭐⭐☆☆☆


Calcular el valor promedio (media aritmética) de los elementos de un arreglo.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Reutilización:** Se puede reutilizar la función `sumar_arreglo` del
    ejercicio anterior.
-   **Proceso:**
    1.  Calcular la suma total de los elementos.
    2.  Dividir la suma por el número de elementos (tamaño del arreglo).
-   **Tipos de Datos:** Si la suma y el tamaño son enteros, la división puede
    ser entera. Para un promedio preciso, es importante convertir al menos uno
    de los operandos a un tipo de punto flotante antes de la división.

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
FUNCION promedio_arreglo(arreglo, tamano)
VARIABLES:
    suma (tipo de dato del arreglo)
INICIO
    SI tamano == 0 RETORNAR 0

    suma = sumar_arreglo(arreglo, tamano)
    RETORNAR suma / (real)tamano
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
