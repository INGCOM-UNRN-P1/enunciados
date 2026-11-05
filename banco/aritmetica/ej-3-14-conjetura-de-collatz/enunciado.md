#### Descripción
Implementar la secuencia de Collatz para un número inicial `n`. La secuencia se
genera aplicando repetidamente una regla: si el número actual es par, se divide
por 2; si es impar, se multiplica por 3 y se le suma 1. La conjetura (no
probada) es que esta secuencia siempre llega a 1.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO secuencia_collatz(n)
INICIO
    MIENTRAS n != 1 HACER
        ESCRIBIR n
        SI n MOD 2 == 0 ENTONCES
            n = n / 2
        SINO
            n = 3 * n + 1
        FIN SI
    FIN MIENTRAS
    ESCRIBIR 1 // El último término de la secuencia
FIN PROCEDIMIENTO

```

:::

## Interfaz

```c
int longitud_collatz(int n);
```

## Ejemplos

- `longitud_collatz(1)` devuelve `0`.
- `longitud_collatz(3)` imprime `3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1` y devuelve `7`.
- `longitud_collatz(0)` devuelve `-1`.
