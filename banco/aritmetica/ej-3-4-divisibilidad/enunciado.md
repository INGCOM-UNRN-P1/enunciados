#### Descripción
Determinar si un número entero `a` es divisible de forma exacta por otro entero
`b`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_divisible(a, b)
INICIO
    SI b == 0 ENTONCES
        RETORNAR FALSO // O manejar como error
    FIN SI
    SI a MOD b == 0 ENTONCES
        RETORNAR VERDADERO
    SINO
        RETORNAR FALSO
    FIN SI
END FUNCION

```

:::

## Interfaz

```c
int es_divisible(int a, int b);
```

## Ejemplos

- `es_divisible(15, 5)` devuelve `1`.
- `es_divisible(16, 5)` devuelve `0`.
- `es_divisible(-12, 3)` devuelve `1`.
- `es_divisible(5, 0)` devuelve `0`.
