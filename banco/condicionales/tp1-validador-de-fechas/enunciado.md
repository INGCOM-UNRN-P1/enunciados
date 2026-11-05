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

### Casos de referencia

- `es_bisiesto(2000)` retorna `true`; `es_bisiesto(1900)` retorna `false`.
- `dias_en_mes(2, 2024)` retorna `29`; `dias_en_mes(13, 2024)` retorna `0`.
- `es_fecha_valida(29, 2, 2024)` retorna `true`; `es_fecha_valida(29, 2, 2023)` retorna `false`.

Las funciones reciben año, mes y día como enteros; no se requiere implementar un programa interactivo.

:::{hint} Consideraciones Didácticas
- Un año bisiesto gregoriano es divisible por 4 y no por 100, excepto que sea divisible por 400.
- Meses con 31 días: 1, 3, 5, 7, 8, 10 y 12. Meses con 30 días: 4, 6, 9 y 11.
- Febrero tiene 29 días en año bisiesto y 28 en año común. Fuera de 1..12 la fecha es inválida.
:::
