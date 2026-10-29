Implementá funciones modulares y puras de validación que reciban valores por parámetro y retornen un resultado booleano (`true` o `false` según `<stdbool.h>`):

- `bool validar_rango(int valor, int min, int max);` — Valida si `valor` se encuentra dentro del rango `[min, max]` (inclusivo).
- `bool validar_positivo(double valor);` — Valida si `valor` es estrictamente mayor que cero (`valor > 0.0`).

**Orientación:**
- Las funciones deben ser puras (sin llamadas a `printf` ni `scanf`, respetando la Regla 0x2002h).
- Incluí `<stdbool.h>` para utilizar el tipo `bool` y las constantes `true` y `false`.
- Podés probar su funcionamiento desde `main()` mediante aserciones con `assert()`.


---
(ejercicio_5_11)=

### 📋 Contrato de las Funciones

```c
/*
 * Valida si valor esta dentro de min y max
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
bool validar_rango(int valor, int min, int max);

/*
 * Valida si valor es mayor a 0
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
bool validar_positivo(double valor);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
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
