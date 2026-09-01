### Ejercicio 1.1 - Cuenta regresiva ⭐⭐☆☆☆


Este ejercicio consiste en implementar un programa que realice una cuenta
regresiva desde un número entero positivo $N$ hasta $1$, para finalmente imprimir
un mensaje de "¡Lanzamiento!". El objetivo es practicar el uso de lazos y la
gestión de tiempos de ejecución simples.

Para que la cuenta no sea instantánea y se pueda percibir en tiempo real, se
debe introducir una pausa de 1 segundo entre cada número impreso.

:::{hint} Lógica y Consideraciones
-   **Entrada:** El programa debe solicitar al usuario un número entero positivo
-   **Proceso:** Se debe utilizar un lazo que itere desde $N$ hacia abajo, hasta
-   **Pausa:** Dentro del lazo, después de imprimir cada número, el programa
-   **Salida:** Tras finalizar el lazo, se debe imprimir el mensaje final

-   **[*plus ultra*]:** Validar que el número inicial N sea estrictamente positivo antes de comenzar la cuenta.
-   **[*plus ultra*]:** Permitir al usuario configurar el tiempo de pausa entre cada número.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
ALGORITMO cuenta_regresiva
ENTRADA: numero_inicio (entero)

INICIO
    PARA i DESDE numero_inicio HASTA 1 CON PASO -1 HACER
        ESCRIBIR i, "..."
        ESPERAR 1 segundo
    FIN PARA

    ESCRIBIR "¡Lanzamiento!"
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
