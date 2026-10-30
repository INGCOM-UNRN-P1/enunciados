Validador de fechas del calendario gregoriano y cómputo de años bisiestos.

- `fecha.h` / `fecha.c`: Funciones `es_bisiesto(int)`, `dias_en_mes(int, int)` y
  `es_fecha_valida(int, int, int)`.
- `main.c`: Solicita año, mes y día mediante funciones de rango, informando
  validez y condición de bisiesto.

### 📋 Contrato de las Funciones

```c
/*
 * Determina si un año dado es bisiesto según el calendario gregoriano.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_bisiesto(int anio);

/*
 * Obtiene la cantidad de días que contiene un mes determinado en un año dado.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int dias_en_mes(int mes, int anio);

/*
 * Valida si una combinación de día, mes y año representa una fecha válida.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_fecha_valida(int dia, int mes, int anio);

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
- Un año bisiesto gregoriano es divisible por 4 y no por 100, excepto que sea divisible por 400.
- Meses con 31 días: 1, 3, 5, 7, 8, 10 y 12. Meses con 30 días: 4, 6, 9 y 11.
- Febrero tiene 29 días en año bisiesto y 28 en año común. Fuera de 1..12 la fecha es inválida.
:::
