### Ejercicio 11.2 - b.2 - Contabilizador de caracteres ⭐⭐☆☆☆

#### Descripción
Implementar una función que calcule la frecuencia de aparición de cada carácter
dentro de una cadena y muestre el resultado para aquellos caracteres que
aparecen al menos una vez.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Estructura de Datos:** Un arreglo de contadores es ideal para esto. Dado
    que los caracteres ASCII se pueden representar como enteros (de 0 a 255), se
    puede usar un arreglo de tamaño 256, donde el índice del arreglo corresponde
    al código ASCII del carácter.
-   **Proceso:**
    1.  Crear un arreglo `frecuencias` de 256 enteros, inicializado
        completamente en 0.
    2.  Recorrer la cadena de entrada. Para cada carácter `c`, incrementar el
        contador en la posición correspondiente a su valor ASCII:
        `frecuencias[(int)c]++`.
    3.  Después de recorrer toda la cadena, iterar sobre el arreglo
        `frecuencias` desde 0 a 255. Si `frecuencias[i]` es mayor que 0,
        significa que el carácter con código ASCII `i` apareció, y se imprime
        junto con su frecuencia.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO contabilizar_caracteres(cadena)
VARIABLES:
    frecuencias (arreglo de 256 enteros)
INICIO
    INICIALIZAR frecuencias con ceros

    PARA cada caracter c en cadena HACER
        frecuencias[CODIGO_ASCII(c)] = frecuencias[CODIGO_ASCII(c)] + 1
    FIN PARA

    PARA i DESDE 0 HASTA 255 HACER
        SI frecuencias[i] > 0 ENTONCES
            ESCRIBIR "Carácter '", CARACTER(i), "': ", frecuencias[i], " veces"
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
