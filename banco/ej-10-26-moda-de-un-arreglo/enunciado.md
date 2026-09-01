### Ejercicio 10.26 - Moda de un arreglo ⭐⭐⭐☆☆


Encontrar la moda de un arreglo, que es el elemento que aparece con mayor
frecuencia.

:::{hint} Lógica y Consideraciones

-   **Proceso (con ordenamiento):**
    1.  Ordenar el arreglo. Esto agrupa los elementos iguales.
    2.  Recorrer el arreglo y contar la longitud de cada secuencia de elementos
        idénticos.
    3.  Llevar un registro del elemento con la frecuencia más alta encontrada
        hasta el momento.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION encontrar_moda(arreglo, tamano)
VARIABLES:
    moda, max_frecuencia, frec_actual, elemento_actual
INICIO
    ORDENAR(arreglo, tamano)
    moda = arreglo[0], max_frecuencia = 1, frec_actual = 1

    PARA i DESDE 1 HASTA tamano-1 HACER
        SI arreglo[i] == arreglo[i-1] ENTONCES
            frec_actual = frec_actual + 1
        SINO
            frec_actual = 1
        FIN SI
        SI frec_actual > max_frecuencia ENTONCES
            max_frecuencia = frec_actual
            moda = arreglo[i]
        FIN SI
    FIN PARA
    RETORNAR moda
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
