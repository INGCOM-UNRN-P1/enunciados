#### Descripción
Verificar si un número entero mayor que 1 es un número primo. Un número es primo
si solo es divisible por 1 y por sí mismo.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_primo(n)
INICIO
    SI n <= 1 ENTONCES RETORNAR FALSO
    PARA i DESDE 2 HASTA RAIZ_CUADRADA(n) HACER
        SI n MOD i == 0 ENTONCES
            RETORNAR FALSO
        FIN SI
    FIN PARA
    RETORNAR VERDADERO
FIN FUNCION

```

:::

## Interfaz

```c
int es_primo(int n);
```

## Ejemplos

- `es_primo(1)` devuelve `0`.
- `es_primo(97)` devuelve `1`.
- `es_primo(91)` devuelve `0`.
