### Ejercicio 10.7 - Búsqueda de elemento ⭐⭐☆☆☆


Implementar una búsqueda lineal para encontrar la primera ocurrencia de un
elemento específico dentro de un arreglo. Si se encuentra, se debe devolver su
índice.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo, su tamaño y el elemento a buscar.
-   **Proceso:** Recorrer el arreglo con un lazo `for` desde el índice 0.
-   **Condición:** En cada iteración, comparar el elemento actual del arreglo
    con el elemento buscado. Si son iguales, se ha encontrado.
-   **Salida:** Si se encuentra el elemento, la función debe devolver el índice
    actual. Si el lazo termina sin encontrar el elemento, se debe devolver un
    valor especial que indique que no se encontró, como `-1`.

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION busqueda_lineal(arreglo, tamano, buscado)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        SI arreglo[i] == buscado ENTONCES
            RETORNAR i // Elemento encontrado
        FIN SI
    FIN PARA
    RETORNAR -1 // Elemento no encontrado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
