### Ejercicio 11.19 - b.19 - Capitalización (Title Case) ⭐⭐⭐⭐☆

#### Descripción
Implementar una función que convierta una cadena a "Title Case", donde la
primera letra de cada palabra está en mayúscula y el resto de las letras de la
palabra están en minúscula.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Convertir toda la cadena a minúsculas para empezar desde un estado base
        consistente.
    2.  Capitalizar el primer carácter de la cadena (si es una letra).
    3.  Recorrer la cadena. Si se encuentra un espacio (u otro delimitador de
        palabra), capitalizar el siguiente carácter si es una letra.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO a_title_case(REF cadena)
INICIO
    convertir_a_minuscula_toda_la_cadena(cadena)
    capitalizar(cadena[0])

    PARA i DESDE 1 HASTA LONGITUD(cadena)-1 HACER
        SI cadena[i-1] == ' ' ENTONCES
            capitalizar(cadena[i])
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
