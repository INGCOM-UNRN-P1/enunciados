### Ejercicio 10.12 - Deduplicación ⭐⭐☆☆☆


Eliminar los elementos duplicados de un arreglo, conservando solo la primera
aparición de cada elemento. La función debe modificar el arreglo _in-place_ y
devolver el nuevo tamaño lógico.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Proceso (si el orden no importa):** Ordenar el arreglo primero. Luego,
    recorrerlo con dos punteros (`lectura` y `escritura`). Si el elemento actual
    es diferente al anterior, se copia a la posición de `escritura` y se avanza
    `escritura`.
-   **Proceso (si el orden importa):** Usar un lazo anidado o una estructura de
    datos auxiliar (como un hash set) para llevar un registro de los elementos
    ya vistos.

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
FUNCION deduplicar_arreglo(REF arreglo, tamano)
INICIO
    SI tamano == 0 RETORNAR 0

    ORDENAR(arreglo, tamano)

    indice_escritura = 1
    PARA i DESDE 1 HASTA tamano-1 HACER
        SI arreglo[i] != arreglo[i-1] ENTONCES
            arreglo[indice_escritura] = arreglo[i]
            indice_escritura = indice_escritura + 1
        FIN SI
    FIN PARA
    RETORNAR indice_escritura
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Verificación
