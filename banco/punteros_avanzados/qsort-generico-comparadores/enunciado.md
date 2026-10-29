# Pipeline de Ordenamiento Genérico con Punteros a Función

## 1. Consigna
Implementar un sistema de ordenamiento para un registro de estudiantes utilizando la función estándar `qsort` de `<stdlib.h>` y múltiples funciones de comparación pasadas dinámicamente mediante punteros a función.

Estructura de cada estudiante:
- `id` (entero)
- `nombre` (cadena de hasta 32 caracteres)
- `promedio` (flotante)

Comandos:
- `CARGAR <N>`: Lee $N$ registros de estudiantes.
- `SORT_PROMEDIO_DESC`: Ordena por promedio de mayor a menor. En caso de empate, por ID ascendente.
- `SORT_NOMBRE_ASC`: Ordena alfabéticamente por nombre. En empate, por promedio descendente.
- `SORT_ID_ASC`: Ordena por ID ascendente.
- `SHOW`: Imprime todos los estudiantes formateados como `ID: <id> | <nombre> | <promedio:.2f>`.
- `EXIT`: Termina.
