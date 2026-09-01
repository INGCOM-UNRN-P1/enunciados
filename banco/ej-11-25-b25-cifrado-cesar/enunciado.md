### Ejercicio 11.25 - b.25 - Cifrado César ⭐⭐☆☆☆

#### Descripción
Implementar el Cifrado César, un tipo de cifrado por sustitución en el que cada
letra en el texto original es reemplazada por una letra un número fijo de
posiciones más adelante en el alfabeto, de forma circular.


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
    2.  Para cada carácter, si es una letra, aplicar el desplazamiento.
    3.  El desplazamiento es circular. Si al desplazar 'y' 3 posiciones se pasa
        de 'z', se debe volver al principio del alfabeto. Esto se logra con el
        operador módulo (`%`).
    4.  Ejemplo para una letra minúscula `c`: `'a' + (c - 'a' + desplazamiento)
        % 26`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION cifrado_cesar(cadena, desplazamiento)
VARIABLES:
    resultado (cadena)
INICIO
    PARA cada caracter c en cadena HACER
        SI es_letra_minuscula(c) ENTONCES
            nuevo_car = 'a' + (c - 'a' + desplazamiento) MOD 26
            AÑADIR nuevo_car a resultado
        SINO SI es_letra_mayuscula(c) ENTONCES
            nuevo_car = 'A' + (c - 'A' + desplazamiento) MOD 26
            AÑADIR nuevo_car a resultado
        SINO
            AÑADIR c a resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
