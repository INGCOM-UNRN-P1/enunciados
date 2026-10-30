Implementar el módulo [`sensor_flujo.h`](ejercicios/ejercicio1/sensor_flujo.h) para procesar secuencias continuas de mediciones tomadas por sensores de campo:

- `bool cargar_muestras(arreglo_dinamico_t *muestras, const int *valores, size_t n);`  
  Carga un lote de `n` mediciones en el arreglo dinámico `muestras`.
- `double calcular_promedio(const arreglo_dinamico_t *muestras);`  
  Calcula el promedio aritmético de las muestras registradas. Retorna `0.0` si no hay lecturas o el puntero es nulo.
- `size_t depurar_lecturas_erroneas(arreglo_dinamico_t *muestras, int codigo_error);`  
  Elimina todas las lecturas centinela que coincidan con `codigo_error` (por ejemplo `-999` por falla de sonda) compactando el arreglo con `arreglo_dinamico_compactar`.
- `bool extraer_eventos_pares(const arreglo_dinamico_t *muestras, arreglo_dinamico_t *eventos);`  
  Extrae a un nuevo arreglo dinámico `eventos` todas las lecturas de telemetría de valor par mediante `arreglo_dinamico_filtrar_pares`.

Usa la biblioteca del ejercicio `tp5-libdinamicos`.

### 📋 Contrato de las Funciones

```c
bool cargar_muestras(arreglo_dinamico_t *muestras, const int *valores, size_t n);

double calcular_promedio(const arreglo_dinamico_t *muestras);

size_t depurar_lecturas_erroneas(arreglo_dinamico_t *muestras, int codigo_error);

bool extraer_eventos_pares(const arreglo_dinamico_t *muestras, arreglo_dinamico_t *eventos);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
