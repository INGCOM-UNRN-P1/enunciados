### Ejercicio 11.1 - b.1 - Contar vocales ⭐⭐☆☆☆

#### Descripción
Escribir una función que cuente el número total de vocales (a, e, i, o, u) en
una cadena de texto. La función no debe distinguir entre mayúsculas y
minúsculas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Entrada:** Una cadena de caracteres.
-   **Proceso:**
    1.  Inicializar un `contador` en 0.
    2.  Recorrer la cadena carácter por carácter con un lazo hasta encontrar el
        terminador nulo `\0`.
    3.  Para cada carácter, es conveniente convertirlo a minúscula para
        simplificar la comparación (usando `tolower()` de `ctype.h`).
    4.  Verificar si el carácter es una de las cinco vocales (`'a'`, `'e'`,
        `'i'`, `'o'`, `'u'`).
    5.  Si es una vocal, incrementar el `contador`.
-   **Salida:** Devolver el valor final del `contador`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION contar_vocales(cadena)
VARIABLES:
    contador (entero)
    caracter_actual (caracter)
INICIO
    contador = 0
    PARA cada caracter_actual en cadena HACER
        c = convertir_a_minuscula(caracter_actual)
        SI c == 'a' O c == 'e' O c == 'i' O c == 'o' O c == 'u' ENTONCES
            contador = contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
