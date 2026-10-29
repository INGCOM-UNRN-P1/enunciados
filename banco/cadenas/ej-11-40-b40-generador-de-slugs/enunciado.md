### Ejercicio 11.40 - b.40 - Generador de "Slugs" ⭐⭐☆☆☆

#### Descripción
Un "slug" es una versión de una cadena amigable para URLs. Escribir una función
que convierta un título en un slug: debe estar en minúsculas, los espacios deben
ser reemplazados por guiones y se deben eliminar todos los caracteres no
alfanuméricos.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer la cadena de entrada.
    2.  Para cada carácter, convertirlo a minúscula.
    3.  Si es una letra o un número, añadirlo a la cadena de resultado.
    4.  Si es un espacio, y el último carácter añadido al resultado no fue un
        guion, añadir un guion.
    5.  Ignorar todos los demás caracteres.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION generar_slug(titulo)
VARIABLES:
    slug (cadena)
INICIO
    PARA cada caracter c en titulo HACER
        c_min = convertir_a_minuscula(c)
        SI es_alfanumerico(c_min) ENTONCES
            AÑADIR c_min a slug
        SINO SI es_espacio(c_min) Y ultimo_char(slug) != '-' ENTONCES
            AÑADIR '-' a slug
        FIN SI
    FIN PARA
    RETORNAR slug
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
