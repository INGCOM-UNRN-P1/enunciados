### Ejercicio 20.39 - Planificador simple ⭐☆☆☆☆

Implementar funciones de transición de estado para un planificador.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
bool transicion_estado(proceso_t *proceso, enum estado_proceso nuevo_estado);
bool puede_ejecutar(const proceso_t *proceso);
```
<!-- c -->

## Protocolo HTTP
