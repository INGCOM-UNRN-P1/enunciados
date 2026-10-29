### Ejercicio 11.26 - b.26 - Descifrado César ⭐⭐☆☆☆

#### Descripción
Escribir la función complementaria que descifre un mensaje cifrado con el
Cifrado César, conociendo el desplazamiento. Es la operación inversa al
ejercicio anterior.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:** Es idéntico al cifrado, pero en lugar de sumar el
    desplazamiento, se resta. Para manejar el wraparound negativo, la fórmula
    puede ser `'a' + (c - 'a' - desplazamiento + 26) % 26`.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
FUNCION descifrado_cesar(cadena, desplazamiento)
INICIO
    // La lógica es la misma que el cifrado, pero con -desplazamiento
    RETORNAR cifrado_cesar(cadena, 26 - desplazamiento)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
