Implementá dos versiones de la función factorial:
- `int factorial_iterativo(int n);`
- `int factorial_recursivo(int n);`

**Orientación:**
- Iterativo: usá un lazo `for` o `while` acumulando el producto.
- Recursivo: `n * factorial_recursivo(n - 1)`, con caso base `n <= 1` retornando `1`.
- Si `n < 0`, retornar `-1` como código de error.


---
(ejercicio_5_9)=

### 📋 Contrato de las Funciones

```c
/*
 * Factorial iterativo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int factorial_iterativo(int n);

/*
 * Factorial recursivo
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int factorial_recursivo(int n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 120
```
:::
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 120
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
