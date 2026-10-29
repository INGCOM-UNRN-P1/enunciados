**Dificultad:** ⭐⭐⭐☆☆

Escribir un programa que solicite al usuario un número entero en el rango $[1, 100]$. Si el valor ingresado se encuentra fuera de rango, debe volver a pedirlo reiteradamente hasta que se ingrese un valor válido.

## Entrada
Una secuencia de números enteros hasta que se ingrese uno en el intervalo $[1, 100]$.

## Salida
Mensaje indicando error o reintento ante valores inválidos, y mensaje final de confirmación/éxito con el valor válido aceptado.

### Ejemplo
- **Entrada:**
  ```text
  -5
  120
  42
  ```
- **Salida:** Acepta el valor `42` y finaliza.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Validación de Entrada
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_validacion_entrada(int val);

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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Implementá un lazo while con una variable booleana de control (stdbool.h).
- Reiterá la solicitud hasta que el valor pertenezca al rango [1, 100].
:::
