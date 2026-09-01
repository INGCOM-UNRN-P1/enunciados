### Ejercicio 11.4 - b.4 - ¿Es alfabética? ⭐⭐☆☆☆

#### Descripción
Crear una función que determine si una cadena contiene únicamente caracteres
alfabéticos (de la 'a' a la 'z', mayúsculas o minúsculas).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:** Recorrer la cadena. Para cada carácter, verificar si está
    dentro del rango de 'a' a 'z' o de 'A' a 'Z'.
-   **Funciones de Biblioteca:** La biblioteca `ctype.h` proporciona la función
    `isalpha()`, que simplifica enormemente esta comprobación.
-   **Condición de Salida:** Si se encuentra un carácter que no es alfabético,
    la función puede retornar `falso` inmediatamente. Si el lazo termina,
    significa que todos los caracteres son alfabéticos.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_alfabetica(cadena)
INICIO
    PARA cada caracter c en cadena HACER
        SI NO es_letra(c) ENTONCES
            RETORNAR FALSO
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Propiedades de Cadenas
