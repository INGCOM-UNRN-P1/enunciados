### Ejercicio 1.32 - Patrón de Pirámide ⭐⭐☆☆☆


Implementar un programa que pida un número `n` e imprima un triángulo de `n`
filas de altura, construido con asteriscos, centrado como una pirámide.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer un entero `n` para la altura del triángulo.
-   **Proceso:** Se necesitan dos lazos aninados.
        -   El primer lazo interior imprime los espacios en blanco necesarios
        -   El segundo lazo interior imprime los asteriscos. En la fila `i`, se
-   **Salida:** Después de cada fila, imprimir un salto de línea.

-   **[*plus ultra*]:** Validar que la altura ingresada esté en un rango razonable (ej. entre 1 y 25).
-   **[*plus ultra*]:** Permitir al usuario elegir entre pirámide sólida o hueca.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO piramide_asteriscos
ENTRADA: n (entero)

INICIO
    PARA fila DESDE 1 HASTA n HACER
        // Imprimir espacios
        PARA espacio DESDE 1 HASTA n - fila HACER
            ESCRIBIR " " SIN SALTO DE LÍNEA
        FIN PARA

        // Imprimir asteriscos
        PARA asterisco DESDE 1 HASTA 2 * fila - 1 HACER
            ESCRIBIR "*" SIN SALTO DE LÍNEA
        FIN PARA

        ESCRIBIR SALTO DE LÍNEA
    FIN PARA
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
