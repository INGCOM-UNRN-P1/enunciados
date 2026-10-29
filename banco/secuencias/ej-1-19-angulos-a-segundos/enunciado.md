### Ejercicio 1.19 - Ángulos a Segundos ⭐⭐☆☆☆


Convertir una medida de ángulo dada en formato sexagesimal (grados, minutos y
segundos) a su valor total equivalente en segundos.

:::{hint} Lógica y Consideraciones
-   **Relaciones:** Recordar que 1 grado = 60 minutos y 1 minuto = 60 segundos.
-   **Entrada:** Solicitar al usuario tres valores enteros: grados, minutos y
-   **Proceso:** Aplicar la fórmula de conversión: $total = (grados \times 3600)
-   **Salida:** Mostrar el total de segundos.

-   **[*plus ultra*]:** Validar que los minutos y segundos estén en el rango [0, 59].
-   **[*plus ultra*]:** Implementar la operación inversa: convertir segundos totales a grados, minutos y segundos.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO angulo_a_segundos
ENTRADA: grados, minutos, segundos (enteros)
VARIABLES:
    total_segundos (entero)

INICIO
    LEER grados, minutos, segundos
    total_segundos = (grados * 3600) + (minutos * 60) + segundos
    ESCRIBIR "El total en segundos es: ", total_segundos
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->

---

## Control de Flujo Avanzado
