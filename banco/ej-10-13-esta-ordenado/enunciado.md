### Ejercicio 10.13 - ¿Está ordenado? ⭐⭐☆☆☆


Verificar si un arreglo está ordenado de forma ascendente.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Proceso:** Recorrer el arreglo desde el primer elemento hasta el
    penúltimo. En cada posición `i`, comparar el elemento `arreglo[i]` con el
    siguiente, `arreglo[i+1]`.
-   **Condición de Salida:** Si en algún momento se encuentra que `arreglo[i] >
    arreglo[i+1]`, el arreglo no está ordenado y la función puede devolver
    `falso` inmediatamente.
-   **Salida:** Si el lazo termina sin encontrar ninguna inversión de orden,
    significa que el arreglo está ordenado y la función devuelve `verdadero`.

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
FUNCION esta_ordenado(arreglo, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-2 HACER
        SI arreglo[i] > arreglo[i+1] ENTONCES
            RETORNAR FALSO
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
