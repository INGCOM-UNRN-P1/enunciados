### Ejercicio 11.21 - b.21 - Eliminar espacios extra ⭐⭐☆☆☆

#### Descripción
Crear una función que elimine los espacios en blanco redundantes de una cadena:
espacios al principio, al final y múltiples espacios entre palabras, dejando
solo un espacio entre cada palabra.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso (in-place con dos punteros):**
    1.  Usar un `puntero_lectura` y un `puntero_escritura`.
    2.  Recorrer la cadena con `puntero_lectura`.
    3.  Copiar un carácter de lectura a escritura solo si no es un espacio
        redundante. La condición para copiar podría ser: `si el carácter actual
        no es un espacio, O si el carácter anterior copiado no fue un espacio`.
    4.  Manejar los espacios al principio como un caso especial.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO eliminar_espacios_extra(REF cadena)
VARIABLES:
    p_lectura, p_escritura (enteros)
INICIO
    p_lectura = 0, p_escritura = 0
    MIENTRAS cadena[p_lectura] != FIN_DE_CADENA HACER
        // Copiar caracteres que no son espacios
        MIENTRAS cadena[p_lectura] != ' ' Y cadena[p_lectura] != FIN_DE_CADENA HACER
            cadena[p_escritura++] = cadena[p_lectura++]
        FIN MIENTRAS
        // Omitir múltiples espacios
        MIENTRAS cadena[p_lectura] == ' ' HACER
            p_lectura++
        FIN MIENTRAS
        // Añadir un solo espacio si no estamos al final
        SI cadena[p_lectura] != FIN_DE_CADENA ENTONCES
            cadena[p_escritura++] = ' '
        FIN SI
    FIN MIENTRAS
    cadena[p_escritura] = FIN_DE_CADENA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
