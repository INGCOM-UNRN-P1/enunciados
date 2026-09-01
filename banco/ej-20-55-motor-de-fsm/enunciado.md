### Ejercicio 20.55 - Motor de FSM ⭐⭐☆☆☆

Implementar el motor que procesa eventos y ejecuta transiciones.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void fsm_inicializar(maquina_estados_t *fsm, estado_fsm_t inicial);
bool fsm_agregar_transicion(maquina_estados_t *fsm, transicion_t trans);
bool fsm_procesar_evento(maquina_estados_t *fsm, evento_fsm_t evento);
estado_fsm_t fsm_estado_actual(const maquina_estados_t *fsm);
```
<!-- c -->

## Análisis Comparativo de Enums
