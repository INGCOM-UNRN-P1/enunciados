### Ejercicio 10.9 - Elemento más cercano ⭐⭐☆☆☆


Dado un arreglo y un valor de referencia, encontrar el elemento en el arreglo
que tiene la menor diferencia absoluta con dicho valor.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo, su tamaño y un valor de referencia.
-   **Variables:** Se necesitan variables para guardar la `menor_diferencia`
    encontrada hasta el momento y el `elemento_mas_cercano`.
-   **Proceso:**
    1.  Inicializar `menor_diferencia` con un valor muy grande y
        `elemento_mas_cercano` con el primer elemento.
    2.  Recorrer el arreglo. Para cada elemento, calcular la `diferencia_actual`
        (el valor absoluto de `elemento - referencia`).
    3.  Si `diferencia_actual` es menor que `menor_diferencia`, actualizar
        `menor_diferencia` y `elemento_mas_cercano`.

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
FUNCION encontrar_mas_cercano(arreglo, tamano, referencia)
VARIABLES:
    menor_diferencia, diferencia_actual (reales)
    elemento_cercano (tipo del arreglo)
INICIO
    menor_diferencia = VALOR_INFINITO
    PARA cada elemento x EN arreglo HACER
        diferencia_actual = VALOR_ABSOLUTO(x - referencia)
        SI diferencia_actual < menor_diferencia ENTONCES
            menor_diferencia = diferencia_actual
            elemento_cercano = x
        FIN SI
    FIN PARA
    RETORNAR elemento_cercano
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

## Manipulación de Arreglos
