### Ejercicio 11.10 - b.10 - Desduplicador ⭐⭐☆☆☆

#### Descripción
Escribir una función que elimine los caracteres duplicados de una cadena,
conservando únicamente la primera aparición de cada carácter. La modificación
puede ser _in-place_.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Estructura de Datos:** Se necesita una forma de registrar los caracteres
    que ya se han visto. Un arreglo booleano de 256 posiciones (`vistos`) es
    ideal para esto, donde cada índice corresponde a un código ASCII.
-   **Proceso (in-place):**
    1.  Utilizar dos punteros o índices: `puntero_lectura` y
        `puntero_escritura`, ambos comenzando al inicio de la cadena.
    2.  Recorrer la cadena con `puntero_lectura`.
    3.  Para cada carácter `c` leído:
        a. Verificar en el arreglo `vistos` si ya ha aparecido
        (`vistos[(int)c]`).
        b. Si no ha sido visto, copiarlo a la posición de `puntero_escritura`,
        marcarlo como visto (`vistos[(int)c] = VERDADERO`), y avanzar
        `puntero_escritura`.
    4.  Al final, colocar el carácter nulo `\0` en la posición de
        `puntero_escritura`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO desduplicar(REF cadena)
VARIABLES:
    vistos (arreglo booleano de 256)
    p_lectura, p_escritura (enteros)
INICIO
    INICIALIZAR vistos con FALSO
    p_lectura = 0, p_escritura = 0

    MIENTRAS cadena[p_lectura] != FIN_DE_CADENA HACER
        caracter_actual = cadena[p_lectura]
        SI vistos[CODIGO_ASCII(caracter_actual)] == FALSO ENTONCES
            vistos[CODIGO_ASCII(caracter_actual)] = VERDADERO
            cadena[p_escritura] = caracter_actual
            p_escritura++
        FIN SI
        p_lectura++
    FIN MIENTRAS
    cadena[p_escritura] = FIN_DE_CADENA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
