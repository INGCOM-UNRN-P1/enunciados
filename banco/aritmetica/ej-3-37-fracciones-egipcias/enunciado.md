#### Descripción
Escribir una función que descomponga una fracción propia `a/b` en una suma de
fracciones unitarias distintas (fracciones con numerador 1).


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO fracciones_egipcias(num, den)
INICIO
    MIENTRAS num != 0 HACER
        d = TECHO(den / num)
        ESCRIBIR "1/", d
        num = num * d - den
        den = den * d
        // Simplificar fracción num/den
    FIN MIENTRAS
    FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Fracciones Egipcias
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__fracciones_egipcias(int val);

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
- **Algoritmo Greedy:** Un método común es encontrar repetidamente la fracción unitaria más grande que sea menor o igual a la fracción restante.
- **Proceso:**
- Dada la fracción `num/den`.
- Encontrar el denominador `d` de la siguiente fracción unitaria: `d = techo(den / num)`.
- Imprimir `1/d`.
- Actualizar la fracción restante: `num/den = num/den - 1/d`.
- Repetir hasta que `num` sea 0. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar que el numerador sea menor que el denominador (fracción propia positiva).
- Implementar el algoritmo voraz (greedy) de Fibonacci-Sylvester.
:::
