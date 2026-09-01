### Ejercicio 11.30 - b.30 - Justificar texto (Simple) ⭐☆☆☆☆

#### Descripción
Implementar una función que justifique una línea de texto a un ancho específico,
insertando espacios adicionales entre las palabras de la manera más uniforme
posible.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Contar el número de palabras y el número total de caracteres (sin
        espacios).
    2.  Calcular el número total de espacios a insertar: `ancho_total -
        num_caracteres`.
    3.  Calcular el número de espacios a poner en cada hueco entre palabras.
    4.  Construir la nueva cadena añadiendo las palabras y el número calculado
        de espacios entre ellas.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION justificar_texto(linea, ancho)
VARIABLES:
    num_palabras, num_espacios, espacios_por_hueco, espacios_extra
INICIO
    // ... contar palabras y caracteres ...
    // ... calcular espacios a insertar ...

    // ... construir la nueva cadena ...
    RETORNAR cadena_justificada
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
