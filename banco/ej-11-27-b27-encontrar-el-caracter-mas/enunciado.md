### Ejercicio 11.27 - b.27 - Encontrar el carácter más frecuente ⭐⭐☆☆☆

#### Descripción
Desarrollar una función que encuentre y devuelva el carácter que aparece con más
frecuencia en una cadena. Si hay empates, puede devolver cualquiera de los más
frecuentes.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Usar un arreglo de frecuencias de 256 enteros, como en el ejercicio 1.2.
    2.  Llenar el arreglo de frecuencias recorriendo la cadena.
    3.  Recorrer el arreglo de frecuencias para encontrar el índice que tiene el
        valor más alto. Ese índice es el código ASCII del carácter más
        frecuente.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION caracter_mas_frecuente(cadena)
VARIABLES:
    frecuencias (arreglo de 256 enteros)
    max_frecuencia, char_mas_frecuente (enteros)
INICIO
    // ... llenar arreglo de frecuencias ...

    max_frecuencia = -1
    PARA i DESDE 0 HASTA 255 HACER
        SI frecuencias[i] > max_frecuencia ENTONCES
            max_frecuencia = frecuencias[i]
            char_mas_frecuente = i
        FIN SI
    FIN PARA
    RETORNAR CARACTER(char_mas_frecuente)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
