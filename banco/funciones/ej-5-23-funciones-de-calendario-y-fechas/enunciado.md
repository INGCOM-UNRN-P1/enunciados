# Funciones de Calendario y Fechas

## Ejercicio 5.23 - Funciones de Calendario y Fechas ⭐⭐⭐⭐⭐

Implementá funciones modulares para operaciones con fechas representadas mediante sus componentes (`dia`, `mes`, `anio`):
- `bool es_fecha_valida(int dia, int mes, int anio)`: valida si una terna corresponde a una fecha real del calendario gregoriano.
- `int dias_transcurridos(int d1, int m1, int a1, int d2, int m2, int a2)`: calcula la cantidad de días entre dos fechas válidas.
- `int dia_de_semana(int dia, int mes, int anio)`: retorna el día de la semana (0=Domingo, 1=Lunes, ..., 6=Sábado) aplicando la congruencia de Zeller.

**Orientación:**
- Modularizá el cálculo de año bisiesto en una función auxiliar `bool es_bisiesto(int anio)`
- Validá las precondiciones de cada función antes de calcular


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Validar que las fechas sean válidas antes de calcular diferencias.
-   **[*plus ultra*]:** Escribir pruebas unitarias con assert() para fechas históricas y bisiestos.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_24)=