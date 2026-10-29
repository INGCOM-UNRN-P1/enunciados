### Ejercicio 3.3 - División egipcia ⭐⭐☆☆☆

#### Descripción
Implementar el antiguo método de división egipcio, que no requiere tablas de
multiplicar ni operaciones de división directa. Se basa en duplicar el divisor,
encontrar qué duplicaciones suman el dividendo y sumar los factores de
duplicación correspondientes.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Un dividendo y un divisor.
-   **Proceso:** 
    1.  **Tabla de Duplicación:** Crear dos columnas. La primera empieza en 1 y
        la segunda en el `divisor`. En cada paso, duplicar el valor de la fila
        anterior en ambas columnas. Detenerse cuando el siguiente valor en la
        columna del divisor supere al `dividendo`.
    2.  **Búsqueda y Suma:** Recorrer la tabla de abajo hacia arriba. Para cada
        fila, si el valor en la columna del divisor es menor o igual al
        `dividendo` restante, se resta ese valor del `dividendo` y se suma el
        valor correspondiente de la primera columna al `cociente`.
-   **Salida:** El `cociente` acumulado y el `dividendo` final (que es el
    resto).
    filas (*row-major order*) para mejorar el uso de caché.
    estrictamente dentro de los límites del contenedor.

-   **[*plus ultra*]:** Validar que el divisor sea distinto de cero e imprimir el paso a paso de las duplicaciones sucesivas.
-   **[*plus ultra*]:** Comparar la cantidad de operaciones requeridas por la división egipcia frente a la división por restas.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO division_egipcia(dividendo, divisor, REF cociente, REF resto)
VARIABLES:
    col1, col2 (arreglos)
    i (entero)
INICIO
    // 1. Crear tabla
    col1[0] = 1, col2[0] = divisor
    i = 0
    MIENTRAS col2[i] <= dividendo HACER
        i = i + 1
        col1[i] = col1[i-1] * 2
        col2[i] = col2[i-1] * 2
    FIN MIENTRAS

    // 2. Buscar y sumar
    cociente = 0
    PARA j DESDE i-1 HASTA 0 CON PASO -1 HACER
        SI col2[j] <= dividendo ENTONCES
            dividendo = dividendo - col2[j]
            cociente = cociente + col1[j]
        FIN SI
    FIN PARA
    resto = dividendo
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

---

## Divisibilidad y Factores
