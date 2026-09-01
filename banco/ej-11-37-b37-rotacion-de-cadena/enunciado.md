### Ejercicio 11.37 - b.37 - Rotación de cadena ⭐⭐⭐☆☆

#### Descripción
Escribir una función que determine si una cadena `s2` es una rotación de otra
cadena `s1`.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Propiedad Clave:** `s2` es una rotación de `s1` si y solo si `s2` es una
    subcadena de `s1` concatenado consigo mismo (`s1s1`).
-   **Proceso:**
    1.  Verificar que `s1` y `s2` tengan la misma longitud. Si no, no pueden ser
        rotaciones.
    2.  Crear una nueva cadena `temp` que sea `s1 + s1`.
    3.  Buscar si `s2` es una subcadena de `temp`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_rotacion(s1, s2)
INICIO
    SI LONGITUD(s1) != LONGITUD(s2) RETORNAR FALSO

    temp = s1 + s1 // Concatenación
    SI buscar_subcadena(temp, s2) != NO_ENCONTRADO ENTONCES
        RETORNAR VERDADERO
    SINO
        RETORNAR FALSO
    FIN SI
    FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
