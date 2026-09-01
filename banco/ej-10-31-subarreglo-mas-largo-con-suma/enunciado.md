### Ejercicio 10.31 - Subarreglo más largo con suma cero ⭐⭐⭐☆☆


Dado un arreglo de enteros (positivos y negativos), encontrar la longitud del
subarreglo contiguo más largo cuya suma de elementos sea cero.

:::{hint} Lógica y Consideraciones

-   **Proceso (Tabla Hash):**
    1.  Usar una tabla hash para almacenar las sumas acumuladas y sus primeros
        índices de aparición.
    2.  Recorrer el arreglo, manteniendo una `suma_actual`.
    3.  Si `suma_actual` ya se ha visto antes en el índice `j`, entonces el
        subarreglo desde `j+1` hasta la posición actual tiene suma cero.
        Calcular su longitud y actualizar la longitud máxima.

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
FUNCION subarreglo_suma_cero(arreglo, tamano)
VARIABLES:
    mapa_sumas (tabla hash)
    suma, max_longitud (enteros)
INICIO
    suma = 0, max_longitud = 0
    PARA i DESDE 0 HASTA tamano-1 HACER
        suma = suma + arreglo[i]
        SI suma == 0 ENTONCES
            max_longitud = i + 1
        SINO SI mapa_sumas CONTIENE suma ENTONCES
            max_longitud = MAXIMO(max_longitud, i - mapa_sumas[suma])
        SINO
            mapa_sumas[suma] = i
        FIN SI
    FIN PARA
    RETORNAR max_longitud
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
