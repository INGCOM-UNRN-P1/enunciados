Implementá la función:
- `int fibonacci(int n);` — Retorna el n-ésimo número de la sucesión de Fibonacci.

Convención:
- `fibonacci(0) = 0`
- `fibonacci(1) = 1`
- `fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2)` para `n >= 2`.

**Orientación:**
- Podés implementarla de forma iterativa o recursiva. Para valores moderados (`n > 40`), la solución iterativa es considerablemente más eficiente.
- La función no debe contener llamadas a `printf` ni `scanf` (Regla 0x2002h).


---
(ejercicio_5_13)=

### 📋 Contrato de las Funciones

```c
/*
 * Calcula n-esimo termino de Fibonacci
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int fibonacci(int n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
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
