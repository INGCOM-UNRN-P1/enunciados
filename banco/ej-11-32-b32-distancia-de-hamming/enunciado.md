### Ejercicio 11.32 - b.32 - Distancia de Hamming ⭐⭐☆☆☆

#### Descripción
Implementar una función que calcule la distancia de Hamming entre dos cadenas de
igual longitud. Esta distancia es el número de posiciones en las que los
caracteres correspondientes son diferentes.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Precondición:** Las cadenas deben tener la misma longitud.
-   **Proceso:**
    1.  Inicializar un `contador` en 0.
    2.  Recorrer ambas cadenas simultáneamente con un lazo `for`.
    3.  En cada posición `i`, si `cadena1[i] != cadena2[i]`, incrementar el
        `contador`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION distancia_hamming(cadena1, cadena2)
VARIABLES:
    distancia (entero)
INICIO
    SI LONGITUD(cadena1) != LONGITUD(cadena2) RETORNAR -1 // Error

    distancia = 0
    PARA i DESDE 0 HASTA LONGITUD(cadena1)-1 HACER
        SI cadena1[i] != cadena2[i] ENTONCES
            distancia++
        FIN SI
    FIN PARA
    RETORNAR distancia
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
