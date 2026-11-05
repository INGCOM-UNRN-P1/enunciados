# Validador de fechas

Implementá las siguientes funciones para fechas del calendario gregoriano:

```c
#include <stdbool.h>
bool es_bisiesto(int anio);
int dias_del_mes(int mes, int anio);
bool es_fecha_valida(int dia, int mes, int anio);
int dia_del_anio(int dia, int mes, int anio);
```

Los años válidos son positivos y los meses van de 1 a 12. Un año es bisiesto
si es divisible por 400, o si es divisible por 4 y no por 100. `dias_del_mes`
devuelve 0 ante mes o año inválido; `es_bisiesto` devuelve falso ante año
inválido. `es_fecha_valida` comprueba todos los componentes. `dia_del_anio`
devuelve la posición desde el 1 de enero (1 a 365 o 366), o 0 si la fecha es
inválida.

Por ejemplo, el 1 de marzo de 2024 es el día 61, y el 29 de febrero de 1900
no es una fecha válida. Reutilizá las funciones entre sí.
