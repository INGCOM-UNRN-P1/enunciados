### Ejercicio 1.31 - Piedra, Papel o Tijera ⭐⭐☆☆☆


Implementar el clásico juego de Piedra, Papel o Tijera para que un usuario
juegue una partida contra la computadora.

:::{hint} Lógica y Consideraciones
-   **Entrada del Usuario:** Pedir al usuario que elija una opción (ej.
-   **Elección de la Computadora:** Generar un número aleatorio entre 1 y 3 para
-   **Reglas del Juego:**
    -   Piedra vence a Tijera.
    -   Tijera vence a Papel.
    -   Papel vence a Piedra.
-   **Proceso:** Comparar la elección del usuario con la de la computadora

-   **[*plus ultra*]:** Validar que la opción elegida por el usuario sea válida (1, 2 o 3).
-   **[*plus ultra*]:** Llevar un marcador de victorias, derrotas y empates a lo largo de múltiples rondas.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:

ALGORITMO piedra_papel_tijera
VARIABLES:
    eleccion_usuario, eleccion_pc (entero)

INICIO
    ESCRIBIR "Elige: 1-Piedra, 2-Papel, 3-Tijera"
    LEER eleccion_usuario
    eleccion_pc = generar_aleatorio(1, 3)

    SI eleccion_usuario == eleccion_pc ENTONCES
        ESCRIBIR "Empate."
    SINO SI (eleccion_usuario == 1 Y eleccion_pc == 3) O \
            (eleccion_usuario == 2 Y eleccion_pc == 1) O \
            (eleccion_usuario == 3 Y eleccion_pc == 2) ENTONCES
        ESCRIBIR "¡Ganaste!"
    SINO
        ESCRIBIR "Perdiste."
    FIN SI
FIN

```
<!-- {code-block} pseudocode -->

:::
<!-- {tip} Ayuda (pseudocódigo) -->
