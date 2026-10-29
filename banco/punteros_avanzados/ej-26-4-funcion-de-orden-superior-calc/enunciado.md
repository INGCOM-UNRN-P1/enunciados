Escribir una función `int calculadora(int a, int b, operacion_aritmetica_t
operacion)` que reciba dos números y un puntero a una función de operación. La
función `calculadora` debe invocar la función pasada como argumento y devolver
su resultado.

**Lógica y Consideraciones:**
- **Invocación**: Dentro de `calculadora`, se llama a la función a través del
  puntero: `return operacion(a, b);`.
- **Uso**: En `main`, se pueden definir funciones `sumar(int, int)` y
  `restar(int, int)` y pasarlas a `calculadora`.
  - `calculadora(10, 5, sumar);` // Devuelve 15
  - `calculadora(10, 5, restar);` // Devuelve 5

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Función de Orden Superior (Calculadora)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__orden_superior_calc(int val);

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
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
