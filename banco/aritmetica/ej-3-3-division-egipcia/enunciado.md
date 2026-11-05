#### Descripción
Implementar el antiguo método de división egipcio, que no requiere tablas de
multiplicar ni operaciones de división directa. Se basa en duplicar el divisor,
encontrar qué duplicaciones suman el dividendo y sumar los factores de
duplicación correspondientes.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO division_egipcia(dividendo, divisor, REF cociente, REF resto)
VARIABLES:
    col1, col2 (arreglos)
    i (entero)
INICIO
    // 1. Crear tabla
    col1[0] = 1, col2[0] = divisor
    i = 0
    MIENTRAS col2[i] <= dividendo HACER
        i = i + 1
        col1[i] = col1[i-1] * 2
        col2[i] = col2[i-1] * 2
    FIN MIENTRAS

    // 2. Buscar y sumar
    cociente = 0
    PARA j DESDE i-1 HASTA 0 CON PASO -1 HACER
        SI col2[j] <= dividendo ENTONCES
            dividendo = dividendo - col2[j]
            cociente = cociente + col1[j]
        FIN SI
    FIN PARA
    resto = dividendo
FIN PROCEDIMIENTO

```

:::

---

## Divisibilidad y Factores

## Interfaz

```c
int division_egipcia(int dividendo, int divisor, int *resto_salida);
```

## Ejemplos

- `division_egipcia(20, 4, &resto)` devuelve `5` y deja `resto == 0`.
- `division_egipcia(22, 4, &resto)` devuelve `5` y deja `resto == 2`.
- `division_egipcia(3, 8, &resto)` devuelve `0` y deja `resto == 3`.
