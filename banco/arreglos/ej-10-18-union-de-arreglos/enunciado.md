### Ejercicio 10.18 - Unión de arreglos ⭐⭐⭐☆☆


Crear una función que reciba dos arreglos y devuelva un nuevo arreglo con todos
los elementos de ambos, sin duplicados.

:::{hint} Lógica y Consideraciones

-   **Proceso:**
    1.  Copiar el primer arreglo a un arreglo de resultado temporal.
    2.  Recorrer el segundo arreglo. Para cada elemento, verificar si ya existe
        en el resultado temporal.
    3.  Si no existe, añadirlo.
-   **Optimización:** Usar una tabla hash para llevar un registro de los
    elementos ya añadidos mejora la eficiencia de la búsqueda.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION union_arreglos(a1, n1, a2, n2)
VARIABLES:
    resultado (arreglo)
    // Usar una tabla hash o similar para eficiencia
    elementos_vistos (conjunto)
INICIO
    PARA cada elemento x en a1 HACER
        AÑADIR x a resultado
        AÑADIR x a elementos_vistos
    FIN PARA
    PARA cada elemento y en a2 HACER
        SI y NO ESTÁ EN elementos_vistos ENTONCES
            AÑADIR y a resultado
            AÑADIR y a elementos_vistos
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
