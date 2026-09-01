### Ejercicio 20.4 - Máquina de estados ⭐⭐⭐☆☆

Implementar una función que procese transiciones de estado. La función debe
recibir el estado actual y un evento, y retornar el nuevo estado según las
reglas de transición.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum evento_red
{
    EVENTO_CONECTAR,
    EVENTO_DESCONECTAR,
    EVENTO_TIMEOUT,
    EVENTO_ERROR
};
enum estado_red procesar_evento(enum estado_red estado,
                                enum evento_red evento);
```
<!-- {code-block} c -->

**Reglas de transición sugeridas:**
- `DESCONECTADO` + `EVENTO_CONECTAR` → `CONECTANDO`
- `CONECTANDO` + `EVENTO_TIMEOUT` → `ERROR_TIMEOUT`
- `CONECTANDO` + `EVENTO_ERROR` → `ERROR_AUTH`
- `CONECTADO` + `EVENTO_DESCONECTAR` → `DESCONECTANDO`
- `DESCONECTANDO` + transición completa → `DESCONECTADO`
