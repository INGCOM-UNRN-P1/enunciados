### Ejercicio 15.6 - b.6 - Pool de Memoria Simple ⭐☆☆☆☆

Implementar un pool de memoria básico que preasigne un bloque grande y
distribuya bloques pequeños de tamaño fijo desde él.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef struct
{
    void *bloque_base;
    size_t tamano_total;
    size_t tamano_bloque;
    size_t bloques_usados;
    bool *mapa_uso;
} pool_t;
pool_t *pool_crear(size_t n_bloques, size_t tamano_bloque);
void *pool_alojar(pool_t *pool);
void pool_liberar(pool_t *pool, void *ptr);
void pool_destruir(pool_t *pool);
```
<!-- {code-block} c -->

**Ventaja:** Reduce la fragmentación y overhead de múltiples `malloc`/`free`.

## Errores Comunes y Detección
