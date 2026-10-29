**Dificultad:** ⭐⭐⭐☆☆

Escribir un programa que genere y muestre los primeros $N$ términos de la secuencia de Fibonacci de forma iterativa.
La secuencia comienza en $t_0 = 0$ y $t_1 = 1$, y los términos siguientes son la suma de los dos anteriores: $t_n = t_{n-1} + t_{n-2}$.

## Entrada
Un número entero positivo $N$ (cantidad de términos a generar).

## Salida
Los primeros $N$ términos de la serie separados por espacios o saltos de línea.

### Ejemplo
- **Entrada:** `6`
- **Salida:** `0 1 1 2 3 5`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Secuencia de Fibonacci
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_secuencia_fibonacci(int val);

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
- Inicializá los primeros dos términos: t0 = 0 y t1 = 1.
- En cada paso, calculá el siguiente término t0 + t1, imprimilo y desplazá las variables.
:::
