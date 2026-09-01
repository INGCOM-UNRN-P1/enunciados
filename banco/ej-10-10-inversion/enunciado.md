### Ejercicio 10.10 - Inversión ⭐⭐☆☆☆


Invertir el orden de los elementos de un arreglo _in-place_, es decir, sin usar
un segundo arreglo para almacenar el resultado temporalmente.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Proceso:** Utilizar dos índices (o punteros): `inicio` comenzando en 0 y
    `fin` comenzando en `tamaño-1`.
-   Usar un lazo `while` que se ejecute mientras `inicio < fin`.
-   En cada iteración:
    1.  Intercambiar los elementos en las posiciones `inicio` y `fin`.
    2.  Incrementar `inicio` y decrementar `fin` para moverse hacia el centro
        del arreglo.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO invertir_arreglo(REF arreglo, tamano)
VARIABLES:
    inicio, fin, temporal (enteros)
INICIO
    inicio = 0
    fin = tamano - 1
    MIENTRAS inicio < fin HACER
        // Intercambiar elementos
        temporal = arreglo[inicio]
        arreglo[inicio] = arreglo[fin]
        arreglo[fin] = temporal

        inicio = inicio + 1
        fin = fin - 1
    FIN MIENTRAS
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
