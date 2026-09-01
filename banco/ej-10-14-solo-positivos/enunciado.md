### Ejercicio 10.14 - Solo positivos ⭐⭐☆☆☆


Verificar si todos los elementos de un arreglo son números positivos (mayores
que cero).

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Proceso:** Recorrer el arreglo con un lazo.
-   **Condición de Salida:** En cuanto se encuentre un elemento que sea menor o
    igual a cero, se puede concluir que no todos son positivos y devolver
    `falso`.
-   **Salida:** Si el lazo se completa sin encontrar ningún número no positivo,
    devolver `verdadero`.

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
FUNCION son_todos_positivos(arreglo, tamano)
INICIO
    PARA cada elemento x EN arreglo HACER
        SI x <= 0 ENTONCES
            RETORNAR FALSO
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Operaciones Avanzadas con Arreglos
