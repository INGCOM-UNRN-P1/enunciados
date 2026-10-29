### Ejercicio 11.38 - b.38 - Eliminar comentarios ⭐⭐☆☆☆

#### Descripción
Crear una función que reciba una cadena (que puede representar una o más líneas
de código) y elimine los comentarios de estilo C (`//...` hasta el final de la
línea y `/*...*/` incluyendo el contenido).


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Máquina de Estados:** Este problema se resuelve mejor con una máquina de
    estados para rastrear si el procesador está en modo `NORMAL`,
    `DENTRO_DE_COMENTARIO_LINEA`, o `DENTRO_DE_COMENTARIO_BLOQUE`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION eliminar_comentarios(codigo)
VARIABLES:
    resultado (cadena)
    estado (entero)
INICIO
    estado = NORMAL
    PARA i DESDE 0 HASTA LONGITUD(codigo)-1 HACER
        SI estado == NORMAL Y codigo[i] == '/' Y codigo[i+1] == '/' ENTONCES
            estado = DENTRO_DE_COMENTARIO_LINEA
        SINO SI estado == NORMAL Y codigo[i] == '/' Y codigo[i+1] == '*' ENTONCES
            estado = DENTRO_DE_COMENTARIO_BLOQUE
        SINO SI estado == DENTRO_DE_COMENTARIO_LINEA Y codigo[i] == '\n' ENTONCES
            estado = NORMAL
            AÑADIR '\n' a resultado
        SINO SI estado == DENTRO_DE_COMENTARIO_BLOQUE Y codigo[i] == '*' Y codigo[i+1] == '/' ENTONCES
            estado = NORMAL
            i++ // Saltar el '/'
        SINO SI estado == NORMAL ENTONCES
            AÑADIR codigo[i] a resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
