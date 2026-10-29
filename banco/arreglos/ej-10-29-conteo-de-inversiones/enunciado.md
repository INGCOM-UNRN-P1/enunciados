### Ejercicio 10.29 - Conteo de inversiones ⭐⭐☆☆☆


Contar el número de "inversiones" en un arreglo. Una inversión es un par de
índices `(i, j)` tales que `i < j` y `arr[i] > arr[j]`. Un arreglo perfectamente
ordenado tiene 0 inversiones.

:::{hint} Lógica y Consideraciones

-   **Proceso (Fuerza Bruta):** Usar dos lazos anidados. El lazo exterior itera
    con `i` desde 0 hasta `n-2`. El lazo interior itera con `j` desde `i+1`
    hasta `n-1`. Si `arreglo[i] > arreglo[j]`, se incrementa un contador.
-   **Complejidad:** La solución de fuerza bruta es O(n^2). Existen algoritmos
    más eficientes basados en Merge Sort.

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
FUNCION contar_inversiones(arreglo, tamano)
VARIABLES:
    contador (entero)
INICIO
    contador = 0
    PARA i DESDE 0 HASTA tamano-2 HACER
        PARA j DESDE i+1 HASTA tamano-1 HACER
            SI arreglo[i] > arreglo[j] ENTONCES
                contador = contador + 1
            FIN SI
        FIN PARA
    FIN PARA
    RETORNAR contador
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Más Manipulación de Arreglos
