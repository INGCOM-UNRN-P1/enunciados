### Ejercicio 20.44 - Estados de transacción ⭐⭐⭐☆☆

Modelar el ciclo de vida de una transacción.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum estado_transaccion
{
    TX_INICIADA,
    TX_ACTIVA,
    TX_PREPARADA,
    TX_COMPROMETIDA,
    TX_ABORTADA
};
enum tipo_aislamiento
{
    AISLAMIENTO_READ_UNCOMMITTED,
    AISLAMIENTO_READ_COMMITTED,
    AISLAMIENTO_REPEATABLE_READ,
    AISLAMIENTO_SERIALIZABLE
};
typedef struct
{
    unsigned long id;
    enum estado_transaccion estado;
    enum tipo_aislamiento aislamiento;
    int num_operaciones;
} transaccion_t;
```
<!-- {code-block} c -->
