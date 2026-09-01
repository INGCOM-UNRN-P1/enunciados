### Ejercicio 10.15 - Rotación de arreglo ⭐⭐⭐☆☆


Implementar una función que rote los elementos de un arreglo `k` posiciones
hacia la derecha. Esto significa que los últimos `k` elementos se moverán al
principio del arreglo, y el resto de los elementos se desplazarán hacia la
derecha.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo, su tamaño `n`, y el número de posiciones a rotar
    `k`.
-   **Proceso (con arreglo auxiliar):**
    1.  Crear un arreglo temporal del mismo tamaño.
    2.  Recorrer el arreglo original. Para cada elemento en la posición `i`, su
        nueva posición en el arreglo temporal será `(i + k) % n`.
    3.  Copiar el contenido del arreglo temporal de vuelta al original.
-   **Proceso (in-place, más avanzado):**
    1.  Invertir todo el arreglo.
    2.  Invertir los primeros `k` elementos.
    3.  Invertir los `n-k` elementos restantes.
-   **Módulo:** Es útil calcular `k = k % n` al principio, por si `k` es mayor
    que `n`.

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
PROCEDIMIENTO rotar_derecha(REF arreglo, n, k)
VARIABLES:
    temporal (arreglo de tamaño n)
INICIO
    k = k MOD n // Manejar rotaciones mayores que n

    PARA i DESDE 0 HASTA n-1 HACER
        nueva_pos = (i + k) MOD n
        temporal[nueva_pos] = arreglo[i]
    FIN PARA

    // Copiar de vuelta al arreglo original
    PARA i DESDE 0 HASTA n-1 HACER
        arreglo[i] = temporal[i]
    FIN PARA
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
