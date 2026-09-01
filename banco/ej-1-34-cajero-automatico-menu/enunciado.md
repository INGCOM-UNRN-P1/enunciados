### Ejercicio 1.34 - Cajero Automático (Menú) ⭐⭐☆☆☆


Simular la interfaz de un menú de cajero automático. El programa debe mostrar
una lista de opciones y ejecutar una acción simple según la elección del
usuario, repitiendo el proceso hasta que el usuario decida salir.

:::{hint} Lógica y Consideraciones
-   **Estado:** Mantener una variable para el saldo de la cuenta.
-   **Proceso:** Usar un lazo `do-while` que se ejecute mientras la opción
-   **Menú:** Dentro del lazo, imprimir las opciones (1. Consultar, 2.
-   **Entrada:** Leer la opción del usuario.
-   **Selección:** Usar una estructura `switch` para manejar las diferentes

-   **[*plus ultra*]:** Mantener el saldo actualizado entre operaciones y validar que no se extraiga más dinero del disponible.
-   **[*plus ultra*]:** Implementar la opción de consultar los últimos movimientos o transferencias.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO cajero_automatico
VARIABLES:
    saldo (real)
    opcion, monto (entero)

INICIO
    saldo = 1000.0
    HACER
        ESCRIBIR "1. Consultar Saldo"
        ESCRIBIR "2. Depositar"
        ESCRIBIR "3. Retirar"
        ESCRIBIR "4. Salir"
        LEER opcion

        SEGUN opcion HACER
            CASO 1: ESCRIBIR "Su saldo es: ", saldo
            CASO 2: 
                ESCRIBIR "Ingrese monto a depositar:"
                LEER monto
                saldo = saldo + monto
            CASO 3:
                ESCRIBIR "Ingrese monto a retirar:"
                LEER monto
                SI monto <= saldo ENTONCES
                    saldo = saldo - monto
                SINO
                    ESCRIBIR "Saldo insuficiente."
                FIN SI
        FIN SEGUN
    MIENTRAS opcion != 4
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
