### Ejercicio 11.41 - b.41 - Primer carácter no repetido ⭐⭐☆☆☆

#### Descripción
Implementar una función que encuentre y devuelva el primer carácter en una
cadena que no se repite en el resto de la cadena.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso (dos pasadas):**
    1.  **Primera pasada:** Usar un arreglo de frecuencias para contar las
        apariciones de cada carácter (como en el ejercicio 1.2).
    2.  **Segunda pasada:** Recorrer la cadena de entrada original. El primer
        carácter para el cual su contador en el arreglo de frecuencias sea 1, es
        el resultado.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION primer_no_repetido(cadena)
VARIABLES:
    frecuencias (arreglo de 256 enteros)
INICIO
    // ... llenar arreglo de frecuencias ...

    PARA cada caracter c en cadena HACER
        SI frecuencias[CODIGO_ASCII(c)] == 1 ENTONCES
            RETORNAR c
        FIN SI
    FIN PARA

    RETORNAR CARACTER_NULO // No se encontró ninguno
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
