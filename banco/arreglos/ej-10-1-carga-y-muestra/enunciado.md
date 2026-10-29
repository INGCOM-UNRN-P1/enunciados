### Ejercicio 10.1 - Carga y muestra ⭐⭐☆☆☆


Crear dos funciones complementarias para manejar arreglos: una para que el
usuario ingrese datos y llene un arreglo, y otra para mostrar el contenido del
arreglo de una forma clara y legible.

:::{hint} Lógica y Consideraciones

-   **`cargar_arreglo`:**
    -   **Entrada:** Un arreglo y su tamaño.
    -   **Proceso:** Usar un lazo `for` que itere desde 0 hasta `tamaño-1`. En
        cada iteración, solicitar al usuario un número y almacenarlo en la
        posición correspondiente del arreglo (`arreglo[i]`).
-   **`mostrar_arreglo`:**
    -   **Entrada:** Un arreglo y su tamaño.
    -   **Proceso:** Usar un lazo `for` para recorrer el arreglo.
    -   **Salida:** Imprimir los elementos de una forma legible, por ejemplo,
        entre corchetes y separados por comas.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO cargar_arreglo(REF arreglo, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        ESCRIBIR "Ingrese el elemento ", i, ":"
        LEER arreglo[i]
    FIN PARA
FIN PROCEDIMIENTO

PROCEDIMIENTO mostrar_arreglo(arreglo, tamano)
INICIO
    ESCRIBIR "[" SIN SALTO DE LÍNEA
    PARA i DESDE 0 HASTA tamano-1 HACER
        ESCRIBIR arreglo[i]
        SI i < tamano-1 ENTONCES
            ESCRIBIR ", " SIN SALTO DE LÍNEA
        FIN SI
    FIN PARA
    ESCRIBIR "]"
FIN PROCEDIMIENTO

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
