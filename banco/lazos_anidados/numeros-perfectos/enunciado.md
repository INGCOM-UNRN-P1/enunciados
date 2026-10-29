**Dificultad:** ⭐⭐⭐⭐☆

Escribir un programa que encuentre y muestre todos los números perfectos menores o iguales a un valor $N$ ingresado por el usuario.
Un número entero positivo es **perfecto** si la suma de todos sus divisores positivos (excluyendo al propio número) es igual a dicho número. Por ejemplo, $6$ es perfecto porque sus divisores propios son $1, 2, 3$ y $1 + 2 + 3 = 6$.

## Entrada
Un número entero positivo $N$.

## Salida
Lista de números perfectos encontrados en el rango $[1, N]$.

### Ejemplo
- **Entrada:** `30`
- **Salida:** `6 28`

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Números Perfectos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_numeros_perfectos(int val);

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
- Un número es perfecto si la suma de sus divisores propios (desde 1 hasta N/2) es igual a sí mismo.
- Utilizá un lazo externo para iterar los candidatos y un lazo interno para acumular los divisores.
:::
