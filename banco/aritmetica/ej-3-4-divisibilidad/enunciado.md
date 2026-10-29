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

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Divisibilidad
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_3_4_divisibilidad(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- **Entrada:** Dos enteros, `a` y `b`.
- **Proceso:** La divisibilidad se comprueba con el operador módulo (`%`). Si el resto de la división `a % b` es 0, entonces `a` es divisible por `b`.
- **Caso Especial:** Asegurarse de que `b` no sea cero para evitar un error de división por cero. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Manejar el caso especial de divisor cero informando error.
- Implementar la verificación de divisibilidad por 2, 3, 5 y 10 usando reglas de dígitos.
:::
