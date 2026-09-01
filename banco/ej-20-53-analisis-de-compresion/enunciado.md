### Ejercicio 20.53 - Análisis de compresión ⭐⭐☆☆☆

Implementar funciones para analizar rendimiento de compresión.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double calcular_ratio(const resultado_compresion_t *resultado);
double porcentaje_ahorro(const resultado_compresion_t *resultado);
bool es_algoritmo_rapido(enum algoritmo_compresion alg);
const char *nombre_algoritmo(enum algoritmo_compresion alg);
```
<!-- c -->

## Máquina de Estados Finita Genérica
