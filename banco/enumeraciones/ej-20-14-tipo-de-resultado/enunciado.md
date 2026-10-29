Implementar un tipo `resultado_t` que encapsule un valor de retorno o un código
de error usando unión etiquetada.



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

Implementar funciones auxiliares:

``` c
resultado_t resultado_ok_int(int valor);
resultado_t resultado_error(enum codigo_error error);
bool resultado_es_error(const resultado_t *resultado);
```

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

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Tipo de resultado
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_14_tipo_de_resultado(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
