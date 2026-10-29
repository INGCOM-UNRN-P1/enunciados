Modelar diferentes formatos de imagen y sus propiedades.



```{code-block} c
:linenos:
enum formato_imagen
{
    FORMATO_JPEG,
    FORMATO_PNG,
    FORMATO_GIF,
    FORMATO_BMP,
    FORMATO_WEBP,
    FORMATO_TIFF,
    FORMATO_SVG
};
enum modo_color
{
    COLOR_ESCALA_GRISES,
    COLOR_RGB,
    COLOR_RGBA,
    COLOR_CMYK,
    COLOR_INDEXADO
};
typedef struct
{
    enum formato_imagen formato;
    enum modo_color modo;
    int ancho;
    int alto;
    int profundidad_bits;
    bool tiene_transparencia;
    bool es_animado;
} metadata_imagen_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Tipos y formatos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__48_tipos_y_formatos(int val);

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
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
