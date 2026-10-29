#### Descripción
Generar los primeros `n` términos de la secuencia de Lucas. Es una secuencia
similar a la de Fibonacci, pero comienza con 2 y 1.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO secuencia_lucas(n)
VARIABLES:
    a, b, siguiente (enteros)
INICIO
    SI n >= 1 ENTONCES ESCRIBIR 2
    SI n >= 2 ENTONCES ESCRIBIR 1

    a = 2, b = 1
    PARA i DESDE 3 HASTA n HACER
        siguiente = a + b
        ESCRIBIR siguiente
        a = b
        b = siguiente
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números de Lucas
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__27_numeros_de_lucas(int val);

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
- **Definición:** $L_n = L_{n-1} + L_{n-2}$ con $L_0 = 2$ y $L_1 = 1$.
- **Proceso:** La implementación es casi idéntica a la de Fibonacci, solo cambian los valores iniciales. valores fuera de rango o tipos inválidos. un lazo hasta que el usuario elija finalizar.
- Generar los primeros N términos de la secuencia de Lucas usando tipos enteros amplios.
- Verificar la relación entre los números de Lucas y los números de Fibonacci.
:::
