### Ejercicio 10.5 - Máximo y mínimo ⭐⭐☆☆☆


Encontrar los valores más grande (máximo) y más pequeño (mínimo) dentro de un
arreglo de números.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Proceso:**
    1.  Inicializar dos variables, `maximo` y `minimo`, con el valor del primer
        elemento del arreglo (`arreglo[0]`).
    2.  Recorrer el arreglo con un lazo `for` comenzando desde el segundo
        elemento (`i=1`).
    3.  En cada iteración, comparar el elemento actual `arreglo[i]` con
        `maximo`. Si `arreglo[i]` es mayor, actualizar `maximo`.
    4.  Hacer lo mismo para `minimo`, actualizándolo si `arreglo[i]` es menor.
-   **Salida:** Devolver los valores de `maximo` y `minimo` (por ejemplo, usando
    punteros).

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
PROCEDIMIENTO encontrar_max_min(arreglo, tamano, REF maximo, REF minimo)
INICIO
    SI tamano == 0 ENTONCES TERMINAR // Arreglo vacío

    maximo = arreglo[0]
    minimo = arreglo[0]

    PARA i DESDE 1 HASTA tamano-1 HACER
        SI arreglo[i] > maximo ENTONCES
            maximo = arreglo[i]
        FIN SI
        SI arreglo[i] < minimo ENTONCES
            minimo = arreglo[i]
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
