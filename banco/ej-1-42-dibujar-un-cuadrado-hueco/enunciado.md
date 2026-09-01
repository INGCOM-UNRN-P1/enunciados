### Ejercicio 1.42 - Dibujar un Cuadrado Hueco ⭐⭐☆☆☆


Pedir al usuario un número `n` y dibujar el contorno de un cuadrado de `n x n`
utilizando asteriscos. El interior del cuadrado debe estar vacío.

:::{hint} Lógica y Consideraciones
-   **Entrada:** Leer un entero `n`.
-   **Proceso:** Usar lazos aninados. El lazo exterior para las filas y el
-   **Condición:** Dentro del lazo interior, se debe decidir si imprimir un
    -   Es la primera o la última fila (`fila == 1` o `fila == n`).
    -   Es la primera o la última columna (`columna == 1` o `columna == n`).
-   En cualquier otro caso, se imprime un espacio.

-   **[*plus ultra*]:** Validar que el lado del cuadrado sea mayor o igual a 2.
-   **[*plus ultra*]:** Permitir elegir un carácter diferente para el borde y para el relleno.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO cuadrado_hueco
ENTRADA: n (entero)

INICIO
    PARA fila DESDE 1 HASTA n HACER
        PARA columna DESDE 1 HASTA n HACER
            SI fila == 1 O fila == n O columna == 1 O columna == n ENTONCES
                ESCRIBIR "*" SIN SALTO DE LÍNEA
            SINO
                ESCRIBIR " " SIN SALTO DE LÍNEA
            FIN SI
        FIN PARA
        ESCRIBIR SALTO DE LÍNEA
    FIN PARA
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
