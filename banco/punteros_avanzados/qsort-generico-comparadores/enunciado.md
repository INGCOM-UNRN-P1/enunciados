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

### 📋 Contrato de las Funciones

```c
/*
 * Operación cmp_promedio_desc
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int cmp_promedio_desc(const void *a, const void *b);

/*
 * Operación cmp_nombre_asc
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int cmp_nombre_asc(const void *a, const void *b);

/*
 * Operación cmp_id_asc
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int cmp_id_asc(const void *a, const void *b);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- La firma canónica de comparación es `int comparador(const void *a, const void *b)`.
- Casteá los punteros opacos `const void *` a punteros de la estructura correspondiente.
- Para cadenas usá `strcmp()`, y para valores de punto flotante evaluá diferencias con cuidado de signo.
:::
