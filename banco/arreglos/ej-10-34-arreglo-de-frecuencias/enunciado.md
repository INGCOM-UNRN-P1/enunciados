### Ejercicio 10.34 - Arreglo de frecuencias ⭐⭐⭐☆☆


Dado un arreglo de enteros que contiene números en un rango conocido (por
ejemplo, de 0 a 99), crear un "arreglo de frecuencias" que cuente cuántas veces
aparece cada número.

:::{hint} Lógica y Consideraciones

-   **Proceso:**
    1.  Crear un nuevo arreglo `frecuencias` del tamaño del rango (ej. 100),
        inicializado todo en 0.
    2.  Recorrer el arreglo de entrada. Para cada número `x`, usarlo como índice
        en el arreglo de frecuencias e incrementar la cuenta:
        `frecuencias[x]++`.

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
FUNCION calcular_frecuencias(arreglo, tamano, rango_max)
VARIABLES:
    frecuencias (arreglo de tamaño rango_max, inicializado en 0)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        numero = arreglo[i]
        frecuencias[numero] = frecuencias[numero] + 1
    FIN PARA
    RETORNAR frecuencias
FIN FUNCION

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
