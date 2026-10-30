Conversor interactivo de escalas termométricas.

- `conversor.h` / `conversor.c`: Funciones puras `celsius_a_fahrenheit(float)` y
  `fahrenheit_a_celsius(float)`.
- `main.c`: Menú interactivo con validación de opciones y repetición con
  `leer_logico`.

### 📋 Contrato de las Funciones

```c
/*
 * Convierte una temperatura en grados Celsius a grados Fahrenheit.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float celsius_a_fahrenheit(float celsius);

/*
 * Convierte una temperatura en grados Fahrenheit a grados Celsius.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
float fahrenheit_a_celsius(float fahrenheit);

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

:::{hint} Consideraciones Didácticas
- Recordá la fórmula de conversión: F = C * (9.0 / 5.0) + 32.0 y C = (F - 32.0) * (5.0 / 9.0).
- Cuidá la división entera en C: 9 / 5 trunca a 1; usá literales float como 9.0f / 5.0f.
- Para formatear números flotantes a dos decimales con printf usá %.2f.
:::
