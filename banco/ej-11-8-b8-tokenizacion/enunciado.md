### Ejercicio 11.8 - b.8 - Tokenización ⭐⭐☆☆☆

#### Descripción
Dividir una cadena en una secuencia de "tokens" (subcadenas) basándose en un
carácter delimitador. La función `strtok` de C es un ejemplo clásico de esto.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Modificación _in-place_:** `strtok` funciona modificando la cadena
    original. Reemplaza el delimitador encontrado por un carácter nulo (`\0`),
    terminando así el token actual, y guarda un puntero interno para saber dónde
    continuar la próxima vez.
-   **Proceso (simplificado):**
    1.  En la primera llamada, se pasa la cadena. La función busca el primer
        delimitador.
    2.  Reemplaza el delimitador por `\0`.
    3.  Guarda la posición siguiente al `\0` en un puntero estático.
    4.  Devuelve el puntero al inicio del token.
    5.  En llamadas subsiguientes con `NULL`, la función usa el puntero estático
        para continuar desde donde se quedó.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION mi_strtok(cadena, delimitador)
VARIABLES ESTATICAS:
    ultimo_puntero
INICIO
    SI cadena != NULL ENTONCES
        ultimo_puntero = cadena
    FIN SI

    SI *ultimo_puntero == FIN_DE_CADENA RETORNAR NULL

    token_inicio = ultimo_puntero
    MIENTRAS *ultimo_puntero != delimitador Y *ultimo_puntero != FIN_DE_CADENA HACER
        ultimo_puntero++
    FIN MIENTRAS

    SI *ultimo_puntero != FIN_DE_CADENA ENTONCES
        *ultimo_puntero = '\0'
        ultimo_puntero++
    FIN SI

    RETORNAR token_inicio
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
