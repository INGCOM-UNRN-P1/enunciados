### Ejercicio 20.14 - Tipo de resultado ⭐⭐⭐☆☆

Implementar un tipo `resultado_t` que encapsule un valor de retorno o un código
de error usando unión etiquetada.


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
    enum codigo_error error;
    union
    {
        int valor_int;
        double valor_double;
        void *valor_ptr;
    } datos;
} resultado_t;
```
<!-- {code-block} c -->

Implementar funciones auxiliares:

``` c
resultado_t resultado_ok_int(int valor);
resultado_t resultado_error(enum codigo_error error);
bool resultado_es_error(const resultado_t *resultado);
```
<!-- c -->

## Estados de Reproducción Multimedia

Modelar un reproductor multimedia con estados y modos de reproducción.

```{code-block} c
:linenos:
enum estado_reproductor
{
    ESTADO_DETENIDO,
    ESTADO_REPRODUCIENDO,
    ESTADO_PAUSADO,
    ESTADO_AVANZANDO,
    ESTADO_RETROCEDIENDO
};
enum modo_reproduccion
{
    MODO_NORMAL,
    MODO_REPETIR_UNO,
    MODO_REPETIR_TODOS,
    MODO_ALEATORIO
};
```
<!-- {code-block} c -->
