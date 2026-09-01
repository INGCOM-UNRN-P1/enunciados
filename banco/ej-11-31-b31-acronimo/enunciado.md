### Ejercicio 11.31 - b.31 - Acrónimo ⭐⭐☆☆☆

#### Descripción
Escribir una función que genere un acrónimo a partir de una frase, tomando la
primera letra de cada palabra.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer la cadena.
    2.  Usar una bandera o estado para saber si el carácter actual es el inicio
        de una nueva palabra.
    3.  Si es el inicio de una palabra y es una letra, añadirla (en mayúscula) a
        la cadena de resultado.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION generar_acronimo(frase)
VARIABLES:
    acronimo (cadena)
    es_inicio_de_palabra (booleano)
INICIO
    acronimo = ""
    es_inicio_de_palabra = VERDADERO

    PARA cada caracter c en frase HACER
        SI es_letra(c) Y es_inicio_de_palabra ENTONCES
            AÑADIR convertir_a_mayuscula(c) a acronimo
            es_inicio_de_palabra = FALSO
        SINO SI c == ' ' ENTONCES
            es_inicio_de_palabra = VERDADERO
        FIN SI
    FIN PARA
    RETORNAR acronimo
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Cadenas y Algoritmos
