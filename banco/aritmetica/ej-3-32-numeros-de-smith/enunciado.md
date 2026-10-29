#### Descripción
Un número de Smith es un número compuesto cuya suma de dígitos es igual a la
suma de los dígitos de sus factores primos. El programa debe verificar si un
número dado es un número de Smith.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION es_numero_smith(n)
INICIO
    SI es_primo(n) RETORNAR FALSO

    suma_digitos_n = sumar_digitos(n)
    suma_digitos_factores = 0
    temp_n = n

    // Lógica para obtener factores primos y sumar sus dígitos
    // ... (similar a la descomposición en factores primos)

    RETORNAR (suma_digitos_n == suma_digitos_factores)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números de Smith
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__32_numeros_de_smith(int val);

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
- **Entrada:** Un entero `n`.
- **Proceso:**
- Verificar que `n` no sea primo.
- Calcular la suma de los dígitos de `n`.
- Obtener los factores primos de `n`.
- Calcular la suma de los dígitos de todos los factores primos. Si un factor tiene más de un dígito (ej. 13), se deben sumar sus dígitos individuales (1+3).
- Comparar las dos sumas. error e informar el resultado mediante parámetros de salida. especificando precondiciones y postcondiciones.
- Validar que el número sea compuesto (los primos no se consideran números de Smith).
- Encontrar todos los números de Smith menores a 500.
:::
