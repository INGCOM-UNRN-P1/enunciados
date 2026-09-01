### Ejercicio 10.2 - Suma ⭐⭐☆☆☆


Calcular la suma de todos los elementos contenidos en un arreglo de números.

:::{hint} Lógica y Consideraciones

-   **Entrada:** Un arreglo y su tamaño.
-   **Variables:** Se necesita una variable `acumulador` (o `suma`) inicializada
    en 0.
-   **Proceso:** Recorrer el arreglo con un lazo `for`. En cada iteración, sumar
    el elemento actual al `acumulador`.
-   **Salida:** La función debe devolver el valor final del `acumulador`.

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
FUNCION sumar_arreglo(arreglo, tamano)
VARIABLES:
    suma (tipo de dato del arreglo)
INICIO
    suma = 0
    PARA i DESDE 0 HASTA tamano-1 HACER
        suma = suma + arreglo[i]
    FIN PARA
    RETORNAR suma
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
