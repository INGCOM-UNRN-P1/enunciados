#### Descripción
Desarrollar una función que cuente el número de palabras en una cadena. Se puede
considerar que las palabras están separadas por uno o más espacios.



:::{tip} Lógica y Consideraciones

-   **Máquina de Estados:** Una forma robusta de hacerlo es con una máquina de
    estados simple con dos estados: `DENTRO_DE_PALABRA` y `FUERA_DE_PALABRA`.
-   **Proceso:**
    1.  Inicializar `contador_palabras = 0` y `estado = FUERA_DE_PALABRA`.
    2.  Recorrer la cadena. Si se está `FUERA_DE_PALABRA` y se encuentra un
        carácter que no es un espacio, se ha encontrado el inicio de una nueva
        palabra. Incrementar `contador_palabras` y cambiar a `estado =
        DENTRO_DE_PALABRA`.
    3.  Si se está `DENTRO_DE_PALABRA` y se encuentra un espacio, cambiar a
        `estado = FUERA_DE_PALABRA`.

:::

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION contar_palabras(cadena)
VARIABLES:
    contador, estado (enteros)
INICIO
    contador = 0
    estado = FUERA_DE_PALABRA

    PARA cada caracter c en cadena HACER
        SI c == ' ' O c == '\n' O c == '\t' ENTONCES
            estado = FUERA_DE_PALABRA
        SINO SI estado == FUERA_DE_PALABRA ENTONCES
            estado = DENTRO_DE_PALABRA
            contador = contador + 1
        FIN SI
    FIN PARA
    RETORNAR contador
FIN FUNCION

```

:::

### Contrato de la función

```c
size_t contar_palabras(const char *cadena);
```

La función devuelve la cantidad de secuencias no vacías separadas por uno o más
caracteres de espacio en blanco (espacio, tabulación o salto de línea). Una cadena vacía o formada solo por espacios contiene
cero palabras. Si `cadena` es `NULL`, devuelve cero.

### Ejemplos

| Cadena | Resultado |
|---|---:|
| `"Hola mundo desde C"` | 4 |
| `"  Hola   mundo  "` | 2 |
| `""` | 0 |
| `"   "` | 0 |

### Criterios de aceptación

- Compila bajo C11 con `-Wall -Wextra -Werror`.
- Cuenta cada transición desde un espacio (o el inicio de la cadena) a un carácter no espacio.
- Maneja cadena vacía, espacios iniciales/finales/repetidos y puntero `NULL`.
- El programa principal lee una línea de entrada e imprime el conteo seguido de salto de línea.

:::{hint} Consideraciones Didácticas
- Una máquina de estados con `DENTRO_DE_PALABRA` y `FUERA_DE_PALABRA` permite contar cada inicio una sola vez.
- Los espacios en blanco delimitan palabras; se pueden reconocer con `isspace()` de `<ctype.h>`.
:::
