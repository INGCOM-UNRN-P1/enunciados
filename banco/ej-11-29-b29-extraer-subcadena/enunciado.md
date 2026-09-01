### Ejercicio 11.29 - b.29 - Extraer subcadena ⭐⭐⭐☆☆

#### Descripción
Crear una función que extraiga una porción de una cadena. La función debe
recibir la cadena original, una posición de inicio y una longitud, y devolver
una nueva cadena con la subcadena extraída.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Memoria:** La función debe reservar memoria para la nueva cadena.
-   **Proceso:**
    1.  Calcular la longitud de la subcadena y reservar memoria (longitud + 1
        para el `\0`).
    2.  Copiar los caracteres desde la posición de inicio de la cadena original
        a la nueva cadena.
    3.  Añadir el terminador nulo `\0` al final de la nueva cadena.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION extraer_subcadena(cadena, inicio, longitud)
VARIABLES:
    subcadena (cadena)
INICIO
    // ... reservar memoria para subcadena ...
    COPIAR_MEMORIA(subcadena, cadena + inicio, longitud)
    subcadena[longitud] = FIN_DE_CADENA
    RETORNAR subcadena
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
