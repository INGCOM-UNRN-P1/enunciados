### Ejercicio 11.23 - b.23 - Reemplazar subcadena ⭐⭐⭐☆☆

#### Descripción
Escribir una función que reemplace todas las ocurrencias de una subcadena por
otra dentro de una cadena principal. La función debe manejar cambios en la
longitud de la cadena, lo que usualmente requiere memoria dinámica.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Contar cuántas veces aparece la subcadena a buscar para calcular el
        tamaño final de la nueva cadena.
    2.  Reservar memoria (`malloc`) para la nueva cadena.
    3.  Recorrer la cadena original. Cuando se encuentre una ocurrencia de la
        subcadena a buscar, copiar la cadena de reemplazo a la nueva cadena. Si
        no, copiar el carácter actual.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION reemplazar_subcadena(original, buscar, reemplazar)
VARIABLES:
    nueva_cadena (cadena)
    i, j (enteros)
INICIO
    // ... calcular tamaño de nueva_cadena y reservar memoria ...
    i = 0, j = 0
    MIENTRAS i < LONGITUD(original) HACER
        SI subcadena_en(original, i) == buscar ENTONCES
            COPIAR reemplazar en nueva_cadena en la posición j
            i = i + LONGITUD(buscar)
            j = j + LONGITUD(reemplazar)
        SINO
            nueva_cadena[j] = original[i]
            i++, j++
        FIN SI
    FIN MIENTRAS
    nueva_cadena[j] = FIN_DE_CADENA
    RETORNAR nueva_cadena
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
