### Ejercicio 10.33 - Producto de los demás elementos ⭐⭐☆☆☆


Dado un arreglo de números, crear un nuevo arreglo donde cada elemento en la
posición `i` sea el producto de todos los demás números del arreglo original,
pero sin usar el operador de división.

:::{hint} Lógica y Consideraciones

-   **Proceso (dos pasadas):**
    1.  Crear un arreglo `resultado`.
    2.  **Primera pasada (izquierda a derecha):** Recorrer el arreglo. Para cada
        `i`, `resultado[i]` será el producto de todos los elementos a su
        izquierda. Mantener un acumulador `izquierda_prod`.
    3.  **Segunda pasada (derecha a izquierda):** Recorrer el arreglo al revés.
        Mantener un acumulador `derecha_prod`. Multiplicar `resultado[i]` por
        `derecha_prod` para incorporar los productos de la derecha.

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
FUNCION producto_de_los_demas(arreglo, tamano)
VARIABLES:
    resultado (arreglo de tamaño n)
    izquierda_prod, derecha_prod
INICIO
    izquierda_prod = 1
    PARA i DESDE 0 HASTA tamano-1 HACER
        resultado[i] = izquierda_prod
        izquierda_prod = izquierda_prod * arreglo[i]
    FIN PARA

    derecha_prod = 1
    PARA i DESDE tamano-1 HASTA 0 CON PASO -1 HACER
        resultado[i] = resultado[i] * derecha_prod
        derecha_prod = derecha_prod * arreglo[i]
    FIN PARA

    RETORNAR resultado
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
