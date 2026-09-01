### Ejercicio 10.17 - Intersección de arreglos ⭐⭐⭐☆☆


Crear una función que reciba dos arreglos y devuelva un nuevo arreglo con los
elementos que son comunes a ambos. Cada elemento debe aparecer solo una vez en
el resultado.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Dos arreglos y sus tamaños.
-   **Proceso (con arreglos ordenados):** Usar dos punteros, uno para cada
    arreglo. Si los elementos son iguales, se añade al resultado y se avanzan
    ambos punteros. Si son diferentes, se avanza el puntero del arreglo que
    tenga el elemento más pequeño.
-   **Proceso (con arreglos desordenados):** Usar lazos anidados. Para cada
    elemento del primer arreglo, buscar si existe en el segundo. Para evitar
    duplicados en el resultado, se puede usar una estructura de datos auxiliar
    (hash set) o verificar si el elemento ya fue añadido.

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION interseccion(a1, n1, a2, n2)
VARIABLES:
    resultado (arreglo)
    i, j (enteros)
INICIO
    i=0, j=0
    MIENTRAS i < n1 Y j < n2 HACER
        SI a1[i] < a2[j] ENTONCES
            i = i + 1
        SINO SI a2[j] < a1[i] ENTONCES
            j = j + 1
        SINO // Son iguales
            AÑADIR a1[i] a resultado (si no está ya)
            i = i + 1, j = j + 1
        FIN SI
    FIN MIENTRAS
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
