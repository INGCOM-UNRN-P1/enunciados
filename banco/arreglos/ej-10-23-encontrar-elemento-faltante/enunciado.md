### Ejercicio 10.23 - Encontrar elemento faltante ⭐⭐☆☆☆


Dado un arreglo que contiene `n-1` números distintos en el rango de 1 a `n`,
encontrar el único número que falta.

:::{hint} Lógica y Consideraciones

-   **Proceso (Suma):**
    1.  Calcular la suma esperada de todos los números de 1 a `n` usando la
        fórmula de la progresión aritmética: `suma_esperada = n * (n + 1) / 2`.
    2.  Calcular la suma real de los elementos en el arreglo dado.
    3.  El número faltante es la diferencia: `suma_esperada - suma_real`.
-   **Proceso (XOR):** El XOR de todos los números del rango con todos los
    números del arreglo dará como resultado el número faltante.

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
FUNCION encontrar_faltante(arreglo, tamano_actual)
VARIABLES:
    n, suma_esperada, suma_real (enteros)
INICIO
    n = tamano_actual + 1
    suma_esperada = n * (n + 1) / 2
    suma_real = sumar_arreglo(arreglo, tamano_actual)
    RETORNAR suma_esperada - suma_real
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
