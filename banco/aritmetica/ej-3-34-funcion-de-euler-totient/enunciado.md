#### Descripción
Implementar una función que calcule el Totient de Euler, `φ(n)`. Esta función
cuenta el número de enteros positivos hasta `n` que son coprimos con `n` (es
decir, `mcd(k, n) = 1` para `1 <= k <= n`).


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION phi_euler(n)
VARIABLES:
    resultado (real)
INICIO
    resultado = n
    p = 2
    temp_n = n
    MIENTRAS p*p <= temp_n HACER
        SI temp_n MOD p == 0 ENTONCES
            MIENTRAS temp_n MOD p == 0 HACER
                temp_n = temp_n / p
            FIN MIENTRAS
            resultado = resultado * (1.0 - (1.0 / p))
        FIN SI
        p = p + 1
    FIN MIENTRAS
    SI temp_n > 1 ENTONCES
        resultado = resultado * (1.0 - (1.0 / temp_n))
    FIN SI
    RETORNAR PARTE_ENTERA(resultado)
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Función φ de Euler (Totient)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ion_de_euler_totient(int val);

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
- **Proceso (simple):** Iterar `k` desde 1 hasta `n` y contar cuántas veces `mcd(k, n) == 1`.
- **Proceso (eficiente):** Usar la fórmula basada en los factores primos de `n`: $\phi(n) = n \prod_{p|n, p \text{ es primo}} (1 - \frac{1}{p})$. definición interna oculta en el archivo `.c`. para copiar la estructura de forma segura.
- Modularizar la descomposición en factores primos para calcular phi(n) mediante la fórmula de Euler.
- Verificar que para un número primo p, phi(p) sea exactamente p - 1.
:::
