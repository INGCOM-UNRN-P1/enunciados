# Validador de Fechas

## Ejercicio 5.21 - Validador de Fechas ⭐⭐⭐⭐☆

Implementá funciones para trabajar con fechas:
- `bool es_fecha_valida(int dia, int mes, int anio)`
- `int dias_del_mes(int mes, int anio)`
- `bool es_bisiesto(int anio)`
- `int dia_del_anio(int dia, int mes, int anio)`

**Orientación:**
- Reutilizá funciones entre sí
- Validá rangos apropiados
- `dia_del_anio` suma días desde inicio del año


:::{hint} Lógica y Consideraciones
    error e informar el resultado mediante parámetros de salida.
    especificando precondiciones y postcondiciones.

-   **[*plus ultra*]:** Modularizar la función reutilizando es_bisiesto y dias_del_mes.
-   **[*plus ultra*]:** Escribir pruebas unitarias exhaustivas para fechas límites (ej. 29 de febrero en años bisiestos y no bisiestos).

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_22)=