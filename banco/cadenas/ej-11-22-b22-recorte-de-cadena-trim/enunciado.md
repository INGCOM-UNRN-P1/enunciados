#### Descripción
Implementar una función `trim` que modifique una cadena para eliminar todos los
espacios en blanco (o cualquier otro carácter de espaciado como tabuladores o
saltos de línea) que se encuentren al principio y al final de la misma.



:::{tip} Lógica y Consideraciones

-   **Proceso (dos etapas):**
    1.  **Eliminar espacios del final:** Recorrer la cadena desde el final hacia
        el principio. Mientras se encuentren espacios, reemplazarlos por el
        carácter nulo `\0`.
    2.  **Eliminar espacios del principio:** Encontrar el puntero al primer
        carácter que no sea un espacio. Luego, mover todo el bloque de la cadena
        (incluyendo el terminador nulo) a la posición inicial usando `memmove`.
-   **Funciones de Biblioteca:** `isspace()` de `ctype.h` es útil para detectar
    cualquier tipo de carácter de espaciado.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO trim(REF cadena)
VARIABLES:
    longitud, i, inicio (enteros)
INICIO
    longitud = LONGITUD(cadena)

    // Recortar final
    i = longitud - 1
    MIENTRAS i >= 0 Y es_espacio(cadena[i]) HACER
        i--
    FIN MIENTRAS
    cadena[i + 1] = FIN_DE_CADENA

    // Recortar inicio
    inicio = 0
    MIENTRAS cadena[inicio] != FIN_DE_CADENA Y es_espacio(cadena[inicio]) HACER
        inicio++
    FIN MIENTRAS

    // Mover la cadena si es necesario
    SI inicio > 0 ENTONCES
        mover_bloque_memoria(cadena, cadena + inicio, LONGITUD(cadena) - inicio + 1)
    FIN SI
FIN PROCEDIMIENTO

```

:::

### Contrato de la función

```c
char *trim(char *cadena);
```

La función modifica el arreglo recibido y devuelve el mismo puntero. Elimina del
principio y del final los caracteres que `isspace()` de `<ctype.h>` reconoce como
whitespace (incluye espacio, tabulación y saltos de línea). Conserva intactos los
caracteres internos. Si recibe `NULL`, devuelve `NULL` sin modificar memoria.
La cadena debe ser un arreglo modificable terminado en `\0`.

### Ejemplos

| Cadena antes | Cadena después |
|---|---|
| `"  Hola mundo  "` | `"Hola mundo"` |
| `"\t\ntexto\r\n"` | `"texto"` |
| `"  dos  palabras  "` | `"dos  palabras"` |
| `" \t\n"` | `""` |

### Criterios de aceptación

- Compila bajo C11 con `-Wall -Wextra -Werror`.
- Recorta whitespace de ambos extremos y conserva el contenido interno.
- Maneja cadena vacía, cadena compuesta solo por whitespace y puntero `NULL`.
- El programa principal lee una línea e imprime su versión recortada seguida de salto de línea.

:::{hint} Consideraciones Didácticas
- Primero ubicar los límites del segmento que se conserva; luego moverlo junto con el terminador usando `memmove`.
- Al pasar un `char` a `isspace()`, convertirlo a `unsigned char` para evitar comportamiento indefinido con bytes no ASCII.
:::
