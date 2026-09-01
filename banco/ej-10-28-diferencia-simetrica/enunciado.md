### Ejercicio 10.28 - Diferencia simétrica ⭐⭐☆☆☆


Calcular la diferencia simétrica entre dos arreglos. El resultado debe ser un
nuevo arreglo que contenga los elementos que están en uno de los arreglos, pero
no en ambos.

:::{hint} Lógica y Consideraciones

-   **Proceso:**
    1.  Iterar sobre el primer arreglo. Para cada elemento, verificar si está en
        el segundo. Si NO está, añadirlo al resultado.
    2.  Iterar sobre el segundo arreglo. Para cada elemento, verificar si está
        en el primero. Si NO está, añadirlo al resultado.
-   **Optimización:** Usar tablas hash para las búsquedas puede hacer el proceso
    mucho más eficiente.

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
FUNCION diferencia_simetrica(a1, n1, a2, n2)
VARIABLES:
    resultado (arreglo)
INICIO
    PARA cada elemento x en a1 HACER
        SI x NO ESTÁ EN a2 ENTONCES
            AÑADIR x a resultado
        FIN SI
    FIN PARA
    PARA cada elemento y en a2 HACER
        SI y NO ESTÁ EN a1 ENTONCES
            AÑADIR y a resultado
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
