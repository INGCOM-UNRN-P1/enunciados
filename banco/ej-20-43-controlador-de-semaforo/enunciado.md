### Ejercicio 20.43 - Controlador de semáforo ⭐⭐☆☆☆

Implementar la lógica de transición de un semáforo.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void actualizar_semaforo(semaforo_t *semaforo);
enum estado_semaforo siguiente_estado(enum estado_semaforo actual);
bool puede_pasar(const semaforo_t *semaforo, enum direccion_trafico direccion);
```
<!-- c -->

## Transacciones de Base de Datos
