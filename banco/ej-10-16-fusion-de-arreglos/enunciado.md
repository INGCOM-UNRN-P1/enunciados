### Ejercicio 10.16 - Fusión de arreglos ⭐⭐⭐☆☆


Escribir una función que fusione dos arreglos en un tercer arreglo que contenga
todos los elementos de los dos primeros. Si los arreglos originales están
ordenados, el resultado también debería estarlo (ver Merge Sort).

:::{hint} Lógica y Consideraciones

-   **Entrada:** Dos arreglos (`a1`, `a2`) con sus respectivos tamaños (`n1`,
    `n2`).
-   **Salida:** Un nuevo arreglo de tamaño `n1 + n2`.
-   **Proceso (desordenado):** Simplemente copiar todos los elementos de `a1` al
    nuevo arreglo, y luego todos los elementos de `a2` a continuación.
-   **Proceso (ordenado):** Usar el algoritmo de mezcla de Merge Sort. Con tres
    punteros (`i` para `a1`, `j` para `a2`, `k` para el resultado), comparar
    `a1[i]` y `a2[j]`, copiar el menor al resultado y avanzar el puntero
    correspondiente.

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
FUNCION fusionar_ordenado(a1, n1, a2, n2)
VARIABLES:
    resultado (arreglo de tamaño n1+n2)
    i, j, k (enteros)
INICIO
    i=0, j=0, k=0
    MIENTRAS i < n1 Y j < n2 HACER
        SI a1[i] <= a2[j] ENTONCES
            resultado[k] = a1[i]
            i = i + 1
        SINO
            resultado[k] = a2[j]
            j = j + 1
        FIN SI
        k = k + 1
    FIN MIENTRAS

    // Copiar elementos restantes
    MIENTRAS i < n1 HACER
        resultado[k] = a1[i]
        i = i + 1, k = k + 1
    FIN MIENTRAS
    MIENTRAS j < n2 HACER
        resultado[k] = a2[j]
        j = j + 1, k = k + 1
    FIN MIENTRAS

    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
