### Ejercicio 11.28 - b.28 - Comparación de cadenas (Ignorando mayúsculas) ⭐⭐⭐☆☆

#### Descripción
Implementar su propia versión de la función `strcasecmp`, que compara dos
cadenas sin diferenciar entre mayúsculas y minúsculas.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Lógica y Consideraciones

-   **Proceso:**
    1.  Recorrer ambas cadenas simultáneamente con un lazo `while`.
    2.  En cada paso, comparar las versiones en minúscula (o mayúscula) de los
        caracteres actuales.
    3.  Si son diferentes, devolver la diferencia.
    4.  Si una cadena termina antes que la otra, son diferentes.
    5.  Si ambas terminan al mismo tiempo, son iguales.

:::
<!-- {tip} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION comparar_sin_caso(s1, s2)
INICIO
    MIENTRAS *s1 != FIN_DE_CADENA Y *s2 != FIN_DE_CADENA HACER
        c1 = convertir_a_minuscula(*s1)
        c2 = convertir_a_minuscula(*s2)
        SI c1 != c2 ENTONCES
            RETORNAR c1 - c2
        FIN SI
        s1++, s2++
    FIN MIENTRAS
    RETORNAR convertir_a_minuscula(*s1) - convertir_a_minuscula(*s2)
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
