### Ejercicio 10.39 - Punto de equilibrio ⭐⭐☆☆☆


Encontrar un "punto de equilibrio" en un arreglo. Es un índice tal que la suma
de los elementos a su izquierda es igual a la suma de los elementos a su
derecha. Si no existe, devolver -1.

:::{hint} Lógica y Consideraciones

-   **Proceso (dos pasadas):**
    1.  Calcular la suma total de todos los elementos del arreglo.
    2.  Inicializar `suma_izquierda = 0`.
    3.  Recorrer el arreglo. En cada posición `i`:
        a. `suma_derecha = suma_total - suma_izquierda - arreglo[i]`.
        b. Si `suma_izquierda == suma_derecha`, se encontró el punto.
        c. Actualizar `suma_izquierda = suma_izquierda + arreglo[i]`.

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
FUNCION encontrar_equilibrio(arreglo, tamano)
VARIABLES:
    suma_total, suma_izquierda
INICIO
    suma_total = sumar_arreglo(arreglo, tamano)
    suma_izquierda = 0

    PARA i DESDE 0 HASTA tamano-1 HACER
        suma_total = suma_total - arreglo[i]
        SI suma_izquierda == suma_total ENTONCES
            RETORNAR i
        FIN SI
        suma_izquierda = suma_izquierda + arreglo[i]
    FIN PARA

    RETORNAR -1
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
