### Ejercicio 11.35 - b.35 - Convertir a `snake_case` ⭐⭐☆☆☆

#### Descripción
Implementar una función que convierta una cadena en `camelCase` o `PascalCase` a
`snake_case`. Esto implica insertar un guion bajo antes de cada letra mayúscula
y convertir toda la cadena a minúsculas.


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
    2.  Si se encuentra una letra mayúscula (y no es el primer carácter), añadir
        un `_` a la cadena de resultado antes de añadir la letra.
    3.  Convertir cada carácter a minúscula antes de añadirlo a la cadena de
        resultado.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION a_snake_case(cadena)
VARIABLES:
    resultado (cadena)
INICIO
    PARA cada caracter c en cadena HACER
        SI es_mayuscula(c) Y resultado NO está vacío ENTONCES
            AÑADIR '_' a resultado
        FIN SI
        AÑADIR convertir_a_minuscula(c) a resultado
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
