### Ejercicio 1.36 - Promedio de N Números ⭐⭐☆☆☆


Escribir un programa que sea flexible en la cantidad de números a promediar.
Primero debe preguntar al usuario cuántos números va a ingresar y luego calcular
el promedio de esa cantidad de números.

:::{hint} Lógica y Consideraciones
-   **Entrada Inicial:** Leer la cantidad de números a promediar ($N$).
-   **Variables:** Se necesita un `acumulador` para la suma y un contador.
-   **Proceso:**
-   **Salida:** Mostrar el promedio calculado.

-   **[*plus ultra*]:** Validar que la cantidad N de datos sea mayor a cero para evitar división por cero.
-   **[*plus ultra*]:** Calcular en el mismo recorrido el valor máximo y mínimo del conjunto.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO promedio_n_numeros
VARIABLES:
    cantidad, i (enteros)
    numero, suma, promedio (reales)

INICIO
    ESCRIBIR "¿Cuántos números desea promediar?"
    LEER cantidad
    suma = 0

    PARA i DESDE 1 HASTA cantidad HACER
        ESCRIBIR "Ingrese el número ", i, ":"
        LEER numero
        suma = suma + numero
    FIN PARA

    SI cantidad > 0 ENTONCES
        promedio = suma / cantidad
        ESCRIBIR "El promedio es: ", promedio
    FIN SI
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
