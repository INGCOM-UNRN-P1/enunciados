**Dificultad:** ⭐☆☆☆☆

Escribir un programa que lea un número natural $N$ por entrada estándar y calcule la suma de los primeros $N$ números naturales ($1 + 2 + \dots + N$).

## Entrada
Un número entero positivo $N$.

## Salida
El resultado de la suma acumulada de los primeros $N$ números naturales.

### Ejemplo
- **Entrada:** `5`
- **Salida:** `15`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Suma de N Números
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_suma_n_numeros(int val);

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
- Verificá que N sea un número positivo (N > 0).
- Acumulá la suma de 1 hasta N mediante un lazo for.
:::
