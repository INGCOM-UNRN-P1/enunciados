### Ejercicio 10.21 - Histograma ⭐⭐☆☆☆


Dado un arreglo de enteros no negativos, el programa debe imprimir un histograma
simple usando asteriscos, donde cada número `n` se representa con una línea de
`n` asteriscos.

:::{hint} Lógica y Consideraciones

-   **Proceso:** Usar lazos anidados.
    1.  El lazo exterior recorre cada elemento del arreglo.
    2.  El lazo interior se ejecuta tantas veces como el valor del elemento
        actual, imprimiendo un asterisco en cada una de sus iteraciones.
    3.  Después del lazo interior, se imprime un salto de línea.

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
PROCEDIMIENTO imprimir_histograma(arreglo, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        ESCRIBIR i, ": " SIN SALTO DE LÍNEA
        PARA j DESDE 1 HASTA arreglo[i] HACER
            ESCRIBIR "*" SIN SALTO DE LÍNEA
        FIN PARA
        ESCRIBIR SALTO DE LÍNEA
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
