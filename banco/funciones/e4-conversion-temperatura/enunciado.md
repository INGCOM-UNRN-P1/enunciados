- **Módulo:** `ejercicios/ejercicio9/ejercicio9.h` /
  `ejercicios/ejercicio9/ejercicio9.c`
- **Operaciones a implementar:**
  1. `float celsius_a_fahrenheit(float grados_celsius);`: Convierte una
     temperatura en grados Celsius a su equivalente en grados Fahrenheit.
  2. `float fahrenheit_a_celsius(float grados_fahrenheit);`: Convierte una
     temperatura en grados Fahrenheit a su equivalente en grados Celsius.
  3. `float celsius_a_kelvin(float grados_celsius);`: Convierte una temperatura
     en grados Celsius a su equivalente en grados Kelvin. Si la temperatura está
     por debajo del cero absoluto (-273.15 grados Celsius), retorna `-1.0f`.

### 📋 Contrato de las Funciones

```c
/*
 * Convierte grados Celsius a grados Fahrenheit (F = C * 9/5 + 32).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float celsius_a_fahrenheit(float celsius);

/*
 * Convierte grados Fahrenheit a grados Celsius (C = (F - 32) * 5/9).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float fahrenheit_a_celsius(float fahrenheit);

/*
 * Convierte grados Celsius a Kelvin (K = C + 273.15).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float celsius_a_kelvin(float celsius);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
